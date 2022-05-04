#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ramadan_2021_5be9147a_1_geometries.h"
PmfMessageId ramadan_2021_5be9147a_1_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; int ii [ 2 ] ; double xx [ 487 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ;
( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] =
state [ 6 ] ; xx [ 4 ] = state [ 10 ] ; xx [ 5 ] = state [ 11 ] ; xx [ 6 ] =
state [ 12 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 , xx + 7 ) ;
xx [ 0 ] = 1.0 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = state [ 5 ] * state [ 5 ] ; xx [
3 ] = state [ 6 ] * state [ 6 ] ; xx [ 11 ] = xx [ 0 ] - xx [ 1 ] * ( xx [ 2
] + xx [ 3 ] ) ; xx [ 12 ] = state [ 4 ] * state [ 5 ] ; xx [ 13 ] = state [
3 ] * state [ 6 ] ; xx [ 14 ] = xx [ 1 ] * ( xx [ 12 ] - xx [ 13 ] ) ; xx [
15 ] = state [ 3 ] * state [ 5 ] ; xx [ 16 ] = state [ 4 ] * state [ 6 ] ; xx
[ 17 ] = xx [ 1 ] * ( xx [ 15 ] + xx [ 16 ] ) ; xx [ 18 ] = xx [ 11 ] ; xx [
19 ] = xx [ 14 ] ; xx [ 20 ] = xx [ 17 ] ; xx [ 21 ] = 53.5 ; xx [ 22 ] = 0.5
; xx [ 23 ] = xx [ 22 ] * state [ 22 ] ; xx [ 24 ] = cos ( xx [ 23 ] ) ; xx [
25 ] = xx [ 22 ] * state [ 21 ] ; xx [ 26 ] = sin ( xx [ 25 ] ) ; xx [ 27 ] =
xx [ 24 ] * xx [ 26 ] ; xx [ 28 ] = xx [ 27 ] * xx [ 27 ] ; xx [ 29 ] = sin (
xx [ 23 ] ) ; xx [ 30 ] = xx [ 26 ] * xx [ 29 ] ; xx [ 26 ] = cos ( xx [ 25 ]
) ; xx [ 25 ] = xx [ 26 ] * xx [ 29 ] ; xx [ 31 ] = xx [ 25 ] * xx [ 30 ] ;
xx [ 32 ] = xx [ 26 ] * xx [ 24 ] ; xx [ 26 ] = xx [ 32 ] * xx [ 27 ] ; xx [
33 ] = xx [ 32 ] * xx [ 30 ] ; xx [ 34 ] = xx [ 25 ] * xx [ 27 ] ; xx [ 35 ]
= xx [ 32 ] * xx [ 25 ] ; xx [ 36 ] = xx [ 27 ] * xx [ 30 ] ; xx [ 37 ] = xx
[ 1 ] * ( xx [ 28 ] + xx [ 30 ] * xx [ 30 ] ) - xx [ 0 ] ; xx [ 38 ] = xx [ 1
] * ( xx [ 31 ] - xx [ 26 ] ) ; xx [ 39 ] = xx [ 1 ] * ( xx [ 33 ] + xx [ 34
] ) ; xx [ 40 ] = xx [ 1 ] * ( xx [ 31 ] + xx [ 26 ] ) ; xx [ 41 ] = xx [ 1 ]
* ( xx [ 28 ] + xx [ 25 ] * xx [ 25 ] ) - xx [ 0 ] ; xx [ 42 ] = xx [ 1 ] * (
xx [ 35 ] - xx [ 36 ] ) ; xx [ 43 ] = xx [ 1 ] * ( xx [ 33 ] - xx [ 34 ] ) ;
xx [ 44 ] = xx [ 1 ] * ( xx [ 35 ] + xx [ 36 ] ) ; xx [ 45 ] = xx [ 1 ] * (
xx [ 28 ] + xx [ 32 ] * xx [ 32 ] ) - xx [ 0 ] ; xx [ 26 ] = 8.5 ; xx [ 28 ]
= xx [ 22 ] * state [ 25 ] ; xx [ 31 ] = sin ( xx [ 28 ] ) ; xx [ 33 ] = xx [
31 ] * xx [ 31 ] ; xx [ 34 ] = xx [ 1 ] * xx [ 33 ] - xx [ 0 ] ; xx [ 35 ] =
3.5 ; xx [ 36 ] = 0.7061939498602465 ; xx [ 46 ] = xx [ 22 ] * state [ 27 ] ;
xx [ 47 ] = sin ( xx [ 46 ] ) ; xx [ 48 ] = 0.7080184356221128 ; xx [ 49 ] =
cos ( xx [ 46 ] ) ; xx [ 46 ] = xx [ 36 ] * xx [ 47 ] - xx [ 48 ] * xx [ 49 ]
; xx [ 50 ] = xx [ 46 ] * xx [ 46 ] ; xx [ 51 ] = xx [ 1 ] * xx [ 50 ] - xx [
0 ] ; xx [ 52 ] = 1.254 ; xx [ 53 ] = 0.01275483281592086 ; xx [ 54 ] =
5.705000000159994e-3 ; ii [ 0 ] = factorSymmetricPosDef ( xx + 54 , 1 , xx +
55 ) ; ii [ 1 ] = ii [ 0 ] != 0 ? 1 : 0 ; if ( ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/R Leg/Right Ankle (RA) Pitch' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 55 , xx + 54 , 1 * sizeof ( double ) ) ; xx [
56 ] = xx [ 53 ] / xx [ 55 ] ; xx [ 57 ] = xx [ 52 ] - xx [ 53 ] * xx [ 56 ]
; xx [ 58 ] = 0.02527299427922832 ; xx [ 59 ] = xx [ 58 ] * xx [ 56 ] ; xx [
60 ] = xx [ 48 ] * xx [ 47 ] + xx [ 36 ] * xx [ 49 ] ; xx [ 47 ] = xx [ 1 ] *
xx [ 46 ] * xx [ 60 ] ; xx [ 49 ] = xx [ 59 ] * xx [ 47 ] ; xx [ 61 ] = xx [
57 ] * xx [ 51 ] - xx [ 49 ] ; xx [ 62 ] = xx [ 59 ] * xx [ 51 ] ; xx [ 59 ]
= xx [ 58 ] / xx [ 55 ] ; xx [ 63 ] = xx [ 52 ] - xx [ 58 ] * xx [ 59 ] ; xx
[ 64 ] = xx [ 62 ] - xx [ 47 ] * xx [ 63 ] ; xx [ 65 ] = xx [ 51 ] * xx [ 61
] - xx [ 47 ] * xx [ 64 ] ; xx [ 66 ] = xx [ 35 ] + xx [ 65 ] ; xx [ 67 ] =
0.18 ; xx [ 68 ] = xx [ 1 ] * ( xx [ 50 ] + xx [ 60 ] * xx [ 60 ] ) - xx [ 0
] ; xx [ 50 ] = 5.065917065550745e-3 ; xx [ 69 ] = xx [ 50 ] * xx [ 59 ] ; xx
[ 70 ] = xx [ 50 ] * xx [ 56 ] ; xx [ 71 ] = xx [ 68 ] * ( xx [ 69 ] * xx [
47 ] + xx [ 70 ] * xx [ 51 ] ) ; xx [ 72 ] = xx [ 63 ] * xx [ 51 ] + xx [ 49
] ; xx [ 49 ] = xx [ 47 ] * xx [ 57 ] + xx [ 62 ] ; xx [ 57 ] = xx [ 47 ] *
xx [ 72 ] - xx [ 51 ] * xx [ 49 ] ; xx [ 62 ] = 0.01017131803502461 ; xx [ 63
] = xx [ 62 ] * xx [ 60 ] ; xx [ 73 ] = 0.02015390293399388 ; xx [ 74 ] = xx
[ 73 ] * xx [ 60 ] ; xx [ 75 ] = xx [ 1 ] * ( xx [ 63 ] * xx [ 46 ] + xx [ 74
] * xx [ 60 ] ) - xx [ 73 ] ; xx [ 76 ] = 0.2901713180350247 ; xx [ 77 ] = xx
[ 76 ] + xx [ 1 ] * ( xx [ 74 ] * xx [ 46 ] - xx [ 63 ] * xx [ 60 ] ) ; xx [
63 ] = xx [ 57 ] * xx [ 75 ] - xx [ 77 ] * xx [ 65 ] ; xx [ 65 ] = xx [ 71 ]
+ xx [ 63 ] ; xx [ 74 ] = xx [ 67 ] * xx [ 66 ] - xx [ 65 ] ; xx [ 78 ] =
0.05 ; xx [ 79 ] = xx [ 50 ] / xx [ 55 ] ; xx [ 80 ] = xx [ 68 ] * ( xx [ 69
] * xx [ 51 ] - xx [ 70 ] * xx [ 47 ] ) ; xx [ 69 ] = xx [ 71 ] * xx [ 77 ] -
xx [ 80 ] * xx [ 75 ] ; xx [ 70 ] = xx [ 47 ] * xx [ 61 ] + xx [ 51 ] * xx [
64 ] ; xx [ 61 ] = xx [ 47 ] * xx [ 49 ] + xx [ 51 ] * xx [ 72 ] ; xx [ 49 ]
= xx [ 70 ] * xx [ 77 ] + xx [ 75 ] * xx [ 61 ] ; xx [ 64 ] = xx [ 78 ] + (
xx [ 50 ] - xx [ 50 ] * xx [ 79 ] ) * xx [ 68 ] * xx [ 68 ] - xx [ 69 ] - xx
[ 69 ] + xx [ 75 ] * xx [ 49 ] - xx [ 77 ] * xx [ 63 ] ; xx [ 63 ] = xx [ 64
] - xx [ 67 ] * xx [ 65 ] ; xx [ 69 ] = xx [ 63 ] + xx [ 67 ] * xx [ 74 ] ;
ii [ 0 ] = factorSymmetricPosDef ( xx + 69 , 1 , xx + 71 ) ; if ( ii [ 0 ] !=
0 ? 1 : 0 != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/R Leg/Right Knee (RK) Pitch' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 71 ] = xx [ 74 ] / xx [ 69 ] ; xx [ 72 ] = xx [ 66 ] -
xx [ 74 ] * xx [ 71 ] ; xx [ 81 ] = cos ( xx [ 28 ] ) ; xx [ 28 ] = xx [ 1 ]
* xx [ 81 ] * xx [ 31 ] ; xx [ 82 ] = xx [ 80 ] + xx [ 49 ] ; xx [ 49 ] = xx
[ 67 ] * xx [ 70 ] + xx [ 82 ] ; xx [ 80 ] = xx [ 49 ] * xx [ 71 ] ; xx [ 83
] = xx [ 57 ] + xx [ 80 ] ; xx [ 84 ] = xx [ 34 ] * xx [ 72 ] + xx [ 28 ] *
xx [ 83 ] ; xx [ 85 ] = xx [ 80 ] - xx [ 70 ] ; xx [ 80 ] = xx [ 35 ] + xx [
61 ] ; xx [ 61 ] = xx [ 49 ] / xx [ 69 ] ; xx [ 86 ] = xx [ 80 ] - xx [ 49 ]
* xx [ 61 ] ; xx [ 87 ] = xx [ 34 ] * xx [ 85 ] + xx [ 28 ] * xx [ 86 ] ; xx
[ 88 ] = xx [ 34 ] * xx [ 84 ] + xx [ 28 ] * xx [ 87 ] ; xx [ 89 ] = xx [ 26
] + xx [ 88 ] ; xx [ 90 ] = 0.16 ; xx [ 91 ] = - xx [ 23 ] ; xx [ 23 ] = sin
( xx [ 91 ] ) ; xx [ 92 ] = xx [ 1 ] * xx [ 23 ] * xx [ 23 ] - xx [ 0 ] ; xx
[ 93 ] = xx [ 90 ] * xx [ 92 ] ; xx [ 94 ] = xx [ 1 ] * ( xx [ 33 ] + xx [ 81
] * xx [ 81 ] ) - xx [ 0 ] ; xx [ 33 ] = xx [ 65 ] + xx [ 63 ] * xx [ 71 ] ;
xx [ 95 ] = xx [ 82 ] - xx [ 63 ] * xx [ 61 ] ; xx [ 96 ] = xx [ 94 ] * ( xx
[ 34 ] * xx [ 33 ] + xx [ 28 ] * xx [ 95 ] ) ; xx [ 97 ] = xx [ 67 ] * xx [
81 ] ; xx [ 98 ] = 0.48 ; xx [ 99 ] = xx [ 1 ] * xx [ 97 ] * xx [ 81 ] - xx [
98 ] ; xx [ 100 ] = xx [ 1 ] * xx [ 97 ] * xx [ 31 ] ; xx [ 97 ] = xx [ 34 ]
* xx [ 83 ] - xx [ 28 ] * xx [ 72 ] ; xx [ 72 ] = xx [ 34 ] * xx [ 86 ] - xx
[ 28 ] * xx [ 85 ] ; xx [ 83 ] = xx [ 34 ] * xx [ 97 ] + xx [ 28 ] * xx [ 72
] ; xx [ 85 ] = xx [ 99 ] * xx [ 88 ] + xx [ 100 ] * xx [ 83 ] ; xx [ 86 ] =
xx [ 96 ] + xx [ 85 ] ; xx [ 88 ] = xx [ 93 ] * xx [ 89 ] - xx [ 86 ] * xx [
92 ] ; xx [ 101 ] = xx [ 1 ] * cos ( xx [ 91 ] ) * xx [ 23 ] ; xx [ 23 ] =
0.03 ; xx [ 91 ] = 3.000000000000003e-3 ; xx [ 102 ] = 7.257586739516191e-4 ;
xx [ 103 ] = xx [ 102 ] * xx [ 47 ] ; xx [ 104 ] = 5.052658391759128e-3 ; xx
[ 105 ] = xx [ 104 ] * xx [ 51 ] ; xx [ 106 ] = xx [ 52 ] * xx [ 68 ] * xx [
68 ] ; xx [ 68 ] = xx [ 106 ] * xx [ 75 ] ; xx [ 107 ] = xx [ 91 ] + xx [ 103
] * xx [ 47 ] + xx [ 105 ] * xx [ 51 ] + xx [ 68 ] * xx [ 75 ] ; xx [ 108 ] =
xx [ 104 ] * xx [ 47 ] ; xx [ 109 ] = xx [ 102 ] * xx [ 51 ] ; xx [ 110 ] =
xx [ 106 ] * xx [ 77 ] ; xx [ 111 ] = xx [ 108 ] * xx [ 51 ] - xx [ 109 ] *
xx [ 47 ] - xx [ 110 ] * xx [ 75 ] ; xx [ 112 ] = xx [ 34 ] * xx [ 107 ] - xx
[ 28 ] * xx [ 111 ] ; xx [ 113 ] = xx [ 105 ] * xx [ 47 ] - xx [ 103 ] * xx [
51 ] - xx [ 68 ] * xx [ 77 ] ; xx [ 103 ] = xx [ 78 ] + xx [ 109 ] * xx [ 51
] + xx [ 108 ] * xx [ 47 ] + xx [ 110 ] * xx [ 77 ] ; xx [ 47 ] = xx [ 34 ] *
xx [ 113 ] - xx [ 28 ] * xx [ 103 ] ; xx [ 51 ] = xx [ 68 ] * xx [ 94 ] ; xx
[ 105 ] = xx [ 110 ] * xx [ 94 ] ; xx [ 108 ] = xx [ 51 ] * xx [ 34 ] + xx [
28 ] * xx [ 105 ] ; xx [ 109 ] = xx [ 100 ] * xx [ 108 ] ; xx [ 114 ] = xx [
35 ] + xx [ 106 ] ; xx [ 106 ] = xx [ 94 ] * xx [ 114 ] * xx [ 94 ] ; xx [
115 ] = xx [ 100 ] * xx [ 106 ] ; xx [ 116 ] = xx [ 23 ] + xx [ 34 ] * xx [
112 ] - xx [ 28 ] * xx [ 47 ] + xx [ 109 ] + xx [ 109 ] + xx [ 100 ] * xx [
115 ] ; xx [ 109 ] = xx [ 101 ] * xx [ 116 ] ; xx [ 117 ] =
0.1499999999999999 ; xx [ 118 ] = xx [ 63 ] / xx [ 69 ] ; xx [ 119 ] = xx [
94 ] * ( xx [ 34 ] * xx [ 95 ] - xx [ 28 ] * xx [ 33 ] ) ; xx [ 33 ] = xx [
96 ] * xx [ 99 ] + xx [ 100 ] * xx [ 119 ] ; xx [ 95 ] = xx [ 34 ] * xx [ 87
] - xx [ 28 ] * xx [ 84 ] ; xx [ 84 ] = xx [ 34 ] * xx [ 72 ] - xx [ 28 ] *
xx [ 97 ] ; xx [ 72 ] = xx [ 95 ] * xx [ 99 ] + xx [ 100 ] * xx [ 84 ] ; xx [
87 ] = xx [ 117 ] + xx [ 94 ] * ( xx [ 64 ] - xx [ 63 ] * xx [ 118 ] ) * xx [
94 ] + xx [ 33 ] + xx [ 33 ] + xx [ 100 ] * xx [ 72 ] + xx [ 99 ] * xx [ 85 ]
; xx [ 33 ] = xx [ 87 ] * xx [ 92 ] - xx [ 93 ] * xx [ 86 ] ; xx [ 64 ] = xx
[ 34 ] * xx [ 111 ] + xx [ 28 ] * xx [ 107 ] ; xx [ 85 ] = xx [ 34 ] * xx [
103 ] + xx [ 28 ] * xx [ 113 ] ; xx [ 94 ] = xx [ 108 ] * xx [ 99 ] ; xx [ 96
] = xx [ 28 ] * xx [ 51 ] - xx [ 105 ] * xx [ 34 ] ; xx [ 51 ] = xx [ 100 ] *
xx [ 96 ] ; xx [ 97 ] = xx [ 106 ] * xx [ 99 ] ; xx [ 105 ] = xx [ 34 ] * xx
[ 64 ] - xx [ 28 ] * xx [ 85 ] + xx [ 94 ] + xx [ 51 ] + xx [ 100 ] * xx [ 97
] ; xx [ 120 ] = xx [ 108 ] + xx [ 115 ] ; xx [ 108 ] = xx [ 105 ] - xx [ 90
] * xx [ 120 ] ; xx [ 121 ] = xx [ 101 ] * xx [ 108 ] ; xx [ 122 ] = xx [ 99
] * xx [ 96 ] ; xx [ 123 ] = xx [ 117 ] + xx [ 34 ] * xx [ 85 ] + xx [ 28 ] *
xx [ 64 ] + xx [ 122 ] + xx [ 122 ] + xx [ 97 ] * xx [ 99 ] ; xx [ 64 ] = xx
[ 96 ] + xx [ 97 ] ; xx [ 85 ] = xx [ 123 ] - xx [ 90 ] * xx [ 64 ] ; xx [ 96
] = xx [ 26 ] + xx [ 106 ] ; xx [ 97 ] = xx [ 64 ] - xx [ 90 ] * xx [ 96 ] ;
xx [ 124 ] = xx [ 101 ] * xx [ 109 ] + xx [ 33 ] * xx [ 92 ] + xx [ 93 ] * xx
[ 88 ] ; xx [ 125 ] = xx [ 121 ] ; xx [ 126 ] = xx [ 121 ] ; xx [ 127 ] = xx
[ 85 ] - xx [ 90 ] * xx [ 97 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 124
, 2 , xx + 121 ) ; if ( ii [ 0 ] != 0 ? 1 : 0 != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/R Leg/Right Hip (RH) Pitch (about X) and Roll (about Y)  Joints' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 106 ] = xx [ 34 ] * xx [ 47 ] + xx [ 28 ] * xx [ 112 ]
+ xx [ 51 ] + xx [ 94 ] + xx [ 115 ] * xx [ 99 ] ; xx [ 28 ] = xx [ 101 ] *
xx [ 106 ] ; xx [ 34 ] = 0.0 ; xx [ 47 ] = xx [ 119 ] + xx [ 72 ] ; xx [ 51 ]
= xx [ 47 ] * xx [ 92 ] - xx [ 93 ] * xx [ 95 ] ; xx [ 72 ] = xx [ 101 ] * xx
[ 120 ] ; xx [ 128 ] = xx [ 28 ] ; xx [ 129 ] = xx [ 85 ] ; xx [ 130 ] = xx [
109 ] ; xx [ 131 ] = xx [ 108 ] ; xx [ 132 ] = xx [ 33 ] ; xx [ 133 ] = xx [
34 ] ; xx [ 134 ] = xx [ 88 ] ; xx [ 135 ] = xx [ 34 ] ; xx [ 136 ] = - xx [
51 ] ; xx [ 137 ] = xx [ 34 ] ; xx [ 138 ] = xx [ 72 ] ; xx [ 139 ] = xx [ 97
] ; solveSymmetricPosDef ( xx + 124 , xx + 128 , 2 , 6 , xx + 140 , xx + 121
) ; xx [ 94 ] = xx [ 51 ] * xx [ 146 ] ; xx [ 112 ] = - ( xx [ 72 ] * xx [
146 ] + xx [ 97 ] * xx [ 147 ] ) ; xx [ 115 ] = xx [ 26 ] + xx [ 84 ] ; xx [
84 ] = - ( xx [ 72 ] * xx [ 148 ] + xx [ 97 ] * xx [ 149 ] ) ; xx [ 128 ] =
xx [ 89 ] - xx [ 88 ] * xx [ 146 ] ; xx [ 129 ] = xx [ 83 ] + xx [ 94 ] ; xx
[ 130 ] = xx [ 112 ] ; xx [ 131 ] = xx [ 95 ] + xx [ 94 ] ; xx [ 132 ] = xx [
115 ] + xx [ 51 ] * xx [ 148 ] ; xx [ 133 ] = xx [ 84 ] ; xx [ 134 ] = xx [
112 ] ; xx [ 135 ] = xx [ 84 ] ; xx [ 136 ] = xx [ 96 ] - ( xx [ 72 ] * xx [
150 ] + xx [ 97 ] * xx [ 151 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx
+ 128 , xx + 37 , xx + 152 ) ; pm_math_Matrix3x3_compose_ra ( xx + 37 , xx +
152 , xx + 128 ) ; xx [ 84 ] = xx [ 22 ] * state [ 14 ] ; xx [ 94 ] = cos (
xx [ 84 ] ) ; xx [ 112 ] = xx [ 22 ] * state [ 13 ] ; xx [ 119 ] = sin ( xx [
112 ] ) ; xx [ 121 ] = xx [ 94 ] * xx [ 119 ] ; xx [ 122 ] = xx [ 121 ] * xx
[ 121 ] ; xx [ 137 ] = sin ( xx [ 84 ] ) ; xx [ 138 ] = xx [ 119 ] * xx [ 137
] ; xx [ 119 ] = cos ( xx [ 112 ] ) ; xx [ 112 ] = xx [ 119 ] * xx [ 137 ] ;
xx [ 139 ] = xx [ 112 ] * xx [ 138 ] ; xx [ 152 ] = xx [ 119 ] * xx [ 94 ] ;
xx [ 119 ] = xx [ 152 ] * xx [ 121 ] ; xx [ 153 ] = xx [ 152 ] * xx [ 138 ] ;
xx [ 154 ] = xx [ 112 ] * xx [ 121 ] ; xx [ 155 ] = xx [ 152 ] * xx [ 112 ] ;
xx [ 156 ] = xx [ 121 ] * xx [ 138 ] ; xx [ 157 ] = xx [ 1 ] * ( xx [ 122 ] +
xx [ 138 ] * xx [ 138 ] ) - xx [ 0 ] ; xx [ 158 ] = xx [ 1 ] * ( xx [ 139 ] -
xx [ 119 ] ) ; xx [ 159 ] = xx [ 1 ] * ( xx [ 153 ] + xx [ 154 ] ) ; xx [ 160
] = xx [ 1 ] * ( xx [ 139 ] + xx [ 119 ] ) ; xx [ 161 ] = xx [ 1 ] * ( xx [
122 ] + xx [ 112 ] * xx [ 112 ] ) - xx [ 0 ] ; xx [ 162 ] = xx [ 1 ] * ( xx [
155 ] - xx [ 156 ] ) ; xx [ 163 ] = xx [ 1 ] * ( xx [ 153 ] - xx [ 154 ] ) ;
xx [ 164 ] = xx [ 1 ] * ( xx [ 155 ] + xx [ 156 ] ) ; xx [ 165 ] = xx [ 1 ] *
( xx [ 122 ] + xx [ 152 ] * xx [ 152 ] ) - xx [ 0 ] ; xx [ 119 ] = xx [ 22 ]
* state [ 17 ] ; xx [ 122 ] = sin ( xx [ 119 ] ) ; xx [ 139 ] = xx [ 122 ] *
xx [ 122 ] ; xx [ 153 ] = xx [ 1 ] * xx [ 139 ] - xx [ 0 ] ; xx [ 154 ] = xx
[ 22 ] * state [ 19 ] ; xx [ 22 ] = sin ( xx [ 154 ] ) ; xx [ 155 ] = cos (
xx [ 154 ] ) ; xx [ 154 ] = xx [ 36 ] * xx [ 22 ] - xx [ 48 ] * xx [ 155 ] ;
xx [ 156 ] = xx [ 154 ] * xx [ 154 ] ; xx [ 166 ] = xx [ 1 ] * xx [ 156 ] -
xx [ 0 ] ; if ( ii [ 1 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/L Leg/Left Ankle (LA) Pitch' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 167 ] = xx [ 53 ] / xx [ 54 ] ; xx [ 168 ] = xx [ 52 ]
- xx [ 53 ] * xx [ 167 ] ; xx [ 169 ] = xx [ 58 ] * xx [ 167 ] ; xx [ 170 ] =
xx [ 48 ] * xx [ 22 ] + xx [ 36 ] * xx [ 155 ] ; xx [ 22 ] = xx [ 1 ] * xx [
154 ] * xx [ 170 ] ; xx [ 36 ] = xx [ 169 ] * xx [ 22 ] ; xx [ 48 ] = xx [
168 ] * xx [ 166 ] - xx [ 36 ] ; xx [ 155 ] = xx [ 169 ] * xx [ 166 ] ; xx [
169 ] = xx [ 58 ] / xx [ 54 ] ; xx [ 171 ] = xx [ 52 ] - xx [ 58 ] * xx [ 169
] ; xx [ 172 ] = xx [ 155 ] - xx [ 22 ] * xx [ 171 ] ; xx [ 173 ] = xx [ 166
] * xx [ 48 ] - xx [ 22 ] * xx [ 172 ] ; xx [ 174 ] = xx [ 35 ] + xx [ 173 ]
; xx [ 175 ] = xx [ 1 ] * ( xx [ 156 ] + xx [ 170 ] * xx [ 170 ] ) - xx [ 0 ]
; xx [ 156 ] = xx [ 50 ] * xx [ 169 ] ; xx [ 176 ] = xx [ 50 ] * xx [ 167 ] ;
xx [ 177 ] = xx [ 175 ] * ( xx [ 156 ] * xx [ 22 ] + xx [ 176 ] * xx [ 166 ]
) ; xx [ 178 ] = xx [ 171 ] * xx [ 166 ] + xx [ 36 ] ; xx [ 36 ] = xx [ 22 ]
* xx [ 168 ] + xx [ 155 ] ; xx [ 155 ] = xx [ 22 ] * xx [ 178 ] - xx [ 166 ]
* xx [ 36 ] ; xx [ 168 ] = xx [ 62 ] * xx [ 170 ] ; xx [ 171 ] = xx [ 73 ] *
xx [ 170 ] ; xx [ 179 ] = xx [ 1 ] * ( xx [ 168 ] * xx [ 154 ] + xx [ 171 ] *
xx [ 170 ] ) - xx [ 73 ] ; xx [ 180 ] = xx [ 76 ] + xx [ 1 ] * ( xx [ 171 ] *
xx [ 154 ] - xx [ 168 ] * xx [ 170 ] ) ; xx [ 76 ] = xx [ 155 ] * xx [ 179 ]
- xx [ 180 ] * xx [ 173 ] ; xx [ 168 ] = xx [ 177 ] + xx [ 76 ] ; xx [ 171 ]
= xx [ 67 ] * xx [ 174 ] - xx [ 168 ] ; xx [ 173 ] = xx [ 50 ] / xx [ 54 ] ;
xx [ 181 ] = xx [ 175 ] * ( xx [ 156 ] * xx [ 166 ] - xx [ 176 ] * xx [ 22 ]
) ; xx [ 156 ] = xx [ 177 ] * xx [ 180 ] - xx [ 181 ] * xx [ 179 ] ; xx [ 176
] = xx [ 22 ] * xx [ 48 ] + xx [ 166 ] * xx [ 172 ] ; xx [ 48 ] = xx [ 22 ] *
xx [ 36 ] + xx [ 166 ] * xx [ 178 ] ; xx [ 36 ] = xx [ 176 ] * xx [ 180 ] +
xx [ 179 ] * xx [ 48 ] ; xx [ 172 ] = xx [ 78 ] + ( xx [ 50 ] - xx [ 50 ] *
xx [ 173 ] ) * xx [ 175 ] * xx [ 175 ] - xx [ 156 ] - xx [ 156 ] + xx [ 179 ]
* xx [ 36 ] - xx [ 180 ] * xx [ 76 ] ; xx [ 76 ] = xx [ 172 ] - xx [ 67 ] *
xx [ 168 ] ; xx [ 156 ] = xx [ 76 ] + xx [ 67 ] * xx [ 171 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 156 , 1 , xx + 177 ) ; if ( ii [ 0 ] != 0 ? 1 :
0 != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/L Leg/Left Knee (LK) Pitch' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 177 ] = xx [ 171 ] / xx [ 156 ] ; xx [ 178 ] = xx [
174 ] - xx [ 171 ] * xx [ 177 ] ; xx [ 182 ] = cos ( xx [ 119 ] ) ; xx [ 119
] = xx [ 1 ] * xx [ 182 ] * xx [ 122 ] ; xx [ 183 ] = xx [ 181 ] + xx [ 36 ]
; xx [ 36 ] = xx [ 67 ] * xx [ 176 ] + xx [ 183 ] ; xx [ 181 ] = xx [ 36 ] *
xx [ 177 ] ; xx [ 184 ] = xx [ 155 ] + xx [ 181 ] ; xx [ 185 ] = xx [ 153 ] *
xx [ 178 ] + xx [ 119 ] * xx [ 184 ] ; xx [ 186 ] = xx [ 181 ] - xx [ 176 ] ;
xx [ 181 ] = xx [ 35 ] + xx [ 48 ] ; xx [ 48 ] = xx [ 36 ] / xx [ 156 ] ; xx
[ 187 ] = xx [ 181 ] - xx [ 36 ] * xx [ 48 ] ; xx [ 188 ] = xx [ 153 ] * xx [
186 ] + xx [ 119 ] * xx [ 187 ] ; xx [ 189 ] = xx [ 153 ] * xx [ 185 ] + xx [
119 ] * xx [ 188 ] ; xx [ 190 ] = xx [ 26 ] + xx [ 189 ] ; xx [ 191 ] = - xx
[ 84 ] ; xx [ 84 ] = sin ( xx [ 191 ] ) ; xx [ 192 ] = xx [ 1 ] * xx [ 84 ] *
xx [ 84 ] - xx [ 0 ] ; xx [ 193 ] = xx [ 90 ] * xx [ 192 ] ; xx [ 194 ] = xx
[ 1 ] * ( xx [ 139 ] + xx [ 182 ] * xx [ 182 ] ) - xx [ 0 ] ; xx [ 139 ] = xx
[ 168 ] + xx [ 76 ] * xx [ 177 ] ; xx [ 195 ] = xx [ 183 ] - xx [ 76 ] * xx [
48 ] ; xx [ 196 ] = xx [ 194 ] * ( xx [ 153 ] * xx [ 139 ] + xx [ 119 ] * xx
[ 195 ] ) ; xx [ 197 ] = xx [ 67 ] * xx [ 182 ] ; xx [ 198 ] = xx [ 1 ] * xx
[ 197 ] * xx [ 182 ] - xx [ 98 ] ; xx [ 98 ] = xx [ 1 ] * xx [ 197 ] * xx [
122 ] ; xx [ 197 ] = xx [ 153 ] * xx [ 184 ] - xx [ 119 ] * xx [ 178 ] ; xx [
178 ] = xx [ 153 ] * xx [ 187 ] - xx [ 119 ] * xx [ 186 ] ; xx [ 184 ] = xx [
153 ] * xx [ 197 ] + xx [ 119 ] * xx [ 178 ] ; xx [ 186 ] = xx [ 198 ] * xx [
189 ] + xx [ 98 ] * xx [ 184 ] ; xx [ 187 ] = xx [ 196 ] + xx [ 186 ] ; xx [
189 ] = xx [ 193 ] * xx [ 190 ] - xx [ 187 ] * xx [ 192 ] ; xx [ 199 ] = xx [
1 ] * cos ( xx [ 191 ] ) * xx [ 84 ] ; xx [ 84 ] = xx [ 102 ] * xx [ 22 ] ;
xx [ 191 ] = xx [ 104 ] * xx [ 166 ] ; xx [ 200 ] = xx [ 52 ] * xx [ 175 ] *
xx [ 175 ] ; xx [ 175 ] = xx [ 200 ] * xx [ 179 ] ; xx [ 201 ] = xx [ 91 ] +
xx [ 84 ] * xx [ 22 ] + xx [ 191 ] * xx [ 166 ] + xx [ 175 ] * xx [ 179 ] ;
xx [ 202 ] = xx [ 104 ] * xx [ 22 ] ; xx [ 203 ] = xx [ 102 ] * xx [ 166 ] ;
xx [ 204 ] = xx [ 200 ] * xx [ 180 ] ; xx [ 205 ] = xx [ 202 ] * xx [ 166 ] -
xx [ 203 ] * xx [ 22 ] - xx [ 204 ] * xx [ 179 ] ; xx [ 206 ] = xx [ 153 ] *
xx [ 201 ] - xx [ 119 ] * xx [ 205 ] ; xx [ 207 ] = xx [ 191 ] * xx [ 22 ] -
xx [ 84 ] * xx [ 166 ] - xx [ 175 ] * xx [ 180 ] ; xx [ 84 ] = xx [ 78 ] + xx
[ 203 ] * xx [ 166 ] + xx [ 202 ] * xx [ 22 ] + xx [ 204 ] * xx [ 180 ] ; xx
[ 22 ] = xx [ 153 ] * xx [ 207 ] - xx [ 119 ] * xx [ 84 ] ; xx [ 166 ] = xx [
175 ] * xx [ 194 ] ; xx [ 191 ] = xx [ 204 ] * xx [ 194 ] ; xx [ 202 ] = xx [
166 ] * xx [ 153 ] + xx [ 119 ] * xx [ 191 ] ; xx [ 203 ] = xx [ 98 ] * xx [
202 ] ; xx [ 208 ] = xx [ 35 ] + xx [ 200 ] ; xx [ 35 ] = xx [ 194 ] * xx [
208 ] * xx [ 194 ] ; xx [ 200 ] = xx [ 98 ] * xx [ 35 ] ; xx [ 209 ] = xx [
23 ] + xx [ 153 ] * xx [ 206 ] - xx [ 119 ] * xx [ 22 ] + xx [ 203 ] + xx [
203 ] + xx [ 98 ] * xx [ 200 ] ; xx [ 203 ] = xx [ 199 ] * xx [ 209 ] ; xx [
210 ] = 0.15 ; xx [ 211 ] = xx [ 76 ] / xx [ 156 ] ; xx [ 212 ] = xx [ 194 ]
* ( xx [ 153 ] * xx [ 195 ] - xx [ 119 ] * xx [ 139 ] ) ; xx [ 139 ] = xx [
196 ] * xx [ 198 ] + xx [ 98 ] * xx [ 212 ] ; xx [ 195 ] = xx [ 153 ] * xx [
188 ] - xx [ 119 ] * xx [ 185 ] ; xx [ 185 ] = xx [ 153 ] * xx [ 178 ] - xx [
119 ] * xx [ 197 ] ; xx [ 178 ] = xx [ 195 ] * xx [ 198 ] + xx [ 98 ] * xx [
185 ] ; xx [ 188 ] = xx [ 210 ] + xx [ 194 ] * ( xx [ 172 ] - xx [ 76 ] * xx
[ 211 ] ) * xx [ 194 ] + xx [ 139 ] + xx [ 139 ] + xx [ 98 ] * xx [ 178 ] +
xx [ 198 ] * xx [ 186 ] ; xx [ 139 ] = xx [ 188 ] * xx [ 192 ] - xx [ 193 ] *
xx [ 187 ] ; xx [ 172 ] = xx [ 153 ] * xx [ 205 ] + xx [ 119 ] * xx [ 201 ] ;
xx [ 186 ] = xx [ 153 ] * xx [ 84 ] + xx [ 119 ] * xx [ 207 ] ; xx [ 194 ] =
xx [ 202 ] * xx [ 198 ] ; xx [ 196 ] = xx [ 119 ] * xx [ 166 ] - xx [ 191 ] *
xx [ 153 ] ; xx [ 166 ] = xx [ 98 ] * xx [ 196 ] ; xx [ 191 ] = xx [ 35 ] *
xx [ 198 ] ; xx [ 197 ] = xx [ 153 ] * xx [ 172 ] - xx [ 119 ] * xx [ 186 ] +
xx [ 194 ] + xx [ 166 ] + xx [ 98 ] * xx [ 191 ] ; xx [ 213 ] = xx [ 202 ] +
xx [ 200 ] ; xx [ 202 ] = xx [ 197 ] - xx [ 90 ] * xx [ 213 ] ; xx [ 214 ] =
xx [ 199 ] * xx [ 202 ] ; xx [ 215 ] = xx [ 198 ] * xx [ 196 ] ; xx [ 216 ] =
xx [ 210 ] + xx [ 153 ] * xx [ 186 ] + xx [ 119 ] * xx [ 172 ] + xx [ 215 ] +
xx [ 215 ] + xx [ 191 ] * xx [ 198 ] ; xx [ 172 ] = xx [ 196 ] + xx [ 191 ] ;
xx [ 186 ] = xx [ 216 ] - xx [ 90 ] * xx [ 172 ] ; xx [ 191 ] = xx [ 26 ] +
xx [ 35 ] ; xx [ 35 ] = xx [ 172 ] - xx [ 90 ] * xx [ 191 ] ; xx [ 217 ] = xx
[ 199 ] * xx [ 203 ] + xx [ 139 ] * xx [ 192 ] + xx [ 193 ] * xx [ 189 ] ; xx
[ 218 ] = xx [ 214 ] ; xx [ 219 ] = xx [ 214 ] ; xx [ 220 ] = xx [ 186 ] - xx
[ 90 ] * xx [ 35 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 217 , 2 , xx +
214 ) ; if ( ii [ 0 ] != 0 ? 1 : 0 != 0 ) { return sm_ssci_recordRunTimeError
( "sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/L Leg/Left Hip (LH) Pitch (about X) and Roll (about Y)  Joints' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 196 ] = xx [ 153 ] * xx [ 22 ] + xx [ 119 ] * xx [ 206
] + xx [ 166 ] + xx [ 194 ] + xx [ 200 ] * xx [ 198 ] ; xx [ 22 ] = xx [ 199
] * xx [ 196 ] ; xx [ 119 ] = xx [ 212 ] + xx [ 178 ] ; xx [ 153 ] = xx [ 119
] * xx [ 192 ] - xx [ 193 ] * xx [ 195 ] ; xx [ 166 ] = xx [ 199 ] * xx [ 213
] ; xx [ 221 ] = xx [ 22 ] ; xx [ 222 ] = xx [ 186 ] ; xx [ 223 ] = xx [ 203
] ; xx [ 224 ] = xx [ 202 ] ; xx [ 225 ] = xx [ 139 ] ; xx [ 226 ] = xx [ 34
] ; xx [ 227 ] = xx [ 189 ] ; xx [ 228 ] = xx [ 34 ] ; xx [ 229 ] = - xx [
153 ] ; xx [ 230 ] = xx [ 34 ] ; xx [ 231 ] = xx [ 166 ] ; xx [ 232 ] = xx [
35 ] ; solveSymmetricPosDef ( xx + 217 , xx + 221 , 2 , 6 , xx + 233 , xx +
214 ) ; xx [ 178 ] = xx [ 153 ] * xx [ 239 ] ; xx [ 194 ] = - ( xx [ 166 ] *
xx [ 239 ] + xx [ 35 ] * xx [ 240 ] ) ; xx [ 200 ] = xx [ 26 ] + xx [ 185 ] ;
xx [ 26 ] = - ( xx [ 166 ] * xx [ 241 ] + xx [ 35 ] * xx [ 242 ] ) ; xx [ 221
] = xx [ 190 ] - xx [ 189 ] * xx [ 239 ] ; xx [ 222 ] = xx [ 184 ] + xx [ 178
] ; xx [ 223 ] = xx [ 194 ] ; xx [ 224 ] = xx [ 195 ] + xx [ 178 ] ; xx [ 225
] = xx [ 200 ] + xx [ 153 ] * xx [ 241 ] ; xx [ 226 ] = xx [ 26 ] ; xx [ 227
] = xx [ 194 ] ; xx [ 228 ] = xx [ 26 ] ; xx [ 229 ] = xx [ 191 ] - ( xx [
166 ] * xx [ 243 ] + xx [ 35 ] * xx [ 244 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 221 , xx + 157 , xx + 245 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 157 , xx + 245 , xx + 221 ) ; xx [ 245 ]
= xx [ 21 ] + xx [ 128 ] + xx [ 221 ] ; xx [ 246 ] = xx [ 129 ] + xx [ 222 ]
; xx [ 247 ] = xx [ 130 ] + xx [ 223 ] ; xx [ 248 ] = xx [ 131 ] + xx [ 224 ]
; xx [ 249 ] = xx [ 21 ] + xx [ 132 ] + xx [ 225 ] ; xx [ 250 ] = xx [ 133 ]
+ xx [ 226 ] ; xx [ 251 ] = xx [ 134 ] + xx [ 227 ] ; xx [ 252 ] = xx [ 135 ]
+ xx [ 228 ] ; xx [ 253 ] = xx [ 21 ] + xx [ 136 ] + xx [ 229 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 245 , xx + 18 , xx + 230 ) ; xx [ 21 ] = xx
[ 1 ] * ( xx [ 13 ] + xx [ 12 ] ) ; xx [ 12 ] = state [ 4 ] * state [ 4 ] ;
xx [ 13 ] = xx [ 0 ] - xx [ 1 ] * ( xx [ 3 ] + xx [ 12 ] ) ; xx [ 3 ] = state
[ 5 ] * state [ 6 ] ; xx [ 26 ] = state [ 3 ] * state [ 4 ] ; xx [ 178 ] = xx
[ 1 ] * ( xx [ 3 ] - xx [ 26 ] ) ; xx [ 254 ] = xx [ 21 ] ; xx [ 255 ] = xx [
13 ] ; xx [ 256 ] = xx [ 178 ] ; pm_math_Matrix3x3_xform_ra ( xx + 245 , xx +
254 , xx + 257 ) ; xx [ 185 ] = pm_math_Vector3_dot_ra ( xx + 18 , xx + 257 )
; xx [ 194 ] = xx [ 1 ] * ( xx [ 16 ] - xx [ 15 ] ) ; xx [ 15 ] = xx [ 1 ] *
( xx [ 26 ] + xx [ 3 ] ) ; xx [ 3 ] = xx [ 0 ] - xx [ 1 ] * ( xx [ 12 ] + xx
[ 2 ] ) ; xx [ 260 ] = xx [ 194 ] ; xx [ 261 ] = xx [ 15 ] ; xx [ 262 ] = xx
[ 3 ] ; pm_math_Matrix3x3_xform_ra ( xx + 245 , xx + 260 , xx + 263 ) ; xx [
2 ] = pm_math_Vector3_dot_ra ( xx + 18 , xx + 263 ) ; xx [ 266 ] = - ( xx [
28 ] * xx [ 146 ] + xx [ 85 ] * xx [ 147 ] ) ; xx [ 267 ] = - ( xx [ 28 ] *
xx [ 148 ] + xx [ 85 ] * xx [ 149 ] ) ; xx [ 268 ] = xx [ 64 ] - ( xx [ 28 ]
* xx [ 150 ] + xx [ 85 ] * xx [ 151 ] ) ; xx [ 269 ] = - ( xx [ 109 ] * xx [
146 ] + xx [ 108 ] * xx [ 147 ] ) ; xx [ 270 ] = - ( xx [ 109 ] * xx [ 148 ]
+ xx [ 108 ] * xx [ 149 ] ) ; xx [ 271 ] = xx [ 120 ] - ( xx [ 109 ] * xx [
150 ] + xx [ 108 ] * xx [ 151 ] ) ; xx [ 272 ] = - ( xx [ 86 ] + xx [ 33 ] *
xx [ 146 ] ) ; xx [ 273 ] = - ( xx [ 47 ] + xx [ 33 ] * xx [ 148 ] ) ; xx [
274 ] = - ( xx [ 33 ] * xx [ 150 ] ) ; pm_math_Matrix3x3_composeTranspose_ra
( xx + 266 , xx + 37 , xx + 275 ) ; pm_math_Matrix3x3_compose_ra ( xx + 37 ,
xx + 275 , xx + 266 ) ; xx [ 12 ] = xx [ 90 ] * xx [ 32 ] ; xx [ 16 ] = xx [
90 ] * xx [ 30 ] ; xx [ 26 ] = 0.35 ; xx [ 206 ] = 0.1 ; xx [ 275 ] = xx [ 1
] * ( xx [ 12 ] * xx [ 27 ] - xx [ 16 ] * xx [ 25 ] ) ; xx [ 276 ] = xx [ 1 ]
* ( xx [ 12 ] * xx [ 32 ] + xx [ 16 ] * xx [ 30 ] ) - xx [ 90 ] - xx [ 26 ] ;
xx [ 277 ] = xx [ 206 ] - xx [ 1 ] * ( xx [ 16 ] * xx [ 27 ] + xx [ 12 ] * xx
[ 25 ] ) ; pm_math_Matrix3x3_postCross_ra ( xx + 128 , xx + 275 , xx + 278 )
; xx [ 128 ] = - ( xx [ 22 ] * xx [ 239 ] + xx [ 186 ] * xx [ 240 ] ) ; xx [
129 ] = - ( xx [ 22 ] * xx [ 241 ] + xx [ 186 ] * xx [ 242 ] ) ; xx [ 130 ] =
xx [ 172 ] - ( xx [ 22 ] * xx [ 243 ] + xx [ 186 ] * xx [ 244 ] ) ; xx [ 131
] = - ( xx [ 203 ] * xx [ 239 ] + xx [ 202 ] * xx [ 240 ] ) ; xx [ 132 ] = -
( xx [ 203 ] * xx [ 241 ] + xx [ 202 ] * xx [ 242 ] ) ; xx [ 133 ] = xx [ 213
] - ( xx [ 203 ] * xx [ 243 ] + xx [ 202 ] * xx [ 244 ] ) ; xx [ 134 ] = - (
xx [ 187 ] + xx [ 139 ] * xx [ 239 ] ) ; xx [ 135 ] = - ( xx [ 119 ] + xx [
139 ] * xx [ 241 ] ) ; xx [ 136 ] = - ( xx [ 139 ] * xx [ 243 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 128 , xx + 157 , xx + 287 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 157 , xx + 287 , xx + 128 ) ; xx [ 12 ] =
xx [ 90 ] * xx [ 152 ] ; xx [ 16 ] = xx [ 90 ] * xx [ 138 ] ; xx [ 287 ] = xx
[ 1 ] * ( xx [ 12 ] * xx [ 121 ] - xx [ 16 ] * xx [ 112 ] ) ; xx [ 288 ] = xx
[ 1 ] * ( xx [ 12 ] * xx [ 152 ] + xx [ 16 ] * xx [ 138 ] ) - xx [ 90 ] - xx
[ 26 ] ; xx [ 289 ] = - ( xx [ 206 ] + xx [ 1 ] * ( xx [ 16 ] * xx [ 121 ] +
xx [ 12 ] * xx [ 112 ] ) ) ; pm_math_Matrix3x3_postCross_ra ( xx + 221 , xx +
287 , xx + 290 ) ; xx [ 12 ] = xx [ 266 ] - xx [ 278 ] + xx [ 128 ] - xx [
290 ] ; xx [ 16 ] = xx [ 267 ] - xx [ 281 ] + xx [ 129 ] - xx [ 293 ] ; xx [
26 ] = xx [ 268 ] - xx [ 284 ] + xx [ 130 ] - xx [ 296 ] ; xx [ 221 ] = xx [
12 ] ; xx [ 222 ] = xx [ 16 ] ; xx [ 223 ] = xx [ 26 ] ; xx [ 206 ] =
pm_math_Vector3_dot_ra ( xx + 18 , xx + 221 ) ; xx [ 212 ] = xx [ 269 ] - xx
[ 279 ] + xx [ 131 ] - xx [ 291 ] ; xx [ 214 ] = xx [ 270 ] - xx [ 282 ] + xx
[ 132 ] - xx [ 294 ] ; xx [ 215 ] = xx [ 271 ] - xx [ 285 ] + xx [ 133 ] - xx
[ 297 ] ; xx [ 224 ] = xx [ 212 ] ; xx [ 225 ] = xx [ 214 ] ; xx [ 226 ] = xx
[ 215 ] ; xx [ 227 ] = pm_math_Vector3_dot_ra ( xx + 18 , xx + 224 ) ; xx [
228 ] = xx [ 272 ] - xx [ 280 ] + xx [ 134 ] - xx [ 292 ] ; xx [ 229 ] = xx [
273 ] - xx [ 283 ] + xx [ 135 ] - xx [ 295 ] ; xx [ 299 ] = xx [ 274 ] - xx [
286 ] + xx [ 136 ] - xx [ 298 ] ; xx [ 300 ] = xx [ 228 ] ; xx [ 301 ] = xx [
229 ] ; xx [ 302 ] = xx [ 299 ] ; xx [ 303 ] = pm_math_Vector3_dot_ra ( xx +
18 , xx + 300 ) ; xx [ 304 ] = pm_math_Vector3_dot_ra ( xx + 254 , xx + 263 )
; xx [ 305 ] = pm_math_Vector3_dot_ra ( xx + 254 , xx + 221 ) ; xx [ 306 ] =
pm_math_Vector3_dot_ra ( xx + 254 , xx + 224 ) ; xx [ 307 ] =
pm_math_Vector3_dot_ra ( xx + 254 , xx + 300 ) ; xx [ 308 ] =
pm_math_Vector3_dot_ra ( xx + 260 , xx + 221 ) ; xx [ 221 ] =
pm_math_Vector3_dot_ra ( xx + 260 , xx + 224 ) ; xx [ 222 ] =
pm_math_Vector3_dot_ra ( xx + 260 , xx + 300 ) ; xx [ 223 ] = 4.0 ; xx [ 224
] = xx [ 109 ] * xx [ 140 ] + xx [ 108 ] * xx [ 141 ] ; xx [ 225 ] = - ( xx [
33 ] * xx [ 140 ] ) ; xx [ 226 ] = - ( xx [ 33 ] * xx [ 142 ] ) ; xx [ 309 ]
= xx [ 123 ] - ( xx [ 28 ] * xx [ 140 ] + xx [ 85 ] * xx [ 141 ] ) ; xx [ 310
] = xx [ 106 ] - xx [ 224 ] ; xx [ 311 ] = xx [ 225 ] ; xx [ 312 ] = xx [ 105
] - xx [ 224 ] ; xx [ 313 ] = xx [ 116 ] - ( xx [ 109 ] * xx [ 142 ] + xx [
108 ] * xx [ 143 ] ) ; xx [ 314 ] = xx [ 226 ] ; xx [ 315 ] = xx [ 225 ] ; xx
[ 316 ] = xx [ 226 ] ; xx [ 317 ] = xx [ 87 ] - xx [ 33 ] * xx [ 144 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 309 , xx + 37 , xx + 318 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 37 , xx + 318 , xx + 309 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 266 , xx + 275 , xx + 37 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 278 , xx + 275 , xx + 266 ) ; xx [ 224 ]
= xx [ 203 ] * xx [ 233 ] + xx [ 202 ] * xx [ 234 ] ; xx [ 225 ] = - ( xx [
139 ] * xx [ 233 ] ) ; xx [ 226 ] = - ( xx [ 139 ] * xx [ 235 ] ) ; xx [ 278
] = xx [ 216 ] - ( xx [ 22 ] * xx [ 233 ] + xx [ 186 ] * xx [ 234 ] ) ; xx [
279 ] = xx [ 196 ] - xx [ 224 ] ; xx [ 280 ] = xx [ 225 ] ; xx [ 281 ] = xx [
197 ] - xx [ 224 ] ; xx [ 282 ] = xx [ 209 ] - ( xx [ 203 ] * xx [ 235 ] + xx
[ 202 ] * xx [ 236 ] ) ; xx [ 283 ] = xx [ 226 ] ; xx [ 284 ] = xx [ 225 ] ;
xx [ 285 ] = xx [ 226 ] ; xx [ 286 ] = xx [ 188 ] - xx [ 139 ] * xx [ 237 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 278 , xx + 157 , xx + 318 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 157 , xx + 318 , xx + 278 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 128 , xx + 287 , xx + 157 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 290 , xx + 287 , xx + 128 ) ; xx [ 224 ]
= xx [ 223 ] + xx [ 309 ] - xx [ 37 ] - xx [ 37 ] - xx [ 266 ] + xx [ 278 ] -
xx [ 157 ] - xx [ 157 ] - xx [ 128 ] ; xx [ 225 ] = xx [ 310 ] - xx [ 38 ] -
xx [ 40 ] - xx [ 267 ] + xx [ 279 ] - xx [ 158 ] - xx [ 160 ] - xx [ 129 ] ;
xx [ 226 ] = xx [ 311 ] - xx [ 39 ] - xx [ 43 ] - xx [ 268 ] + xx [ 280 ] -
xx [ 159 ] - xx [ 163 ] - xx [ 130 ] ; xx [ 290 ] = xx [ 0 ] + xx [ 313 ] -
xx [ 41 ] - xx [ 41 ] - xx [ 270 ] + xx [ 282 ] - xx [ 161 ] - xx [ 161 ] -
xx [ 132 ] ; xx [ 291 ] = xx [ 314 ] - xx [ 42 ] - xx [ 44 ] - xx [ 271 ] +
xx [ 283 ] - xx [ 162 ] - xx [ 164 ] - xx [ 133 ] ; xx [ 292 ] = 2.5 ; xx [
37 ] = xx [ 292 ] + xx [ 317 ] - xx [ 45 ] - xx [ 45 ] - xx [ 274 ] + xx [
286 ] - xx [ 165 ] - xx [ 165 ] - xx [ 136 ] ; xx [ 318 ] =
pm_math_Vector3_dot_ra ( xx + 18 , xx + 230 ) ; xx [ 319 ] = xx [ 185 ] ; xx
[ 320 ] = xx [ 2 ] ; xx [ 321 ] = xx [ 206 ] ; xx [ 322 ] = xx [ 227 ] ; xx [
323 ] = xx [ 303 ] ; xx [ 324 ] = xx [ 185 ] ; xx [ 325 ] =
pm_math_Vector3_dot_ra ( xx + 254 , xx + 257 ) ; xx [ 326 ] = xx [ 304 ] ; xx
[ 327 ] = xx [ 305 ] ; xx [ 328 ] = xx [ 306 ] ; xx [ 329 ] = xx [ 307 ] ; xx
[ 330 ] = xx [ 2 ] ; xx [ 331 ] = xx [ 304 ] ; xx [ 332 ] =
pm_math_Vector3_dot_ra ( xx + 260 , xx + 263 ) ; xx [ 333 ] = xx [ 308 ] ; xx
[ 334 ] = xx [ 221 ] ; xx [ 335 ] = xx [ 222 ] ; xx [ 336 ] = xx [ 206 ] ; xx
[ 337 ] = xx [ 305 ] ; xx [ 338 ] = xx [ 308 ] ; xx [ 339 ] = xx [ 224 ] ; xx
[ 340 ] = xx [ 225 ] ; xx [ 341 ] = xx [ 226 ] ; xx [ 342 ] = xx [ 227 ] ; xx
[ 343 ] = xx [ 306 ] ; xx [ 344 ] = xx [ 221 ] ; xx [ 345 ] = xx [ 225 ] ; xx
[ 346 ] = xx [ 290 ] ; xx [ 347 ] = xx [ 291 ] ; xx [ 348 ] = xx [ 303 ] ; xx
[ 349 ] = xx [ 307 ] ; xx [ 350 ] = xx [ 222 ] ; xx [ 351 ] = xx [ 226 ] ; xx
[ 352 ] = xx [ 291 ] ; xx [ 353 ] = xx [ 37 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 318 , 6 , xx + 293 ) ; if ( ii [ 0 ] != 0 ? 1 :
0 != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ramadan_2021/Body and Contact Model/6-DOF Joint IC' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 293 ] = xx [ 27 ] ; xx [ 294 ] = xx [ 30 ] ; xx [ 295
] = xx [ 25 ] ; xx [ 296 ] = xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 293 , xx + 4 , xx + 300 ) ; xx [ 2 ] = xx [ 300 ] + state [ 24 ] ; xx [
25 ] = xx [ 1 ] * xx [ 24 ] * xx [ 29 ] ; xx [ 24 ] = xx [ 25 ] * state [ 23
] ; xx [ 27 ] = xx [ 301 ] - xx [ 24 ] ; xx [ 30 ] = xx [ 27 ] * xx [ 81 ] ;
xx [ 32 ] = xx [ 2 ] * xx [ 81 ] ; xx [ 41 ] = xx [ 2 ] - xx [ 1 ] * ( xx [
30 ] * xx [ 31 ] + xx [ 32 ] * xx [ 81 ] ) ; xx [ 45 ] = xx [ 27 ] + xx [ 1 ]
* ( xx [ 32 ] * xx [ 31 ] - xx [ 30 ] * xx [ 81 ] ) ; xx [ 30 ] = xx [ 1 ] *
xx [ 29 ] * xx [ 29 ] ; xx [ 29 ] = state [ 23 ] * ( xx [ 30 ] - xx [ 0 ] ) ;
xx [ 32 ] = xx [ 302 ] + xx [ 29 ] ; xx [ 157 ] = xx [ 32 ] + state [ 26 ] ;
xx [ 303 ] = xx [ 41 ] ; xx [ 304 ] = xx [ 45 ] ; xx [ 305 ] = xx [ 157 ] ;
xx [ 161 ] = xx [ 77 ] * xx [ 157 ] ; xx [ 165 ] = xx [ 75 ] * xx [ 157 ] ;
xx [ 185 ] = xx [ 75 ] * xx [ 45 ] - xx [ 41 ] * xx [ 77 ] ; xx [ 306 ] = xx
[ 161 ] ; xx [ 307 ] = - xx [ 165 ] ; xx [ 308 ] = xx [ 185 ] ;
pm_math_Vector3_cross_ra ( xx + 303 , xx + 306 , xx + 354 ) ; xx [ 206 ] = xx
[ 60 ] * xx [ 355 ] ; xx [ 221 ] = xx [ 60 ] * xx [ 354 ] ; xx [ 222 ] = xx [
73 ] * state [ 28 ] ; xx [ 227 ] = xx [ 157 ] + state [ 28 ] ; xx [ 297 ] =
xx [ 157 ] + xx [ 227 ] ; xx [ 357 ] = xx [ 0 ] ; xx [ 358 ] = xx [ 34 ] ; xx
[ 359 ] = xx [ 34 ] ; xx [ 360 ] = xx [ 34 ] ; xx [ 361 ] = xx [ 34 ] ; xx [
362 ] = - xx [ 78 ] ; xx [ 363 ] = xx [ 34 ] ; xx [ 298 ] =
0.9999991678125799 ; xx [ 364 ] = - state [ 3 ] ; xx [ 365 ] = - state [ 4 ]
; xx [ 366 ] = - state [ 5 ] ; xx [ 367 ] = - state [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 364 , xx + 293 , xx + 368 ) ; xx [ 306 ]
= xx [ 31 ] * xx [ 368 ] + xx [ 81 ] * xx [ 371 ] ; xx [ 307 ] = xx [ 81 ] *
xx [ 368 ] - xx [ 31 ] * xx [ 371 ] ; xx [ 308 ] = xx [ 46 ] * xx [ 306 ] -
xx [ 307 ] * xx [ 60 ] ; xx [ 372 ] = xx [ 298 ] * xx [ 308 ] ; xx [ 373 ] =
1.29010625439384e-3 ; xx [ 374 ] = xx [ 307 ] * xx [ 46 ] + xx [ 306 ] * xx [
60 ] ; xx [ 375 ] = xx [ 373 ] * xx [ 374 ] ; xx [ 376 ] = xx [ 81 ] * xx [
370 ] - xx [ 31 ] * xx [ 369 ] ; xx [ 377 ] = xx [ 31 ] * xx [ 370 ] + xx [
81 ] * xx [ 369 ] ; xx [ 378 ] = xx [ 376 ] * xx [ 46 ] + xx [ 377 ] * xx [
60 ] ; xx [ 379 ] = xx [ 298 ] * xx [ 378 ] ; xx [ 380 ] = xx [ 46 ] * xx [
377 ] - xx [ 376 ] * xx [ 60 ] ; xx [ 381 ] = xx [ 373 ] * xx [ 380 ] ; xx [
382 ] = xx [ 298 ] * xx [ 380 ] ; xx [ 383 ] = xx [ 373 ] * xx [ 378 ] ; xx [
384 ] = xx [ 298 ] * xx [ 374 ] ; xx [ 385 ] = xx [ 373 ] * xx [ 308 ] ; xx [
386 ] = - xx [ 308 ] ; xx [ 387 ] = xx [ 378 ] ; xx [ 388 ] = - xx [ 380 ] ;
xx [ 389 ] = xx [ 374 ] ; xx [ 308 ] = 0.1400519812952043 ; xx [ 374 ] = -
0.06941558200726426 ; xx [ 378 ] = - 0.04999999999999541 ; xx [ 390 ] = xx [
308 ] ; xx [ 391 ] = xx [ 374 ] ; xx [ 392 ] = xx [ 378 ] ;
pm_math_Quaternion_xform_ra ( xx + 386 , xx + 390 , xx + 393 ) ; xx [ 396 ] =
xx [ 376 ] ; xx [ 397 ] = - xx [ 377 ] ; xx [ 398 ] = xx [ 307 ] ; xx [ 380 ]
= xx [ 307 ] * xx [ 77 ] ; xx [ 399 ] = xx [ 307 ] * xx [ 75 ] ; xx [ 307 ] =
xx [ 376 ] * xx [ 77 ] + xx [ 75 ] * xx [ 377 ] ; xx [ 400 ] = xx [ 380 ] ;
xx [ 401 ] = - xx [ 399 ] ; xx [ 402 ] = - xx [ 307 ] ;
pm_math_Vector3_cross_ra ( xx + 396 , xx + 400 , xx + 403 ) ; xx [ 376 ] = xx
[ 99 ] * xx [ 371 ] ; xx [ 377 ] = xx [ 100 ] * xx [ 371 ] ; xx [ 396 ] = xx
[ 99 ] * xx [ 369 ] + xx [ 100 ] * xx [ 370 ] ; xx [ 400 ] = - xx [ 376 ] ;
xx [ 401 ] = - xx [ 377 ] ; xx [ 402 ] = xx [ 396 ] ;
pm_math_Vector3_cross_ra ( xx + 369 , xx + 400 , xx + 406 ) ;
pm_math_Quaternion_xform_ra ( xx + 364 , xx + 275 , xx + 369 ) ; xx [ 397 ] =
xx [ 1 ] * ( xx [ 403 ] - xx [ 380 ] * xx [ 306 ] ) - xx [ 75 ] + xx [ 1 ] *
( xx [ 406 ] - xx [ 376 ] * xx [ 368 ] ) - xx [ 100 ] + xx [ 369 ] + state [
0 ] ; xx [ 376 ] = xx [ 1 ] * ( xx [ 399 ] * xx [ 306 ] + xx [ 404 ] ) - xx [
77 ] + xx [ 99 ] + xx [ 1 ] * ( xx [ 407 ] - xx [ 377 ] * xx [ 368 ] ) + xx [
370 ] + state [ 1 ] ; xx [ 369 ] = xx [ 1 ] * ( xx [ 405 ] + xx [ 307 ] * xx
[ 306 ] ) + xx [ 1 ] * ( xx [ 396 ] * xx [ 368 ] + xx [ 408 ] ) + xx [ 371 ]
+ state [ 2 ] ; xx [ 398 ] = - ( xx [ 372 ] + xx [ 375 ] ) ; xx [ 399 ] = xx
[ 379 ] - xx [ 381 ] ; xx [ 400 ] = - ( xx [ 382 ] + xx [ 383 ] ) ; xx [ 401
] = xx [ 384 ] - xx [ 385 ] ; xx [ 402 ] = xx [ 393 ] + xx [ 397 ] ; xx [ 403
] = xx [ 394 ] + xx [ 376 ] ; xx [ 404 ] = xx [ 395 ] + xx [ 369 ] ; xx [ 306
] = sm_core_compiler_computeProximityInfoBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 398 ) , ( pm_math_Vector3 * ) ( xx +
393 ) , ( pm_math_Vector3 * ) ( xx + 405 ) , ( pm_math_Vector3 * ) ( xx + 408
) , ( pm_math_Vector3 * ) ( xx + 411 ) ) ; xx [ 414 ] = xx [ 298 ] ; xx [ 415
] = xx [ 34 ] ; xx [ 416 ] = xx [ 34 ] ; xx [ 417 ] = xx [ 373 ] ; xx [ 418 ]
= xx [ 308 ] ; xx [ 419 ] = xx [ 374 ] ; xx [ 420 ] = xx [ 378 ] ; xx [ 307 ]
= xx [ 45 ] * xx [ 60 ] ; xx [ 308 ] = xx [ 41 ] * xx [ 60 ] ; xx [ 368 ] =
xx [ 41 ] - xx [ 1 ] * ( xx [ 307 ] * xx [ 46 ] + xx [ 308 ] * xx [ 60 ] ) ;
xx [ 370 ] = xx [ 45 ] - xx [ 1 ] * ( xx [ 307 ] * xx [ 60 ] - xx [ 308 ] *
xx [ 46 ] ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 275 , xx + 421 ) ; xx
[ 424 ] = state [ 7 ] ; xx [ 425 ] = state [ 8 ] ; xx [ 426 ] = state [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 364 , xx + 424 , xx + 427 ) ; xx [
424 ] = xx [ 421 ] + xx [ 427 ] ; xx [ 425 ] = xx [ 422 ] + xx [ 428 ] ; xx [
426 ] = xx [ 423 ] + xx [ 429 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
293 , xx + 424 , xx + 430 ) ; xx [ 307 ] = xx [ 90 ] * xx [ 29 ] ; xx [ 308 ]
= xx [ 99 ] * xx [ 32 ] ; xx [ 371 ] = xx [ 430 ] + xx [ 307 ] - xx [ 308 ] ;
xx [ 374 ] = xx [ 100 ] * xx [ 32 ] ; xx [ 377 ] = xx [ 431 ] - xx [ 374 ] ;
xx [ 378 ] = xx [ 377 ] * xx [ 81 ] ; xx [ 380 ] = xx [ 371 ] * xx [ 81 ] ;
xx [ 396 ] = xx [ 67 ] * state [ 26 ] ; xx [ 424 ] = xx [ 371 ] - xx [ 1 ] *
( xx [ 378 ] * xx [ 31 ] + xx [ 380 ] * xx [ 81 ] ) + xx [ 396 ] + xx [ 161 ]
; xx [ 161 ] = xx [ 377 ] + xx [ 1 ] * ( xx [ 380 ] * xx [ 31 ] - xx [ 378 ]
* xx [ 81 ] ) - xx [ 165 ] ; xx [ 165 ] = xx [ 161 ] * xx [ 60 ] ; xx [ 371 ]
= xx [ 424 ] * xx [ 60 ] ; xx [ 377 ] = xx [ 62 ] * state [ 28 ] ; xx [ 378 ]
= xx [ 99 ] * xx [ 2 ] + xx [ 100 ] * xx [ 27 ] ; xx [ 380 ] = xx [ 90 ] *
state [ 24 ] ; xx [ 433 ] = xx [ 368 ] ; xx [ 434 ] = xx [ 370 ] ; xx [ 435 ]
= xx [ 227 ] ; xx [ 436 ] = xx [ 424 ] - xx [ 1 ] * ( xx [ 165 ] * xx [ 46 ]
+ xx [ 371 ] * xx [ 60 ] ) + xx [ 377 ] ; xx [ 437 ] = xx [ 161 ] - xx [ 1 ]
* ( xx [ 165 ] * xx [ 60 ] - xx [ 371 ] * xx [ 46 ] ) + xx [ 222 ] ; xx [ 438
] = xx [ 185 ] + xx [ 378 ] + xx [ 432 ] - xx [ 380 ] ; xx [ 161 ] = 5.886e4
; xx [ 165 ] = 1765.8 ; xx [ 185 ] = 5.0e-3 ; xx [ 371 ] = 0.8 ; xx [ 424 ] =
0.1185159684804053 ; xx [ 425 ] = 8.163427856437172e-3 ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 306 , ( const
pm_math_Vector3 * ) ( xx + 393 ) , ( const pm_math_Vector3 * ) ( xx + 405 ) ,
( const pm_math_Vector3 * ) ( xx + 408 ) , ( const pm_math_Vector3 * ) ( xx +
411 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 414 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 398 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 433 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 439 ) ) ; xx [ 306 ] = xx [ 372 ] + xx [ 375
] ; xx [ 372 ] = xx [ 381 ] - xx [ 379 ] ; xx [ 375 ] = xx [ 382 ] + xx [ 383
] ; xx [ 379 ] = xx [ 385 ] - xx [ 384 ] ; xx [ 381 ] = 0.1400519812952043 ;
xx [ 382 ] = - 0.06941558200725774 ; xx [ 383 ] = 0.0500000000000046 ;
pm_math_Quaternion_xform_ra ( xx + 386 , xx + 381 , xx + 393 ) ; xx [ 398 ] =
xx [ 306 ] ; xx [ 399 ] = xx [ 372 ] ; xx [ 400 ] = xx [ 375 ] ; xx [ 401 ] =
xx [ 379 ] ; xx [ 402 ] = xx [ 393 ] + xx [ 397 ] ; xx [ 403 ] = xx [ 394 ] +
xx [ 376 ] ; xx [ 404 ] = xx [ 395 ] + xx [ 369 ] ; xx [ 384 ] =
sm_core_compiler_computeProximityInfoBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 398 ) , ( pm_math_Vector3 * ) ( xx +
393 ) , ( pm_math_Vector3 * ) ( xx + 405 ) , ( pm_math_Vector3 * ) ( xx + 408
) , ( pm_math_Vector3 * ) ( xx + 411 ) ) ; xx [ 385 ] = - xx [ 298 ] ; xx [
426 ] = - xx [ 373 ] ; xx [ 445 ] = xx [ 385 ] ; xx [ 446 ] = xx [ 34 ] ; xx
[ 447 ] = xx [ 34 ] ; xx [ 448 ] = xx [ 426 ] ; xx [ 449 ] = xx [ 381 ] ; xx
[ 450 ] = xx [ 382 ] ; xx [ 451 ] = xx [ 383 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 384 , ( const
pm_math_Vector3 * ) ( xx + 393 ) , ( const pm_math_Vector3 * ) ( xx + 405 ) ,
( const pm_math_Vector3 * ) ( xx + 408 ) , ( const pm_math_Vector3 * ) ( xx +
411 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 445 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 398 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 433 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 452 ) ) ; xx [ 384 ] = - 0.05994735295513665
; xx [ 393 ] = - 0.06993162407957609 ; xx [ 394 ] = - 0.02499999999999548 ;
xx [ 398 ] = xx [ 384 ] ; xx [ 399 ] = xx [ 393 ] ; xx [ 400 ] = xx [ 394 ] ;
pm_math_Quaternion_xform_ra ( xx + 386 , xx + 398 , xx + 401 ) ; xx [ 404 ] =
xx [ 306 ] ; xx [ 405 ] = xx [ 372 ] ; xx [ 406 ] = xx [ 375 ] ; xx [ 407 ] =
xx [ 379 ] ; xx [ 408 ] = xx [ 401 ] + xx [ 397 ] ; xx [ 409 ] = xx [ 402 ] +
xx [ 376 ] ; xx [ 410 ] = xx [ 403 ] + xx [ 369 ] ; xx [ 395 ] =
sm_core_compiler_computeProximityInfoBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 404 ) , ( pm_math_Vector3 * ) ( xx +
401 ) , ( pm_math_Vector3 * ) ( xx + 411 ) , ( pm_math_Vector3 * ) ( xx + 430
) , ( pm_math_Vector3 * ) ( xx + 458 ) ) ; xx [ 461 ] = xx [ 385 ] ; xx [ 462
] = xx [ 34 ] ; xx [ 463 ] = xx [ 34 ] ; xx [ 464 ] = xx [ 426 ] ; xx [ 465 ]
= xx [ 384 ] ; xx [ 466 ] = xx [ 393 ] ; xx [ 467 ] = xx [ 394 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 395 , ( const
pm_math_Vector3 * ) ( xx + 401 ) , ( const pm_math_Vector3 * ) ( xx + 411 ) ,
( const pm_math_Vector3 * ) ( xx + 430 ) , ( const pm_math_Vector3 * ) ( xx +
458 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 461 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 404 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 433 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 468 ) ) ; xx [ 384 ] = - 0.05994735295513668
; xx [ 393 ] = - 0.06993162407957283 ; xx [ 394 ] = 0.02500000000000453 ; xx
[ 401 ] = xx [ 384 ] ; xx [ 402 ] = xx [ 393 ] ; xx [ 403 ] = xx [ 394 ] ;
pm_math_Quaternion_xform_ra ( xx + 386 , xx + 401 , xx + 404 ) ; xx [ 407 ] =
xx [ 306 ] ; xx [ 408 ] = xx [ 372 ] ; xx [ 409 ] = xx [ 375 ] ; xx [ 410 ] =
xx [ 379 ] ; xx [ 411 ] = xx [ 404 ] + xx [ 397 ] ; xx [ 412 ] = xx [ 405 ] +
xx [ 376 ] ; xx [ 413 ] = xx [ 406 ] + xx [ 369 ] ; xx [ 306 ] =
sm_core_compiler_computeProximityInfoBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 407 ) , ( pm_math_Vector3 * ) ( xx +
386 ) , ( pm_math_Vector3 * ) ( xx + 404 ) , ( pm_math_Vector3 * ) ( xx + 430
) , ( pm_math_Vector3 * ) ( xx + 458 ) ) ; xx [ 474 ] = xx [ 385 ] ; xx [ 475
] = xx [ 34 ] ; xx [ 476 ] = xx [ 34 ] ; xx [ 477 ] = xx [ 426 ] ; xx [ 478 ]
= xx [ 384 ] ; xx [ 479 ] = xx [ 393 ] ; xx [ 480 ] = xx [ 394 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 306 , ( const
pm_math_Vector3 * ) ( xx + 386 ) , ( const pm_math_Vector3 * ) ( xx + 404 ) ,
( const pm_math_Vector3 * ) ( xx + 430 ) , ( const pm_math_Vector3 * ) ( xx +
458 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 474 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 407 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 433 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 481 ) ) ; xx [ 306 ] = xx [ 52 ] * ( xx [
354 ] - xx [ 1 ] * ( xx [ 206 ] * xx [ 46 ] + xx [ 221 ] * xx [ 60 ] ) - xx [
222 ] * xx [ 297 ] ) - ( xx [ 442 ] + xx [ 455 ] + xx [ 471 ] + xx [ 484 ] )
; xx [ 384 ] = xx [ 368 ] ; xx [ 385 ] = xx [ 370 ] ; xx [ 386 ] = xx [ 227 ]
; xx [ 387 ] = xx [ 102 ] * xx [ 368 ] ; xx [ 388 ] = xx [ 104 ] * xx [ 370 ]
; xx [ 389 ] = xx [ 50 ] * xx [ 227 ] ; pm_math_Vector3_cross_ra ( xx + 384 ,
xx + 387 , xx + 393 ) ; xx [ 227 ] = xx [ 395 ] - xx [ 441 ] - xx [ 454 ] -
xx [ 470 ] - xx [ 483 ] ; xx [ 369 ] = xx [ 52 ] * ( xx [ 377 ] * xx [ 297 ]
+ xx [ 355 ] - xx [ 1 ] * ( xx [ 206 ] * xx [ 60 ] - xx [ 221 ] * xx [ 46 ] )
) - ( xx [ 443 ] + xx [ 456 ] + xx [ 472 ] + xx [ 485 ] ) ; xx [ 206 ] = (
input [ 4 ] - ( xx [ 227 ] + xx [ 62 ] * xx [ 306 ] + xx [ 73 ] * xx [ 369 ]
) ) / xx [ 55 ] ; xx [ 55 ] = xx [ 306 ] + xx [ 53 ] * xx [ 206 ] ; xx [ 221
] = xx [ 55 ] * xx [ 60 ] ; xx [ 297 ] = xx [ 369 ] + xx [ 58 ] * xx [ 206 ]
; xx [ 306 ] = xx [ 297 ] * xx [ 60 ] ; xx [ 369 ] = xx [ 55 ] - xx [ 1 ] * (
xx [ 221 ] * xx [ 60 ] - xx [ 306 ] * xx [ 46 ] ) ; xx [ 384 ] = xx [ 2 ] ;
xx [ 385 ] = xx [ 27 ] ; xx [ 386 ] = xx [ 32 ] ; xx [ 387 ] = - xx [ 308 ] ;
xx [ 388 ] = - xx [ 374 ] ; xx [ 389 ] = xx [ 378 ] ;
pm_math_Vector3_cross_ra ( xx + 384 , xx + 387 , xx + 374 ) ; xx [ 55 ] = xx
[ 81 ] * xx [ 375 ] ; xx [ 308 ] = xx [ 81 ] * xx [ 374 ] ; xx [ 372 ] = xx [
374 ] - xx [ 1 ] * ( xx [ 55 ] * xx [ 31 ] + xx [ 308 ] * xx [ 81 ] ) ; xx [
378 ] = xx [ 396 ] * ( xx [ 32 ] + xx [ 157 ] ) + xx [ 375 ] + xx [ 1 ] * (
xx [ 308 ] * xx [ 31 ] - xx [ 55 ] * xx [ 81 ] ) ; xx [ 55 ] = xx [ 369 ] +
xx [ 372 ] * xx [ 66 ] + xx [ 57 ] * xx [ 378 ] ; xx [ 387 ] = xx [ 78 ] * xx
[ 41 ] ; xx [ 388 ] = xx [ 91 ] * xx [ 45 ] ; xx [ 389 ] = xx [ 78 ] * xx [
157 ] ; pm_math_Vector3_cross_ra ( xx + 303 , xx + 387 , xx + 404 ) ; xx [ 57
] = xx [ 297 ] - xx [ 1 ] * ( xx [ 221 ] * xx [ 46 ] + xx [ 306 ] * xx [ 60 ]
) ; xx [ 66 ] = xx [ 406 ] + xx [ 227 ] + xx [ 50 ] * xx [ 206 ] - ( xx [ 75
] * xx [ 57 ] - xx [ 369 ] * xx [ 77 ] ) - ( xx [ 65 ] * xx [ 372 ] + xx [
378 ] * xx [ 82 ] ) ; xx [ 65 ] = ( input [ 7 ] - ( xx [ 66 ] + xx [ 67 ] *
xx [ 55 ] ) ) / xx [ 69 ] ; xx [ 69 ] = xx [ 55 ] + xx [ 74 ] * xx [ 65 ] ;
xx [ 55 ] = xx [ 57 ] + xx [ 80 ] * xx [ 378 ] - xx [ 70 ] * xx [ 372 ] - xx
[ 49 ] * xx [ 65 ] ; xx [ 49 ] = xx [ 55 ] * xx [ 81 ] ; xx [ 57 ] = xx [ 69
] * xx [ 81 ] ; xx [ 70 ] = xx [ 69 ] + xx [ 1 ] * ( xx [ 49 ] * xx [ 31 ] -
xx [ 57 ] * xx [ 81 ] ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 421 , xx +
303 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 293 , xx + 303 , xx + 387 )
; xx [ 69 ] = xx [ 301 ] + xx [ 27 ] ; xx [ 74 ] = state [ 23 ] * state [ 24
] ; xx [ 80 ] = xx [ 25 ] * xx [ 74 ] ; xx [ 25 ] = xx [ 387 ] - xx [ 380 ] *
xx [ 69 ] + xx [ 90 ] * xx [ 80 ] ; xx [ 82 ] = xx [ 388 ] + xx [ 307 ] * (
xx [ 302 ] + xx [ 32 ] ) + xx [ 380 ] * ( xx [ 300 ] + xx [ 2 ] ) ; xx [ 303
] = state [ 24 ] ; xx [ 304 ] = - xx [ 24 ] ; xx [ 305 ] = xx [ 29 ] ;
pm_math_Vector3_cross_ra ( xx + 300 , xx + 303 , xx + 407 ) ; xx [ 24 ] = xx
[ 409 ] + xx [ 80 ] ; xx [ 29 ] = xx [ 70 ] + xx [ 25 ] * xx [ 89 ] + xx [ 82
] * xx [ 83 ] - xx [ 86 ] * xx [ 24 ] ; xx [ 300 ] = xx [ 117 ] * xx [ 2 ] ;
xx [ 301 ] = xx [ 23 ] * xx [ 27 ] ; xx [ 302 ] = xx [ 117 ] * xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 384 , xx + 300 , xx + 303 ) ; xx [ 2 ] = xx [
394 ] - xx [ 440 ] - xx [ 453 ] - xx [ 469 ] - xx [ 482 ] - xx [ 104 ] *
state [ 28 ] * xx [ 368 ] ; xx [ 27 ] = xx [ 393 ] - xx [ 439 ] - xx [ 452 ]
- xx [ 468 ] - xx [ 481 ] + xx [ 102 ] * xx [ 370 ] * state [ 28 ] ; xx [ 32
] = xx [ 27 ] * xx [ 60 ] ; xx [ 80 ] = xx [ 2 ] * xx [ 60 ] ; xx [ 83 ] = xx
[ 52 ] * ( xx [ 222 ] * ( xx [ 368 ] + xx [ 368 ] ) - xx [ 377 ] * ( xx [ 370
] + xx [ 370 ] ) + xx [ 356 ] ) - ( xx [ 444 ] + xx [ 457 ] + xx [ 473 ] + xx
[ 486 ] ) ; xx [ 89 ] = state [ 26 ] * xx [ 45 ] ; xx [ 117 ] = xx [ 41 ] *
state [ 26 ] ; xx [ 41 ] = xx [ 376 ] - xx [ 396 ] * ( xx [ 45 ] + xx [ 45 ]
) ; xx [ 45 ] = xx [ 405 ] + xx [ 2 ] - xx [ 1 ] * ( xx [ 32 ] * xx [ 46 ] +
xx [ 80 ] * xx [ 60 ] ) + xx [ 83 ] * xx [ 75 ] + xx [ 89 ] * xx [ 111 ] - xx
[ 117 ] * xx [ 107 ] + xx [ 68 ] * xx [ 41 ] ; xx [ 2 ] = xx [ 404 ] + xx [
27 ] - xx [ 1 ] * ( xx [ 32 ] * xx [ 60 ] - xx [ 80 ] * xx [ 46 ] ) - xx [ 83
] * xx [ 77 ] + xx [ 89 ] * xx [ 103 ] - xx [ 117 ] * xx [ 113 ] - xx [ 110 ]
* xx [ 41 ] ; xx [ 27 ] = xx [ 2 ] * xx [ 81 ] ; xx [ 32 ] = xx [ 45 ] * xx [
81 ] ; xx [ 80 ] = xx [ 83 ] + xx [ 41 ] * xx [ 114 ] - ( xx [ 110 ] * xx [
89 ] + xx [ 68 ] * xx [ 117 ] ) ; xx [ 41 ] = xx [ 408 ] - xx [ 74 ] * ( xx [
0 ] - xx [ 30 ] ) ; xx [ 30 ] = xx [ 389 ] - xx [ 307 ] * xx [ 69 ] ; xx [ 68
] = xx [ 304 ] + xx [ 45 ] - xx [ 1 ] * ( xx [ 27 ] * xx [ 31 ] + xx [ 32 ] *
xx [ 81 ] ) + xx [ 100 ] * xx [ 80 ] + xx [ 105 ] * xx [ 407 ] + xx [ 41 ] *
xx [ 116 ] + xx [ 120 ] * xx [ 30 ] ; xx [ 45 ] = xx [ 55 ] - xx [ 1 ] * ( xx
[ 57 ] * xx [ 31 ] + xx [ 49 ] * xx [ 81 ] ) ; xx [ 49 ] = xx [ 305 ] + xx [
66 ] + xx [ 63 ] * xx [ 65 ] - ( xx [ 100 ] * xx [ 45 ] + xx [ 99 ] * xx [ 70
] ) + xx [ 87 ] * xx [ 24 ] - ( xx [ 86 ] * xx [ 25 ] + xx [ 82 ] * xx [ 47 ]
) ; xx [ 55 ] = xx [ 303 ] + xx [ 2 ] + xx [ 1 ] * ( xx [ 32 ] * xx [ 31 ] -
xx [ 27 ] * xx [ 81 ] ) + xx [ 99 ] * xx [ 80 ] + xx [ 123 ] * xx [ 407 ] +
xx [ 41 ] * xx [ 106 ] + xx [ 64 ] * xx [ 30 ] ; xx [ 2 ] = xx [ 80 ] + xx [
64 ] * xx [ 407 ] + xx [ 41 ] * xx [ 120 ] + xx [ 96 ] * xx [ 30 ] ; xx [ 63
] = input [ 5 ] - ( xx [ 101 ] * xx [ 68 ] + xx [ 49 ] * xx [ 92 ] + xx [ 93
] * xx [ 29 ] ) ; xx [ 64 ] = input [ 6 ] - ( xx [ 55 ] - xx [ 90 ] * xx [ 2
] ) ; solveSymmetricPosDef ( xx + 124 , xx + 63 , 2 , 1 , xx + 69 , xx + 86 )
; xx [ 105 ] = xx [ 29 ] + xx [ 88 ] * xx [ 69 ] ; xx [ 106 ] = xx [ 45 ] +
xx [ 95 ] * xx [ 25 ] + xx [ 82 ] * xx [ 115 ] - xx [ 47 ] * xx [ 24 ] - xx [
51 ] * xx [ 69 ] ; xx [ 107 ] = xx [ 2 ] + xx [ 72 ] * xx [ 69 ] + xx [ 97 ]
* xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 293 , xx + 105 , xx + 86 ) ;
xx [ 113 ] = xx [ 121 ] ; xx [ 114 ] = xx [ 138 ] ; xx [ 115 ] = xx [ 112 ] ;
xx [ 116 ] = xx [ 152 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx
+ 4 , xx + 95 ) ; xx [ 2 ] = xx [ 95 ] + state [ 16 ] ; xx [ 27 ] = xx [ 1 ]
* xx [ 94 ] * xx [ 137 ] ; xx [ 29 ] = xx [ 27 ] * state [ 15 ] ; xx [ 30 ] =
xx [ 96 ] - xx [ 29 ] ; xx [ 32 ] = xx [ 30 ] * xx [ 182 ] ; xx [ 41 ] = xx [
2 ] * xx [ 182 ] ; xx [ 45 ] = xx [ 2 ] - xx [ 1 ] * ( xx [ 32 ] * xx [ 122 ]
+ xx [ 41 ] * xx [ 182 ] ) ; xx [ 47 ] = xx [ 30 ] + xx [ 1 ] * ( xx [ 41 ] *
xx [ 122 ] - xx [ 32 ] * xx [ 182 ] ) ; xx [ 32 ] = xx [ 1 ] * xx [ 137 ] *
xx [ 137 ] ; xx [ 41 ] = state [ 15 ] * ( xx [ 32 ] - xx [ 0 ] ) ; xx [ 51 ]
= xx [ 97 ] + xx [ 41 ] ; xx [ 57 ] = xx [ 51 ] + state [ 18 ] ; xx [ 105 ] =
xx [ 45 ] ; xx [ 106 ] = xx [ 47 ] ; xx [ 107 ] = xx [ 57 ] ; xx [ 63 ] = xx
[ 180 ] * xx [ 57 ] ; xx [ 64 ] = xx [ 179 ] * xx [ 57 ] ; xx [ 66 ] = xx [
179 ] * xx [ 47 ] - xx [ 45 ] * xx [ 180 ] ; xx [ 110 ] = xx [ 63 ] ; xx [
111 ] = - xx [ 64 ] ; xx [ 112 ] = xx [ 66 ] ; pm_math_Vector3_cross_ra ( xx
+ 105 , xx + 110 , xx + 123 ) ; xx [ 72 ] = xx [ 170 ] * xx [ 124 ] ; xx [ 74
] = xx [ 170 ] * xx [ 123 ] ; xx [ 80 ] = xx [ 73 ] * state [ 20 ] ; xx [ 83
] = xx [ 57 ] + state [ 20 ] ; xx [ 89 ] = xx [ 57 ] + xx [ 83 ] ;
pm_math_Quaternion_compose_ra ( xx + 364 , xx + 113 , xx + 300 ) ; xx [ 94 ]
= xx [ 122 ] * xx [ 300 ] + xx [ 182 ] * xx [ 303 ] ; xx [ 101 ] = xx [ 182 ]
* xx [ 300 ] - xx [ 122 ] * xx [ 303 ] ; xx [ 103 ] = xx [ 154 ] * xx [ 94 ]
- xx [ 101 ] * xx [ 170 ] ; xx [ 110 ] = xx [ 298 ] * xx [ 103 ] ; xx [ 111 ]
= xx [ 101 ] * xx [ 154 ] + xx [ 94 ] * xx [ 170 ] ; xx [ 112 ] = xx [ 373 ]
* xx [ 111 ] ; xx [ 117 ] = xx [ 110 ] + xx [ 112 ] ; xx [ 120 ] = xx [ 122 ]
* xx [ 302 ] + xx [ 182 ] * xx [ 301 ] ; xx [ 121 ] = xx [ 182 ] * xx [ 302 ]
- xx [ 122 ] * xx [ 301 ] ; xx [ 126 ] = xx [ 154 ] * xx [ 120 ] - xx [ 121 ]
* xx [ 170 ] ; xx [ 127 ] = xx [ 373 ] * xx [ 126 ] ; xx [ 137 ] = xx [ 121 ]
* xx [ 154 ] + xx [ 120 ] * xx [ 170 ] ; xx [ 138 ] = xx [ 298 ] * xx [ 137 ]
; xx [ 152 ] = xx [ 127 ] - xx [ 138 ] ; xx [ 157 ] = xx [ 298 ] * xx [ 126 ]
; xx [ 221 ] = xx [ 373 ] * xx [ 137 ] ; xx [ 222 ] = xx [ 157 ] + xx [ 221 ]
; xx [ 227 ] = xx [ 373 ] * xx [ 103 ] ; xx [ 297 ] = xx [ 298 ] * xx [ 111 ]
; xx [ 298 ] = xx [ 227 ] - xx [ 297 ] ; xx [ 304 ] = - xx [ 103 ] ; xx [ 305
] = xx [ 137 ] ; xx [ 306 ] = - xx [ 126 ] ; xx [ 307 ] = xx [ 111 ] ;
pm_math_Quaternion_xform_ra ( xx + 304 , xx + 398 , xx + 354 ) ; xx [ 368 ] =
xx [ 121 ] ; xx [ 369 ] = - xx [ 120 ] ; xx [ 370 ] = xx [ 101 ] ; xx [ 103 ]
= xx [ 101 ] * xx [ 180 ] ; xx [ 111 ] = xx [ 101 ] * xx [ 179 ] ; xx [ 101 ]
= xx [ 121 ] * xx [ 180 ] + xx [ 179 ] * xx [ 120 ] ; xx [ 373 ] = xx [ 103 ]
; xx [ 374 ] = - xx [ 111 ] ; xx [ 375 ] = - xx [ 101 ] ;
pm_math_Vector3_cross_ra ( xx + 368 , xx + 373 , xx + 384 ) ; xx [ 120 ] = xx
[ 198 ] * xx [ 303 ] ; xx [ 121 ] = xx [ 98 ] * xx [ 303 ] ; xx [ 126 ] = xx
[ 198 ] * xx [ 301 ] + xx [ 98 ] * xx [ 302 ] ; xx [ 368 ] = - xx [ 120 ] ;
xx [ 369 ] = - xx [ 121 ] ; xx [ 370 ] = xx [ 126 ] ;
pm_math_Vector3_cross_ra ( xx + 301 , xx + 368 , xx + 373 ) ;
pm_math_Quaternion_xform_ra ( xx + 364 , xx + 287 , xx + 301 ) ; xx [ 137 ] =
xx [ 1 ] * ( xx [ 384 ] - xx [ 103 ] * xx [ 94 ] ) - xx [ 179 ] + xx [ 1 ] *
( xx [ 373 ] - xx [ 120 ] * xx [ 300 ] ) - xx [ 98 ] + xx [ 301 ] + state [ 0
] ; xx [ 103 ] = xx [ 1 ] * ( xx [ 111 ] * xx [ 94 ] + xx [ 385 ] ) - xx [
180 ] + xx [ 198 ] + xx [ 1 ] * ( xx [ 374 ] - xx [ 121 ] * xx [ 300 ] ) + xx
[ 302 ] + state [ 1 ] ; xx [ 111 ] = xx [ 1 ] * ( xx [ 386 ] + xx [ 101 ] *
xx [ 94 ] ) + xx [ 1 ] * ( xx [ 126 ] * xx [ 300 ] + xx [ 375 ] ) + xx [ 303
] + state [ 2 ] ; xx [ 364 ] = xx [ 117 ] ; xx [ 365 ] = xx [ 152 ] ; xx [
366 ] = xx [ 222 ] ; xx [ 367 ] = xx [ 298 ] ; xx [ 368 ] = xx [ 354 ] + xx [
137 ] ; xx [ 369 ] = xx [ 355 ] + xx [ 103 ] ; xx [ 370 ] = xx [ 356 ] + xx [
111 ] ; xx [ 94 ] = sm_core_compiler_computeProximityInfoBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 364 ) , ( pm_math_Vector3 * ) ( xx +
300 ) , ( pm_math_Vector3 * ) ( xx + 354 ) , ( pm_math_Vector3 * ) ( xx + 373
) , ( pm_math_Vector3 * ) ( xx + 384 ) ) ; xx [ 101 ] = xx [ 47 ] * xx [ 170
] ; xx [ 120 ] = xx [ 45 ] * xx [ 170 ] ; xx [ 121 ] = xx [ 45 ] - xx [ 1 ] *
( xx [ 101 ] * xx [ 154 ] + xx [ 120 ] * xx [ 170 ] ) ; xx [ 126 ] = xx [ 47
] - xx [ 1 ] * ( xx [ 101 ] * xx [ 170 ] - xx [ 120 ] * xx [ 154 ] ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 287 , xx + 387 ) ; xx [ 393 ] = xx [
387 ] + xx [ 427 ] ; xx [ 394 ] = xx [ 388 ] + xx [ 428 ] ; xx [ 395 ] = xx [
389 ] + xx [ 429 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 393
, xx + 396 ) ; xx [ 101 ] = xx [ 90 ] * xx [ 41 ] ; xx [ 120 ] = xx [ 198 ] *
xx [ 51 ] ; xx [ 303 ] = xx [ 396 ] + xx [ 101 ] - xx [ 120 ] ; xx [ 308 ] =
xx [ 98 ] * xx [ 51 ] ; xx [ 376 ] = xx [ 397 ] - xx [ 308 ] ; xx [ 377 ] =
xx [ 376 ] * xx [ 182 ] ; xx [ 379 ] = xx [ 303 ] * xx [ 182 ] ; xx [ 380 ] =
xx [ 67 ] * state [ 18 ] ; xx [ 393 ] = xx [ 303 ] - xx [ 1 ] * ( xx [ 377 ]
* xx [ 122 ] + xx [ 379 ] * xx [ 182 ] ) + xx [ 380 ] + xx [ 63 ] ; xx [ 63 ]
= xx [ 376 ] + xx [ 1 ] * ( xx [ 379 ] * xx [ 122 ] - xx [ 377 ] * xx [ 182 ]
) - xx [ 64 ] ; xx [ 64 ] = xx [ 63 ] * xx [ 170 ] ; xx [ 303 ] = xx [ 393 ]
* xx [ 170 ] ; xx [ 376 ] = xx [ 62 ] * state [ 20 ] ; xx [ 377 ] = xx [ 198
] * xx [ 2 ] + xx [ 98 ] * xx [ 30 ] ; xx [ 379 ] = xx [ 90 ] * state [ 16 ]
; xx [ 404 ] = xx [ 121 ] ; xx [ 405 ] = xx [ 126 ] ; xx [ 406 ] = xx [ 83 ]
; xx [ 407 ] = xx [ 393 ] - xx [ 1 ] * ( xx [ 64 ] * xx [ 154 ] + xx [ 303 ]
* xx [ 170 ] ) + xx [ 376 ] ; xx [ 408 ] = xx [ 63 ] - xx [ 1 ] * ( xx [ 64 ]
* xx [ 170 ] - xx [ 303 ] * xx [ 154 ] ) + xx [ 80 ] ; xx [ 409 ] = xx [ 66 ]
+ xx [ 377 ] + xx [ 398 ] - xx [ 379 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 94 , ( const
pm_math_Vector3 * ) ( xx + 300 ) , ( const pm_math_Vector3 * ) ( xx + 354 ) ,
( const pm_math_Vector3 * ) ( xx + 373 ) , ( const pm_math_Vector3 * ) ( xx +
384 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 461 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 364 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 404 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 393 ) ) ; pm_math_Quaternion_xform_ra ( xx +
304 , xx + 390 , xx + 300 ) ; xx [ 364 ] = - ( xx [ 110 ] + xx [ 112 ] ) ; xx
[ 365 ] = xx [ 138 ] - xx [ 127 ] ; xx [ 366 ] = - ( xx [ 157 ] + xx [ 221 ]
) ; xx [ 367 ] = xx [ 297 ] - xx [ 227 ] ; xx [ 368 ] = xx [ 300 ] + xx [ 137
] ; xx [ 369 ] = xx [ 301 ] + xx [ 103 ] ; xx [ 370 ] = xx [ 302 ] + xx [ 111
] ; xx [ 63 ] = sm_core_compiler_computeProximityInfoBrickSphere (
ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 364 ) , ( pm_math_Vector3 * ) ( xx +
300 ) , ( pm_math_Vector3 * ) ( xx + 354 ) , ( pm_math_Vector3 * ) ( xx + 373
) , ( pm_math_Vector3 * ) ( xx + 384 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 63 , ( const
pm_math_Vector3 * ) ( xx + 300 ) , ( const pm_math_Vector3 * ) ( xx + 354 ) ,
( const pm_math_Vector3 * ) ( xx + 373 ) , ( const pm_math_Vector3 * ) ( xx +
384 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 414 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 364 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 404 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 430 ) ) ; pm_math_Quaternion_xform_ra ( xx +
304 , xx + 381 , xx + 300 ) ; xx [ 364 ] = xx [ 117 ] ; xx [ 365 ] = xx [ 152
] ; xx [ 366 ] = xx [ 222 ] ; xx [ 367 ] = xx [ 298 ] ; xx [ 368 ] = xx [ 300
] + xx [ 137 ] ; xx [ 369 ] = xx [ 301 ] + xx [ 103 ] ; xx [ 370 ] = xx [ 302
] + xx [ 111 ] ; xx [ 63 ] = sm_core_compiler_computeProximityInfoBrickSphere
( ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 364 ) , ( pm_math_Vector3 * ) ( xx +
300 ) , ( pm_math_Vector3 * ) ( xx + 354 ) , ( pm_math_Vector3 * ) ( xx + 373
) , ( pm_math_Vector3 * ) ( xx + 381 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 63 , ( const
pm_math_Vector3 * ) ( xx + 300 ) , ( const pm_math_Vector3 * ) ( xx + 354 ) ,
( const pm_math_Vector3 * ) ( xx + 373 ) , ( const pm_math_Vector3 * ) ( xx +
381 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 445 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 364 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 404 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 410 ) ) ; pm_math_Quaternion_xform_ra ( xx +
304 , xx + 401 , xx + 300 ) ; xx [ 364 ] = xx [ 117 ] ; xx [ 365 ] = xx [ 152
] ; xx [ 366 ] = xx [ 222 ] ; xx [ 367 ] = xx [ 298 ] ; xx [ 368 ] = xx [ 300
] + xx [ 137 ] ; xx [ 369 ] = xx [ 301 ] + xx [ 103 ] ; xx [ 370 ] = xx [ 302
] + xx [ 111 ] ; xx [ 63 ] = sm_core_compiler_computeProximityInfoBrickSphere
( ramadan_2021_5be9147a_1_geometry_0 ( rtdv ) ,
ramadan_2021_5be9147a_1_geometry_1 ( rtdv ) , ( pm_math_Transform3 * ) ( xx +
357 ) , ( pm_math_Transform3 * ) ( xx + 364 ) , ( pm_math_Vector3 * ) ( xx +
110 ) , ( pm_math_Vector3 * ) ( xx + 300 ) , ( pm_math_Vector3 * ) ( xx + 303
) , ( pm_math_Vector3 * ) ( xx + 354 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 63 , ( const
pm_math_Vector3 * ) ( xx + 110 ) , ( const pm_math_Vector3 * ) ( xx + 300 ) ,
( const pm_math_Vector3 * ) ( xx + 303 ) , ( const pm_math_Vector3 * ) ( xx +
354 ) , ( const pm_math_Transform3 * ) ( xx + 357 ) , ( const
pm_math_Transform3 * ) ( xx + 474 ) , ( const pm_math_Transform3 * ) ( xx +
357 ) , ( const pm_math_Transform3 * ) ( xx + 364 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 404 ) , 0 , 1 , xx [ 161 ] , xx [ 165 ] , xx
[ 185 ] , xx [ 371 ] , xx [ 424 ] , xx [ 425 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 381 ) ) ; xx [ 63 ] = xx [ 52 ] * ( xx [ 123
] - xx [ 1 ] * ( xx [ 72 ] * xx [ 154 ] + xx [ 74 ] * xx [ 170 ] ) - xx [ 80
] * xx [ 89 ] ) - ( xx [ 396 ] + xx [ 433 ] + xx [ 413 ] + xx [ 384 ] ) ; xx
[ 110 ] = xx [ 121 ] ; xx [ 111 ] = xx [ 126 ] ; xx [ 112 ] = xx [ 83 ] ; xx
[ 300 ] = xx [ 102 ] * xx [ 121 ] ; xx [ 301 ] = xx [ 104 ] * xx [ 126 ] ; xx
[ 302 ] = xx [ 50 ] * xx [ 83 ] ; pm_math_Vector3_cross_ra ( xx + 110 , xx +
300 , xx + 303 ) ; xx [ 64 ] = xx [ 305 ] - xx [ 395 ] - xx [ 432 ] - xx [
412 ] - xx [ 383 ] ; xx [ 66 ] = xx [ 52 ] * ( xx [ 376 ] * xx [ 89 ] + xx [
124 ] - xx [ 1 ] * ( xx [ 72 ] * xx [ 170 ] - xx [ 74 ] * xx [ 154 ] ) ) - (
xx [ 397 ] + xx [ 434 ] + xx [ 414 ] + xx [ 385 ] ) ; xx [ 72 ] = ( input [ 0
] - ( xx [ 64 ] + xx [ 62 ] * xx [ 63 ] + xx [ 73 ] * xx [ 66 ] ) ) / xx [ 54
] ; xx [ 54 ] = xx [ 63 ] + xx [ 53 ] * xx [ 72 ] ; xx [ 53 ] = xx [ 54 ] *
xx [ 170 ] ; xx [ 62 ] = xx [ 66 ] + xx [ 58 ] * xx [ 72 ] ; xx [ 58 ] = xx [
62 ] * xx [ 170 ] ; xx [ 63 ] = xx [ 54 ] - xx [ 1 ] * ( xx [ 53 ] * xx [ 170
] - xx [ 58 ] * xx [ 154 ] ) ; xx [ 110 ] = xx [ 2 ] ; xx [ 111 ] = xx [ 30 ]
; xx [ 112 ] = xx [ 51 ] ; xx [ 300 ] = - xx [ 120 ] ; xx [ 301 ] = - xx [
308 ] ; xx [ 302 ] = xx [ 377 ] ; pm_math_Vector3_cross_ra ( xx + 110 , xx +
300 , xx + 306 ) ; xx [ 54 ] = xx [ 182 ] * xx [ 307 ] ; xx [ 66 ] = xx [ 182
] * xx [ 306 ] ; xx [ 73 ] = xx [ 306 ] - xx [ 1 ] * ( xx [ 54 ] * xx [ 122 ]
+ xx [ 66 ] * xx [ 182 ] ) ; xx [ 74 ] = xx [ 380 ] * ( xx [ 51 ] + xx [ 57 ]
) + xx [ 307 ] + xx [ 1 ] * ( xx [ 66 ] * xx [ 122 ] - xx [ 54 ] * xx [ 182 ]
) ; xx [ 54 ] = xx [ 63 ] + xx [ 73 ] * xx [ 174 ] + xx [ 155 ] * xx [ 74 ] ;
xx [ 300 ] = xx [ 78 ] * xx [ 45 ] ; xx [ 301 ] = xx [ 91 ] * xx [ 47 ] ; xx
[ 302 ] = xx [ 78 ] * xx [ 57 ] ; pm_math_Vector3_cross_ra ( xx + 105 , xx +
300 , xx + 354 ) ; xx [ 57 ] = xx [ 62 ] - xx [ 1 ] * ( xx [ 53 ] * xx [ 154
] + xx [ 58 ] * xx [ 170 ] ) ; xx [ 53 ] = xx [ 356 ] + xx [ 64 ] + xx [ 50 ]
* xx [ 72 ] - ( xx [ 179 ] * xx [ 57 ] - xx [ 63 ] * xx [ 180 ] ) - ( xx [
168 ] * xx [ 73 ] + xx [ 74 ] * xx [ 183 ] ) ; xx [ 50 ] = ( input [ 3 ] - (
xx [ 53 ] + xx [ 67 ] * xx [ 54 ] ) ) / xx [ 156 ] ; xx [ 58 ] = xx [ 54 ] +
xx [ 171 ] * xx [ 50 ] ; xx [ 54 ] = xx [ 57 ] + xx [ 181 ] * xx [ 74 ] - xx
[ 176 ] * xx [ 73 ] - xx [ 36 ] * xx [ 50 ] ; xx [ 36 ] = xx [ 54 ] * xx [
182 ] ; xx [ 57 ] = xx [ 58 ] * xx [ 182 ] ; xx [ 62 ] = xx [ 58 ] + xx [ 1 ]
* ( xx [ 36 ] * xx [ 122 ] - xx [ 57 ] * xx [ 182 ] ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 387 , xx + 105 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 105 , xx + 155 ) ; xx [
58 ] = xx [ 96 ] + xx [ 30 ] ; xx [ 63 ] = state [ 15 ] * state [ 16 ] ; xx [
64 ] = xx [ 27 ] * xx [ 63 ] ; xx [ 27 ] = xx [ 155 ] - xx [ 379 ] * xx [ 58
] + xx [ 90 ] * xx [ 64 ] ; xx [ 66 ] = xx [ 156 ] + xx [ 101 ] * ( xx [ 97 ]
+ xx [ 51 ] ) + xx [ 379 ] * ( xx [ 95 ] + xx [ 2 ] ) ; xx [ 105 ] = state [
16 ] ; xx [ 106 ] = - xx [ 29 ] ; xx [ 107 ] = xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 95 , xx + 105 , xx + 300 ) ; xx [ 29 ] = xx [
302 ] + xx [ 64 ] ; xx [ 41 ] = xx [ 62 ] + xx [ 27 ] * xx [ 190 ] + xx [ 66
] * xx [ 184 ] - xx [ 187 ] * xx [ 29 ] ; xx [ 94 ] = xx [ 210 ] * xx [ 2 ] ;
xx [ 95 ] = xx [ 23 ] * xx [ 30 ] ; xx [ 96 ] = xx [ 210 ] * xx [ 51 ] ;
pm_math_Vector3_cross_ra ( xx + 110 , xx + 94 , xx + 105 ) ; xx [ 2 ] = xx [
304 ] - xx [ 394 ] - xx [ 431 ] - xx [ 411 ] - xx [ 382 ] - xx [ 104 ] *
state [ 20 ] * xx [ 121 ] ; xx [ 23 ] = xx [ 303 ] - xx [ 393 ] - xx [ 430 ]
- xx [ 410 ] - xx [ 381 ] + xx [ 102 ] * xx [ 126 ] * state [ 20 ] ; xx [ 30
] = xx [ 23 ] * xx [ 170 ] ; xx [ 51 ] = xx [ 2 ] * xx [ 170 ] ; xx [ 64 ] =
xx [ 52 ] * ( xx [ 80 ] * ( xx [ 121 ] + xx [ 121 ] ) - xx [ 376 ] * ( xx [
126 ] + xx [ 126 ] ) + xx [ 125 ] ) - ( xx [ 398 ] + xx [ 435 ] + xx [ 415 ]
+ xx [ 386 ] ) ; xx [ 52 ] = state [ 18 ] * xx [ 47 ] ; xx [ 78 ] = xx [ 45 ]
* state [ 18 ] ; xx [ 45 ] = xx [ 308 ] - xx [ 380 ] * ( xx [ 47 ] + xx [ 47
] ) ; xx [ 47 ] = xx [ 355 ] + xx [ 2 ] - xx [ 1 ] * ( xx [ 30 ] * xx [ 154 ]
+ xx [ 51 ] * xx [ 170 ] ) + xx [ 64 ] * xx [ 179 ] + xx [ 52 ] * xx [ 205 ]
- xx [ 78 ] * xx [ 201 ] + xx [ 175 ] * xx [ 45 ] ; xx [ 2 ] = xx [ 354 ] +
xx [ 23 ] - xx [ 1 ] * ( xx [ 30 ] * xx [ 170 ] - xx [ 51 ] * xx [ 154 ] ) -
xx [ 64 ] * xx [ 180 ] + xx [ 52 ] * xx [ 84 ] - xx [ 78 ] * xx [ 207 ] - xx
[ 204 ] * xx [ 45 ] ; xx [ 23 ] = xx [ 2 ] * xx [ 182 ] ; xx [ 30 ] = xx [ 47
] * xx [ 182 ] ; xx [ 51 ] = xx [ 64 ] + xx [ 45 ] * xx [ 208 ] - ( xx [ 204
] * xx [ 52 ] + xx [ 175 ] * xx [ 78 ] ) ; xx [ 45 ] = xx [ 301 ] - xx [ 63 ]
* ( xx [ 0 ] - xx [ 32 ] ) ; xx [ 0 ] = xx [ 157 ] - xx [ 101 ] * xx [ 58 ] ;
xx [ 32 ] = xx [ 106 ] + xx [ 47 ] - xx [ 1 ] * ( xx [ 23 ] * xx [ 122 ] + xx
[ 30 ] * xx [ 182 ] ) + xx [ 98 ] * xx [ 51 ] + xx [ 197 ] * xx [ 300 ] + xx
[ 45 ] * xx [ 209 ] + xx [ 213 ] * xx [ 0 ] ; xx [ 47 ] = xx [ 54 ] - xx [ 1
] * ( xx [ 57 ] * xx [ 122 ] + xx [ 36 ] * xx [ 182 ] ) ; xx [ 36 ] = xx [
107 ] + xx [ 53 ] + xx [ 76 ] * xx [ 50 ] - ( xx [ 98 ] * xx [ 47 ] + xx [
198 ] * xx [ 62 ] ) + xx [ 188 ] * xx [ 29 ] - ( xx [ 187 ] * xx [ 27 ] + xx
[ 66 ] * xx [ 119 ] ) ; xx [ 52 ] = xx [ 105 ] + xx [ 2 ] + xx [ 1 ] * ( xx [
30 ] * xx [ 122 ] - xx [ 23 ] * xx [ 182 ] ) + xx [ 198 ] * xx [ 51 ] + xx [
216 ] * xx [ 300 ] + xx [ 45 ] * xx [ 196 ] + xx [ 172 ] * xx [ 0 ] ; xx [ 2
] = xx [ 51 ] + xx [ 172 ] * xx [ 300 ] + xx [ 45 ] * xx [ 213 ] + xx [ 191 ]
* xx [ 0 ] ; xx [ 53 ] = input [ 1 ] - ( xx [ 199 ] * xx [ 32 ] + xx [ 36 ] *
xx [ 192 ] + xx [ 193 ] * xx [ 41 ] ) ; xx [ 54 ] = input [ 2 ] - ( xx [ 52 ]
- xx [ 90 ] * xx [ 2 ] ) ; solveSymmetricPosDef ( xx + 217 , xx + 53 , 2 , 1
, xx + 57 , xx + 62 ) ; xx [ 62 ] = xx [ 41 ] + xx [ 189 ] * xx [ 57 ] ; xx [
63 ] = xx [ 47 ] + xx [ 195 ] * xx [ 27 ] + xx [ 66 ] * xx [ 200 ] - xx [ 119
] * xx [ 29 ] - xx [ 153 ] * xx [ 57 ] ; xx [ 64 ] = xx [ 2 ] + xx [ 166 ] *
xx [ 57 ] + xx [ 35 ] * xx [ 58 ] ; pm_math_Quaternion_xform_ra ( xx + 113 ,
xx + 62 , xx + 89 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 427 , xx + 62
) ; xx [ 94 ] = - xx [ 427 ] ; xx [ 95 ] = - xx [ 428 ] ; xx [ 96 ] = - xx [
429 ] ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 94 , xx + 101 ) ; xx [ 0 ] =
xx [ 62 ] + xx [ 101 ] ; xx [ 2 ] = xx [ 64 ] + xx [ 103 ] ; xx [ 94 ] = xx [
0 ] ; xx [ 95 ] = xx [ 63 ] + xx [ 102 ] ; xx [ 96 ] = xx [ 2 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 245 , xx + 94 , xx + 103 ) ; xx [ 110 ] =
xx [ 86 ] - input [ 8 ] + xx [ 89 ] + xx [ 103 ] ; xx [ 111 ] = xx [ 87 ] +
xx [ 90 ] + xx [ 104 ] ; xx [ 112 ] = xx [ 88 ] + xx [ 91 ] + xx [ 105 ] ; xx
[ 103 ] = xx [ 223 ] * state [ 10 ] ; xx [ 104 ] = state [ 11 ] ; xx [ 105 ]
= xx [ 292 ] * state [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 103 ,
xx + 119 ) ; xx [ 4 ] = xx [ 55 ] + xx [ 28 ] * xx [ 69 ] + xx [ 85 ] * xx [
70 ] ; xx [ 5 ] = xx [ 68 ] + xx [ 109 ] * xx [ 69 ] + xx [ 108 ] * xx [ 70 ]
; xx [ 6 ] = xx [ 49 ] + xx [ 33 ] * xx [ 69 ] ; pm_math_Quaternion_xform_ra
( xx + 293 , xx + 4 , xx + 53 ) ; pm_math_Vector3_cross_ra ( xx + 275 , xx +
86 , xx + 4 ) ; xx [ 83 ] = xx [ 52 ] + xx [ 22 ] * xx [ 57 ] + xx [ 186 ] *
xx [ 58 ] ; xx [ 84 ] = xx [ 32 ] + xx [ 203 ] * xx [ 57 ] + xx [ 202 ] * xx
[ 58 ] ; xx [ 85 ] = xx [ 36 ] + xx [ 139 ] * xx [ 57 ] ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 83 , xx + 86 ) ;
pm_math_Vector3_cross_ra ( xx + 287 , xx + 89 , xx + 83 ) ; xx [ 183 ] = xx [
12 ] ; xx [ 184 ] = xx [ 16 ] ; xx [ 185 ] = xx [ 26 ] ; xx [ 186 ] = xx [
212 ] ; xx [ 187 ] = xx [ 214 ] ; xx [ 188 ] = xx [ 215 ] ; xx [ 189 ] = xx [
228 ] ; xx [ 190 ] = xx [ 229 ] ; xx [ 191 ] = xx [ 299 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 183 , xx + 94 , xx + 89 ) ; xx [ 103 ] = -
pm_math_Vector3_dot_ra ( xx + 18 , xx + 110 ) ; xx [ 104 ] = -
pm_math_Vector3_dot_ra ( xx + 254 , xx + 110 ) ; xx [ 105 ] = -
pm_math_Vector3_dot_ra ( xx + 260 , xx + 110 ) ; xx [ 106 ] = - ( xx [ 119 ]
+ xx [ 53 ] + xx [ 4 ] + xx [ 86 ] + xx [ 83 ] + xx [ 89 ] ) ; xx [ 107 ] = -
( xx [ 120 ] + xx [ 54 ] + xx [ 5 ] + xx [ 87 ] + xx [ 84 ] + xx [ 90 ] ) ;
xx [ 108 ] = - ( xx [ 121 ] + xx [ 55 ] + xx [ 6 ] + xx [ 88 ] + xx [ 85 ] +
xx [ 91 ] ) ; solveSymmetricPosDef ( xx + 318 , xx + 103 , 6 , 1 , xx + 83 ,
xx + 199 ) ; pm_math_Matrix3x3_xform_ra ( xx + 183 , xx + 18 , xx + 4 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 183 , xx + 254 , xx + 18 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 183 , xx + 260 , xx + 51 ) ; xx [ 379 ] =
xx [ 4 ] ; xx [ 380 ] = xx [ 18 ] ; xx [ 381 ] = xx [ 51 ] ; xx [ 382 ] = xx
[ 224 ] ; xx [ 383 ] = xx [ 225 ] ; xx [ 384 ] = xx [ 226 ] ; xx [ 385 ] = xx
[ 5 ] ; xx [ 386 ] = xx [ 19 ] ; xx [ 387 ] = xx [ 52 ] ; xx [ 388 ] = xx [
312 ] - xx [ 40 ] - xx [ 38 ] - xx [ 269 ] + xx [ 281 ] - xx [ 160 ] - xx [
158 ] - xx [ 131 ] ; xx [ 389 ] = xx [ 290 ] ; xx [ 390 ] = xx [ 291 ] ; xx [
391 ] = xx [ 6 ] ; xx [ 392 ] = xx [ 20 ] ; xx [ 393 ] = xx [ 53 ] ; xx [ 394
] = xx [ 315 ] - xx [ 43 ] - xx [ 39 ] - xx [ 272 ] + xx [ 284 ] - xx [ 163 ]
- xx [ 159 ] - xx [ 134 ] ; xx [ 395 ] = xx [ 316 ] - xx [ 44 ] - xx [ 42 ] -
xx [ 273 ] + xx [ 285 ] - xx [ 164 ] - xx [ 162 ] - xx [ 135 ] ; xx [ 396 ] =
xx [ 37 ] ; xx [ 397 ] = xx [ 230 ] ; xx [ 398 ] = xx [ 257 ] ; xx [ 399 ] =
xx [ 263 ] ; xx [ 400 ] = xx [ 12 ] ; xx [ 401 ] = xx [ 212 ] ; xx [ 402 ] =
xx [ 228 ] ; xx [ 403 ] = xx [ 231 ] ; xx [ 404 ] = xx [ 258 ] ; xx [ 405 ] =
xx [ 264 ] ; xx [ 406 ] = xx [ 16 ] ; xx [ 407 ] = xx [ 214 ] ; xx [ 408 ] =
xx [ 229 ] ; xx [ 409 ] = xx [ 232 ] ; xx [ 410 ] = xx [ 259 ] ; xx [ 411 ] =
xx [ 265 ] ; xx [ 412 ] = xx [ 26 ] ; xx [ 413 ] = xx [ 215 ] ; xx [ 414 ] =
xx [ 299 ] ; solveSymmetricPosDef ( xx + 318 , xx + 379 , 6 , 6 , xx + 415 ,
xx + 35 ) ; xx [ 4 ] = xx [ 433 ] ; xx [ 5 ] = xx [ 439 ] ; xx [ 6 ] = xx [
445 ] ; xx [ 12 ] = 9.81 ; xx [ 16 ] = xx [ 12 ] * state [ 6 ] ; xx [ 18 ] =
xx [ 12 ] * state [ 4 ] ; xx [ 19 ] = xx [ 1 ] * ( xx [ 16 ] * state [ 3 ] +
xx [ 18 ] * state [ 5 ] ) ; xx [ 20 ] = xx [ 1 ] * ( xx [ 16 ] * state [ 6 ]
+ xx [ 18 ] * state [ 4 ] ) ; xx [ 22 ] = xx [ 1 ] * ( xx [ 16 ] * state [ 5
] - xx [ 18 ] * state [ 3 ] ) ; xx [ 35 ] = xx [ 19 ] ; xx [ 36 ] = xx [ 12 ]
- xx [ 20 ] ; xx [ 37 ] = xx [ 22 ] ; xx [ 16 ] = xx [ 83 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 35 ) ; xx [ 4 ] = xx [ 434 ] ; xx [ 5
] = xx [ 440 ] ; xx [ 6 ] = xx [ 446 ] ; xx [ 18 ] = xx [ 84 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 35 ) ; xx [ 4 ] = xx [ 435 ] ; xx [ 5
] = xx [ 441 ] ; xx [ 6 ] = xx [ 447 ] ; xx [ 23 ] = xx [ 85 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 35 ) ; xx [ 4 ] = xx [ 436 ] ; xx [ 5
] = xx [ 442 ] ; xx [ 6 ] = xx [ 448 ] ; xx [ 26 ] = xx [ 86 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 35 ) ; xx [ 4 ] = xx [ 437 ] ; xx [ 5
] = xx [ 443 ] ; xx [ 6 ] = xx [ 449 ] ; xx [ 28 ] = xx [ 87 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 35 ) ; xx [ 4 ] = xx [ 438 ] ; xx [ 5
] = xx [ 444 ] ; xx [ 6 ] = xx [ 450 ] ; xx [ 30 ] = xx [ 88 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 35 ) ; xx [ 4 ] = xx [ 233 ] ; xx [ 5
] = xx [ 235 ] ; xx [ 6 ] = xx [ 237 ] ; xx [ 35 ] = xx [ 26 ] ; xx [ 36 ] =
xx [ 28 ] ; xx [ 37 ] = xx [ 30 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
113 , xx + 35 , xx + 38 ) ; xx [ 41 ] = xx [ 239 ] ; xx [ 42 ] = xx [ 241 ] ;
xx [ 43 ] = xx [ 243 ] ; xx [ 32 ] = xx [ 19 ] + xx [ 11 ] * xx [ 16 ] + xx [
21 ] * xx [ 18 ] + xx [ 194 ] * xx [ 23 ] + xx [ 0 ] ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 287 , xx + 51 ) ; xx [ 0 ] = xx [
14 ] * xx [ 16 ] - xx [ 20 ] + xx [ 13 ] * xx [ 18 ] + xx [ 15 ] * xx [ 23 ]
+ xx [ 63 ] + xx [ 102 ] + xx [ 12 ] ; xx [ 11 ] = xx [ 22 ] + xx [ 17 ] * xx
[ 16 ] + xx [ 178 ] * xx [ 18 ] + xx [ 3 ] * xx [ 23 ] + xx [ 2 ] ; xx [ 12 ]
= xx [ 32 ] + xx [ 51 ] ; xx [ 13 ] = xx [ 0 ] + xx [ 52 ] ; xx [ 14 ] = xx [
11 ] + xx [ 53 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 12 ,
xx + 19 ) ; xx [ 2 ] = xx [ 57 ] - ( pm_math_Vector3_dot_ra ( xx + 4 , xx +
38 ) + pm_math_Vector3_dot_ra ( xx + 41 , xx + 19 ) ) ; xx [ 3 ] = xx [ 234 ]
; xx [ 4 ] = xx [ 236 ] ; xx [ 5 ] = xx [ 238 ] ; xx [ 12 ] = xx [ 240 ] ; xx
[ 13 ] = xx [ 242 ] ; xx [ 14 ] = xx [ 244 ] ; xx [ 6 ] = xx [ 40 ] + xx [ 2
] * xx [ 192 ] + xx [ 29 ] ; xx [ 15 ] = xx [ 19 ] + xx [ 193 ] * xx [ 2 ] +
xx [ 27 ] - xx [ 198 ] * xx [ 6 ] ; xx [ 17 ] = xx [ 20 ] + xx [ 66 ] - xx [
98 ] * xx [ 6 ] ; xx [ 22 ] = xx [ 17 ] * xx [ 182 ] ; xx [ 27 ] = xx [ 15 ]
* xx [ 182 ] ; xx [ 29 ] = xx [ 15 ] - xx [ 1 ] * ( xx [ 22 ] * xx [ 122 ] +
xx [ 27 ] * xx [ 182 ] ) ; xx [ 15 ] = xx [ 17 ] + xx [ 1 ] * ( xx [ 27 ] *
xx [ 122 ] - xx [ 22 ] * xx [ 182 ] ) ; xx [ 17 ] = xx [ 50 ] - ( xx [ 6 ] *
xx [ 211 ] + xx [ 29 ] * xx [ 177 ] - xx [ 15 ] * xx [ 48 ] ) ; xx [ 22 ] =
xx [ 6 ] + xx [ 17 ] ; xx [ 6 ] = xx [ 29 ] + xx [ 67 ] * xx [ 17 ] + xx [ 73
] + xx [ 180 ] * xx [ 22 ] ; xx [ 27 ] = xx [ 15 ] + xx [ 74 ] - xx [ 179 ] *
xx [ 22 ] ; xx [ 15 ] = xx [ 27 ] * xx [ 170 ] ; xx [ 29 ] = xx [ 6 ] * xx [
170 ] ; xx [ 41 ] = xx [ 140 ] ; xx [ 42 ] = xx [ 142 ] ; xx [ 43 ] = xx [
144 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 293 , xx + 35 , xx + 47 ) ;
xx [ 50 ] = xx [ 146 ] ; xx [ 51 ] = xx [ 148 ] ; xx [ 52 ] = xx [ 150 ] ;
pm_math_Vector3_cross_ra ( xx + 35 , xx + 275 , xx + 53 ) ; xx [ 35 ] = xx [
32 ] + xx [ 53 ] ; xx [ 36 ] = xx [ 0 ] + xx [ 54 ] ; xx [ 37 ] = xx [ 11 ] +
xx [ 55 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 293 , xx + 35 , xx + 53
) ; xx [ 0 ] = xx [ 69 ] - ( pm_math_Vector3_dot_ra ( xx + 41 , xx + 47 ) +
pm_math_Vector3_dot_ra ( xx + 50 , xx + 53 ) ) ; xx [ 35 ] = xx [ 141 ] ; xx
[ 36 ] = xx [ 143 ] ; xx [ 37 ] = xx [ 145 ] ; xx [ 41 ] = xx [ 147 ] ; xx [
42 ] = xx [ 149 ] ; xx [ 43 ] = xx [ 151 ] ; xx [ 11 ] = xx [ 49 ] + xx [ 0 ]
* xx [ 92 ] + xx [ 24 ] ; xx [ 24 ] = xx [ 53 ] + xx [ 93 ] * xx [ 0 ] + xx [
25 ] - xx [ 99 ] * xx [ 11 ] ; xx [ 25 ] = xx [ 54 ] + xx [ 82 ] - xx [ 100 ]
* xx [ 11 ] ; xx [ 32 ] = xx [ 25 ] * xx [ 81 ] ; xx [ 33 ] = xx [ 24 ] * xx
[ 81 ] ; xx [ 44 ] = xx [ 24 ] - xx [ 1 ] * ( xx [ 32 ] * xx [ 31 ] + xx [ 33
] * xx [ 81 ] ) ; xx [ 24 ] = xx [ 25 ] + xx [ 1 ] * ( xx [ 33 ] * xx [ 31 ]
- xx [ 32 ] * xx [ 81 ] ) ; xx [ 25 ] = xx [ 65 ] - ( xx [ 11 ] * xx [ 118 ]
+ xx [ 44 ] * xx [ 71 ] - xx [ 24 ] * xx [ 61 ] ) ; xx [ 31 ] = xx [ 11 ] +
xx [ 25 ] ; xx [ 11 ] = xx [ 44 ] + xx [ 67 ] * xx [ 25 ] + xx [ 372 ] + xx [
77 ] * xx [ 31 ] ; xx [ 32 ] = xx [ 24 ] + xx [ 378 ] - xx [ 75 ] * xx [ 31 ]
; xx [ 24 ] = xx [ 32 ] * xx [ 60 ] ; xx [ 33 ] = xx [ 11 ] * xx [ 60 ] ;
deriv [ 0 ] = state [ 7 ] ; deriv [ 1 ] = state [ 8 ] ; deriv [ 2 ] = state [
9 ] ; deriv [ 3 ] = xx [ 7 ] ; deriv [ 4 ] = xx [ 8 ] ; deriv [ 5 ] = xx [ 9
] ; deriv [ 6 ] = xx [ 10 ] ; deriv [ 7 ] = xx [ 16 ] ; deriv [ 8 ] = xx [ 18
] ; deriv [ 9 ] = xx [ 23 ] ; deriv [ 10 ] = xx [ 26 ] ; deriv [ 11 ] = xx [
28 ] ; deriv [ 12 ] = xx [ 30 ] ; deriv [ 13 ] = state [ 15 ] ; deriv [ 14 ]
= state [ 16 ] ; deriv [ 15 ] = xx [ 2 ] ; deriv [ 16 ] = xx [ 58 ] - (
pm_math_Vector3_dot_ra ( xx + 3 , xx + 38 ) + pm_math_Vector3_dot_ra ( xx +
12 , xx + 19 ) ) ; deriv [ 17 ] = state [ 18 ] ; deriv [ 18 ] = xx [ 17 ] ;
deriv [ 19 ] = state [ 20 ] ; deriv [ 20 ] = xx [ 72 ] - ( xx [ 22 ] * xx [
173 ] + ( xx [ 6 ] - xx [ 1 ] * ( xx [ 15 ] * xx [ 154 ] + xx [ 29 ] * xx [
170 ] ) ) * xx [ 167 ] + ( xx [ 27 ] - xx [ 1 ] * ( xx [ 15 ] * xx [ 170 ] -
xx [ 29 ] * xx [ 154 ] ) ) * xx [ 169 ] ) ; deriv [ 21 ] = state [ 23 ] ;
deriv [ 22 ] = state [ 24 ] ; deriv [ 23 ] = xx [ 0 ] ; deriv [ 24 ] = xx [
70 ] - ( pm_math_Vector3_dot_ra ( xx + 35 , xx + 47 ) +
pm_math_Vector3_dot_ra ( xx + 41 , xx + 53 ) ) ; deriv [ 25 ] = state [ 26 ]
; deriv [ 26 ] = xx [ 25 ] ; deriv [ 27 ] = state [ 28 ] ; deriv [ 28 ] = xx
[ 206 ] - ( xx [ 31 ] * xx [ 79 ] + ( xx [ 11 ] - xx [ 1 ] * ( xx [ 24 ] * xx
[ 46 ] + xx [ 33 ] * xx [ 60 ] ) ) * xx [ 56 ] + ( xx [ 32 ] - xx [ 1 ] * (
xx [ 24 ] * xx [ 60 ] - xx [ 33 ] * xx [ 46 ] ) ) * xx [ 59 ] ) ; errorResult
[ 0 ] = xx [ 34 ] ; return NULL ; } PmfMessageId
ramadan_2021_5be9147a_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-9 ; xx [ 1 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ;
bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 1 ] ;
bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx [ 1 ] ;
bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ;
bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] = xx [ 1
] ; bounds [ 13 ] = xx [ 1 ] ; bounds [ 14 ] = xx [ 1 ] ; bounds [ 15 ] = xx
[ 1 ] ; bounds [ 16 ] = xx [ 1 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [ 18 ] =
xx [ 1 ] ; bounds [ 19 ] = xx [ 1 ] ; bounds [ 20 ] = xx [ 1 ] ; bounds [ 21
] = xx [ 1 ] ; bounds [ 22 ] = xx [ 1 ] ; bounds [ 23 ] = xx [ 1 ] ; bounds [
24 ] = xx [ 1 ] ; bounds [ 25 ] = xx [ 1 ] ; bounds [ 26 ] = xx [ 1 ] ;
bounds [ 27 ] = xx [ 1 ] ; bounds [ 28 ] = xx [ 1 ] ; errorResult [ 0 ] = 0.0
; return NULL ; } PmfMessageId ramadan_2021_5be9147a_1_numJacPerturbHiBounds
( const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags ,
const double * state , const int * modeVector , const double * input , const
double * inputDot , const double * inputDdot , const double * discreteState ,
double * bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) {
const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv
-> mInts . mValues ; double xx [ 3 ] ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input
; ( void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = + pmf_get_inf ( ) ; xx [ 1 ] = 0.1 ; xx [ 2 ] = 1.0 ;
bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ;
bounds [ 3 ] = xx [ 1 ] ; bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ;
bounds [ 6 ] = xx [ 1 ] ; bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ;
bounds [ 9 ] = xx [ 0 ] ; bounds [ 10 ] = xx [ 0 ] ; bounds [ 11 ] = xx [ 0 ]
; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] = xx [ 2 ] ; bounds [ 14 ] = xx [
2 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16 ] = xx [ 0 ] ; bounds [ 17 ] =
xx [ 2 ] ; bounds [ 18 ] = xx [ 0 ] ; bounds [ 19 ] = xx [ 2 ] ; bounds [ 20
] = xx [ 0 ] ; bounds [ 21 ] = xx [ 2 ] ; bounds [ 22 ] = xx [ 2 ] ; bounds [
23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0 ] ; bounds [ 25 ] = xx [ 2 ] ;
bounds [ 26 ] = xx [ 0 ] ; bounds [ 27 ] = xx [ 2 ] ; bounds [ 28 ] = xx [ 0
] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
