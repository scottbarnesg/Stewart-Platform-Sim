/*
 * PlatformAssem.c
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

#include "PlatformAssem.h"
#include "PlatformAssem_private.h"

/* Block signals (auto storage) */
B_PlatformAssem_T PlatformAssem_B;

/* Continuous states */
X_PlatformAssem_T PlatformAssem_X;

/* Block states (auto storage) */
DW_PlatformAssem_T PlatformAssem_DW;

/* Real-time model */
RT_MODEL_PlatformAssem_T PlatformAssem_M_;
RT_MODEL_PlatformAssem_T *const PlatformAssem_M = &PlatformAssem_M_;

/* Projection for root system: '<Root>' */
void PlatformAssem_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[24];
  int_T tmp_1[7];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;

  /* Projection for SimscapeExecutionBlock: '<S84>/STATE_1' */
  simulationData = (NeslSimulationData *)PlatformAssem_DW.STATE_1_SimulationData;
  time = PlatformAssem_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &PlatformAssem_X.PlatformAssemLinkage_1RevoluteR;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(PlatformAssem_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&PlatformAssem_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp_0[1] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp_0[2] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp_0[3] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp_0[5] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp_0[6] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp_0[7] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp_0[9] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp_0[10] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp_0[11] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp_0[13] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp_0[14] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp_0[15] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp_0[17] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp_0[18] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp_0[19] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp_0[21] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp_0[22] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp_0[23] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_1[6] = 24;
  simulationData->mData->mInputValues.mN = 24;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 7;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  diagnosticManager = (NeuDiagnosticManager *)
    PlatformAssem_DW.STATE_1_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    PlatformAssem_DW.STATE_1_Simulator, NESL_SIM_PROJECTION, simulationData,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PlatformAssem_M, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S84>/STATE_1' */
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 85;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  PlatformAssem_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  PlatformAssem_step();
  PlatformAssem_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  PlatformAssem_step();
  PlatformAssem_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  PlatformAssem_step();
  PlatformAssem_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void PlatformAssem_step(void)
{
  /* local block i/o variables */
  real_T rtb_TmpSignalConversionAtToWork[6];
  boolean_T first_output;
  NeslSimulationData *simulationData;
  real_T time;
  real_T tmp[24];
  int_T tmp_0[7];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_1;
  char *msg;
  real_T time_0;
  real_T tmp_2[97];
  int_T tmp_3[8];
  boolean_T tmp_4;
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* set solver stop time */
    if (!(PlatformAssem_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&PlatformAssem_M->solverInfo,
                            ((PlatformAssem_M->Timing.clockTickH0 + 1) *
        PlatformAssem_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&PlatformAssem_M->solverInfo,
                            ((PlatformAssem_M->Timing.clockTick0 + 1) *
        PlatformAssem_M->Timing.stepSize0 + PlatformAssem_M->Timing.clockTickH0 *
        PlatformAssem_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(PlatformAssem_M)) {
    PlatformAssem_M->Timing.t[0] = rtsiGetT(&PlatformAssem_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle1' */
    PlatformAssem_B.angle1 = PlatformAssem_P.angle1_Value;
  }

  /* SimscapeInputBlock: '<S84>/INPUT_6_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_6_1_1_discrete[1] = PlatformAssem_B.angle1;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_6_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_6_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0] =
      PlatformAssem_DW.INPUT_6_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1] = 0.0;
  }

  PlatformAssem_B.INPUT_6_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0];
  PlatformAssem_B.INPUT_6_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1];
  PlatformAssem_B.INPUT_6_1_1[2] = ((PlatformAssem_DW.INPUT_6_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1]) * 1000.0;
  PlatformAssem_B.INPUT_6_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S84>/INPUT_6_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle2' */
    PlatformAssem_B.angle2 = PlatformAssem_P.angle2_Value;
  }

  /* SimscapeInputBlock: '<S84>/INPUT_1_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_1_1_1_discrete[1] = PlatformAssem_B.angle2;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_1_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_1_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0] =
      PlatformAssem_DW.INPUT_1_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1] = 0.0;
  }

  PlatformAssem_B.INPUT_1_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0];
  PlatformAssem_B.INPUT_1_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1];
  PlatformAssem_B.INPUT_1_1_1[2] = ((PlatformAssem_DW.INPUT_1_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1]) * 1000.0;
  PlatformAssem_B.INPUT_1_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S84>/INPUT_1_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle6' */
    PlatformAssem_B.angle6 = PlatformAssem_P.angle6_Value;
  }

  /* SimscapeInputBlock: '<S84>/INPUT_5_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_5_1_1_discrete[1] = PlatformAssem_B.angle6;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_5_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_5_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[0] =
      PlatformAssem_DW.INPUT_5_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1] = 0.0;
  }

  PlatformAssem_B.INPUT_5_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[0];
  PlatformAssem_B.INPUT_5_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1];
  PlatformAssem_B.INPUT_5_1_1[2] = ((PlatformAssem_DW.INPUT_5_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1]) * 1000.0;
  PlatformAssem_B.INPUT_5_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S84>/INPUT_5_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle4' */
    PlatformAssem_B.angle4 = PlatformAssem_P.angle4_Value;
  }

  /* SimscapeInputBlock: '<S84>/INPUT_3_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_3_1_1_discrete[1] = PlatformAssem_B.angle4;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_3_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_3_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0] =
      PlatformAssem_DW.INPUT_3_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1] = 0.0;
  }

  PlatformAssem_B.INPUT_3_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0];
  PlatformAssem_B.INPUT_3_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1];
  PlatformAssem_B.INPUT_3_1_1[2] = ((PlatformAssem_DW.INPUT_3_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1]) * 1000.0;
  PlatformAssem_B.INPUT_3_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S84>/INPUT_3_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle3' */
    PlatformAssem_B.angle3 = PlatformAssem_P.angle3_Value;
  }

  /* SimscapeInputBlock: '<S84>/INPUT_2_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_2_1_1_discrete[1] = PlatformAssem_B.angle3;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_2_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_2_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0] =
      PlatformAssem_DW.INPUT_2_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1] = 0.0;
  }

  PlatformAssem_B.INPUT_2_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0];
  PlatformAssem_B.INPUT_2_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1];
  PlatformAssem_B.INPUT_2_1_1[2] = ((PlatformAssem_DW.INPUT_2_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1]) * 1000.0;
  PlatformAssem_B.INPUT_2_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S84>/INPUT_2_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle5' */
    PlatformAssem_B.angle5 = PlatformAssem_P.angle5_Value;
  }

  /* SimscapeInputBlock: '<S84>/INPUT_4_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_4_1_1_discrete[1] = PlatformAssem_B.angle5;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_4_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_4_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[0] =
      PlatformAssem_DW.INPUT_4_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[1] = 0.0;
  }

  PlatformAssem_B.INPUT_4_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[0];
  PlatformAssem_B.INPUT_4_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[1];
  PlatformAssem_B.INPUT_4_1_1[2] = ((PlatformAssem_DW.INPUT_4_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[1]) * 1000.0;
  PlatformAssem_B.INPUT_4_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S84>/INPUT_4_1_1' */

  /* SimscapeExecutionBlock: '<S84>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S84>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)PlatformAssem_DW.STATE_1_SimulationData;
  time = PlatformAssem_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &PlatformAssem_X.PlatformAssemLinkage_1RevoluteR;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  first_output = false;
  simulationData->mData->mFoundZcEvents = first_output;
  tmp_4 = rtmIsMajorTimeStep(PlatformAssem_M);
  simulationData->mData->mIsMajorTimeStep = tmp_4;
  first_output = false;
  simulationData->mData->mIsSolverAssertCheck = first_output;
  simulationData->mData->mIsSolverCheckingCIC = false;
  first_output = rtsiIsSolverComputingJacobian(&PlatformAssem_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = first_output;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_0[0] = 0;
  tmp[0] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp[1] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp[2] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp[3] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp[5] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp[6] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp[7] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp[9] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp[10] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp[11] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp[13] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp[14] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp[15] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp[17] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp[18] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp[19] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp[21] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp[22] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp[23] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_0[6] = 24;
  simulationData->mData->mInputValues.mN = 24;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 7;
  simulationData->mData->mInputOffsets.mX = &tmp_0[0];
  simulationData->mData->mOutputs.mN = 73;
  simulationData->mData->mOutputs.mX = &PlatformAssem_B.STATE_1[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  diagnosticManager = (NeuDiagnosticManager *)
    PlatformAssem_DW.STATE_1_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)
    PlatformAssem_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (tmp_1 != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
    if (first_output) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PlatformAssem_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S84>/STATE_1' */

  /* SimscapeExecutionBlock: '<S84>/OUTPUT_1_0' */
  simulationData = (NeslSimulationData *)
    PlatformAssem_DW.OUTPUT_1_0_SimulationData;
  time_0 = PlatformAssem_M->Timing.t[0];
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
  tmp_2[0] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp_2[1] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp_2[2] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp_2[3] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp_2[5] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp_2[6] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp_2[7] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp_2[9] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp_2[10] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp_2[11] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_3[3] = 12;
  tmp_2[12] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp_2[13] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp_2[14] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp_2[15] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_3[4] = 16;
  tmp_2[16] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp_2[17] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp_2[18] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp_2[19] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_3[5] = 20;
  tmp_2[20] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp_2[21] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp_2[22] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp_2[23] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_3[6] = 24;
  memcpy(&tmp_2[24], &PlatformAssem_B.STATE_1[0], 73U * sizeof(real_T));
  tmp_3[7] = 97;
  simulationData->mData->mInputValues.mN = 97;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 8;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 13;
  simulationData->mData->mOutputs.mX = &PlatformAssem_B.OUTPUT_1_0[0];
  simulationData->mData->mSampleHits.mN = 0;
  simulationData->mData->mSampleHits.mX = NULL;
  simulationData->mData->mIsFundamentalSampleHit = false;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  diagnosticManager = (NeuDiagnosticManager *)
    PlatformAssem_DW.OUTPUT_1_0_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)
    PlatformAssem_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (tmp_1 != 0) {
    first_output = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
    if (first_output) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PlatformAssem_M, msg);
    }
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* SignalConversion: '<Root>/TmpSignal ConversionAtTo Workspace1Inport1' */
    rtb_TmpSignalConversionAtToWork[0] = PlatformAssem_B.OUTPUT_1_0[0];
    rtb_TmpSignalConversionAtToWork[1] = PlatformAssem_B.OUTPUT_1_0[1];
    rtb_TmpSignalConversionAtToWork[2] = PlatformAssem_B.OUTPUT_1_0[4];
    rtb_TmpSignalConversionAtToWork[3] = PlatformAssem_B.OUTPUT_1_0[3];
    rtb_TmpSignalConversionAtToWork[4] = PlatformAssem_B.OUTPUT_1_0[5];
    rtb_TmpSignalConversionAtToWork[5] = PlatformAssem_B.OUTPUT_1_0[2];

    /* ToWorkspace: '<Root>/To Workspace1' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.1);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace1_PWORK.LoggedData,
                              &locTime, &rtb_TmpSignalConversionAtToWork[0]);
      }
    }

    /* ToWorkspace: '<Root>/To Workspace2' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.1);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace2_PWORK.LoggedData,
                              &locTime, &PlatformAssem_B.OUTPUT_1_0[10]);
      }
    }

    /* ToWorkspace: '<Root>/To Workspace' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.1);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace_PWORK.LoggedData,
                              &locTime, &PlatformAssem_B.OUTPUT_1_0[6]);
      }
    }
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars(PlatformAssem_M->rtwLogInfo, (PlatformAssem_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(PlatformAssem_M)!=-1) &&
          !((rtmGetTFinal(PlatformAssem_M)-(((PlatformAssem_M->Timing.clockTick1
               +PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) * 0.1)) >
            (((PlatformAssem_M->Timing.clockTick1+
               PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) * 0.1) *
            (DBL_EPSILON))) {
        rtmSetErrorStatus(PlatformAssem_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&PlatformAssem_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++PlatformAssem_M->Timing.clockTick0)) {
      ++PlatformAssem_M->Timing.clockTickH0;
    }

    PlatformAssem_M->Timing.t[0] = rtsiGetSolverStopTime
      (&PlatformAssem_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.1s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.1, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      PlatformAssem_M->Timing.clockTick1++;
      if (!PlatformAssem_M->Timing.clockTick1) {
        PlatformAssem_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void PlatformAssem_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  real_T tmp_0[24];
  int_T tmp_1[7];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  XDot_PlatformAssem_T *_rtXdot;
  _rtXdot = ((XDot_PlatformAssem_T *) PlatformAssem_M->derivs);

  /* Derivatives for SimscapeInputBlock: '<S84>/INPUT_6_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conver[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1];
  _rtXdot->PlatformAssemSimulink_PS_Conver[1] =
    ((PlatformAssem_DW.INPUT_6_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S84>/INPUT_1_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_j[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_j[1] =
    ((PlatformAssem_DW.INPUT_1_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S84>/INPUT_5_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_a[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_a[1] =
    ((PlatformAssem_DW.INPUT_5_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S84>/INPUT_3_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_i[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_i[1] =
    ((PlatformAssem_DW.INPUT_3_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S84>/INPUT_2_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_o[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_o[1] =
    ((PlatformAssem_DW.INPUT_2_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S84>/INPUT_4_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Con_jh[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[1];
  _rtXdot->PlatformAssemSimulink_PS_Con_jh[1] =
    ((PlatformAssem_DW.INPUT_4_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Con_jh[1]) * 1000.0;

  /* Derivatives for SimscapeExecutionBlock: '<S84>/STATE_1' */
  simulationData = (NeslSimulationData *)PlatformAssem_DW.STATE_1_SimulationData;
  time = PlatformAssem_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &PlatformAssem_X.PlatformAssemLinkage_1RevoluteR;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = NULL;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = NULL;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(PlatformAssem_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&PlatformAssem_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  tmp_1[0] = 0;
  tmp_0[0] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp_0[1] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp_0[2] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp_0[3] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp_0[5] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp_0[6] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp_0[7] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp_0[9] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp_0[10] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp_0[11] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp_0[13] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp_0[14] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp_0[15] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp_0[17] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp_0[18] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp_0[19] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp_0[21] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp_0[22] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp_0[23] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_1[6] = 24;
  simulationData->mData->mInputValues.mN = 24;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 7;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 73;
  simulationData->mData->mDx.mX = (real_T *)
    &_rtXdot->PlatformAssemLinkage_1RevoluteR;
  diagnosticManager = (NeuDiagnosticManager *)
    PlatformAssem_DW.STATE_1_DiagnosticManager;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    PlatformAssem_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES, simulationData,
    diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PlatformAssem_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S84>/STATE_1' */
}

