#include "genesis.h"
#include "easing_table.h"

#ifndef TRANSITION_HELPER
#define TRANSITION_HELPER

void RSE_turn_screen_to_white(void);
void RSE_turn_screen_to_black(void);
void RSE_pause(u16 frames);
void RSE_clearTileRow(u16 row);

#endif
