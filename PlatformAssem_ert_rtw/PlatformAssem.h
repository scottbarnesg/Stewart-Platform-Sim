/*
 * Academic Student License -- for use by students to meet course
 * requirements and perform academic research at degree granting
 * institutions only.  Not for government, commercial, or other
 * organizational use.
 *
 * File: PlatformAssem.h
 *
 * Code generated for Simulink model 'PlatformAssem'.
 *
 * Model version                  : 1.74
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Wed Feb 28 01:29:29 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PlatformAssem_h_
#define RTW_HEADER_PlatformAssem_h_
#include <string.h>
#ifndef PlatformAssem_COMMON_INCLUDES_
# define PlatformAssem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "PlatformAssem_f0ca4364_1_gateway.h"
#endif                                 /* PlatformAssem_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
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

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (auto storage) for system '<Root>' */
typedef struct {
  real_T INPUT_12_1_1[4];              /* '<S108>/INPUT_12_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S108>/INPUT_4_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S108>/INPUT_3_1_1' */
  real_T INPUT_9_1_1[4];               /* '<S108>/INPUT_9_1_1' */
  real_T INPUT_11_1_1[4];              /* '<S108>/INPUT_11_1_1' */
  real_T INPUT_10_1_1[4];              /* '<S108>/INPUT_10_1_1' */
  real_T INPUT_8_1_1[4];               /* '<S108>/INPUT_8_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S108>/INPUT_2_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S108>/INPUT_5_1_1' */
  real_T INPUT_6_1_1[4];               /* '<S108>/INPUT_6_1_1' */
  real_T INPUT_7_1_1[4];               /* '<S108>/INPUT_7_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S108>/INPUT_1_1_1' */
  real_T STATE_1[73];                  /* '<S108>/STATE_1' */
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
  real_T IC;                           /* '<Root>/IC' */
  real_T IC2;                          /* '<Root>/IC2' */
  real_T IC3;                          /* '<Root>/IC3' */
  real_T IC4;                          /* '<Root>/IC4' */
  real_T IC5;                          /* '<Root>/IC5' */
  real_T IC1;                          /* '<Root>/IC1' */
  void* STATE_1_Simulator;             /* '<S108>/STATE_1' */
  void* STATE_1_SimulationData;        /* '<S108>/STATE_1' */
  void* STATE_1_DiagnosticManager;     /* '<S108>/STATE_1' */
  void* STATE_1_Logger;                /* '<S108>/STATE_1' */
  void* STATE_1_SampleTimeIdx;         /* '<S108>/STATE_1' */
  void* SINK_1_Simulator;              /* '<S108>/SINK_1' */
  void* SINK_1_SimulationData;         /* '<S108>/SINK_1' */
  void* SINK_1_DiagnosticManager;      /* '<S108>/SINK_1' */
  void* SINK_1_Logger;                 /* '<S108>/SINK_1' */
  void* SINK_1_SampleTimeIdx;          /* '<S108>/SINK_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimulationData;     /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagnosticManager;  /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_Logger;             /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SampleTimeIdx;      /* '<S108>/OUTPUT_1_0' */
  boolean_T IC_FirstOutputTime;        /* '<Root>/IC' */
  boolean_T IC2_FirstOutputTime;       /* '<Root>/IC2' */
  boolean_T IC3_FirstOutputTime;       /* '<Root>/IC3' */
  boolean_T IC4_FirstOutputTime;       /* '<Root>/IC4' */
  boolean_T IC5_FirstOutputTime;       /* '<Root>/IC5' */
  boolean_T IC1_FirstOutputTime;       /* '<Root>/IC1' */
  boolean_T STATE_1_CallSimulatorOutput;/* '<S108>/STATE_1' */
  boolean_T SINK_1_CallSimulatorOutput;/* '<S108>/SINK_1' */
  boolean_T OUTPUT_1_0_CallSimulatorOutput;/* '<S108>/OUTPUT_1_0' */
} DW;

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
} X;

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
} XDot;

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
} XDis;

#ifndef ODE8_INTG
#define ODE8_INTG

/* ODE8 Integration Data */
typedef struct {
  real_T *deltaY;                      /* output diff */
  real_T *f[13];                       /* derivatives */
  real_T *x0;                          /* Initial State */
} ODE8_IntgData;

#endif

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T OdeDeltaY[97];
  real_T odeF[13][97];
  real_T odeX0[97];
  ODE8_IntgData intgData;

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
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Continuous states (auto storage) */
extern X rtX;

/* Block signals and states (auto storage) */
extern DW rtDW;

/* Model entry point functions */
extern void PlatformAssem_initialize(void);
extern void PlatformAssem_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/To Workspace2' : Unused code path elimination
 * Block '<S8>/To Workspace' : Unused code path elimination
 * Block '<S9>/To Workspace2' : Unused code path elimination
 * Block '<S10>/To Workspace' : Unused code path elimination
 * Block '<Root>/To Workspace1' : Unused code path elimination
 */

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

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
