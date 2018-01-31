/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PlatformAssem/Solver Configuration'.
 */

#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"

PmfMessageId sm_ssci_recordRunTimeError(
  const char *errorId, const char *errorMsg, NeuDiagnosticManager* mgr);

#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))

PmIntVector *pm_create_int_vector(size_t, PmAllocator *);
int_T pm_create_int_vector_fields (PmIntVector *, size_t, PmAllocator *);
int_T pm_create_real_vector_fields(PmRealVector *, size_t, PmAllocator *);
int_T pm_create_char_vector_fields(PmCharVector *, size_t, PmAllocator *);
int_T pm_create_bool_vector_fields(PmBoolVector *, size_t, PmAllocator *);
void pm_rv_equals_rv(const PmRealVector *, const PmRealVector *);
void sm_ssci_setupLoggerFcn_codeGen(const NeDae *dae,
  NeLoggerBuilder *neLoggerBuilder);
int32_T sm_ssci_logFcn_codeGen(const NeDae *dae,
  const NeSystemInput *systemInput,
  PmRealVector *output);
extern const NeAssertData PlatformAssem_f0ca4364_1_assertData[];
void PlatformAssem_f0ca4364_1_computeRuntimeParameters(
  const double *runtimeRootVariables,
  double *runtimeParameters);
void PlatformAssem_f0ca4364_1_validateRuntimeParameters(
  const double *runtimeParameters,
  int32_T *assertSatisfactionFlags);
void PlatformAssem_f0ca4364_1_computeAsmRuntimeDerivedValues(
  const double *runtimeParameters,
  double *runtimeDerivedValues);
void PlatformAssem_f0ca4364_1_computeSimRuntimeDerivedValues(
  const double *runtimeParameters,
  double *runtimeDerivedValues);
