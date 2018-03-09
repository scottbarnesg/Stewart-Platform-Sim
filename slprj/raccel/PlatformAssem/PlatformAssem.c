#include "__cf_PlatformAssem.h"
#include "rt_logging_mmi.h"
#include "PlatformAssem_capi.h"
#include <math.h>
#include "PlatformAssem.h"
#include "PlatformAssem_private.h"
#include "PlatformAssem_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "8.13 (R2017b) 24-Jul-2017" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\PlatformAssem\\PlatformAssem_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ;
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ;
#endif
void * rt_TDelayCreateBuf ( int_T numBuffer , int_T bufSz , int_T elemSz ) {
return ( ( void * ) utMalloc ( numBuffer * bufSz * elemSz ) ) ; }
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
boolean_T rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T * tailPtr ,
int_T * headPtr , int_T * lastPtr , real_T tMinusDelay , real_T * * tBufPtr ,
real_T * * uBufPtr , real_T * * xBufPtr , boolean_T isfixedbuf , boolean_T
istransportdelay , int_T * maxNewBufSzPtr ) { int_T testIdx ; int_T tail = *
tailPtr ; int_T bufSz = * bufSzPtr ; real_T * tBuf = * tBufPtr ; real_T *
xBuf = ( NULL ) ; int_T numBuffer = 2 ; if ( istransportdelay ) { numBuffer =
3 ; xBuf = * xBufPtr ; } testIdx = ( tail < ( bufSz - 1 ) ) ? ( tail + 1 ) :
0 ; if ( ( tMinusDelay <= tBuf [ testIdx ] ) && ! isfixedbuf ) { int_T j ;
real_T * tempT ; real_T * tempU ; real_T * tempX = ( NULL ) ; real_T * uBuf =
* uBufPtr ; int_T newBufSz = bufSz + 1024 ; if ( newBufSz > * maxNewBufSzPtr
) { * maxNewBufSzPtr = newBufSz ; } tempU = ( real_T * ) utMalloc ( numBuffer
* newBufSz * sizeof ( real_T ) ) ; if ( tempU == ( NULL ) ) { return ( false
) ; } tempT = tempU + newBufSz ; if ( istransportdelay ) tempX = tempT +
newBufSz ; for ( j = tail ; j < bufSz ; j ++ ) { tempT [ j - tail ] = tBuf [
j ] ; tempU [ j - tail ] = uBuf [ j ] ; if ( istransportdelay ) tempX [ j -
tail ] = xBuf [ j ] ; } for ( j = 0 ; j < tail ; j ++ ) { tempT [ j + bufSz -
tail ] = tBuf [ j ] ; tempU [ j + bufSz - tail ] = uBuf [ j ] ; if (
istransportdelay ) tempX [ j + bufSz - tail ] = xBuf [ j ] ; } if ( * lastPtr
> tail ) { * lastPtr -= tail ; } else { * lastPtr += ( bufSz - tail ) ; } *
tailPtr = 0 ; * headPtr = bufSz ; utFree ( uBuf ) ; * bufSzPtr = newBufSz ; *
tBufPtr = tempT ; * uBufPtr = tempU ; if ( istransportdelay ) * xBufPtr =
tempX ; } else { * tailPtr = testIdx ; } return ( true ) ; } real_T
rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T * tBuf ,
real_T * uBuf , int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T
newIdx , real_T initOutput , boolean_T discrete , boolean_T
minorStepAndTAtLastMajorOutput ) { int_T i ; real_T yout , t1 , t2 , u1 , u2
; if ( ( newIdx == 0 ) && ( oldestIdx == 0 ) && ( tMinusDelay > tStart ) )
return initOutput ; if ( tMinusDelay <= tStart ) return initOutput ; if ( (
tMinusDelay <= tBuf [ oldestIdx ] ) ) { if ( discrete ) { return ( uBuf [
oldestIdx ] ) ; } else { int_T tempIdx = oldestIdx + 1 ; if ( oldestIdx ==
bufSz - 1 ) tempIdx = 0 ; t1 = tBuf [ oldestIdx ] ; t2 = tBuf [ tempIdx ] ;
u1 = uBuf [ oldestIdx ] ; u2 = uBuf [ tempIdx ] ; if ( t2 == t1 ) { if (
tMinusDelay >= t2 ) { yout = u2 ; } else { yout = u1 ; } } else { real_T f1 =
( t2 - tMinusDelay ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; yout = f1 * u1 +
f2 * u2 ; } return yout ; } } if ( minorStepAndTAtLastMajorOutput ) { if (
newIdx != 0 ) { if ( * lastIdx == newIdx ) { ( * lastIdx ) -- ; } newIdx -- ;
} else { if ( * lastIdx == newIdx ) { * lastIdx = bufSz - 1 ; } newIdx =
bufSz - 1 ; } } i = * lastIdx ; if ( tBuf [ i ] < tMinusDelay ) { while (
tBuf [ i ] < tMinusDelay ) { if ( i == newIdx ) break ; i = ( i < ( bufSz - 1
) ) ? ( i + 1 ) : 0 ; } } else { while ( tBuf [ i ] >= tMinusDelay ) { i = (
i > 0 ) ? i - 1 : ( bufSz - 1 ) ; } i = ( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0
; } * lastIdx = i ; if ( discrete ) { double tempEps = ( DBL_EPSILON ) *
128.0 ; double localEps = tempEps * muDoubleScalarAbs ( tBuf [ i ] ) ; if (
tempEps > localEps ) { localEps = tempEps ; } localEps = localEps / 2.0 ; if
( tMinusDelay >= ( tBuf [ i ] - localEps ) ) { yout = uBuf [ i ] ; } else {
if ( i == 0 ) { yout = uBuf [ bufSz - 1 ] ; } else { yout = uBuf [ i - 1 ] ;
} } } else { if ( i == 0 ) { t1 = tBuf [ bufSz - 1 ] ; u1 = uBuf [ bufSz - 1
] ; } else { t1 = tBuf [ i - 1 ] ; u1 = uBuf [ i - 1 ] ; } t2 = tBuf [ i ] ;
u2 = uBuf [ i ] ; if ( t2 == t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; }
else { yout = u1 ; } } else { real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 )
; real_T f2 = 1.0 - f1 ; yout = f1 * u1 + f2 * u2 ; } } return ( yout ) ; }
#ifndef __RTW_UTFREE__  
extern void utFree ( void * ) ;
#endif
void rt_TDelayFreeBuf ( void * buf ) { utFree ( buf ) ; } void MdlInitialize
( void ) { boolean_T tmp ; int_T tmp_p ; char * tmp_e ; tmp = false ; if (
tmp ) { tmp_p = strcmp ( "ode15s" , ssGetSolverName ( rtS ) ) ; if ( tmp_p !=
0 ) { tmp_e = solver_mismatch_message ( "ode15s" , ssGetSolverName ( rtS ) )
; ssSetErrorStatus ( rtS , tmp_e ) ; } } } void MdlStart ( void ) { boolean_T
tmp ; NeuDiagnosticManager * diagnosticManager ; NeModelParameters
modelParameters ; real_T tmp_p ; NeslSimulator * simulator ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_e ; char * msg ;
NeslSimulationData * simulationData ; real_T time ; NeModelParameters
modelParameters_p ; real_T time_p ; NeParameterBundle expl_temp ; { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const char *
errorCreatingOSigstreamManager = ( NULL ) ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ) ; if (
errorCreatingOSigstreamManager != ( NULL ) ) { * pOSigstreamManagerAddr = (
NULL ) ; ssSetErrorStatus ( rtS , errorCreatingOSigstreamManager ) ; return ;
} } simulator = nesl_lease_simulator ( "PlatformAssem/Solver Configuration_1"
, 0 , 0 ) ; rtDW . arbky52sy4 = ( void * ) simulator ; tmp = pointer_is_null
( rtDW . arbky52sy4 ) ; if ( tmp ) { PlatformAssem_f0ca4364_1_gateway ( ) ;
simulator = nesl_lease_simulator ( "PlatformAssem/Solver Configuration_1" , 0
, 0 ) ; rtDW . arbky52sy4 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . ngpiznqc3y = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lrmjpxlgnq = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = true ; modelParameters .
mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0 ; modelParameters
. mLoadInitialState = false ; modelParameters . mUseSimState = false ;
modelParameters . mLinTrimCompile = false ; modelParameters . mLoggingMode =
SSC_LOGGING_NONE ; modelParameters . mRTWModifiedTimeStamp = 4.42509887E+8 ;
tmp_p = 0.001 ; modelParameters . mSolverTolerance = tmp_p ; tmp_p = 0.0 ;
modelParameters . mFixedStepSize = tmp_p ; tmp = true ; modelParameters .
mVariableStepSolver = tmp ; simulator = ( NeslSimulator * ) rtDW . arbky52sy4
; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lrmjpxlgnq ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_e = nesl_initialize_simulator ( simulator , & modelParameters ,
diagnosticManager ) ; if ( tmp_e != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } expl_temp .
mRealParameters . mN = 0 ; expl_temp . mRealParameters . mX = NULL ;
expl_temp . mLogicalParameters . mN = 0 ; expl_temp . mLogicalParameters . mX
= NULL ; expl_temp . mIntegerParameters . mN = 0 ; expl_temp .
mIntegerParameters . mX = NULL ; expl_temp . mIndexParameters . mN = 0 ;
expl_temp . mIndexParameters . mX = NULL ; nesl_simulator_set_rtps ( (
NeslSimulator * ) rtDW . arbky52sy4 , expl_temp ) ; simulationData = (
NeslSimulationData * ) rtDW . ngpiznqc3y ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 73 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . pbkunh1h0f
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulator = ( NeslSimulator * ) rtDW . arbky52sy4 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lrmjpxlgnq ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( simulator , NESL_SIM_INITIALIZEONCE , simulationData ,
diagnosticManager ) ; if ( tmp_e != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulator =
nesl_lease_simulator ( "PlatformAssem/Solver Configuration_1" , 2 , 0 ) ;
rtDW . gh2mn52l21 = ( void * ) simulator ; tmp = pointer_is_null ( rtDW .
gh2mn52l21 ) ; if ( tmp ) { PlatformAssem_f0ca4364_1_gateway ( ) ; simulator
= nesl_lease_simulator ( "PlatformAssem/Solver Configuration_1" , 2 , 0 ) ;
rtDW . gh2mn52l21 = ( void * ) simulator ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . hjxznhxxlk = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
ejft2xph51 = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mFixedStepSize = 0.001 ; modelParameters_p . mStartTime = 0.0 ;
modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 4.42509887E+8 ; tmp_p = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_p ; tmp_p = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_p ; tmp = true ; modelParameters_p . mVariableStepSolver = tmp ;
simulator = ( NeslSimulator * ) rtDW . gh2mn52l21 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . ejft2xph51 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
nesl_initialize_simulator ( simulator , & modelParameters_p ,
diagnosticManager ) ; if ( tmp_e != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulationData = (
NeslSimulationData * ) rtDW . hjxznhxxlk ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; simulationData -> mData -> mIsEvaluatingF0 = false ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulator = ( NeslSimulator * ) rtDW .
gh2mn52l21 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ejft2xph51
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( simulator ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_e
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } { static int_T rt_ToWksWidths [ ] = { 6 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 6
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ; static const char_T
* rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo rt_ToWksSignalInfo =
{ 1 , rt_ToWksWidths , rt_ToWksNumDimensions , rt_ToWksDimensions ,
rt_ToWksIsVarDims , rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize ,
rt_ToWksDataTypeIds , rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "PlatformAssem/To Workspace1" ; rtDW .
dqb3muistl . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "motor_states" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . dqb3muistl . LoggedData == ( NULL ) )
return ; } { { int_T i1 ; int_T * iw_Tail = & rtDW . hdpggz3z2b . Tail [ 0 ]
; int_T * iw_Head = & rtDW . hdpggz3z2b . Head [ 0 ] ; int_T * iw_Last = &
rtDW . hdpggz3z2b . Last [ 0 ] ; int_T * iw_CircularBufSize = & rtDW .
hdpggz3z2b . CircularBufSize [ 0 ] ; void * * pw_TUbufferPtrs = & rtDW .
pkz35q2tqr . TUbufferPtrs [ 0 ] ; for ( i1 = 0 ; i1 < 3 ; i1 ++ ) { real_T *
pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 1024 , sizeof ( real_T ) ) ;
if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } iw_Tail [ i1 ] = 0 ; iw_Head
[ i1 ] = 0 ; iw_Last [ i1 ] = 0 ; iw_CircularBufSize [ i1 ] = 1024 ; pBuffer
[ 0 ] = rtP . TransportDelay_InitOutput ; pBuffer [ 1024 ] = ssGetT ( rtS ) ;
pw_TUbufferPtrs [ i1 ] = ( void * ) & pBuffer [ 0 ] ; pw_TUbufferPtrs [ i1 +
3 ] = ( void * ) & pBuffer [ 1024 ] ; } } } { static int_T rt_ToWksWidths [ ]
= { 3 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 3 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"PlatformAssem/Platform Acceleration (Abs)/To Workspace2" ; rtDW . abjcuk1ofe
. LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart
( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) ,
"platform_acceleration" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . abjcuk1ofe . LoggedData == ( NULL ) )
return ; } { { int_T i1 ; int_T * iw_Tail = & rtDW . ghbz0y5suk . Tail [ 0 ]
; int_T * iw_Head = & rtDW . ghbz0y5suk . Head [ 0 ] ; int_T * iw_Last = &
rtDW . ghbz0y5suk . Last [ 0 ] ; int_T * iw_CircularBufSize = & rtDW .
ghbz0y5suk . CircularBufSize [ 0 ] ; void * * pw_TUbufferPtrs = & rtDW .
hphyxp0mpj . TUbufferPtrs [ 0 ] ; for ( i1 = 0 ; i1 < 4 ; i1 ++ ) { real_T *
pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 1024 , sizeof ( real_T ) ) ;
if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } iw_Tail [ i1 ] = 0 ; iw_Head
[ i1 ] = 0 ; iw_Last [ i1 ] = 0 ; iw_CircularBufSize [ i1 ] = 1024 ; pBuffer
[ 0 ] = rtP . TransportDelay_InitOutput_bizwdr4jed ; pBuffer [ 1024 ] =
ssGetT ( rtS ) ; pw_TUbufferPtrs [ i1 ] = ( void * ) & pBuffer [ 0 ] ;
pw_TUbufferPtrs [ i1 + 8 ] = ( void * ) & pBuffer [ 1024 ] ; } iw_Tail = &
rtDW . ghbz0y5suk . Tail [ 4 ] ; iw_Head = & rtDW . ghbz0y5suk . Head [ 4 ] ;
iw_Last = & rtDW . ghbz0y5suk . Last [ 4 ] ; iw_CircularBufSize = & rtDW .
ghbz0y5suk . CircularBufSize [ 4 ] ; pw_TUbufferPtrs = & rtDW . hphyxp0mpj .
TUbufferPtrs [ 4 ] ; for ( i1 = 0 ; i1 < 4 ; i1 ++ ) { real_T * pBuffer = (
real_T * ) rt_TDelayCreateBuf ( 2 , 1024 , sizeof ( real_T ) ) ; if ( pBuffer
== ( NULL ) ) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ;
return ; } iw_Tail [ i1 ] = 0 ; iw_Head [ i1 ] = 0 ; iw_Last [ i1 ] = 0 ;
iw_CircularBufSize [ i1 ] = 1024 ; pBuffer [ 0 ] = rtP .
TransportDelay_InitOutput_bizwdr4jed ; pBuffer [ 1024 ] = ssGetT ( rtS ) ;
pw_TUbufferPtrs [ i1 ] = ( void * ) & pBuffer [ 0 ] ; pw_TUbufferPtrs [ i1 +
8 ] = ( void * ) & pBuffer [ 1024 ] ; } } } { static int_T rt_ToWksWidths [ ]
= { 8 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 8 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"PlatformAssem/Platform Orientation/To Workspace" ; rtDW . n0drc2wqml .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) ,
"platform_orientation" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . n0drc2wqml . LoggedData == ( NULL ) )
return ; } { { int_T i1 ; int_T * iw_Tail = & rtDW . l2csqd4zeb . Tail [ 0 ]
; int_T * iw_Head = & rtDW . l2csqd4zeb . Head [ 0 ] ; int_T * iw_Last = &
rtDW . l2csqd4zeb . Last [ 0 ] ; int_T * iw_CircularBufSize = & rtDW .
l2csqd4zeb . CircularBufSize [ 0 ] ; void * * pw_TUbufferPtrs = & rtDW .
jnawroeyau . TUbufferPtrs [ 0 ] ; for ( i1 = 0 ; i1 < 3 ; i1 ++ ) { real_T *
pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 1024 , sizeof ( real_T ) ) ;
if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } iw_Tail [ i1 ] = 0 ; iw_Head
[ i1 ] = 0 ; iw_Last [ i1 ] = 0 ; iw_CircularBufSize [ i1 ] = 1024 ; pBuffer
[ 0 ] = rtP . TransportDelay_InitOutput_a2xex0xddn ; pBuffer [ 1024 ] =
ssGetT ( rtS ) ; pw_TUbufferPtrs [ i1 ] = ( void * ) & pBuffer [ 0 ] ;
pw_TUbufferPtrs [ i1 + 3 ] = ( void * ) & pBuffer [ 1024 ] ; } } } { static
int_T rt_ToWksWidths [ ] = { 3 } ; static int_T rt_ToWksNumDimensions [ ] = {
1 } ; static int_T rt_ToWksDimensions [ ] = { 3 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"PlatformAssem/Platform Translation (Abs)/To Workspace2" ; rtDW . dgitcoss2o
. LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart
( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) ,
"platform_translation_abs" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . dgitcoss2o . LoggedData == ( NULL ) )
return ; } { { real_T * pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 1024
, sizeof ( real_T ) ) ; if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } rtDW . bwjwwwhboe . Tail [ 0
] = 0 ; rtDW . bwjwwwhboe . Head [ 0 ] = 0 ; rtDW . bwjwwwhboe . Last [ 0 ] =
0 ; rtDW . bwjwwwhboe . CircularBufSize [ 0 ] = 1024 ; pBuffer [ 0 ] = rtP .
TransportDelay_InitOutput_nhc31y12nz ; pBuffer [ 1024 ] = ssGetT ( rtS ) ;
rtDW . am1ghvvstj . TUbufferPtrs [ 0 ] = ( void * ) & pBuffer [ 0 ] ; rtDW .
am1ghvvstj . TUbufferPtrs [ 3 ] = ( void * ) & pBuffer [ 1024 ] ; } { real_T
* pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 1024 , sizeof ( real_T ) )
; if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } rtDW . bwjwwwhboe . Tail [ 1
] = 0 ; rtDW . bwjwwwhboe . Head [ 1 ] = 0 ; rtDW . bwjwwwhboe . Last [ 1 ] =
0 ; rtDW . bwjwwwhboe . CircularBufSize [ 1 ] = 1024 ; pBuffer [ 0 ] = rtP .
TransportDelay_InitOutput_nhc31y12nz ; pBuffer [ 1024 ] = ssGetT ( rtS ) ;
rtDW . am1ghvvstj . TUbufferPtrs [ 1 ] = ( void * ) & pBuffer [ 0 ] ; rtDW .
am1ghvvstj . TUbufferPtrs [ 4 ] = ( void * ) & pBuffer [ 1024 ] ; } { real_T
* pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 , 1024 , sizeof ( real_T ) )
; if ( pBuffer == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } rtDW . bwjwwwhboe . Tail [ 2
] = 0 ; rtDW . bwjwwwhboe . Head [ 2 ] = 0 ; rtDW . bwjwwwhboe . Last [ 2 ] =
0 ; rtDW . bwjwwwhboe . CircularBufSize [ 2 ] = 1024 ; pBuffer [ 0 ] = rtP .
TransportDelay_InitOutput_nhc31y12nz ; pBuffer [ 1024 ] = ssGetT ( rtS ) ;
rtDW . am1ghvvstj . TUbufferPtrs [ 2 ] = ( void * ) & pBuffer [ 0 ] ; rtDW .
am1ghvvstj . TUbufferPtrs [ 5 ] = ( void * ) & pBuffer [ 1024 ] ; } } {
static int_T rt_ToWksWidths [ ] = { 3 } ; static int_T rt_ToWksNumDimensions
[ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 3 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"PlatformAssem/Platform Translation (Rel)\n/To Workspace" ; rtDW . pebg5vbojg
. LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart
( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) ,
"platform_translation_rel" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . pebg5vbojg . LoggedData == ( NULL ) )
return ; } MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false
; void * pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { boolean_T first_output ;
NeslSimulationData * simulationData ; real_T time ; real_T tmp [ 48 ] ; int_T
tmp_p [ 13 ] ; NeslSimulator * simulator ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; int32_T tmp_e ; char
* msg ; real_T time_p ; real_T tmp_i [ 121 ] ; int_T tmp_m [ 14 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . hvhjhjk4dv [ 1 ] = rtP . base_px_Value ;
} first_output = false ; if ( rtDW . hvhjhjk4dv [ 0 ] == 0.0 ) { rtDW .
hvhjhjk4dv [ 0 ] = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
kch5zgooyu [ 0 ] = rtDW . hvhjhjk4dv [ 1 ] ; rtX . kch5zgooyu [ 1 ] = 0.0 ; }
rtB . iweamutdyj [ 0 ] = rtX . kch5zgooyu [ 0 ] ; rtB . iweamutdyj [ 1 ] =
rtX . kch5zgooyu [ 1 ] ; rtB . iweamutdyj [ 2 ] = ( ( rtDW . hvhjhjk4dv [ 1 ]
- rtX . kch5zgooyu [ 0 ] ) * 1000.0 - 2.0 * rtX . kch5zgooyu [ 1 ] ) * 1000.0
; rtB . iweamutdyj [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
lpu1bjgk0l [ 1 ] = rtP . base_py_Value ; } first_output = false ; if ( rtDW .
lpu1bjgk0l [ 0 ] == 0.0 ) { rtDW . lpu1bjgk0l [ 0 ] = 1.0 ; first_output =
true ; } if ( first_output ) { rtX . kjbkj1blat [ 0 ] = rtDW . lpu1bjgk0l [ 1
] ; rtX . kjbkj1blat [ 1 ] = 0.0 ; } rtB . ngjujydyri [ 0 ] = rtX .
kjbkj1blat [ 0 ] ; rtB . ngjujydyri [ 1 ] = rtX . kjbkj1blat [ 1 ] ; rtB .
ngjujydyri [ 2 ] = ( ( rtDW . lpu1bjgk0l [ 1 ] - rtX . kjbkj1blat [ 0 ] ) *
1000.0 - 2.0 * rtX . kjbkj1blat [ 1 ] ) * 1000.0 ; rtB . ngjujydyri [ 3 ] =
0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . po5o0wmv2h [ 1 ] = rtP .
base_pz_Value ; } first_output = false ; if ( rtDW . po5o0wmv2h [ 0 ] == 0.0
) { rtDW . po5o0wmv2h [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { rtX . lhbztgbezn [ 0 ] = rtDW . po5o0wmv2h [ 1 ] ; rtX . lhbztgbezn [ 1 ]
= 0.0 ; } rtB . jpor24elfh [ 0 ] = rtX . lhbztgbezn [ 0 ] ; rtB . jpor24elfh
[ 1 ] = rtX . lhbztgbezn [ 1 ] ; rtB . jpor24elfh [ 2 ] = ( ( rtDW .
po5o0wmv2h [ 1 ] - rtX . lhbztgbezn [ 0 ] ) * 1000.0 - 2.0 * rtX . lhbztgbezn
[ 1 ] ) * 1000.0 ; rtB . jpor24elfh [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . ecc1zvpabw [ 1 ] = rtP . base_qx_Value ; } first_output =
false ; if ( rtDW . ecc1zvpabw [ 0 ] == 0.0 ) { rtDW . ecc1zvpabw [ 0 ] = 1.0
; first_output = true ; } if ( first_output ) { rtX . jzhloju4lb [ 0 ] = rtDW
. ecc1zvpabw [ 1 ] ; rtX . jzhloju4lb [ 1 ] = 0.0 ; } rtB . pok1002xiz [ 0 ]
= rtX . jzhloju4lb [ 0 ] ; rtB . pok1002xiz [ 1 ] = rtX . jzhloju4lb [ 1 ] ;
rtB . pok1002xiz [ 2 ] = ( ( rtDW . ecc1zvpabw [ 1 ] - rtX . jzhloju4lb [ 0 ]
) * 1000.0 - 2.0 * rtX . jzhloju4lb [ 1 ] ) * 1000.0 ; rtB . pok1002xiz [ 3 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kl04szp213 [ 1 ] = rtP .
base_qy_Value ; } first_output = false ; if ( rtDW . kl04szp213 [ 0 ] == 0.0
) { rtDW . kl04szp213 [ 0 ] = 1.0 ; first_output = true ; } if ( first_output
) { rtX . b4sikpfbdd [ 0 ] = rtDW . kl04szp213 [ 1 ] ; rtX . b4sikpfbdd [ 1 ]
= 0.0 ; } rtB . jhjlkclg1v [ 0 ] = rtX . b4sikpfbdd [ 0 ] ; rtB . jhjlkclg1v
[ 1 ] = rtX . b4sikpfbdd [ 1 ] ; rtB . jhjlkclg1v [ 2 ] = ( ( rtDW .
kl04szp213 [ 1 ] - rtX . b4sikpfbdd [ 0 ] ) * 1000.0 - 2.0 * rtX . b4sikpfbdd
[ 1 ] ) * 1000.0 ; rtB . jhjlkclg1v [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . hputhe0pvx [ 1 ] = rtP . base_qz_Value ; } first_output =
false ; if ( rtDW . hputhe0pvx [ 0 ] == 0.0 ) { rtDW . hputhe0pvx [ 0 ] = 1.0
; first_output = true ; } if ( first_output ) { rtX . m1wtv5ftb3 [ 0 ] = rtDW
. hputhe0pvx [ 1 ] ; rtX . m1wtv5ftb3 [ 1 ] = 0.0 ; } rtB . hxle1u30ge [ 0 ]
= rtX . m1wtv5ftb3 [ 0 ] ; rtB . hxle1u30ge [ 1 ] = rtX . m1wtv5ftb3 [ 1 ] ;
rtB . hxle1u30ge [ 2 ] = ( ( rtDW . hputhe0pvx [ 1 ] - rtX . m1wtv5ftb3 [ 0 ]
) * 1000.0 - 2.0 * rtX . m1wtv5ftb3 [ 1 ] ) * 1000.0 ; rtB . hxle1u30ge [ 3 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mbkbvkhhzn [ 1 ] = rtP .
angle1_Value ; } first_output = false ; if ( rtDW . mbkbvkhhzn [ 0 ] == 0.0 )
{ rtDW . mbkbvkhhzn [ 0 ] = 1.0 ; first_output = true ; } if ( first_output )
{ rtX . msw11qds3n [ 0 ] = rtDW . mbkbvkhhzn [ 1 ] ; rtX . msw11qds3n [ 1 ] =
0.0 ; } rtB . dje4vrvcgl [ 0 ] = rtX . msw11qds3n [ 0 ] ; rtB . dje4vrvcgl [
1 ] = rtX . msw11qds3n [ 1 ] ; rtB . dje4vrvcgl [ 2 ] = ( ( rtDW . mbkbvkhhzn
[ 1 ] - rtX . msw11qds3n [ 0 ] ) * 1000.0 - 2.0 * rtX . msw11qds3n [ 1 ] ) *
1000.0 ; rtB . dje4vrvcgl [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . aqr5bleq0m [ 1 ] = rtP . angle3_Value ; } first_output = false ; if (
rtDW . aqr5bleq0m [ 0 ] == 0.0 ) { rtDW . aqr5bleq0m [ 0 ] = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . ishpbvo5ra [ 0 ] = rtDW .
aqr5bleq0m [ 1 ] ; rtX . ishpbvo5ra [ 1 ] = 0.0 ; } rtB . ddzm00x0zp [ 0 ] =
rtX . ishpbvo5ra [ 0 ] ; rtB . ddzm00x0zp [ 1 ] = rtX . ishpbvo5ra [ 1 ] ;
rtB . ddzm00x0zp [ 2 ] = ( ( rtDW . aqr5bleq0m [ 1 ] - rtX . ishpbvo5ra [ 0 ]
) * 1000.0 - 2.0 * rtX . ishpbvo5ra [ 1 ] ) * 1000.0 ; rtB . ddzm00x0zp [ 3 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . jptxefa324 [ 1 ] = rtP .
angle4_Value ; } first_output = false ; if ( rtDW . jptxefa324 [ 0 ] == 0.0 )
{ rtDW . jptxefa324 [ 0 ] = 1.0 ; first_output = true ; } if ( first_output )
{ rtX . oejyz2fyei [ 0 ] = rtDW . jptxefa324 [ 1 ] ; rtX . oejyz2fyei [ 1 ] =
0.0 ; } rtB . ikcqrmspqb [ 0 ] = rtX . oejyz2fyei [ 0 ] ; rtB . ikcqrmspqb [
1 ] = rtX . oejyz2fyei [ 1 ] ; rtB . ikcqrmspqb [ 2 ] = ( ( rtDW . jptxefa324
[ 1 ] - rtX . oejyz2fyei [ 0 ] ) * 1000.0 - 2.0 * rtX . oejyz2fyei [ 1 ] ) *
1000.0 ; rtB . ikcqrmspqb [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . lr1ylvkwid [ 1 ] = rtP . angle5_Value ; } first_output = false ; if (
rtDW . lr1ylvkwid [ 0 ] == 0.0 ) { rtDW . lr1ylvkwid [ 0 ] = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . mhrtahciyg [ 0 ] = rtDW .
lr1ylvkwid [ 1 ] ; rtX . mhrtahciyg [ 1 ] = 0.0 ; } rtB . mveuuxcphg [ 0 ] =
rtX . mhrtahciyg [ 0 ] ; rtB . mveuuxcphg [ 1 ] = rtX . mhrtahciyg [ 1 ] ;
rtB . mveuuxcphg [ 2 ] = ( ( rtDW . lr1ylvkwid [ 1 ] - rtX . mhrtahciyg [ 0 ]
) * 1000.0 - 2.0 * rtX . mhrtahciyg [ 1 ] ) * 1000.0 ; rtB . mveuuxcphg [ 3 ]
= 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . aebbapvpyg [ 1 ] = rtP .
angle6_Value ; } first_output = false ; if ( rtDW . aebbapvpyg [ 0 ] == 0.0 )
{ rtDW . aebbapvpyg [ 0 ] = 1.0 ; first_output = true ; } if ( first_output )
{ rtX . klqxymu41a [ 0 ] = rtDW . aebbapvpyg [ 1 ] ; rtX . klqxymu41a [ 1 ] =
0.0 ; } rtB . ivdodijtwh [ 0 ] = rtX . klqxymu41a [ 0 ] ; rtB . ivdodijtwh [
1 ] = rtX . klqxymu41a [ 1 ] ; rtB . ivdodijtwh [ 2 ] = ( ( rtDW . aebbapvpyg
[ 1 ] - rtX . klqxymu41a [ 0 ] ) * 1000.0 - 2.0 * rtX . klqxymu41a [ 1 ] ) *
1000.0 ; rtB . ivdodijtwh [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . hs1gyothi1 [ 1 ] = rtP . angle2_Value ; } first_output = false ; if (
rtDW . hs1gyothi1 [ 0 ] == 0.0 ) { rtDW . hs1gyothi1 [ 0 ] = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . hvv3pjgv1n [ 0 ] = rtDW .
hs1gyothi1 [ 1 ] ; rtX . hvv3pjgv1n [ 1 ] = 0.0 ; } rtB . okjhanhfib [ 0 ] =
rtX . hvv3pjgv1n [ 0 ] ; rtB . okjhanhfib [ 1 ] = rtX . hvv3pjgv1n [ 1 ] ;
rtB . okjhanhfib [ 2 ] = ( ( rtDW . hs1gyothi1 [ 1 ] - rtX . hvv3pjgv1n [ 0 ]
) * 1000.0 - 2.0 * rtX . hvv3pjgv1n [ 1 ] ) * 1000.0 ; rtB . okjhanhfib [ 3 ]
= 0.0 ; simulationData = ( NeslSimulationData * ) rtDW . ngpiznqc3y ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 73 ; simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX .
pbkunh1h0f ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData
-> mData -> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector
. mN = 0 ; simulationData -> mData -> mModeVector . mX = NULL ; first_output
= ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
first_output = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB .
iweamutdyj [ 0 ] ; tmp [ 1 ] = rtB . iweamutdyj [ 1 ] ; tmp [ 2 ] = rtB .
iweamutdyj [ 2 ] ; tmp [ 3 ] = rtB . iweamutdyj [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp
[ 4 ] = rtB . ngjujydyri [ 0 ] ; tmp [ 5 ] = rtB . ngjujydyri [ 1 ] ; tmp [ 6
] = rtB . ngjujydyri [ 2 ] ; tmp [ 7 ] = rtB . ngjujydyri [ 3 ] ; tmp_p [ 2 ]
= 8 ; tmp [ 8 ] = rtB . jpor24elfh [ 0 ] ; tmp [ 9 ] = rtB . jpor24elfh [ 1 ]
; tmp [ 10 ] = rtB . jpor24elfh [ 2 ] ; tmp [ 11 ] = rtB . jpor24elfh [ 3 ] ;
tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . pok1002xiz [ 0 ] ; tmp [ 13 ] = rtB .
pok1002xiz [ 1 ] ; tmp [ 14 ] = rtB . pok1002xiz [ 2 ] ; tmp [ 15 ] = rtB .
pok1002xiz [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB . jhjlkclg1v [ 0 ] ;
tmp [ 17 ] = rtB . jhjlkclg1v [ 1 ] ; tmp [ 18 ] = rtB . jhjlkclg1v [ 2 ] ;
tmp [ 19 ] = rtB . jhjlkclg1v [ 3 ] ; tmp_p [ 5 ] = 20 ; tmp [ 20 ] = rtB .
hxle1u30ge [ 0 ] ; tmp [ 21 ] = rtB . hxle1u30ge [ 1 ] ; tmp [ 22 ] = rtB .
hxle1u30ge [ 2 ] ; tmp [ 23 ] = rtB . hxle1u30ge [ 3 ] ; tmp_p [ 6 ] = 24 ;
tmp [ 24 ] = rtB . dje4vrvcgl [ 0 ] ; tmp [ 25 ] = rtB . dje4vrvcgl [ 1 ] ;
tmp [ 26 ] = rtB . dje4vrvcgl [ 2 ] ; tmp [ 27 ] = rtB . dje4vrvcgl [ 3 ] ;
tmp_p [ 7 ] = 28 ; tmp [ 28 ] = rtB . ddzm00x0zp [ 0 ] ; tmp [ 29 ] = rtB .
ddzm00x0zp [ 1 ] ; tmp [ 30 ] = rtB . ddzm00x0zp [ 2 ] ; tmp [ 31 ] = rtB .
ddzm00x0zp [ 3 ] ; tmp_p [ 8 ] = 32 ; tmp [ 32 ] = rtB . ikcqrmspqb [ 0 ] ;
tmp [ 33 ] = rtB . ikcqrmspqb [ 1 ] ; tmp [ 34 ] = rtB . ikcqrmspqb [ 2 ] ;
tmp [ 35 ] = rtB . ikcqrmspqb [ 3 ] ; tmp_p [ 9 ] = 36 ; tmp [ 36 ] = rtB .
mveuuxcphg [ 0 ] ; tmp [ 37 ] = rtB . mveuuxcphg [ 1 ] ; tmp [ 38 ] = rtB .
mveuuxcphg [ 2 ] ; tmp [ 39 ] = rtB . mveuuxcphg [ 3 ] ; tmp_p [ 10 ] = 40 ;
tmp [ 40 ] = rtB . ivdodijtwh [ 0 ] ; tmp [ 41 ] = rtB . ivdodijtwh [ 1 ] ;
tmp [ 42 ] = rtB . ivdodijtwh [ 2 ] ; tmp [ 43 ] = rtB . ivdodijtwh [ 3 ] ;
tmp_p [ 11 ] = 44 ; tmp [ 44 ] = rtB . okjhanhfib [ 0 ] ; tmp [ 45 ] = rtB .
okjhanhfib [ 1 ] ; tmp [ 46 ] = rtB . okjhanhfib [ 2 ] ; tmp [ 47 ] = rtB .
okjhanhfib [ 3 ] ; tmp_p [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = & tmp
[ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ; simulationData
-> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mOutputs . mN = 73 ; simulationData -> mData -> mOutputs . mX = & rtB .
k1wv31z5no [ 0 ] ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances .
mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulator = (
NeslSimulator * ) rtDW . arbky52sy4 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lrmjpxlgnq ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( tmp_e != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . hjxznhxxlk ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; first_output = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = first_output ; tmp_m [ 0 ] = 0 ; tmp_i [
0 ] = rtB . iweamutdyj [ 0 ] ; tmp_i [ 1 ] = rtB . iweamutdyj [ 1 ] ; tmp_i [
2 ] = rtB . iweamutdyj [ 2 ] ; tmp_i [ 3 ] = rtB . iweamutdyj [ 3 ] ; tmp_m [
1 ] = 4 ; tmp_i [ 4 ] = rtB . ngjujydyri [ 0 ] ; tmp_i [ 5 ] = rtB .
ngjujydyri [ 1 ] ; tmp_i [ 6 ] = rtB . ngjujydyri [ 2 ] ; tmp_i [ 7 ] = rtB .
ngjujydyri [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . jpor24elfh [ 0 ] ;
tmp_i [ 9 ] = rtB . jpor24elfh [ 1 ] ; tmp_i [ 10 ] = rtB . jpor24elfh [ 2 ]
; tmp_i [ 11 ] = rtB . jpor24elfh [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . pok1002xiz [ 0 ] ; tmp_i [ 13 ] = rtB . pok1002xiz [ 1 ] ; tmp_i [ 14 ]
= rtB . pok1002xiz [ 2 ] ; tmp_i [ 15 ] = rtB . pok1002xiz [ 3 ] ; tmp_m [ 4
] = 16 ; tmp_i [ 16 ] = rtB . jhjlkclg1v [ 0 ] ; tmp_i [ 17 ] = rtB .
jhjlkclg1v [ 1 ] ; tmp_i [ 18 ] = rtB . jhjlkclg1v [ 2 ] ; tmp_i [ 19 ] = rtB
. jhjlkclg1v [ 3 ] ; tmp_m [ 5 ] = 20 ; tmp_i [ 20 ] = rtB . hxle1u30ge [ 0 ]
; tmp_i [ 21 ] = rtB . hxle1u30ge [ 1 ] ; tmp_i [ 22 ] = rtB . hxle1u30ge [ 2
] ; tmp_i [ 23 ] = rtB . hxle1u30ge [ 3 ] ; tmp_m [ 6 ] = 24 ; tmp_i [ 24 ] =
rtB . dje4vrvcgl [ 0 ] ; tmp_i [ 25 ] = rtB . dje4vrvcgl [ 1 ] ; tmp_i [ 26 ]
= rtB . dje4vrvcgl [ 2 ] ; tmp_i [ 27 ] = rtB . dje4vrvcgl [ 3 ] ; tmp_m [ 7
] = 28 ; tmp_i [ 28 ] = rtB . ddzm00x0zp [ 0 ] ; tmp_i [ 29 ] = rtB .
ddzm00x0zp [ 1 ] ; tmp_i [ 30 ] = rtB . ddzm00x0zp [ 2 ] ; tmp_i [ 31 ] = rtB
. ddzm00x0zp [ 3 ] ; tmp_m [ 8 ] = 32 ; tmp_i [ 32 ] = rtB . ikcqrmspqb [ 0 ]
; tmp_i [ 33 ] = rtB . ikcqrmspqb [ 1 ] ; tmp_i [ 34 ] = rtB . ikcqrmspqb [ 2
] ; tmp_i [ 35 ] = rtB . ikcqrmspqb [ 3 ] ; tmp_m [ 9 ] = 36 ; tmp_i [ 36 ] =
rtB . mveuuxcphg [ 0 ] ; tmp_i [ 37 ] = rtB . mveuuxcphg [ 1 ] ; tmp_i [ 38 ]
= rtB . mveuuxcphg [ 2 ] ; tmp_i [ 39 ] = rtB . mveuuxcphg [ 3 ] ; tmp_m [ 10
] = 40 ; tmp_i [ 40 ] = rtB . ivdodijtwh [ 0 ] ; tmp_i [ 41 ] = rtB .
ivdodijtwh [ 1 ] ; tmp_i [ 42 ] = rtB . ivdodijtwh [ 2 ] ; tmp_i [ 43 ] = rtB
. ivdodijtwh [ 3 ] ; tmp_m [ 11 ] = 44 ; tmp_i [ 44 ] = rtB . okjhanhfib [ 0
] ; tmp_i [ 45 ] = rtB . okjhanhfib [ 1 ] ; tmp_i [ 46 ] = rtB . okjhanhfib [
2 ] ; tmp_i [ 47 ] = rtB . okjhanhfib [ 3 ] ; tmp_m [ 12 ] = 48 ; memcpy ( &
tmp_i [ 48 ] , & rtB . k1wv31z5no [ 0 ] , 73U * sizeof ( real_T ) ) ; tmp_m [
13 ] = 121 ; simulationData -> mData -> mInputValues . mN = 121 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 14 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN
= 23 ; simulationData -> mData -> mOutputs . mX = & rtB . cj0lrxmll1 [ 0 ] ;
simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData ->
mSampleHits . mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit
= false ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulator = ( NeslSimulator * ) rtDW .
gh2mn52l21 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . ejft2xph51
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( simulator ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } rtB . lkjgainmcq [ 0 ] = rtB .
cj0lrxmll1 [ 0 ] ; rtB . lkjgainmcq [ 1 ] = rtB . cj0lrxmll1 [ 5 ] ; rtB .
lkjgainmcq [ 2 ] = rtB . cj0lrxmll1 [ 1 ] ; rtB . lkjgainmcq [ 3 ] = rtB .
cj0lrxmll1 [ 2 ] ; rtB . lkjgainmcq [ 4 ] = rtB . cj0lrxmll1 [ 3 ] ; rtB .
lkjgainmcq [ 5 ] = rtB . cj0lrxmll1 [ 4 ] ; { double locTime = ssGetTaskTime
( rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . dqb3muistl .
LoggedData , & locTime , & rtB . lkjgainmcq [ 0 ] ) ; } } } } { real_T * *
uBuffer = ( real_T * * ) & rtDW . pkz35q2tqr . TUbufferPtrs [ 0 ] ; real_T *
* tBuffer = ( real_T * * ) & rtDW . pkz35q2tqr . TUbufferPtrs [ 3 ] ; real_T
simTime = ssGetT ( rtS ) ; real_T tMinusDelay ; { int_T i1 ; real_T * y0 = &
rtB . l0djbeo5im [ 0 ] ; const real_T * u0 = & rtB . cj0lrxmll1 [ 13 ] ;
int_T * iw_Tail = & rtDW . hdpggz3z2b . Tail [ 0 ] ; int_T * iw_Head = & rtDW
. hdpggz3z2b . Head [ 0 ] ; int_T * iw_Last = & rtDW . hdpggz3z2b . Last [ 0
] ; int_T * iw_CircularBufSize = & rtDW . hdpggz3z2b . CircularBufSize [ 0 ]
; for ( i1 = 0 ; i1 < 3 ; i1 ++ ) { tMinusDelay = ( ( rtP . sensor_delay >
0.0 ) ? rtP . sensor_delay : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if
( rtP . sensor_delay == 0.0 ) y0 [ i1 ] = u0 [ i1 ] ; else y0 [ i1 ] =
rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , * uBuffer ,
iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1
] , rtP . TransportDelay_InitOutput , 0 , ( boolean_T ) ( ssIsMinorTimeStep (
rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS ) ) ) ) ; tBuffer ++
; uBuffer ++ ; } } } { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . abjcuk1ofe . LoggedData , & locTime , & rtB .
l0djbeo5im [ 0 ] ) ; } } } } { real_T * * uBuffer = ( real_T * * ) & rtDW .
hphyxp0mpj . TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T * * ) & rtDW
. hphyxp0mpj . TUbufferPtrs [ 8 ] ; real_T simTime = ssGetT ( rtS ) ; real_T
tMinusDelay ; { int_T i1 ; real_T * y0 = & rtB . ekm3ljqd3x [ 0 ] ; const
real_T * u0 = & rtB . cj0lrxmll1 [ 6 ] ; int_T * iw_Tail = & rtDW .
ghbz0y5suk . Tail [ 0 ] ; int_T * iw_Head = & rtDW . ghbz0y5suk . Head [ 0 ]
; int_T * iw_Last = & rtDW . ghbz0y5suk . Last [ 0 ] ; int_T *
iw_CircularBufSize = & rtDW . ghbz0y5suk . CircularBufSize [ 0 ] ; for ( i1 =
0 ; i1 < 4 ; i1 ++ ) { tMinusDelay = ( ( rtP . sensor_delay > 0.0 ) ? rtP .
sensor_delay : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if ( rtP .
sensor_delay == 0.0 ) y0 [ i1 ] = u0 [ i1 ] ; else y0 [ i1 ] =
rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , * uBuffer ,
iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1
] , rtP . TransportDelay_InitOutput_bizwdr4jed , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS
) ) ) ) ; tBuffer ++ ; uBuffer ++ ; } y0 = & rtB . ekm3ljqd3x [ 4 ] ; u0 = &
rtB . cj0lrxmll1 [ 16 ] ; iw_Tail = & rtDW . ghbz0y5suk . Tail [ 4 ] ;
iw_Head = & rtDW . ghbz0y5suk . Head [ 4 ] ; iw_Last = & rtDW . ghbz0y5suk .
Last [ 4 ] ; iw_CircularBufSize = & rtDW . ghbz0y5suk . CircularBufSize [ 4 ]
; for ( i1 = 0 ; i1 < 4 ; i1 ++ ) { tMinusDelay = ( ( rtP . sensor_delay >
0.0 ) ? rtP . sensor_delay : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if
( rtP . sensor_delay == 0.0 ) y0 [ i1 ] = u0 [ i1 ] ; else y0 [ i1 ] =
rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , * uBuffer ,
iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1
] , rtP . TransportDelay_InitOutput_bizwdr4jed , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS
) ) ) ) ; tBuffer ++ ; uBuffer ++ ; } } } { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . n0drc2wqml .
LoggedData , & locTime , & rtB . ekm3ljqd3x [ 0 ] ) ; } } } } { real_T * *
uBuffer = ( real_T * * ) & rtDW . jnawroeyau . TUbufferPtrs [ 0 ] ; real_T *
* tBuffer = ( real_T * * ) & rtDW . jnawroeyau . TUbufferPtrs [ 3 ] ; real_T
simTime = ssGetT ( rtS ) ; real_T tMinusDelay ; { int_T i1 ; real_T * y0 = &
rtB . hetoyp0u0k [ 0 ] ; const real_T * u0 = & rtB . cj0lrxmll1 [ 10 ] ;
int_T * iw_Tail = & rtDW . l2csqd4zeb . Tail [ 0 ] ; int_T * iw_Head = & rtDW
. l2csqd4zeb . Head [ 0 ] ; int_T * iw_Last = & rtDW . l2csqd4zeb . Last [ 0
] ; int_T * iw_CircularBufSize = & rtDW . l2csqd4zeb . CircularBufSize [ 0 ]
; for ( i1 = 0 ; i1 < 3 ; i1 ++ ) { tMinusDelay = ( ( rtP . sensor_delay >
0.0 ) ? rtP . sensor_delay : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if
( rtP . sensor_delay == 0.0 ) y0 [ i1 ] = u0 [ i1 ] ; else y0 [ i1 ] =
rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer , * uBuffer ,
iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1
] , rtP . TransportDelay_InitOutput_a2xex0xddn , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS
) ) ) ) ; tBuffer ++ ; uBuffer ++ ; } } } { double locTime = ssGetTaskTime (
rtS , 0 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 0 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . dgitcoss2o .
LoggedData , & locTime , & rtB . hetoyp0u0k [ 0 ] ) ; } } } } { real_T * *
uBuffer = ( real_T * * ) & rtDW . am1ghvvstj . TUbufferPtrs [ 0 ] ; real_T *
* tBuffer = ( real_T * * ) & rtDW . am1ghvvstj . TUbufferPtrs [ 3 ] ; real_T
simTime = ssGetT ( rtS ) ; real_T tMinusDelay ; tMinusDelay = ( ( rtP .
sensor_delay > 0.0 ) ? rtP . sensor_delay : 0.0 ) ; tMinusDelay = simTime -
tMinusDelay ; if ( rtP . sensor_delay == 0.0 ) rtB . kmqjjdc1mq [ 0 ] = rtB .
cj0lrxmll1 [ 20 ] ; else rtB . kmqjjdc1mq [ 0 ] = rt_TDelayInterpolate (
tMinusDelay , 0.0 , * tBuffer , * uBuffer , rtDW . bwjwwwhboe .
CircularBufSize [ 0 ] , & rtDW . bwjwwwhboe . Last [ 0 ] , rtDW . bwjwwwhboe
. Tail [ 0 ] , rtDW . bwjwwwhboe . Head [ 0 ] , rtP .
TransportDelay_InitOutput_nhc31y12nz , 0 , ( boolean_T ) ( ssIsMinorTimeStep
( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS ) ) ) ) ; tBuffer
++ ; uBuffer ++ ; tMinusDelay = ( ( rtP . sensor_delay > 0.0 ) ? rtP .
sensor_delay : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if ( rtP .
sensor_delay == 0.0 ) rtB . kmqjjdc1mq [ 1 ] = rtB . cj0lrxmll1 [ 22 ] ; else
rtB . kmqjjdc1mq [ 1 ] = rt_TDelayInterpolate ( tMinusDelay , 0.0 , * tBuffer
, * uBuffer , rtDW . bwjwwwhboe . CircularBufSize [ 1 ] , & rtDW . bwjwwwhboe
. Last [ 1 ] , rtDW . bwjwwwhboe . Tail [ 1 ] , rtDW . bwjwwwhboe . Head [ 1
] , rtP . TransportDelay_InitOutput_nhc31y12nz , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS
) ) ) ) ; tBuffer ++ ; uBuffer ++ ; tMinusDelay = ( ( rtP . sensor_delay >
0.0 ) ? rtP . sensor_delay : 0.0 ) ; tMinusDelay = simTime - tMinusDelay ; if
( rtP . sensor_delay == 0.0 ) rtB . kmqjjdc1mq [ 2 ] = rtB . cj0lrxmll1 [ 21
] ; else rtB . kmqjjdc1mq [ 2 ] = rt_TDelayInterpolate ( tMinusDelay , 0.0 ,
* tBuffer , * uBuffer , rtDW . bwjwwwhboe . CircularBufSize [ 2 ] , & rtDW .
bwjwwwhboe . Last [ 2 ] , rtDW . bwjwwwhboe . Tail [ 2 ] , rtDW . bwjwwwhboe
. Head [ 2 ] , rtP . TransportDelay_InitOutput_nhc31y12nz , 0 , ( boolean_T )
( ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT (
rtS ) ) ) ) ; } { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . pebg5vbojg . LoggedData , & locTime , & rtB .
kmqjjdc1mq [ 0 ] ) ; } } } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { { real_T * * uBuffer = ( real_T * * ) & rtDW . pkz35q2tqr .
TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T * * ) & rtDW . pkz35q2tqr
. TUbufferPtrs [ 3 ] ; real_T simTime = ssGetT ( rtS ) ; rtDW . hdpggz3z2b .
Head [ 0 ] = ( ( rtDW . hdpggz3z2b . Head [ 0 ] < ( rtDW . hdpggz3z2b .
CircularBufSize [ 0 ] - 1 ) ) ? ( rtDW . hdpggz3z2b . Head [ 0 ] + 1 ) : 0 )
; if ( rtDW . hdpggz3z2b . Head [ 0 ] == rtDW . hdpggz3z2b . Tail [ 0 ] ) {
if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . hdpggz3z2b . CircularBufSize [
0 ] , & rtDW . hdpggz3z2b . Tail [ 0 ] , & rtDW . hdpggz3z2b . Head [ 0 ] , &
rtDW . hdpggz3z2b . Last [ 0 ] , simTime - rtP . sensor_delay , tBuffer ,
uBuffer , ( NULL ) , ( boolean_T ) 0 , false , & rtDW . hdpggz3z2b .
MaxNewBufSize ) ) { ssSetErrorStatus ( rtS , "tdelay memory allocation error"
) ; return ; } } ( * tBuffer ++ ) [ rtDW . hdpggz3z2b . Head [ 0 ] ] =
simTime ; ( * uBuffer ++ ) [ rtDW . hdpggz3z2b . Head [ 0 ] ] = rtB .
cj0lrxmll1 [ 13 ] ; rtDW . hdpggz3z2b . Head [ 1 ] = ( ( rtDW . hdpggz3z2b .
Head [ 1 ] < ( rtDW . hdpggz3z2b . CircularBufSize [ 1 ] - 1 ) ) ? ( rtDW .
hdpggz3z2b . Head [ 1 ] + 1 ) : 0 ) ; if ( rtDW . hdpggz3z2b . Head [ 1 ] ==
rtDW . hdpggz3z2b . Tail [ 1 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( &
rtDW . hdpggz3z2b . CircularBufSize [ 1 ] , & rtDW . hdpggz3z2b . Tail [ 1 ]
, & rtDW . hdpggz3z2b . Head [ 1 ] , & rtDW . hdpggz3z2b . Last [ 1 ] ,
simTime - rtP . sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0
, false , & rtDW . hdpggz3z2b . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ rtDW .
hdpggz3z2b . Head [ 1 ] ] = simTime ; ( * uBuffer ++ ) [ rtDW . hdpggz3z2b .
Head [ 1 ] ] = rtB . cj0lrxmll1 [ 14 ] ; rtDW . hdpggz3z2b . Head [ 2 ] = ( (
rtDW . hdpggz3z2b . Head [ 2 ] < ( rtDW . hdpggz3z2b . CircularBufSize [ 2 ]
- 1 ) ) ? ( rtDW . hdpggz3z2b . Head [ 2 ] + 1 ) : 0 ) ; if ( rtDW .
hdpggz3z2b . Head [ 2 ] == rtDW . hdpggz3z2b . Tail [ 2 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . hdpggz3z2b . CircularBufSize [ 2 ] ,
& rtDW . hdpggz3z2b . Tail [ 2 ] , & rtDW . hdpggz3z2b . Head [ 2 ] , & rtDW
. hdpggz3z2b . Last [ 2 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . hdpggz3z2b . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ) [ rtDW . hdpggz3z2b . Head [ 2 ] ] = simTime ; ( * uBuffer )
[ rtDW . hdpggz3z2b . Head [ 2 ] ] = rtB . cj0lrxmll1 [ 15 ] ; } { real_T * *
uBuffer = ( real_T * * ) & rtDW . hphyxp0mpj . TUbufferPtrs [ 0 ] ; real_T *
* tBuffer = ( real_T * * ) & rtDW . hphyxp0mpj . TUbufferPtrs [ 8 ] ; real_T
simTime = ssGetT ( rtS ) ; rtDW . ghbz0y5suk . Head [ 0 ] = ( ( rtDW .
ghbz0y5suk . Head [ 0 ] < ( rtDW . ghbz0y5suk . CircularBufSize [ 0 ] - 1 ) )
? ( rtDW . ghbz0y5suk . Head [ 0 ] + 1 ) : 0 ) ; if ( rtDW . ghbz0y5suk .
Head [ 0 ] == rtDW . ghbz0y5suk . Tail [ 0 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk . CircularBufSize [ 0 ] ,
& rtDW . ghbz0y5suk . Tail [ 0 ] , & rtDW . ghbz0y5suk . Head [ 0 ] , & rtDW
. ghbz0y5suk . Last [ 0 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . ghbz0y5suk . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ++ ) [ rtDW . ghbz0y5suk . Head [ 0 ] ] = simTime ; ( * uBuffer
++ ) [ rtDW . ghbz0y5suk . Head [ 0 ] ] = rtB . cj0lrxmll1 [ 6 ] ; rtDW .
ghbz0y5suk . Head [ 1 ] = ( ( rtDW . ghbz0y5suk . Head [ 1 ] < ( rtDW .
ghbz0y5suk . CircularBufSize [ 1 ] - 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 1 ]
+ 1 ) : 0 ) ; if ( rtDW . ghbz0y5suk . Head [ 1 ] == rtDW . ghbz0y5suk . Tail
[ 1 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk .
CircularBufSize [ 1 ] , & rtDW . ghbz0y5suk . Tail [ 1 ] , & rtDW .
ghbz0y5suk . Head [ 1 ] , & rtDW . ghbz0y5suk . Last [ 1 ] , simTime - rtP .
sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , &
rtDW . ghbz0y5suk . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ rtDW .
ghbz0y5suk . Head [ 1 ] ] = simTime ; ( * uBuffer ++ ) [ rtDW . ghbz0y5suk .
Head [ 1 ] ] = rtB . cj0lrxmll1 [ 7 ] ; rtDW . ghbz0y5suk . Head [ 2 ] = ( (
rtDW . ghbz0y5suk . Head [ 2 ] < ( rtDW . ghbz0y5suk . CircularBufSize [ 2 ]
- 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 2 ] + 1 ) : 0 ) ; if ( rtDW .
ghbz0y5suk . Head [ 2 ] == rtDW . ghbz0y5suk . Tail [ 2 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk . CircularBufSize [ 2 ] ,
& rtDW . ghbz0y5suk . Tail [ 2 ] , & rtDW . ghbz0y5suk . Head [ 2 ] , & rtDW
. ghbz0y5suk . Last [ 2 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . ghbz0y5suk . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ++ ) [ rtDW . ghbz0y5suk . Head [ 2 ] ] = simTime ; ( * uBuffer
++ ) [ rtDW . ghbz0y5suk . Head [ 2 ] ] = rtB . cj0lrxmll1 [ 8 ] ; rtDW .
ghbz0y5suk . Head [ 3 ] = ( ( rtDW . ghbz0y5suk . Head [ 3 ] < ( rtDW .
ghbz0y5suk . CircularBufSize [ 3 ] - 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 3 ]
+ 1 ) : 0 ) ; if ( rtDW . ghbz0y5suk . Head [ 3 ] == rtDW . ghbz0y5suk . Tail
[ 3 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk .
CircularBufSize [ 3 ] , & rtDW . ghbz0y5suk . Tail [ 3 ] , & rtDW .
ghbz0y5suk . Head [ 3 ] , & rtDW . ghbz0y5suk . Last [ 3 ] , simTime - rtP .
sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , &
rtDW . ghbz0y5suk . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ rtDW .
ghbz0y5suk . Head [ 3 ] ] = simTime ; ( * uBuffer ++ ) [ rtDW . ghbz0y5suk .
Head [ 3 ] ] = rtB . cj0lrxmll1 [ 9 ] ; rtDW . ghbz0y5suk . Head [ 4 ] = ( (
rtDW . ghbz0y5suk . Head [ 4 ] < ( rtDW . ghbz0y5suk . CircularBufSize [ 4 ]
- 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 4 ] + 1 ) : 0 ) ; if ( rtDW .
ghbz0y5suk . Head [ 4 ] == rtDW . ghbz0y5suk . Tail [ 4 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk . CircularBufSize [ 4 ] ,
& rtDW . ghbz0y5suk . Tail [ 4 ] , & rtDW . ghbz0y5suk . Head [ 4 ] , & rtDW
. ghbz0y5suk . Last [ 4 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . ghbz0y5suk . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ++ ) [ rtDW . ghbz0y5suk . Head [ 4 ] ] = simTime ; ( * uBuffer
++ ) [ rtDW . ghbz0y5suk . Head [ 4 ] ] = rtB . cj0lrxmll1 [ 16 ] ; rtDW .
ghbz0y5suk . Head [ 5 ] = ( ( rtDW . ghbz0y5suk . Head [ 5 ] < ( rtDW .
ghbz0y5suk . CircularBufSize [ 5 ] - 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 5 ]
+ 1 ) : 0 ) ; if ( rtDW . ghbz0y5suk . Head [ 5 ] == rtDW . ghbz0y5suk . Tail
[ 5 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk .
CircularBufSize [ 5 ] , & rtDW . ghbz0y5suk . Tail [ 5 ] , & rtDW .
ghbz0y5suk . Head [ 5 ] , & rtDW . ghbz0y5suk . Last [ 5 ] , simTime - rtP .
sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , &
rtDW . ghbz0y5suk . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ rtDW .
ghbz0y5suk . Head [ 5 ] ] = simTime ; ( * uBuffer ++ ) [ rtDW . ghbz0y5suk .
Head [ 5 ] ] = rtB . cj0lrxmll1 [ 17 ] ; rtDW . ghbz0y5suk . Head [ 6 ] = ( (
rtDW . ghbz0y5suk . Head [ 6 ] < ( rtDW . ghbz0y5suk . CircularBufSize [ 6 ]
- 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 6 ] + 1 ) : 0 ) ; if ( rtDW .
ghbz0y5suk . Head [ 6 ] == rtDW . ghbz0y5suk . Tail [ 6 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk . CircularBufSize [ 6 ] ,
& rtDW . ghbz0y5suk . Tail [ 6 ] , & rtDW . ghbz0y5suk . Head [ 6 ] , & rtDW
. ghbz0y5suk . Last [ 6 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . ghbz0y5suk . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ++ ) [ rtDW . ghbz0y5suk . Head [ 6 ] ] = simTime ; ( * uBuffer
++ ) [ rtDW . ghbz0y5suk . Head [ 6 ] ] = rtB . cj0lrxmll1 [ 18 ] ; rtDW .
ghbz0y5suk . Head [ 7 ] = ( ( rtDW . ghbz0y5suk . Head [ 7 ] < ( rtDW .
ghbz0y5suk . CircularBufSize [ 7 ] - 1 ) ) ? ( rtDW . ghbz0y5suk . Head [ 7 ]
+ 1 ) : 0 ) ; if ( rtDW . ghbz0y5suk . Head [ 7 ] == rtDW . ghbz0y5suk . Tail
[ 7 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . ghbz0y5suk .
CircularBufSize [ 7 ] , & rtDW . ghbz0y5suk . Tail [ 7 ] , & rtDW .
ghbz0y5suk . Head [ 7 ] , & rtDW . ghbz0y5suk . Last [ 7 ] , simTime - rtP .
sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , &
rtDW . ghbz0y5suk . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ rtDW .
ghbz0y5suk . Head [ 7 ] ] = simTime ; ( * uBuffer ) [ rtDW . ghbz0y5suk .
Head [ 7 ] ] = rtB . cj0lrxmll1 [ 19 ] ; } { real_T * * uBuffer = ( real_T *
* ) & rtDW . jnawroeyau . TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T
* * ) & rtDW . jnawroeyau . TUbufferPtrs [ 3 ] ; real_T simTime = ssGetT (
rtS ) ; rtDW . l2csqd4zeb . Head [ 0 ] = ( ( rtDW . l2csqd4zeb . Head [ 0 ] <
( rtDW . l2csqd4zeb . CircularBufSize [ 0 ] - 1 ) ) ? ( rtDW . l2csqd4zeb .
Head [ 0 ] + 1 ) : 0 ) ; if ( rtDW . l2csqd4zeb . Head [ 0 ] == rtDW .
l2csqd4zeb . Tail [ 0 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW .
l2csqd4zeb . CircularBufSize [ 0 ] , & rtDW . l2csqd4zeb . Tail [ 0 ] , &
rtDW . l2csqd4zeb . Head [ 0 ] , & rtDW . l2csqd4zeb . Last [ 0 ] , simTime -
rtP . sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false ,
& rtDW . l2csqd4zeb . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ rtDW .
l2csqd4zeb . Head [ 0 ] ] = simTime ; ( * uBuffer ++ ) [ rtDW . l2csqd4zeb .
Head [ 0 ] ] = rtB . cj0lrxmll1 [ 10 ] ; rtDW . l2csqd4zeb . Head [ 1 ] = ( (
rtDW . l2csqd4zeb . Head [ 1 ] < ( rtDW . l2csqd4zeb . CircularBufSize [ 1 ]
- 1 ) ) ? ( rtDW . l2csqd4zeb . Head [ 1 ] + 1 ) : 0 ) ; if ( rtDW .
l2csqd4zeb . Head [ 1 ] == rtDW . l2csqd4zeb . Tail [ 1 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . l2csqd4zeb . CircularBufSize [ 1 ] ,
& rtDW . l2csqd4zeb . Tail [ 1 ] , & rtDW . l2csqd4zeb . Head [ 1 ] , & rtDW
. l2csqd4zeb . Last [ 1 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . l2csqd4zeb . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ++ ) [ rtDW . l2csqd4zeb . Head [ 1 ] ] = simTime ; ( * uBuffer
++ ) [ rtDW . l2csqd4zeb . Head [ 1 ] ] = rtB . cj0lrxmll1 [ 11 ] ; rtDW .
l2csqd4zeb . Head [ 2 ] = ( ( rtDW . l2csqd4zeb . Head [ 2 ] < ( rtDW .
l2csqd4zeb . CircularBufSize [ 2 ] - 1 ) ) ? ( rtDW . l2csqd4zeb . Head [ 2 ]
+ 1 ) : 0 ) ; if ( rtDW . l2csqd4zeb . Head [ 2 ] == rtDW . l2csqd4zeb . Tail
[ 2 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . l2csqd4zeb .
CircularBufSize [ 2 ] , & rtDW . l2csqd4zeb . Tail [ 2 ] , & rtDW .
l2csqd4zeb . Head [ 2 ] , & rtDW . l2csqd4zeb . Last [ 2 ] , simTime - rtP .
sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , &
rtDW . l2csqd4zeb . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ rtDW .
l2csqd4zeb . Head [ 2 ] ] = simTime ; ( * uBuffer ) [ rtDW . l2csqd4zeb .
Head [ 2 ] ] = rtB . cj0lrxmll1 [ 12 ] ; } { real_T * * uBuffer = ( real_T *
* ) & rtDW . am1ghvvstj . TUbufferPtrs [ 0 ] ; real_T * * tBuffer = ( real_T
* * ) & rtDW . am1ghvvstj . TUbufferPtrs [ 3 ] ; real_T simTime = ssGetT (
rtS ) ; rtDW . bwjwwwhboe . Head [ 0 ] = ( ( rtDW . bwjwwwhboe . Head [ 0 ] <
( rtDW . bwjwwwhboe . CircularBufSize [ 0 ] - 1 ) ) ? ( rtDW . bwjwwwhboe .
Head [ 0 ] + 1 ) : 0 ) ; if ( rtDW . bwjwwwhboe . Head [ 0 ] == rtDW .
bwjwwwhboe . Tail [ 0 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW .
bwjwwwhboe . CircularBufSize [ 0 ] , & rtDW . bwjwwwhboe . Tail [ 0 ] , &
rtDW . bwjwwwhboe . Head [ 0 ] , & rtDW . bwjwwwhboe . Last [ 0 ] , simTime -
rtP . sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false ,
& rtDW . bwjwwwhboe . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ++ ) [ rtDW .
bwjwwwhboe . Head [ 0 ] ] = simTime ; ( * uBuffer ++ ) [ rtDW . bwjwwwhboe .
Head [ 0 ] ] = rtB . cj0lrxmll1 [ 20 ] ; rtDW . bwjwwwhboe . Head [ 1 ] = ( (
rtDW . bwjwwwhboe . Head [ 1 ] < ( rtDW . bwjwwwhboe . CircularBufSize [ 1 ]
- 1 ) ) ? ( rtDW . bwjwwwhboe . Head [ 1 ] + 1 ) : 0 ) ; if ( rtDW .
bwjwwwhboe . Head [ 1 ] == rtDW . bwjwwwhboe . Tail [ 1 ] ) { if ( !
rt_TDelayUpdateTailOrGrowBuf ( & rtDW . bwjwwwhboe . CircularBufSize [ 1 ] ,
& rtDW . bwjwwwhboe . Tail [ 1 ] , & rtDW . bwjwwwhboe . Head [ 1 ] , & rtDW
. bwjwwwhboe . Last [ 1 ] , simTime - rtP . sensor_delay , tBuffer , uBuffer
, ( NULL ) , ( boolean_T ) 0 , false , & rtDW . bwjwwwhboe . MaxNewBufSize )
) { ssSetErrorStatus ( rtS , "tdelay memory allocation error" ) ; return ; }
} ( * tBuffer ++ ) [ rtDW . bwjwwwhboe . Head [ 1 ] ] = simTime ; ( * uBuffer
++ ) [ rtDW . bwjwwwhboe . Head [ 1 ] ] = rtB . cj0lrxmll1 [ 22 ] ; rtDW .
bwjwwwhboe . Head [ 2 ] = ( ( rtDW . bwjwwwhboe . Head [ 2 ] < ( rtDW .
bwjwwwhboe . CircularBufSize [ 2 ] - 1 ) ) ? ( rtDW . bwjwwwhboe . Head [ 2 ]
+ 1 ) : 0 ) ; if ( rtDW . bwjwwwhboe . Head [ 2 ] == rtDW . bwjwwwhboe . Tail
[ 2 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( & rtDW . bwjwwwhboe .
CircularBufSize [ 2 ] , & rtDW . bwjwwwhboe . Tail [ 2 ] , & rtDW .
bwjwwwhboe . Head [ 2 ] , & rtDW . bwjwwwhboe . Last [ 2 ] , simTime - rtP .
sensor_delay , tBuffer , uBuffer , ( NULL ) , ( boolean_T ) 0 , false , &
rtDW . bwjwwwhboe . MaxNewBufSize ) ) { ssSetErrorStatus ( rtS ,
"tdelay memory allocation error" ) ; return ; } } ( * tBuffer ) [ rtDW .
bwjwwwhboe . Head [ 2 ] ] = simTime ; ( * uBuffer ) [ rtDW . bwjwwwhboe .
Head [ 2 ] ] = rtB . cj0lrxmll1 [ 21 ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { NeslSimulationData * simulationData ; real_T time ;
boolean_T tmp ; real_T tmp_p [ 48 ] ; int_T tmp_e [ 13 ] ; NeslSimulator *
simulator ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_i ; char * msg ; XDot * _rtXdot ; _rtXdot = ( (
XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> kch5zgooyu [ 0 ] = rtX . kch5zgooyu [
1 ] ; _rtXdot -> kch5zgooyu [ 1 ] = ( ( rtDW . hvhjhjk4dv [ 1 ] - rtX .
kch5zgooyu [ 0 ] ) * 1000.0 - 2.0 * rtX . kch5zgooyu [ 1 ] ) * 1000.0 ;
_rtXdot -> kjbkj1blat [ 0 ] = rtX . kjbkj1blat [ 1 ] ; _rtXdot -> kjbkj1blat
[ 1 ] = ( ( rtDW . lpu1bjgk0l [ 1 ] - rtX . kjbkj1blat [ 0 ] ) * 1000.0 - 2.0
* rtX . kjbkj1blat [ 1 ] ) * 1000.0 ; _rtXdot -> lhbztgbezn [ 0 ] = rtX .
lhbztgbezn [ 1 ] ; _rtXdot -> lhbztgbezn [ 1 ] = ( ( rtDW . po5o0wmv2h [ 1 ]
- rtX . lhbztgbezn [ 0 ] ) * 1000.0 - 2.0 * rtX . lhbztgbezn [ 1 ] ) * 1000.0
; _rtXdot -> jzhloju4lb [ 0 ] = rtX . jzhloju4lb [ 1 ] ; _rtXdot ->
jzhloju4lb [ 1 ] = ( ( rtDW . ecc1zvpabw [ 1 ] - rtX . jzhloju4lb [ 0 ] ) *
1000.0 - 2.0 * rtX . jzhloju4lb [ 1 ] ) * 1000.0 ; _rtXdot -> b4sikpfbdd [ 0
] = rtX . b4sikpfbdd [ 1 ] ; _rtXdot -> b4sikpfbdd [ 1 ] = ( ( rtDW .
kl04szp213 [ 1 ] - rtX . b4sikpfbdd [ 0 ] ) * 1000.0 - 2.0 * rtX . b4sikpfbdd
[ 1 ] ) * 1000.0 ; _rtXdot -> m1wtv5ftb3 [ 0 ] = rtX . m1wtv5ftb3 [ 1 ] ;
_rtXdot -> m1wtv5ftb3 [ 1 ] = ( ( rtDW . hputhe0pvx [ 1 ] - rtX . m1wtv5ftb3
[ 0 ] ) * 1000.0 - 2.0 * rtX . m1wtv5ftb3 [ 1 ] ) * 1000.0 ; _rtXdot ->
msw11qds3n [ 0 ] = rtX . msw11qds3n [ 1 ] ; _rtXdot -> msw11qds3n [ 1 ] = ( (
rtDW . mbkbvkhhzn [ 1 ] - rtX . msw11qds3n [ 0 ] ) * 1000.0 - 2.0 * rtX .
msw11qds3n [ 1 ] ) * 1000.0 ; _rtXdot -> ishpbvo5ra [ 0 ] = rtX . ishpbvo5ra
[ 1 ] ; _rtXdot -> ishpbvo5ra [ 1 ] = ( ( rtDW . aqr5bleq0m [ 1 ] - rtX .
ishpbvo5ra [ 0 ] ) * 1000.0 - 2.0 * rtX . ishpbvo5ra [ 1 ] ) * 1000.0 ;
_rtXdot -> oejyz2fyei [ 0 ] = rtX . oejyz2fyei [ 1 ] ; _rtXdot -> oejyz2fyei
[ 1 ] = ( ( rtDW . jptxefa324 [ 1 ] - rtX . oejyz2fyei [ 0 ] ) * 1000.0 - 2.0
* rtX . oejyz2fyei [ 1 ] ) * 1000.0 ; _rtXdot -> mhrtahciyg [ 0 ] = rtX .
mhrtahciyg [ 1 ] ; _rtXdot -> mhrtahciyg [ 1 ] = ( ( rtDW . lr1ylvkwid [ 1 ]
- rtX . mhrtahciyg [ 0 ] ) * 1000.0 - 2.0 * rtX . mhrtahciyg [ 1 ] ) * 1000.0
; _rtXdot -> klqxymu41a [ 0 ] = rtX . klqxymu41a [ 1 ] ; _rtXdot ->
klqxymu41a [ 1 ] = ( ( rtDW . aebbapvpyg [ 1 ] - rtX . klqxymu41a [ 0 ] ) *
1000.0 - 2.0 * rtX . klqxymu41a [ 1 ] ) * 1000.0 ; _rtXdot -> hvv3pjgv1n [ 0
] = rtX . hvv3pjgv1n [ 1 ] ; _rtXdot -> hvv3pjgv1n [ 1 ] = ( ( rtDW .
hs1gyothi1 [ 1 ] - rtX . hvv3pjgv1n [ 0 ] ) * 1000.0 - 2.0 * rtX . hvv3pjgv1n
[ 1 ] ) * 1000.0 ; simulationData = ( NeslSimulationData * ) rtDW .
ngpiznqc3y ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 73 ; simulationData -> mData -> mContStates . mX = (
real_T * ) & rtX . pbkunh1h0f ; simulationData -> mData -> mDiscStates . mN =
0 ; simulationData -> mData -> mDiscStates . mX = NULL ; simulationData ->
mData -> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX =
NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
iweamutdyj [ 0 ] ; tmp_p [ 1 ] = rtB . iweamutdyj [ 1 ] ; tmp_p [ 2 ] = rtB .
iweamutdyj [ 2 ] ; tmp_p [ 3 ] = rtB . iweamutdyj [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ngjujydyri [ 0 ] ; tmp_p [ 5 ] = rtB . ngjujydyri [ 1 ] ;
tmp_p [ 6 ] = rtB . ngjujydyri [ 2 ] ; tmp_p [ 7 ] = rtB . ngjujydyri [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . jpor24elfh [ 0 ] ; tmp_p [ 9 ] = rtB .
jpor24elfh [ 1 ] ; tmp_p [ 10 ] = rtB . jpor24elfh [ 2 ] ; tmp_p [ 11 ] = rtB
. jpor24elfh [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . pok1002xiz [ 0 ]
; tmp_p [ 13 ] = rtB . pok1002xiz [ 1 ] ; tmp_p [ 14 ] = rtB . pok1002xiz [ 2
] ; tmp_p [ 15 ] = rtB . pok1002xiz [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . jhjlkclg1v [ 0 ] ; tmp_p [ 17 ] = rtB . jhjlkclg1v [ 1 ] ; tmp_p [ 18 ]
= rtB . jhjlkclg1v [ 2 ] ; tmp_p [ 19 ] = rtB . jhjlkclg1v [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . hxle1u30ge [ 0 ] ; tmp_p [ 21 ] = rtB .
hxle1u30ge [ 1 ] ; tmp_p [ 22 ] = rtB . hxle1u30ge [ 2 ] ; tmp_p [ 23 ] = rtB
. hxle1u30ge [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . dje4vrvcgl [ 0 ]
; tmp_p [ 25 ] = rtB . dje4vrvcgl [ 1 ] ; tmp_p [ 26 ] = rtB . dje4vrvcgl [ 2
] ; tmp_p [ 27 ] = rtB . dje4vrvcgl [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . ddzm00x0zp [ 0 ] ; tmp_p [ 29 ] = rtB . ddzm00x0zp [ 1 ] ; tmp_p [ 30 ]
= rtB . ddzm00x0zp [ 2 ] ; tmp_p [ 31 ] = rtB . ddzm00x0zp [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . ikcqrmspqb [ 0 ] ; tmp_p [ 33 ] = rtB .
ikcqrmspqb [ 1 ] ; tmp_p [ 34 ] = rtB . ikcqrmspqb [ 2 ] ; tmp_p [ 35 ] = rtB
. ikcqrmspqb [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB . mveuuxcphg [ 0 ]
; tmp_p [ 37 ] = rtB . mveuuxcphg [ 1 ] ; tmp_p [ 38 ] = rtB . mveuuxcphg [ 2
] ; tmp_p [ 39 ] = rtB . mveuuxcphg [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ]
= rtB . ivdodijtwh [ 0 ] ; tmp_p [ 41 ] = rtB . ivdodijtwh [ 1 ] ; tmp_p [ 42
] = rtB . ivdodijtwh [ 2 ] ; tmp_p [ 43 ] = rtB . ivdodijtwh [ 3 ] ; tmp_e [
11 ] = 44 ; tmp_p [ 44 ] = rtB . okjhanhfib [ 0 ] ; tmp_p [ 45 ] = rtB .
okjhanhfib [ 1 ] ; tmp_p [ 46 ] = rtB . okjhanhfib [ 2 ] ; tmp_p [ 47 ] = rtB
. okjhanhfib [ 3 ] ; tmp_e [ 12 ] = 48 ; simulationData -> mData ->
mInputValues . mN = 48 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 73 ; simulationData -> mData -> mDx .
mX = ( real_T * ) & _rtXdot -> pbkunh1h0f ; simulator = ( NeslSimulator * )
rtDW . arbky52sy4 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
lrmjpxlgnq ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 48 ] ; int_T tmp_e [ 13 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ;
simulationData = ( NeslSimulationData * ) rtDW . ngpiznqc3y ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 73 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . pbkunh1h0f
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [
0 ] = 0 ; tmp_p [ 0 ] = rtB . iweamutdyj [ 0 ] ; tmp_p [ 1 ] = rtB .
iweamutdyj [ 1 ] ; tmp_p [ 2 ] = rtB . iweamutdyj [ 2 ] ; tmp_p [ 3 ] = rtB .
iweamutdyj [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ngjujydyri [ 0 ] ;
tmp_p [ 5 ] = rtB . ngjujydyri [ 1 ] ; tmp_p [ 6 ] = rtB . ngjujydyri [ 2 ] ;
tmp_p [ 7 ] = rtB . ngjujydyri [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
jpor24elfh [ 0 ] ; tmp_p [ 9 ] = rtB . jpor24elfh [ 1 ] ; tmp_p [ 10 ] = rtB
. jpor24elfh [ 2 ] ; tmp_p [ 11 ] = rtB . jpor24elfh [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . pok1002xiz [ 0 ] ; tmp_p [ 13 ] = rtB . pok1002xiz [ 1
] ; tmp_p [ 14 ] = rtB . pok1002xiz [ 2 ] ; tmp_p [ 15 ] = rtB . pok1002xiz [
3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . jhjlkclg1v [ 0 ] ; tmp_p [ 17 ]
= rtB . jhjlkclg1v [ 1 ] ; tmp_p [ 18 ] = rtB . jhjlkclg1v [ 2 ] ; tmp_p [ 19
] = rtB . jhjlkclg1v [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB .
hxle1u30ge [ 0 ] ; tmp_p [ 21 ] = rtB . hxle1u30ge [ 1 ] ; tmp_p [ 22 ] = rtB
. hxle1u30ge [ 2 ] ; tmp_p [ 23 ] = rtB . hxle1u30ge [ 3 ] ; tmp_e [ 6 ] = 24
; tmp_p [ 24 ] = rtB . dje4vrvcgl [ 0 ] ; tmp_p [ 25 ] = rtB . dje4vrvcgl [ 1
] ; tmp_p [ 26 ] = rtB . dje4vrvcgl [ 2 ] ; tmp_p [ 27 ] = rtB . dje4vrvcgl [
3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = rtB . ddzm00x0zp [ 0 ] ; tmp_p [ 29 ]
= rtB . ddzm00x0zp [ 1 ] ; tmp_p [ 30 ] = rtB . ddzm00x0zp [ 2 ] ; tmp_p [ 31
] = rtB . ddzm00x0zp [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB .
ikcqrmspqb [ 0 ] ; tmp_p [ 33 ] = rtB . ikcqrmspqb [ 1 ] ; tmp_p [ 34 ] = rtB
. ikcqrmspqb [ 2 ] ; tmp_p [ 35 ] = rtB . ikcqrmspqb [ 3 ] ; tmp_e [ 9 ] = 36
; tmp_p [ 36 ] = rtB . mveuuxcphg [ 0 ] ; tmp_p [ 37 ] = rtB . mveuuxcphg [ 1
] ; tmp_p [ 38 ] = rtB . mveuuxcphg [ 2 ] ; tmp_p [ 39 ] = rtB . mveuuxcphg [
3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] = rtB . ivdodijtwh [ 0 ] ; tmp_p [ 41
] = rtB . ivdodijtwh [ 1 ] ; tmp_p [ 42 ] = rtB . ivdodijtwh [ 2 ] ; tmp_p [
43 ] = rtB . ivdodijtwh [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB .
okjhanhfib [ 0 ] ; tmp_p [ 45 ] = rtB . okjhanhfib [ 1 ] ; tmp_p [ 46 ] = rtB
. okjhanhfib [ 2 ] ; tmp_p [ 47 ] = rtB . okjhanhfib [ 3 ] ; tmp_e [ 12 ] =
48 ; simulationData -> mData -> mInputValues . mN = 48 ; simulationData ->
mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . arbky52sy4 ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lrmjpxlgnq ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . lrmjpxlgnq ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . ngpiznqc3y ) ; nesl_erase_simulator (
"PlatformAssem/Solver Configuration_1" ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . ejft2xph51 ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . hjxznhxxlk ) ; nesl_erase_simulator (
"PlatformAssem/Solver Configuration_1" ) ; { int_T i1 ; void * *
pw_TUbufferPtrs = & rtDW . pkz35q2tqr . TUbufferPtrs [ 0 ] ; for ( i1 = 0 ;
i1 < 3 ; i1 ++ ) { rt_TDelayFreeBuf ( pw_TUbufferPtrs [ i1 ] ) ; } } { int_T
i1 ; void * * pw_TUbufferPtrs = & rtDW . hphyxp0mpj . TUbufferPtrs [ 0 ] ;
for ( i1 = 0 ; i1 < 4 ; i1 ++ ) { rt_TDelayFreeBuf ( pw_TUbufferPtrs [ i1 ] )
; } pw_TUbufferPtrs = & rtDW . hphyxp0mpj . TUbufferPtrs [ 4 ] ; for ( i1 = 0
; i1 < 4 ; i1 ++ ) { rt_TDelayFreeBuf ( pw_TUbufferPtrs [ i1 ] ) ; } } {
int_T i1 ; void * * pw_TUbufferPtrs = & rtDW . jnawroeyau . TUbufferPtrs [ 0
] ; for ( i1 = 0 ; i1 < 3 ; i1 ++ ) { rt_TDelayFreeBuf ( pw_TUbufferPtrs [ i1
] ) ; } } rt_TDelayFreeBuf ( rtDW . am1ghvvstj . TUbufferPtrs [ 0 ] ) ;
rt_TDelayFreeBuf ( rtDW . am1ghvvstj . TUbufferPtrs [ 1 ] ) ;
rt_TDelayFreeBuf ( rtDW . am1ghvvstj . TUbufferPtrs [ 2 ] ) ; if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 97 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
1 ) ; ssSetNumBlocks ( rtS , 465 ) ; ssSetNumBlockIO ( rtS , 19 ) ;
ssSetNumBlockParams ( rtS , 17 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 374049582U ) ;
ssSetChecksumVal ( rtS , 1 , 1337284282U ) ; ssSetChecksumVal ( rtS , 2 ,
4012821603U ) ; ssSetChecksumVal ( rtS , 3 , 659983721U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = (
real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * )
x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; }
PlatformAssem_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "PlatformAssem" ) ;
ssSetPath ( rtS , "PlatformAssem" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , rtInf ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; }
{ rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3 ;
static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 97 ] ; static real_T absTol [ 97 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 97 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; ssSetSolverRelTol ( rtS
, 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.2 ) ; ssSetSolverMaxOrder ( rtS , 5 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "ode15s" ) ; ssSetVariableStepSolver (
rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 1 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 1 ) ; ( void ) memset ( ( void * ) &
mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , &
mdlMethods2 ) ; ( void ) memset ( ( void * ) & mdlMethods3 , 0 , sizeof (
mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ;
ssSetModelProjection ( rtS , MdlProjection ) ; ssSetSolverMassMatrixType (
rtS , ( ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 1 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 374049582U ) ; ssSetChecksumVal ( rtS , 1 ,
1337284282U ) ; ssSetChecksumVal ( rtS , 2 , 4012821603U ) ; ssSetChecksumVal
( rtS , 3 , 659983721U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 1 ; void MdlOutputsParameterSampleTime (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
