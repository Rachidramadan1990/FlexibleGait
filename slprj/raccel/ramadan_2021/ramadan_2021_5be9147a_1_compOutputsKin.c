#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ramadan_2021_5be9147a_1_geometries.h"
PmfMessageId ramadan_2021_5be9147a_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 163 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.0 ; xx [ 2 ] = 0.0 ; xx [ 3 ] = xx
[ 1 ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 2 ] ; xx
[ 7 ] = xx [ 2 ] ; xx [ 8 ] = - 0.05 ; xx [ 9 ] = xx [ 2 ] ; xx [ 2 ] =
0.9999991678125799 ; xx [ 10 ] = 0.7061939498602465 ; xx [ 11 ] = 0.5 ; xx [
12 ] = xx [ 11 ] * state [ 27 ] ; xx [ 13 ] = sin ( xx [ 12 ] ) ; xx [ 14 ] =
0.7080184356221128 ; xx [ 15 ] = cos ( xx [ 12 ] ) ; xx [ 12 ] = xx [ 10 ] *
xx [ 13 ] - xx [ 14 ] * xx [ 15 ] ; xx [ 16 ] = xx [ 11 ] * state [ 25 ] ; xx
[ 17 ] = sin ( xx [ 16 ] ) ; xx [ 18 ] = - state [ 4 ] ; xx [ 19 ] = - state
[ 5 ] ; xx [ 20 ] = - state [ 6 ] ; xx [ 21 ] = - state [ 3 ] ; xx [ 22 ] =
xx [ 18 ] ; xx [ 23 ] = xx [ 19 ] ; xx [ 24 ] = xx [ 20 ] ; xx [ 25 ] = xx [
11 ] * state [ 22 ] ; xx [ 26 ] = cos ( xx [ 25 ] ) ; xx [ 27 ] = xx [ 11 ] *
state [ 21 ] ; xx [ 28 ] = sin ( xx [ 27 ] ) ; xx [ 29 ] = xx [ 26 ] * xx [
28 ] ; xx [ 30 ] = sin ( xx [ 25 ] ) ; xx [ 25 ] = xx [ 28 ] * xx [ 30 ] ; xx
[ 28 ] = cos ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 28 ] * xx [ 30 ] ; xx [ 31 ] =
xx [ 28 ] * xx [ 26 ] ; xx [ 32 ] = xx [ 29 ] ; xx [ 33 ] = xx [ 25 ] ; xx [
34 ] = xx [ 27 ] ; xx [ 35 ] = xx [ 31 ] ; pm_math_Quaternion_compose_ra ( xx
+ 21 , xx + 32 , xx + 36 ) ; xx [ 28 ] = cos ( xx [ 16 ] ) ; xx [ 16 ] = xx [
17 ] * xx [ 36 ] + xx [ 28 ] * xx [ 39 ] ; xx [ 40 ] = xx [ 28 ] * xx [ 36 ]
- xx [ 17 ] * xx [ 39 ] ; xx [ 41 ] = xx [ 14 ] * xx [ 13 ] + xx [ 10 ] * xx
[ 15 ] ; xx [ 13 ] = xx [ 12 ] * xx [ 16 ] - xx [ 40 ] * xx [ 41 ] ; xx [ 15
] = xx [ 2 ] * xx [ 13 ] ; xx [ 42 ] = 1.29010625439384e-3 ; xx [ 43 ] = xx [
40 ] * xx [ 12 ] + xx [ 16 ] * xx [ 41 ] ; xx [ 44 ] = xx [ 42 ] * xx [ 43 ]
; xx [ 45 ] = xx [ 15 ] + xx [ 44 ] ; xx [ 46 ] = xx [ 28 ] * xx [ 38 ] - xx
[ 17 ] * xx [ 37 ] ; xx [ 47 ] = xx [ 17 ] * xx [ 38 ] + xx [ 28 ] * xx [ 37
] ; xx [ 48 ] = xx [ 46 ] * xx [ 12 ] + xx [ 47 ] * xx [ 41 ] ; xx [ 49 ] =
xx [ 2 ] * xx [ 48 ] ; xx [ 50 ] = xx [ 12 ] * xx [ 47 ] - xx [ 46 ] * xx [
41 ] ; xx [ 51 ] = xx [ 42 ] * xx [ 50 ] ; xx [ 52 ] = xx [ 2 ] * xx [ 50 ] ;
xx [ 53 ] = xx [ 42 ] * xx [ 48 ] ; xx [ 54 ] = xx [ 52 ] + xx [ 53 ] ; xx [
55 ] = xx [ 2 ] * xx [ 43 ] ; xx [ 56 ] = xx [ 42 ] * xx [ 13 ] ; xx [ 57 ] =
- xx [ 50 ] ; xx [ 58 ] = - xx [ 13 ] ; xx [ 59 ] = xx [ 48 ] ; xx [ 60 ] =
xx [ 57 ] ; xx [ 61 ] = xx [ 43 ] ; xx [ 62 ] = 0.1400519812952043 ; xx [ 63
] = - 0.06941558200726426 ; xx [ 64 ] = - 0.04999999999999541 ;
pm_math_Quaternion_xform_ra ( xx + 58 , xx + 62 , xx + 65 ) ; xx [ 68 ] = 2.0
; xx [ 69 ] = xx [ 46 ] ; xx [ 70 ] = - xx [ 47 ] ; xx [ 71 ] = xx [ 40 ] ;
xx [ 72 ] = 0.2901713180350247 ; xx [ 73 ] = 0.02015390293399388 ; xx [ 74 ]
= xx [ 73 ] * xx [ 41 ] ; xx [ 75 ] = 0.01017131803502461 ; xx [ 76 ] = xx [
75 ] * xx [ 41 ] ; xx [ 77 ] = xx [ 72 ] + xx [ 68 ] * ( xx [ 74 ] * xx [ 12
] - xx [ 76 ] * xx [ 41 ] ) ; xx [ 78 ] = xx [ 40 ] * xx [ 77 ] ; xx [ 79 ] =
xx [ 68 ] * ( xx [ 76 ] * xx [ 12 ] + xx [ 74 ] * xx [ 41 ] ) - xx [ 73 ] ;
xx [ 74 ] = xx [ 40 ] * xx [ 79 ] ; xx [ 40 ] = xx [ 46 ] * xx [ 77 ] + xx [
79 ] * xx [ 47 ] ; xx [ 80 ] = xx [ 78 ] ; xx [ 81 ] = - xx [ 74 ] ; xx [ 82
] = - xx [ 40 ] ; pm_math_Vector3_cross_ra ( xx + 69 , xx + 80 , xx + 83 ) ;
xx [ 46 ] = 0.18 ; xx [ 47 ] = xx [ 46 ] * xx [ 28 ] ; xx [ 69 ] = 0.48 ; xx
[ 70 ] = xx [ 68 ] * xx [ 47 ] * xx [ 28 ] - xx [ 69 ] ; xx [ 71 ] = xx [ 70
] * xx [ 39 ] ; xx [ 76 ] = xx [ 68 ] * xx [ 47 ] * xx [ 17 ] ; xx [ 47 ] =
xx [ 76 ] * xx [ 39 ] ; xx [ 80 ] = xx [ 70 ] * xx [ 37 ] + xx [ 76 ] * xx [
38 ] ; xx [ 86 ] = - xx [ 71 ] ; xx [ 87 ] = - xx [ 47 ] ; xx [ 88 ] = xx [
80 ] ; pm_math_Vector3_cross_ra ( xx + 37 , xx + 86 , xx + 89 ) ; xx [ 81 ] =
0.16 ; xx [ 82 ] = xx [ 81 ] * xx [ 31 ] ; xx [ 86 ] = xx [ 81 ] * xx [ 25 ]
; xx [ 87 ] = 0.35 ; xx [ 88 ] = 0.1 ; xx [ 92 ] = xx [ 68 ] * ( xx [ 82 ] *
xx [ 29 ] - xx [ 86 ] * xx [ 27 ] ) ; xx [ 93 ] = xx [ 68 ] * ( xx [ 82 ] *
xx [ 31 ] + xx [ 86 ] * xx [ 25 ] ) - xx [ 81 ] - xx [ 87 ] ; xx [ 94 ] = xx
[ 88 ] - xx [ 68 ] * ( xx [ 86 ] * xx [ 29 ] + xx [ 82 ] * xx [ 27 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 21 , xx + 92 , xx + 95 ) ; xx [ 25 ] = xx
[ 68 ] * ( xx [ 83 ] - xx [ 78 ] * xx [ 16 ] ) - xx [ 79 ] + xx [ 68 ] * ( xx
[ 89 ] - xx [ 71 ] * xx [ 36 ] ) - xx [ 76 ] + xx [ 95 ] + state [ 0 ] ; xx [
27 ] = xx [ 65 ] + xx [ 25 ] ; xx [ 29 ] = xx [ 68 ] * ( xx [ 74 ] * xx [ 16
] + xx [ 84 ] ) - xx [ 77 ] + xx [ 70 ] + xx [ 68 ] * ( xx [ 90 ] - xx [ 47 ]
* xx [ 36 ] ) + xx [ 96 ] + state [ 1 ] ; xx [ 31 ] = xx [ 66 ] + xx [ 29 ] ;
xx [ 47 ] = xx [ 68 ] * ( xx [ 85 ] + xx [ 40 ] * xx [ 16 ] ) + xx [ 68 ] * (
xx [ 80 ] * xx [ 36 ] + xx [ 91 ] ) + xx [ 97 ] + state [ 2 ] ; xx [ 16 ] =
xx [ 67 ] + xx [ 47 ] ; xx [ 95 ] = - xx [ 45 ] ; xx [ 96 ] = xx [ 49 ] - xx
[ 51 ] ; xx [ 97 ] = - xx [ 54 ] ; xx [ 98 ] = xx [ 55 ] - xx [ 56 ] ; xx [
99 ] = xx [ 27 ] ; xx [ 100 ] = xx [ 31 ] ; xx [ 101 ] = xx [ 16 ] ; xx [ 40
] = sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 95 ) ) ; xx [ 65 ] = xx [ 15 ] + xx [
44 ] ; xx [ 15 ] = xx [ 51 ] - xx [ 49 ] ; xx [ 44 ] = xx [ 52 ] + xx [ 53 ]
; xx [ 52 ] = xx [ 56 ] - xx [ 55 ] ; xx [ 82 ] = 0.1400519812952043 ; xx [
83 ] = - 0.06941558200725774 ; xx [ 84 ] = 0.0500000000000046 ;
pm_math_Quaternion_xform_ra ( xx + 58 , xx + 82 , xx + 89 ) ; xx [ 95 ] = xx
[ 65 ] ; xx [ 96 ] = xx [ 15 ] ; xx [ 97 ] = xx [ 44 ] ; xx [ 98 ] = xx [ 52
] ; xx [ 99 ] = xx [ 89 ] + xx [ 25 ] ; xx [ 100 ] = xx [ 90 ] + xx [ 29 ] ;
xx [ 101 ] = xx [ 91 ] + xx [ 47 ] ; xx [ 53 ] =
sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 95 ) ) ; xx [ 89 ] = -
0.05994735295513665 ; xx [ 90 ] = - 0.06993162407957609 ; xx [ 91 ] = -
0.02499999999999548 ; pm_math_Quaternion_xform_ra ( xx + 58 , xx + 89 , xx +
95 ) ; xx [ 98 ] = xx [ 65 ] ; xx [ 99 ] = xx [ 15 ] ; xx [ 100 ] = xx [ 44 ]
; xx [ 101 ] = xx [ 52 ] ; xx [ 102 ] = xx [ 95 ] + xx [ 25 ] ; xx [ 103 ] =
xx [ 96 ] + xx [ 29 ] ; xx [ 104 ] = xx [ 97 ] + xx [ 47 ] ; xx [ 66 ] =
sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 98 ) ) ; xx [ 67 ] = xx [ 11 ] * state
[ 19 ] ; xx [ 71 ] = sin ( xx [ 67 ] ) ; xx [ 74 ] = cos ( xx [ 67 ] ) ; xx [
67 ] = xx [ 10 ] * xx [ 71 ] - xx [ 14 ] * xx [ 74 ] ; xx [ 78 ] = xx [ 11 ]
* state [ 17 ] ; xx [ 80 ] = sin ( xx [ 78 ] ) ; xx [ 85 ] = xx [ 11 ] *
state [ 14 ] ; xx [ 86 ] = cos ( xx [ 85 ] ) ; xx [ 95 ] = xx [ 11 ] * state
[ 13 ] ; xx [ 11 ] = sin ( xx [ 95 ] ) ; xx [ 96 ] = xx [ 86 ] * xx [ 11 ] ;
xx [ 97 ] = sin ( xx [ 85 ] ) ; xx [ 85 ] = xx [ 11 ] * xx [ 97 ] ; xx [ 11 ]
= cos ( xx [ 95 ] ) ; xx [ 95 ] = xx [ 11 ] * xx [ 97 ] ; xx [ 98 ] = xx [ 11
] * xx [ 86 ] ; xx [ 99 ] = xx [ 96 ] ; xx [ 100 ] = xx [ 85 ] ; xx [ 101 ] =
xx [ 95 ] ; xx [ 102 ] = xx [ 98 ] ; pm_math_Quaternion_compose_ra ( xx + 21
, xx + 99 , xx + 103 ) ; xx [ 11 ] = cos ( xx [ 78 ] ) ; xx [ 78 ] = xx [ 80
] * xx [ 103 ] + xx [ 11 ] * xx [ 106 ] ; xx [ 107 ] = xx [ 11 ] * xx [ 103 ]
- xx [ 80 ] * xx [ 106 ] ; xx [ 108 ] = xx [ 14 ] * xx [ 71 ] + xx [ 10 ] *
xx [ 74 ] ; xx [ 71 ] = xx [ 67 ] * xx [ 78 ] - xx [ 107 ] * xx [ 108 ] ; xx
[ 74 ] = xx [ 2 ] * xx [ 71 ] ; xx [ 109 ] = xx [ 107 ] * xx [ 67 ] + xx [ 78
] * xx [ 108 ] ; xx [ 110 ] = xx [ 42 ] * xx [ 109 ] ; xx [ 111 ] = xx [ 74 ]
+ xx [ 110 ] ; xx [ 112 ] = xx [ 80 ] * xx [ 105 ] + xx [ 11 ] * xx [ 104 ] ;
xx [ 113 ] = xx [ 11 ] * xx [ 105 ] - xx [ 80 ] * xx [ 104 ] ; xx [ 114 ] =
xx [ 67 ] * xx [ 112 ] - xx [ 113 ] * xx [ 108 ] ; xx [ 115 ] = xx [ 42 ] *
xx [ 114 ] ; xx [ 116 ] = xx [ 113 ] * xx [ 67 ] + xx [ 112 ] * xx [ 108 ] ;
xx [ 117 ] = xx [ 2 ] * xx [ 116 ] ; xx [ 118 ] = xx [ 115 ] - xx [ 117 ] ;
xx [ 119 ] = xx [ 2 ] * xx [ 114 ] ; xx [ 120 ] = xx [ 42 ] * xx [ 116 ] ; xx
[ 121 ] = xx [ 119 ] + xx [ 120 ] ; xx [ 122 ] = xx [ 42 ] * xx [ 71 ] ; xx [
123 ] = xx [ 2 ] * xx [ 109 ] ; xx [ 124 ] = xx [ 122 ] - xx [ 123 ] ; xx [
125 ] = - xx [ 114 ] ; xx [ 126 ] = - xx [ 71 ] ; xx [ 127 ] = xx [ 116 ] ;
xx [ 128 ] = xx [ 125 ] ; xx [ 129 ] = xx [ 109 ] ;
pm_math_Quaternion_xform_ra ( xx + 126 , xx + 89 , xx + 130 ) ; xx [ 89 ] =
xx [ 113 ] ; xx [ 90 ] = - xx [ 112 ] ; xx [ 91 ] = xx [ 107 ] ; xx [ 133 ] =
xx [ 73 ] * xx [ 108 ] ; xx [ 134 ] = xx [ 75 ] * xx [ 108 ] ; xx [ 135 ] =
xx [ 72 ] + xx [ 68 ] * ( xx [ 133 ] * xx [ 67 ] - xx [ 134 ] * xx [ 108 ] )
; xx [ 72 ] = xx [ 107 ] * xx [ 135 ] ; xx [ 136 ] = xx [ 68 ] * ( xx [ 134 ]
* xx [ 67 ] + xx [ 133 ] * xx [ 108 ] ) - xx [ 73 ] ; xx [ 133 ] = xx [ 107 ]
* xx [ 136 ] ; xx [ 107 ] = xx [ 113 ] * xx [ 135 ] + xx [ 136 ] * xx [ 112 ]
; xx [ 137 ] = xx [ 72 ] ; xx [ 138 ] = - xx [ 133 ] ; xx [ 139 ] = - xx [
107 ] ; pm_math_Vector3_cross_ra ( xx + 89 , xx + 137 , xx + 140 ) ; xx [ 89
] = xx [ 46 ] * xx [ 11 ] ; xx [ 90 ] = xx [ 68 ] * xx [ 89 ] * xx [ 11 ] -
xx [ 69 ] ; xx [ 69 ] = xx [ 90 ] * xx [ 106 ] ; xx [ 91 ] = xx [ 68 ] * xx [
89 ] * xx [ 80 ] ; xx [ 89 ] = xx [ 91 ] * xx [ 106 ] ; xx [ 112 ] = xx [ 90
] * xx [ 104 ] + xx [ 91 ] * xx [ 105 ] ; xx [ 137 ] = - xx [ 69 ] ; xx [ 138
] = - xx [ 89 ] ; xx [ 139 ] = xx [ 112 ] ; pm_math_Vector3_cross_ra ( xx +
104 , xx + 137 , xx + 143 ) ; xx [ 113 ] = xx [ 81 ] * xx [ 98 ] ; xx [ 134 ]
= xx [ 81 ] * xx [ 85 ] ; xx [ 137 ] = xx [ 68 ] * ( xx [ 113 ] * xx [ 96 ] -
xx [ 134 ] * xx [ 95 ] ) ; xx [ 138 ] = xx [ 68 ] * ( xx [ 113 ] * xx [ 98 ]
+ xx [ 134 ] * xx [ 85 ] ) - xx [ 81 ] - xx [ 87 ] ; xx [ 139 ] = - ( xx [ 88
] + xx [ 68 ] * ( xx [ 134 ] * xx [ 96 ] + xx [ 113 ] * xx [ 95 ] ) ) ;
pm_math_Quaternion_xform_ra ( xx + 21 , xx + 137 , xx + 146 ) ; xx [ 85 ] =
xx [ 68 ] * ( xx [ 140 ] - xx [ 72 ] * xx [ 78 ] ) - xx [ 136 ] + xx [ 68 ] *
( xx [ 143 ] - xx [ 69 ] * xx [ 103 ] ) - xx [ 91 ] + xx [ 146 ] + state [ 0
] ; xx [ 69 ] = xx [ 68 ] * ( xx [ 133 ] * xx [ 78 ] + xx [ 141 ] ) - xx [
135 ] + xx [ 90 ] + xx [ 68 ] * ( xx [ 144 ] - xx [ 89 ] * xx [ 103 ] ) + xx
[ 147 ] + state [ 1 ] ; xx [ 72 ] = xx [ 68 ] * ( xx [ 142 ] + xx [ 107 ] *
xx [ 78 ] ) + xx [ 68 ] * ( xx [ 112 ] * xx [ 103 ] + xx [ 145 ] ) + xx [ 148
] + state [ 2 ] ; xx [ 140 ] = xx [ 111 ] ; xx [ 141 ] = xx [ 118 ] ; xx [
142 ] = xx [ 121 ] ; xx [ 143 ] = xx [ 124 ] ; xx [ 144 ] = xx [ 130 ] + xx [
85 ] ; xx [ 145 ] = xx [ 131 ] + xx [ 69 ] ; xx [ 146 ] = xx [ 132 ] + xx [
72 ] ; xx [ 78 ] = sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 140 ) ) ; xx [ 89 ] = xx [ 74 ] + xx [
110 ] ; xx [ 74 ] = xx [ 119 ] + xx [ 120 ] ; pm_math_Quaternion_xform_ra (
xx + 126 , xx + 62 , xx + 130 ) ; xx [ 95 ] = xx [ 130 ] + xx [ 85 ] ; xx [
96 ] = xx [ 131 ] + xx [ 69 ] ; xx [ 98 ] = xx [ 132 ] + xx [ 72 ] ; xx [ 140
] = - xx [ 89 ] ; xx [ 141 ] = xx [ 117 ] - xx [ 115 ] ; xx [ 142 ] = - xx [
74 ] ; xx [ 143 ] = xx [ 123 ] - xx [ 122 ] ; xx [ 144 ] = xx [ 95 ] ; xx [
145 ] = xx [ 96 ] ; xx [ 146 ] = xx [ 98 ] ; xx [ 107 ] =
sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 140 ) ) ; pm_math_Quaternion_xform_ra (
xx + 126 , xx + 82 , xx + 130 ) ; xx [ 140 ] = xx [ 111 ] ; xx [ 141 ] = xx [
118 ] ; xx [ 142 ] = xx [ 121 ] ; xx [ 143 ] = xx [ 124 ] ; xx [ 144 ] = xx [
130 ] + xx [ 85 ] ; xx [ 145 ] = xx [ 131 ] + xx [ 69 ] ; xx [ 146 ] = xx [
132 ] + xx [ 72 ] ; xx [ 82 ] =
sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 140 ) ) ; xx [ 130 ] = -
0.05994735295513668 ; xx [ 131 ] = - 0.06993162407957283 ; xx [ 132 ] =
0.02500000000000453 ; pm_math_Quaternion_xform_ra ( xx + 126 , xx + 130 , xx
+ 140 ) ; xx [ 143 ] = xx [ 111 ] ; xx [ 144 ] = xx [ 118 ] ; xx [ 145 ] = xx
[ 121 ] ; xx [ 146 ] = xx [ 124 ] ; xx [ 147 ] = xx [ 140 ] + xx [ 85 ] ; xx
[ 148 ] = xx [ 141 ] + xx [ 69 ] ; xx [ 149 ] = xx [ 142 ] + xx [ 72 ] ; xx [
83 ] = sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 143 ) ) ; pm_math_Quaternion_xform_ra (
xx + 58 , xx + 130 , xx + 126 ) ; xx [ 140 ] = xx [ 65 ] ; xx [ 141 ] = xx [
15 ] ; xx [ 142 ] = xx [ 44 ] ; xx [ 143 ] = xx [ 52 ] ; xx [ 144 ] = xx [
126 ] + xx [ 25 ] ; xx [ 145 ] = xx [ 127 ] + xx [ 29 ] ; xx [ 146 ] = xx [
128 ] + xx [ 47 ] ; xx [ 58 ] =
sm_core_compiler_computeSignedDistanceBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
3 ) , ( pm_math_Transform3 * ) ( xx + 140 ) ) ; xx [ 3 ] = xx [ 111 ] * xx [
111 ] ; xx [ 4 ] = xx [ 118 ] * xx [ 121 ] ; xx [ 5 ] = xx [ 124 ] * xx [ 111
] ; xx [ 6 ] = xx [ 124 ] * xx [ 118 ] ; xx [ 7 ] = xx [ 111 ] * xx [ 121 ] ;
xx [ 8 ] = xx [ 124 ] * xx [ 121 ] ; xx [ 9 ] = xx [ 118 ] * xx [ 111 ] ; xx
[ 59 ] = 0.05475554004722915 ; xx [ 60 ] = 0.04536471730595183 ; xx [ 61 ] =
xx [ 60 ] * xx [ 109 ] ; xx [ 126 ] = xx [ 116 ] ; xx [ 127 ] = xx [ 125 ] ;
xx [ 128 ] = xx [ 109 ] ; xx [ 84 ] = xx [ 59 ] * xx [ 109 ] ; xx [ 110 ] =
xx [ 60 ] * xx [ 116 ] + xx [ 59 ] * xx [ 114 ] ; xx [ 129 ] = - xx [ 61 ] ;
xx [ 130 ] = xx [ 84 ] ; xx [ 131 ] = xx [ 110 ] ; pm_math_Vector3_cross_ra (
xx + 126 , xx + 129 , xx + 132 ) ; xx [ 140 ] = xx [ 111 ] ; xx [ 141 ] = xx
[ 118 ] ; xx [ 142 ] = xx [ 121 ] ; xx [ 143 ] = xx [ 124 ] ; xx [ 111 ] =
state [ 10 ] ; xx [ 112 ] = state [ 11 ] ; xx [ 113 ] = state [ 12 ] ;
pm_math_Vector3_cross_ra ( xx + 111 , xx + 137 , xx + 129 ) ; xx [ 137 ] =
state [ 7 ] ; xx [ 138 ] = state [ 8 ] ; xx [ 139 ] = state [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 21 , xx + 137 , xx + 144 ) ; xx [
137 ] = xx [ 129 ] + xx [ 144 ] ; xx [ 138 ] = xx [ 130 ] + xx [ 145 ] ; xx [
139 ] = xx [ 131 ] + xx [ 146 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
99 , xx + 137 , xx + 129 ) ; xx [ 119 ] = state [ 15 ] * ( xx [ 68 ] * xx [
97 ] * xx [ 97 ] - xx [ 1 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 99
, xx + 111 , xx + 137 ) ; xx [ 99 ] = xx [ 139 ] + xx [ 119 ] ; xx [ 100 ] =
xx [ 129 ] + xx [ 81 ] * xx [ 119 ] - xx [ 90 ] * xx [ 99 ] ; xx [ 101 ] = xx
[ 130 ] - xx [ 91 ] * xx [ 99 ] ; xx [ 102 ] = xx [ 101 ] * xx [ 11 ] ; xx [
119 ] = xx [ 100 ] * xx [ 11 ] ; xx [ 120 ] = xx [ 99 ] + state [ 18 ] ; xx [
99 ] = xx [ 100 ] - xx [ 68 ] * ( xx [ 102 ] * xx [ 80 ] + xx [ 119 ] * xx [
11 ] ) + xx [ 46 ] * state [ 18 ] + xx [ 135 ] * xx [ 120 ] ; xx [ 100 ] = xx
[ 101 ] + xx [ 68 ] * ( xx [ 119 ] * xx [ 80 ] - xx [ 102 ] * xx [ 11 ] ) -
xx [ 136 ] * xx [ 120 ] ; xx [ 101 ] = xx [ 100 ] * xx [ 108 ] ; xx [ 102 ] =
xx [ 99 ] * xx [ 108 ] ; xx [ 119 ] = xx [ 99 ] - xx [ 68 ] * ( xx [ 101 ] *
xx [ 67 ] + xx [ 102 ] * xx [ 108 ] ) + xx [ 75 ] * state [ 20 ] ; xx [ 99 ]
= xx [ 120 ] + state [ 20 ] ; xx [ 120 ] = xx [ 119 ] - xx [ 60 ] * xx [ 99 ]
; xx [ 125 ] = xx [ 42 ] * xx [ 120 ] ; xx [ 147 ] = xx [ 100 ] - xx [ 68 ] *
( xx [ 101 ] * xx [ 108 ] - xx [ 102 ] * xx [ 67 ] ) + xx [ 73 ] * state [ 20
] ; xx [ 100 ] = xx [ 147 ] + xx [ 59 ] * xx [ 99 ] ; xx [ 101 ] = xx [ 42 ]
* xx [ 100 ] ; xx [ 102 ] = xx [ 138 ] - xx [ 68 ] * xx [ 86 ] * xx [ 97 ] *
state [ 15 ] ; xx [ 86 ] = xx [ 137 ] + state [ 16 ] ; xx [ 97 ] = xx [ 86 ]
* xx [ 11 ] ; xx [ 137 ] = xx [ 102 ] * xx [ 11 ] ; xx [ 138 ] = xx [ 102 ] +
xx [ 68 ] * ( xx [ 97 ] * xx [ 80 ] - xx [ 137 ] * xx [ 11 ] ) ; xx [ 139 ] =
xx [ 86 ] - xx [ 68 ] * ( xx [ 137 ] * xx [ 80 ] + xx [ 97 ] * xx [ 11 ] ) ;
xx [ 11 ] = xx [ 136 ] * xx [ 138 ] - xx [ 139 ] * xx [ 135 ] + xx [ 90 ] *
xx [ 86 ] + xx [ 91 ] * xx [ 102 ] + xx [ 131 ] - xx [ 81 ] * state [ 16 ] ;
xx [ 80 ] = xx [ 138 ] * xx [ 108 ] ; xx [ 86 ] = xx [ 139 ] * xx [ 108 ] ;
xx [ 90 ] = xx [ 139 ] - xx [ 68 ] * ( xx [ 80 ] * xx [ 67 ] + xx [ 86 ] * xx
[ 108 ] ) ; xx [ 91 ] = xx [ 138 ] - xx [ 68 ] * ( xx [ 80 ] * xx [ 108 ] -
xx [ 86 ] * xx [ 67 ] ) ; xx [ 129 ] = xx [ 120 ] - xx [ 68 ] * ( xx [ 42 ] *
xx [ 125 ] - xx [ 2 ] * xx [ 101 ] ) ; xx [ 130 ] = xx [ 100 ] - xx [ 68 ] *
( xx [ 2 ] * xx [ 125 ] + xx [ 42 ] * xx [ 101 ] ) ; xx [ 131 ] = xx [ 11 ] +
xx [ 60 ] * xx [ 90 ] - xx [ 59 ] * xx [ 91 ] ; pm_math_Quaternion_xform_ra (
xx + 140 , xx + 129 , xx + 100 ) ; xx [ 67 ] = xx [ 75 ] * xx [ 109 ] ; xx [
80 ] = xx [ 73 ] * xx [ 109 ] ; xx [ 86 ] = xx [ 75 ] * xx [ 116 ] - xx [ 73
] * xx [ 114 ] ; xx [ 129 ] = - xx [ 67 ] ; xx [ 130 ] = - xx [ 80 ] ; xx [
131 ] = xx [ 86 ] ; pm_math_Vector3_cross_ra ( xx + 126 , xx + 129 , xx + 135
) ; xx [ 125 ] = xx [ 14 ] * xx [ 71 ] - xx [ 10 ] * xx [ 109 ] ; xx [ 126 ]
= - ( xx [ 10 ] * xx [ 114 ] + xx [ 14 ] * xx [ 116 ] ) ; xx [ 127 ] = xx [
14 ] * xx [ 114 ] - xx [ 10 ] * xx [ 116 ] ; xx [ 128 ] = - ( xx [ 10 ] * xx
[ 71 ] + xx [ 14 ] * xx [ 109 ] ) ; xx [ 97 ] = xx [ 119 ] - xx [ 75 ] * xx [
99 ] ; xx [ 108 ] = xx [ 147 ] - xx [ 73 ] * xx [ 99 ] ; xx [ 109 ] = xx [ 10
] * xx [ 108 ] ; xx [ 114 ] = xx [ 10 ] * xx [ 97 ] ; xx [ 129 ] = xx [ 97 ]
- xx [ 68 ] * ( xx [ 14 ] * xx [ 109 ] + xx [ 10 ] * xx [ 114 ] ) ; xx [ 130
] = xx [ 108 ] + xx [ 68 ] * ( xx [ 14 ] * xx [ 114 ] - xx [ 10 ] * xx [ 109
] ) ; xx [ 131 ] = xx [ 11 ] + xx [ 75 ] * xx [ 90 ] + xx [ 73 ] * xx [ 91 ]
; pm_math_Quaternion_xform_ra ( xx + 125 , xx + 129 , xx + 138 ) ; xx [ 97 ]
= 2.22955529738917e-4 ; xx [ 108 ] = xx [ 97 ] * xx [ 43 ] ; xx [ 125 ] = xx
[ 48 ] ; xx [ 126 ] = xx [ 57 ] ; xx [ 127 ] = xx [ 43 ] ; xx [ 57 ] =
1.281674053440928e-4 ; xx [ 109 ] = xx [ 57 ] * xx [ 43 ] ; xx [ 114 ] = xx [
97 ] * xx [ 48 ] - xx [ 57 ] * xx [ 50 ] ; xx [ 128 ] = - xx [ 108 ] ; xx [
129 ] = - xx [ 109 ] ; xx [ 130 ] = xx [ 114 ] ; pm_math_Vector3_cross_ra (
xx + 125 , xx + 128 , xx + 141 ) ; xx [ 128 ] = xx [ 65 ] ; xx [ 129 ] = xx [
15 ] ; xx [ 130 ] = xx [ 44 ] ; xx [ 131 ] = xx [ 52 ] ;
pm_math_Vector3_cross_ra ( xx + 111 , xx + 92 , xx + 148 ) ; xx [ 92 ] = xx [
148 ] + xx [ 144 ] ; xx [ 93 ] = xx [ 149 ] + xx [ 145 ] ; xx [ 94 ] = xx [
150 ] + xx [ 146 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 32 , xx + 92 ,
xx + 148 ) ; xx [ 92 ] = state [ 23 ] * ( xx [ 68 ] * xx [ 30 ] * xx [ 30 ] -
xx [ 1 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 32 , xx + 111 , xx +
151 ) ; xx [ 32 ] = xx [ 153 ] + xx [ 92 ] ; xx [ 33 ] = xx [ 148 ] + xx [ 81
] * xx [ 92 ] - xx [ 70 ] * xx [ 32 ] ; xx [ 34 ] = xx [ 149 ] - xx [ 76 ] *
xx [ 32 ] ; xx [ 35 ] = xx [ 34 ] * xx [ 28 ] ; xx [ 92 ] = xx [ 33 ] * xx [
28 ] ; xx [ 93 ] = xx [ 32 ] + state [ 26 ] ; xx [ 32 ] = xx [ 33 ] - xx [ 68
] * ( xx [ 35 ] * xx [ 17 ] + xx [ 92 ] * xx [ 28 ] ) + xx [ 46 ] * state [
26 ] + xx [ 77 ] * xx [ 93 ] ; xx [ 33 ] = xx [ 34 ] + xx [ 68 ] * ( xx [ 92
] * xx [ 17 ] - xx [ 35 ] * xx [ 28 ] ) - xx [ 79 ] * xx [ 93 ] ; xx [ 34 ] =
xx [ 33 ] * xx [ 41 ] ; xx [ 35 ] = xx [ 32 ] * xx [ 41 ] ; xx [ 46 ] = xx [
32 ] - xx [ 68 ] * ( xx [ 34 ] * xx [ 12 ] + xx [ 35 ] * xx [ 41 ] ) + xx [
75 ] * state [ 28 ] ; xx [ 32 ] = xx [ 93 ] + state [ 28 ] ; xx [ 92 ] = xx [
46 ] - xx [ 97 ] * xx [ 32 ] ; xx [ 93 ] = xx [ 42 ] * xx [ 92 ] ; xx [ 94 ]
= xx [ 33 ] - xx [ 68 ] * ( xx [ 34 ] * xx [ 41 ] - xx [ 35 ] * xx [ 12 ] ) +
xx [ 73 ] * state [ 28 ] ; xx [ 33 ] = xx [ 94 ] - xx [ 57 ] * xx [ 32 ] ; xx
[ 34 ] = xx [ 42 ] * xx [ 33 ] ; xx [ 35 ] = xx [ 152 ] - xx [ 68 ] * xx [ 26
] * xx [ 30 ] * state [ 23 ] ; xx [ 26 ] = xx [ 151 ] + state [ 24 ] ; xx [
30 ] = xx [ 26 ] * xx [ 28 ] ; xx [ 116 ] = xx [ 35 ] * xx [ 28 ] ; xx [ 120
] = xx [ 35 ] + xx [ 68 ] * ( xx [ 30 ] * xx [ 17 ] - xx [ 116 ] * xx [ 28 ]
) ; xx [ 151 ] = xx [ 26 ] - xx [ 68 ] * ( xx [ 116 ] * xx [ 17 ] + xx [ 30 ]
* xx [ 28 ] ) ; xx [ 17 ] = xx [ 79 ] * xx [ 120 ] - xx [ 151 ] * xx [ 77 ] +
xx [ 70 ] * xx [ 26 ] + xx [ 76 ] * xx [ 35 ] + xx [ 150 ] - xx [ 81 ] *
state [ 24 ] ; xx [ 26 ] = xx [ 120 ] * xx [ 41 ] ; xx [ 28 ] = xx [ 151 ] *
xx [ 41 ] ; xx [ 30 ] = xx [ 151 ] - xx [ 68 ] * ( xx [ 26 ] * xx [ 12 ] + xx
[ 28 ] * xx [ 41 ] ) ; xx [ 35 ] = xx [ 120 ] - xx [ 68 ] * ( xx [ 26 ] * xx
[ 41 ] - xx [ 28 ] * xx [ 12 ] ) ; xx [ 148 ] = xx [ 92 ] - xx [ 68 ] * ( xx
[ 42 ] * xx [ 93 ] - xx [ 2 ] * xx [ 34 ] ) ; xx [ 149 ] = xx [ 33 ] - xx [
68 ] * ( xx [ 2 ] * xx [ 93 ] + xx [ 42 ] * xx [ 34 ] ) ; xx [ 150 ] = xx [
17 ] + xx [ 97 ] * xx [ 30 ] + xx [ 57 ] * xx [ 35 ] ;
pm_math_Quaternion_xform_ra ( xx + 128 , xx + 148 , xx + 151 ) ; xx [ 12 ] =
xx [ 65 ] * xx [ 65 ] ; xx [ 26 ] = xx [ 15 ] * xx [ 44 ] ; xx [ 28 ] = xx [
52 ] * xx [ 65 ] ; xx [ 33 ] = xx [ 52 ] * xx [ 15 ] ; xx [ 34 ] = xx [ 65 ]
* xx [ 44 ] ; xx [ 41 ] = xx [ 52 ] * xx [ 44 ] ; xx [ 70 ] = xx [ 15 ] * xx
[ 65 ] ; xx [ 65 ] = xx [ 60 ] * xx [ 43 ] ; xx [ 76 ] = xx [ 59 ] * xx [ 43
] ; xx [ 77 ] = xx [ 60 ] * xx [ 48 ] + xx [ 59 ] * xx [ 50 ] ; xx [ 148 ] =
- xx [ 65 ] ; xx [ 149 ] = xx [ 76 ] ; xx [ 150 ] = xx [ 77 ] ;
pm_math_Vector3_cross_ra ( xx + 125 , xx + 148 , xx + 154 ) ; xx [ 79 ] = xx
[ 46 ] - xx [ 60 ] * xx [ 32 ] ; xx [ 81 ] = xx [ 42 ] * xx [ 79 ] ; xx [ 92
] = xx [ 94 ] + xx [ 59 ] * xx [ 32 ] ; xx [ 93 ] = xx [ 42 ] * xx [ 92 ] ;
xx [ 148 ] = xx [ 79 ] - xx [ 68 ] * ( xx [ 42 ] * xx [ 81 ] - xx [ 2 ] * xx
[ 93 ] ) ; xx [ 149 ] = xx [ 92 ] - xx [ 68 ] * ( xx [ 2 ] * xx [ 81 ] + xx [
42 ] * xx [ 93 ] ) ; xx [ 150 ] = xx [ 17 ] + xx [ 60 ] * xx [ 30 ] - xx [ 59
] * xx [ 35 ] ; pm_math_Quaternion_xform_ra ( xx + 128 , xx + 148 , xx + 157
) ; xx [ 79 ] = xx [ 75 ] * xx [ 43 ] ; xx [ 81 ] = xx [ 73 ] * xx [ 43 ] ;
xx [ 92 ] = xx [ 75 ] * xx [ 48 ] - xx [ 73 ] * xx [ 50 ] ; xx [ 128 ] = - xx
[ 79 ] ; xx [ 129 ] = - xx [ 81 ] ; xx [ 130 ] = xx [ 92 ] ;
pm_math_Vector3_cross_ra ( xx + 125 , xx + 128 , xx + 148 ) ; xx [ 125 ] = xx
[ 14 ] * xx [ 13 ] - xx [ 10 ] * xx [ 43 ] ; xx [ 126 ] = - ( xx [ 10 ] * xx
[ 50 ] + xx [ 14 ] * xx [ 48 ] ) ; xx [ 127 ] = xx [ 14 ] * xx [ 50 ] - xx [
10 ] * xx [ 48 ] ; xx [ 128 ] = - ( xx [ 10 ] * xx [ 13 ] + xx [ 14 ] * xx [
43 ] ) ; xx [ 43 ] = xx [ 46 ] - xx [ 75 ] * xx [ 32 ] ; xx [ 48 ] = xx [ 94
] - xx [ 73 ] * xx [ 32 ] ; xx [ 50 ] = xx [ 10 ] * xx [ 48 ] ; xx [ 93 ] =
xx [ 10 ] * xx [ 43 ] ; xx [ 129 ] = xx [ 43 ] - xx [ 68 ] * ( xx [ 14 ] * xx
[ 50 ] + xx [ 10 ] * xx [ 93 ] ) ; xx [ 130 ] = xx [ 48 ] + xx [ 68 ] * ( xx
[ 14 ] * xx [ 93 ] - xx [ 10 ] * xx [ 50 ] ) ; xx [ 131 ] = xx [ 17 ] + xx [
75 ] * xx [ 30 ] + xx [ 73 ] * xx [ 35 ] ; pm_math_Quaternion_xform_ra ( xx +
125 , xx + 129 , xx + 160 ) ; xx [ 125 ] = xx [ 89 ] ; xx [ 126 ] = xx [ 115
] - xx [ 117 ] ; xx [ 127 ] = xx [ 74 ] ; xx [ 128 ] = xx [ 122 ] - xx [ 123
] ; xx [ 115 ] = xx [ 90 ] ; xx [ 116 ] = xx [ 91 ] ; xx [ 117 ] = xx [ 99 ]
; pm_math_Vector3_cross_ra ( xx + 115 , xx + 62 , xx + 89 ) ; xx [ 10 ] = xx
[ 119 ] + xx [ 89 ] ; xx [ 14 ] = xx [ 42 ] * xx [ 10 ] ; xx [ 43 ] = xx [
147 ] + xx [ 90 ] ; xx [ 48 ] = xx [ 42 ] * xx [ 43 ] ; xx [ 115 ] = xx [ 10
] - xx [ 68 ] * ( xx [ 42 ] * xx [ 14 ] - xx [ 2 ] * xx [ 48 ] ) ; xx [ 116 ]
= xx [ 43 ] - xx [ 68 ] * ( xx [ 2 ] * xx [ 14 ] + xx [ 42 ] * xx [ 48 ] ) ;
xx [ 117 ] = xx [ 11 ] + xx [ 91 ] ; pm_math_Quaternion_xform_ra ( xx + 125 ,
xx + 115 , xx + 89 ) ; xx [ 125 ] = xx [ 45 ] ; xx [ 126 ] = xx [ 51 ] - xx [
49 ] ; xx [ 127 ] = xx [ 54 ] ; xx [ 128 ] = xx [ 56 ] - xx [ 55 ] ; xx [ 48
] = xx [ 30 ] ; xx [ 49 ] = xx [ 35 ] ; xx [ 50 ] = xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 48 , xx + 62 , xx + 54 ) ; xx [ 10 ] = xx [
46 ] + xx [ 54 ] ; xx [ 11 ] = xx [ 42 ] * xx [ 10 ] ; xx [ 14 ] = xx [ 94 ]
+ xx [ 55 ] ; xx [ 30 ] = xx [ 42 ] * xx [ 14 ] ; xx [ 48 ] = xx [ 10 ] - xx
[ 68 ] * ( xx [ 42 ] * xx [ 11 ] - xx [ 2 ] * xx [ 30 ] ) ; xx [ 49 ] = xx [
14 ] - xx [ 68 ] * ( xx [ 2 ] * xx [ 11 ] + xx [ 42 ] * xx [ 30 ] ) ; xx [ 50
] = xx [ 17 ] + xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 125 , xx + 48
, xx + 54 ) ; pm_math_Quaternion_xform_ra ( xx + 21 , xx + 111 , xx + 48 ) ;
pm_math_Quaternion_xform_ra ( xx + 21 , xx + 144 , xx + 62 ) ; xx [ 2 ] = xx
[ 88 ] * state [ 5 ] ; xx [ 10 ] = xx [ 87 ] * state [ 6 ] ; xx [ 11 ] = xx [
2 ] - xx [ 10 ] ; xx [ 14 ] = xx [ 88 ] * state [ 4 ] ; xx [ 17 ] = xx [ 87 ]
* state [ 4 ] ; xx [ 111 ] = xx [ 11 ] ; xx [ 112 ] = - xx [ 14 ] ; xx [ 113
] = xx [ 17 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 111 , xx + 115 ) ;
xx [ 30 ] = xx [ 14 ] * state [ 3 ] ; xx [ 32 ] = xx [ 87 ] * state [ 3 ] *
state [ 4 ] ; xx [ 35 ] = xx [ 87 ] * state [ 12 ] ; xx [ 42 ] = xx [ 88 ] *
state [ 11 ] ; xx [ 43 ] = xx [ 88 ] * state [ 10 ] ; xx [ 45 ] = xx [ 146 ]
- xx [ 87 ] * state [ 10 ] ; xx [ 111 ] = xx [ 144 ] + xx [ 35 ] - xx [ 42 ]
; xx [ 112 ] = xx [ 145 ] + xx [ 43 ] ; xx [ 113 ] = xx [ 45 ] ;
pm_math_Quaternion_xform_ra ( xx + 21 , xx + 111 , xx + 125 ) ; xx [ 46 ] =
xx [ 10 ] + xx [ 2 ] ; xx [ 111 ] = - xx [ 46 ] ; xx [ 112 ] = xx [ 14 ] ; xx
[ 113 ] = xx [ 17 ] ; pm_math_Vector3_cross_ra ( xx + 18 , xx + 111 , xx +
128 ) ; xx [ 17 ] = xx [ 144 ] + xx [ 42 ] + xx [ 35 ] ; xx [ 18 ] = xx [ 145
] - xx [ 43 ] ; xx [ 19 ] = xx [ 45 ] ; pm_math_Quaternion_xform_ra ( xx + 21
, xx + 17 , xx + 111 ) ; output [ 0 ] = state [ 19 ] ; output [ 1 ] = state [
20 ] ; output [ 3 ] = state [ 13 ] ; output [ 4 ] = state [ 15 ] ; output [ 6
] = state [ 14 ] ; output [ 7 ] = state [ 16 ] ; output [ 9 ] = state [ 17 ]
; output [ 10 ] = state [ 18 ] ; output [ 12 ] = state [ 27 ] ; output [ 13 ]
= state [ 28 ] ; output [ 15 ] = state [ 21 ] ; output [ 16 ] = state [ 23 ]
; output [ 18 ] = state [ 22 ] ; output [ 19 ] = state [ 24 ] ; output [ 21 ]
= state [ 25 ] ; output [ 22 ] = state [ 26 ] ; output [ 25 ] = xx [ 40 ] ;
output [ 26 ] = xx [ 53 ] ; output [ 27 ] = xx [ 66 ] ; output [ 28 ] = xx [
78 ] ; output [ 29 ] = xx [ 107 ] ; output [ 30 ] = xx [ 82 ] ; output [ 31 ]
= xx [ 83 ] ; output [ 32 ] = xx [ 58 ] ; output [ 33 ] = xx [ 68 ] * ( xx [
3 ] + xx [ 118 ] * xx [ 118 ] ) - xx [ 1 ] ; output [ 34 ] = xx [ 68 ] * ( xx
[ 4 ] + xx [ 5 ] ) ; output [ 35 ] = xx [ 68 ] * ( xx [ 6 ] - xx [ 7 ] ) ;
output [ 36 ] = xx [ 68 ] * ( xx [ 4 ] - xx [ 5 ] ) ; output [ 37 ] = xx [ 68
] * ( xx [ 3 ] + xx [ 121 ] * xx [ 121 ] ) - xx [ 1 ] ; output [ 38 ] = xx [
68 ] * ( xx [ 8 ] + xx [ 9 ] ) ; output [ 39 ] = xx [ 68 ] * ( xx [ 6 ] + xx
[ 7 ] ) ; output [ 40 ] = xx [ 68 ] * ( xx [ 8 ] - xx [ 9 ] ) ; output [ 41 ]
= xx [ 68 ] * ( xx [ 3 ] + xx [ 124 ] * xx [ 124 ] ) - xx [ 1 ] ; output [ 42
] = xx [ 59 ] + xx [ 68 ] * ( xx [ 61 ] * xx [ 71 ] + xx [ 132 ] ) + xx [ 85
] ; output [ 43 ] = xx [ 60 ] + xx [ 68 ] * ( xx [ 133 ] - xx [ 84 ] * xx [
71 ] ) + xx [ 69 ] ; output [ 44 ] = xx [ 68 ] * ( xx [ 134 ] - xx [ 110 ] *
xx [ 71 ] ) + xx [ 72 ] ; output [ 45 ] = xx [ 100 ] ; output [ 46 ] = xx [
101 ] ; output [ 47 ] = xx [ 102 ] ; output [ 48 ] = - xx [ 103 ] ; output [
49 ] = - xx [ 104 ] ; output [ 50 ] = - xx [ 105 ] ; output [ 51 ] = - xx [
106 ] ; output [ 52 ] = xx [ 68 ] * ( xx [ 67 ] * xx [ 71 ] + xx [ 135 ] ) -
xx [ 73 ] + xx [ 85 ] ; output [ 53 ] = xx [ 75 ] + xx [ 68 ] * ( xx [ 136 ]
+ xx [ 80 ] * xx [ 71 ] ) + xx [ 69 ] ; output [ 54 ] = xx [ 68 ] * ( xx [
137 ] - xx [ 86 ] * xx [ 71 ] ) + xx [ 72 ] ; output [ 55 ] = xx [ 138 ] ;
output [ 56 ] = xx [ 139 ] ; output [ 57 ] = xx [ 140 ] ; output [ 58 ] = xx
[ 68 ] * ( xx [ 108 ] * xx [ 13 ] + xx [ 141 ] ) - xx [ 57 ] + xx [ 25 ] ;
output [ 59 ] = xx [ 97 ] + xx [ 68 ] * ( xx [ 142 ] + xx [ 109 ] * xx [ 13 ]
) + xx [ 29 ] ; output [ 60 ] = xx [ 68 ] * ( xx [ 143 ] - xx [ 114 ] * xx [
13 ] ) + xx [ 47 ] ; output [ 61 ] = xx [ 151 ] ; output [ 62 ] = xx [ 152 ]
; output [ 63 ] = xx [ 153 ] ; output [ 64 ] = xx [ 68 ] * ( xx [ 12 ] + xx [
15 ] * xx [ 15 ] ) - xx [ 1 ] ; output [ 65 ] = xx [ 68 ] * ( xx [ 26 ] + xx
[ 28 ] ) ; output [ 66 ] = xx [ 68 ] * ( xx [ 33 ] - xx [ 34 ] ) ; output [
67 ] = xx [ 68 ] * ( xx [ 26 ] - xx [ 28 ] ) ; output [ 68 ] = xx [ 68 ] * (
xx [ 12 ] + xx [ 44 ] * xx [ 44 ] ) - xx [ 1 ] ; output [ 69 ] = xx [ 68 ] *
( xx [ 41 ] + xx [ 70 ] ) ; output [ 70 ] = xx [ 68 ] * ( xx [ 33 ] + xx [ 34
] ) ; output [ 71 ] = xx [ 68 ] * ( xx [ 41 ] - xx [ 70 ] ) ; output [ 72 ] =
xx [ 68 ] * ( xx [ 12 ] + xx [ 52 ] * xx [ 52 ] ) - xx [ 1 ] ; output [ 73 ]
= xx [ 59 ] + xx [ 68 ] * ( xx [ 65 ] * xx [ 13 ] + xx [ 154 ] ) + xx [ 25 ]
; output [ 74 ] = xx [ 60 ] + xx [ 68 ] * ( xx [ 155 ] - xx [ 76 ] * xx [ 13
] ) + xx [ 29 ] ; output [ 75 ] = xx [ 68 ] * ( xx [ 156 ] - xx [ 77 ] * xx [
13 ] ) + xx [ 47 ] ; output [ 76 ] = xx [ 157 ] ; output [ 77 ] = xx [ 158 ]
; output [ 78 ] = xx [ 159 ] ; output [ 79 ] = - xx [ 36 ] ; output [ 80 ] =
- xx [ 37 ] ; output [ 81 ] = - xx [ 38 ] ; output [ 82 ] = - xx [ 39 ] ;
output [ 83 ] = xx [ 68 ] * ( xx [ 79 ] * xx [ 13 ] + xx [ 148 ] ) - xx [ 73
] + xx [ 25 ] ; output [ 84 ] = xx [ 75 ] + xx [ 68 ] * ( xx [ 149 ] + xx [
81 ] * xx [ 13 ] ) + xx [ 29 ] ; output [ 85 ] = xx [ 68 ] * ( xx [ 150 ] -
xx [ 92 ] * xx [ 13 ] ) + xx [ 47 ] ; output [ 86 ] = xx [ 160 ] ; output [
87 ] = xx [ 161 ] ; output [ 88 ] = xx [ 162 ] ; output [ 89 ] = xx [ 95 ] ;
output [ 90 ] = xx [ 96 ] ; output [ 91 ] = xx [ 98 ] ; output [ 92 ] = xx [
89 ] ; output [ 93 ] = xx [ 90 ] ; output [ 94 ] = xx [ 91 ] ; output [ 95 ]
= xx [ 27 ] ; output [ 96 ] = xx [ 31 ] ; output [ 97 ] = xx [ 16 ] ; output
[ 98 ] = xx [ 54 ] ; output [ 99 ] = xx [ 55 ] ; output [ 100 ] = xx [ 56 ] ;
output [ 101 ] = state [ 3 ] ; output [ 102 ] = state [ 4 ] ; output [ 103 ]
= state [ 5 ] ; output [ 104 ] = state [ 6 ] ; output [ 105 ] = xx [ 48 ] ;
output [ 106 ] = xx [ 49 ] ; output [ 107 ] = xx [ 50 ] ; output [ 108 ] =
state [ 0 ] ; output [ 109 ] = state [ 1 ] ; output [ 110 ] = state [ 2 ] ;
output [ 111 ] = xx [ 62 ] ; output [ 112 ] = xx [ 63 ] ; output [ 113 ] = xx
[ 64 ] ; output [ 114 ] = xx [ 68 ] * ( xx [ 115 ] - xx [ 11 ] * state [ 3 ]
) + state [ 0 ] ; output [ 115 ] = xx [ 68 ] * ( xx [ 116 ] + xx [ 30 ] ) +
state [ 1 ] - xx [ 87 ] ; output [ 116 ] = xx [ 68 ] * ( xx [ 117 ] - xx [ 32
] ) + state [ 2 ] - xx [ 88 ] ; output [ 117 ] = xx [ 125 ] ; output [ 118 ]
= xx [ 126 ] ; output [ 119 ] = xx [ 127 ] ; output [ 120 ] = xx [ 68 ] * (
xx [ 128 ] + xx [ 46 ] * state [ 3 ] ) + state [ 0 ] ; output [ 121 ] = xx [
68 ] * ( xx [ 129 ] - xx [ 30 ] ) + state [ 1 ] - xx [ 87 ] ; output [ 122 ]
= xx [ 68 ] * ( xx [ 130 ] - xx [ 32 ] ) + state [ 2 ] + xx [ 88 ] ; output [
123 ] = xx [ 111 ] ; output [ 124 ] = xx [ 112 ] ; output [ 125 ] = xx [ 113
] ; return NULL ; }
