import codecs
from OpenGL.GLUT import *
from OpenGL.GLU import *
from OpenGL.GL import *

class Vec2:
    def __init__(self, x, y):
        self.x = x
        self.y = y


class Vec4:
    def __init__(self, x, y, w, z):
        self.x = x
        self.y = y
        self.w = w
        self.z = z


# ---------------------------------MEGADRIVE ABSTRACT

class VMD:
    def __init__(self):
        self.pixels = [Vec2(0, 0)]
        self.lines = [Vec4(0, 0, 0, 0)]

    def reset_pixels(self):
        self.pixels = [Vec2(0, 0)]

    def add_pixel(self, x, y):
        self.pixels.append(Vec2(x, y))

    def add_line(self, x, y, w, z):
        self.lines.append(Vec4(x, y, w, z))

    @staticmethod
    def get_xres():
        return 320

    @staticmethod
    def get_yres():
        return 224

# ---------------------------------GL

def reshape(width, height):
    glViewport(0, 0, width, height)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluPerspective(45, width / height, 0.1, 100)
    glMatrixMode(GL_MODELVIEW)


def draw():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glViewport(0, 0, VMD.get_xres(), VMD.get_yres())
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluOrtho2D(0.0, VMD.get_xres(), VMD.get_yres(), 0.0)
    glMatrixMode(GL_MODELVIEW)
    glLoadIdentity()

    # draw pixels
    for pixel in VMD.pixels:
        draw_pixel(pixel.x, pixel.y)

    # draw lines
    for line in VMD.lines:
        draw_line(line.x, line.y, line.w, line.z)

    glutSwapBuffers()
    glutPostRedisplay()


def draw_pixel(x, y):
    glBegin(GL_POINTS)
    glVertex2i(x, y)
    glEnd()


def draw_line(x, y, w, z):
    glBegin(GL_LINES)
    glVertex2i(x, y)
    glVertex2i(w, z)
    glEnd()


def render():
    glutInit()
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH)
    glutInitWindowSize(VMD.get_xres(), VMD.get_yres())
    windowname = glutCreateWindow("BITMAP MODE")
    glutReshapeFunc(reshape)
    glutDisplayFunc(draw)
    glutMainLoop()


# -------------------------------------- SGDK ABSTRACT

class SGDK():
    def __init__(self):
        self.mainc = codecs.open("main.c", "w")
        self.mainc.write("#include <genesis.h>\n")
        self.TRUE = 'TRUE'
        self.FALSE = 'FALSE'

    def c(self, code):
        self.mainc.write(code + "\n")

    def VDP_setScreenWidth256(self):
        SGDK.c('VDP_setScreenWidth256();')


    def VDP_setPalette(self, num, pal):
        SGDK.c('VDP_setPalette(' + str(num) + ', ' + pal + ');')


    def BMP_setPixel(self, x, y, col):
        SGDK.c('BMP_setPixel(' + str(x) + ',' + str(y) + ',' + str(col) + ');')
        VMD.add_pixel(x, y)

    def BMP_drawLine(self, line):
        SGDK.c('Line l;')
        SGDK.c('Vect2D_s16 start, end;')
        SGDK.c('start.x = ' + str(line.x) + ';')
        SGDK.c('start.y = ' + str(line.y) + ';')
        SGDK.c('end.x = ' + str(line.w) + ';')
        SGDK.c('end.y = ' + str(line.z) + ';')
        SGDK.c('l.pt1 = start;')
        SGDK.c('l.pt2 = end;')
        SGDK.c('l.col = 0xFF;')
        SGDK.c('BMP_drawLine(&l);')
        VMD.add_line(line.x, line.y, line.w, line.z)

    def sinFix16(self, value):
        SGDK.c('sinFix16(' + str(value) + ')')

    def BMP_clear(self):
        SGDK.c('BMP_clear();')

    def BMP_init(self, double_buffer, palette, priority):
        SGDK.c('BMP_init(' + str(double_buffer) + ',' + str(palette) + ',' + str(priority) + ');')

    def BMP_flip(self, async):
        SGDK.c('BMP_flip(' + str(async) + ');')

    def BMP_waitFlipComplete(self):
        SGDK.c('BMP_waitFlipComplete();')


# ------------------------------------------- MAIN

def main():
    palette_green = 'palette_green'

    SGDK.c('int main(){')
    SGDK.BMP_clear()
    SGDK.VDP_setScreenWidth256()
    SGDK.VDP_setPalette(0, palette_green)
    SGDK.BMP_init(TRUE, 0, FALSE)

    SGDK.c('while(1){')
    SGDK.BMP_setPixel(10, 10, 0xFF)
    SGDK.BMP_setPixel(20, 10, 0xFF)
    SGDK.BMP_setPixel(30, 10, 0xFF)

    l = Vec4(50, 50, 100, 100)
    SGDK.BMP_drawLine(l)
    SGDK.BMP_flip(1);
    SGDK.BMP_waitFlipComplete()
    SGDK.c('}')
    SGDK.c('}')
    render()
# ---------------------------ENTRY

VMD = VMD()
SGDK = SGDK()
TRUE = SGDK.TRUE
FALSE = SGDK.FALSE
main()