/* Model initialize function */
void PlatformAssem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PlatformAssem_M, 0,
                sizeof(RT_MODEL_PlatformAssem_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&PlatformAssem_M->solverInfo,
                          &PlatformAssem_M->Timing.simTimeStep);
    rtsiSetTPtr(&PlatformAssem_M->solverInfo, &rtmGetTPtr(PlatformAssem_M));
    rtsiSetStepSizePtr(&PlatformAssem_M->solverInfo,
                       &PlatformAssem_M->Timing.stepSize0);
    rtsiSetdXPtr(&PlatformAssem_M->solverInfo, &PlatformAssem_M->derivs);
    rtsiSetContStatesPtr(&PlatformAssem_M->solverInfo, (real_T **)
                         &PlatformAssem_M->contStates);
    rtsiSetNumContStatesPtr(&PlatformAssem_M->solverInfo,
      &PlatformAssem_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&PlatformAssem_M->solverInfo,
      &PlatformAssem_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&PlatformAssem_M->solverInfo,
      &PlatformAssem_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&PlatformAssem_M->solverInfo,
      &PlatformAssem_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&PlatformAssem_M->solverInfo, (&rtmGetErrorStatus
      (PlatformAssem_M)));
    rtsiSetRTModelPtr(&PlatformAssem_M->solverInfo, PlatformAssem_M);
  }

  rtsiSetSimTimeStep(&PlatformAssem_M->solverInfo, MAJOR_TIME_STEP);
  PlatformAssem_M->intgData.y = PlatformAssem_M->odeY;
  PlatformAssem_M->intgData.f[0] = PlatformAssem_M->odeF[0];
  PlatformAssem_M->intgData.f[1] = PlatformAssem_M->odeF[1];
  PlatformAssem_M->intgData.f[2] = PlatformAssem_M->odeF[2];
  PlatformAssem_M->contStates = ((X_PlatformAssem_T *) &PlatformAssem_X);
  rtsiSetSolverData(&PlatformAssem_M->solverInfo, (void *)
                    &PlatformAssem_M->intgData);
  rtsiSetSolverName(&PlatformAssem_M->solverInfo,"ode3");
  rtmSetTPtr(PlatformAssem_M, &PlatformAssem_M->Timing.tArray[0]);
  rtmSetTFinal(PlatformAssem_M, 5.0);
  PlatformAssem_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    PlatformAssem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(PlatformAssem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(PlatformAssem_M->rtwLogInfo, (NULL));
    rtliSetLogT(PlatformAssem_M->rtwLogInfo, "tout");
    rtliSetLogX(PlatformAssem_M->rtwLogInfo, "");
    rtliSetLogXFinal(PlatformAssem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(PlatformAssem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(PlatformAssem_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(PlatformAssem_M->rtwLogInfo, 0);
    rtliSetLogDecimation(PlatformAssem_M->rtwLogInfo, 1);
    rtliSetLogY(PlatformAssem_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(PlatformAssem_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(PlatformAssem_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &PlatformAssem_B), 0,
                sizeof(B_PlatformAssem_T));

  /* states (continuous) */
  {
    (void) memset((void *)&PlatformAssem_X, 0,
                  sizeof(X_PlatformAssem_T));
  }

  /* states (dwork) */
  (void) memset((void *)&PlatformAssem_DW, 0,
                sizeof(DW_PlatformAssem_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(PlatformAssem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(PlatformAssem_M), PlatformAssem_M->Timing.stepSize0,
    (&rtmGetErrorStatus(PlatformAssem_M)));

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

    /* Start for SimscapeExecutionBlock: '<S84>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S84>/OUTPUT_1_0'
     */
    tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 0, 0);
    PlatformAssem_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(PlatformAssem_DW.STATE_1_Simulator);
    if (tmp_0) {
      PlatformAssem_f0ca4364_1_gateway();
      tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 0, 0);
      PlatformAssem_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    PlatformAssem_DW.STATE_1_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    PlatformAssem_DW.STATE_1_DiagnosticManager = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 4.39243418E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 0.1;
    modelParameters.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      PlatformAssem_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      PlatformAssem_DW.STATE_1_Simulator, &modelParameters, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PlatformAssem_M, msg);
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
    nesl_simulator_set_rtps((NeslSimulator *)PlatformAssem_DW.STATE_1_Simulator,
      expl_temp);
    simulationData = (NeslSimulationData *)
      PlatformAssem_DW.STATE_1_SimulationData;
    time = PlatformAssem_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 73;
    simulationData->mData->mContStates.mX = (real_T *)
      &PlatformAssem_X.PlatformAssemLinkage_1RevoluteR;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = NULL;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = NULL;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_3 = rtmIsMajorTimeStep(PlatformAssem_M);
    simulationData->mData->mIsMajorTimeStep = tmp_3;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&PlatformAssem_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      PlatformAssem_DW.STATE_1_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      PlatformAssem_DW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PlatformAssem_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S84>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S84>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 2, 0);
    PlatformAssem_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(PlatformAssem_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      PlatformAssem_f0ca4364_1_gateway();
      tmp = nesl_lease_simulator("PlatformAssem/Solver Configuration_1", 2, 0);
      PlatformAssem_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    PlatformAssem_DW.OUTPUT_1_0_SimulationData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    PlatformAssem_DW.OUTPUT_1_0_DiagnosticManager = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 4.39243418E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 0.1;
    modelParameters_0.mFixedStepSize = tmp_1;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      PlatformAssem_DW.OUTPUT_1_0_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      PlatformAssem_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PlatformAssem_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)
      PlatformAssem_DW.OUTPUT_1_0_SimulationData;
    time_0 = PlatformAssem_M->Timing.t[0];
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
      PlatformAssem_DW.OUTPUT_1_0_DiagnosticManager;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      PlatformAssem_DW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(PlatformAssem_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PlatformAssem_M, msg);
      }
    }

    /* Start for ToWorkspace: '<Root>/To Workspace1' */
    {
      static int_T rt_ToWksWidths[] = { 6 };

      static int_T rt_ToWksNumDimensions[] = { 1 };

      static int_T rt_ToWksDimensions[] = { 6 };

      static boolean_T rt_ToWksIsVarDims[] = { 0 };

      static void *rt_ToWksCurrSigDims[] = { (NULL) };

      static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

      static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

      static int_T rt_ToWksComplexSignals[] = { 0 };

      static int_T rt_ToWksFrameData[] = { 0 };

      static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
        (NULL)
      };

      static const char_T *rt_ToWksLabels[] = { "" };

      static RTWLogSignalInfo rt_ToWksSignalInfo = {
        1,
        rt_ToWksWidths,
        rt_ToWksNumDimensions,
        rt_ToWksDimensions,
        rt_ToWksIsVarDims,
        rt_ToWksCurrSigDims,
        rt_ToWksCurrSigDimsSize,
        rt_ToWksDataTypeIds,
        rt_ToWksComplexSignals,
        rt_ToWksFrameData,
        rt_ToWksLoggingPreprocessingFcnPtrs,

        { rt_ToWksLabels },
        (NULL),
        (NULL),
        (NULL),

        { (NULL) },

        { (NULL) },
        (NULL),
        (NULL)
      };

      static const char_T rt_ToWksBlockName[] = "PlatformAssem/To Workspace1";
      PlatformAssem_DW.ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
        PlatformAssem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(PlatformAssem_M),
        PlatformAssem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(PlatformAssem_M)),
        "motor_states",
        1,
        0,
        1,
        0.1,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace1_PWORK.LoggedData == (NULL))
        return;
    }

    /* Start for ToWorkspace: '<Root>/To Workspace2' */
    {
      static int_T rt_ToWksWidths[] = { 3 };

      static int_T rt_ToWksNumDimensions[] = { 1 };

      static int_T rt_ToWksDimensions[] = { 3 };

      static boolean_T rt_ToWksIsVarDims[] = { 0 };

      static void *rt_ToWksCurrSigDims[] = { (NULL) };

      static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

      static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

      static int_T rt_ToWksComplexSignals[] = { 0 };

      static int_T rt_ToWksFrameData[] = { 0 };

      static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
        (NULL)
      };

      static const char_T *rt_ToWksLabels[] = { "" };

      static RTWLogSignalInfo rt_ToWksSignalInfo = {
        1,
        rt_ToWksWidths,
        rt_ToWksNumDimensions,
        rt_ToWksDimensions,
        rt_ToWksIsVarDims,
        rt_ToWksCurrSigDims,
        rt_ToWksCurrSigDimsSize,
        rt_ToWksDataTypeIds,
        rt_ToWksComplexSignals,
        rt_ToWksFrameData,
        rt_ToWksLoggingPreprocessingFcnPtrs,

        { rt_ToWksLabels },
        (NULL),
        (NULL),
        (NULL),

        { (NULL) },

        { (NULL) },
        (NULL),
        (NULL)
      };

      static const char_T rt_ToWksBlockName[] = "PlatformAssem/To Workspace2";
      PlatformAssem_DW.ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
        PlatformAssem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(PlatformAssem_M),
        PlatformAssem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(PlatformAssem_M)),
        "platform_translation",
        1,
        0,
        1,
        0.1,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace2_PWORK.LoggedData == (NULL))
        return;
    }

    /* Start for ToWorkspace: '<Root>/To Workspace' */
    {
      static int_T rt_ToWksWidths[] = { 4 };

      static int_T rt_ToWksNumDimensions[] = { 1 };

      static int_T rt_ToWksDimensions[] = { 4 };

      static boolean_T rt_ToWksIsVarDims[] = { 0 };

      static void *rt_ToWksCurrSigDims[] = { (NULL) };

      static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

      static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

      static int_T rt_ToWksComplexSignals[] = { 0 };

      static int_T rt_ToWksFrameData[] = { 0 };

      static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
        (NULL)
      };

      static const char_T *rt_ToWksLabels[] = { "" };

      static RTWLogSignalInfo rt_ToWksSignalInfo = {
        1,
        rt_ToWksWidths,
        rt_ToWksNumDimensions,
        rt_ToWksDimensions,
        rt_ToWksIsVarDims,
        rt_ToWksCurrSigDims,
        rt_ToWksCurrSigDimsSize,
        rt_ToWksDataTypeIds,
        rt_ToWksComplexSignals,
        rt_ToWksFrameData,
        rt_ToWksLoggingPreprocessingFcnPtrs,

        { rt_ToWksLabels },
        (NULL),
        (NULL),
        (NULL),

        { (NULL) },

        { (NULL) },
        (NULL),
        (NULL)
      };

      static const char_T rt_ToWksBlockName[] = "PlatformAssem/To Workspace";
      PlatformAssem_DW.ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
        PlatformAssem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(PlatformAssem_M),
        PlatformAssem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(PlatformAssem_M)),
        "platform_orientation",
        1,
        0,
        1,
        0.1,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace_PWORK.LoggedData == (NULL))
        return;
    }
  }

  {
    boolean_T tmp;
    int_T tmp_0;
    char *tmp_1;

    /* InitializeConditions for SimscapeExecutionBlock: '<S84>/STATE_1' */
    tmp = false;
    if (tmp) {
      tmp_0 = strcmp("ode3", rtsiGetSolverName(&PlatformAssem_M->solverInfo));
      if (tmp_0 != 0) {
        tmp_1 = solver_mismatch_message("ode3", rtsiGetSolverName
          (&PlatformAssem_M->solverInfo));
        rtmSetErrorStatus(PlatformAssem_M, tmp_1);
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S84>/STATE_1' */
  }
}

/* Model terminate function */
void PlatformAssem_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S84>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    PlatformAssem_DW.STATE_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    PlatformAssem_DW.STATE_1_SimulationData);
  nesl_erase_simulator("PlatformAssem/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S84>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    PlatformAssem_DW.OUTPUT_1_0_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    PlatformAssem_DW.OUTPUT_1_0_SimulationData);
  nesl_erase_simulator("PlatformAssem/Solver Configuration_1");
}