PmfMessageId PlatformAssem_f0ca4364_1_deriv(
  const double *,
  const int *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId PlatformAssem_f0ca4364_1_checkDynamics(
  const double *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId PlatformAssem_f0ca4364_1_outputDyn(
  const double *,
  const int *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId PlatformAssem_f0ca4364_1_outputKin(
  const double *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
PmfMessageId PlatformAssem_f0ca4364_1_output (
  const double *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  NeuDiagnosticManager *neDiagMgr);
void PlatformAssem_f0ca4364_1_checkTargets(
  const double *runtimeDerivedValues,
  const double *stateVector);
void PlatformAssem_f0ca4364_1_setTargets(
  const double *runtimeDerivedValues,
  CTarget *targets);
void PlatformAssem_f0ca4364_1_resetStateVector(const void *mech, double
  *stateVector);
void PlatformAssem_f0ca4364_1_initializeTrackedAngleState(
  const void *mech,
  const double *runtimeDerivedValues,
  const double *motionData,
  double *stateVector,
  void *neDiagMgr);
void PlatformAssem_f0ca4364_1_computeDiscreteState(
  const void *mech,
  const double *runtimeDerivedValues,
  double *stateVector);
void PlatformAssem_f0ca4364_1_adjustPosition(
  const void *mech,
  const double *dofDeltas,
  double *stateVector);
void PlatformAssem_f0ca4364_1_perturbState(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  double magnitude,
  boolean_T doPerturbVelocity,
  double *stateVector);
void PlatformAssem_f0ca4364_1_computeDofBlendMatrix(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *stateVector,
  int partialType,
  double *matrix);
void PlatformAssem_f0ca4364_1_projectPartiallyTargetedPos(
  const void *mech,
  size_t stageIdx,
  size_t primitiveIdx,
  const double *origStateVector,
  int partialType,
  double *stateVector);
void PlatformAssem_f0ca4364_1_propagateMotion(
  const void *mech,
  const double *runtimeDerivedValues,
  const double *stateVector,
  double *motionData);
size_t PlatformAssem_f0ca4364_1_computeAssemblyError(
  const void *mech,
  const double *runtimeDerivedValues,
  size_t constraintIdx,
  const double *stateVector,
  const double *motionData,
  double *error);
size_t PlatformAssem_f0ca4364_1_computeAssemblyJacobian(
  const void *mech,
  const double *runtimeDerivedValues,
  size_t constraintIdx,
  boolean_T forVelocitySatisfaction,
  const double *stateVector,
  const double *motionData,
  double *J);
size_t PlatformAssem_f0ca4364_1_computeFullAssemblyJacobian(
  const void *mech,
  const double *runtimeDerivedValues,
  const double *stateVector,
  const double *motionData,
  double *J);
int PlatformAssem_f0ca4364_1_isInKinematicSingularity(
  const void *mech,
  const double *runtimeDerivedValues,
  size_t constraintIdx,
  const double *motionData);
PmfMessageId PlatformAssem_f0ca4364_1_convertStateVector(
  const void *asmMech,
  const double *asmRuntimeDerivedValues,
  const void *simMech,
  const double *asmStateVector,
  double *simStateVector,
  void *neDiagMgr);
void PlatformAssem_f0ca4364_1_constructStateVector(
  const void *mech,
  const double *solverStateVector,
  const double *u,
  const double *uDot,
  const double *discreteStateVector,
  double *fullStateVector);
void PlatformAssem_f0ca4364_1_extractSolverStateVector(
  const void *mech,
  const double *fullStateVector,
  double *solverStateVector);
int PlatformAssem_f0ca4364_1_isPositionViolation(
  const void *mech,
  const double *runtimeDerivedValues,
  const int *constraintEqnEnableFlags,
  const double *stateVector);
int PlatformAssem_f0ca4364_1_isVelocityViolation(
  const void *mech,
  const double *runtimeDerivedValues,
  const int *constraintEqnEnableFlags,
  const double *stateVector);
PmfMessageId PlatformAssem_f0ca4364_1_projectStateSim(
  const void *mech,
  const double *runtimeDerivedValues,
  const int *constraintEqnEnableFlags,
  const double *inputVector,
  double *stateVector,
  void *neDiagMgr);
void PlatformAssem_f0ca4364_1_computeConstraintError(
  const void *mech,
  const double *runtimeDerivedValues,
  const double *stateVector,
  double *error);
PmfMessageId PlatformAssem_f0ca4364_1_assemble(const double *u, double *udot,
  double *x,
  NeuDiagnosticManager *neDiagMgr)
{
  (void) x;
  (void) u;
  (void) udot;
  (void) neDiagMgr;
  return NULL;
}

static
  void dae_cg_setParameters_function(const NeDae *dae,
  const NeParameterBundle *paramBundle)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeRootVariables = paramBundle->mRealParameters.mX;
  if (smData->mRuntimeParameterScalars.mN == 0)
    return;
  PlatformAssem_f0ca4364_1_computeRuntimeParameters(
    runtimeRootVariables,
    smData->mRuntimeParameterScalars.mX);
  PlatformAssem_f0ca4364_1_computeAsmRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    smData->mAsmRuntimeDerivedValueScalars.mX);
  PlatformAssem_f0ca4364_1_computeSimRuntimeDerivedValues(
    smData->mRuntimeParameterScalars.mX,
    smData->mSimRuntimeDerivedValueScalars.mX);
  sm_core_computeRedundantConstraintEquations(
    &dae->mPrivateData->mSimulationDelegate,
    smData->mSimRuntimeDerivedValueScalars.mX);

#if 0

  {
    size_t i;
    const size_t n = smData->mSimulationDelegate.mRunTimeEnabledEquations.mSize;
    pmf_printf("\nRuntime Enabled Equations (%lu)\n", n);
    for (i = 0; i < n; ++i)
      pmf_printf("  %2lu:  %d\n", i,
                 smData->mSimulationDelegate.mRunTimeEnabledEquations.mValues[i]);
  }

#endif

}

static
  PmfMessageId dae_cg_pAssert_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  const double *runtimeParams = smData->mRuntimeParameterScalars.mX;
  int32_T *assertSatisfactionFlags = daeMethodOutput->mPASSERT.mX;
  (void) systemInput;
  (void) neDiagMgr;
  PlatformAssem_f0ca4364_1_validateRuntimeParameters(
    runtimeParams, assertSatisfactionFlags);
  return NULL;
}

static
  PmfMessageId dae_cg_deriv_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  const NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  double errorResult = 0.0;
  if (smData->mCachedDerivativesAvailable)
    memcpy(daeMethodOutput->mXP0.mX, smData->mCachedDerivatives.mX,
           73 * sizeof(real_T));
  else
    errorId = PlatformAssem_f0ca4364_1_deriv(
      smData->mSimRuntimeDerivedValueScalars.mX,
      smData->mSimulationDelegate
      .mRunTimeEnabledEquations.mValues,
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 6,
      systemInput->mV.mX + 6,
      systemInput->mD.mX,
      daeMethodOutput->mXP0.mX,
      &errorResult,
      neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_output_method(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeDaeMethodOutput *daeMethodOutput,
  NeuDiagnosticManager *neDiagMgr)
{
  PmfMessageId errorId = NULL;
  NeDaePrivateData *smData = dae->mPrivateData;
  errorId = PlatformAssem_f0ca4364_1_output(
    smData->mSimRuntimeDerivedValueScalars.mX,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 6,
    systemInput->mV.mX + 6,
    systemInput->mD.mX,
    daeMethodOutput->mY.mX, neDiagMgr);
  return errorId;
}

static
  PmfMessageId dae_cg_project_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    false,
    &smData->mSimulationDelegate,
    smData->mSimRuntimeDerivedValueScalars.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 6,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_check_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  PmfMessageId errorId = NULL;
  if (smData->mNumConstraintEqns > 0)
    errorId = sm_core_projectState(
      false,
      &smData->mSimulationDelegate,
      smData->mSimRuntimeDerivedValueScalars.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 6,
      systemInput->mD.mX,
      systemInput->mX.mX, neDiagMgr);
  if (errorId == NULL && smData->mDoCheckDynamics) {
    double result = 0.0;
    errorId = PlatformAssem_f0ca4364_1_checkDynamics(
      smData->mSimRuntimeDerivedValueScalars.mX,
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 6,
      systemInput->mV.mX + 6,
      systemInput->mD.mX,
      &result, neDiagMgr);
  }

  return errorId;
}

static
  PmfMessageId dae_cg_projectMaybe_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  return
    sm_core_projectState(
    true,
    &smData->mSimulationDelegate,
    smData->mSimRuntimeDerivedValueScalars.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 6,
    systemInput->mD.mX,
    systemInput->mX.mX, neDiagMgr);
}

static
  PmfMessageId dae_cg_assemble_solve(const NeDae *dae,
  const NeSystemInput *systemInput,
  NeuDiagnosticManager *neDiagMgr)
{
  NeDaePrivateData *smData = dae->mPrivateData;
  const SmMechanismDelegate *delegate = &smData->mAssemblyDelegate;
  const double *runtimeDerivedValues =
    smData->mAsmRuntimeDerivedValueScalars.mX;
  PmfMessageId errorId = NULL;
  size_t i;
  const size_t numTargets = 72;
  unsigned int asmStatus = 0;
  double *assemblyFullStateVector = smData->mAssemblyFullStateVector.mX;
  double *simulationFullStateVector = smData->mSimulationFullStateVector.mX;
  (*delegate->mSetTargets)(runtimeDerivedValues, smData->mTargets);

  {
    const double *u = systemInput->mU.mX;
    const double *uDot = u + smData->mInputVectorSize;
    CTarget *target = smData->mTargets + smData->mNumInternalTargets;
    for (i = 0; i < smData->mNumInputMotionPrimitives; ++i) {
      const size_t inputOffset = smData->mMotionInputOffsets.mX[i];
      (target++)->mValue[0] = u [inputOffset];
      (target++)->mValue[0] = uDot[inputOffset];
    }
  }

  errorId = sm_core_computeStateVector(
    delegate, runtimeDerivedValues, numTargets, smData->mTargets,
    assemblyFullStateVector, neDiagMgr);
  if (errorId != NULL)
    return errorId;
  asmStatus = sm_core_checkAssembly(
    delegate, runtimeDerivedValues, numTargets, smData->mTargets,
    assemblyFullStateVector, NULL, NULL, NULL);
  if (asmStatus != 1) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:AssemblyFailure",
      asmStatus == 2 ?
      "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
      :
      (asmStatus == 3 ?
       "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
       :
       "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."),
      neDiagMgr);
  }

