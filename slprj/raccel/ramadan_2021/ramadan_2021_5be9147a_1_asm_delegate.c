#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void ramadan_2021_5be9147a_1_setTargets ( const RuntimeDerivedValuesBundle *
rtdv , CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
ramadan_2021_5be9147a_1_resetAsmStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = 1.0 ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ;
state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ] ;
state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ] ;
state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ] ;
state [ 28 ] = xx [ 0 ] ; } void
ramadan_2021_5be9147a_1_initializeTrackedAngleState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const
double * motionData , double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector
; ( void ) motionData ; } void ramadan_2021_5be9147a_1_computeDiscreteState (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , double * state
) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) state ; } void ramadan_2021_5be9147a_1_adjustPosition ( const void *
mech , const double * dofDeltas , double * state ) { double xx [ 11 ] ; (
void ) mech ; xx [ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] =
state [ 5 ] ; xx [ 3 ] = state [ 6 ] ; xx [ 4 ] = dofDeltas [ 3 ] ; xx [ 5 ]
= dofDeltas [ 4 ] ; xx [ 6 ] = dofDeltas [ 5 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] =
state [ 3 ] + xx [ 7 ] ; xx [ 1 ] = state [ 4 ] + xx [ 8 ] ; xx [ 2 ] = state
[ 5 ] + xx [ 9 ] ; xx [ 3 ] = state [ 6 ] + xx [ 10 ] ; xx [ 4 ] = sqrt ( xx
[ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx [ 2 ] + xx [ 3 ] * xx
[ 3 ] ) ; xx [ 5 ] = 1.0e-64 ; if ( xx [ 5 ] > xx [ 4 ] ) xx [ 4 ] = xx [ 5 ]
; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state [ 1 ] = state [ 1 ] +
dofDeltas [ 1 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 2 ] ; state [ 3 ] =
xx [ 0 ] / xx [ 4 ] ; state [ 4 ] = xx [ 1 ] / xx [ 4 ] ; state [ 5 ] = xx [
2 ] / xx [ 4 ] ; state [ 6 ] = xx [ 3 ] / xx [ 4 ] ; state [ 13 ] = state [
13 ] + dofDeltas [ 6 ] ; state [ 14 ] = state [ 14 ] + dofDeltas [ 7 ] ;
state [ 17 ] = state [ 17 ] + dofDeltas [ 8 ] ; state [ 19 ] = state [ 19 ] +
dofDeltas [ 9 ] ; state [ 21 ] = state [ 21 ] + dofDeltas [ 10 ] ; state [ 22
] = state [ 22 ] + dofDeltas [ 11 ] ; state [ 25 ] = state [ 25 ] + dofDeltas
[ 12 ] ; state [ 27 ] = state [ 27 ] + dofDeltas [ 13 ] ; } static void
perturbAsmJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbAsmJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 7 ]
= state [ 7 ] - 0.875 * mag ; } static void perturbAsmJointPrimitiveState_0_1
( double mag , double * state ) { state [ 1 ] = state [ 1 ] + mag ; } static
void perturbAsmJointPrimitiveState_0_1v ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; state [ 8 ] = state [ 8 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_0_2 ( double mag , double * state )
{ state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_3 ( double mag , double * state ) {
double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [
0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ]
) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx
[ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [
4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] ==
0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5
] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx
[ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [
8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx
[ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [
3 ] = state [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4
) ; state [ 3 ] = xx [ 4 ] ; state [ 4 ] = xx [ 5 ] ; state [ 5 ] = xx [ 6 ]
; state [ 6 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_0_3v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4
] ; xx [ 5 ] = state [ 5 ] ; xx [ 6 ] = state [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 3 ] =
xx [ 7 ] ; state [ 4 ] = xx [ 8 ] ; state [ 5 ] = xx [ 9 ] ; state [ 6 ] = xx
[ 10 ] ; state [ 10 ] = state [ 10 ] + 1.2 * mag ; state [ 11 ] = state [ 11
] - xx [ 2 ] ; state [ 12 ] = state [ 12 ] + 0.9 * mag ; } static void
perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; } static void perturbAsmJointPrimitiveState_1_0v
( double mag , double * state ) { state [ 13 ] = state [ 13 ] + mag ; state [
15 ] = state [ 15 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_1_1 ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; } static void perturbAsmJointPrimitiveState_1_1v
( double mag , double * state ) { state [ 14 ] = state [ 14 ] + mag ; state [
16 ] = state [ 16 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) { state [
17 ] = state [ 17 ] + mag ; } static void perturbAsmJointPrimitiveState_2_0v
( double mag , double * state ) { state [ 17 ] = state [ 17 ] + mag ; state [
18 ] = state [ 18 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; } static void perturbAsmJointPrimitiveState_3_0v
( double mag , double * state ) { state [ 19 ] = state [ 19 ] + mag ; state [
20 ] = state [ 20 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) { state [
21 ] = state [ 21 ] + mag ; } static void perturbAsmJointPrimitiveState_4_0v
( double mag , double * state ) { state [ 21 ] = state [ 21 ] + mag ; state [
23 ] = state [ 23 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_4_1 ( double mag , double * state ) { state [
22 ] = state [ 22 ] + mag ; } static void perturbAsmJointPrimitiveState_4_1v
( double mag , double * state ) { state [ 22 ] = state [ 22 ] + mag ; state [
24 ] = state [ 24 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) { state [
25 ] = state [ 25 ] + mag ; } static void perturbAsmJointPrimitiveState_5_0v
( double mag , double * state ) { state [ 25 ] = state [ 25 ] + mag ; state [
26 ] = state [ 26 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_6_0 ( double mag , double * state ) { state [
27 ] = state [ 27 ] + mag ; } static void perturbAsmJointPrimitiveState_6_0v
( double mag , double * state ) { state [ 27 ] = state [ 27 ] + mag ; state [
28 ] = state [ 28 ] - 0.875 * mag ; } void
ramadan_2021_5be9147a_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbAsmJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbAsmJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbAsmJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbAsmJointPrimitiveState_0_2v ( mag , state ) ; break ; case 6 :
perturbAsmJointPrimitiveState_0_3 ( mag , state ) ; break ; case 7 :
perturbAsmJointPrimitiveState_0_3v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 14 :
perturbAsmJointPrimitiveState_1_1 ( mag , state ) ; break ; case 15 :
perturbAsmJointPrimitiveState_1_1v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 50 :
perturbAsmJointPrimitiveState_4_1 ( mag , state ) ; break ; case 51 :
perturbAsmJointPrimitiveState_4_1v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; } } static void
computePosDofBlendMatrix_0_3 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 2.0 ; xx [
2 ] = xx [ 1 ] * ( state [ 4 ] * state [ 5 ] - state [ 3 ] * state [ 6 ] ) ;
xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = xx [ 1 ] * (
state [ 3 ] * state [ 3 ] + state [ 4 ] * state [ 4 ] ) - xx [ 4 ] ; xx [ 6 ]
= xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] =
xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3
] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5
] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = xx [ 1 ] * ( state [ 4 ] * state
[ 6 ] + state [ 3 ] * state [ 5 ] ) ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ]
* xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx
[ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ]
= xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [
13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7
] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [
1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] =
xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8
] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ]
= xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [
14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] =
xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType ) ] ;
xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx
[ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ;
xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [
15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] =
xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ;
xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5
] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx
[ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ]
; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + ( partialType ) ] ; matrix [ 0
] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3
] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6
] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ; } void
ramadan_2021_5be9147a_1_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { case 3 : computePosDofBlendMatrix_0_3 ( state , partialType ,
matrix ) ; break ; } } static void computeVelDofBlendMatrix_0_3 ( const
double * state , int partialType , double * matrix ) { double xx [ 15 ] ; (
void ) state ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] =
xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ;
xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } void
ramadan_2021_5be9147a_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { case 3 : computeVelDofBlendMatrix_0_3 ( state , partialType ,
matrix ) ; break ; } } static void projectPartiallyTargetedPos_0_3 ( const
double * origState , int partialType , double * state ) { boolean_T bb [ 1 ]
; double xx [ 24 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = state [ 4 ] * state [ 6 ] ;
xx [ 2 ] = state [ 3 ] * state [ 5 ] ; xx [ 3 ] = xx [ 0 ] * ( xx [ 1 ] + xx
[ 2 ] ) ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] , 0.0 ) :
asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 4 ] * origState [ 6 ] ; xx [ 6 ] =
origState [ 3 ] * origState [ 5 ] ; xx [ 7 ] = xx [ 0 ] * ( xx [ 5 ] + xx [ 6
] ) ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] , 0.0 ) : asin (
xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 8
] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 4 ] ; xx [
15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx [ 9 ] = cos (
xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; bb [ 0 ] = ! ( fabs ( xx [ 3 ] )
> xx [ 10 ] ) ; xx [ 3 ] = state [ 4 ] * state [ 5 ] ; xx [ 11 ] = state [ 3
] * state [ 6 ] ; xx [ 12 ] = state [ 3 ] * state [ 3 ] ; xx [ 13 ] = 1.0 ;
xx [ 14 ] = xx [ 0 ] * ( xx [ 12 ] + state [ 4 ] * state [ 4 ] ) - xx [ 13 ]
; xx [ 15 ] = - ( xx [ 0 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [
15 ] == 0.0 && xx [ 14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ;
if ( xx [ 4 ] < 0.0 ) xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15
] = + 1.0 ; else xx [ 15 ] = 0.0 ; xx [ 4 ] = xx [ 0 ] * ( xx [ 12 ] + state
[ 6 ] * state [ 6 ] ) - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 0 ] * ( state [ 5 ]
* state [ 6 ] - state [ 3 ] * state [ 4 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0
&& xx [ 4 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5
; xx [ 17 ] = - ( xx [ 0 ] * ( xx [ 1 ] - xx [ 2 ] ) * xx [ 15 ] ) ; xx [ 18
] = xx [ 0 ] * ( xx [ 3 ] + xx [ 11 ] ) * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ]
== 0.0 && xx [ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 1
] = bb [ 0 ] ? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 2 ] = bb [ 0 ] ? xx [
14 ] : xx [ 15 ] * xx [ 1 ] ; bb [ 0 ] = ! ( fabs ( xx [ 7 ] ) > xx [ 10 ] )
; xx [ 3 ] = origState [ 4 ] * origState [ 5 ] ; xx [ 4 ] = origState [ 3 ] *
origState [ 6 ] ; xx [ 7 ] = origState [ 3 ] * origState [ 3 ] ; xx [ 10 ] =
xx [ 0 ] * ( xx [ 7 ] + origState [ 4 ] * origState [ 4 ] ) - xx [ 13 ] ; xx
[ 11 ] = - ( xx [ 0 ] * ( xx [ 3 ] - xx [ 4 ] ) ) ; xx [ 10 ] = ( xx [ 11 ]
== 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ; if (
xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx [ 8 ] > 0.0 ) xx [ 11 ] = +
1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = xx [ 0 ] * ( xx [ 7 ] + origState [ 6
] * origState [ 6 ] ) - xx [ 13 ] ; xx [ 14 ] = - ( xx [ 0 ] * ( origState [
5 ] * origState [ 6 ] - origState [ 3 ] * origState [ 4 ] ) ) ; xx [ 8 ] = (
xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] )
; xx [ 7 ] = - ( xx [ 0 ] * ( xx [ 5 ] - xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ]
= xx [ 0 ] * ( xx [ 3 ] + xx [ 4 ] ) * xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] ==
0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 7 ] ) ; xx [ 0 ] =
bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [ 7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ]
: xx [ 11 ] * xx [ 0 ] ; xx [ 17 ] = xx [ 2 ] ; xx [ 18 ] = xx [ 2 ] ; xx [
19 ] = xx [ 2 ] ; xx [ 20 ] = xx [ 2 ] ; xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] =
xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 17 + ( partialType ) ] ; xx
[ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = sin ( xx
[ 16 ] ) ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 0 ] ; xx [ 12 ] = xx [ 1 ]
; xx [ 13 ] = xx [ 0 ] ; xx [ 14 ] = xx [ 1 ] ; xx [ 15 ] = xx [ 0 ] ; xx [
16 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 10 + ( partialType ) ] ; xx [ 1 ] = cos (
xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ;
xx [ 6 ] = xx [ 3 ] * xx [ 1 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 3 ] ; xx [ 11 ]
= - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx [ 2 ] ; xx [ 13 ] = xx [ 1 ] *
xx [ 4 ] + xx [ 0 ] * xx [ 2 ] ; xx [ 14 ] = xx [ 6 ] - xx [ 2 ] * xx [ 5 ] *
xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5 ] ) ; xx [ 16 ] = xx [ 4 ] * xx
[ 5 ] - xx [ 6 ] * xx [ 2 ] ; xx [ 17 ] = xx [ 0 ] + xx [ 1 ] * xx [ 2 ] * xx
[ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 1 ] ; pm_math_Quaternion_Matrix3x3Ctor_ra
( xx + 10 , xx + 0 ) ; state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 1 ] ;
state [ 5 ] = xx [ 2 ] ; state [ 6 ] = xx [ 3 ] ; } void
ramadan_2021_5be9147a_1_projectPartiallyTargetedPos ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * origState , int partialType
, double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { case 3 : projectPartiallyTargetedPos_0_3 (
origState , partialType , state ) ; break ; } } void
ramadan_2021_5be9147a_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 121 ] ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = - state [ 3 ] ; xx [ 1 ] = - state
[ 4 ] ; xx [ 2 ] = - state [ 5 ] ; xx [ 3 ] = - state [ 6 ] ; xx [ 4 ] = 0.5
; xx [ 5 ] = xx [ 4 ] * state [ 14 ] ; xx [ 6 ] = cos ( xx [ 5 ] ) ; xx [ 7 ]
= xx [ 4 ] * state [ 13 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 6 ]
* xx [ 8 ] ; xx [ 10 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 8 ] * xx [ 10 ] ;
xx [ 8 ] = cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 8 ] * xx [ 10 ] ; xx [ 11 ] =
xx [ 8 ] * xx [ 6 ] ; xx [ 8 ] = 2.0 ; xx [ 12 ] = 0.16 ; xx [ 13 ] = xx [ 12
] * xx [ 11 ] ; xx [ 14 ] = xx [ 12 ] * xx [ 5 ] ; xx [ 15 ] = xx [ 8 ] * (
xx [ 13 ] * xx [ 9 ] - xx [ 14 ] * xx [ 7 ] ) ; xx [ 16 ] = 0.35 ; xx [ 17 ]
= xx [ 8 ] * ( xx [ 13 ] * xx [ 11 ] + xx [ 14 ] * xx [ 5 ] ) - xx [ 12 ] -
xx [ 16 ] ; xx [ 18 ] = 0.1 ; xx [ 19 ] = - ( xx [ 18 ] + xx [ 8 ] * ( xx [
14 ] * xx [ 9 ] + xx [ 13 ] * xx [ 7 ] ) ) ; xx [ 13 ] = xx [ 4 ] * state [
17 ] ; xx [ 14 ] = sin ( xx [ 13 ] ) ; xx [ 20 ] = 0.0 ; xx [ 21 ] = cos ( xx
[ 13 ] ) ; xx [ 13 ] = 0.18 ; xx [ 22 ] = xx [ 13 ] * xx [ 21 ] ; xx [ 23 ] =
xx [ 8 ] * xx [ 22 ] * xx [ 14 ] ; xx [ 24 ] = 0.3 ; xx [ 25 ] = xx [ 24 ] +
xx [ 13 ] - xx [ 8 ] * xx [ 22 ] * xx [ 21 ] ; xx [ 22 ] = 0.7061939498602465
; xx [ 26 ] = xx [ 4 ] * state [ 19 ] ; xx [ 27 ] = sin ( xx [ 26 ] ) ; xx [
28 ] = 0.7080184356221128 ; xx [ 29 ] = cos ( xx [ 26 ] ) ; xx [ 26 ] = xx [
22 ] * xx [ 27 ] - xx [ 28 ] * xx [ 29 ] ; xx [ 30 ] = xx [ 28 ] * xx [ 27 ]
+ xx [ 22 ] * xx [ 29 ] ; xx [ 27 ] = 0.01017131803502461 ; xx [ 29 ] = xx [
27 ] * xx [ 30 ] ; xx [ 31 ] = 0.02015390293399388 ; xx [ 32 ] = xx [ 31 ] *
xx [ 30 ] ; xx [ 33 ] = xx [ 8 ] * ( xx [ 29 ] * xx [ 26 ] + xx [ 32 ] * xx [
30 ] ) - xx [ 31 ] ; xx [ 34 ] = 0.28 ; xx [ 35 ] = xx [ 34 ] + xx [ 27 ] +
xx [ 8 ] * ( xx [ 32 ] * xx [ 26 ] - xx [ 29 ] * xx [ 30 ] ) ; xx [ 29 ] = xx
[ 4 ] * state [ 22 ] ; xx [ 32 ] = cos ( xx [ 29 ] ) ; xx [ 36 ] = xx [ 4 ] *
state [ 21 ] ; xx [ 37 ] = sin ( xx [ 36 ] ) ; xx [ 38 ] = xx [ 32 ] * xx [
37 ] ; xx [ 39 ] = sin ( xx [ 29 ] ) ; xx [ 29 ] = xx [ 37 ] * xx [ 39 ] ; xx
[ 37 ] = cos ( xx [ 36 ] ) ; xx [ 36 ] = xx [ 37 ] * xx [ 39 ] ; xx [ 40 ] =
xx [ 37 ] * xx [ 32 ] ; xx [ 37 ] = xx [ 12 ] * xx [ 40 ] ; xx [ 41 ] = xx [
12 ] * xx [ 29 ] ; xx [ 42 ] = xx [ 8 ] * ( xx [ 37 ] * xx [ 38 ] - xx [ 41 ]
* xx [ 36 ] ) ; xx [ 43 ] = xx [ 8 ] * ( xx [ 37 ] * xx [ 40 ] + xx [ 41 ] *
xx [ 29 ] ) - xx [ 12 ] - xx [ 16 ] ; xx [ 16 ] = xx [ 18 ] - xx [ 8 ] * ( xx
[ 41 ] * xx [ 38 ] + xx [ 37 ] * xx [ 36 ] ) ; xx [ 18 ] = xx [ 4 ] * state [
25 ] ; xx [ 37 ] = sin ( xx [ 18 ] ) ; xx [ 41 ] = cos ( xx [ 18 ] ) ; xx [
18 ] = xx [ 13 ] * xx [ 41 ] ; xx [ 44 ] = xx [ 8 ] * xx [ 18 ] * xx [ 37 ] ;
xx [ 45 ] = xx [ 24 ] + xx [ 13 ] - xx [ 8 ] * xx [ 18 ] * xx [ 41 ] ; xx [
18 ] = xx [ 4 ] * state [ 27 ] ; xx [ 4 ] = sin ( xx [ 18 ] ) ; xx [ 24 ] =
cos ( xx [ 18 ] ) ; xx [ 18 ] = xx [ 22 ] * xx [ 4 ] - xx [ 28 ] * xx [ 24 ]
; xx [ 46 ] = xx [ 28 ] * xx [ 4 ] + xx [ 22 ] * xx [ 24 ] ; xx [ 4 ] = xx [
27 ] * xx [ 46 ] ; xx [ 22 ] = xx [ 31 ] * xx [ 46 ] ; xx [ 24 ] = xx [ 8 ] *
( xx [ 4 ] * xx [ 18 ] + xx [ 22 ] * xx [ 46 ] ) - xx [ 31 ] ; xx [ 28 ] = xx
[ 34 ] + xx [ 27 ] + xx [ 8 ] * ( xx [ 22 ] * xx [ 18 ] - xx [ 4 ] * xx [ 46
] ) ; xx [ 47 ] = xx [ 38 ] ; xx [ 48 ] = xx [ 29 ] ; xx [ 49 ] = xx [ 36 ] ;
xx [ 50 ] = xx [ 40 ] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 47 , xx
+ 51 ) ; xx [ 55 ] = xx [ 42 ] ; xx [ 56 ] = xx [ 43 ] ; xx [ 57 ] = xx [ 16
] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 55 , xx + 58 ) ; xx [ 4 ] =
xx [ 58 ] + state [ 0 ] ; xx [ 22 ] = xx [ 59 ] + state [ 1 ] ; xx [ 34 ] =
xx [ 60 ] + state [ 2 ] ; xx [ 58 ] = xx [ 37 ] * xx [ 51 ] + xx [ 41 ] * xx
[ 54 ] ; xx [ 59 ] = xx [ 41 ] * xx [ 53 ] - xx [ 37 ] * xx [ 52 ] ; xx [ 60
] = xx [ 37 ] * xx [ 53 ] + xx [ 41 ] * xx [ 52 ] ; xx [ 61 ] = - xx [ 60 ] ;
xx [ 62 ] = xx [ 41 ] * xx [ 51 ] - xx [ 37 ] * xx [ 54 ] ; xx [ 63 ] = xx [
45 ] * xx [ 54 ] ; xx [ 64 ] = xx [ 44 ] * xx [ 54 ] ; xx [ 65 ] = xx [ 44 ]
* xx [ 53 ] - xx [ 45 ] * xx [ 52 ] ; xx [ 66 ] = xx [ 63 ] ; xx [ 67 ] = -
xx [ 64 ] ; xx [ 68 ] = xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 52 , xx +
66 , xx + 69 ) ; xx [ 66 ] = xx [ 8 ] * ( xx [ 69 ] + xx [ 63 ] * xx [ 51 ] )
- xx [ 44 ] + xx [ 4 ] ; xx [ 63 ] = xx [ 8 ] * ( xx [ 70 ] - xx [ 64 ] * xx
[ 51 ] ) - xx [ 45 ] + xx [ 22 ] ; xx [ 64 ] = xx [ 8 ] * ( xx [ 65 ] * xx [
51 ] + xx [ 71 ] ) + xx [ 34 ] ; xx [ 67 ] = xx [ 59 ] ; xx [ 68 ] = xx [ 61
] ; xx [ 69 ] = xx [ 62 ] ; xx [ 65 ] = xx [ 62 ] * xx [ 28 ] ; xx [ 70 ] =
xx [ 62 ] * xx [ 24 ] ; xx [ 71 ] = xx [ 59 ] * xx [ 28 ] + xx [ 24 ] * xx [
60 ] ; xx [ 72 ] = xx [ 65 ] ; xx [ 73 ] = - xx [ 70 ] ; xx [ 74 ] = - xx [
71 ] ; pm_math_Vector3_cross_ra ( xx + 67 , xx + 72 , xx + 75 ) ; xx [ 78 ] =
xx [ 9 ] ; xx [ 79 ] = xx [ 5 ] ; xx [ 80 ] = xx [ 7 ] ; xx [ 81 ] = xx [ 11
] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 78 , xx + 82 ) ; xx [ 67 ]
= xx [ 15 ] ; xx [ 68 ] = xx [ 17 ] ; xx [ 69 ] = xx [ 19 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 67 , xx + 72 ) ; xx [ 86 ] = xx [
72 ] + state [ 0 ] ; xx [ 87 ] = xx [ 73 ] + state [ 1 ] ; xx [ 72 ] = xx [
74 ] + state [ 2 ] ; xx [ 73 ] = xx [ 14 ] * xx [ 82 ] + xx [ 21 ] * xx [ 85
] ; xx [ 74 ] = xx [ 21 ] * xx [ 84 ] - xx [ 14 ] * xx [ 83 ] ; xx [ 88 ] =
xx [ 14 ] * xx [ 84 ] + xx [ 21 ] * xx [ 83 ] ; xx [ 89 ] = - xx [ 88 ] ; xx
[ 90 ] = xx [ 21 ] * xx [ 82 ] - xx [ 14 ] * xx [ 85 ] ; xx [ 91 ] = xx [ 25
] * xx [ 85 ] ; xx [ 92 ] = xx [ 23 ] * xx [ 85 ] ; xx [ 93 ] = xx [ 23 ] *
xx [ 84 ] - xx [ 25 ] * xx [ 83 ] ; xx [ 94 ] = xx [ 91 ] ; xx [ 95 ] = - xx
[ 92 ] ; xx [ 96 ] = xx [ 93 ] ; pm_math_Vector3_cross_ra ( xx + 83 , xx + 94
, xx + 97 ) ; xx [ 94 ] = xx [ 8 ] * ( xx [ 97 ] + xx [ 91 ] * xx [ 82 ] ) -
xx [ 23 ] + xx [ 86 ] ; xx [ 91 ] = xx [ 8 ] * ( xx [ 98 ] - xx [ 92 ] * xx [
82 ] ) - xx [ 25 ] + xx [ 87 ] ; xx [ 92 ] = xx [ 8 ] * ( xx [ 93 ] * xx [ 82
] + xx [ 99 ] ) + xx [ 72 ] ; xx [ 95 ] = xx [ 74 ] ; xx [ 96 ] = xx [ 89 ] ;
xx [ 97 ] = xx [ 90 ] ; xx [ 93 ] = xx [ 90 ] * xx [ 35 ] ; xx [ 98 ] = xx [
90 ] * xx [ 33 ] ; xx [ 99 ] = xx [ 74 ] * xx [ 35 ] + xx [ 33 ] * xx [ 88 ]
; xx [ 100 ] = xx [ 93 ] ; xx [ 101 ] = - xx [ 98 ] ; xx [ 102 ] = - xx [ 99
] ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 100 , xx + 103 ) ; xx [ 95 ] =
state [ 7 ] ; xx [ 96 ] = state [ 8 ] ; xx [ 97 ] = state [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 0 , xx + 95 , xx + 100 ) ; xx [ 95
] = state [ 10 ] ; xx [ 96 ] = state [ 11 ] ; xx [ 97 ] = state [ 12 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 78 , xx + 95 , xx + 106 ) ; xx [
109 ] = xx [ 106 ] + state [ 16 ] ; xx [ 110 ] = xx [ 107 ] - xx [ 8 ] * xx [
6 ] * xx [ 10 ] * state [ 15 ] ; xx [ 6 ] = 1.0 ; xx [ 106 ] = state [ 15 ] *
( xx [ 8 ] * xx [ 10 ] * xx [ 10 ] - xx [ 6 ] ) ; xx [ 10 ] = xx [ 108 ] + xx
[ 106 ] ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 67 , xx + 111 ) ; xx [ 67
] = xx [ 111 ] + xx [ 100 ] ; xx [ 68 ] = xx [ 112 ] + xx [ 101 ] ; xx [ 69 ]
= xx [ 113 ] + xx [ 102 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 78 , xx
+ 67 , xx + 111 ) ; xx [ 67 ] = xx [ 111 ] + xx [ 12 ] * xx [ 106 ] ; xx [ 68
] = xx [ 113 ] - xx [ 12 ] * state [ 16 ] ; xx [ 69 ] = xx [ 110 ] * xx [ 21
] ; xx [ 78 ] = xx [ 109 ] * xx [ 21 ] ; xx [ 79 ] = xx [ 109 ] - xx [ 8 ] *
( xx [ 69 ] * xx [ 14 ] + xx [ 78 ] * xx [ 21 ] ) ; xx [ 80 ] = xx [ 110 ] +
xx [ 8 ] * ( xx [ 78 ] * xx [ 14 ] - xx [ 69 ] * xx [ 21 ] ) ; xx [ 69 ] = xx
[ 10 ] + state [ 18 ] ; xx [ 78 ] = xx [ 67 ] + xx [ 25 ] * xx [ 10 ] ; xx [
81 ] = xx [ 112 ] - xx [ 23 ] * xx [ 10 ] ; xx [ 106 ] = xx [ 81 ] * xx [ 21
] ; xx [ 107 ] = xx [ 78 ] * xx [ 21 ] ; xx [ 108 ] = xx [ 78 ] - xx [ 8 ] *
( xx [ 106 ] * xx [ 14 ] + xx [ 107 ] * xx [ 21 ] ) + xx [ 13 ] * state [ 18
] ; xx [ 78 ] = xx [ 81 ] + xx [ 8 ] * ( xx [ 107 ] * xx [ 14 ] - xx [ 106 ]
* xx [ 21 ] ) ; xx [ 81 ] = xx [ 23 ] * xx [ 110 ] - xx [ 25 ] * xx [ 109 ] +
xx [ 68 ] ; xx [ 106 ] = xx [ 80 ] * xx [ 30 ] ; xx [ 107 ] = xx [ 79 ] * xx
[ 30 ] ; xx [ 111 ] = xx [ 108 ] + xx [ 35 ] * xx [ 69 ] ; xx [ 113 ] = xx [
78 ] - xx [ 33 ] * xx [ 69 ] ; xx [ 114 ] = xx [ 113 ] * xx [ 30 ] ; xx [ 115
] = xx [ 111 ] * xx [ 30 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 47 ,
xx + 95 , xx + 116 ) ; xx [ 119 ] = xx [ 116 ] + state [ 24 ] ; xx [ 120 ] =
xx [ 117 ] - xx [ 8 ] * xx [ 32 ] * xx [ 39 ] * state [ 23 ] ; xx [ 32 ] =
state [ 23 ] * ( xx [ 8 ] * xx [ 39 ] * xx [ 39 ] - xx [ 6 ] ) ; xx [ 6 ] =
xx [ 118 ] + xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 95 , xx + 55 , xx +
116 ) ; xx [ 55 ] = xx [ 116 ] + xx [ 100 ] ; xx [ 56 ] = xx [ 117 ] + xx [
101 ] ; xx [ 57 ] = xx [ 118 ] + xx [ 102 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 47 , xx + 55 , xx + 95 ) ; xx [ 39
] = xx [ 95 ] + xx [ 12 ] * xx [ 32 ] ; xx [ 32 ] = xx [ 97 ] - xx [ 12 ] *
state [ 24 ] ; xx [ 12 ] = xx [ 120 ] * xx [ 41 ] ; xx [ 47 ] = xx [ 119 ] *
xx [ 41 ] ; xx [ 48 ] = xx [ 119 ] - xx [ 8 ] * ( xx [ 12 ] * xx [ 37 ] + xx
[ 47 ] * xx [ 41 ] ) ; xx [ 49 ] = xx [ 120 ] + xx [ 8 ] * ( xx [ 47 ] * xx [
37 ] - xx [ 12 ] * xx [ 41 ] ) ; xx [ 12 ] = xx [ 6 ] + state [ 26 ] ; xx [
47 ] = xx [ 39 ] + xx [ 45 ] * xx [ 6 ] ; xx [ 50 ] = xx [ 96 ] - xx [ 44 ] *
xx [ 6 ] ; xx [ 55 ] = xx [ 50 ] * xx [ 41 ] ; xx [ 56 ] = xx [ 47 ] * xx [
41 ] ; xx [ 57 ] = xx [ 47 ] - xx [ 8 ] * ( xx [ 55 ] * xx [ 37 ] + xx [ 56 ]
* xx [ 41 ] ) + xx [ 13 ] * state [ 26 ] ; xx [ 13 ] = xx [ 50 ] + xx [ 8 ] *
( xx [ 56 ] * xx [ 37 ] - xx [ 55 ] * xx [ 41 ] ) ; xx [ 47 ] = xx [ 44 ] *
xx [ 120 ] - xx [ 45 ] * xx [ 119 ] + xx [ 32 ] ; xx [ 50 ] = xx [ 49 ] * xx
[ 46 ] ; xx [ 55 ] = xx [ 48 ] * xx [ 46 ] ; xx [ 56 ] = xx [ 57 ] + xx [ 28
] * xx [ 12 ] ; xx [ 95 ] = xx [ 13 ] - xx [ 24 ] * xx [ 12 ] ; xx [ 97 ] =
xx [ 95 ] * xx [ 46 ] ; xx [ 116 ] = xx [ 56 ] * xx [ 46 ] ; motionData [ 0 ]
= xx [ 0 ] ; motionData [ 1 ] = xx [ 1 ] ; motionData [ 2 ] = xx [ 2 ] ;
motionData [ 3 ] = xx [ 3 ] ; motionData [ 4 ] = state [ 0 ] ; motionData [ 5
] = state [ 1 ] ; motionData [ 6 ] = state [ 2 ] ; motionData [ 7 ] = xx [ 9
] ; motionData [ 8 ] = xx [ 5 ] ; motionData [ 9 ] = xx [ 7 ] ; motionData [
10 ] = xx [ 11 ] ; motionData [ 11 ] = xx [ 15 ] ; motionData [ 12 ] = xx [
17 ] ; motionData [ 13 ] = xx [ 19 ] ; motionData [ 14 ] = - xx [ 14 ] ;
motionData [ 15 ] = xx [ 20 ] ; motionData [ 16 ] = xx [ 20 ] ; motionData [
17 ] = xx [ 21 ] ; motionData [ 18 ] = - xx [ 23 ] ; motionData [ 19 ] = - xx
[ 25 ] ; motionData [ 20 ] = xx [ 20 ] ; motionData [ 21 ] = xx [ 26 ] ;
motionData [ 22 ] = xx [ 20 ] ; motionData [ 23 ] = xx [ 20 ] ; motionData [
24 ] = - xx [ 30 ] ; motionData [ 25 ] = - xx [ 33 ] ; motionData [ 26 ] = -
xx [ 35 ] ; motionData [ 27 ] = xx [ 20 ] ; motionData [ 28 ] = xx [ 38 ] ;
motionData [ 29 ] = xx [ 29 ] ; motionData [ 30 ] = xx [ 36 ] ; motionData [
31 ] = xx [ 40 ] ; motionData [ 32 ] = xx [ 42 ] ; motionData [ 33 ] = xx [
43 ] ; motionData [ 34 ] = xx [ 16 ] ; motionData [ 35 ] = - xx [ 37 ] ;
motionData [ 36 ] = xx [ 20 ] ; motionData [ 37 ] = xx [ 20 ] ; motionData [
38 ] = xx [ 41 ] ; motionData [ 39 ] = - xx [ 44 ] ; motionData [ 40 ] = - xx
[ 45 ] ; motionData [ 41 ] = xx [ 20 ] ; motionData [ 42 ] = xx [ 18 ] ;
motionData [ 43 ] = xx [ 20 ] ; motionData [ 44 ] = xx [ 20 ] ; motionData [
45 ] = - xx [ 46 ] ; motionData [ 46 ] = - xx [ 24 ] ; motionData [ 47 ] = -
xx [ 28 ] ; motionData [ 48 ] = xx [ 20 ] ; motionData [ 49 ] = xx [ 51 ] ;
motionData [ 50 ] = xx [ 52 ] ; motionData [ 51 ] = xx [ 53 ] ; motionData [
52 ] = xx [ 54 ] ; motionData [ 53 ] = xx [ 4 ] ; motionData [ 54 ] = xx [ 22
] ; motionData [ 55 ] = xx [ 34 ] ; motionData [ 56 ] = - xx [ 58 ] ;
motionData [ 57 ] = xx [ 59 ] ; motionData [ 58 ] = xx [ 61 ] ; motionData [
59 ] = xx [ 62 ] ; motionData [ 60 ] = xx [ 66 ] ; motionData [ 61 ] = xx [
63 ] ; motionData [ 62 ] = xx [ 64 ] ; motionData [ 63 ] = - ( xx [ 18 ] * xx
[ 58 ] - xx [ 62 ] * xx [ 46 ] ) ; motionData [ 64 ] = xx [ 59 ] * xx [ 18 ]
+ xx [ 60 ] * xx [ 46 ] ; motionData [ 65 ] = - ( xx [ 18 ] * xx [ 60 ] - xx
[ 59 ] * xx [ 46 ] ) ; motionData [ 66 ] = xx [ 62 ] * xx [ 18 ] + xx [ 58 ]
* xx [ 46 ] ; motionData [ 67 ] = xx [ 8 ] * ( xx [ 75 ] - xx [ 65 ] * xx [
58 ] ) - xx [ 24 ] + xx [ 66 ] ; motionData [ 68 ] = xx [ 8 ] * ( xx [ 70 ] *
xx [ 58 ] + xx [ 76 ] ) - xx [ 28 ] + xx [ 63 ] ; motionData [ 69 ] = xx [ 8
] * ( xx [ 77 ] + xx [ 71 ] * xx [ 58 ] ) + xx [ 64 ] ; motionData [ 70 ] =
xx [ 82 ] ; motionData [ 71 ] = xx [ 83 ] ; motionData [ 72 ] = xx [ 84 ] ;
motionData [ 73 ] = xx [ 85 ] ; motionData [ 74 ] = xx [ 86 ] ; motionData [
75 ] = xx [ 87 ] ; motionData [ 76 ] = xx [ 72 ] ; motionData [ 77 ] = - xx [
73 ] ; motionData [ 78 ] = xx [ 74 ] ; motionData [ 79 ] = xx [ 89 ] ;
motionData [ 80 ] = xx [ 90 ] ; motionData [ 81 ] = xx [ 94 ] ; motionData [
82 ] = xx [ 91 ] ; motionData [ 83 ] = xx [ 92 ] ; motionData [ 84 ] = - ( xx
[ 26 ] * xx [ 73 ] - xx [ 90 ] * xx [ 30 ] ) ; motionData [ 85 ] = xx [ 74 ]
* xx [ 26 ] + xx [ 88 ] * xx [ 30 ] ; motionData [ 86 ] = - ( xx [ 26 ] * xx
[ 88 ] - xx [ 74 ] * xx [ 30 ] ) ; motionData [ 87 ] = xx [ 90 ] * xx [ 26 ]
+ xx [ 73 ] * xx [ 30 ] ; motionData [ 88 ] = xx [ 8 ] * ( xx [ 103 ] - xx [
93 ] * xx [ 73 ] ) - xx [ 33 ] + xx [ 94 ] ; motionData [ 89 ] = xx [ 8 ] * (
xx [ 98 ] * xx [ 73 ] + xx [ 104 ] ) - xx [ 35 ] + xx [ 91 ] ; motionData [
90 ] = xx [ 8 ] * ( xx [ 105 ] + xx [ 99 ] * xx [ 73 ] ) + xx [ 92 ] ;
motionData [ 91 ] = state [ 10 ] ; motionData [ 92 ] = state [ 11 ] ;
motionData [ 93 ] = state [ 12 ] ; motionData [ 94 ] = xx [ 100 ] ;
motionData [ 95 ] = xx [ 101 ] ; motionData [ 96 ] = xx [ 102 ] ; motionData
[ 97 ] = xx [ 109 ] ; motionData [ 98 ] = xx [ 110 ] ; motionData [ 99 ] = xx
[ 10 ] ; motionData [ 100 ] = xx [ 67 ] ; motionData [ 101 ] = xx [ 112 ] ;
motionData [ 102 ] = xx [ 68 ] ; motionData [ 103 ] = xx [ 79 ] ; motionData
[ 104 ] = xx [ 80 ] ; motionData [ 105 ] = xx [ 69 ] ; motionData [ 106 ] =
xx [ 108 ] ; motionData [ 107 ] = xx [ 78 ] ; motionData [ 108 ] = xx [ 81 ]
; motionData [ 109 ] = xx [ 79 ] - xx [ 8 ] * ( xx [ 106 ] * xx [ 26 ] + xx [
107 ] * xx [ 30 ] ) ; motionData [ 110 ] = xx [ 80 ] - xx [ 8 ] * ( xx [ 106
] * xx [ 30 ] - xx [ 107 ] * xx [ 26 ] ) ; motionData [ 111 ] = xx [ 69 ] +
state [ 20 ] ; motionData [ 112 ] = xx [ 111 ] - xx [ 8 ] * ( xx [ 114 ] * xx
[ 26 ] + xx [ 115 ] * xx [ 30 ] ) + xx [ 27 ] * state [ 20 ] ; motionData [
113 ] = xx [ 113 ] - xx [ 8 ] * ( xx [ 114 ] * xx [ 30 ] - xx [ 115 ] * xx [
26 ] ) + xx [ 31 ] * state [ 20 ] ; motionData [ 114 ] = xx [ 33 ] * xx [ 80
] - xx [ 79 ] * xx [ 35 ] + xx [ 81 ] ; motionData [ 115 ] = xx [ 119 ] ;
motionData [ 116 ] = xx [ 120 ] ; motionData [ 117 ] = xx [ 6 ] ; motionData
[ 118 ] = xx [ 39 ] ; motionData [ 119 ] = xx [ 96 ] ; motionData [ 120 ] =
xx [ 32 ] ; motionData [ 121 ] = xx [ 48 ] ; motionData [ 122 ] = xx [ 49 ] ;
motionData [ 123 ] = xx [ 12 ] ; motionData [ 124 ] = xx [ 57 ] ; motionData
[ 125 ] = xx [ 13 ] ; motionData [ 126 ] = xx [ 47 ] ; motionData [ 127 ] =
xx [ 48 ] - xx [ 8 ] * ( xx [ 50 ] * xx [ 18 ] + xx [ 55 ] * xx [ 46 ] ) ;
motionData [ 128 ] = xx [ 49 ] - xx [ 8 ] * ( xx [ 50 ] * xx [ 46 ] - xx [ 55
] * xx [ 18 ] ) ; motionData [ 129 ] = xx [ 12 ] + state [ 28 ] ; motionData
[ 130 ] = xx [ 56 ] - xx [ 8 ] * ( xx [ 97 ] * xx [ 18 ] + xx [ 116 ] * xx [
46 ] ) + xx [ 27 ] * state [ 28 ] ; motionData [ 131 ] = xx [ 95 ] - xx [ 8 ]
* ( xx [ 97 ] * xx [ 46 ] - xx [ 116 ] * xx [ 18 ] ) + xx [ 31 ] * state [ 28
] ; motionData [ 132 ] = xx [ 24 ] * xx [ 49 ] - xx [ 48 ] * xx [ 28 ] + xx [
47 ] ; } size_t ramadan_2021_5be9147a_1_computeAssemblyError ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const
int * modeVector , const double * motionData , double * error ) { ( void )
mech ; ( void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void )
error ; switch ( constraintIdx ) { } return 0 ; } size_t
ramadan_2021_5be9147a_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t ramadan_2021_5be9147a_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const double * state , const
int * modeVector , const double * motionData , double * J ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
( void ) modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; }
boolean_T ramadan_2021_5be9147a_1_isInKinematicSingularity ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const
int * modeVector , const double * motionData ) { ( void ) mech ; ( void )
rtdv ; ( void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) {
} return 0 ; } void ramadan_2021_5be9147a_1_convertStateVector ( const void *
asmMech , const RuntimeDerivedValuesBundle * rtdv , const void * simMech ,
const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ;
( void ) simModeVector ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] =
asmState [ 1 ] ; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState
[ 3 ] ; simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ;
simState [ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState
[ 8 ] = asmState [ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] =
asmState [ 10 ] ; simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] =
asmState [ 12 ] ; simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] =
asmState [ 14 ] ; simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] =
asmState [ 16 ] ; simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] =
asmState [ 18 ] ; simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] =
asmState [ 20 ] ; simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] =
asmState [ 22 ] ; simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] =
asmState [ 24 ] ; simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] =
asmState [ 26 ] ; simState [ 27 ] = asmState [ 27 ] ; simState [ 28 ] =
asmState [ 28 ] ; }
