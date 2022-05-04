#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , PmRealVector * output
) ; extern const NeAssertData ramadan_2021_5be9147a_1_assertData [ ] ; extern
const NeZCData ramadan_2021_5be9147a_1_ZCData [ ] ; void
ramadan_2021_5be9147a_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
ramadan_2021_5be9147a_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
ramadan_2021_5be9147a_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void ramadan_2021_5be9147a_1_computeSimRuntimeDerivedValues ( const double
* runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle
) ; PmfMessageId ramadan_2021_5be9147a_1_compDerivs ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
ramadan_2021_5be9147a_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
ramadan_2021_5be9147a_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
ramadan_2021_5be9147a_1_checkDynamics ( const RuntimeDerivedValuesBundle * ,
const double * , const double * , const double * , const double * , const
double * , const int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId ramadan_2021_5be9147a_1_compOutputsDyn ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId ramadan_2021_5be9147a_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * , const double * , const int * , const double *
, const double * , const double * , const double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
ramadan_2021_5be9147a_1_compOutputs ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const int * , const double * , const double *
, const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
ramadan_2021_5be9147a_1_computeAsmModeVector ( const double * , const double
* , const double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId ramadan_2021_5be9147a_1_computeSimModeVector ( const double * ,
const double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId ramadan_2021_5be9147a_1_computeZeroCrossings (
const RuntimeDerivedValuesBundle * , const double * , const double * , const
double * , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; void ramadan_2021_5be9147a_1_setTargets
( const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget *
targets ) ; void ramadan_2021_5be9147a_1_resetAsmStateVector ( const void *
mech , double * stateVector ) ; void
ramadan_2021_5be9147a_1_resetSimStateVector ( const void * mech , double *
stateVector ) ; void ramadan_2021_5be9147a_1_initializeTrackedAngleState (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const int * modeVector , const double *
motionData , double * stateVector ) ; void
ramadan_2021_5be9147a_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double *
stateVector ) ; void ramadan_2021_5be9147a_1_adjustPosition ( const void *
mech , const double * dofDeltas , double * stateVector ) ; void
ramadan_2021_5be9147a_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
ramadan_2021_5be9147a_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
ramadan_2021_5be9147a_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void ramadan_2021_5be9147a_1_computePosDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primitiveIdx , const double *
stateVector , int partialType , double * matrix ) ; void
ramadan_2021_5be9147a_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * stateVector , int partialType
, double * matrix ) ; void
ramadan_2021_5be9147a_1_projectPartiallyTargetedPos ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , const double * origStateVector , int
partialType , double * stateVector ) ; void
ramadan_2021_5be9147a_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
ramadan_2021_5be9147a_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t ramadan_2021_5be9147a_1_computeAssemblyJacobian ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
size_t constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t ramadan_2021_5be9147a_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , const double * motionData ,
double * J ) ; boolean_T ramadan_2021_5be9147a_1_isInKinematicSingularity (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , size_t constraintIdx , const int * modeVector ,
const double * motionData ) ; void ramadan_2021_5be9147a_1_convertStateVector
( const void * asmMech , const RuntimeDerivedValuesBundle *
asmRuntimeDerivedValuesBundle , const void * simMech , const double *
asmStateVector , const int * asmModeVector , const int * simModeVector ,
double * simStateVector ) ; void ramadan_2021_5be9147a_1_constructStateVector
( const void * mech , const double * solverStateVector , const double * u ,
const double * uDot , const double * discreteStateVector , double *
fullStateVector ) ; void ramadan_2021_5be9147a_1_extractSolverStateVector (
const void * mech , const double * fullStateVector , double *
solverStateVector ) ; boolean_T ramadan_2021_5be9147a_1_isPositionViolation (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const int * constraintEqnEnableFlags , const
double * stateVector , const int * modeVector ) ; boolean_T
ramadan_2021_5be9147a_1_isVelocityViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId ramadan_2021_5be9147a_1_projectStateSim ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const int * modeVector , double *
stateVector , void * neDiagMgr ) ; void
ramadan_2021_5be9147a_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , const int * modeVector , double * error ) ; void
ramadan_2021_5be9147a_1_resetModeVector ( const void * mech , int *
modeVector ) ; boolean_T ramadan_2021_5be9147a_1_hasJointDisToNormModeChange
( const void * mech , const int * prevModeVector , const int * modeVector ) ;
PmfMessageId ramadan_2021_5be9147a_1_performJointDisToNormModeChange ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const int * prevModeVector , const int
* modeVector , const double * inputVector , double * stateVector , void *
neDiagMgr ) ; void ramadan_2021_5be9147a_1_onModeChangedCutJoints ( const
void * mech , const int * prevModeVector , const int * modeVector , double *
stateVector ) ; PmfMessageId ramadan_2021_5be9147a_1_assemble ( const double
* u , double * udot , double * x , NeuDiagnosticManager * neDiagMgr ) { (
void ) x ; ( void ) u ; ( void ) udot ; ( void ) neDiagMgr ; return NULL ; }
static void dae_cg_setParameters_function ( const NeDae * dae , const
NeParameterBundle * paramBundle ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeRootVariables = paramBundle ->
mRealParameters . mX ; if ( smData -> mRuntimeParameterScalars . mN == 0 )
return ; ramadan_2021_5be9147a_1_computeRuntimeParameters (
runtimeRootVariables , smData -> mRuntimeParameterScalars . mX ) ;
ramadan_2021_5be9147a_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
ramadan_2021_5be9147a_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; ramadan_2021_5be9147a_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 29 * sizeof ( real_T ) ) ; else errorId =
ramadan_2021_5be9147a_1_compDerivs ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput
-> mV . mX + 9 , systemInput -> mD . mX , daeMethodOutput -> mXP0 . mX , &
errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbLoBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
ramadan_2021_5be9147a_1_numJacPerturbLoBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput
-> mV . mX + 9 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
ramadan_2021_5be9147a_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput
-> mV . mX + 9 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; if ( smData -> mDoComputeDynamicOutputs ) { int derivErr =
0 ; double errorResult = 0.0 ; errorId =
ramadan_2021_5be9147a_1_compOutputsDyn ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput
-> mV . mX + 9 , systemInput -> mD . mX , smData -> mCachedDerivatives . mX ,
daeMethodOutput -> mY . mX , & derivErr , & errorResult , neDiagMgr ) ;
smData -> mCachedDerivativesAvailable = ( derivErr == 0 ) ; } else errorId =
ramadan_2021_5be9147a_1_compOutputsKin ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mM .
mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput -> mV
. mX + 9 , systemInput -> mD . mX , daeMethodOutput -> mY . mX , neDiagMgr )
; return errorId ; } static PmfMessageId dae_cg_mode_method ( const NeDae *
dae , const NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput
, NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae
-> mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ;
errorId = ramadan_2021_5be9147a_1_computeSimModeVector ( systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 ,
daeMethodOutput -> mMODE . mX , & errorResult , neDiagMgr ) ; memcpy ( smData
-> mCachedModeVector . mX , daeMethodOutput -> mMODE . mX , 0 * sizeof (
int32_T ) ) ; return errorId ; } static PmfMessageId
dae_cg_zeroCrossing_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ; double
errorResult = 0.0 ; return ramadan_2021_5be9147a_1_computeZeroCrossings ( &
smData -> mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX ,
systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput -> mV . mX
+ 9 , systemInput -> mD . mX , daeMethodOutput -> mZC . mX , & errorResult ,
neDiagMgr ) ; } static PmfMessageId dae_cg_project_solve ( const NeDae * dae
, const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ; errorId =
ramadan_2021_5be9147a_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput ->
mD . mX , systemInput -> mM . mX , & result , neDiagMgr ) ; } return errorId
; } static PmfMessageId dae_cg_CIC_MODE_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId = NULL
; double errorResult = 0.0 ; const size_t mvSize = smData -> mModeVectorSize
; boolean_T modeChanged = false ; if ( mvSize > 0 ) { errorId =
ramadan_2021_5be9147a_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput -> mM .
mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; {
size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if ( systemInput -> mM . mX [ i
] != smData -> mCachedModeVector . mX [ i ] ) { modeChanged = true ; break ;
} } } if ( modeChanged ) { errorId = sm_core_onModeChanged ( & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput -> mD . mX
, smData -> mCachedModeVector . mX , systemInput -> mM . mX , systemInput ->
mX . mX , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } errorId = sm_core_projectState ( true , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9
, systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_assemble_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; const SmMechanismDelegate *
delegate = & smData -> mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 24 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
ramadan_2021_5be9147a_1_computeAsmModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , smData ->
mAssemblyModeVector . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL
) return errorId ; } sm_core_computeStateVector ( delegate ,
runtimeDerivedValuesBundle , smData -> mAssemblyModeVector . mX , numTargets
, smData -> mTargets , assemblyFullStateVector ) ; asmStatus =
sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , smData -> mAssemblyModeVector . mX , NULL , NULL ,
NULL ) ; if ( asmStatus != 1 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
ramadan_2021_5be9147a_1_checkTargets ( & smData ->
mSimRuntimeDerivedValuesBundle , assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
ramadan_2021_5be9147a_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput -> mM .
mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ;
memcpy ( smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 *
sizeof ( int32_T ) ) ; } ( * delegate -> mConvertStateVector ) ( NULL ,
runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , systemInput -> mM . mX , simulationFullStateVector
) ; for ( i = 0 ; i < smData -> mStateVectorSize ; ++ i ) systemInput -> mX .
mX [ i ] = simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ]
; memcpy ( systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 29 ; smData -> mFullStateVectorSize = 29 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 9 ; smData ->
mOutputVectorSize = 126 ; smData -> mNumConstraintEqns = 0 ; for ( i = 0 ; i
< 4 ; ++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T stateVectorMap [ 29 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,
9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24
, 25 , 26 , 27 , 28 } ; const CTarget targets [ 24 ] = { { 0 , 63 , 0 , false
, 0 , 2 , "rad" , false , true , + 1.000000000000000000e+00 , false , 1 , { -
1.746933020133432546e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 63 , 0 , false , 0 , 2 , "rad/s" , true
, true , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 64 , 0 , false , 0 , 2 , "rad" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 2.736241861741583126e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 64 , 0
, false , 0 , 2 , "rad/s" , true , true , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 64 , 1 , false , 0 , 2 , "rad" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { - 1.745329251994329547e-02
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 64 , 1
, false , 0 , 2 , "rad/s" , true , true , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 65 , 0 , false , 0 , 2 , "rad" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 3.082360502352222476e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 65 , 0
, false , 0 , 2 , "rad/s" , true , true , + 1.000000000000000000e+00 , false
, 1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 151 , 0 , false , 0 , 2 , "rad" , false
, true , + 1.000000000000000000e+00 , false , 1 , { -
1.370796326794896602e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 151 , 0 , false , 0 , 2 , "rad/s" , true
, true , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 152 , 0 , false , 0 , 2 , "rad" , false
, true , + 1.000000000000000000e+00 , false , 1 , { +
3.387346039114803808e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 152 , 0 , false , 0 , 2 , "rad/s" , true
, true , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 152 , 1 , false , 0 , 2 , "rad" , false
, true , + 1.000000000000000000e+00 , false , 1 , { +
1.745329251994329547e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 152 , 1 , false , 0 , 2 , "rad/s" , true
, true , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 153 , 0 , false , 0 , 2 , "rad" , false
, true , + 1.000000000000000000e+00 , false , 1 , { +
3.126148604348795157e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 153 , 0 , false , 0 , 2 , "rad/s" , true
, true , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 283 , 0 , false , 0 , 2 , "m" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { - 8.897399999999999753e-02
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 283 , 0
, false , 0 , 2 , "m/s" , true , false , + 1.000000000000000000e+00 , false ,
1 , { + 1.199999999999999956e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 283 , 1 , false , 0 , 2 , "m" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 1.325032999999999905e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 283 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 283 , 2 , false , 0 , 2 , "m" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { - 1.701899999999999941e-02
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 283 , 2
, false , 0 , 2 , "m/s" , true , false , + 1.000000000000000000e+00 , false ,
1 , { - 2.000000000000000111e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 283 , 3 , false , 0 , 2 , "rad" , false
, false , + 1.000000000000000000e+00 , false , 4 , { +
9.963885617020442620e-01 , + 2.222421506229571315e-07 , -
1.483752280474606071e-03 , - 8.489777728805510126e-02 } , { +
0.000000000000000000e+00 } } , { 2 , 283 , 3 , false , 0 , 2 , "deg/s" , true
, false , + 1.000000000000000000e+00 , false , 3 , { -
4.453556652313930635e-06 , - 2.967059728390360369e-03 , -
5.235987755982988935e-05 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } } ; const size_t numTargets = 24 ; int_T status
; size_t i ; status = pm_create_real_vector_fields ( & smData ->
mAssemblyFullStateVector , 29 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_real_vector_fields ( & smData ->
mSimulationFullStateVector , 29 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData
-> mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize
* sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 24 ; smData ->
mNumInputMotionPrimitives = 0 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
ramadan_2021_5be9147a_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mParamAssertPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertDescriptors , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector , 0 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ; ++ i , ++ ad ) {
smData -> mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ;
smData -> mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ;
smData -> mParamAssertDescriptors [ i ] = cStringToCharVector ( ad ->
mDescriptor ) ; smData -> mParamAssertMessages [ i ] = cStringToCharVector (
ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i ] =
cStringToCharVector ( ad -> mMessageID ) ; smData -> mParamAssertIsWarnings .
mX [ i ] = ad -> mIsWarn ; } } } static void initModeVector (
NeDaePrivateData * smData ) { { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mAssemblyModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mAssemblyModeVector . mN ; ++ i ) smData -> mAssemblyModeVector .
mX [ i ] = 0 ; } { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
ramadan_2021_5be9147a_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 0 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 29 ] = { "Body_and_Contact_Model.x6_DOF_Joint_IC.Px.p" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.Py.p" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.Pz.p" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.Q" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.Q" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.Q" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.Q" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.Px.v" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.Py.v" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.Pz.v" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.w" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.w" ,
"Body_and_Contact_Model.x6_DOF_Joint_IC.S.w" ,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.Rx.q"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.Ry.q"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.Rx.w"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.Ry.w"
, "Body_and_Contact_Model.L_Leg.Left_Knee_LK_Pitch.Rz.q" ,
"Body_and_Contact_Model.L_Leg.Left_Knee_LK_Pitch.Rz.w" ,
"Body_and_Contact_Model.L_Leg.Left_Ankle_LA_Pitch.Rz.q" ,
"Body_and_Contact_Model.L_Leg.Left_Ankle_LA_Pitch.Rz.w" ,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.Rx.q"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.Ry.q"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.Rx.w"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.Ry.w"
, "Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.Rz.q" ,
"Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.Rz.w" ,
"Body_and_Contact_Model.R_Leg.Right_Ankle_RA_Pitch.Rz.q" ,
"Body_and_Contact_Model.R_Leg.Right_Ankle_RA_Pitch.Rz.w" } ; const char *
varObjects [ 29 ] = { "ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
"ramadan_2021/Body and Contact Model/6-DOF Joint IC" ,
 "ramadan_2021/Body and Contact Model/L Leg/Left Hip (LH) Pitch (about X) and Roll (about Y)  Joints"
,
 "ramadan_2021/Body and Contact Model/L Leg/Left Hip (LH) Pitch (about X) and Roll (about Y)  Joints"
,
 "ramadan_2021/Body and Contact Model/L Leg/Left Hip (LH) Pitch (about X) and Roll (about Y)  Joints"
,
 "ramadan_2021/Body and Contact Model/L Leg/Left Hip (LH) Pitch (about X) and Roll (about Y)  Joints"
, "ramadan_2021/Body and Contact Model/L Leg/Left Knee (LK) Pitch" ,
"ramadan_2021/Body and Contact Model/L Leg/Left Knee (LK) Pitch" ,
"ramadan_2021/Body and Contact Model/L Leg/Left Ankle (LA) Pitch" ,
"ramadan_2021/Body and Contact Model/L Leg/Left Ankle (LA) Pitch" ,
 "ramadan_2021/Body and Contact Model/R Leg/Right Hip (RH) Pitch (about X) and Roll (about Y)  Joints"
,
 "ramadan_2021/Body and Contact Model/R Leg/Right Hip (RH) Pitch (about X) and Roll (about Y)  Joints"
,
 "ramadan_2021/Body and Contact Model/R Leg/Right Hip (RH) Pitch (about X) and Roll (about Y)  Joints"
,
 "ramadan_2021/Body and Contact Model/R Leg/Right Hip (RH) Pitch (about X) and Roll (about Y)  Joints"
, "ramadan_2021/Body and Contact Model/R Leg/Right Knee (RK) Pitch" ,
"ramadan_2021/Body and Contact Model/R Leg/Right Knee (RK) Pitch" ,
"ramadan_2021/Body and Contact Model/R Leg/Right Ankle (RA) Pitch" ,
"ramadan_2021/Body and Contact Model/R Leg/Right Ankle (RA) Pitch" } ; smData
-> mNumVarScalars = 29 ; smData -> mVarFullPaths = NULL ; smData ->
mVarObjects = NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ;
PmAllocator * alloc = pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData
-> mVarFullPaths , PmCharVector , 29 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mVarObjects , PmCharVector , 29 , alloc ) ; for ( s = 0 ; s < smData ->
mNumVarScalars ; ++ s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector
( varFullPaths [ s ] ) ; smData -> mVarObjects [ s ] = cStringToCharVector (
varObjects [ s ] ) ; } } } static void initRuntimeParameters (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; int_T status = 0 ; size_t i = 0 ; const int32_T * rtpRootVarRows = NULL ;
const int32_T * rtpRootVarCols = NULL ; const char * * rtpFullPaths = NULL ;
smData -> mNumRtpRootVars = 0 ; status = pm_create_int_vector_fields ( &
smData -> mRtpRootVarRows , smData -> mNumRtpRootVars , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mRtpRootVarRows . mX ,
rtpRootVarRows , smData -> mNumRtpRootVars * sizeof ( int32_T ) ) ; status =
pm_create_int_vector_fields ( & smData -> mRtpRootVarCols , smData ->
mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mRtpRootVarCols . mX , rtpRootVarCols , smData -> mNumRtpRootVars * sizeof
( int32_T ) ) ; smData -> mRtpFullPaths = NULL ; if ( smData ->
mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData ->
mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
NeDsIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 9 ]
= { "Body_and_Contact_Model.L_Leg.Left_Ankle_LA_Pitch.ti" ,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.txi"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.tyi"
, "Body_and_Contact_Model.L_Leg.Left_Knee_LK_Pitch.ti" ,
"Body_and_Contact_Model.R_Leg.Right_Ankle_RA_Pitch.ti" ,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.txi"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.tyi"
, "Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.ti" ,
"Body_and_Contact_Model.External_Force_and_Torque.fx" } ; const char *
inputUnits [ 9 ] = { "m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" ,
"m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" , "m^2*kg/s^2" ,
"m*kg/s^2" } ; const SizePair inputDimensions [ 9 ] = { { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } } ; const char * outputPortPaths [ 101 ] = {
"Body_and_Contact_Model.L_Leg.Left_Ankle_LA_Pitch.q" ,
"Body_and_Contact_Model.L_Leg.Left_Ankle_LA_Pitch.w" ,
"Body_and_Contact_Model.L_Leg.Left_Ankle_LA_Pitch.b" ,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.qx"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.wx"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.bx"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.qy"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.wy"
,
 "Body_and_Contact_Model.L_Leg.Left_Hip_LH_Pitch_about_X_and_Roll_about_Y_Joints.by"
, "Body_and_Contact_Model.L_Leg.Left_Knee_LK_Pitch.q" ,
"Body_and_Contact_Model.L_Leg.Left_Knee_LK_Pitch.w" ,
"Body_and_Contact_Model.L_Leg.Left_Knee_LK_Pitch.b" ,
"Body_and_Contact_Model.R_Leg.Right_Ankle_RA_Pitch.q" ,
"Body_and_Contact_Model.R_Leg.Right_Ankle_RA_Pitch.w" ,
"Body_and_Contact_Model.R_Leg.Right_Ankle_RA_Pitch.b" ,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.qx"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.wx"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.bx"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.qy"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.wy"
,
 "Body_and_Contact_Model.R_Leg.Right_Hip_RH_Pitch_about_X_and_Roll_about_Y_Joints.by"
, "Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.q" ,
"Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.w" ,
"Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.b" ,
"Body_and_Contact_Model.R_Leg.Right_Knee_RK_Pitch.t" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force1.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force2.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force3.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force4.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force5.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force6.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force7.sep" ,
"Body_and_Contact_Model.Subsystem.Spatial_Contact_Force8.sep" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.R" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.x" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.y" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.z" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.vx" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.vy" ,
"Body_and_Contact_Model.L_Leg.Foot.XYZ_Sensor_Ball_left1.Frame_Sensor.vz" ,
"Body_and_Contact_Model.L_Leg.Rotation_Sensor_Knee.Frame_Sensor.Q" ,
"Body_and_Contact_Model.L_Leg.Sensor_Left_Ankle.Frame_Sensor.x" ,
"Body_and_Contact_Model.L_Leg.Sensor_Left_Ankle.Frame_Sensor.y" ,
"Body_and_Contact_Model.L_Leg.Sensor_Left_Ankle.Frame_Sensor.z" ,
"Body_and_Contact_Model.L_Leg.Sensor_Left_Ankle.Frame_Sensor.vx" ,
"Body_and_Contact_Model.L_Leg.Sensor_Left_Ankle.Frame_Sensor.vy" ,
"Body_and_Contact_Model.L_Leg.Sensor_Left_Ankle.Frame_Sensor.vz" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor.Frame_Sensor.x" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor.Frame_Sensor.y" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor.Frame_Sensor.z" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor.Frame_Sensor.vx" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor.Frame_Sensor.vy" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor.Frame_Sensor.vz" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.R" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.x" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.y" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.z" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.vx" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.vy" ,
"Body_and_Contact_Model.R_Leg.Foot1.XYZ_Sensor_Ball_left1.Frame_Sensor.vz" ,
"Body_and_Contact_Model.R_Leg.Rotation_Sensor_Knee.Frame_Sensor.Q" ,
"Body_and_Contact_Model.R_Leg.Sensor_Right_Ankle.Frame_Sensor.x" ,
"Body_and_Contact_Model.R_Leg.Sensor_Right_Ankle.Frame_Sensor.y" ,
"Body_and_Contact_Model.R_Leg.Sensor_Right_Ankle.Frame_Sensor.z" ,
"Body_and_Contact_Model.R_Leg.Sensor_Right_Ankle.Frame_Sensor.vx" ,
"Body_and_Contact_Model.R_Leg.Sensor_Right_Ankle.Frame_Sensor.vy" ,
"Body_and_Contact_Model.R_Leg.Sensor_Right_Ankle.Frame_Sensor.vz" ,
"Body_and_Contact_Model.Sensor_Left_Ankle.Frame_Sensor.x" ,
"Body_and_Contact_Model.Sensor_Left_Ankle.Frame_Sensor.y" ,
"Body_and_Contact_Model.Sensor_Left_Ankle.Frame_Sensor.z" ,
"Body_and_Contact_Model.Sensor_Left_Ankle.Frame_Sensor.vx" ,
"Body_and_Contact_Model.Sensor_Left_Ankle.Frame_Sensor.vy" ,
"Body_and_Contact_Model.Sensor_Left_Ankle.Frame_Sensor.vz" ,
"Body_and_Contact_Model.Sensor_Left_Ankle1.Frame_Sensor.x" ,
"Body_and_Contact_Model.Sensor_Left_Ankle1.Frame_Sensor.y" ,
"Body_and_Contact_Model.Sensor_Left_Ankle1.Frame_Sensor.z" ,
"Body_and_Contact_Model.Sensor_Left_Ankle1.Frame_Sensor.vx" ,
"Body_and_Contact_Model.Sensor_Left_Ankle1.Frame_Sensor.vy" ,
"Body_and_Contact_Model.Sensor_Left_Ankle1.Frame_Sensor.vz" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.Q" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.wx" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.wy" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.wz" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.x" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.y" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.z" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.vx" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.vy" ,
"Body_and_Contact_Model.Vestibular_System.Trunk_Sensor.Frame_Sensor.vz" ,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Left_Hip.Frame_Sensor.x"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Left_Hip.Frame_Sensor.y"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Left_Hip.Frame_Sensor.z"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Left_Hip.Frame_Sensor.vx"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Left_Hip.Frame_Sensor.vy"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Left_Hip.Frame_Sensor.vz"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Right_Hip.Frame_Sensor.x"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Right_Hip.Frame_Sensor.y"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Right_Hip.Frame_Sensor.z"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Right_Hip.Frame_Sensor.vx"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Right_Hip.Frame_Sensor.vy"
,
"Body_and_Contact_Model.Vestibular_System.XYZ_Sensor_Right_Hip.Frame_Sensor.vz"
} ; const char * outputUnits [ 101 ] = { "rad" , "rad/s" , "rad/s^2" , "rad"
, "rad/s" , "rad/s^2" , "rad" , "rad/s" , "rad/s^2" , "rad" , "rad/s" ,
"rad/s^2" , "rad" , "rad/s" , "rad/s^2" , "rad" , "rad/s" , "rad/s^2" , "rad"
, "rad/s" , "rad/s^2" , "rad" , "rad/s" , "rad/s^2" , "m^2*kg/s^2" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "1" , "m" , "m" , "m" , "m/s" ,
"m/s" , "m/s" , "1" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" , "m" , "m" ,
"m" , "m/s" , "m/s" , "m/s" , "1" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" ,
"1" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" , "m" , "m" , "m" , "m/s" ,
"m/s" , "m/s" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" , "1" , "rad/s" ,
"rad/s" , "rad/s" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" , "m" , "m" , "m"
, "m/s" , "m/s" , "m/s" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" } ; const
SizePair outputDimensions [ 101 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 3 , 3 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 3 , 3 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
} ; initIoInfoHelper ( 9 , inputPortPaths , inputUnits , inputDimensions ,
true , smData ) ; initIoInfoHelper ( 101 , outputPortPaths , outputUnits ,
outputDimensions , false , smData ) ; } static void initInputDerivs (
NeDaePrivateData * smData ) { const int32_T numInputDerivs [ 9 ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 } ; PmAllocator * alloc = pm_default_allocator ( )
; const int_T status = pm_create_int_vector_fields ( & smData ->
mNumInputDerivs , smData -> mInputVectorSize , alloc ) ; checkMemAllocStatus
( status ) ; memcpy ( smData -> mNumInputDerivs . mX , numInputDerivs , 9 *
sizeof ( int32_T ) ) ; smData -> mInputOrder = 1 ; } static void
initDirectFeedthrough ( NeDaePrivateData * smData ) { const boolean_T
directFeedthroughVector [ 9 ] = { false , false , false , false , false ,
false , false , false , false } ; const boolean_T directFeedthroughMatrix [
1134 ] = { false , false , true , false , false , true , false , false , true
, false , false , true , false , false , true , false , false , true , false
, false , true , false , false , true , true , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , false , false , true , false , false
, true , false , false , true , false , false , true , false , false , true ,
false , false , true , false , false , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , false , false , true , false ,
false , true , false , false , true , false , false , true , false , false ,
true , false , false , true , false , false , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , false , true ,
false , false , true , false , false , true , false , false , true , false ,
false , true , false , false , true , false , false , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , false , false
, true , false , false , true , false , false , true , false , false , true ,
false , false , true , false , false , true , false , false , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, false , true , false , false , true , false , false , true , false , false
, true , false , false , true , false , false , true , false , false , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, false , false , true , false , false , true , false , false , true , false
, false , true , false , false , true , false , false , true , false , false
, true , true , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , false , true , false , false , true , false , false , true ,
false , false , true , false , false , true , false , false , true , false ,
false , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , true , false , false , true , false , false , true , false , false ,
true , false , false , true , false , false , true , false , false , true ,
false , false , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false } ;
PmAllocator * alloc = pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 9 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 9 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 1134 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 1134 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 126 ] = { 0 , 0
, 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 ,
0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; smData -> mOutputFunctionMap =
pm_create_int_vector ( 126 , alloc ) ; memcpy ( smData -> mOutputFunctionMap
-> mX , outputFunctionMap , 126 * sizeof ( int32_T ) ) ; smData ->
mNumOutputClasses = 2 ; smData -> mHasKinematicOutputs = true ; smData ->
mHasDynamicOutputs = true ; smData -> mIsOutputClass0Dynamic = false ; smData
-> mDoComputeDynamicOutputs = false ; smData -> mCachedDerivativesAvailable =
false ; { size_t i = 0 ; const int_T status = pm_create_real_vector_fields (
& smData -> mCachedDerivatives , 29 , pm_default_allocator ( ) ) ;
checkMemAllocStatus ( status ) ; for ( i = 0 ; i < smData ->
mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives . mX [ i ] =
0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 7 ] = { { 63 , 3 } , { 64 , 1 } , { 65 , 2 } , { 151 , 6 }
, { 152 , 4 } , { 153 , 5 } , { 283 , 0 } } ; const size_t primitiveIndices [
7 + 1 ] = { 0 , 4 , 6 , 7 , 8 , 10 , 11 , 12 } ; const SmSizePair
stateOffsets [ 12 ] = { { 0 , 7 } , { 1 , 8 } , { 2 , 9 } , { 3 , 10 } , { 13
, 15 } , { 14 , 16 } , { 17 , 18 } , { 19 , 20 } , { 21 , 23 } , { 22 , 24 }
, { 25 , 26 } , { 27 , 28 } } ; const SmSizePair dofOffsets [ 12 ] = { { 0 ,
1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } ,
{ 9 , 10 } , { 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } } ; const
size_t * flexibleStages = NULL ; const size_t remodIndices [ 8 ] = { 13 , 14
, 17 , 19 , 21 , 22 , 25 , 27 } ; const size_t * equationsPerConstraint =
NULL ; const size_t dofToVelSlot [ 14 ] = { 7 , 8 , 9 , 10 , 11 , 12 , 15 ,
16 , 18 , 20 , 23 , 24 , 26 , 28 } ; const size_t * constraintDofs = NULL ;
const size_t constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t Jm = 0 ;
const size_t Jn = 14 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 14 ; delegate -> mDof = 14 ; delegate -> mStateSize = 29 ;
delegate -> mContinuousStateSize = 29 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 7 ; delegate -> mNumConstraints = 0 ; delegate ->
mNumAllConstraintEquations = 0 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , 7 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 7 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 12 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 12 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 12 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 12 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 8 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 8 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 14 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 14 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 14 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 14 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 12 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 12 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 12 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 12 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 12 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 1 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 29 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 29 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 29 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 29 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 225 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 14 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 29 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 14 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 133 , 0.0
) ; delegate -> mSetTargets = ramadan_2021_5be9147a_1_setTargets ; delegate
-> mResetStateVector = ramadan_2021_5be9147a_1_resetAsmStateVector ; delegate
-> mInitializeTrackedAngleState =
ramadan_2021_5be9147a_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = ramadan_2021_5be9147a_1_computeDiscreteState ;
delegate -> mAdjustPosition = ramadan_2021_5be9147a_1_adjustPosition ;
delegate -> mPerturbJointPrimitiveState =
ramadan_2021_5be9147a_1_perturbAsmJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = NULL ; delegate -> mComputePosDofBlendMatrix =
ramadan_2021_5be9147a_1_computePosDofBlendMatrix ; delegate ->
mComputeVelDofBlendMatrix = ramadan_2021_5be9147a_1_computeVelDofBlendMatrix
; delegate -> mProjectPartiallyTargetedPos =
ramadan_2021_5be9147a_1_projectPartiallyTargetedPos ; delegate ->
mPropagateMotion = ramadan_2021_5be9147a_1_propagateMotion ; delegate ->
mComputeAssemblyError = ramadan_2021_5be9147a_1_computeAssemblyError ;
delegate -> mComputeAssemblyJacobian =
ramadan_2021_5be9147a_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian =
ramadan_2021_5be9147a_1_computeFullAssemblyJacobian ; delegate ->
mIsInKinematicSingularity = ramadan_2021_5be9147a_1_isInKinematicSingularity
; delegate -> mConvertStateVector =
ramadan_2021_5be9147a_1_convertStateVector ; delegate ->
mConstructStateVector = NULL ; delegate -> mExtractSolverStateVector = NULL ;
delegate -> mIsPositionViolation = NULL ; delegate -> mIsVelocityViolation =
NULL ; delegate -> mProjectStateSim = NULL ; delegate ->
mComputeConstraintError = NULL ; delegate -> mResetModeVector = NULL ;
delegate -> mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 7 ] = { { 63 , 3 } , { 64 , 1 } ,
{ 65 , 2 } , { 151 , 6 } , { 152 , 4 } , { 153 , 5 } , { 283 , 0 } } ; const
size_t primitiveIndices [ 7 + 1 ] = { 0 , 4 , 6 , 7 , 8 , 10 , 11 , 12 } ;
const SmSizePair stateOffsets [ 12 ] = { { 0 , 7 } , { 1 , 8 } , { 2 , 9 } ,
{ 3 , 10 } , { 13 , 15 } , { 14 , 16 } , { 17 , 18 } , { 19 , 20 } , { 21 ,
23 } , { 22 , 24 } , { 25 , 26 } , { 27 , 28 } } ; const SmSizePair
dofOffsets [ 12 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 6 } , { 6 , 7
} , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } , { 10 , 11 } , { 11 , 12 } , { 12 ,
13 } , { 13 , 14 } } ; const size_t * flexibleStages = NULL ; const size_t
remodIndices [ 8 ] = { 13 , 14 , 17 , 19 , 21 , 22 , 25 , 27 } ; const size_t
* equationsPerConstraint = NULL ; const size_t dofToVelSlot [ 14 ] = { 7 , 8
, 9 , 10 , 11 , 12 , 15 , 16 , 18 , 20 , 23 , 24 , 26 , 28 } ; const size_t *
constraintDofs = NULL ; const size_t constraintDofOffsets [ 0 + 1 ] = { 0 } ;
const size_t Jm = 0 ; const size_t Jn = 14 ; SmSizePair zeroSizePair ;
zeroSizePair . mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 14 ; delegate -> mDof
= 14 ; delegate -> mStateSize = 29 ; delegate -> mContinuousStateSize = 29 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 7 ; delegate ->
mNumConstraints = 0 ; delegate -> mNumAllConstraintEquations = 0 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 7 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 7 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 12 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 12 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 12 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 12 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 8 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 8 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 14 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 14 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 14 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 14 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 14 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 14 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 12 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 12 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 12 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 12 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 12 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 1 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 29 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 29 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 29 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 29 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 225 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 14 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 29 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 14 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 133 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
ramadan_2021_5be9147a_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState =
ramadan_2021_5be9147a_1_perturbSimJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = ramadan_2021_5be9147a_1_perturbFlexibleBodyState
; delegate -> mComputePosDofBlendMatrix = NULL ; delegate ->
mComputeVelDofBlendMatrix = NULL ; delegate -> mProjectPartiallyTargetedPos =
NULL ; delegate -> mPropagateMotion = NULL ; delegate ->
mComputeAssemblyError = NULL ; delegate -> mComputeAssemblyJacobian = NULL ;
delegate -> mComputeFullAssemblyJacobian = NULL ; delegate ->
mIsInKinematicSingularity = NULL ; delegate -> mConvertStateVector = NULL ;
delegate -> mConstructStateVector =
ramadan_2021_5be9147a_1_constructStateVector ; delegate ->
mExtractSolverStateVector = ramadan_2021_5be9147a_1_extractSolverStateVector
; delegate -> mIsPositionViolation =
ramadan_2021_5be9147a_1_isPositionViolation ; delegate ->
mIsVelocityViolation = ramadan_2021_5be9147a_1_isVelocityViolation ; delegate
-> mProjectStateSim = ramadan_2021_5be9147a_1_projectStateSim ; delegate ->
mComputeConstraintError = ramadan_2021_5be9147a_1_computeConstraintError ;
delegate -> mResetModeVector = ramadan_2021_5be9147a_1_resetModeVector ;
delegate -> mHasJointDisToNormModeChange =
ramadan_2021_5be9147a_1_hasJointDisToNormModeChange ; delegate ->
mPerformJointDisToNormModeChange =
ramadan_2021_5be9147a_1_performJointDisToNormModeChange ; delegate ->
mOnModeChangedCutJoints = ramadan_2021_5be9147a_1_onModeChangedCutJoints ;
delegate -> mMech = NULL ; } static void initMechanismDelegates (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T * motionInputOffsets = NULL ; int_T status = 0 ;
initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 0 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mNumJacPerturbLoBoundsFcn =
dae_cg_numJacPerturbLoBounds_method ; smData -> mNumJacPerturbHiBoundsFcn =
dae_cg_numJacPerturbHiBounds_method ; smData -> mOutputFcn =
dae_cg_compOutputs_method ; smData -> mModeFcn = dae_cg_mode_method ; smData
-> mZeroCrossingFcn = dae_cg_zeroCrossing_method ; smData -> mProjectionFcn =
dae_cg_project_solve ; smData -> mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve ;
smData -> mCheckFcn = ( smData -> mStateVectorSize == 0 ) ?
dae_cg_check_solve : NULL ; smData -> mAssemblyFcn = dae_cg_assemble_solve ;
smData -> mSetupLoggerFcn = sm_ssci_setupLoggerFcn_codeGen ; smData ->
mLogFcn = sm_ssci_logFcn_codeGen ; smData -> mResidualsFcn = NULL ; smData ->
mLinearizeFcn = NULL ; smData -> mGenerateFcn = NULL ; } static void
initLiveLinkToSm ( NeDaePrivateData * smData ) { smData -> mLiveSmLink = NULL
; smData -> mLiveSmLink_destroy = NULL ; smData -> mLiveSmLink_copy = NULL ;
} void ramadan_2021_5be9147a_1_NeDaePrivateData_create ( NeDaePrivateData *
smData ) { initBasicAttributes ( smData ) ; initStateVector ( smData ) ;
initAsserts ( smData ) ; initModeVector ( smData ) ; initZeroCrossings (
smData ) ; initVariables ( smData ) ; initRuntimeParameters ( smData ) ;
initIoInfo ( smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough (
smData ) ; initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData )
; initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
