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
 * Model version              : 1.65
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Tue Jan 30 20:03:57 2018
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
#include <string.h>
#include <float.h>
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
  real_T angle1;                       /* '<Root>/angle1' */
  real_T INPUT_6_1_1[4];               /* '<S84>/INPUT_6_1_1' */
  real_T angle2;                       /* '<Root>/angle2' */
  real_T INPUT_1_1_1[4];               /* '<S84>/INPUT_1_1_1' */
  real_T angle6;                       /* '<Root>/angle6' */
  real_T INPUT_5_1_1[4];               /* '<S84>/INPUT_5_1_1' */
  real_T angle4;                       /* '<Root>/angle4' */
  real_T INPUT_3_1_1[4];               /* '<S84>/INPUT_3_1_1' */
  real_T angle3;                       /* '<Root>/angle3' */
  real_T INPUT_2_1_1[4];               /* '<S84>/INPUT_2_1_1' */
  real_T angle5;                       /* '<Root>/angle5' */
  real_T INPUT_4_1_1[4];               /* '<S84>/INPUT_4_1_1' */
  real_T STATE_1[73];                  /* '<S84>/STATE_1' */
  real_T OUTPUT_1_0[13];               /* '<S84>/OUTPUT_1_0' */
} B_PlatformAssem_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T INPUT_6_1_1_discrete[2];      /* '<S84>/INPUT_6_1_1' */
  real_T INPUT_1_1_1_discrete[2];      /* '<S84>/INPUT_1_1_1' */
  real_T INPUT_5_1_1_discrete[2];      /* '<S84>/INPUT_5_1_1' */
  real_T INPUT_3_1_1_discrete[2];      /* '<S84>/INPUT_3_1_1' */
  real_T INPUT_2_1_1_discrete[2];      /* '<S84>/INPUT_2_1_1' */
  real_T INPUT_4_1_1_discrete[2];      /* '<S84>/INPUT_4_1_1' */
  void* STATE_1_Simulator;             /* '<S84>/STATE_1' */
  void* STATE_1_SimulationData;        /* '<S84>/STATE_1' */
  void* STATE_1_DiagnosticManager;     /* '<S84>/STATE_1' */
  void* STATE_1_Logger;                /* '<S84>/STATE_1' */
  void* STATE_1_SampleTimeIdx;         /* '<S84>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S84>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimulationData;     /* '<S84>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagnosticManager;  /* '<S84>/OUTPUT_1_0' */
  void* OUTPUT_1_0_Logger;             /* '<S84>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SampleTimeIdx;      /* '<S84>/OUTPUT_1_0' */
  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<Root>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  void* SINK_1_Simulator;              /* '<S84>/SINK_1' */
  void* SINK_1_SimulationData;         /* '<S84>/SINK_1' */
  void* SINK_1_DiagnosticManager;      /* '<S84>/SINK_1' */
  void* SINK_1_Logger;                 /* '<S84>/SINK_1' */
  void* SINK_1_SampleTimeIdx;          /* '<S84>/SINK_1' */
  boolean_T STATE_1_CallSimulatorOutput;/* '<S84>/STATE_1' */
  boolean_T OUTPUT_1_0_CallSimulatorOutput;/* '<S84>/OUTPUT_1_0' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S84>/SINK_1' */
} DW_PlatformAssem_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T PlatformAssemSimulink_PS_Conver[2];/* '<S84>/INPUT_6_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_j[2];/* '<S84>/INPUT_1_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_a[2];/* '<S84>/INPUT_5_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_i[2];/* '<S84>/INPUT_3_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_o[2];/* '<S84>/INPUT_2_1_1' */
  real_T PlatformAssemSimulink_PS_Con_jh[2];/* '<S84>/INPUT_4_1_1' */
  real_T PlatformAssemLinkage_1RevoluteR[73];/* '<S84>/STATE_1' */
} X_PlatformAssem_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T PlatformAssemSimulink_PS_Conver[2];/* '<S84>/INPUT_6_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_j[2];/* '<S84>/INPUT_1_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_a[2];/* '<S84>/INPUT_5_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_i[2];/* '<S84>/INPUT_3_1_1' */
  real_T PlatformAssemSimulink_PS_Conv_o[2];/* '<S84>/INPUT_2_1_1' */
  real_T PlatformAssemSimulink_PS_Con_jh[2];/* '<S84>/INPUT_4_1_1' */
  real_T PlatformAssemLinkage_1RevoluteR[73];/* '<S84>/STATE_1' */
} XDot_PlatformAssem_T;

