/*
 * PlatformAssem.h
 *
 * Academic Student License -- for use by students to meet course
 * requirements and perform academic research at degree granting
 * institutions only.  Not for government, commercial, or other
 * organizational use.
 *
 * Code generation for model "PlatformAssem".
 *
 * Model version              : 1.69
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Fri Mar  9 17:22:07 2018
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PlatformAssem_h_
#define RTW_HEADER_PlatformAssem_h_
#include <stddef.h>
#include <float.h>
#include <math.h>
#include <string.h>
#ifndef PlatformAssem_COMMON_INCLUDES_
# define PlatformAssem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "nesl_rtw.h"
#include "PlatformAssem_f0ca4364_1_gateway.h"
#endif                                 /* PlatformAssem_COMMON_INCLUDES_ */

#include "PlatformAssem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T base_px;                      /* '<Root>/base_px' */
  real_T INPUT_12_1_1[4];              /* '<S108>/INPUT_12_1_1' */
  real_T base_py;                      /* '<Root>/base_py' */
  real_T INPUT_4_1_1[4];               /* '<S108>/INPUT_4_1_1' */
  real_T base_pz;                      /* '<Root>/base_pz' */
  real_T INPUT_3_1_1[4];               /* '<S108>/INPUT_3_1_1' */
  real_T base_qx;                      /* '<Root>/base_qx' */
  real_T INPUT_9_1_1[4];               /* '<S108>/INPUT_9_1_1' */
  real_T base_qy;                      /* '<Root>/base_qy' */
  real_T INPUT_11_1_1[4];              /* '<S108>/INPUT_11_1_1' */
  real_T base_qz;                      /* '<Root>/base_qz' */
  real_T INPUT_10_1_1[4];              /* '<S108>/INPUT_10_1_1' */
  real_T angle1;                       /* '<Root>/angle1' */
  real_T INPUT_8_1_1[4];               /* '<S108>/INPUT_8_1_1' */
  real_T angle3;                       /* '<Root>/angle3' */
  real_T INPUT_2_1_1[4];               /* '<S108>/INPUT_2_1_1' */
  real_T angle4;                       /* '<Root>/angle4' */
  real_T INPUT_5_1_1[4];               /* '<S108>/INPUT_5_1_1' */
  real_T angle5;                       /* '<Root>/angle5' */
  real_T INPUT_6_1_1[4];               /* '<S108>/INPUT_6_1_1' */
  real_T angle6;                       /* '<Root>/angle6' */
  real_T INPUT_7_1_1[4];               /* '<S108>/INPUT_7_1_1' */
  real_T angle2;                       /* '<Root>/angle2' */
  real_T INPUT_1_1_1[4];               /* '<S108>/INPUT_1_1_1' */
  real_T STATE_1[73];                  /* '<S108>/STATE_1' */
  real_T OUTPUT_1_0[23];               /* '<S108>/OUTPUT_1_0' */
  real_T TransportDelay[3];            /* '<S7>/Transport Delay' */
  real_T TransportDelay_d[8];          /* '<S8>/Transport Delay' */
  real_T TransportDelay_n[3];          /* '<S9>/Transport Delay' */
  real_T TransportDelay_b[3];          /* '<S10>/Transport Delay' */
} B_PlatformAssem_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T INPUT_12_1_1_discrete[2];     /* '<S108>/INPUT_12_1_1' */
  real_T INPUT_4_1_1_discrete[2];      /* '<S108>/INPUT_4_1_1' */
  real_T INPUT_3_1_1_discrete[2];      /* '<S108>/INPUT_3_1_1' */
  real_T INPUT_9_1_1_discrete[2];      /* '<S108>/INPUT_9_1_1' */
  real_T INPUT_11_1_1_discrete[2];     /* '<S108>/INPUT_11_1_1' */
  real_T INPUT_10_1_1_discrete[2];     /* '<S108>/INPUT_10_1_1' */
  real_T INPUT_8_1_1_discrete[2];      /* '<S108>/INPUT_8_1_1' */
  real_T INPUT_2_1_1_discrete[2];      /* '<S108>/INPUT_2_1_1' */
  real_T INPUT_5_1_1_discrete[2];      /* '<S108>/INPUT_5_1_1' */
  real_T INPUT_6_1_1_discrete[2];      /* '<S108>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_discrete[2];      /* '<S108>/INPUT_7_1_1' */
  real_T INPUT_1_1_1_discrete[2];      /* '<S108>/INPUT_1_1_1' */
  struct {
    real_T modelTStart;
    real_T TUbufferArea[6144];
  } TransportDelay_RWORK;              /* '<S7>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[16384];
  } TransportDelay_RWORK_b;            /* '<S8>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[6144];
  } TransportDelay_RWORK_j;            /* '<S9>/Transport Delay' */

  struct {
    real_T modelTStart;
    real_T TUbufferArea[6144];
  } TransportDelay_RWORK_e;            /* '<S10>/Transport Delay' */

  void* STATE_1_Simulator;             /* '<S108>/STATE_1' */
  void* STATE_1_SimulationData;        /* '<S108>/STATE_1' */
  void* STATE_1_DiagnosticManager;     /* '<S108>/STATE_1' */
  void* STATE_1_Logger;                /* '<S108>/STATE_1' */
  void* STATE_1_SampleTimeIdx;         /* '<S108>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimulationData;     /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagnosticManager;  /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_Logger;             /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SampleTimeIdx;      /* '<S108>/OUTPUT_1_0' */
  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *TUbufferPtrs[6];
  } TransportDelay_PWORK;              /* '<S7>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S7>/To Workspace2' */

  struct {
    void *TUbufferPtrs[16];
  } TransportDelay_PWORK_l;            /* '<S8>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S8>/To Workspace' */

  struct {
    void *TUbufferPtrs[6];
  } TransportDelay_PWORK_h;            /* '<S9>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK_a;              /* '<S9>/To Workspace2' */

  struct {
    void *TUbufferPtrs[6];
  } TransportDelay_PWORK_p;            /* '<S10>/Transport Delay' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_d;               /* '<S10>/To Workspace' */

  void* SINK_1_Simulator;              /* '<S108>/SINK_1' */
  void* SINK_1_SimulationData;         /* '<S108>/SINK_1' */
  void* SINK_1_DiagnosticManager;      /* '<S108>/SINK_1' */
  void* SINK_1_Logger;                 /* '<S108>/SINK_1' */
  void* SINK_1_SampleTimeIdx;          /* '<S108>/SINK_1' */
  struct {
    int_T Tail[3];
    int_T Head[3];
    int_T Last[3];
    int_T CircularBufSize[3];
  } TransportDelay_IWORK;              /* '<S7>/Transport Delay' */

  struct {
    int_T Tail[8];
    int_T Head[8];
    int_T Last[8];
    int_T CircularBufSize[8];
  } TransportDelay_IWORK_o;            /* '<S8>/Transport Delay' */

  struct {
    int_T Tail[3];
    int_T Head[3];
    int_T Last[3];
    int_T CircularBufSize[3];
  } TransportDelay_IWORK_a;            /* '<S9>/Transport Delay' */

  struct {
    int_T Tail[3];
    int_T Head[3];
    int_T Last[3];
    int_T CircularBufSize[3];
  } TransportDelay_IWORK_i;            /* '<S10>/Transport Delay' */

  boolean_T STATE_1_CallSimulatorOutput;/* '<S108>/STATE_1' */
  boolean_T OUTPUT_1_0_CallSimulatorOutput;/* '<S108>/OUTPUT_1_0' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S108>/SINK_1' */
} DW_PlatformAssem_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T PlatformAssemSimulink_PS_Conver[2];/* '<S108>/INPUT_12_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_l[2];/* '<S108>/INPUT_4_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_j[2];/* '<S108>/INPUT_3_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_h[2];/* '<S108>/INPUT_9_1_1' */
  real_T PlatformAssemSimulink_PS_Con_la[2];/* '<S108>/INPUT_11_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_m[2];/* '<S108>/INPUT_10_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_e[2];/* '<S108>/INPUT_8_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_g[2];/* '<S108>/INPUT_2_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_a[2];/* '<S108>/INPUT_5_1_1' */
  real_T PlatformAssemSimulink_PS_Con_lk[2];/* '<S108>/INPUT_6_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_o[2];/* '<S108>/INPUT_7_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_i[2];/* '<S108>/INPUT_1_1_1' */
  real_T PlatformAssemRevolute13Rzq[73];/* '<S108>/STATE_1' */
} X_PlatformAssem_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T PlatformAssemSimulink_PS_Conver[2];/* '<S108>/INPUT_12_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_l[2];/* '<S108>/INPUT_4_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_j[2];/* '<S108>/INPUT_3_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_h[2];/* '<S108>/INPUT_9_1_1' */
  real_T PlatformAssemSimulink_PS_Con_la[2];/* '<S108>/INPUT_11_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_m[2];/* '<S108>/INPUT_10_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_e[2];/* '<S108>/INPUT_8_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_g[2];/* '<S108>/INPUT_2_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_a[2];/* '<S108>/INPUT_5_1_1' */
  real_T PlatformAssemSimulink_PS_Con_lk[2];/* '<S108>/INPUT_6_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_o[2];/* '<S108>/INPUT_7_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_i[2];/* '<S108>/INPUT_1_1_1' */
  real_T PlatformAssemRevolute13Rzq[73];/* '<S108>/STATE_1' */
} XDot_PlatformAssem_T;

