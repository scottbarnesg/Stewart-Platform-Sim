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
 * Model version              : 1.60
 * Simulink Coder version : 8.13 (R2017b) 24-Jul-2017
 * C source code generated on : Fri Mar  9 14:35:12 2018
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

/*
 * Time delay interpolation routine
 *
 * The linear interpolation is performed using the formula:
 *
 *          (t2 - tMinusDelay)         (tMinusDelay - t1)
 * u(t)  =  ----------------- * u1  +  ------------------- * u2
 *              (t2 - t1)                  (t2 - t1)
 */
real_T rt_TDelayInterpolate(
  real_T tMinusDelay,                  /* tMinusDelay = currentSimTime - delay */
  real_T tStart,
  real_T *tBuf,
  real_T *uBuf,
  int_T bufSz,
  int_T *lastIdx,
  int_T oldestIdx,
  int_T newIdx,
  real_T initOutput,
  boolean_T discrete,
  boolean_T minorStepAndTAtLastMajorOutput)
{
  int_T i;
  real_T yout, t1, t2, u1, u2;

  /*
   * If there is only one data point in the buffer, this data point must be
   * the t= 0 and tMinusDelay > t0, it ask for something unknown. The best
   * guess if initial output as well
   */
  if ((newIdx == 0) && (oldestIdx ==0 ) && (tMinusDelay > tStart))
    return initOutput;

  /*
   * If tMinusDelay is less than zero, should output initial value
   */
  if (tMinusDelay <= tStart)
    return initOutput;

  /* For fixed buffer extrapolation:
   * if tMinusDelay is small than the time at oldestIdx, if discrete, output
   * tailptr value,  else use tailptr and tailptr+1 value to extrapolate
   * It is also for fixed buffer. Note: The same condition can happen for transport delay block where
   * use tStart and and t[tail] other than using t[tail] and t[tail+1].
   * See below
   */
  if ((tMinusDelay <= tBuf[oldestIdx] ) ) {
    if (discrete) {
      return(uBuf[oldestIdx]);
    } else {
      int_T tempIdx= oldestIdx + 1;
      if (oldestIdx == bufSz-1)
        tempIdx = 0;
      t1= tBuf[oldestIdx];
      t2= tBuf[tempIdx];
      u1= uBuf[oldestIdx];
      u2= uBuf[tempIdx];
      if (t2 == t1) {
        if (tMinusDelay >= t2) {
          yout = u2;
        } else {
          yout = u1;
        }
      } else {
        real_T f1 = (t2-tMinusDelay) / (t2-t1);
        real_T f2 = 1.0 - f1;

        /*
         * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
         */
        yout = f1*u1 + f2*u2;
      }

      return yout;
    }
  }

  /*
   * When block does not have direct feedthrough, we use the table of
   * values to extrapolate off the end of the table for delays that are less
   * than 0 (less then step size).  This is not completely accurate.  The
   * chain of events is as follows for a given time t.  Major output - look
   * in table.  Update - add entry to table.  Now, if we call the output at
   * time t again, there is a new entry in the table. For very small delays,
   * this means that we will have a different answer from the previous call
   * to the output fcn at the same time t.  The following code prevents this
   * from happening.
   */
  if (minorStepAndTAtLastMajorOutput) {
    /* pretend that the new entry has not been added to table */
    if (newIdx != 0) {
      if (*lastIdx == newIdx) {
        (*lastIdx)--;
      }

      newIdx--;
    } else {
      if (*lastIdx == newIdx) {
        *lastIdx = bufSz-1;
      }

      newIdx = bufSz - 1;
    }
  }

  i = *lastIdx;
  if (tBuf[i] < tMinusDelay) {
    /* Look forward starting at last index */
    while (tBuf[i] < tMinusDelay) {
      /* May occur if the delay is less than step-size - extrapolate */
      if (i == newIdx)
        break;
      i = ( i < (bufSz-1) ) ? (i+1) : 0;/* move through buffer */
    }
  } else {
    /*
     * Look backwards starting at last index which can happen when the
     * delay time increases.
     */
    while (tBuf[i] >= tMinusDelay) {
      /*
       * Due to the entry condition at top of function, we
       * should never hit the end.
       */
      i = (i > 0) ? i-1 : (bufSz-1);   /* move through buffer */
    }

    i = ( i < (bufSz-1) ) ? (i+1) : 0;
  }

  *lastIdx = i;
  if (discrete) {
    /*
     * tempEps = 128 * eps;
     * localEps = max(tempEps, tempEps*fabs(tBuf[i]))/2;
     */
    double tempEps = (DBL_EPSILON) * 128.0;
    double localEps = tempEps * fabs(tBuf[i]);
    if (tempEps > localEps) {
      localEps = tempEps;
    }

    localEps = localEps / 2.0;
    if (tMinusDelay >= (tBuf[i] - localEps)) {
      yout = uBuf[i];
    } else {
      if (i == 0) {
        yout = uBuf[bufSz-1];
      } else {
        yout = uBuf[i-1];
      }
    }
  } else {
    if (i == 0) {
      t1 = tBuf[bufSz-1];
      u1 = uBuf[bufSz-1];
    } else {
      t1 = tBuf[i-1];
      u1 = uBuf[i-1];
    }

    t2 = tBuf[i];
    u2 = uBuf[i];
    if (t2 == t1) {
      if (tMinusDelay >= t2) {
        yout = u2;
      } else {
        yout = u1;
      }
    } else {
      real_T f1 = (t2-tMinusDelay) / (t2-t1);
      real_T f2 = 1.0 - f1;

      /*
       * Use Lagrange's interpolation formula.  Exact outputs at t1, t2.
       */
      yout = f1*u1 + f2*u2;
    }
  }

  return(yout);
}

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
  simulationData = (NeslSimulationData *)PlatformAssem_DW.STATE_1_SimulationData;
  time = PlatformAssem_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &PlatformAssem_X.PlatformAssemRevolute13Rzq;
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
  tmp_0[0] = PlatformAssem_B.INPUT_12_1_1[0];
  tmp_0[1] = PlatformAssem_B.INPUT_12_1_1[1];
  tmp_0[2] = PlatformAssem_B.INPUT_12_1_1[2];
  tmp_0[3] = PlatformAssem_B.INPUT_12_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp_0[5] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp_0[6] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp_0[7] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp_0[9] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp_0[10] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp_0[11] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = PlatformAssem_B.INPUT_9_1_1[0];
  tmp_0[13] = PlatformAssem_B.INPUT_9_1_1[1];
  tmp_0[14] = PlatformAssem_B.INPUT_9_1_1[2];
  tmp_0[15] = PlatformAssem_B.INPUT_9_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = PlatformAssem_B.INPUT_11_1_1[0];
  tmp_0[17] = PlatformAssem_B.INPUT_11_1_1[1];
  tmp_0[18] = PlatformAssem_B.INPUT_11_1_1[2];
  tmp_0[19] = PlatformAssem_B.INPUT_11_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = PlatformAssem_B.INPUT_10_1_1[0];
  tmp_0[21] = PlatformAssem_B.INPUT_10_1_1[1];
  tmp_0[22] = PlatformAssem_B.INPUT_10_1_1[2];
  tmp_0[23] = PlatformAssem_B.INPUT_10_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = PlatformAssem_B.INPUT_8_1_1[0];
  tmp_0[25] = PlatformAssem_B.INPUT_8_1_1[1];
  tmp_0[26] = PlatformAssem_B.INPUT_8_1_1[2];
  tmp_0[27] = PlatformAssem_B.INPUT_8_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp_0[29] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp_0[30] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp_0[31] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp_0[33] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp_0[34] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp_0[35] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp_0[37] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp_0[38] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp_0[39] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = PlatformAssem_B.INPUT_7_1_1[0];
  tmp_0[41] = PlatformAssem_B.INPUT_7_1_1[1];
  tmp_0[42] = PlatformAssem_B.INPUT_7_1_1[2];
  tmp_0[43] = PlatformAssem_B.INPUT_7_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp_0[45] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp_0[46] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp_0[47] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_1[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 13;
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

  /* End of Projection for SimscapeExecutionBlock: '<S108>/STATE_1' */
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
  int_T nXc = 97;
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
  real_T tmp[48];
  int_T tmp_0[13];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_1;
  char *msg;
  real_T time_0;
  real_T tmp_2[121];
  int_T tmp_3[14];
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
    /* Constant: '<Root>/base_px' */
    PlatformAssem_B.base_px = PlatformAssem_P.base_px_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_12_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_12_1_1_discrete[1] = PlatformAssem_B.base_px;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_12_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_12_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0] =
      PlatformAssem_DW.INPUT_12_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1] = 0.0;
  }

  PlatformAssem_B.INPUT_12_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0];
  PlatformAssem_B.INPUT_12_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1];
  PlatformAssem_B.INPUT_12_1_1[2] = ((PlatformAssem_DW.INPUT_12_1_1_discrete[1]
    - PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1]) * 1000.0;
  PlatformAssem_B.INPUT_12_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_12_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/base_py' */
    PlatformAssem_B.base_py = PlatformAssem_P.base_py_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_4_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_4_1_1_discrete[1] = PlatformAssem_B.base_py;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_4_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_4_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[0] =
      PlatformAssem_DW.INPUT_4_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[1] = 0.0;
  }

  PlatformAssem_B.INPUT_4_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[0];
  PlatformAssem_B.INPUT_4_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[1];
  PlatformAssem_B.INPUT_4_1_1[2] = ((PlatformAssem_DW.INPUT_4_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[1]) * 1000.0;
  PlatformAssem_B.INPUT_4_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_4_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/base_pz' */
    PlatformAssem_B.base_pz = PlatformAssem_P.base_pz_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_3_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_3_1_1_discrete[1] = PlatformAssem_B.base_pz;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_3_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_3_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0] =
      PlatformAssem_DW.INPUT_3_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1] = 0.0;
  }

  PlatformAssem_B.INPUT_3_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0];
  PlatformAssem_B.INPUT_3_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1];
  PlatformAssem_B.INPUT_3_1_1[2] = ((PlatformAssem_DW.INPUT_3_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1]) * 1000.0;
  PlatformAssem_B.INPUT_3_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_3_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/base_qx' */
    PlatformAssem_B.base_qx = PlatformAssem_P.base_qx_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_9_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_9_1_1_discrete[1] = PlatformAssem_B.base_qx;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_9_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_9_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[0] =
      PlatformAssem_DW.INPUT_9_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[1] = 0.0;
  }

  PlatformAssem_B.INPUT_9_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[0];
  PlatformAssem_B.INPUT_9_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[1];
  PlatformAssem_B.INPUT_9_1_1[2] = ((PlatformAssem_DW.INPUT_9_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[1]) * 1000.0;
  PlatformAssem_B.INPUT_9_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_9_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/base_qy' */
    PlatformAssem_B.base_qy = PlatformAssem_P.base_qy_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_11_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_11_1_1_discrete[1] = PlatformAssem_B.base_qy;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_11_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_11_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[0] =
      PlatformAssem_DW.INPUT_11_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[1] = 0.0;
  }

  PlatformAssem_B.INPUT_11_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[0];
  PlatformAssem_B.INPUT_11_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[1];
  PlatformAssem_B.INPUT_11_1_1[2] = ((PlatformAssem_DW.INPUT_11_1_1_discrete[1]
    - PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[1]) * 1000.0;
  PlatformAssem_B.INPUT_11_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_11_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/base_qz' */
    PlatformAssem_B.base_qz = PlatformAssem_P.base_qz_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_10_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_10_1_1_discrete[1] = PlatformAssem_B.base_qz;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_10_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_10_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[0] =
      PlatformAssem_DW.INPUT_10_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[1] = 0.0;
  }

  PlatformAssem_B.INPUT_10_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[0];
  PlatformAssem_B.INPUT_10_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[1];
  PlatformAssem_B.INPUT_10_1_1[2] = ((PlatformAssem_DW.INPUT_10_1_1_discrete[1]
    - PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[1]) * 1000.0;
  PlatformAssem_B.INPUT_10_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_10_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle1' */
    PlatformAssem_B.angle1 = PlatformAssem_P.angle1_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_8_1_1_discrete[1] = PlatformAssem_B.angle1;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_8_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_8_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[0] =
      PlatformAssem_DW.INPUT_8_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[1] = 0.0;
  }

  PlatformAssem_B.INPUT_8_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[0];
  PlatformAssem_B.INPUT_8_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[1];
  PlatformAssem_B.INPUT_8_1_1[2] = ((PlatformAssem_DW.INPUT_8_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[1]) * 1000.0;
  PlatformAssem_B.INPUT_8_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle3' */
    PlatformAssem_B.angle3 = PlatformAssem_P.angle3_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_2_1_1_discrete[1] = PlatformAssem_B.angle3;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_2_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_2_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[0] =
      PlatformAssem_DW.INPUT_2_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[1] = 0.0;
  }

  PlatformAssem_B.INPUT_2_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[0];
  PlatformAssem_B.INPUT_2_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[1];
  PlatformAssem_B.INPUT_2_1_1[2] = ((PlatformAssem_DW.INPUT_2_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[1]) * 1000.0;
  PlatformAssem_B.INPUT_2_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle4' */
    PlatformAssem_B.angle4 = PlatformAssem_P.angle4_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_5_1_1_discrete[1] = PlatformAssem_B.angle4;
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

  /* End of SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle5' */
    PlatformAssem_B.angle5 = PlatformAssem_P.angle5_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_6_1_1_discrete[1] = PlatformAssem_B.angle5;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_6_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_6_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[0] =
      PlatformAssem_DW.INPUT_6_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[1] = 0.0;
  }

  PlatformAssem_B.INPUT_6_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[0];
  PlatformAssem_B.INPUT_6_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[1];
  PlatformAssem_B.INPUT_6_1_1[2] = ((PlatformAssem_DW.INPUT_6_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[1]) * 1000.0;
  PlatformAssem_B.INPUT_6_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle6' */
    PlatformAssem_B.angle6 = PlatformAssem_P.angle6_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_7_1_1_discrete[1] = PlatformAssem_B.angle6;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_7_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_7_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0] =
      PlatformAssem_DW.INPUT_7_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1] = 0.0;
  }

  PlatformAssem_B.INPUT_7_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0];
  PlatformAssem_B.INPUT_7_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1];
  PlatformAssem_B.INPUT_7_1_1[2] = ((PlatformAssem_DW.INPUT_7_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1]) * 1000.0;
  PlatformAssem_B.INPUT_7_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Constant: '<Root>/angle2' */
    PlatformAssem_B.angle2 = PlatformAssem_P.angle2_Value;
  }

  /* SimscapeInputBlock: '<S108>/INPUT_1_1_1' */
  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    PlatformAssem_DW.INPUT_1_1_1_discrete[1] = PlatformAssem_B.angle2;
  }

  first_output = false;
  if (PlatformAssem_DW.INPUT_1_1_1_discrete[0] == 0.0) {
    PlatformAssem_DW.INPUT_1_1_1_discrete[0] = 1.0;
    first_output = true;
  }

  if (first_output) {
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0] =
      PlatformAssem_DW.INPUT_1_1_1_discrete[1];
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1] = 0.0;
  }

  PlatformAssem_B.INPUT_1_1_1[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0];
  PlatformAssem_B.INPUT_1_1_1[1] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1];
  PlatformAssem_B.INPUT_1_1_1[2] = ((PlatformAssem_DW.INPUT_1_1_1_discrete[1] -
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0]) * 1000.0 - 2.0 *
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1]) * 1000.0;
  PlatformAssem_B.INPUT_1_1_1[3] = 0.0;

  /* End of SimscapeInputBlock: '<S108>/INPUT_1_1_1' */

  /* SimscapeExecutionBlock: '<S108>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S108>/OUTPUT_1_0'
   */
  simulationData = (NeslSimulationData *)PlatformAssem_DW.STATE_1_SimulationData;
  time = PlatformAssem_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &PlatformAssem_X.PlatformAssemRevolute13Rzq;
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
  tmp[0] = PlatformAssem_B.INPUT_12_1_1[0];
  tmp[1] = PlatformAssem_B.INPUT_12_1_1[1];
  tmp[2] = PlatformAssem_B.INPUT_12_1_1[2];
  tmp[3] = PlatformAssem_B.INPUT_12_1_1[3];
  tmp_0[1] = 4;
  tmp[4] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp[5] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp[6] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp[7] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_0[2] = 8;
  tmp[8] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp[9] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp[10] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp[11] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_0[3] = 12;
  tmp[12] = PlatformAssem_B.INPUT_9_1_1[0];
  tmp[13] = PlatformAssem_B.INPUT_9_1_1[1];
  tmp[14] = PlatformAssem_B.INPUT_9_1_1[2];
  tmp[15] = PlatformAssem_B.INPUT_9_1_1[3];
  tmp_0[4] = 16;
  tmp[16] = PlatformAssem_B.INPUT_11_1_1[0];
  tmp[17] = PlatformAssem_B.INPUT_11_1_1[1];
  tmp[18] = PlatformAssem_B.INPUT_11_1_1[2];
  tmp[19] = PlatformAssem_B.INPUT_11_1_1[3];
  tmp_0[5] = 20;
  tmp[20] = PlatformAssem_B.INPUT_10_1_1[0];
  tmp[21] = PlatformAssem_B.INPUT_10_1_1[1];
  tmp[22] = PlatformAssem_B.INPUT_10_1_1[2];
  tmp[23] = PlatformAssem_B.INPUT_10_1_1[3];
  tmp_0[6] = 24;
  tmp[24] = PlatformAssem_B.INPUT_8_1_1[0];
  tmp[25] = PlatformAssem_B.INPUT_8_1_1[1];
  tmp[26] = PlatformAssem_B.INPUT_8_1_1[2];
  tmp[27] = PlatformAssem_B.INPUT_8_1_1[3];
  tmp_0[7] = 28;
  tmp[28] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp[29] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp[30] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp[31] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_0[8] = 32;
  tmp[32] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp[33] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp[34] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp[35] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_0[9] = 36;
  tmp[36] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp[37] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp[38] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp[39] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_0[10] = 40;
  tmp[40] = PlatformAssem_B.INPUT_7_1_1[0];
  tmp[41] = PlatformAssem_B.INPUT_7_1_1[1];
  tmp[42] = PlatformAssem_B.INPUT_7_1_1[2];
  tmp[43] = PlatformAssem_B.INPUT_7_1_1[3];
  tmp_0[11] = 44;
  tmp[44] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp[45] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp[46] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp[47] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_0[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp[0];
  simulationData->mData->mInputOffsets.mN = 13;
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

  /* End of SimscapeExecutionBlock: '<S108>/STATE_1' */

  /* SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */
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
  tmp_2[0] = PlatformAssem_B.INPUT_12_1_1[0];
  tmp_2[1] = PlatformAssem_B.INPUT_12_1_1[1];
  tmp_2[2] = PlatformAssem_B.INPUT_12_1_1[2];
  tmp_2[3] = PlatformAssem_B.INPUT_12_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp_2[5] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp_2[6] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp_2[7] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp_2[9] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp_2[10] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp_2[11] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_3[3] = 12;
  tmp_2[12] = PlatformAssem_B.INPUT_9_1_1[0];
  tmp_2[13] = PlatformAssem_B.INPUT_9_1_1[1];
  tmp_2[14] = PlatformAssem_B.INPUT_9_1_1[2];
  tmp_2[15] = PlatformAssem_B.INPUT_9_1_1[3];
  tmp_3[4] = 16;
  tmp_2[16] = PlatformAssem_B.INPUT_11_1_1[0];
  tmp_2[17] = PlatformAssem_B.INPUT_11_1_1[1];
  tmp_2[18] = PlatformAssem_B.INPUT_11_1_1[2];
  tmp_2[19] = PlatformAssem_B.INPUT_11_1_1[3];
  tmp_3[5] = 20;
  tmp_2[20] = PlatformAssem_B.INPUT_10_1_1[0];
  tmp_2[21] = PlatformAssem_B.INPUT_10_1_1[1];
  tmp_2[22] = PlatformAssem_B.INPUT_10_1_1[2];
  tmp_2[23] = PlatformAssem_B.INPUT_10_1_1[3];
  tmp_3[6] = 24;
  tmp_2[24] = PlatformAssem_B.INPUT_8_1_1[0];
  tmp_2[25] = PlatformAssem_B.INPUT_8_1_1[1];
  tmp_2[26] = PlatformAssem_B.INPUT_8_1_1[2];
  tmp_2[27] = PlatformAssem_B.INPUT_8_1_1[3];
  tmp_3[7] = 28;
  tmp_2[28] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp_2[29] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp_2[30] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp_2[31] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_3[8] = 32;
  tmp_2[32] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp_2[33] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp_2[34] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp_2[35] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_3[9] = 36;
  tmp_2[36] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp_2[37] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp_2[38] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp_2[39] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_3[10] = 40;
  tmp_2[40] = PlatformAssem_B.INPUT_7_1_1[0];
  tmp_2[41] = PlatformAssem_B.INPUT_7_1_1[1];
  tmp_2[42] = PlatformAssem_B.INPUT_7_1_1[2];
  tmp_2[43] = PlatformAssem_B.INPUT_7_1_1[3];
  tmp_3[11] = 44;
  tmp_2[44] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp_2[45] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp_2[46] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp_2[47] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_3[12] = 48;
  memcpy(&tmp_2[48], &PlatformAssem_B.STATE_1[0], 73U * sizeof(real_T));
  tmp_3[13] = 121;
  simulationData->mData->mInputValues.mN = 121;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 14;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 23;
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
    rtb_TmpSignalConversionAtToWork[1] = PlatformAssem_B.OUTPUT_1_0[5];
    rtb_TmpSignalConversionAtToWork[2] = PlatformAssem_B.OUTPUT_1_0[1];
    rtb_TmpSignalConversionAtToWork[3] = PlatformAssem_B.OUTPUT_1_0[2];
    rtb_TmpSignalConversionAtToWork[4] = PlatformAssem_B.OUTPUT_1_0[3];
    rtb_TmpSignalConversionAtToWork[5] = PlatformAssem_B.OUTPUT_1_0[4];

    /* ToWorkspace: '<Root>/To Workspace1' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.2);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace1_PWORK.LoggedData,
                              &locTime, &rtb_TmpSignalConversionAtToWork[0]);
      }
    }
  }

  /* TransportDelay: '<S7>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK.TUbufferPtrs[3];
    real_T simTime = PlatformAssem_M->Timing.t[0];
    real_T tMinusDelay ;

    {
      int_T i1;
      real_T *y0 = &PlatformAssem_B.TransportDelay[0];
      const real_T *u0 = &PlatformAssem_B.OUTPUT_1_0[13];
      int_T *iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK.Tail[0];
      int_T *iw_Head = &PlatformAssem_DW.TransportDelay_IWORK.Head[0];
      int_T *iw_Last = &PlatformAssem_DW.TransportDelay_IWORK.Last[0];
      int_T *iw_CircularBufSize =
        &PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[0];
      for (i1=0; i1 < 3; i1++) {
        tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                       PlatformAssem_P.sensor_delay : 0.0);
        tMinusDelay = simTime - tMinusDelay;
        if (PlatformAssem_P.sensor_delay == 0.0)
          y0[i1] = u0[i1];
        else
          y0[i1] = rt_TDelayInterpolate(
            tMinusDelay,
            0.0,
            *tBuffer,
            *uBuffer,
            iw_CircularBufSize[i1],
            &iw_Last[i1],
            iw_Tail[i1],
            iw_Head[i1],
            PlatformAssem_P.TransportDelay_InitOutput,
            0,
            0);
        tBuffer++;
        uBuffer++;
      }
    }
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* ToWorkspace: '<S7>/To Workspace2' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.2);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace2_PWORK.LoggedData,
                              &locTime, &PlatformAssem_B.TransportDelay[0]);
      }
    }
  }

  /* TransportDelay: '<S8>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK_l.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK_l.TUbufferPtrs[8];
    real_T simTime = PlatformAssem_M->Timing.t[0];
    real_T tMinusDelay ;

    {
      int_T i1;
      real_T *y0 = &PlatformAssem_B.TransportDelay_d[0];
      const real_T *u0 = &PlatformAssem_B.OUTPUT_1_0[6];
      int_T *iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK_o.Tail[0];
      int_T *iw_Head = &PlatformAssem_DW.TransportDelay_IWORK_o.Head[0];
      int_T *iw_Last = &PlatformAssem_DW.TransportDelay_IWORK_o.Last[0];
      int_T *iw_CircularBufSize =
        &PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[0];
      for (i1=0; i1 < 4; i1++) {
        tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                       PlatformAssem_P.sensor_delay : 0.0);
        tMinusDelay = simTime - tMinusDelay;
        if (PlatformAssem_P.sensor_delay == 0.0)
          y0[i1] = u0[i1];
        else
          y0[i1] = rt_TDelayInterpolate(
            tMinusDelay,
            0.0,
            *tBuffer,
            *uBuffer,
            iw_CircularBufSize[i1],
            &iw_Last[i1],
            iw_Tail[i1],
            iw_Head[i1],
            PlatformAssem_P.TransportDelay_InitOutput_b,
            0,
            0);
        tBuffer++;
        uBuffer++;
      }

      y0 = &PlatformAssem_B.TransportDelay_d[4];
      u0 = &PlatformAssem_B.OUTPUT_1_0[16];
      iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK_o.Tail[4];
      iw_Head = &PlatformAssem_DW.TransportDelay_IWORK_o.Head[4];
      iw_Last = &PlatformAssem_DW.TransportDelay_IWORK_o.Last[4];
      iw_CircularBufSize =
        &PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[4];
      for (i1=0; i1 < 4; i1++) {
        tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                       PlatformAssem_P.sensor_delay : 0.0);
        tMinusDelay = simTime - tMinusDelay;
        if (PlatformAssem_P.sensor_delay == 0.0)
          y0[i1] = u0[i1];
        else
          y0[i1] = rt_TDelayInterpolate(
            tMinusDelay,
            0.0,
            *tBuffer,
            *uBuffer,
            iw_CircularBufSize[i1],
            &iw_Last[i1],
            iw_Tail[i1],
            iw_Head[i1],
            PlatformAssem_P.TransportDelay_InitOutput_b,
            0,
            0);
        tBuffer++;
        uBuffer++;
      }
    }
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* ToWorkspace: '<S8>/To Workspace' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.2);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace_PWORK.LoggedData,
                              &locTime, &PlatformAssem_B.TransportDelay_d[0]);
      }
    }
  }

  /* TransportDelay: '<S9>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK_h.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK_h.TUbufferPtrs[3];
    real_T simTime = PlatformAssem_M->Timing.t[0];
    real_T tMinusDelay ;

    {
      int_T i1;
      real_T *y0 = &PlatformAssem_B.TransportDelay_n[0];
      const real_T *u0 = &PlatformAssem_B.OUTPUT_1_0[10];
      int_T *iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK_a.Tail[0];
      int_T *iw_Head = &PlatformAssem_DW.TransportDelay_IWORK_a.Head[0];
      int_T *iw_Last = &PlatformAssem_DW.TransportDelay_IWORK_a.Last[0];
      int_T *iw_CircularBufSize =
        &PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[0];
      for (i1=0; i1 < 3; i1++) {
        tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                       PlatformAssem_P.sensor_delay : 0.0);
        tMinusDelay = simTime - tMinusDelay;
        if (PlatformAssem_P.sensor_delay == 0.0)
          y0[i1] = u0[i1];
        else
          y0[i1] = rt_TDelayInterpolate(
            tMinusDelay,
            0.0,
            *tBuffer,
            *uBuffer,
            iw_CircularBufSize[i1],
            &iw_Last[i1],
            iw_Tail[i1],
            iw_Head[i1],
            PlatformAssem_P.TransportDelay_InitOutput_a,
            0,
            0);
        tBuffer++;
        uBuffer++;
      }
    }
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* ToWorkspace: '<S9>/To Workspace2' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.2);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace2_PWORK_a.LoggedData,
                              &locTime, &PlatformAssem_B.TransportDelay_n[0]);
      }
    }
  }

  /* TransportDelay: '<S10>/Transport Delay' */
  {
    real_T **uBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[0];
    real_T **tBuffer = (real_T**)
      &PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[3];
    real_T simTime = PlatformAssem_M->Timing.t[0];
    real_T tMinusDelay ;
    tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                   PlatformAssem_P.sensor_delay : 0.0);
    tMinusDelay = simTime - tMinusDelay;
    if (PlatformAssem_P.sensor_delay == 0.0)
      PlatformAssem_B.TransportDelay_b[0] = PlatformAssem_B.OUTPUT_1_0[20];
    else
      PlatformAssem_B.TransportDelay_b[0] = rt_TDelayInterpolate(
        tMinusDelay,
        0.0,
        *tBuffer,
        *uBuffer,
        PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[0],
        &PlatformAssem_DW.TransportDelay_IWORK_i.Last[0],
        PlatformAssem_DW.TransportDelay_IWORK_i.Tail[0],
        PlatformAssem_DW.TransportDelay_IWORK_i.Head[0],
        PlatformAssem_P.TransportDelay_InitOutput_n,
        0,
        0);
    tBuffer++;
    uBuffer++;
    tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                   PlatformAssem_P.sensor_delay : 0.0);
    tMinusDelay = simTime - tMinusDelay;
    if (PlatformAssem_P.sensor_delay == 0.0)
      PlatformAssem_B.TransportDelay_b[1] = PlatformAssem_B.OUTPUT_1_0[22];
    else
      PlatformAssem_B.TransportDelay_b[1] = rt_TDelayInterpolate(
        tMinusDelay,
        0.0,
        *tBuffer,
        *uBuffer,
        PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[1],
        &PlatformAssem_DW.TransportDelay_IWORK_i.Last[1],
        PlatformAssem_DW.TransportDelay_IWORK_i.Tail[1],
        PlatformAssem_DW.TransportDelay_IWORK_i.Head[1],
        PlatformAssem_P.TransportDelay_InitOutput_n,
        0,
        0);
    tBuffer++;
    uBuffer++;
    tMinusDelay = ((PlatformAssem_P.sensor_delay > 0.0) ?
                   PlatformAssem_P.sensor_delay : 0.0);
    tMinusDelay = simTime - tMinusDelay;
    if (PlatformAssem_P.sensor_delay == 0.0)
      PlatformAssem_B.TransportDelay_b[2] = PlatformAssem_B.OUTPUT_1_0[21];
    else
      PlatformAssem_B.TransportDelay_b[2] = rt_TDelayInterpolate(
        tMinusDelay,
        0.0,
        *tBuffer,
        *uBuffer,
        PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[2],
        &PlatformAssem_DW.TransportDelay_IWORK_i.Last[2],
        PlatformAssem_DW.TransportDelay_IWORK_i.Tail[2],
        PlatformAssem_DW.TransportDelay_IWORK_i.Head[2],
        PlatformAssem_P.TransportDelay_InitOutput_n,
        0,
        0);
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* ToWorkspace: '<S10>/To Workspace' */
    {
      double locTime = (((PlatformAssem_M->Timing.clockTick1+
                          PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) *
                        0.2);
      ;
      if (rtmIsMajorTimeStep(PlatformAssem_M)) {
        rt_UpdateStructLogVar((StructLogVar *)
                              PlatformAssem_DW.ToWorkspace_PWORK_d.LoggedData,
                              &locTime, &PlatformAssem_B.TransportDelay_b[0]);
      }
    }
  }

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars(PlatformAssem_M->rtwLogInfo, (PlatformAssem_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* Update for TransportDelay: '<S7>/Transport Delay' */
    {
      real_T **uBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK.TUbufferPtrs[0];
      real_T **tBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK.TUbufferPtrs[3];
      real_T simTime = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_IWORK.Head[0] =
        ((PlatformAssem_DW.TransportDelay_IWORK.Head[0] <
          (PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[0]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK.Head[0]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK.Head[0] ==
          PlatformAssem_DW.TransportDelay_IWORK.Tail[0]) {
        PlatformAssem_DW.TransportDelay_IWORK.Tail[0] =
          ((PlatformAssem_DW.TransportDelay_IWORK.Tail[0] <
            (PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[0]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK.Tail[0]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK.Head[0]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK.Head[0]] =
        PlatformAssem_B.OUTPUT_1_0[13];
      PlatformAssem_DW.TransportDelay_IWORK.Head[1] =
        ((PlatformAssem_DW.TransportDelay_IWORK.Head[1] <
          (PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[1]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK.Head[1]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK.Head[1] ==
          PlatformAssem_DW.TransportDelay_IWORK.Tail[1]) {
        PlatformAssem_DW.TransportDelay_IWORK.Tail[1] =
          ((PlatformAssem_DW.TransportDelay_IWORK.Tail[1] <
            (PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[1]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK.Tail[1]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK.Head[1]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK.Head[1]] =
        PlatformAssem_B.OUTPUT_1_0[14];
      PlatformAssem_DW.TransportDelay_IWORK.Head[2] =
        ((PlatformAssem_DW.TransportDelay_IWORK.Head[2] <
          (PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[2]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK.Head[2]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK.Head[2] ==
          PlatformAssem_DW.TransportDelay_IWORK.Tail[2]) {
        PlatformAssem_DW.TransportDelay_IWORK.Tail[2] =
          ((PlatformAssem_DW.TransportDelay_IWORK.Tail[2] <
            (PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[2]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK.Tail[2]+1) : 0);
      }

      (*tBuffer)[PlatformAssem_DW.TransportDelay_IWORK.Head[2]] = simTime;
      (*uBuffer)[PlatformAssem_DW.TransportDelay_IWORK.Head[2]] =
        PlatformAssem_B.OUTPUT_1_0[15];
    }

    /* Update for TransportDelay: '<S8>/Transport Delay' */
    {
      real_T **uBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK_l.TUbufferPtrs[0];
      real_T **tBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK_l.TUbufferPtrs[8];
      real_T simTime = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[0] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[0] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[0]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[0]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[0] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[0]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[0] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[0] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[0]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[0]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[0]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[0]] =
        PlatformAssem_B.OUTPUT_1_0[6];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[1] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[1] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[1]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[1]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[1] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[1]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[1] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[1] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[1]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[1]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[1]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[1]] =
        PlatformAssem_B.OUTPUT_1_0[7];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[2] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[2] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[2]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[2]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[2] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[2]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[2] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[2] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[2]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[2]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[2]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[2]] =
        PlatformAssem_B.OUTPUT_1_0[8];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[3] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[3] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[3]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[3]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[3] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[3]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[3] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[3] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[3]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[3]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[3]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[3]] =
        PlatformAssem_B.OUTPUT_1_0[9];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[4] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[4] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[4]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[4]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[4] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[4]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[4] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[4] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[4]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[4]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[4]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[4]] =
        PlatformAssem_B.OUTPUT_1_0[16];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[5] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[5] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[5]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[5]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[5] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[5]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[5] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[5] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[5]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[5]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[5]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[5]] =
        PlatformAssem_B.OUTPUT_1_0[17];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[6] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[6] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[6]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[6]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[6] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[6]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[6] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[6] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[6]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[6]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[6]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[6]] =
        PlatformAssem_B.OUTPUT_1_0[18];
      PlatformAssem_DW.TransportDelay_IWORK_o.Head[7] =
        ((PlatformAssem_DW.TransportDelay_IWORK_o.Head[7] <
          (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[7]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_o.Head[7]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_o.Head[7] ==
          PlatformAssem_DW.TransportDelay_IWORK_o.Tail[7]) {
        PlatformAssem_DW.TransportDelay_IWORK_o.Tail[7] =
          ((PlatformAssem_DW.TransportDelay_IWORK_o.Tail[7] <
            (PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[7]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_o.Tail[7]+1) : 0);
      }

      (*tBuffer)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[7]] = simTime;
      (*uBuffer)[PlatformAssem_DW.TransportDelay_IWORK_o.Head[7]] =
        PlatformAssem_B.OUTPUT_1_0[19];
    }

    /* Update for TransportDelay: '<S9>/Transport Delay' */
    {
      real_T **uBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK_h.TUbufferPtrs[0];
      real_T **tBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK_h.TUbufferPtrs[3];
      real_T simTime = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_IWORK_a.Head[0] =
        ((PlatformAssem_DW.TransportDelay_IWORK_a.Head[0] <
          (PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[0]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_a.Head[0]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_a.Head[0] ==
          PlatformAssem_DW.TransportDelay_IWORK_a.Tail[0]) {
        PlatformAssem_DW.TransportDelay_IWORK_a.Tail[0] =
          ((PlatformAssem_DW.TransportDelay_IWORK_a.Tail[0] <
            (PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[0]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_a.Tail[0]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_a.Head[0]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_a.Head[0]] =
        PlatformAssem_B.OUTPUT_1_0[10];
      PlatformAssem_DW.TransportDelay_IWORK_a.Head[1] =
        ((PlatformAssem_DW.TransportDelay_IWORK_a.Head[1] <
          (PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[1]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_a.Head[1]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_a.Head[1] ==
          PlatformAssem_DW.TransportDelay_IWORK_a.Tail[1]) {
        PlatformAssem_DW.TransportDelay_IWORK_a.Tail[1] =
          ((PlatformAssem_DW.TransportDelay_IWORK_a.Tail[1] <
            (PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[1]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_a.Tail[1]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_a.Head[1]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_a.Head[1]] =
        PlatformAssem_B.OUTPUT_1_0[11];
      PlatformAssem_DW.TransportDelay_IWORK_a.Head[2] =
        ((PlatformAssem_DW.TransportDelay_IWORK_a.Head[2] <
          (PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[2]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_a.Head[2]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_a.Head[2] ==
          PlatformAssem_DW.TransportDelay_IWORK_a.Tail[2]) {
        PlatformAssem_DW.TransportDelay_IWORK_a.Tail[2] =
          ((PlatformAssem_DW.TransportDelay_IWORK_a.Tail[2] <
            (PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[2]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_a.Tail[2]+1) : 0);
      }

      (*tBuffer)[PlatformAssem_DW.TransportDelay_IWORK_a.Head[2]] = simTime;
      (*uBuffer)[PlatformAssem_DW.TransportDelay_IWORK_a.Head[2]] =
        PlatformAssem_B.OUTPUT_1_0[12];
    }

    /* Update for TransportDelay: '<S10>/Transport Delay' */
    {
      real_T **uBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[0];
      real_T **tBuffer = (real_T**)
        &PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[3];
      real_T simTime = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_IWORK_i.Head[0] =
        ((PlatformAssem_DW.TransportDelay_IWORK_i.Head[0] <
          (PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[0]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_i.Head[0]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_i.Head[0] ==
          PlatformAssem_DW.TransportDelay_IWORK_i.Tail[0]) {
        PlatformAssem_DW.TransportDelay_IWORK_i.Tail[0] =
          ((PlatformAssem_DW.TransportDelay_IWORK_i.Tail[0] <
            (PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[0]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_i.Tail[0]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_i.Head[0]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_i.Head[0]] =
        PlatformAssem_B.OUTPUT_1_0[20];
      PlatformAssem_DW.TransportDelay_IWORK_i.Head[1] =
        ((PlatformAssem_DW.TransportDelay_IWORK_i.Head[1] <
          (PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[1]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_i.Head[1]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_i.Head[1] ==
          PlatformAssem_DW.TransportDelay_IWORK_i.Tail[1]) {
        PlatformAssem_DW.TransportDelay_IWORK_i.Tail[1] =
          ((PlatformAssem_DW.TransportDelay_IWORK_i.Tail[1] <
            (PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[1]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_i.Tail[1]+1) : 0);
      }

      (*tBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_i.Head[1]] = simTime;
      (*uBuffer++)[PlatformAssem_DW.TransportDelay_IWORK_i.Head[1]] =
        PlatformAssem_B.OUTPUT_1_0[22];
      PlatformAssem_DW.TransportDelay_IWORK_i.Head[2] =
        ((PlatformAssem_DW.TransportDelay_IWORK_i.Head[2] <
          (PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[2]-1)) ?
         (PlatformAssem_DW.TransportDelay_IWORK_i.Head[2]+1) : 0);
      if (PlatformAssem_DW.TransportDelay_IWORK_i.Head[2] ==
          PlatformAssem_DW.TransportDelay_IWORK_i.Tail[2]) {
        PlatformAssem_DW.TransportDelay_IWORK_i.Tail[2] =
          ((PlatformAssem_DW.TransportDelay_IWORK_i.Tail[2] <
            (PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[2]-1)) ?
           (PlatformAssem_DW.TransportDelay_IWORK_i.Tail[2]+1) : 0);
      }

      (*tBuffer)[PlatformAssem_DW.TransportDelay_IWORK_i.Head[2]] = simTime;
      (*uBuffer)[PlatformAssem_DW.TransportDelay_IWORK_i.Head[2]] =
        PlatformAssem_B.OUTPUT_1_0[21];
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(PlatformAssem_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(PlatformAssem_M)!=-1) &&
          !((rtmGetTFinal(PlatformAssem_M)-(((PlatformAssem_M->Timing.clockTick1
               +PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) * 0.2)) >
            (((PlatformAssem_M->Timing.clockTick1+
               PlatformAssem_M->Timing.clockTickH1* 4294967296.0)) * 0.2) *
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
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
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
  real_T tmp_0[48];
  int_T tmp_1[13];
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_2;
  char *msg;
  XDot_PlatformAssem_T *_rtXdot;
  _rtXdot = ((XDot_PlatformAssem_T *) PlatformAssem_M->derivs);

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_12_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conver[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1];
  _rtXdot->PlatformAssemSimulink_PS_Conver[1] =
    ((PlatformAssem_DW.INPUT_12_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conver[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conver[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_4_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_l[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_l[1] =
    ((PlatformAssem_DW.INPUT_4_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_l[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_3_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_j[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_j[1] =
    ((PlatformAssem_DW.INPUT_3_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_j[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_9_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_h[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_h[1] =
    ((PlatformAssem_DW.INPUT_9_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_h[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_11_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Con_la[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[1];
  _rtXdot->PlatformAssemSimulink_PS_Con_la[1] =
    ((PlatformAssem_DW.INPUT_11_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Con_la[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_10_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_m[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_m[1] =
    ((PlatformAssem_DW.INPUT_10_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_m[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_e[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_e[1] =
    ((PlatformAssem_DW.INPUT_8_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_e[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_g[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_g[1] =
    ((PlatformAssem_DW.INPUT_2_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_g[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_a[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_a[1] =
    ((PlatformAssem_DW.INPUT_5_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_a[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Con_lk[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[1];
  _rtXdot->PlatformAssemSimulink_PS_Con_lk[1] =
    ((PlatformAssem_DW.INPUT_6_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Con_lk[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_o[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_o[1] =
    ((PlatformAssem_DW.INPUT_7_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_o[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_1_1_1' */
  _rtXdot->PlatformAssemSimulink_PS_Conv_i[0] =
    PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1];
  _rtXdot->PlatformAssemSimulink_PS_Conv_i[1] =
    ((PlatformAssem_DW.INPUT_1_1_1_discrete[1] -
      PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[0]) * 1000.0 - 2.0 *
     PlatformAssem_X.PlatformAssemSimulink_PS_Conv_i[1]) * 1000.0;

  /* Derivatives for SimscapeExecutionBlock: '<S108>/STATE_1' */
  simulationData = (NeslSimulationData *)PlatformAssem_DW.STATE_1_SimulationData;
  time = PlatformAssem_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 73;
  simulationData->mData->mContStates.mX = (real_T *)
    &PlatformAssem_X.PlatformAssemRevolute13Rzq;
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
  tmp_0[0] = PlatformAssem_B.INPUT_12_1_1[0];
  tmp_0[1] = PlatformAssem_B.INPUT_12_1_1[1];
  tmp_0[2] = PlatformAssem_B.INPUT_12_1_1[2];
  tmp_0[3] = PlatformAssem_B.INPUT_12_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PlatformAssem_B.INPUT_4_1_1[0];
  tmp_0[5] = PlatformAssem_B.INPUT_4_1_1[1];
  tmp_0[6] = PlatformAssem_B.INPUT_4_1_1[2];
  tmp_0[7] = PlatformAssem_B.INPUT_4_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PlatformAssem_B.INPUT_3_1_1[0];
  tmp_0[9] = PlatformAssem_B.INPUT_3_1_1[1];
  tmp_0[10] = PlatformAssem_B.INPUT_3_1_1[2];
  tmp_0[11] = PlatformAssem_B.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = PlatformAssem_B.INPUT_9_1_1[0];
  tmp_0[13] = PlatformAssem_B.INPUT_9_1_1[1];
  tmp_0[14] = PlatformAssem_B.INPUT_9_1_1[2];
  tmp_0[15] = PlatformAssem_B.INPUT_9_1_1[3];
  tmp_1[4] = 16;
  tmp_0[16] = PlatformAssem_B.INPUT_11_1_1[0];
  tmp_0[17] = PlatformAssem_B.INPUT_11_1_1[1];
  tmp_0[18] = PlatformAssem_B.INPUT_11_1_1[2];
  tmp_0[19] = PlatformAssem_B.INPUT_11_1_1[3];
  tmp_1[5] = 20;
  tmp_0[20] = PlatformAssem_B.INPUT_10_1_1[0];
  tmp_0[21] = PlatformAssem_B.INPUT_10_1_1[1];
  tmp_0[22] = PlatformAssem_B.INPUT_10_1_1[2];
  tmp_0[23] = PlatformAssem_B.INPUT_10_1_1[3];
  tmp_1[6] = 24;
  tmp_0[24] = PlatformAssem_B.INPUT_8_1_1[0];
  tmp_0[25] = PlatformAssem_B.INPUT_8_1_1[1];
  tmp_0[26] = PlatformAssem_B.INPUT_8_1_1[2];
  tmp_0[27] = PlatformAssem_B.INPUT_8_1_1[3];
  tmp_1[7] = 28;
  tmp_0[28] = PlatformAssem_B.INPUT_2_1_1[0];
  tmp_0[29] = PlatformAssem_B.INPUT_2_1_1[1];
  tmp_0[30] = PlatformAssem_B.INPUT_2_1_1[2];
  tmp_0[31] = PlatformAssem_B.INPUT_2_1_1[3];
  tmp_1[8] = 32;
  tmp_0[32] = PlatformAssem_B.INPUT_5_1_1[0];
  tmp_0[33] = PlatformAssem_B.INPUT_5_1_1[1];
  tmp_0[34] = PlatformAssem_B.INPUT_5_1_1[2];
  tmp_0[35] = PlatformAssem_B.INPUT_5_1_1[3];
  tmp_1[9] = 36;
  tmp_0[36] = PlatformAssem_B.INPUT_6_1_1[0];
  tmp_0[37] = PlatformAssem_B.INPUT_6_1_1[1];
  tmp_0[38] = PlatformAssem_B.INPUT_6_1_1[2];
  tmp_0[39] = PlatformAssem_B.INPUT_6_1_1[3];
  tmp_1[10] = 40;
  tmp_0[40] = PlatformAssem_B.INPUT_7_1_1[0];
  tmp_0[41] = PlatformAssem_B.INPUT_7_1_1[1];
  tmp_0[42] = PlatformAssem_B.INPUT_7_1_1[2];
  tmp_0[43] = PlatformAssem_B.INPUT_7_1_1[3];
  tmp_1[11] = 44;
  tmp_0[44] = PlatformAssem_B.INPUT_1_1_1[0];
  tmp_0[45] = PlatformAssem_B.INPUT_1_1_1[1];
  tmp_0[46] = PlatformAssem_B.INPUT_1_1_1[2];
  tmp_0[47] = PlatformAssem_B.INPUT_1_1_1[3];
  tmp_1[12] = 48;
  simulationData->mData->mInputValues.mN = 48;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 13;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 73;
  simulationData->mData->mDx.mX = (real_T *)&_rtXdot->PlatformAssemRevolute13Rzq;
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

  /* End of Derivatives for SimscapeExecutionBlock: '<S108>/STATE_1' */
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
  rtmSetTFinal(PlatformAssem_M, -1);
  PlatformAssem_M->Timing.stepSize0 = 0.2;

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

    /* Start for SimscapeExecutionBlock: '<S108>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S108>/OUTPUT_1_0'
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
    modelParameters.mRTWModifiedTimeStamp = 4.42506844E+8;
    tmp_1 = 0.001;
    modelParameters.mSolverTolerance = tmp_1;
    tmp_1 = 0.2;
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
      &PlatformAssem_X.PlatformAssemRevolute13Rzq;
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

    /* End of Start for SimscapeExecutionBlock: '<S108>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */
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
    modelParameters_0.mRTWModifiedTimeStamp = 4.42506844E+8;
    tmp_1 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_1;
    tmp_1 = 0.2;
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
        0.2,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace1_PWORK.LoggedData == (NULL))
        return;
    }

    /* Start for TransportDelay: '<S7>/Transport Delay' */
    {
      real_T *pBuffer = &PlatformAssem_DW.TransportDelay_RWORK.TUbufferArea[0];

      {
        int_T i1;
        int_T *iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK.Tail[0];
        int_T *iw_Head = &PlatformAssem_DW.TransportDelay_IWORK.Head[0];
        int_T *iw_Last = &PlatformAssem_DW.TransportDelay_IWORK.Last[0];
        int_T *iw_CircularBufSize =
          &PlatformAssem_DW.TransportDelay_IWORK.CircularBufSize[0];
        void **pw_TUbufferPtrs =
          &PlatformAssem_DW.TransportDelay_PWORK.TUbufferPtrs[0];
        for (i1=0; i1 < 3; i1++) {
          iw_Tail[i1] = 0;
          iw_Head[i1] = 0;
          iw_Last[i1] = 0;
          iw_CircularBufSize[i1] = 1024;
          pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput;
          pBuffer[1024] = PlatformAssem_M->Timing.t[0];
          pw_TUbufferPtrs[i1] = (void *) &pBuffer[0];
          pw_TUbufferPtrs[i1+3] = (void *) &pBuffer[1024];
          pBuffer += 2048;
        }
      }
    }

    /* Start for ToWorkspace: '<S7>/To Workspace2' */
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

      static const char_T rt_ToWksBlockName[] =
        "PlatformAssem/Platform Acceleration (Abs)/To Workspace2";
      PlatformAssem_DW.ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
        PlatformAssem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(PlatformAssem_M),
        PlatformAssem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(PlatformAssem_M)),
        "platform_acceleration",
        1,
        0,
        1,
        0.2,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace2_PWORK.LoggedData == (NULL))
        return;
    }

    /* Start for TransportDelay: '<S8>/Transport Delay' */
    {
      real_T *pBuffer = &PlatformAssem_DW.TransportDelay_RWORK_b.TUbufferArea[0];

      {
        int_T i1;
        int_T *iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK_o.Tail[0];
        int_T *iw_Head = &PlatformAssem_DW.TransportDelay_IWORK_o.Head[0];
        int_T *iw_Last = &PlatformAssem_DW.TransportDelay_IWORK_o.Last[0];
        int_T *iw_CircularBufSize =
          &PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[0];
        void **pw_TUbufferPtrs =
          &PlatformAssem_DW.TransportDelay_PWORK_l.TUbufferPtrs[0];
        for (i1=0; i1 < 4; i1++) {
          iw_Tail[i1] = 0;
          iw_Head[i1] = 0;
          iw_Last[i1] = 0;
          iw_CircularBufSize[i1] = 1024;
          pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput_b;
          pBuffer[1024] = PlatformAssem_M->Timing.t[0];
          pw_TUbufferPtrs[i1] = (void *) &pBuffer[0];
          pw_TUbufferPtrs[i1+8] = (void *) &pBuffer[1024];
          pBuffer += 2048;
        }

        iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK_o.Tail[4];
        iw_Head = &PlatformAssem_DW.TransportDelay_IWORK_o.Head[4];
        iw_Last = &PlatformAssem_DW.TransportDelay_IWORK_o.Last[4];
        iw_CircularBufSize =
          &PlatformAssem_DW.TransportDelay_IWORK_o.CircularBufSize[4];
        pw_TUbufferPtrs = &PlatformAssem_DW.TransportDelay_PWORK_l.TUbufferPtrs
          [4];
        for (i1=0; i1 < 4; i1++) {
          iw_Tail[i1] = 0;
          iw_Head[i1] = 0;
          iw_Last[i1] = 0;
          iw_CircularBufSize[i1] = 1024;
          pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput_b;
          pBuffer[1024] = PlatformAssem_M->Timing.t[0];
          pw_TUbufferPtrs[i1] = (void *) &pBuffer[0];
          pw_TUbufferPtrs[i1+8] = (void *) &pBuffer[1024];
          pBuffer += 2048;
        }
      }
    }

    /* Start for ToWorkspace: '<S8>/To Workspace' */
    {
      static int_T rt_ToWksWidths[] = { 8 };

      static int_T rt_ToWksNumDimensions[] = { 1 };

      static int_T rt_ToWksDimensions[] = { 8 };

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

      static const char_T rt_ToWksBlockName[] =
        "PlatformAssem/Platform Orientation/To Workspace";
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
        0.2,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace_PWORK.LoggedData == (NULL))
        return;
    }

    /* Start for TransportDelay: '<S9>/Transport Delay' */
    {
      real_T *pBuffer = &PlatformAssem_DW.TransportDelay_RWORK_j.TUbufferArea[0];

      {
        int_T i1;
        int_T *iw_Tail = &PlatformAssem_DW.TransportDelay_IWORK_a.Tail[0];
        int_T *iw_Head = &PlatformAssem_DW.TransportDelay_IWORK_a.Head[0];
        int_T *iw_Last = &PlatformAssem_DW.TransportDelay_IWORK_a.Last[0];
        int_T *iw_CircularBufSize =
          &PlatformAssem_DW.TransportDelay_IWORK_a.CircularBufSize[0];
        void **pw_TUbufferPtrs =
          &PlatformAssem_DW.TransportDelay_PWORK_h.TUbufferPtrs[0];
        for (i1=0; i1 < 3; i1++) {
          iw_Tail[i1] = 0;
          iw_Head[i1] = 0;
          iw_Last[i1] = 0;
          iw_CircularBufSize[i1] = 1024;
          pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput_a;
          pBuffer[1024] = PlatformAssem_M->Timing.t[0];
          pw_TUbufferPtrs[i1] = (void *) &pBuffer[0];
          pw_TUbufferPtrs[i1+3] = (void *) &pBuffer[1024];
          pBuffer += 2048;
        }
      }
    }

    /* Start for ToWorkspace: '<S9>/To Workspace2' */
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

      static const char_T rt_ToWksBlockName[] =
        "PlatformAssem/Platform Translation (Abs)/To Workspace2";
      PlatformAssem_DW.ToWorkspace2_PWORK_a.LoggedData = rt_CreateStructLogVar(
        PlatformAssem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(PlatformAssem_M),
        PlatformAssem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(PlatformAssem_M)),
        "platform_translation_abs",
        1,
        0,
        1,
        0.2,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace2_PWORK_a.LoggedData == (NULL))
        return;
    }

    /* Start for TransportDelay: '<S10>/Transport Delay' */
    {
      real_T *pBuffer = &PlatformAssem_DW.TransportDelay_RWORK_e.TUbufferArea[0];
      PlatformAssem_DW.TransportDelay_IWORK_i.Tail[0] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.Head[0] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.Last[0] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[0] = 1024;
      pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput_n;
      pBuffer[1024] = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[0] = (void *)
        &pBuffer[0];
      PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[3] = (void *)
        &pBuffer[1024];
      pBuffer += 2048;
      PlatformAssem_DW.TransportDelay_IWORK_i.Tail[1] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.Head[1] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.Last[1] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[1] = 1024;
      pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput_n;
      pBuffer[1024] = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[1] = (void *)
        &pBuffer[0];
      PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[4] = (void *)
        &pBuffer[1024];
      pBuffer += 2048;
      PlatformAssem_DW.TransportDelay_IWORK_i.Tail[2] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.Head[2] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.Last[2] = 0;
      PlatformAssem_DW.TransportDelay_IWORK_i.CircularBufSize[2] = 1024;
      pBuffer[0] = PlatformAssem_P.TransportDelay_InitOutput_n;
      pBuffer[1024] = PlatformAssem_M->Timing.t[0];
      PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[2] = (void *)
        &pBuffer[0];
      PlatformAssem_DW.TransportDelay_PWORK_p.TUbufferPtrs[5] = (void *)
        &pBuffer[1024];
    }

    /* Start for ToWorkspace: '<S10>/To Workspace' */
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

      static const char_T rt_ToWksBlockName[] =
        "PlatformAssem/Platform Translation (Rel)\n/To Workspace";
      PlatformAssem_DW.ToWorkspace_PWORK_d.LoggedData = rt_CreateStructLogVar(
        PlatformAssem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(PlatformAssem_M),
        PlatformAssem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(PlatformAssem_M)),
        "platform_translation_rel",
        1,
        0,
        1,
        0.2,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (PlatformAssem_DW.ToWorkspace_PWORK_d.LoggedData == (NULL))
        return;
    }
  }

  {
    boolean_T tmp;
    int_T tmp_0;
    char *tmp_1;

    /* InitializeConditions for SimscapeExecutionBlock: '<S108>/STATE_1' */
    tmp = false;
    if (tmp) {
      tmp_0 = strcmp("ode3", rtsiGetSolverName(&PlatformAssem_M->solverInfo));
      if (tmp_0 != 0) {
        tmp_1 = solver_mismatch_message("ode3", rtsiGetSolverName
          (&PlatformAssem_M->solverInfo));
        rtmSetErrorStatus(PlatformAssem_M, tmp_1);
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S108>/STATE_1' */
  }
}

/* Model terminate function */
void PlatformAssem_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S108>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    PlatformAssem_DW.STATE_1_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    PlatformAssem_DW.STATE_1_SimulationData);
  nesl_erase_simulator("PlatformAssem/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    PlatformAssem_DW.OUTPUT_1_0_DiagnosticManager);
  nesl_destroy_simulation_data((NeslSimulationData *)
    PlatformAssem_DW.OUTPUT_1_0_SimulationData);
  nesl_erase_simulator("PlatformAssem/Solver Configuration_1");
}