#if 0

  PlatformAssem_f0ca4364_1_checkTargets(
    smData->mSimRuntimeDerivedValueScalars.mX,
    assemblyFullStateVector);

#endif

  errorId =
    (*delegate->mConvertStateVector)(
    NULL, runtimeDerivedValues, NULL,
    assemblyFullStateVector, simulationFullStateVector,
    neDiagMgr);
  for (i = 0; i < smData->mStateVectorSize; ++i)
    systemInput->mX.mX[i] = simulationFullStateVector[smData->
      mStateVectorMap.mX[i]];
  memcpy(systemInput->mD.mX,
         simulationFullStateVector +
         smData->mFullStateVectorSize - smData->mDiscreteStateSize,
         smData->mDiscreteStateSize * sizeof(double));
  return errorId;
}

typedef struct {
  size_t first;
  size_t second;
} SizePair;

static void checkMemAllocStatus(int_T status)
{
  (void) status;
}

static
  PmCharVector cStringToCharVector(const char *src)
{
  const size_t n = strlen(src);
  PmCharVector charVect;
  const int_T status =
    pm_create_char_vector_fields(&charVect, n + 1, pm_default_allocator());
  checkMemAllocStatus(status);
  strcpy(charVect.mX, src);
  return charVect;
}

static
  void initBasicAttributes(NeDaePrivateData *smData)
{
  size_t i;
  smData->mStateVectorSize = 73;
  smData->mFullStateVectorSize = 85;
  smData->mDiscreteStateSize = 0;
  smData->mInputVectorSize = 6;
  smData->mOutputVectorSize = 13;
  smData->mNumConstraintEqns = 15;
  smData->mDoCheckDynamics = false;
  for (i = 0; i < 4; ++i)
    smData->mChecksum[i] = 0;
}

static
  void initStateVector(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T stateVectorMap[73] = {
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 43, 44, 45,
    46, 47, 48, 49, 50, 51, 54, 55, 56, 57,
    58, 59, 60, 61, 62, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 76, 77, 78, 79, 80, 81,
    82, 83, 84
  };

  const CTarget targets[72] = {
    { 0, 48, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { -1.018549300729721052e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 48, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 49, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 49, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 50, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 50, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 51, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 51, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 115, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +2.382859262782761611e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 115, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 116, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 116, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 117, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 117, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 118, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 118, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 182, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +2.490431362152450756e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 182, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 183, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -2.463899001709734193e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 183, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 184, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 184, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 185, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 185, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 249, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.019867907627666437e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 249, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 250, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 250, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 251, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 251, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 252, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 252, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 316, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 316, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 317, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +2.640842397216951465e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 317, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 318, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 318, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 319, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 319, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 383, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 383, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 384, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.014495499552818147e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 384, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 385, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 385, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 386, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 386, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 438, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +1.337150638576102946e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 438, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 439, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.506495679411314459e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 439, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 440, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.265152657127831093e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 440, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 441, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.349197570585041639e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 441, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 442, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +1.391746626262768682e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 442, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 443, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +1.424764767632256346e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 443, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 438, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 438, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 439, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 439, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 442, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 442, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 441, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 441, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 443, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 443, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 440, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 440, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } }
  };

  const size_t numTargets = 72;
  int_T status;
  size_t i;
  status = pm_create_real_vector_fields(
    &smData->mAssemblyFullStateVector, 85, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mSimulationFullStateVector, 85, alloc);
  checkMemAllocStatus(status);
  status = pm_create_int_vector_fields(
    &smData->mStateVectorMap, smData->mStateVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mStateVectorMap.mX, stateVectorMap,
         smData->mStateVectorSize * sizeof(int32_T));
  smData->mNumInternalTargets = 60;
  smData->mNumInputMotionPrimitives = 6;
  PM_ALLOCATE_ARRAY(smData->mTargets, CTarget, numTargets, alloc);
  for (i = 0; i < numTargets; ++i)
    sm_compiler_CTarget_copy(targets + i, smData->mTargets + i);
}

static void initAsserts(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  smData->mNumParamAsserts = 0;
  smData->mParamAssertObjects = NULL;
  smData->mParamAssertPaths = NULL;
  smData->mParamAssertDescriptors = NULL;
  smData->mParamAssertMessages = NULL;
  smData->mParamAssertMessageIds = NULL;
  status = pm_create_bool_vector_fields(
    &smData->mParamAssertIsWarnings, smData->mNumParamAsserts, alloc);
  checkMemAllocStatus(status);
  if (smData->mNumParamAsserts > 0) {
    const NeAssertData *ad = PlatformAssem_f0ca4364_1_assertData;
    size_t i;
    PM_ALLOCATE_ARRAY(smData->mParamAssertObjects,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertPaths,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertDescriptors,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessages,
                      PmCharVector, 0, alloc);
    PM_ALLOCATE_ARRAY(smData->mParamAssertMessageIds,
                      PmCharVector, 0, alloc);
    for (i = 0; i < smData->mNumParamAsserts; ++i, ++ad) {
      smData->mParamAssertObjects [i] = cStringToCharVector(ad->mObject );
      smData->mParamAssertPaths [i] = cStringToCharVector(ad->mPath );
      smData->mParamAssertDescriptors[i] = cStringToCharVector(ad->mDescriptor);
      smData->mParamAssertMessages [i] = cStringToCharVector(ad->mMessage );
      smData->mParamAssertMessageIds [i] = cStringToCharVector(ad->mMessageID );
      smData->mParamAssertIsWarnings.mX[i] = ad->mIsWarn;
    }
  }
}

