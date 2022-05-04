#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
const sm_core_compiler_Brick * ramadan_2021_5be9147a_1_geometry_0 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Brick
brick = { 400.0 , 0.1 , 100.0 } ; ( void ) rtdv ; return & brick ; } const
sm_core_compiler_Sphere * ramadan_2021_5be9147a_1_geometry_1 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Sphere
sphere = { 1.0e-5 } ; ( void ) rtdv ; return & sphere ; }
