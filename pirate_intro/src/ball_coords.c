#include "genesis.h"

/* geosphere.obj */
/* List of vertices */
const Vect3D_f16 vb_geosphere_vertex_pos[20] =
{
	{FIX16(5.257310668825037),	FIX16(-0.0),	FIX16(-8.506508124984927)},
	{FIX16(1.6245982298166084),	FIX16(-4.999999780537153),	FIX16(-8.506508124984927)},
	{FIX16(-4.253254062494136),	FIX16(-3.0901693531885797),	FIX16(-8.506508124984927)},
	{FIX16(-4.253253663882129),	FIX16(3.0901703497119115),	FIX16(-8.506508124984927)},
	{FIX16(1.62459912668861),	FIX16(4.999999381928489),	FIX16(-8.506508124984927)},
	{FIX16(4.253253663882129),	FIX16(-3.09016955249124),	FIX16(8.506508124984927)},
	{FIX16(-1.6245985287739422),	FIX16(-4.999999381928489),	FIX16(8.506508124984927)},
	{FIX16(-5.257310668825037),	FIX16(4.596092414484867e-07),	FIX16(8.506508124984927)},
	{FIX16(-1.6245966353786092),	FIX16(4.999999780537153),	FIX16(8.506508124984927)},
	{FIX16(4.253253663882129),	FIX16(3.0901701504059074),	FIX16(8.506508124984927)},
	{FIX16(9.043104453358309),	FIX16(-0.0),	FIX16(-3.3159434432191466)},
	{FIX16(2.7944727559424187),	FIX16(-8.600504262317902),	FIX16(-3.3159434432191466)},
	{FIX16(-7.316026178450907),	FIX16(-5.315402840773056),	FIX16(-3.3159434432191466)},
	{FIX16(-7.316025381233581),	FIX16(5.315404833819719),	FIX16(-3.3159434432191466)},
	{FIX16(2.7944743503804177),	FIX16(8.600503465100575),	FIX16(-3.3159434432191466)},
	{FIX16(7.316025381233581),	FIX16(-5.31540323938172),	FIX16(3.3159434432191466)},
	{FIX16(-2.794473353857086),	FIX16(-8.600503465100575),	FIX16(3.3159434432191466)},
	{FIX16(-9.043104453358309),	FIX16(7.905732369474956e-07),	FIX16(3.3159434432191466)},
	{FIX16(-2.7944701649810875),	FIX16(8.600504262317902),	FIX16(3.3159434432191466)},
	{FIX16(7.316025381233581),	FIX16(5.315404435211055),	FIX16(3.3159434432191466)},
};
/* grid_cube.obj */
/* List of vertices */
const Vect3D_f16 vb_grid_cube_vertex_pos[20] =
{
	{FIX16(7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(7.071067811865474)},
	{FIX16(-7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(7.071067811865474)},
	{FIX16(7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(-7.071067811865474)},
	{FIX16(-7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(-7.071067811865474)},
	{FIX16(7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(-2.1073196292921487e-07),	FIX16(7.071067811865474)},
	{FIX16(-7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(-2.1073196292921487e-07),	FIX16(-7.071067811865474)},
	{FIX16(7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(3.535533905932737)},
	{FIX16(3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(7.071067811865474)},
	{FIX16(-3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(7.071067811865474)},
	{FIX16(-7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(3.535533905932737)},
	{FIX16(-7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(-3.535533905932737)},
	{FIX16(-3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(-7.071067811865474)},
	{FIX16(3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(-7.071067811865474)},
	{FIX16(7.071067811865474),	FIX16(-2.1073196292921487e-07),	FIX16(-3.535533905932737)},
	{FIX16(3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(3.535533905932737)},
	{FIX16(-3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(3.535533905932737)},
	{FIX16(-3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(-3.535533905932737)},
	{FIX16(3.535533905932737),	FIX16(-2.1073196292921487e-07),	FIX16(-3.535533905932737)},
};
/* grid_cube_small.obj */
/* List of vertices */
const Vect3D_f16 vb_grid_cube_small_vertex_pos[20] =
{
	{FIX16(-5.900219083928085),	FIX16(-5.511336103603647),	FIX16(-5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(5.511336455280305),	FIX16(-5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(-0.02985819879262088),	FIX16(-5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(-5.511336103603647),	FIX16(5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(-5.511336103603647),	FIX16(-5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(5.511336455280305),	FIX16(-5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(5.511336455280305),	FIX16(5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(-0.02985819879262088),	FIX16(5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(-0.02985819879262088),	FIX16(-5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(-5.511336103603647),	FIX16(5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(5.511336455280305),	FIX16(5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(-0.02985819879262088),	FIX16(5.900219083928085)},
	{FIX16(0.0),	FIX16(-5.511336103603647),	FIX16(5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(-5.511336103603647),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(-5.511336103603647),	FIX16(-5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(-5.511336103603647),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(5.511336455280305),	FIX16(-5.900219083928085)},
	{FIX16(-5.900219083928085),	FIX16(5.511336455280305),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(5.511336455280305),	FIX16(5.900219083928085)},
	{FIX16(5.900219083928085),	FIX16(5.511336455280305),	FIX16(-0.0)},
};
/* sword.obj */
/* List of vertices */
const Vect3D_f16 vb_sword_vertex_pos[20] =
{
	{FIX16(-7.308544306715307),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(-4.872363192870823),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(-2.4361818377308446),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(-4.825908656867431e-07),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(2.436180872549113),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(4.872362227689092),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(-8.71467471847803),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(-6.278493122042555),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(-3.842312008198073),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(-1.406130532410409),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(1.0300507020818852),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(3.466232298517234),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(-3.8676415154336556),	FIX16(4.53064781594671),	FIX16(-0.0)},
	{FIX16(-3.8330636362041246),	FIX16(2.1341243331376947),	FIX16(-0.0)},
	{FIX16(-3.7914968755709144),	FIX16(-2.0184897625768885),	FIX16(-0.0)},
	{FIX16(-3.8260747548005716),	FIX16(0.3780335995843163),	FIX16(-0.0)},
	{FIX16(6.07781638320883),	FIX16(1.2507852458151152),	FIX16(-0.0)},
	{FIX16(7.483946312380562),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(9.920127908816037),	FIX16(1.261373169497888),	FIX16(-0.0)},
	{FIX16(8.513997979644179),	FIX16(1.2507852458151152),	FIX16(-0.0)},
};