static
  void initVariables(NeDaePrivateData *smData)
{
  const char *varFullPaths[73] = {
    "Linkage_1.Revolute.Rz.q",
    "Linkage_1.Revolute.Rz.w",
    "Linkage_1.Spherical_Joint12.S.Q",
    "Linkage_1.Spherical_Joint12.S.Q",
    "Linkage_1.Spherical_Joint12.S.Q",
    "Linkage_1.Spherical_Joint12.S.Q",
    "Linkage_1.Spherical_Joint12.S.w",
    "Linkage_1.Spherical_Joint12.S.w",
    "Linkage_1.Spherical_Joint12.S.w",
    "Linkage_1.Spherical_Joint1.S.Q",
    "Linkage_1.Spherical_Joint1.S.Q",
    "Linkage_1.Spherical_Joint1.S.Q",
    "Linkage_1.Spherical_Joint1.S.Q",
    "Linkage_1.Spherical_Joint1.S.w",
    "Linkage_1.Spherical_Joint1.S.w",
    "Linkage_1.Spherical_Joint1.S.w",
    "Linkage_1.Revolute13.Rz.q",
    "Linkage_1.Revolute13.Rz.w",
    "Linkage_2.Revolute10.Rz.q",
    "Linkage_2.Revolute10.Rz.w",
    "Linkage_3.Revolute8.Rz.q",
    "Linkage_3.Revolute8.Rz.w",
    "Linkage_4.Revolute9.Rz.q",
    "Linkage_4.Revolute9.Rz.w",
    "Linkage_5.Revolute11.Rz.q",
    "Linkage_5.Revolute11.Rz.w",
    "Linkage_6.Revolute12.Rz.q",
    "Linkage_6.Revolute12.Rz.w",
    "Linkage_2.Revolute1.Rz.q",
    "Linkage_2.Revolute1.Rz.w",
    "Linkage_2.Spherical_Joint11.S.Q",
    "Linkage_2.Spherical_Joint11.S.Q",
    "Linkage_2.Spherical_Joint11.S.Q",
    "Linkage_2.Spherical_Joint11.S.Q",
    "Linkage_2.Spherical_Joint11.S.w",
    "Linkage_2.Spherical_Joint11.S.w",
    "Linkage_2.Spherical_Joint11.S.w",
    "Linkage_3.Revolute2.Rz.q",
    "Linkage_3.Revolute2.Rz.w",
    "Linkage_3.Spherical_Joint9.S.Q",
    "Linkage_3.Spherical_Joint9.S.Q",
    "Linkage_3.Spherical_Joint9.S.Q",
    "Linkage_3.Spherical_Joint9.S.Q",
    "Linkage_3.Spherical_Joint9.S.w",
    "Linkage_3.Spherical_Joint9.S.w",
    "Linkage_3.Spherical_Joint9.S.w",
    "Linkage_4.Revolute4.Rz.q",
    "Linkage_4.Revolute4.Rz.w",
    "Linkage_4.Spherical_Joint7.S.Q",
    "Linkage_4.Spherical_Joint7.S.Q",
    "Linkage_4.Spherical_Joint7.S.Q",
    "Linkage_4.Spherical_Joint7.S.Q",
    "Linkage_4.Spherical_Joint7.S.w",
    "Linkage_4.Spherical_Joint7.S.w",
    "Linkage_4.Spherical_Joint7.S.w",
    "Linkage_5.Revolute5.Rz.q",
    "Linkage_5.Revolute5.Rz.w",
    "Linkage_5.Spherical_Joint5.S.Q",
    "Linkage_5.Spherical_Joint5.S.Q",
    "Linkage_5.Spherical_Joint5.S.Q",
    "Linkage_5.Spherical_Joint5.S.Q",
    "Linkage_5.Spherical_Joint5.S.w",
    "Linkage_5.Spherical_Joint5.S.w",
    "Linkage_5.Spherical_Joint5.S.w",
    "Linkage_6.Revolute7.Rz.q",
    "Linkage_6.Revolute7.Rz.w",
    "Linkage_6.Spherical_Joint3.S.Q",
    "Linkage_6.Spherical_Joint3.S.Q",
    "Linkage_6.Spherical_Joint3.S.Q",
    "Linkage_6.Spherical_Joint3.S.Q",
    "Linkage_6.Spherical_Joint3.S.w",
    "Linkage_6.Spherical_Joint3.S.w",
    "Linkage_6.Spherical_Joint3.S.w"
  };

  const char *varObjects[73] = {
    "PlatformAssem/Linkage_1/Revolute",
    "PlatformAssem/Linkage_1/Revolute",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint12",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Spherical Joint1",
    "PlatformAssem/Linkage_1/Revolute13",
    "PlatformAssem/Linkage_1/Revolute13",
    "PlatformAssem/Linkage_2 /Revolute10",
    "PlatformAssem/Linkage_2 /Revolute10",
    "PlatformAssem/Linkage_3/Revolute8",
    "PlatformAssem/Linkage_3/Revolute8",
    "PlatformAssem/Linkage_4/Revolute9",
    "PlatformAssem/Linkage_4/Revolute9",
    "PlatformAssem/Linkage_5/Revolute11",
    "PlatformAssem/Linkage_5/Revolute11",
    "PlatformAssem/Linkage_6/Revolute12",
    "PlatformAssem/Linkage_6/Revolute12",
    "PlatformAssem/Linkage_2 /Revolute1",
    "PlatformAssem/Linkage_2 /Revolute1",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_2 /Spherical Joint11",
    "PlatformAssem/Linkage_3/Revolute2",
    "PlatformAssem/Linkage_3/Revolute2",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_3/Spherical Joint9",
    "PlatformAssem/Linkage_4/Revolute4",
    "PlatformAssem/Linkage_4/Revolute4",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_4/Spherical Joint7",
    "PlatformAssem/Linkage_5/Revolute5",
    "PlatformAssem/Linkage_5/Revolute5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_5/Spherical Joint5",
    "PlatformAssem/Linkage_6/Revolute7",
    "PlatformAssem/Linkage_6/Revolute7",
    "PlatformAssem/Linkage_6/Spherical Joint3",
    "PlatformAssem/Linkage_6/Spherical Joint3",
    "PlatformAssem/Linkage_6/Spherical Joint3",
    "PlatformAssem/Linkage_6/Spherical Joint3",
    "PlatformAssem/Linkage_6/Spherical Joint3",
    "PlatformAssem/Linkage_6/Spherical Joint3",
    "PlatformAssem/Linkage_6/Spherical Joint3"
  };

  smData->mNumVarScalars = 73;
  smData->mVarFullPaths = NULL;
  smData->mVarObjects = NULL;
  if (smData->mNumVarScalars > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(smData->mVarFullPaths, PmCharVector, 73, alloc);
    PM_ALLOCATE_ARRAY(smData->mVarObjects, PmCharVector, 73, alloc);
    for (s = 0; s < smData->mNumVarScalars; ++s) {
      smData->mVarFullPaths[s] = cStringToCharVector(varFullPaths[s]);
      smData->mVarObjects[s] = cStringToCharVector(varObjects[s]);
    }
  }
}

