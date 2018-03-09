/*
 * Academic Student License -- for use by students to meet course
 * requirements and perform academic research at degree granting
 * institutions only.  Not for government, commercial, or other
 * organizational use.
 *
 * File: PlatformAssem.c
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

#include "PlatformAssem.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

/* Continuous states */
X rtX;

/* Block signals and states (auto storage) */
DW rtDW;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* private model entry point functions */
extern void PlatformAssem_derivatives(void);

/* Projection for root system: '<Root>' */
void PlatformAssem_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[48];
  int_T tmp_1[13];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;

  /* Projection for SimscapeExecutionBlock: '<S108>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &rtX.PlatformAssemRevolute13Rzq;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = rtDW.INPUT_12_1_1[0];
  tmp_0[1] = rtDW.INPUT_12_1_1[1];
  tmp_0[2] = rtDW.INPUT_12_1_1[2];
  tmp_0[3] = rtDW.INPUT_12_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = rtDW.INPUT_4_1_1[0];
  tmp_0[5] = rtDW.INPUT_4_1_1[1];
  tmp_0[6] = rtDW.INPUT_4_1_1[2];
  tmp_0[7] = rtDW.INPUT_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = rtDW.INPUT_3_1_1[0];
  tmp_0[9] = rtDW.INPUT_3_1_1[1];
  tmp_0[10] = rtDW.INPUT_3_1_1[2];
  tmp_0[11] = rtDW.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = rtDW.INPUT_9_1_1[0];
  tmp_0[13] = rtDW.INPUT_9_1_1[1];
  tmp_0[14] = rtDW.INPUT_9_1_1[2];
  tmp_0[15] = rtDW.INPUT_9_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = rtDW.INPUT_11_1_1[0];
  tmp_0[17] = rtDW.INPUT_11_1_1[1];
  tmp_0[18] = rtDW.INPUT_11_1_1[2];
  tmp_0[19] = rtDW.INPUT_11_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = rtDW.INPUT_10_1_1[0];
  tmp_0[21] = rtDW.INPUT_10_1_1[1];
  tmp_0[22] = rtDW.INPUT_10_1_1[2];
  tmp_0[23] = rtDW.INPUT_10_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = rtDW.INPUT_8_1_1[0];
  tmp_0[25] = rtDW.INPUT_8_1_1[1];
  tmp_0[26] = rtDW.INPUT_8_1_1[2];
  tmp_0[27] = rtDW.INPUT_8_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = rtDW.INPUT_2_1_1[0];
  tmp_0[29] = rtDW.INPUT_2_1_1[1];
  tmp_0[30] = rtDW.INPUT_2_1_1[2];
  tmp_0[31] = rtDW.INPUT_2_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = rtDW.INPUT_5_1_1[0];
  tmp_0[33] = rtDW.INPUT_5_1_1[1];
  tmp_0[34] = rtDW.INPUT_5_1_1[2];
  tmp_0[35] = rtDW.INPUT_5_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = rtDW.INPUT_6_1_1[0];
  tmp_0[37] = rtDW.INPUT_6_1_1[1];
  tmp_0[38] = rtDW.INPUT_6_1_1[2];
  tmp_0[39] = rtDW.INPUT_6_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = rtDW.INPUT_7_1_1[0];
  tmp_0[41] = rtDW.INPUT_7_1_1[1];
  tmp_0[42] = rtDW.INPUT_7_1_1[2];
  tmp_0[43] = rtDW.INPUT_7_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = rtDW.INPUT_1_1_1[0];
  tmp_0[45] = rtDW.INPUT_1_1_1[1];
  tmp_0[46] = rtDW.INPUT_1_1_1[2];
  tmp_0[47] = rtDW.INPUT_1_1_1[3];
  tmp_1[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S108>/STATE_1' */
}

