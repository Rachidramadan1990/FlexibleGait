#ifndef RTW_HEADER_ramadan_2021_private_h_
#define RTW_HEADER_ramadan_2021_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "ramadan_2021.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef __RTW_UTFREE__
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
void * rt_TDelayCreateBuf ( int_T numBuffer , int_T bufSz , int_T elemSz ) ;
boolean_T rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T * tailPtr ,
int_T * headPtr , int_T * lastPtr , real_T tMinusDelay , real_T * * uBufPtr ,
boolean_T isfixedbuf , boolean_T istransportdelay , int_T * maxNewBufSzPtr )
; real_T rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T *
uBuf , int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T newIdx ,
real_T initOutput , boolean_T discrete , boolean_T
minorStepAndTAtLastMajorOutput ) ; void rt_TDelayFreeBuf ( void * buf ) ;
extern void eigqxfuyyz ( mdeakoz0tb * localDW ) ; extern void a0l1tk2b4g (
h2y2pwj55v * localB , npeuffewrf * localP ) ; extern void f0dl1xr5as (
SimStruct * rtS_m , boolean_T jqnmfeq5dt , real_T b0wfcag0zl , h2y2pwj55v *
localB , ngb4oy0mwo * localDW , npeuffewrf * localP , gu1qiepqqp * localZCE )
; extern void cnakvfkzn4 ( fxiefm0ip0 * localB , ptsq224ua5 * localP ) ;
extern void mkfv1yanuq ( SimStruct * rtS_i , iqsghzbg3f * localDW ) ; extern
void kjzvio0um3 ( fxiefm0ip0 * localB , iqsghzbg3f * localDW , ptsq224ua5 *
localP ) ; extern void mags0b3aph ( SimStruct * rtS_g , boolean_T piijrpcpph
, real_T asvmy33psj , real_T g4vwpas5ef , real_T oj4dsgosrg , const real_T
f4rh3n04ar [ 2 ] , const real_T hn4f3hrxut [ 4 ] , fxiefm0ip0 * localB ,
iqsghzbg3f * localDW , ptsq224ua5 * localP ) ; extern void mca2biei3o (
ikrgkwbcyi * localB , od4rsxtmyu * localP ) ; extern void b5oz4fon3k (
SimStruct * rtS_j , p2qhxbk4ip * localDW ) ; extern void kiqukoeeob (
ikrgkwbcyi * localB , p2qhxbk4ip * localDW , od4rsxtmyu * localP ) ; extern
void dhzocs5rcq ( SimStruct * rtS_m , boolean_T fwly2bs0ge , real_T
kw0r15aah3 , real_T b4hx3fjpfi , real_T n0phjebdql , real_T bags4mibc3 ,
real_T h3xoocv1em , real_T mv2xe3cw5i , real_T fqiiyx2a2z , real_T mgawe4morn
, real_T doto05j4oe , const real_T jy5mim0iai [ 3 ] , const real_T ju1j3qjsbj
[ 6 ] , const real_T ahjuc2gun2 [ 2 ] , ikrgkwbcyi * localB , p2qhxbk4ip *
localDW , od4rsxtmyu * localP ) ; extern void mhx2fj3l55 ( kiuxhh0343 *
localDW ) ; extern void btbtv142cz ( const real_T eed12nec25 [ 9 ] ,
egbvy5do0f * localB ) ; extern void edlawzbtqw ( eukwcro3zt * localDW ) ;
extern void lsxts5g4bs ( const real_T eed12nec25 [ 20 ] , dyrcjlvbin * localB
, eukwcro3zt * localDW ) ; extern void fu0tpxqklb ( ifqplx3kim * localB ,
p1cbjrioj3 * localP ) ; extern void ac0yzxvk24 ( SimStruct * rtS_o ,
aqwr3ikqno * localDW ) ; extern void nzqlmumfr5 ( aqwr3ikqno * localDW ) ;
extern void bycedisglt ( SimStruct * rtS_n , boolean_T jwpfm0q2mc , real_T
n3lqs05r1s , ifqplx3kim * localB , aqwr3ikqno * localDW ) ; extern void
h4zngukfub ( bu5lm2wpr1 * localB , h13vs4lgmb * localP ) ; extern void
p0b3maluuv ( SimStruct * rtS_l , nxykrhg5gh * localDW ) ; extern void
ezngx0mfpl ( nxykrhg5gh * localDW ) ; extern void kdi4540ivx ( SimStruct *
rtS_fs , boolean_T aoixma3wwy , real_T ntb2wmr32f , real_T n53bdgb4y4 ,
real_T kxppov4e3k , const real_T hosvmepzmm [ 3 ] , bu5lm2wpr1 * localB ,
nxykrhg5gh * localDW ) ; extern void lddzdtqds5 ( acwawzfuct * localDW ) ;
extern void hgxmcaooba ( const real_T eed12nec25 [ 9 ] , f1lb3yce0e * localB
, acwawzfuct * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