static
  void initRuntimeParameters(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  int_T status = 0;
  size_t i = 0;
  const int32_T *rtpRootVarRows = NULL;
  const int32_T *rtpRootVarCols = NULL;
  const char **rtpFullPaths = NULL;
  smData->mNumRtpRootVars = 0;
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarRows, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarRows.mX, rtpRootVarRows,
         smData->mNumRtpRootVars * sizeof(int32_T));
  status = pm_create_int_vector_fields(
    &smData->mRtpRootVarCols, smData->mNumRtpRootVars, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mRtpRootVarCols.mX, rtpRootVarCols,
         smData->mNumRtpRootVars * sizeof(int32_T));
  smData->mRtpFullPaths = NULL;
  if (smData->mNumRtpRootVars > 0) {
    size_t v;
    PM_ALLOCATE_ARRAY(smData->mRtpFullPaths, PmCharVector, 0, alloc);
    for (v = 0; v < smData->mNumRtpRootVars; ++v) {
      smData->mRtpFullPaths[v] = cStringToCharVector(rtpFullPaths[v]);
    }
  }

  smData->mNumRuntimeRootVarScalars = 0;
  status = pm_create_real_vector_fields(
    &smData->mRuntimeParameterScalars, 0,
    alloc);
  checkMemAllocStatus(status);
  for (i = 0; i < smData->mRuntimeParameterScalars.mN; ++i)
    smData->mRuntimeParameterScalars.mX[i] = 0.0;
  status = pm_create_real_vector_fields(
    &smData->mAsmRuntimeDerivedValueScalars, 0,
    alloc);
  checkMemAllocStatus(status);
  for (i = 0; i < smData->mAsmRuntimeDerivedValueScalars.mN; ++i)
    smData->mAsmRuntimeDerivedValueScalars.mX[i] = 0.0;
  status = pm_create_real_vector_fields(
    &smData->mSimRuntimeDerivedValueScalars, 0,
    alloc);
  checkMemAllocStatus(status);
  for (i = 0; i < smData->mSimRuntimeDerivedValueScalars.mN; ++i)
    smData->mSimRuntimeDerivedValueScalars.mX[i] = 0.0;
}

static
  void initIoInfoHelper(
  size_t n,
  const char *portPathsSource[],
  const char *unitsSource[],
  const SizePair dimensions[],
  boolean_T doInputs,
  NeDaePrivateData *smData)
{
  PmCharVector *portPaths = NULL;
  PmCharVector *units = NULL;
  NeDsIoInfo *infos = NULL;
  if (n > 0) {
    size_t s;
    PmAllocator *alloc = pm_default_allocator();
    PM_ALLOCATE_ARRAY(portPaths, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(units, PmCharVector, n, alloc);
    PM_ALLOCATE_ARRAY(infos, NeDsIoInfo, n, alloc);
    for (s = 0; s < n; ++s) {
      portPaths[s] = cStringToCharVector(portPathsSource[s]);
      units[s] = cStringToCharVector(unitsSource[s]);

      {
        NeDsIoInfo *info = infos + s;
        info->mName = info->mIdentifier = portPaths[s].mX;
        info->mM = dimensions[s].first;
        info->mN = dimensions[s].second;
        info->mUnit = units[s].mX;
      }
    }
  }

  if (doInputs) {
    smData->mNumInputs = n;
    smData->mInputPortPaths = portPaths;
    smData->mInputUnits = units;
    smData->mInputInfos = infos;
  } else {
    smData->mNumOutputs = n;
    smData->mOutputPortPaths = portPaths;
    smData->mOutputUnits = units;
    smData->mOutputInfos = infos;
  }
}

static
  void initIoInfo(NeDaePrivateData *smData)
{
  const char *inputPortPaths[6] = {
    "Revolute14.qi",
    "Revolute15.qi",
    "Revolute16.qi",
    "Revolute17.qi",
    "Revolute3.qi",
    "Revolute6.qi"
  };

  const char *inputUnits[6] = {
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad"
  };

  const SizePair inputDimensions[6] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }
  };

  const char *outputPortPaths[10] = {
    "Revolute14.q",
    "Revolute15.q",
    "Revolute16.q",
    "Revolute17.q",
    "Revolute3.q",
    "Revolute6.q",
    "Transform_Sensor.Q",
    "Transform_Sensor1.x",
    "Transform_Sensor1.y",
    "Transform_Sensor1.z"
  };

  const char *outputUnits[10] = {
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "1",
    "m",
    "m",
    "m"
  };

  const SizePair outputDimensions[10] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 4, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }
  };

  initIoInfoHelper(6, inputPortPaths, inputUnits, inputDimensions,
                   true, smData);
  initIoInfoHelper(10, outputPortPaths, outputUnits, outputDimensions,
                   false, smData);
}