/* State disabled  */
typedef struct {
  boolean_T PlatformAssemSimulink_PS_Conver[2];/* '<S84>/INPUT_6_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_j[2];/* '<S84>/INPUT_1_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_a[2];/* '<S84>/INPUT_5_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_i[2];/* '<S84>/INPUT_3_1_1' */
  boolean_T PlatformAssemSimulink_PS_Conv_o[2];/* '<S84>/INPUT_2_1_1' */
  boolean_T PlatformAssemSimulink_PS_Con_jh[2];/* '<S84>/INPUT_4_1_1' */
  boolean_T PlatformAssemLinkage_1RevoluteR[73];/* '<S84>/STATE_1' */
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
  real_T angle1_Value;                 /* Expression: 1.5195
                                        * Referenced by: '<Root>/angle1'
                                        */
  real_T angle2_Value;                 /* Expression: -1.8536
                                        * Referenced by: '<Root>/angle2'
                                        */
  real_T angle6_Value;                 /* Expression: -1.6221
                                        * Referenced by: '<Root>/angle6'
                                        */
  real_T angle4_Value;                 /* Expression: -1.1712
                                        * Referenced by: '<Root>/angle4'
                                        */
  real_T angle3_Value;                 /* Expression: 1.288
                                        * Referenced by: '<Root>/angle3'
                                        */
  real_T angle5_Value;                 /* Expression: 1.7381
                                        * Referenced by: '<Root>/angle5'
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
  real_T odeY[85];
  real_T odeF[3][85];
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
 * '<S1>'   : 'PlatformAssem/Linkage_1'
 * '<S2>'   : 'PlatformAssem/Linkage_2 '
 * '<S3>'   : 'PlatformAssem/Linkage_3'
 * '<S4>'   : 'PlatformAssem/Linkage_4'
 * '<S5>'   : 'PlatformAssem/Linkage_5'
 * '<S6>'   : 'PlatformAssem/Linkage_6'
 * '<S7>'   : 'PlatformAssem/PS-Simulink Converter'
 * '<S8>'   : 'PlatformAssem/PS-Simulink Converter1'
 * '<S9>'   : 'PlatformAssem/PS-Simulink Converter2'
 * '<S10>'  : 'PlatformAssem/PS-Simulink Converter3'
 * '<S11>'  : 'PlatformAssem/PS-Simulink Converter4'
 * '<S12>'  : 'PlatformAssem/PS-Simulink Converter5'
 * '<S13>'  : 'PlatformAssem/PS-Simulink Converter6'
 * '<S14>'  : 'PlatformAssem/PS-Simulink Converter7'
 * '<S15>'  : 'PlatformAssem/PS-Simulink Converter8'
 * '<S16>'  : 'PlatformAssem/PS-Simulink Converter9'
 * '<S17>'  : 'PlatformAssem/Servo_Motor_10_RIGID'
 * '<S18>'  : 'PlatformAssem/Servo_Motor_11_RIGID'
 * '<S19>'  : 'PlatformAssem/Servo_Motor_1_RIGID'
 * '<S20>'  : 'PlatformAssem/Servo_Motor_7_RIGID'
 * '<S21>'  : 'PlatformAssem/Servo_Motor_8_RIGID'
 * '<S22>'  : 'PlatformAssem/Servo_Motor_9_RIGID'
 * '<S23>'  : 'PlatformAssem/Simulink-PS Converter'
 * '<S24>'  : 'PlatformAssem/Simulink-PS Converter1'
 * '<S25>'  : 'PlatformAssem/Simulink-PS Converter2'
 * '<S26>'  : 'PlatformAssem/Simulink-PS Converter3'
 * '<S27>'  : 'PlatformAssem/Simulink-PS Converter4'
 * '<S28>'  : 'PlatformAssem/Simulink-PS Converter5'
 * '<S29>'  : 'PlatformAssem/Solver Configuration'
 * '<S30>'  : 'PlatformAssem/Subsystem'
 * '<S31>'  : 'PlatformAssem/servo_arm_1_RIGID'
 * '<S32>'  : 'PlatformAssem/servo_arm_2_RIGID'
 * '<S33>'  : 'PlatformAssem/servo_arm_3_RIGID'
 * '<S34>'  : 'PlatformAssem/servo_arm_4_RIGID'
 * '<S35>'  : 'PlatformAssem/servo_arm_5_RIGID'
 * '<S36>'  : 'PlatformAssem/servo_arm_6_RIGID'
 * '<S37>'  : 'PlatformAssem/upper_platform_1_RIGID'
 * '<S38>'  : 'PlatformAssem/Linkage_1/platform_rods_6_RIGID'
 * '<S39>'  : 'PlatformAssem/Linkage_1/uxcell_SA5T_ball_11_RIGID'
 * '<S40>'  : 'PlatformAssem/Linkage_1/uxcell_SA5T_ball_12_RIGID'
 * '<S41>'  : 'PlatformAssem/Linkage_1/uxcell_SA5T_ball_joint_housing_11_RIGID'
 * '<S42>'  : 'PlatformAssem/Linkage_1/uxcell_SA5T_ball_joint_housing_12_RIGID'
 * '<S43>'  : 'PlatformAssem/Linkage_2 /platform_rods_3_RIGID'
 * '<S44>'  : 'PlatformAssem/Linkage_2 /uxcell_SA5T_ball_5_RIGID'
 * '<S45>'  : 'PlatformAssem/Linkage_2 /uxcell_SA5T_ball_6_RIGID'
 * '<S46>'  : 'PlatformAssem/Linkage_2 /uxcell_SA5T_ball_joint_housing_5_RIGID'
 * '<S47>'  : 'PlatformAssem/Linkage_2 /uxcell_SA5T_ball_joint_housing_6_RIGID'
 * '<S48>'  : 'PlatformAssem/Linkage_3/platform_rods_1_RIGID'
 * '<S49>'  : 'PlatformAssem/Linkage_3/uxcell_SA5T_ball_1_RIGID'
 * '<S50>'  : 'PlatformAssem/Linkage_3/uxcell_SA5T_ball_2_RIGID'
 * '<S51>'  : 'PlatformAssem/Linkage_3/uxcell_SA5T_ball_joint_housing_1_RIGID'
 * '<S52>'  : 'PlatformAssem/Linkage_3/uxcell_SA5T_ball_joint_housing_2_RIGID'
 * '<S53>'  : 'PlatformAssem/Linkage_4/platform_rods_2_RIGID'
 * '<S54>'  : 'PlatformAssem/Linkage_4/uxcell_SA5T_ball_3_RIGID'
 * '<S55>'  : 'PlatformAssem/Linkage_4/uxcell_SA5T_ball_4_RIGID'
 * '<S56>'  : 'PlatformAssem/Linkage_4/uxcell_SA5T_ball_joint_housing_3_RIGID'
 * '<S57>'  : 'PlatformAssem/Linkage_4/uxcell_SA5T_ball_joint_housing_4_RIGID'
 * '<S58>'  : 'PlatformAssem/Linkage_5/platform_rods_4_RIGID'
 * '<S59>'  : 'PlatformAssem/Linkage_5/uxcell_SA5T_ball_7_RIGID'
 * '<S60>'  : 'PlatformAssem/Linkage_5/uxcell_SA5T_ball_8_RIGID'
 * '<S61>'  : 'PlatformAssem/Linkage_5/uxcell_SA5T_ball_joint_housing_7_RIGID'
 * '<S62>'  : 'PlatformAssem/Linkage_5/uxcell_SA5T_ball_joint_housing_8_RIGID'
 * '<S63>'  : 'PlatformAssem/Linkage_6/platform_rods_5_RIGID'
 * '<S64>'  : 'PlatformAssem/Linkage_6/uxcell_SA5T_ball_10_RIGID'
 * '<S65>'  : 'PlatformAssem/Linkage_6/uxcell_SA5T_ball_9_RIGID'
 * '<S66>'  : 'PlatformAssem/Linkage_6/uxcell_SA5T_ball_joint_housing_10_RIGID'
 * '<S67>'  : 'PlatformAssem/Linkage_6/uxcell_SA5T_ball_joint_housing_9_RIGID'
 * '<S68>'  : 'PlatformAssem/PS-Simulink Converter/EVAL_KEY'
 * '<S69>'  : 'PlatformAssem/PS-Simulink Converter1/EVAL_KEY'
 * '<S70>'  : 'PlatformAssem/PS-Simulink Converter2/EVAL_KEY'
 * '<S71>'  : 'PlatformAssem/PS-Simulink Converter3/EVAL_KEY'
 * '<S72>'  : 'PlatformAssem/PS-Simulink Converter4/EVAL_KEY'
 * '<S73>'  : 'PlatformAssem/PS-Simulink Converter5/EVAL_KEY'
 * '<S74>'  : 'PlatformAssem/PS-Simulink Converter6/EVAL_KEY'
 * '<S75>'  : 'PlatformAssem/PS-Simulink Converter7/EVAL_KEY'
 * '<S76>'  : 'PlatformAssem/PS-Simulink Converter8/EVAL_KEY'
 * '<S77>'  : 'PlatformAssem/PS-Simulink Converter9/EVAL_KEY'
 * '<S78>'  : 'PlatformAssem/Simulink-PS Converter/EVAL_KEY'
 * '<S79>'  : 'PlatformAssem/Simulink-PS Converter1/EVAL_KEY'
 * '<S80>'  : 'PlatformAssem/Simulink-PS Converter2/EVAL_KEY'
 * '<S81>'  : 'PlatformAssem/Simulink-PS Converter3/EVAL_KEY'
 * '<S82>'  : 'PlatformAssem/Simulink-PS Converter4/EVAL_KEY'
 * '<S83>'  : 'PlatformAssem/Simulink-PS Converter5/EVAL_KEY'
 * '<S84>'  : 'PlatformAssem/Solver Configuration/EVAL_KEY'
 * '<S85>'  : 'PlatformAssem/Subsystem/bottom_platform_1_RIGID'
 * '<S86>'  : 'PlatformAssem/Subsystem/servo_mount_10_RIGID'
 * '<S87>'  : 'PlatformAssem/Subsystem/servo_mount_11_RIGID'
 * '<S88>'  : 'PlatformAssem/Subsystem/servo_mount_1_RIGID'
 * '<S89>'  : 'PlatformAssem/Subsystem/servo_mount_7_RIGID'
 * '<S90>'  : 'PlatformAssem/Subsystem/servo_mount_8_RIGID'
 * '<S91>'  : 'PlatformAssem/Subsystem/servo_mount_9_RIGID'
 */
#endif                                 /* RTW_HEADER_PlatformAssem_h_ */
