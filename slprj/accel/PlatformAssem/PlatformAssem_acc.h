#include "__cf_PlatformAssem.h"
#ifndef RTW_HEADER_PlatformAssem_acc_h_
#define RTW_HEADER_PlatformAssem_acc_h_
#include <stddef.h>
#include <float.h>
#ifndef PlatformAssem_acc_COMMON_INCLUDES_
#define PlatformAssem_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "PlatformAssem_acc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
typedef struct { real_T B_0_0_0 ; real_T B_0_1_0 [ 4 ] ; real_T B_0_2_0 ;
real_T B_0_3_0 [ 4 ] ; real_T B_0_4_0 ; real_T B_0_5_0 [ 4 ] ; real_T B_0_6_0
; real_T B_0_7_0 [ 4 ] ; real_T B_0_8_0 ; real_T B_0_9_0 [ 4 ] ; real_T
B_0_10_0 ; real_T B_0_11_0 [ 4 ] ; real_T B_0_12_0 ; real_T B_0_13_0 [ 4 ] ;
real_T B_0_14_0 ; real_T B_0_15_0 [ 4 ] ; real_T B_0_16_0 ; real_T B_0_17_0 [
4 ] ; real_T B_0_18_0 ; real_T B_0_19_0 [ 4 ] ; real_T B_0_20_0 ; real_T
B_0_21_0 [ 4 ] ; real_T B_0_22_0 ; real_T B_0_23_0 [ 4 ] ; real_T B_0_24_0 [
73 ] ; real_T B_0_25_0 [ 23 ] ; real_T B_0_46_0 [ 3 ] ; real_T B_0_54_0 [ 8 ]
; real_T B_0_63_0 [ 3 ] ; real_T B_0_71_0 [ 3 ] ; real_T B_0_26_0 [ 6 ] ; }
B_PlatformAssem_T ; typedef struct { real_T INPUT_12_1_1_discrete [ 2 ] ;
real_T INPUT_4_1_1_discrete [ 2 ] ; real_T INPUT_3_1_1_discrete [ 2 ] ;
real_T INPUT_9_1_1_discrete [ 2 ] ; real_T INPUT_11_1_1_discrete [ 2 ] ;
real_T INPUT_10_1_1_discrete [ 2 ] ; real_T INPUT_8_1_1_discrete [ 2 ] ;
real_T INPUT_2_1_1_discrete [ 2 ] ; real_T INPUT_5_1_1_discrete [ 2 ] ;
real_T INPUT_6_1_1_discrete [ 2 ] ; real_T INPUT_7_1_1_discrete [ 2 ] ;
real_T INPUT_1_1_1_discrete [ 2 ] ; struct { real_T modelTStart ; }
TransportDelay_RWORK ; struct { real_T modelTStart ; } TransportDelay_RWORK_b
; struct { real_T modelTStart ; } TransportDelay_RWORK_j ; struct { real_T
modelTStart ; } TransportDelay_RWORK_e ; void * STATE_1_Simulator ; void *
STATE_1_SimulationData ; void * STATE_1_DiagnosticManager ; void *
STATE_1_Logger ; void * STATE_1_SampleTimeIdx ; void * OUTPUT_1_0_Simulator ;
void * OUTPUT_1_0_SimulationData ; void * OUTPUT_1_0_DiagnosticManager ; void
* OUTPUT_1_0_Logger ; void * OUTPUT_1_0_SampleTimeIdx ; void *
ToWorkspace1_PWORK ; struct { void * TUbufferPtrs [ 6 ] ; }
TransportDelay_PWORK ; void * ToWorkspace2_PWORK ; struct { void *
TUbufferPtrs [ 16 ] ; } TransportDelay_PWORK_l ; void * ToWorkspace_PWORK ;
struct { void * AQHandles ; void * SlioLTF ; }
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter7_at_outport_0_PWORK ;
struct { void * AQHandles ; void * SlioLTF ; }
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter8_at_outport_0_PWORK ;
struct { void * AQHandles ; void * SlioLTF ; }
HiddenToAsyncQueue_InsertedFor_PSSimulinkConverter9_at_outport_0_PWORK ;
struct { void * TUbufferPtrs [ 6 ] ; } TransportDelay_PWORK_h ; void *
ToWorkspace2_PWORK_a ; struct { void * TUbufferPtrs [ 6 ] ; }
TransportDelay_PWORK_p ; void * ToWorkspace_PWORK_d ; void * SINK_1_Simulator
; void * SINK_1_SimulationData ; void * SINK_1_DiagnosticManager ; void *
SINK_1_Logger ; void * SINK_1_SampleTimeIdx ; struct { int_T Tail [ 3 ] ;
int_T Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK ; struct { int_T Tail [ 8 ] ; int_T
Head [ 8 ] ; int_T Last [ 8 ] ; int_T CircularBufSize [ 8 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK_o ; struct { int_T Tail [ 3 ] ; int_T
Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK_a ; struct { int_T Tail [ 3 ] ; int_T
Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK_i ; boolean_T
STATE_1_CallSimulatorOutput ; boolean_T OUTPUT_1_0_CallSimulatorOutput ;
boolean_T SINK_1_CallSimulatorOutput ; char_T pad_SINK_1_CallSimulatorOutput
[ 5 ] ; } DW_PlatformAssem_T ; typedef struct { real_T
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 2 ] ; real_T
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 2 ] ;
real_T PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 2 ]
; real_T PlatformAssemRevolute13Rzq [ 73 ] ; } X_PlatformAssem_T ; typedef
struct { real_T PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0
[ 2 ] ; real_T
PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 2 ] ;
real_T PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 2 ]
; real_T PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 2 ]
; real_T PlatformAssemRevolute13Rzq [ 73 ] ; } XDot_PlatformAssem_T ; typedef
struct { boolean_T
PlatformAssemSimulink_PS_Converter9outputFiltered_165143411_0 [ 2 ] ;
boolean_T PlatformAssemSimulink_PS_Converter11outputFiltered_1933448399_0 [ 2
] ; boolean_T PlatformAssemSimulink_PS_Converter10outputFiltered_3240020191_0
[ 2 ] ; boolean_T
PlatformAssemSimulink_PS_Converter6outputFiltered_2343489662_0 [ 2 ] ;
boolean_T PlatformAssemSimulink_PS_Converter8outputFiltered_1316460963_0 [ 2
] ; boolean_T PlatformAssemSimulink_PS_Converter7outputFiltered_1930932243_0
[ 2 ] ; boolean_T
PlatformAssemSimulink_PS_Converter5outputFiltered_3067017678_0 [ 2 ] ;
boolean_T PlatformAssemSimulink_PS_Converter1outputFiltered_4236173679_0 [ 2
] ; boolean_T PlatformAssemSimulink_PS_Converter2outputFiltered_1314798975_0
[ 2 ] ; boolean_T
PlatformAssemSimulink_PS_Converter3outputFiltered_167659439_0 [ 2 ] ;
boolean_T PlatformAssemSimulink_PS_Converter4outputFiltered_882798111_0 [ 2 ]
; boolean_T PlatformAssemSimulink_PS_ConverteroutputFiltered_3151928255_0 [ 2
] ; boolean_T PlatformAssemRevolute13Rzq [ 73 ] ; } XDis_PlatformAssem_T ;
struct P_PlatformAssem_T_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3
; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9
; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ;
real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; } ;
extern P_PlatformAssem_T PlatformAssem_rtDefaultP ;
#endif