static
  void initInputDerivs(NeDaePrivateData *smData)
{
  const int32_T numInputDerivs[6] = {
    2, 2, 2, 2, 2, 2
  };

  PmAllocator *alloc = pm_default_allocator();
  const int_T status = pm_create_int_vector_fields(
    &smData->mNumInputDerivs, smData->mInputVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mNumInputDerivs.mX, numInputDerivs,
         6 * sizeof(int32_T));
  smData->mInputOrder = 2;
}

static
  void initDirectFeedthrough(NeDaePrivateData *smData)
{
  const boolean_T directFeedthroughVector[6] = {
    true, true, true, true, true, true
  };

  const boolean_T directFeedthroughMatrix[156] = {
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true
  };

  PmAllocator *alloc = pm_default_allocator();

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughVector, 6, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughVector.mX, directFeedthroughVector,
           6 * sizeof(boolean_T));
  }

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughMatrix, 156, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughMatrix.mX, directFeedthroughMatrix,
           156 * sizeof(boolean_T));
  }
}

static
  void initOutputDerivProc(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T outputFunctionMap[13] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
  };

  smData->mOutputFunctionMap = pm_create_int_vector(13, alloc);
  memcpy(smData->mOutputFunctionMap->mX, outputFunctionMap,
         13 * sizeof(int32_T));
  smData->mNumOutputClasses = 1;
  smData->mHasKinematicOutputs = true;
  smData->mHasDynamicOutputs = false;
  smData->mIsOutputClass0Dynamic = false;
  smData->mDoComputeDynamicOutputs = false;
  smData->mCachedDerivativesAvailable = false;

  {
    size_t i = 0;
    const int_T status = pm_create_real_vector_fields(
      &smData->mCachedDerivatives, 0, pm_default_allocator());
    checkMemAllocStatus(status);
    for (i = 0; i < smData->mCachedDerivatives.mN; ++i)
      smData->mCachedDerivatives.mX[i] = 0.0;
  }
}

#if 0

static void initializeSizePairVector(const SmSizePair *data,
  SmSizePairVector *vector)
{
  const size_t n = sm_core_SmSizePairVector_size(vector);
  size_t i;
  for (i = 0; i < n; ++i, ++data)
    sm_core_SmSizePairVector_setValue(vector, i, data++);
}

#endif

static
  void initAssemblyDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  const SmSizePair jointToStageIdx[25] = {
    { 48, 1 }, { 49, 4 }, { 50, 3 }, { 51, 2 }, { 115, 11 }, { 116, 5 },

    { 118, 12 }, { 182, 14 }, { 183, 6 }, { 185, 15 }, { 249, 17 }, { 250, 7 },

    { 252, 18 }, { 316, 8 }, { 317, 20 }, { 319, 21 }, { 383, 9 }, { 384, 23 },

    { 386, 24 }, { 438, 0 }, { 439, 10 }, { 440, 22 }, { 441, 16 }, { 442, 13 },

    { 443, 19 }
  };

  const size_t primitiveIndices[25 + 1] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25
  };

  const SmSizePair stateOffsets[25] = {
    { 0, 1 }, { 2, 3 }, { 4, 8 }, { 11, 15 }, { 18, 19 }, { 20, 21 },

    { 22, 23 }, { 24, 25 }, { 26, 27 }, { 28, 29 }, { 30, 31 }, { 32, 33 },

    { 34, 38 }, { 41, 42 }, { 43, 44 }, { 45, 49 }, { 52, 53 }, { 54, 55 },

    { 56, 60 }, { 63, 64 }, { 65, 66 }, { 67, 71 }, { 74, 75 }, { 76, 77 },

    { 78, 82 }
  };

  const SmSizePair dofOffsets[25] = {
    { 0, 1 }, { 1, 2 }, { 2, 5 }, { 5, 8 }, { 8, 9 }, { 9, 10 },

    { 10, 11 }, { 11, 12 }, { 12, 13 }, { 13, 14 }, { 14, 15 }, { 15, 16 },

    { 16, 19 }, { 19, 20 }, { 20, 21 }, { 21, 24 }, { 24, 25 }, { 25, 26 },

    { 26, 29 }, { 29, 30 }, { 30, 31 }, { 31, 34 }, { 34, 35 }, { 35, 36 },

    { 36, 39 }
  };

  const size_t remodIndices[18] = {
    0, 2, 18, 20, 22, 24, 26, 28, 30, 32,
    41, 43, 52, 54, 63, 65, 74, 76
  };

  const size_t equationsPerConstraint[5] = {
    3, 3, 3, 3, 3
  };

  const size_t dofToVelSlot[39] = {
    1, 3, 8, 9, 10, 15, 16, 17, 19, 21,
    23, 25, 27, 29, 31, 33, 38, 39, 40, 42,
    44, 49, 50, 51, 53, 55, 60, 61, 62, 64,
    66, 71, 72, 73, 75, 77, 82, 83, 84
  };

  const size_t constraintDofs[75] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    14, 15, 16, 17, 18, 0, 1, 2, 3, 4,
    5, 6, 7, 8, 10, 19, 20, 21, 22, 23,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 11,
    24, 25, 26, 27, 28, 0, 1, 2, 3, 4,
    5, 6, 7, 8, 12, 29, 30, 31, 32, 33,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 13,
    34, 35, 36, 37, 38
  };

  const size_t constraintDofOffsets[5 + 1] = {
    0, 15, 30, 45, 60, 75
  };

  const size_t Jm = 15;
  const size_t Jn = 39;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mDof = 39;
  delegate->mStateSize = 85;
  delegate->mContinuousStateSize = 85;
  delegate->mNumStages = 25;
  delegate->mNumConstraints = 5;
  delegate->mNumAllConstraintEquations = 15;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, delegate->mNumStages, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 25 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 25, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 25 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 25, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 25 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 18, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 18 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 1);
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 75, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 75 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 5);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    5, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 39, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 39, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 25, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 25, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 25, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 25, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 25, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 7, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mCvVelOffsets, 25, &zeroSizePair);
  sm_core_SmRealVector_create(
    &scratchpad->mCvAzimuthValues, 25, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 3055, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 39, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 39, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 633, 0.0);
  delegate->mSetTargets = PlatformAssem_f0ca4364_1_setTargets;
  delegate->mResetStateVector = PlatformAssem_f0ca4364_1_resetStateVector;
  delegate->mInitializeTrackedAngleState =
    PlatformAssem_f0ca4364_1_initializeTrackedAngleState;
  delegate->mComputeDiscreteState =
    PlatformAssem_f0ca4364_1_computeDiscreteState;
  delegate->mAdjustPosition = PlatformAssem_f0ca4364_1_adjustPosition;
  delegate->mPerturbState = PlatformAssem_f0ca4364_1_perturbState;
  delegate->mComputeDofBlendMatrix =
    PlatformAssem_f0ca4364_1_computeDofBlendMatrix;
  delegate->mProjectPartiallyTargetedPos =
    PlatformAssem_f0ca4364_1_projectPartiallyTargetedPos;
  delegate->mPropagateMotion = PlatformAssem_f0ca4364_1_propagateMotion;
  delegate->mComputeAssemblyError =
    PlatformAssem_f0ca4364_1_computeAssemblyError;
  delegate->mComputeAssemblyJacobian =
    PlatformAssem_f0ca4364_1_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    PlatformAssem_f0ca4364_1_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    PlatformAssem_f0ca4364_1_isInKinematicSingularity;
  delegate->mConvertStateVector = PlatformAssem_f0ca4364_1_convertStateVector;
  delegate->mConstructStateVector =
    PlatformAssem_f0ca4364_1_constructStateVector;
  delegate->mExtractSolverStateVector =
    PlatformAssem_f0ca4364_1_extractSolverStateVector;
  delegate->mIsPositionViolation = PlatformAssem_f0ca4364_1_isPositionViolation;
  delegate->mIsVelocityViolation = PlatformAssem_f0ca4364_1_isVelocityViolation;
  delegate->mProjectStateSim = PlatformAssem_f0ca4364_1_projectStateSim;
  delegate->mComputeConstraintError =
    PlatformAssem_f0ca4364_1_computeConstraintError;
  delegate->mMech = NULL;
}