/* This function updates continuous states using the ODE8 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
#define rtNSTAGES                      13

  static real_T rt_ODE8_B[13] = {
    4.174749114153025E-2, 0.0, 0.0, 0.0,
    0.0, -5.54523286112393E-2, 2.393128072011801E-1, 7.03510669403443E-1,
    -7.597596138144609E-1, 6.605630309222863E-1, 1.581874825101233E-1,
    -2.381095387528628E-1, 2.5E-1
  };

  static real_T rt_ODE8_C[13] = {
    0.0, 5.555555555555556E-2, 8.333333333333333E-2, 1.25E-1,
    3.125E-1, 3.75E-1, 1.475E-1, 4.65E-1,
    5.648654513822596E-1, 6.5E-1, 9.246562776405044E-1, 1.0, 1.0
  };

  static real_T rt_ODE8_A[13][13] = {
    /* rt_ODE8_A[0][] */
    { 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[1][] */
    { 5.555555555555556E-2, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[2][] */
    { 2.083333333333333E-2, 6.25E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[3][] */
    { 3.125E-2, 0.0, 9.375E-2, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[4][] */
    { 3.125E-1, 0.0, -1.171875, 1.171875,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[5][] */
    { 3.75E-2, 0.0, 0.0, 1.875E-1,
      1.5E-1, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[6][] */
    { 4.791013711111111E-2, 0.0, 0.0, 1.122487127777778E-1,
      -2.550567377777778E-2, 1.284682388888889E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[7][] */
    { 1.691798978729228E-2, 0.0, 0.0, 3.878482784860432E-1,
      3.597736985150033E-2, 1.969702142156661E-1, -1.727138523405018E-1, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[8][] */
    { 6.90957533591923E-2, 0.0, 0.0, -6.342479767288542E-1,
      -1.611975752246041E-1, 1.386503094588253E-1, 9.409286140357563E-1,
      2.11636326481944E-1,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[9][] */
    { 1.835569968390454E-1, 0.0, 0.0, -2.468768084315592,
      -2.912868878163005E-1, -2.647302023311738E-2, 2.8478387641928,
      2.813873314698498E-1,
      1.237448998633147E-1, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[10][] */
    { -1.215424817395888, 0.0, 0.0, 1.667260866594577E1,
      9.157418284168179E-1, -6.056605804357471, -1.600357359415618E1,
      1.484930308629766E1,
      -1.337157573528985E1, 5.134182648179638, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[11][] */
    { 2.588609164382643E-1, 0.0, 0.0, -4.774485785489205,
      -4.350930137770325E-1, -3.049483332072241, 5.577920039936099,
      6.155831589861039,
      -5.062104586736938, 2.193926173180679, 1.346279986593349E-1, 0.0, 0.0 },

    /* rt_ODE8_A[12][] */
    { 8.224275996265075E-1, 0.0, 0.0, -1.165867325727766E1,
      -7.576221166909362E-1, 7.139735881595818E-1, 1.207577498689006E1,
      -2.127659113920403,
      1.990166207048956, -2.342864715440405E-1, 1.758985777079423E-1, 0.0, 0.0 },
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE8_IntgData *intgData = (ODE8_IntgData *) rtsiGetSolverData(si);
  real_T *deltaY = intgData->deltaY;
  real_T *x0 = intgData->x0;
  real_T* f[rtNSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 97;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  f[0] = intgData->f[0];
  f[1] = intgData->f[1];
  f[2] = intgData->f[2];
  f[3] = intgData->f[3];
  f[4] = intgData->f[4];
  f[5] = intgData->f[5];
  f[6] = intgData->f[6];
  f[7] = intgData->f[7];
  f[8] = intgData->f[8];
  f[9] = intgData->f[9];
  f[10] = intgData->f[10];
  f[11] = intgData->f[11];
  f[12] = intgData->f[12];

  /* Save the state values at time t in y and x0*/
  (void) memset(deltaY, 0,
                (uint_T)nXc*sizeof(real_T));
  (void) memcpy(x0, x,
                nXc*sizeof(real_T));
  for (stagesIdx=0;stagesIdx<rtNSTAGES;stagesIdx++) {
    (void) memcpy(x, x0,
                  (uint_T)nXc*sizeof(real_T));
    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaX = 0;
      for (idx=0;idx<stagesIdx;idx++) {
        deltaX = deltaX + h*rt_ODE8_A[stagesIdx][idx]*f[idx][statesIdx];
      }

      x[statesIdx] = x0[statesIdx] + deltaX;
    }

    if (stagesIdx==0) {
      rtsiSetdX(si, f[stagesIdx]);
      PlatformAssem_derivatives();
    } else {
      (stagesIdx==rtNSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t + h*
        rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      PlatformAssem_step();
      PlatformAssem_derivatives();
    }

    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaY[statesIdx] = deltaY[statesIdx] + h*rt_ODE8_B[stagesIdx]*f[stagesIdx]
        [statesIdx];
    }
  }

  for (statesIdx=0;statesIdx<nXc;statesIdx++) {
    x[statesIdx] = x0[statesIdx] + deltaY[statesIdx];
  }

  PlatformAssem_step();
  PlatformAssem_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void PlatformAssem_step(void)
{
  boolean_T first_output;
  NeslSimulationData *simulationData;
  real_T time;
  real_T tmp[48];
  int_T tmp_0[13];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_1;
  char *msg;
  real_T time_0;
  real_T tmp_2[121];
  int_T tmp_3[14];
  real_T rtb_OUTPUT_1_0[23];
  boolean_T tmp_4;
  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  /* SimscapeInputBlock: '<S108>/INPUT_12_1_1' incorporates:
   *  Constant: '<Root>/base_px'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_12_1_1_discrete[1] = 0.0;
  }

  first_output = false;
  if (rtDW.INPUT_12_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_12_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conver[0] = rtDW.INPUT_12_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conver[1] = 0.0;
  }

  rtDW.INPUT_12_1_1[0] = rtX.PlatformAssemSimulink_PS_Conver[0];
  rtDW.INPUT_12_1_1[1] = rtX.PlatformAssemSimulink_PS_Conver[1];
  rtDW.INPUT_12_1_1[2] = ((rtDW.INPUT_12_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conver[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conver[1]) * 1000.0;
  rtDW.INPUT_12_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_12_1_1' */

  /* SimscapeInputBlock: '<S108>/INPUT_4_1_1' incorporates:
   *  Constant: '<Root>/base_py'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_4_1_1_discrete[1] = 0.0;
  }

  first_output = false;
  if (rtDW.INPUT_4_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_4_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_l[0] = rtDW.INPUT_4_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_l[1] = 0.0;
  }

  rtDW.INPUT_4_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_l[0];
  rtDW.INPUT_4_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_l[1];
  rtDW.INPUT_4_1_1[2] = ((rtDW.INPUT_4_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_l[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_l[1]) * 1000.0;
  rtDW.INPUT_4_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_4_1_1' */

  /* SimscapeInputBlock: '<S108>/INPUT_3_1_1' incorporates:
   *  Constant: '<Root>/base_pz'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_3_1_1_discrete[1] = 0.0;
  }

  first_output = false;
  if (rtDW.INPUT_3_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_3_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_j[0] = rtDW.INPUT_3_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_j[1] = 0.0;
  }

  rtDW.INPUT_3_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_j[0];
  rtDW.INPUT_3_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_j[1];
  rtDW.INPUT_3_1_1[2] = ((rtDW.INPUT_3_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_j[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_j[1]) * 1000.0;
  rtDW.INPUT_3_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_3_1_1' */

  /* SimscapeInputBlock: '<S108>/INPUT_9_1_1' incorporates:
   *  Constant: '<Root>/base_qx'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_9_1_1_discrete[1] = 0.0;
  }

  first_output = false;
  if (rtDW.INPUT_9_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_9_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_h[0] = rtDW.INPUT_9_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_h[1] = 0.0;
  }

  rtDW.INPUT_9_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_h[0];
  rtDW.INPUT_9_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_h[1];
  rtDW.INPUT_9_1_1[2] = ((rtDW.INPUT_9_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_h[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_h[1]) * 1000.0;
  rtDW.INPUT_9_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_9_1_1' */

  /* SimscapeInputBlock: '<S108>/INPUT_11_1_1' incorporates:
   *  Constant: '<Root>/base_qy'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_11_1_1_discrete[1] = 0.0;
  }

  first_output = false;
  if (rtDW.INPUT_11_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_11_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Con_la[0] = rtDW.INPUT_11_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Con_la[1] = 0.0;
  }

  rtDW.INPUT_11_1_1[0] = rtX.PlatformAssemSimulink_PS_Con_la[0];
  rtDW.INPUT_11_1_1[1] = rtX.PlatformAssemSimulink_PS_Con_la[1];
  rtDW.INPUT_11_1_1[2] = ((rtDW.INPUT_11_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Con_la[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Con_la[1]) * 1000.0;
  rtDW.INPUT_11_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_11_1_1' */

  /* SimscapeInputBlock: '<S108>/INPUT_10_1_1' incorporates:
   *  Constant: '<Root>/base_qz'
   */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_10_1_1_discrete[1] = 0.0;
  }

  first_output = false;
  if (rtDW.INPUT_10_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_10_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_m[0] = rtDW.INPUT_10_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_m[1] = 0.0;
  }

  rtDW.INPUT_10_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_m[0];
  rtDW.INPUT_10_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_m[1];
  rtDW.INPUT_10_1_1[2] = ((rtDW.INPUT_10_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_m[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_m[1]) * 1000.0;
  rtDW.INPUT_10_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_10_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* InitialCondition: '<Root>/IC' incorporates:
     *  Constant: '<Root>/angle1'
     */
    if (rtDW.IC_FirstOutputTime) {
      rtDW.IC_FirstOutputTime = false;
      rtDW.IC = 1.6580627893946132;
    } else {
      rtDW.IC = 1.8326;
    }

    /* End of InitialCondition: '<Root>/IC' */
  }

  /* SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_8_1_1_discrete[1] = rtDW.IC;
  }

  first_output = false;
  if (rtDW.INPUT_8_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_8_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_e[0] = rtDW.INPUT_8_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_e[1] = 0.0;
  }

  rtDW.INPUT_8_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_e[0];
  rtDW.INPUT_8_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_e[1];
  rtDW.INPUT_8_1_1[2] = ((rtDW.INPUT_8_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_e[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_e[1]) * 1000.0;
  rtDW.INPUT_8_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* InitialCondition: '<Root>/IC2' incorporates:
     *  Constant: '<Root>/angle3'
     */
    if (rtDW.IC2_FirstOutputTime) {
      rtDW.IC2_FirstOutputTime = false;
      rtDW.IC2 = 1.6580627893946132;
    } else {
      rtDW.IC2 = 1.8326;
    }

    /* End of InitialCondition: '<Root>/IC2' */
  }

  /* SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_2_1_1_discrete[1] = rtDW.IC2;
  }

  first_output = false;
  if (rtDW.INPUT_2_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_2_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_g[0] = rtDW.INPUT_2_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_g[1] = 0.0;
  }

  rtDW.INPUT_2_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_g[0];
  rtDW.INPUT_2_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_g[1];
  rtDW.INPUT_2_1_1[2] = ((rtDW.INPUT_2_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_g[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_g[1]) * 1000.0;
  rtDW.INPUT_2_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* InitialCondition: '<Root>/IC3' incorporates:
     *  Constant: '<Root>/angle4'
     */
    if (rtDW.IC3_FirstOutputTime) {
      rtDW.IC3_FirstOutputTime = false;
      rtDW.IC3 = -1.6580627893946132;
    } else {
      rtDW.IC3 = -1.8326;
    }

    /* End of InitialCondition: '<Root>/IC3' */
  }

  /* SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_5_1_1_discrete[1] = rtDW.IC3;
  }

  first_output = false;
  if (rtDW.INPUT_5_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_5_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_a[0] = rtDW.INPUT_5_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_a[1] = 0.0;
  }

  rtDW.INPUT_5_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_a[0];
  rtDW.INPUT_5_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_a[1];
  rtDW.INPUT_5_1_1[2] = ((rtDW.INPUT_5_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_a[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_a[1]) * 1000.0;
  rtDW.INPUT_5_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* InitialCondition: '<Root>/IC4' incorporates:
     *  Constant: '<Root>/angle5'
     */
    if (rtDW.IC4_FirstOutputTime) {
      rtDW.IC4_FirstOutputTime = false;
      rtDW.IC4 = 1.6580627893946132;
    } else {
      rtDW.IC4 = 1.8326;
    }

    /* End of InitialCondition: '<Root>/IC4' */
  }

  /* SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_6_1_1_discrete[1] = rtDW.IC4;
  }

  first_output = false;
  if (rtDW.INPUT_6_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_6_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Con_lk[0] = rtDW.INPUT_6_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Con_lk[1] = 0.0;
  }

  rtDW.INPUT_6_1_1[0] = rtX.PlatformAssemSimulink_PS_Con_lk[0];
  rtDW.INPUT_6_1_1[1] = rtX.PlatformAssemSimulink_PS_Con_lk[1];
  rtDW.INPUT_6_1_1[2] = ((rtDW.INPUT_6_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Con_lk[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Con_lk[1]) * 1000.0;
  rtDW.INPUT_6_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* InitialCondition: '<Root>/IC5' incorporates:
     *  Constant: '<Root>/angle6'
     */
    if (rtDW.IC5_FirstOutputTime) {
      rtDW.IC5_FirstOutputTime = false;
      rtDW.IC5 = -1.6580627893946132;
    } else {
      rtDW.IC5 = -1.8326;
    }

    /* End of InitialCondition: '<Root>/IC5' */
  }

  /* SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_7_1_1_discrete[1] = rtDW.IC5;
  }

  first_output = false;
  if (rtDW.INPUT_7_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_7_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_o[0] = rtDW.INPUT_7_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_o[1] = 0.0;
  }

  rtDW.INPUT_7_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_o[0];
  rtDW.INPUT_7_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_o[1];
  rtDW.INPUT_7_1_1[2] = ((rtDW.INPUT_7_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_o[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_o[1]) * 1000.0;
  rtDW.INPUT_7_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    /* InitialCondition: '<Root>/IC1' incorporates:
     *  Constant: '<Root>/angle2'
     */
    if (rtDW.IC1_FirstOutputTime) {
      rtDW.IC1_FirstOutputTime = false;
      rtDW.IC1 = -1.6580627893946132;
    } else {
      rtDW.IC1 = -1.8326;
    }

    /* End of InitialCondition: '<Root>/IC1' */
  }

  /* SimscapeInputBlock: '<S108>/INPUT_1_1_1' */
  if (rtmIsMajorTimeStep(rtM)) {
    rtDW.INPUT_1_1_1_discrete[1] = rtDW.IC1;
  }

  first_output = false;
  if (rtDW.INPUT_1_1_1_discrete[0] == 0.0) {
    rtDW.INPUT_1_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    rtX.PlatformAssemSimulink_PS_Conv_i[0] = rtDW.INPUT_1_1_1_discrete[1];
    rtX.PlatformAssemSimulink_PS_Conv_i[1] = 0.0;
  }

  rtDW.INPUT_1_1_1[0] = rtX.PlatformAssemSimulink_PS_Conv_i[0];
  rtDW.INPUT_1_1_1[1] = rtX.PlatformAssemSimulink_PS_Conv_i[1];
  rtDW.INPUT_1_1_1[2] = ((rtDW.INPUT_1_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_i[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_i[1]) * 1000.0;
  rtDW.INPUT_1_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_1_1_1' */

  /* SimscapeExecutionBlock: '<S108>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S108>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &rtX.PlatformAssemRevolute13Rzq;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  tmp_4 = rtmIsMajorTimeStep(rtM);
  simulationData->mData->mIsMajorTimeStep = tmp_4;
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  first_output = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = first_output;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  tmp[0] = rtDW.INPUT_12_1_1[0];
  tmp[1] = rtDW.INPUT_12_1_1[1];
  tmp[2] = rtDW.INPUT_12_1_1[2];
  tmp[3] = rtDW.INPUT_12_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = rtDW.INPUT_4_1_1[0];
  tmp[5] = rtDW.INPUT_4_1_1[1];
  tmp[6] = rtDW.INPUT_4_1_1[2];
  tmp[7] = rtDW.INPUT_4_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = rtDW.INPUT_3_1_1[0];
  tmp[9] = rtDW.INPUT_3_1_1[1];
  tmp[10] = rtDW.INPUT_3_1_1[2];
  tmp[11] = rtDW.INPUT_3_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = rtDW.INPUT_9_1_1[0];
  tmp[13] = rtDW.INPUT_9_1_1[1];
  tmp[14] = rtDW.INPUT_9_1_1[2];
  tmp[15] = rtDW.INPUT_9_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = rtDW.INPUT_11_1_1[0];
  tmp[17] = rtDW.INPUT_11_1_1[1];
  tmp[18] = rtDW.INPUT_11_1_1[2];
  tmp[19] = rtDW.INPUT_11_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = rtDW.INPUT_10_1_1[0];
  tmp[21] = rtDW.INPUT_10_1_1[1];
  tmp[22] = rtDW.INPUT_10_1_1[2];
  tmp[23] = rtDW.INPUT_10_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = rtDW.INPUT_8_1_1[0];
  tmp[25] = rtDW.INPUT_8_1_1[1];
  tmp[26] = rtDW.INPUT_8_1_1[2];
  tmp[27] = rtDW.INPUT_8_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = rtDW.INPUT_2_1_1[0];
  tmp[29] = rtDW.INPUT_2_1_1[1];
  tmp[30] = rtDW.INPUT_2_1_1[2];
  tmp[31] = rtDW.INPUT_2_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = rtDW.INPUT_5_1_1[0];
  tmp[33] = rtDW.INPUT_5_1_1[1];
  tmp[34] = rtDW.INPUT_5_1_1[2];
  tmp[35] = rtDW.INPUT_5_1_1[3];
  tmp_0[9] = 36;
  tmp[36] = rtDW.INPUT_6_1_1[0];
  tmp[37] = rtDW.INPUT_6_1_1[1];
  tmp[38] = rtDW.INPUT_6_1_1[2];
  tmp[39] = rtDW.INPUT_6_1_1[3];
  tmp_0[10] = 40;
  tmp[40] = rtDW.INPUT_7_1_1[0];
  tmp[41] = rtDW.INPUT_7_1_1[1];
  tmp[42] = rtDW.INPUT_7_1_1[2];
  tmp[43] = rtDW.INPUT_7_1_1[3];
  tmp_0[11] = 44;
  tmp[44] = rtDW.INPUT_1_1_1[0];
  tmp[45] = rtDW.INPUT_1_1_1[1];
  tmp[46] = rtDW.INPUT_1_1_1[2];
  tmp[47] = rtDW.INPUT_1_1_1[3];
  tmp_0[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 73;
  simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (first_output) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S108>/STATE_1' */

  /* SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimulationData;
  time_0 = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  simulationData->mData->mIsMajorTimeStep = tmp_4;
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_3[0] = 0;
  tmp_2[0] = rtDW.INPUT_12_1_1[0];
  tmp_2[1] = rtDW.INPUT_12_1_1[1];
  tmp_2[2] = rtDW.INPUT_12_1_1[2];
  tmp_2[3] = rtDW.INPUT_12_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = rtDW.INPUT_4_1_1[0];
  tmp_2[5] = rtDW.INPUT_4_1_1[1];
  tmp_2[6] = rtDW.INPUT_4_1_1[2];
  tmp_2[7] = rtDW.INPUT_4_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = rtDW.INPUT_3_1_1[0];
  tmp_2[9] = rtDW.INPUT_3_1_1[1];
  tmp_2[10] = rtDW.INPUT_3_1_1[2];
  tmp_2[11] = rtDW.INPUT_3_1_1[3];
  tmp_3[3] = 12;
  tmp_2[12] = rtDW.INPUT_9_1_1[0];
  tmp_2[13] = rtDW.INPUT_9_1_1[1];
  tmp_2[14] = rtDW.INPUT_9_1_1[2];
  tmp_2[15] = rtDW.INPUT_9_1_1[3];
  tmp_3[4] = 16;
  tmp_2[16] = rtDW.INPUT_11_1_1[0];
  tmp_2[17] = rtDW.INPUT_11_1_1[1];
  tmp_2[18] = rtDW.INPUT_11_1_1[2];
  tmp_2[19] = rtDW.INPUT_11_1_1[3];
  tmp_3[5] = 20;
  tmp_2[20] = rtDW.INPUT_10_1_1[0];
  tmp_2[21] = rtDW.INPUT_10_1_1[1];
  tmp_2[22] = rtDW.INPUT_10_1_1[2];
  tmp_2[23] = rtDW.INPUT_10_1_1[3];
  tmp_3[6] = 24;
  tmp_2[24] = rtDW.INPUT_8_1_1[0];
  tmp_2[25] = rtDW.INPUT_8_1_1[1];
  tmp_2[26] = rtDW.INPUT_8_1_1[2];
  tmp_2[27] = rtDW.INPUT_8_1_1[3];
  tmp_3[7] = 28;
  tmp_2[28] = rtDW.INPUT_2_1_1[0];
  tmp_2[29] = rtDW.INPUT_2_1_1[1];
  tmp_2[30] = rtDW.INPUT_2_1_1[2];
  tmp_2[31] = rtDW.INPUT_2_1_1[3];
  tmp_3[8] = 32;
  tmp_2[32] = rtDW.INPUT_5_1_1[0];
  tmp_2[33] = rtDW.INPUT_5_1_1[1];
  tmp_2[34] = rtDW.INPUT_5_1_1[2];
  tmp_2[35] = rtDW.INPUT_5_1_1[3];
  tmp_3[9] = 36;
  tmp_2[36] = rtDW.INPUT_6_1_1[0];
  tmp_2[37] = rtDW.INPUT_6_1_1[1];
  tmp_2[38] = rtDW.INPUT_6_1_1[2];
  tmp_2[39] = rtDW.INPUT_6_1_1[3];
  tmp_3[10] = 40;
  tmp_2[40] = rtDW.INPUT_7_1_1[0];
  tmp_2[41] = rtDW.INPUT_7_1_1[1];
  tmp_2[42] = rtDW.INPUT_7_1_1[2];
  tmp_2[43] = rtDW.INPUT_7_1_1[3];
  tmp_3[11] = 44;
  tmp_2[44] = rtDW.INPUT_1_1_1[0];
  tmp_2[45] = rtDW.INPUT_1_1_1[1];
  tmp_2[46] = rtDW.INPUT_1_1_1[2];
  tmp_2[47] = rtDW.INPUT_1_1_1[3];
  tmp_3[12] = 48;
  memcpy(&tmp_2[48], &rtDW.STATE_1[0], 73U * sizeof(real_T));
  tmp_3[13] = 121;
  simulationData->mData->mInputValues.mN = 121;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 14;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 23;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
    NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
  if (tmp_1 != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (first_output) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      rtM->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void PlatformAssem_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[48];
  int_T tmp_1[13];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  XDot *_rtXdot;
  _rtXdot = ((XDot *) rtM->derivs);

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_12_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conver[0] =
    rtX.PlatformAssemSimulink_PS_Conver[1];
  _rtXdot->PlatformAssemSimulink_PS_Conver[1] = ((rtDW.INPUT_12_1_1_discrete[1]
    - rtX.PlatformAssemSimulink_PS_Conver[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conver[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_4_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_l[0] =
    rtX.PlatformAssemSimulink_PS_Conv_l[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_l[1] = ((rtDW.INPUT_4_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_l[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_l[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_3_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_j[0] =
    rtX.PlatformAssemSimulink_PS_Conv_j[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_j[1] = ((rtDW.INPUT_3_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_j[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_j[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_9_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_h[0] =
    rtX.PlatformAssemSimulink_PS_Conv_h[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_h[1] = ((rtDW.INPUT_9_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_h[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_h[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_11_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Con_la[0] =
    rtX.PlatformAssemSimulink_PS_Con_la[1];
  _rtXdot->PlatformAssemSimulink_PS_Con_la[1] = ((rtDW.INPUT_11_1_1_discrete[1]
    - rtX.PlatformAssemSimulink_PS_Con_la[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Con_la[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_10_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_m[0] =
    rtX.PlatformAssemSimulink_PS_Conv_m[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_m[1] = ((rtDW.INPUT_10_1_1_discrete[1]
    - rtX.PlatformAssemSimulink_PS_Conv_m[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_m[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_e[0] =
    rtX.PlatformAssemSimulink_PS_Conv_e[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_e[1] = ((rtDW.INPUT_8_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_e[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_e[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_g[0] =
    rtX.PlatformAssemSimulink_PS_Conv_g[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_g[1] = ((rtDW.INPUT_2_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_g[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_g[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_a[0] =
    rtX.PlatformAssemSimulink_PS_Conv_a[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_a[1] = ((rtDW.INPUT_5_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_a[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_a[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Con_lk[0] =
    rtX.PlatformAssemSimulink_PS_Con_lk[1];
  _rtXdot->PlatformAssemSimulink_PS_Con_lk[1] = ((rtDW.INPUT_6_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Con_lk[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Con_lk[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_o[0] =
    rtX.PlatformAssemSimulink_PS_Conv_o[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_o[1] = ((rtDW.INPUT_7_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_o[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_o[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_1_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_i[0] =
    rtX.PlatformAssemSimulink_PS_Conv_i[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_i[1] = ((rtDW.INPUT_1_1_1_discrete[1] -
    rtX.PlatformAssemSimulink_PS_Conv_i[0]) * 1000.0 - 2.0 *
    rtX.PlatformAssemSimulink_PS_Conv_i[1]) * 1000.0;

  /* Derivatives for SimscapeExecutionBlock: '<S108>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &rtX.PlatformAssemRevolute13Rzq;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = rtDW.INPUT_12_1_1[0];
  tmp_0[1] = rtDW.INPUT_12_1_1[1];
  tmp_0[2] = rtDW.INPUT_12_1_1[2];
  tmp_0[3] = rtDW.INPUT_12_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = rtDW.INPUT_4_1_1[0];
  tmp_0[5] = rtDW.INPUT_4_1_1[1];
  tmp_0[6] = rtDW.INPUT_4_1_1[2];
  tmp_0[7] = rtDW.INPUT_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = rtDW.INPUT_3_1_1[0];
  tmp_0[9] = rtDW.INPUT_3_1_1[1];
  tmp_0[10] = rtDW.INPUT_3_1_1[2];
  tmp_0[11] = rtDW.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = rtDW.INPUT_9_1_1[0];
  tmp_0[13] = rtDW.INPUT_9_1_1[1];
  tmp_0[14] = rtDW.INPUT_9_1_1[2];
  tmp_0[15] = rtDW.INPUT_9_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = rtDW.INPUT_11_1_1[0];
  tmp_0[17] = rtDW.INPUT_11_1_1[1];
  tmp_0[18] = rtDW.INPUT_11_1_1[2];
  tmp_0[19] = rtDW.INPUT_11_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = rtDW.INPUT_10_1_1[0];
  tmp_0[21] = rtDW.INPUT_10_1_1[1];
  tmp_0[22] = rtDW.INPUT_10_1_1[2];
  tmp_0[23] = rtDW.INPUT_10_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = rtDW.INPUT_8_1_1[0];
  tmp_0[25] = rtDW.INPUT_8_1_1[1];
  tmp_0[26] = rtDW.INPUT_8_1_1[2];
  tmp_0[27] = rtDW.INPUT_8_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = rtDW.INPUT_2_1_1[0];
  tmp_0[29] = rtDW.INPUT_2_1_1[1];
  tmp_0[30] = rtDW.INPUT_2_1_1[2];
  tmp_0[31] = rtDW.INPUT_2_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = rtDW.INPUT_5_1_1[0];
  tmp_0[33] = rtDW.INPUT_5_1_1[1];
  tmp_0[34] = rtDW.INPUT_5_1_1[2];
  tmp_0[35] = rtDW.INPUT_5_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = rtDW.INPUT_6_1_1[0];
  tmp_0[37] = rtDW.INPUT_6_1_1[1];
  tmp_0[38] = rtDW.INPUT_6_1_1[2];
  tmp_0[39] = rtDW.INPUT_6_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = rtDW.INPUT_7_1_1[0];
  tmp_0[41] = rtDW.INPUT_7_1_1[1];
  tmp_0[42] = rtDW.INPUT_7_1_1[2];
  tmp_0[43] = rtDW.INPUT_7_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = rtDW.INPUT_1_1_1[0];
  tmp_0[45] = rtDW.INPUT_1_1_1[1];
  tmp_0[46] = rtDW.INPUT_1_1_1[2];
  tmp_0[47] = rtDW.INPUT_1_1_1[3];
  tmp_1[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 73;
  simulationData->mData->mDx.mX = (real_T *)&_rtXdot->PlatformAssemRevolute13Rzq;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S108>/STATE_1' */
}

/* Model initialize function */
void PlatformAssem_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtM->intgData.deltaY= rtM->OdeDeltaY;
  rtM->intgData.f[0] = rtM->odeF[0];
  rtM->intgData.f[1] = rtM->odeF[1];
  rtM->intgData.f[2] = rtM->odeF[2];
  rtM->intgData.f[3] = rtM->odeF[3];
  rtM->intgData.f[4] = rtM->odeF[4];
  rtM->intgData.f[5] = rtM->odeF[5];
  rtM->intgData.f[6] = rtM->odeF[6];
  rtM->intgData.f[7] = rtM->odeF[7];
  rtM->intgData.f[8] = rtM->odeF[8];
  rtM->intgData.f[9] = rtM->odeF[9];
  rtM->intgData.f[10] = rtM->odeF[10];
  rtM->intgData.f[11] = rtM->odeF[11];
  rtM->intgData.f[12] = rtM->odeF[12];
  rtM->intgData.x0 = rtM->odeX0;
  rtM->contStates = ((X *) &rtX);
  rtsiSetSolverData(&rtM->solverInfo, (void *)&rtM->intgData);
  rtsiSetSolverName(&rtM->solverInfo,"ode8");
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 0.01;

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeModelParameters modelParameters;
    real_T tmp_1;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_2;
    char *msg;
    NeslSimulationData *simulationData;
    real_T time;
    NeModelParameters modelParameters_0;
    real_T time_0;
    NeParameterBundle expl_temp;
    boolean_T tmp_3;

    /* Start for InitialCondition: '<Root>/IC' */
    rtDW.IC_FirstOutputTime = true;

    /* Start for InitialCondition: '<Root>/IC2' */
    rtDW.IC2_FirstOutputTime = true;

    /* Start for InitialCondition: '<Root>/IC3' */
    rtDW.IC3_FirstOutputTime = true;

    /* Start for InitialCondition: '<Root>/IC4' */
    rtDW.IC4_FirstOutputTime = true;

    /* Start for InitialCondition: '<Root>/IC5' */
    rtDW.IC5_FirstOutputTime = true;

    /* Start for InitialCondition: '<Root>/IC1' */
    rtDW.IC1_FirstOutputTime = true;

    /* Start for SimscapeExecutionBlock: '<S108>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S108>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp_0) {
      PlatformAssem_f0ca4364_1_gateway();
      tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 0, 0);
      rtDW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.STATE_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagnosticManager = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters.mSolverTolerance = 0.01;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mFixedStepSize = 0.01;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 4.41682156E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 0.01;
    modelParameters.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      &modelParameters, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    expl_temp.mRealParameters.mN = 0;
    expl_temp.mRealParameters.mX = NULL;
    expl_temp.mLogicalParameters.mN = 0;
    expl_temp.mLogicalParameters.mX = NULL;
    expl_temp.mIntegerParameters.mN = 0;
    expl_temp.mIntegerParameters.mX = NULL;
    expl_temp.mIndexParameters.mN = 0;
    expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)rtDW.STATE_1_Simulator, expl_temp);
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimulationData;
    time = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 73;
    simulationData->mData->mContStates.mX = (real_T *)
      &rtX.PlatformAssemRevolute13Rzq;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_3 = rtmIsMajorTimeStep(rtM);
    simulationData->mData->mIsMajorTimeStep = tmp_3;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S108>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 2, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      PlatformAssem_f0ca4364_1_gateway();
      tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 2, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_0_DiagnosticManager = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_0.mSolverTolerance = 0.01;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mFixedStepSize = 0.01;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 4.41682156E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 0.01;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      rtDW.OUTPUT_1_0_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      &modelParameters_0, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimulationData;
    time_0 = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp_3;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      rtDW.OUTPUT_1_0_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* InitializeConditions for SimscapeExecutionBlock: '<S108>/STATE_1' */
    tmp_0 = false;
    if (tmp_0) {
      tmp_2 = strcmp("ode8", rtsiGetSolverName(&rtM->solverInfo));
      if (tmp_2 != 0) {
        msg = solver_mismatch_message("ode8", rtsiGetSolverName(&rtM->solverInfo));
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S108>/STATE_1' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