/* State disabled  */
typedef struct {
  boolean_T PlatformAssemSimulink_PS_Conver[2];/* '<S108>/INPUT_12_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_l[2];/* '<S108>/INPUT_4_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_j[2];/* '<S108>/INPUT_3_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_h[2];/* '<S108>/INPUT_9_1_1' */
  boolean_T PlatformAssemSimulink_PS_Con_la[2];/* '<S108>/INPUT_11_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_m[2];/* '<S108>/INPUT_10_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_e[2];/* '<S108>/INPUT_8_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_g[2];/* '<S108>/INPUT_2_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_a[2];/* '<S108>/INPUT_5_1_1' */
  boolean_T PlatformAssemSimulink_PS_Con_lk[2];/* '<S108>/INPUT_6_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_o[2];/* '<S108>/INPUT_7_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_i[2];/* '<S108>/INPUT_1_1_1' */
  boolean_T PlatformAssemRevolute13Rzq[73];/* '<S108>/STATE_1' */
} XDis_PlatformAssem_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (auto storage) */
struct P_PlatformAssem_T_ {
  real_T sensor_delay;                 /* Variable: sensor_delay
                                        * Referenced by:
                                        *   '<S7>/Transport Delay'
                                        *   '<S8>/Transport Delay'
                                        *   '<S9>/Transport Delay'
                                        *   '<S10>/Transport Delay'
                                        */
  real_T base_px_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_px'
                                        */
  real_T base_py_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_py'
                                        */
  real_T base_pz_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_pz'
                                        */
  real_T base_qx_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_qx'
                                        */
  real_T base_qy_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_qy'
                                        */
  real_T base_qz_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/base_qz'
                                        */
  real_T angle1_Value;                 /* Expression: 1.9199
                                        * Referenced by: '<Root>/angle1'
                                        */
  real_T angle3_Value;                 /* Expression: 1.9199
                                        * Referenced by: '<Root>/angle3'
                                        */
  real_T angle4_Value;                 /* Expression: -2.2689
                                        * Referenced by: '<Root>/angle4'
                                        */
  real_T angle5_Value;                 /* Expression: 2.4435
                                        * Referenced by: '<Root>/angle5'
                                        */
  real_T angle6_Value;                 /* Expression: -2.618
                                        * Referenced by: '<Root>/angle6'
                                        */
  real_T angle2_Value;                 /* Expression: -1.9199
                                        * Referenced by: '<Root>/angle2'
                                        */
  real_T TransportDelay_InitOutput;    /* Expression: 0
                                        * Referenced by: '<S7>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput_b;  /* Expression: 0
                                        * Referenced by: '<S8>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput_a;  /* Expression: 0
                                        * Referenced by: '<S9>/Transport Delay'
                                        */
  real_T TransportDelay_InitOutput_n;  /* Expression: 0
                                        * Referenced by: '<S10>/Transport Delay'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PlatformAssem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  X_PlatformAssem_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[97];
  real_T odeF[3][97];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_PlatformAssem_T PlatformAssem_P;

/* Block signals (auto storage) */
extern B_PlatformAssem_T PlatformAssem_B;

/* Continuous states (auto storage) */
extern X_PlatformAssem_T PlatformAssem_X;

/* Block states (auto storage) */
extern DW_PlatformAssem_T PlatformAssem_DW;

/* Model entry point functions */
extern void PlatformAssem_initialize(void);
extern void PlatformAssem_step(void);
extern void PlatformAssem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PlatformAssem_T *const PlatformAssem_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PlatformAssem'
 * '<S1>'   : 'PlatformAssem/PS-Simulink Converter1'
 * '<S2>'   : 'PlatformAssem/PS-Simulink Converter2'
 * '<S3>'   : 'PlatformAssem/PS-Simulink Converter3'
 * '<S4>'   : 'PlatformAssem/PS-Simulink Converter4'
 * '<S5>'   : 'PlatformAssem/PS-Simulink Converter5'
 * '<S6>'   : 'PlatformAssem/PS-Simulink Converter6'
 * '<S7>'   : 'PlatformAssem/Platform Acceleration (Abs)'
 * '<S8>'   : 'PlatformAssem/Platform Orientation'
 * '<S9>'   : 'PlatformAssem/Platform Translation (Abs)'
 * '<S10>'  : 'PlatformAssem/Platform Translation (Rel) '
 * '<S11>'  : 'PlatformAssem/Rod_assem_1'
 * '<S12>'  : 'PlatformAssem/Rod_assem_11'
 * '<S13>'  : 'PlatformAssem/Rod_assem_12'
 * '<S14>'  : 'PlatformAssem/Rod_assem_13'
 * '<S15>'  : 'PlatformAssem/Rod_assem_14'
 * '<S16>'  : 'PlatformAssem/Rod_assem_15'
 * '<S17>'  : 'PlatformAssem/Simulink-PS Converter'
 * '<S18>'  : 'PlatformAssem/Simulink-PS Converter1'
 * '<S19>'  : 'PlatformAssem/Simulink-PS Converter10'
 * '<S20>'  : 'PlatformAssem/Simulink-PS Converter11'
 * '<S21>'  : 'PlatformAssem/Simulink-PS Converter2'
 * '<S22>'  : 'PlatformAssem/Simulink-PS Converter3'
 * '<S23>'  : 'PlatformAssem/Simulink-PS Converter4'
 * '<S24>'  : 'PlatformAssem/Simulink-PS Converter5'
 * '<S25>'  : 'PlatformAssem/Simulink-PS Converter6'
 * '<S26>'  : 'PlatformAssem/Simulink-PS Converter7'
 * '<S27>'  : 'PlatformAssem/Simulink-PS Converter8'
 * '<S28>'  : 'PlatformAssem/Simulink-PS Converter9'
 * '<S29>'  : 'PlatformAssem/Solver Configuration'
 * '<S30>'  : 'PlatformAssem/Subsystem'
 * '<S31>'  : 'PlatformAssem/Subsystem1'
 * '<S32>'  : 'PlatformAssem/servo_arm_1_RIGID'
 * '<S33>'  : 'PlatformAssem/servo_arm_2_RIGID'
 * '<S34>'  : 'PlatformAssem/servo_arm_3_RIGID'
 * '<S35>'  : 'PlatformAssem/servo_arm_4_RIGID'
 * '<S36>'  : 'PlatformAssem/servo_arm_5_RIGID'
 * '<S37>'  : 'PlatformAssem/servo_arm_6_RIGID'
 * '<S38>'  : 'PlatformAssem/PS-Simulink Converter1/EVAL_KEY'
 * '<S39>'  : 'PlatformAssem/PS-Simulink Converter2/EVAL_KEY'
 * '<S40>'  : 'PlatformAssem/PS-Simulink Converter3/EVAL_KEY'
 * '<S41>'  : 'PlatformAssem/PS-Simulink Converter4/EVAL_KEY'
 * '<S42>'  : 'PlatformAssem/PS-Simulink Converter5/EVAL_KEY'
 * '<S43>'  : 'PlatformAssem/PS-Simulink Converter6/EVAL_KEY'
 * '<S44>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter7'
 * '<S45>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter8'
 * '<S46>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter9'
 * '<S47>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter7/EVAL_KEY'
 * '<S48>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter8/EVAL_KEY'
 * '<S49>'  : 'PlatformAssem/Platform Acceleration (Abs)/PS-Simulink Converter9/EVAL_KEY'
 * '<S50>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter'
 * '<S51>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter7'
 * '<S52>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter/EVAL_KEY'
 * '<S53>'  : 'PlatformAssem/Platform Orientation/PS-Simulink Converter7/EVAL_KEY'
 * '<S54>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter7'
 * '<S55>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter8'
 * '<S56>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter9'
 * '<S57>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter7/EVAL_KEY'
 * '<S58>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter8/EVAL_KEY'
 * '<S59>'  : 'PlatformAssem/Platform Translation (Abs)/PS-Simulink Converter9/EVAL_KEY'
 * '<S60>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter10'
 * '<S61>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter8'
 * '<S62>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter9'
 * '<S63>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter10/EVAL_KEY'
 * '<S64>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter8/EVAL_KEY'
 * '<S65>'  : 'PlatformAssem/Platform Translation (Rel) /PS-Simulink Converter9/EVAL_KEY'
 * '<S66>'  : 'PlatformAssem/Rod_assem_1/platform_rods_1_RIGID'
 * '<S67>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_1_RIGID'
 * '<S68>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_2_RIGID'
 * '<S69>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S70>'  : 'PlatformAssem/Rod_assem_1/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S71>'  : 'PlatformAssem/Rod_assem_11/platform_rods_1_RIGID'
 * '<S72>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_1_RIGID'
 * '<S73>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_2_RIGID'
 * '<S74>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S75>'  : 'PlatformAssem/Rod_assem_11/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S76>'  : 'PlatformAssem/Rod_assem_12/platform_rods_1_RIGID'
 * '<S77>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_1_RIGID'
 * '<S78>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_2_RIGID'
 * '<S79>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S80>'  : 'PlatformAssem/Rod_assem_12/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S81>'  : 'PlatformAssem/Rod_assem_13/platform_rods_1_RIGID'
 * '<S82>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_1_RIGID'
 * '<S83>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_2_RIGID'
 * '<S84>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S85>'  : 'PlatformAssem/Rod_assem_13/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S86>'  : 'PlatformAssem/Rod_assem_14/platform_rods_1_RIGID'
 * '<S87>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_1_RIGID'
 * '<S88>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_2_RIGID'
 * '<S89>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S90>'  : 'PlatformAssem/Rod_assem_14/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S91>'  : 'PlatformAssem/Rod_assem_15/platform_rods_1_RIGID'
 * '<S92>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_1_RIGID'
 * '<S93>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_2_RIGID'
 * '<S94>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S95>'  : 'PlatformAssem/Rod_assem_15/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S96>'  : 'PlatformAssem/Simulink-PS Converter/EVAL_KEY'
 * '<S97>'  : 'PlatformAssem/Simulink-PS Converter1/EVAL_KEY'
 * '<S98>'  : 'PlatformAssem/Simulink-PS Converter10/EVAL_KEY'
 * '<S99>'  : 'PlatformAssem/Simulink-PS Converter11/EVAL_KEY'
 * '<S100>' : 'PlatformAssem/Simulink-PS Converter2/EVAL_KEY'
 * '<S101>' : 'PlatformAssem/Simulink-PS Converter3/EVAL_KEY'
 * '<S102>' : 'PlatformAssem/Simulink-PS Converter4/EVAL_KEY'
 * '<S103>' : 'PlatformAssem/Simulink-PS Converter5/EVAL_KEY'
 * '<S104>' : 'PlatformAssem/Simulink-PS Converter6/EVAL_KEY'
 * '<S105>' : 'PlatformAssem/Simulink-PS Converter7/EVAL_KEY'
 * '<S106>' : 'PlatformAssem/Simulink-PS Converter8/EVAL_KEY'
 * '<S107>' : 'PlatformAssem/Simulink-PS Converter9/EVAL_KEY'
 * '<S108>' : 'PlatformAssem/Solver Configuration/EVAL_KEY'
 * '<S109>' : 'PlatformAssem/Subsystem/upper_platform_1_RIGID'
 * '<S110>' : 'PlatformAssem/Subsystem1/Servo_Motor_12_RIGID'
 * '<S111>' : 'PlatformAssem/Subsystem1/Servo_Motor_13_RIGID'
 * '<S112>' : 'PlatformAssem/Subsystem1/Servo_Motor_14_RIGID'
 * '<S113>' : 'PlatformAssem/Subsystem1/Servo_Motor_15_RIGID'
 * '<S114>' : 'PlatformAssem/Subsystem1/Servo_Motor_1_RIGID'
 * '<S115>' : 'PlatformAssem/Subsystem1/Servo_Motor_7_RIGID'
 * '<S116>' : 'PlatformAssem/Subsystem1/bottom_platform_1_RIGID'
 * '<S117>' : 'PlatformAssem/Subsystem1/servo_mount_12_RIGID'
 * '<S118>' : 'PlatformAssem/Subsystem1/servo_mount_13_RIGID'
 * '<S119>' : 'PlatformAssem/Subsystem1/servo_mount_14_RIGID'
 * '<S120>' : 'PlatformAssem/Subsystem1/servo_mount_15_RIGID'
 * '<S121>' : 'PlatformAssem/Subsystem1/servo_mount_1_RIGID'
 * '<S122>' : 'PlatformAssem/Subsystem1/servo_mount_7_RIGID'
 */
#endif                                 /* RTW_HEADER_PlatformAssem_h_ */