static
  void initSimulationDelegate(SmMechanismDelegate *delegate)
{
  SmMechanismDelegateScratchpad *scratchpad = NULL;
  const SmSizePair jointToStageIdx[25] = {
    { 48, 1 }, { 49, 4 }, { 50, 3 }, { 51, 2 }, { 115, 11 }, { 116, 5 },

    { 118, 12 }, { 182, 14 }, { 183, 6 }, { 185, 15 }, { 249, 17 }, { 250, 7 },

    { 252, 18 }, { 316, 8 }, { 317, 20 }, { 319, 21 }, { 383, 9 }, { 384, 23 },

    { 386, 24 }, { 438, 0 }, { 439, 10 }, { 440, 22 }, { 441, 16 }, { 442, 13 },

    { 443, 19 }
  };

  const size_t primitiveIndices[25 + 1] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25
  };

  const SmSizePair stateOffsets[25] = {
    { 0, 1 }, { 2, 3 }, { 4, 8 }, { 11, 15 }, { 18, 19 }, { 20, 21 },

    { 22, 23 }, { 24, 25 }, { 26, 27 }, { 28, 29 }, { 30, 31 }, { 32, 33 },

    { 34, 38 }, { 41, 42 }, { 43, 44 }, { 45, 49 }, { 52, 53 }, { 54, 55 },

    { 56, 60 }, { 63, 64 }, { 65, 66 }, { 67, 71 }, { 74, 75 }, { 76, 77 },

    { 78, 82 }
  };

  const SmSizePair dofOffsets[25] = {
    { 0, 1 }, { 1, 2 }, { 2, 5 }, { 5, 8 }, { 8, 9 }, { 9, 10 },

    { 10, 11 }, { 11, 12 }, { 12, 13 }, { 13, 14 }, { 14, 15 }, { 15, 16 },

    { 16, 19 }, { 19, 20 }, { 20, 21 }, { 21, 24 }, { 24, 25 }, { 25, 26 },

    { 26, 29 }, { 29, 30 }, { 30, 31 }, { 31, 34 }, { 34, 35 }, { 35, 36 },

    { 36, 39 }
  };

  const size_t remodIndices[18] = {
    0, 2, 18, 20, 22, 24, 26, 28, 30, 32,
    41, 43, 52, 54, 63, 65, 74, 76
  };

  const size_t equationsPerConstraint[5] = {
    3, 3, 3, 3, 3
  };

  const size_t dofToVelSlot[39] = {
    1, 3, 8, 9, 10, 15, 16, 17, 19, 21,
    23, 25, 27, 29, 31, 33, 38, 39, 40, 42,
    44, 49, 50, 51, 53, 55, 60, 61, 62, 64,
    66, 71, 72, 73, 75, 77, 82, 83, 84
  };

  const size_t constraintDofs[75] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    14, 15, 16, 17, 18, 0, 1, 2, 3, 4,
    5, 6, 7, 8, 10, 19, 20, 21, 22, 23,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 11,
    24, 25, 26, 27, 28, 0, 1, 2, 3, 4,
    5, 6, 7, 8, 12, 29, 30, 31, 32, 33,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 13,
    34, 35, 36, 37, 38
  };

  const size_t constraintDofOffsets[5 + 1] = {
    0, 15, 30, 45, 60, 75
  };

  const size_t Jm = 15;
  const size_t Jn = 39;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000062e-09;
  delegate->mDof = 39;
  delegate->mStateSize = 85;
  delegate->mContinuousStateSize = 85;
  delegate->mNumStages = 25;
  delegate->mNumConstraints = 5;
  delegate->mNumAllConstraintEquations = 15;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, delegate->mNumStages, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 25 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 25, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 25 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 25, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 25 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 18, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 18 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mEquationsPerConstraint, delegate->mNumConstraints, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mEquationsPerConstraint),
         equationsPerConstraint, delegate->mNumConstraints * sizeof(size_t));
  sm_core_SmIntVector_create(
    &delegate->mRunTimeEnabledEquations,
    delegate->mNumAllConstraintEquations, 1);
  sm_core_SmSizeTVector_create(
    &delegate->mDofToVelSlot, delegate->mDof, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mDofToVelSlot),
         dofToVelSlot, delegate->mDof * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofs, 75, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofs),
         constraintDofs, 75 * sizeof(size_t));
  sm_core_SmSizeTVector_create(
    &delegate->mConstraintDofOffsets, delegate->mNumConstraints + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mConstraintDofOffsets),
         constraintDofOffsets, (delegate->mNumConstraints + 1) * sizeof(size_t));
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 39);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 5);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    5, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 39, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 39, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 25, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 25, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 25, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 25, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 25, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 7, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mCvVelOffsets, 25, &zeroSizePair);
  sm_core_SmRealVector_create(
    &scratchpad->mCvAzimuthValues, 25, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 3055, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 39, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 85, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 39, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 633, 0.0);
  delegate->mSetTargets = NULL;
  delegate->mResetStateVector = PlatformAssem_f0ca4364_1_resetStateVector;
  delegate->mInitializeTrackedAngleState =
    PlatformAssem_f0ca4364_1_initializeTrackedAngleState;
  delegate->mComputeDiscreteState =
    PlatformAssem_f0ca4364_1_computeDiscreteState;
  delegate->mAdjustPosition = PlatformAssem_f0ca4364_1_adjustPosition;
  delegate->mPerturbState = PlatformAssem_f0ca4364_1_perturbState;
  delegate->mComputeDofBlendMatrix = NULL;
  delegate->mProjectPartiallyTargetedPos = NULL;
  delegate->mPropagateMotion = PlatformAssem_f0ca4364_1_propagateMotion;
  delegate->mComputeAssemblyError =
    PlatformAssem_f0ca4364_1_computeAssemblyError;
  delegate->mComputeAssemblyJacobian =
    PlatformAssem_f0ca4364_1_computeAssemblyJacobian;
  delegate->mComputeFullAssemblyJacobian =
    PlatformAssem_f0ca4364_1_computeFullAssemblyJacobian;
  delegate->mIsInKinematicSingularity =
    PlatformAssem_f0ca4364_1_isInKinematicSingularity;
  delegate->mConvertStateVector = PlatformAssem_f0ca4364_1_convertStateVector;
  delegate->mConstructStateVector =
    PlatformAssem_f0ca4364_1_constructStateVector;
  delegate->mExtractSolverStateVector =
    PlatformAssem_f0ca4364_1_extractSolverStateVector;
  delegate->mIsPositionViolation = PlatformAssem_f0ca4364_1_isPositionViolation;
  delegate->mIsVelocityViolation = PlatformAssem_f0ca4364_1_isVelocityViolation;
  delegate->mProjectStateSim = PlatformAssem_f0ca4364_1_projectStateSim;
  delegate->mComputeConstraintError =
    PlatformAssem_f0ca4364_1_computeConstraintError;
  delegate->mMech = NULL;
}

