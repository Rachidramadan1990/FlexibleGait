#ifndef RTW_HEADER_ramadan_2021_types_h_
#define RTW_HEADER_ramadan_2021_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_zFGkVx3z1LkOiYFWx2NEBF_
#define DEFINED_TYPEDEF_FOR_struct_zFGkVx3z1LkOiYFWx2NEBF_
typedef struct { real_T qP0 ; } struct_zFGkVx3z1LkOiYFWx2NEBF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_cOiokfWyG3vpKzyo2JeEsG_
#define DEFINED_TYPEDEF_FOR_struct_cOiokfWyG3vpKzyo2JeEsG_
typedef struct { real_T qP0 ; real_T qR0 ; } struct_cOiokfWyG3vpKzyo2JeEsG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_fSx12PEUDez615dAOCWWOF_
#define DEFINED_TYPEDEF_FOR_struct_fSx12PEUDez615dAOCWWOF_
typedef struct { struct_zFGkVx3z1LkOiYFWx2NEBF ankle ;
struct_zFGkVx3z1LkOiYFWx2NEBF knee ; struct_cOiokfWyG3vpKzyo2JeEsG hip ; }
struct_fSx12PEUDez615dAOCWWOF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_0e0qM7ECt2I1t63CqEnJ6B_
#define DEFINED_TYPEDEF_FOR_struct_0e0qM7ECt2I1t63CqEnJ6B_
typedef struct { real_T vx0 ; real_T vy0 ; real_T x0 ; real_T y0 ; real_T z0
; real_T yaw0 ; real_T roll0 ; } struct_0e0qM7ECt2I1t63CqEnJ6B ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_BHyAujHx0hhbxKKv9AM7t_
#define DEFINED_TYPEDEF_FOR_struct_BHyAujHx0hhbxKKv9AM7t_
typedef struct { real_T x0 ; real_T vx0 ; real_T y0 ; real_T vy0 ; real_T z0
; real_T vz0 ; real_T qR0 ; real_T qP0 ; real_T qY0 ; }
struct_BHyAujHx0hhbxKKv9AM7t ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_17IIuz9b57rd1QlpX55pvF_
#define DEFINED_TYPEDEF_FOR_struct_17IIuz9b57rd1QlpX55pvF_
typedef struct { real_T saggital ; real_T frontal ; }
struct_17IIuz9b57rd1QlpX55pvF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_e6YODQ42jHdTQzf5AOE1TG_
#define DEFINED_TYPEDEF_FOR_struct_e6YODQ42jHdTQzf5AOE1TG_
typedef struct { struct_fSx12PEUDez615dAOCWWOF lLeg ;
struct_fSx12PEUDez615dAOCWWOF rLeg ; struct_0e0qM7ECt2I1t63CqEnJ6B state0 ;
struct_BHyAujHx0hhbxKKv9AM7t trunk ; struct_17IIuz9b57rd1QlpX55pvF target0 ;
} struct_e6YODQ42jHdTQzf5AOE1TG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_9qoVS7s4a0M2SgmJHd6YMD_
#define DEFINED_TYPEDEF_FOR_struct_9qoVS7s4a0M2SgmJHd6YMD_
typedef struct { real_T NameLength ; uint8_T Name [ 10 ] ; uint8_T
sl_padding0 [ 6 ] ; real_T ParentIndex ; real_T NumChildren ; real_T
ChildrenIndices [ 6 ] ; real_T Mass ; real_T CenterOfMass [ 3 ] ; real_T
Inertia [ 9 ] ; real_T SpatialInertia [ 36 ] ; }
struct_9qoVS7s4a0M2SgmJHd6YMD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_W48OLS0I84GAuqNsUNvGfB_
#define DEFINED_TYPEDEF_FOR_struct_W48OLS0I84GAuqNsUNvGfB_
typedef struct { uint8_T Type ; uint8_T sl_padding0 [ 7 ] ; real_T NameLength
; uint8_T Name [ 8 ] ; real_T VelocityNumber ; real_T PositionNumber ; real_T
MotionSubspace [ 36 ] ; real_T JointAxis [ 3 ] ; real_T PositionLimits [ 14 ]
; real_T HomePosition [ 7 ] ; real_T JointToParentTransform [ 16 ] ; real_T
ChildToJointTransform [ 16 ] ; } struct_W48OLS0I84GAuqNsUNvGfB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_puUa0ChWH3AZ4It8PVZFtF_
#define DEFINED_TYPEDEF_FOR_struct_puUa0ChWH3AZ4It8PVZFtF_
typedef struct { real_T NumBodies ; real_T Gravity [ 3 ] ; real_T
NumNonFixedBodies ; real_T PositionNumber ; real_T VelocityNumber ; real_T
PositionDoFMap [ 12 ] ; real_T VelocityDoFMap [ 12 ] ; real_T MaxNameLength ;
real_T MaxJointPositionNumber ; uint8_T DataFormat ; uint8_T sl_padding0 [ 7
] ; real_T JointPositionLimits [ 10 ] ; struct_9qoVS7s4a0M2SgmJHd6YMD Bodies
[ 7 ] ; struct_W48OLS0I84GAuqNsUNvGfB Joints [ 7 ] ; }
struct_puUa0ChWH3AZ4It8PVZFtF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_PmWGKlalL8ck6iS2s8Lu9F_
#define DEFINED_TYPEDEF_FOR_struct_PmWGKlalL8ck6iS2s8Lu9F_
typedef struct { real_T NameLength ; uint8_T Name [ 21 ] ; uint8_T
sl_padding0 [ 3 ] ; real_T ParentIndex ; real_T NumChildren ; real_T
ChildrenIndices [ 11 ] ; real_T Mass ; real_T CenterOfMass [ 3 ] ; real_T
Inertia [ 9 ] ; real_T SpatialInertia [ 36 ] ; }
struct_PmWGKlalL8ck6iS2s8Lu9F ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_GJELa1Dcbk9HktAzWWKe1B_
#define DEFINED_TYPEDEF_FOR_struct_GJELa1Dcbk9HktAzWWKe1B_
typedef struct { uint8_T Type ; uint8_T sl_padding0 [ 7 ] ; real_T NameLength
; uint8_T Name [ 12 ] ; uint8_T sl_padding1 [ 4 ] ; real_T VelocityNumber ;
real_T PositionNumber ; real_T MotionSubspace [ 36 ] ; real_T JointAxis [ 3 ]
; real_T PositionLimits [ 14 ] ; real_T HomePosition [ 7 ] ; real_T
JointToParentTransform [ 16 ] ; real_T ChildToJointTransform [ 16 ] ; }
struct_GJELa1Dcbk9HktAzWWKe1B ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_j7Q9W6SYCggyeqIsOO4ccC_
#define DEFINED_TYPEDEF_FOR_struct_j7Q9W6SYCggyeqIsOO4ccC_
typedef struct { real_T NumBodies ; real_T Gravity [ 3 ] ; real_T
NumNonFixedBodies ; real_T PositionNumber ; real_T VelocityNumber ; real_T
PositionDoFMap [ 22 ] ; real_T VelocityDoFMap [ 22 ] ; real_T MaxNameLength ;
real_T MaxJointPositionNumber ; uint8_T DataFormat ; uint8_T sl_padding0 [ 7
] ; real_T JointPositionLimits [ 20 ] ; struct_PmWGKlalL8ck6iS2s8Lu9F Bodies
[ 12 ] ; struct_GJELa1Dcbk9HktAzWWKe1B Joints [ 12 ] ; }
struct_j7Q9W6SYCggyeqIsOO4ccC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_0MUKHDZLECrZN0NMjSzIh_
#define DEFINED_TYPEDEF_FOR_struct_0MUKHDZLECrZN0NMjSzIh_
typedef struct { uint8_T Type ; uint8_T sl_padding0 [ 7 ] ; real_T NameLength
; uint8_T Name [ 13 ] ; uint8_T sl_padding1 [ 3 ] ; real_T VelocityNumber ;
real_T PositionNumber ; real_T MotionSubspace [ 36 ] ; real_T JointAxis [ 3 ]
; real_T PositionLimits [ 14 ] ; real_T HomePosition [ 7 ] ; real_T
JointToParentTransform [ 16 ] ; real_T ChildToJointTransform [ 16 ] ; }
struct_0MUKHDZLECrZN0NMjSzIh ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_FcCYNCmHimySiG7smljOnF_
#define DEFINED_TYPEDEF_FOR_struct_FcCYNCmHimySiG7smljOnF_
typedef struct { real_T NumBodies ; real_T Gravity [ 3 ] ; real_T
NumNonFixedBodies ; real_T PositionNumber ; real_T VelocityNumber ; real_T
PositionDoFMap [ 22 ] ; real_T VelocityDoFMap [ 22 ] ; real_T MaxNameLength ;
real_T MaxJointPositionNumber ; uint8_T DataFormat ; uint8_T sl_padding0 [ 7
] ; real_T JointPositionLimits [ 20 ] ; struct_PmWGKlalL8ck6iS2s8Lu9F Bodies
[ 12 ] ; struct_0MUKHDZLECrZN0NMjSzIh Joints [ 12 ] ; }
struct_FcCYNCmHimySiG7smljOnF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_pRh2I6kb8EpGWYupLmWg4F_
#define DEFINED_TYPEDEF_FOR_struct_pRh2I6kb8EpGWYupLmWg4F_
typedef struct { real_T prodOutputMode ; real_T prodOutputWordLength ; real_T
prodOutputFracLength ; real_T accumMode ; real_T accumWordLength ; real_T
accumFracLength ; real_T outputMode ; real_T outputWordLength ; real_T
outputFracLength ; real_T roundingMode ; real_T overflowMode ; }
struct_pRh2I6kb8EpGWYupLmWg4F ;
#endif
#ifndef struct_tag_2PsGMppoK4e2vdwpogf6iH
#define struct_tag_2PsGMppoK4e2vdwpogf6iH
struct tag_2PsGMppoK4e2vdwpogf6iH { int32_T isInitialized ; } ;
#endif
#ifndef typedef_h3aseqwy5f
#define typedef_h3aseqwy5f
typedef struct tag_2PsGMppoK4e2vdwpogf6iH h3aseqwy5f ;
#endif
#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE
struct tag_BlgwLpgj2bjudmbmVKWwDE { uint32_T f1 [ 8 ] ; } ;
#endif
#ifndef typedef_fbkg2t5g1g
#define typedef_fbkg2t5g1g
typedef struct tag_BlgwLpgj2bjudmbmVKWwDE fbkg2t5g1g ;
#endif
#ifndef struct_tag_lq0XKolTpZRbT3WdRpytNB
#define struct_tag_lq0XKolTpZRbT3WdRpytNB
struct tag_lq0XKolTpZRbT3WdRpytNB { int32_T isInitialized ; fbkg2t5g1g
inputVarSize ; } ;
#endif
#ifndef typedef_lqjjt21wi3
#define typedef_lqjjt21wi3
typedef struct tag_lq0XKolTpZRbT3WdRpytNB lqjjt21wi3 ;
#endif
#ifndef struct_tag_y6zQdK96IC7AcMnw7rFa
#define struct_tag_y6zQdK96IC7AcMnw7rFa
struct tag_y6zQdK96IC7AcMnw7rFa { int32_T __dummy ; } ;
#endif
#ifndef typedef_n5xi0wcbib
#define typedef_n5xi0wcbib
typedef struct tag_y6zQdK96IC7AcMnw7rFa n5xi0wcbib ;
#endif
#ifndef struct_tag_I7lxy6BEal0s7MBxygd9JE
#define struct_tag_I7lxy6BEal0s7MBxygd9JE
struct tag_I7lxy6BEal0s7MBxygd9JE { real_T f1 [ 16 ] ; } ;
#endif
#ifndef typedef_c3jtsrwtsi
#define typedef_c3jtsrwtsi
typedef struct tag_I7lxy6BEal0s7MBxygd9JE c3jtsrwtsi ;
#endif
#ifndef struct_tag_xcgxZ5He9ABYYFkMb0gw9F
#define struct_tag_xcgxZ5He9ABYYFkMb0gw9F
struct tag_xcgxZ5He9ABYYFkMb0gw9F { real_T f1 [ 36 ] ; } ;
#endif
#ifndef typedef_c3jtsrwtsii
#define typedef_c3jtsrwtsii
typedef struct tag_xcgxZ5He9ABYYFkMb0gw9F c3jtsrwtsii ;
#endif
#ifndef struct_tag_xcgxZ5He9ABYYFkMb0gw9F
#define struct_tag_xcgxZ5He9ABYYFkMb0gw9F
struct tag_xcgxZ5He9ABYYFkMb0gw9F { real_T f1 [ 36 ] ; } ;
#endif
#ifndef typedef_ls3q0vdmxr
#define typedef_ls3q0vdmxr
typedef struct tag_xcgxZ5He9ABYYFkMb0gw9F ls3q0vdmxr ;
#endif
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T { char_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_iashgwex34
#define typedef_iashgwex34
typedef struct emxArray_char_T iashgwex34 ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_asxdiypovu
#define typedef_asxdiypovu
typedef struct emxArray_real_T asxdiypovu ;
#endif
#ifndef typedef_fnuutjlp3q
#define typedef_fnuutjlp3q
typedef struct { n5xi0wcbib * * data ; int32_T * size ; int32_T allocatedSize
; int32_T numDimensions ; boolean_T canFreeData ; } fnuutjlp3q ;
#endif
#ifndef struct_tag_OKYIVqOvg741z7TkldGUv
#define struct_tag_OKYIVqOvg741z7TkldGUv
struct tag_OKYIVqOvg741z7TkldGUv { iashgwex34 * Type ; real_T PositionNumber
; asxdiypovu * MotionSubspace ; real_T JointToParentTransform [ 16 ] ; real_T
ChildToJointTransform [ 16 ] ; real_T JointAxisInternal [ 3 ] ; } ;
#endif
#ifndef typedef_e1mhccsydp
#define typedef_e1mhccsydp
typedef struct tag_OKYIVqOvg741z7TkldGUv e1mhccsydp ;
#endif
#ifndef struct_tag_NNUgNBiOY8c98s4pDnb0bH
#define struct_tag_NNUgNBiOY8c98s4pDnb0bH
struct tag_NNUgNBiOY8c98s4pDnb0bH { fnuutjlp3q * CollisionGeometries ; real_T
MaxElements ; n5xi0wcbib _pobj0 ; } ;
#endif
#ifndef typedef_gmwbnb310m
#define typedef_gmwbnb310m
typedef struct tag_NNUgNBiOY8c98s4pDnb0bH gmwbnb310m ;
#endif
#ifndef struct_tag_4vkSStguaq9BsxIWmF9gRF
#define struct_tag_4vkSStguaq9BsxIWmF9gRF
struct tag_4vkSStguaq9BsxIWmF9gRF { iashgwex34 * NameInternal ; e1mhccsydp
JointInternal ; gmwbnb310m CollisionsInternal ; } ;
#endif
#ifndef typedef_fcmvw4lmyz
#define typedef_fcmvw4lmyz
typedef struct tag_4vkSStguaq9BsxIWmF9gRF fcmvw4lmyz ;
#endif
#ifndef struct_tag_vaFqHmFObJVnZDpdSdsrgD
#define struct_tag_vaFqHmFObJVnZDpdSdsrgD
struct tag_vaFqHmFObJVnZDpdSdsrgD { real_T Index ; iashgwex34 * NameInternal
; e1mhccsydp JointInternal ; real_T ParentIndex ; gmwbnb310m
CollisionsInternal ; } ;
#endif
#ifndef typedef_nxmbjalxzj
#define typedef_nxmbjalxzj
typedef struct tag_vaFqHmFObJVnZDpdSdsrgD nxmbjalxzj ;
#endif
#ifndef struct_tag_BdB6f1Xw1kn5cCXFEaRU7G
#define struct_tag_BdB6f1Xw1kn5cCXFEaRU7G
struct tag_BdB6f1Xw1kn5cCXFEaRU7G { real_T NumBodies ; fcmvw4lmyz Base ;
nxmbjalxzj * Bodies [ 6 ] ; real_T PositionNumber ; real_T VelocityNumber ;
real_T PositionDoFMap [ 12 ] ; nxmbjalxzj _pobj0 [ 6 ] ; } ;
#endif
#ifndef typedef_m3fnjgshyw
#define typedef_m3fnjgshyw
typedef struct tag_BdB6f1Xw1kn5cCXFEaRU7G m3fnjgshyw ;
#endif
#ifndef struct_tag_VtHV8zFxDZ0JgLq0WrjZTF
#define struct_tag_VtHV8zFxDZ0JgLq0WrjZTF
struct tag_VtHV8zFxDZ0JgLq0WrjZTF { int32_T isInitialized ; m3fnjgshyw
TreeInternal ; } ;
#endif
#ifndef typedef_nly45mhuaz
#define typedef_nly45mhuaz
typedef struct tag_VtHV8zFxDZ0JgLq0WrjZTF nly45mhuaz ;
#endif
#ifndef struct_tag_Cqnxnc08da43HsiMCKoHlE
#define struct_tag_Cqnxnc08da43HsiMCKoHlE
struct tag_Cqnxnc08da43HsiMCKoHlE { iashgwex34 * Type ; asxdiypovu *
MotionSubspace ; real_T JointToParentTransform [ 16 ] ; real_T
ChildToJointTransform [ 16 ] ; real_T JointAxisInternal [ 3 ] ; } ;
#endif
#ifndef typedef_e1mhccsydp3
#define typedef_e1mhccsydp3
typedef struct tag_Cqnxnc08da43HsiMCKoHlE e1mhccsydp3 ;
#endif
#ifndef struct_tag_Yk8ZS49lLVUW5yBwelBRk
#define struct_tag_Yk8ZS49lLVUW5yBwelBRk
struct tag_Yk8ZS49lLVUW5yBwelBRk { e1mhccsydp3 JointInternal ; gmwbnb310m
CollisionsInternal ; } ;
#endif
#ifndef typedef_fcmvw4lmyzj
#define typedef_fcmvw4lmyzj
typedef struct tag_Yk8ZS49lLVUW5yBwelBRk fcmvw4lmyzj ;
#endif
#ifndef struct_tag_S4K1KPQ2Sy1e1RBMwuXqvB
#define struct_tag_S4K1KPQ2Sy1e1RBMwuXqvB
struct tag_S4K1KPQ2Sy1e1RBMwuXqvB { real_T Index ; e1mhccsydp3 JointInternal
; real_T ParentIndex ; real_T SpatialInertia [ 36 ] ; gmwbnb310m
CollisionsInternal ; } ;
#endif
#ifndef typedef_nxmbjalxzjm
#define typedef_nxmbjalxzjm
typedef struct tag_S4K1KPQ2Sy1e1RBMwuXqvB nxmbjalxzjm ;
#endif
#ifndef struct_tag_5zy3eZqwaGo0gjnQ6IYlEC
#define struct_tag_5zy3eZqwaGo0gjnQ6IYlEC
struct tag_5zy3eZqwaGo0gjnQ6IYlEC { real_T NumBodies ; fcmvw4lmyzj Base ;
nxmbjalxzjm * Bodies [ 6 ] ; real_T VelocityNumber ; real_T PositionDoFMap [
12 ] ; real_T VelocityDoFMap [ 12 ] ; nxmbjalxzjm _pobj0 [ 6 ] ; } ;
#endif
#ifndef typedef_m3fnjgshywk
#define typedef_m3fnjgshywk
typedef struct tag_5zy3eZqwaGo0gjnQ6IYlEC m3fnjgshywk ;
#endif
#ifndef struct_tag_pm14PVtkm7cejK2gr7dEZE
#define struct_tag_pm14PVtkm7cejK2gr7dEZE
struct tag_pm14PVtkm7cejK2gr7dEZE { int32_T isInitialized ; m3fnjgshywk
TreeInternal ; } ;
#endif
#ifndef typedef_adyizyva1a
#define typedef_adyizyva1a
typedef struct tag_pm14PVtkm7cejK2gr7dEZE adyizyva1a ;
#endif
#ifndef struct_tag_tNC2ivBTA7el5ZpA4JilcE
#define struct_tag_tNC2ivBTA7el5ZpA4JilcE
struct tag_tNC2ivBTA7el5ZpA4JilcE { real_T NumBodies ; fcmvw4lmyzj Base ;
real_T Gravity [ 3 ] ; nxmbjalxzjm * Bodies [ 11 ] ; real_T PositionDoFMap [
22 ] ; real_T VelocityDoFMap [ 22 ] ; nxmbjalxzjm _pobj0 [ 11 ] ; } ;
#endif
#ifndef typedef_m3fnjgshywk2
#define typedef_m3fnjgshywk2
typedef struct tag_tNC2ivBTA7el5ZpA4JilcE m3fnjgshywk2 ;
#endif
#ifndef struct_tag_O8LUuGk4lzo2dDNcgG1tUB
#define struct_tag_O8LUuGk4lzo2dDNcgG1tUB
struct tag_O8LUuGk4lzo2dDNcgG1tUB { int32_T isInitialized ; m3fnjgshywk2
TreeInternal ; } ;
#endif
#ifndef typedef_epwcktxm14
#define typedef_epwcktxm14
typedef struct tag_O8LUuGk4lzo2dDNcgG1tUB epwcktxm14 ;
#endif
#ifndef struct_tag_rFGJMeVVB19PX2skERYwrF
#define struct_tag_rFGJMeVVB19PX2skERYwrF
struct tag_rFGJMeVVB19PX2skERYwrF { real_T NumBodies ; fcmvw4lmyzj Base ;
nxmbjalxzjm * Bodies [ 11 ] ; real_T VelocityNumber ; real_T PositionDoFMap [
22 ] ; real_T VelocityDoFMap [ 22 ] ; nxmbjalxzjm _pobj0 [ 11 ] ; } ;
#endif
#ifndef typedef_m3fnjgshywk2i
#define typedef_m3fnjgshywk2i
typedef struct tag_rFGJMeVVB19PX2skERYwrF m3fnjgshywk2i ;
#endif
#ifndef struct_tag_nfuo2rfC3da0jWDXmTKCBE
#define struct_tag_nfuo2rfC3da0jWDXmTKCBE
struct tag_nfuo2rfC3da0jWDXmTKCBE { int32_T isInitialized ; m3fnjgshywk2i
TreeInternal ; } ;
#endif
#ifndef typedef_adyizyva1an
#define typedef_adyizyva1an
typedef struct tag_nfuo2rfC3da0jWDXmTKCBE adyizyva1an ;
#endif
#ifndef struct_tag_nCBfnRgvzRqUbuK9aRtdUF
#define struct_tag_nCBfnRgvzRqUbuK9aRtdUF
struct tag_nCBfnRgvzRqUbuK9aRtdUF { int32_T isInitialized ; m3fnjgshywk2
TreeInternal ; } ;
#endif
#ifndef typedef_i4zvtqc33n
#define typedef_i4zvtqc33n
typedef struct tag_nCBfnRgvzRqUbuK9aRtdUF i4zvtqc33n ;
#endif
#ifndef struct_emxArray_tag_I7lxy6BEal0s7MBxyg
#define struct_emxArray_tag_I7lxy6BEal0s7MBxyg
struct emxArray_tag_I7lxy6BEal0s7MBxyg { c3jtsrwtsi * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_ara3dpe4mh
#define typedef_ara3dpe4mh
typedef struct emxArray_tag_I7lxy6BEal0s7MBxyg ara3dpe4mh ;
#endif
#ifndef struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
#define struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
struct emxArray_tag_xcgxZ5He9ABYYFkMb0 { c3jtsrwtsii * data ; int32_T * size
; int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_ara3dpe4mh5
#define typedef_ara3dpe4mh5
typedef struct emxArray_tag_xcgxZ5He9ABYYFkMb0 ara3dpe4mh5 ;
#endif
#ifndef struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
#define struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
struct emxArray_tag_xcgxZ5He9ABYYFkMb0 { ls3q0vdmxr * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_fxwetqu34b
#define typedef_fxwetqu34b
typedef struct emxArray_tag_xcgxZ5He9ABYYFkMb0 fxwetqu34b ;
#endif
typedef struct npeuffewrf_ npeuffewrf ; typedef struct ptsq224ua5_ ptsq224ua5
; typedef struct od4rsxtmyu_ od4rsxtmyu ; typedef struct p1cbjrioj3_
p1cbjrioj3 ; typedef struct h13vs4lgmb_ h13vs4lgmb ; typedef struct P_ P ;
#endif