static
  void initMechanismDelegates(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T motionInputOffsets[6] = {
    0, 1, 4, 3, 5, 2
  };

  int_T status = 0;
  initAssemblyDelegate(&smData->mAssemblyDelegate);
  initSimulationDelegate(&smData->mSimulationDelegate);
  status = pm_create_int_vector_fields(
    &smData->mMotionInputOffsets, smData->mNumInputMotionPrimitives, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMotionInputOffsets.mX, motionInputOffsets,
         6 * sizeof(int32_T));
}

static
  void initComputationFcnPtrs(NeDaePrivateData *smData)
{
  smData->mSetParametersFcn = dae_cg_setParameters_function;
  smData->mPAssertFcn = dae_cg_pAssert_method;
  smData->mDerivativeFcn = dae_cg_deriv_method;
  smData->mOutputFcn = dae_cg_output_method;
  smData->mProjectionFcn = dae_cg_project_solve;
  smData->mProjectionMaybeFcn = dae_cg_projectMaybe_solve;
  smData->mCheckFcn =
    (smData->mStateVectorSize == 0) ? dae_cg_check_solve : NULL;
  smData->mAssemblyFcn = dae_cg_assemble_solve;
  smData->mSetupLoggerFcn = sm_ssci_setupLoggerFcn_codeGen;
  smData->mLogFcn = sm_ssci_logFcn_codeGen;
  smData->mResidualsFcn = NULL;
  smData->mLinearizeFcn = NULL;
  smData->mGenerateFcn = NULL;
}

static
  void initLiveLinkToSm(NeDaePrivateData *smData)
{
  smData->mLiveSmLink = NULL;
  smData->mLiveSmLink_destroy = NULL;
  smData->mLiveSmLink_copy = NULL;
}

void PlatformAssem_f0ca4364_1_NeDaePrivateData_create(NeDaePrivateData *smData)
{
  initBasicAttributes (smData);
  initStateVector (smData);
  initAsserts (smData);
  initVariables (smData);
  initRuntimeParameters (smData);
  initIoInfo (smData);
  initInputDerivs (smData);
  initDirectFeedthrough (smData);
  initOutputDerivProc (smData);
  initMechanismDelegates (smData);
  initComputationFcnPtrs (smData);
  initLiveLinkToSm (smData);
}
