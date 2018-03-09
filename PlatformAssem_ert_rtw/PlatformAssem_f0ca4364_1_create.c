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
  const int *,
  const double *,
  const double *, const double *, const double *,
  const double *,
  double *,
  double *,
  int *,
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
      systemInput->mU.mX + 12,
      systemInput->mV.mX + 12,
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
  int derivErr = 0;
  double errorResult = 0.0;
  errorId = PlatformAssem_f0ca4364_1_output(
    smData->mSimRuntimeDerivedValueScalars.mX,
    smData->mSimulationDelegate
    .mRunTimeEnabledEquations.mValues,
    systemInput->mX.mX,
    systemInput->mU.mX,
    systemInput->mU.mX + 12,
    systemInput->mV.mX + 12,
    systemInput->mD.mX,
    smData->mCachedDerivatives.mX, daeMethodOutput->mY.mX,
    &derivErr, &errorResult, neDiagMgr);
  smData->mCachedDerivativesAvailable = (derivErr == 0);
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
    systemInput->mU.mX + 12,
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
      systemInput->mU.mX + 12,
      systemInput->mD.mX,
      systemInput->mX.mX, neDiagMgr);
  if (errorId == NULL && smData->mDoCheckDynamics) {
    double result = 0.0;
    errorId = PlatformAssem_f0ca4364_1_checkDynamics(
      smData->mSimRuntimeDerivedValueScalars.mX,
      systemInput->mX.mX,
      systemInput->mU.mX,
      systemInput->mU.mX + 12,
      systemInput->mV.mX + 12,
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
    systemInput->mU.mX + 12,
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
  const size_t numTargets = 96;
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
  smData->mFullStateVectorSize = 97;
  smData->mDiscreteStateSize = 0;
  smData->mInputVectorSize = 12;
  smData->mOutputVectorSize = 23;
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
    14, 15, 16, 17, 18, 19, 20, 21, 22, 25,
    26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
    46, 47, 48, 49, 50, 51, 52, 55, 56, 57,
    58, 59, 60, 61, 62, 63, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 77, 78, 79, 80, 81,
    82, 83, 84, 85, 88, 89, 90, 91, 92, 93,
    94, 95, 96
  };

  const CTarget targets[96] = {
    { 0, 37, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 1, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 1, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 2, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 2, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 0, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 1, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 1, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 2, false, 0, 0, "1", false, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 2, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 41, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.012652809798347493e-03, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 41, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 42, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.388300831641142263e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 42, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 43, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +1.781571986409768549e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 43, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 44, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.362322965703596012e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 44, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 45, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.362322965703596012e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 45, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 46, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.362322965703596012e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 46, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 47, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { -1.056388915111651894e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 47, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 48, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.039470104846169196e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 48, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 49, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.362322965703596012e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 49, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 50, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { -5.530111171550032845e-01, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 50, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 51, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.362322965703596012e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 51, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 52, 0, false, 0, 2, "deg", false, true, +1.000000000000000000e+00, true,
      1, { +2.362322965703596012e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 52, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 67, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +8.679845613867877008e-01, -2.520714534242165031e-02,
        +7.616585726701231851e-02, -4.900675088236854937e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 67, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 68, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +5.310360643905063238e-01, -6.925218732415480694e-02,
        -7.293874989381045337e-02, -8.413588839677099696e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 68, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 137, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +2.405513786819494376e-02, +8.272208255874109739e-02,
        +3.530709564348077922e-02, -9.956564750939497221e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 137, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 138, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 138, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 207, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +6.994880974294361842e-01, -3.697380065417853190e-02,
        +2.529955807070240550e-02, -7.132385799865006426e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 207, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 208, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 208, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 277, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +7.904202309668428850e-01, +1.025700399892530285e-01,
        +1.117930042770799576e-01, -5.934792073608228247e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 277, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 278, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 278, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 347, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +1.143169270550686567e-01, -3.609674750416495131e-02,
        +4.519775266403786712e-02, +9.917589566837433646e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 347, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 348, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 348, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 417, 0, false, 0, 1, "deg", false, false, +1.000000000000000000e+00,
      true, 4, { +2.482724306138014148e-01, +3.182746592772086464e-02,
        -2.691051723454253308e-02, +9.677931786657231195e-01 }, { +
        0.000000000000000000e+00 } },

    { 2, 417, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 1, 418, 0, false, 0, 0, "1", false, false, +1.000000000000000000e+00, true,
      4, { +1.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 2, 418, 0, false, 0, 0, "1", true, false, +1.000000000000000000e+00, true,
      3, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 494, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.251818079313458787e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 494, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 495, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -1.132888551326486581e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 495, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 496, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +1.042679880087957534e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 496, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 497, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -2.419573451125593078e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 497, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 498, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { -2.580446433620751545e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 498, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 499, 0, false, 0, 1, "deg", false, true, +1.000000000000000000e+00,
      true, 1, { +3.133047232303861396e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 499, 0, false, 0, 0, "1", true, true, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 1, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 1, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 2, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 37, 2, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 1, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 1, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 2, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 38, 2, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 45, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 45, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 44, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 44, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 52, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 52, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 46, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 46, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 49, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 49, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 51, 0, false, 0, 3, "", false, false, +1.000000000000000000e+00, true,
      1, { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } },

    { 0, 51, 0, false, 0, 3, "", true, false, +1.000000000000000000e+00, true, 1,
      { +0.000000000000000000e+00, +0.000000000000000000e+00,
        +0.000000000000000000e+00, +0.000000000000000000e+00 }, { +
        0.000000000000000000e+00 } }
  };

  const size_t numTargets = 96;
  int_T status;
  size_t i;
  status = pm_create_real_vector_fields(
    &smData->mAssemblyFullStateVector, 97, alloc);
  checkMemAllocStatus(status);
  status = pm_create_real_vector_fields(
    &smData->mSimulationFullStateVector, 97, alloc);
  checkMemAllocStatus(status);
  status = pm_create_int_vector_fields(
    &smData->mStateVectorMap, smData->mStateVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mStateVectorMap.mX, stateVectorMap,
         smData->mStateVectorSize * sizeof(int32_T));
  smData->mNumInternalTargets = 72;
  smData->mNumInputMotionPrimitives = 12;
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
    "Revolute13.Rz.q",
    "Revolute13.Rz.w",
    "Rod_assem_1.Spherical.S.Q",
    "Rod_assem_1.Spherical.S.Q",
    "Rod_assem_1.Spherical.S.Q",
    "Rod_assem_1.Spherical.S.Q",
    "Rod_assem_1.Spherical.S.w",
    "Rod_assem_1.Spherical.S.w",
    "Rod_assem_1.Spherical.S.w",
    "Revolute.Rz.q",
    "Revolute.Rz.w",
    "Rod_assem_15.Spherical.S.Q",
    "Rod_assem_15.Spherical.S.Q",
    "Rod_assem_15.Spherical.S.Q",
    "Rod_assem_15.Spherical.S.Q",
    "Rod_assem_15.Spherical.S.w",
    "Rod_assem_15.Spherical.S.w",
    "Rod_assem_15.Spherical.S.w",
    "Rod_assem_15.Spherical1.S.Q",
    "Rod_assem_15.Spherical1.S.Q",
    "Rod_assem_15.Spherical1.S.Q",
    "Rod_assem_15.Spherical1.S.Q",
    "Rod_assem_15.Spherical1.S.w",
    "Rod_assem_15.Spherical1.S.w",
    "Rod_assem_15.Spherical1.S.w",
    "Subsystem.Revolute9.Rz.q",
    "Subsystem.Revolute9.Rz.w",
    "Subsystem.Revolute15.Rz.q",
    "Subsystem.Revolute15.Rz.w",
    "Subsystem.Revolute12.Rz.q",
    "Subsystem.Revolute12.Rz.w",
    "Subsystem.Revolute11.Rz.q",
    "Subsystem.Revolute11.Rz.w",
    "Subsystem.Revolute10.Rz.q",
    "Subsystem.Revolute10.Rz.w",
    "Subsystem.Revolute14.Rz.q",
    "Subsystem.Revolute14.Rz.w",
    "Revolute1.Rz.q",
    "Revolute1.Rz.w",
    "Rod_assem_12.Spherical.S.Q",
    "Rod_assem_12.Spherical.S.Q",
    "Rod_assem_12.Spherical.S.Q",
    "Rod_assem_12.Spherical.S.Q",
    "Rod_assem_12.Spherical.S.w",
    "Rod_assem_12.Spherical.S.w",
    "Rod_assem_12.Spherical.S.w",
    "Revolute4.Rz.q",
    "Revolute4.Rz.w",
    "Rod_assem_11.Spherical.S.Q",
    "Rod_assem_11.Spherical.S.Q",
    "Rod_assem_11.Spherical.S.Q",
    "Rod_assem_11.Spherical.S.Q",
    "Rod_assem_11.Spherical.S.w",
    "Rod_assem_11.Spherical.S.w",
    "Rod_assem_11.Spherical.S.w",
    "Revolute5.Rz.q",
    "Revolute5.Rz.w",
    "Rod_assem_13.Spherical.S.Q",
    "Rod_assem_13.Spherical.S.Q",
    "Rod_assem_13.Spherical.S.Q",
    "Rod_assem_13.Spherical.S.Q",
    "Rod_assem_13.Spherical.S.w",
    "Rod_assem_13.Spherical.S.w",
    "Rod_assem_13.Spherical.S.w",
    "Revolute7.Rz.q",
    "Revolute7.Rz.w",
    "Rod_assem_14.Spherical.S.Q",
    "Rod_assem_14.Spherical.S.Q",
    "Rod_assem_14.Spherical.S.Q",
    "Rod_assem_14.Spherical.S.Q",
    "Rod_assem_14.Spherical.S.w",
    "Rod_assem_14.Spherical.S.w",
    "Rod_assem_14.Spherical.S.w"
  };

  const char *varObjects[73] = {
    "PlatformAssem/Revolute13",
    "PlatformAssem/Revolute13",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Rod_assem_1/Spherical",
    "PlatformAssem/Revolute",
    "PlatformAssem/Revolute",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Rod_assem_15/Spherical1",
    "PlatformAssem/Subsystem/Revolute9",
    "PlatformAssem/Subsystem/Revolute9",
    "PlatformAssem/Subsystem/Revolute15",
    "PlatformAssem/Subsystem/Revolute15",
    "PlatformAssem/Subsystem/Revolute12",
    "PlatformAssem/Subsystem/Revolute12",
    "PlatformAssem/Subsystem/Revolute11",
    "PlatformAssem/Subsystem/Revolute11",
    "PlatformAssem/Subsystem/Revolute10",
    "PlatformAssem/Subsystem/Revolute10",
    "PlatformAssem/Subsystem/Revolute14",
    "PlatformAssem/Subsystem/Revolute14",
    "PlatformAssem/Revolute1",
    "PlatformAssem/Revolute1",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Rod_assem_12/Spherical",
    "PlatformAssem/Revolute4",
    "PlatformAssem/Revolute4",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Rod_assem_11/Spherical",
    "PlatformAssem/Revolute5",
    "PlatformAssem/Revolute5",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Rod_assem_13/Spherical",
    "PlatformAssem/Revolute7",
    "PlatformAssem/Revolute7",
    "PlatformAssem/Rod_assem_14/Spherical",
    "PlatformAssem/Rod_assem_14/Spherical",
    "PlatformAssem/Rod_assem_14/Spherical",
    "PlatformAssem/Rod_assem_14/Spherical",
    "PlatformAssem/Rod_assem_14/Spherical",
    "PlatformAssem/Rod_assem_14/Spherical",
    "PlatformAssem/Rod_assem_14/Spherical"
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
  const char *inputPortPaths[12] = {
    "Cartesian_Joint.pxi",
    "Cartesian_Joint.pyi",
    "Cartesian_Joint.pzi",
    "Gimbal_Joint.qxi",
    "Gimbal_Joint.qyi",
    "Gimbal_Joint.qzi",
    "Revolute16.qi",
    "Revolute2.qi",
    "Revolute3.qi",
    "Revolute6.qi",
    "Revolute8.qi",
    "Revolute9.qi"
  };

  const char *inputUnits[12] = {
    "m",
    "m",
    "m",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad"
  };

  const SizePair inputDimensions[12] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 }
  };

  const char *outputPortPaths[17] = {
    "Revolute16.q",
    "Revolute2.q",
    "Revolute3.q",
    "Revolute6.q",
    "Revolute8.q",
    "Revolute9.q",
    "Transform_Sensor.Q",
    "Transform_Sensor1.x",
    "Transform_Sensor1.y",
    "Transform_Sensor1.z",
    "Transform_Sensor1.ax",
    "Transform_Sensor1.ay",
    "Transform_Sensor1.az",
    "Transform_Sensor2.Q",
    "Transform_Sensor2.x",
    "Transform_Sensor2.y",
    "Transform_Sensor2.z"
  };

  const char *outputUnits[17] = {
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "rad",
    "1",
    "m",
    "m",
    "m",
    "m/s^2",
    "m/s^2",
    "m/s^2",
    "1",
    "m",
    "m",
    "m"
  };

  const SizePair outputDimensions[17] = {
    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 4, 1 }, { 1, 1 },

    { 1, 1 }, { 1, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }, { 4, 1 }, { 1, 1 }, { 1, 1 },

    { 1, 1 }
  };

  initIoInfoHelper(12, inputPortPaths, inputUnits, inputDimensions,
                   true, smData);
  initIoInfoHelper(17, outputPortPaths, outputUnits, outputDimensions,
                   false, smData);
}

static
  void initInputDerivs(NeDaePrivateData *smData)
{
  const int32_T numInputDerivs[12] = {
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2
  };

  PmAllocator *alloc = pm_default_allocator();
  const int_T status = pm_create_int_vector_fields(
    &smData->mNumInputDerivs, smData->mInputVectorSize, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mNumInputDerivs.mX, numInputDerivs,
         12 * sizeof(int32_T));
  smData->mInputOrder = 2;
}

static
  void initDirectFeedthrough(NeDaePrivateData *smData)
{
  const boolean_T directFeedthroughVector[12] = {
    true, true, true, true, true, true, true, true, true, true,
    true, true
  };

  const boolean_T directFeedthroughMatrix[552] = {
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
    true, true
  };

  PmAllocator *alloc = pm_default_allocator();

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughVector, 12, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughVector.mX, directFeedthroughVector,
           12 * sizeof(boolean_T));
  }

  {
    const int_T status = pm_create_bool_vector_fields(
      &smData->mDirectFeedthroughMatrix, 552, alloc);
    checkMemAllocStatus(status);
    memcpy(smData->mDirectFeedthroughMatrix.mX, directFeedthroughMatrix,
           552 * sizeof(boolean_T));
  }
}

static
  void initOutputDerivProc(NeDaePrivateData *smData)
{
  PmAllocator *alloc = pm_default_allocator();
  const int32_T outputFunctionMap[23] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
  };

  smData->mOutputFunctionMap = pm_create_int_vector(23, alloc);
  memcpy(smData->mOutputFunctionMap->mX, outputFunctionMap,
         23 * sizeof(int32_T));
  smData->mNumOutputClasses = 1;
  smData->mHasKinematicOutputs = true;
  smData->mHasDynamicOutputs = true;
  smData->mIsOutputClass0Dynamic = false;
  smData->mDoComputeDynamicOutputs = false;
  smData->mCachedDerivativesAvailable = false;

  {
    size_t i = 0;
    const int_T status = pm_create_real_vector_fields(
      &smData->mCachedDerivatives, 73, pm_default_allocator());
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
  const SmSizePair jointToStageIdx[27] = {
    { 37, 0 }, { 38, 1 }, { 41, 13 }, { 42, 16 }, { 43, 3 }, { 44, 12 },

    { 45, 2 }, { 46, 18 }, { 47, 19 }, { 48, 22 }, { 49, 21 }, { 50, 25 },

    { 51, 24 }, { 52, 15 }, { 67, 4 }, { 68, 5 }, { 137, 20 }, { 207, 17 },

    { 277, 23 }, { 347, 26 }, { 417, 14 }, { 494, 10 }, { 495, 9 }, { 496, 8 },

    { 497, 6 }, { 498, 7 }, { 499, 11 }
  };

  const size_t primitiveIndices[27 + 1] = {
    0, 3, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 30, 31
  };

  const SmSizePair stateOffsets[31] = {
    { 0, 3 }, { 1, 4 }, { 2, 5 }, { 6, 9 }, { 7, 10 }, { 8, 11 },

    { 12, 13 }, { 14, 15 }, { 16, 20 }, { 23, 27 }, { 30, 31 }, { 32, 33 },

    { 34, 35 }, { 36, 37 }, { 38, 39 }, { 40, 41 }, { 42, 43 }, { 44, 45 },

    { 46, 50 }, { 53, 54 }, { 55, 56 }, { 57, 61 }, { 64, 65 }, { 66, 67 },

    { 68, 72 }, { 75, 76 }, { 77, 78 }, { 79, 83 }, { 86, 87 }, { 88, 89 },

    { 90, 94 }
  };

  const SmSizePair dofOffsets[31] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }, { 7, 8 }, { 8, 11 }, { 11, 14 }, { 14, 15 }, { 15, 16 },

    { 16, 17 }, { 17, 18 }, { 18, 19 }, { 19, 20 }, { 20, 21 }, { 21, 22 },

    { 22, 25 }, { 25, 26 }, { 26, 27 }, { 27, 30 }, { 30, 31 }, { 31, 32 },

    { 32, 35 }, { 35, 36 }, { 36, 37 }, { 37, 40 }, { 40, 41 }, { 41, 42 },

    { 42, 45 }
  };

  const size_t remodIndices[21] = {
    6, 7, 8, 12, 14, 30, 32, 34, 36, 38,
    40, 42, 44, 53, 55, 64, 66, 75, 77, 86,
    88
  };

  const size_t equationsPerConstraint[5] = {
    3, 3, 3, 3, 3
  };

  const size_t dofToVelSlot[45] = {
    3, 4, 5, 9, 10, 11, 13, 15, 20, 21,
    22, 27, 28, 29, 31, 33, 35, 37, 39, 41,
    43, 45, 50, 51, 52, 54, 56, 61, 62, 63,
    65, 67, 72, 73, 74, 76, 78, 83, 84, 85,
    87, 89, 94, 95, 96
  };

  const size_t constraintDofs[75] = {
    30, 31, 32, 33, 34, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 25, 26, 27, 28, 29,
    6, 7, 8, 9, 10, 11, 12, 13, 14, 16,
    35, 36, 37, 38, 39, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 17, 40, 41, 42, 43, 44,
    6, 7, 8, 9, 10, 11, 12, 13, 14, 18,
    20, 21, 22, 23, 24, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 19
  };

  const size_t constraintDofOffsets[5 + 1] = {
    0, 15, 30, 45, 60, 75
  };

  const size_t Jm = 15;
  const size_t Jn = 45;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000021e-02;
  delegate->mDof = 45;
  delegate->mStateSize = 97;
  delegate->mContinuousStateSize = 97;
  delegate->mNumStages = 27;
  delegate->mNumConstraints = 5;
  delegate->mNumAllConstraintEquations = 15;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, delegate->mNumStages, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 27 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 31, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 31 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 31, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 31 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 21, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 21 * sizeof(size_t));
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
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 5);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    5, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 45, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 45, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 31, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 31, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 31, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 31, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 31, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 7, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mCvVelOffsets, 31, &zeroSizePair);
  sm_core_SmRealVector_create(
    &scratchpad->mCvAzimuthValues, 31, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 3751, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 45, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 45, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 701, 0.0);
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
  const SmSizePair jointToStageIdx[27] = {
    { 37, 0 }, { 38, 1 }, { 41, 6 }, { 42, 16 }, { 43, 3 }, { 44, 5 },

    { 45, 2 }, { 46, 18 }, { 47, 19 }, { 48, 22 }, { 49, 21 }, { 50, 25 },

    { 51, 24 }, { 52, 15 }, { 67, 4 }, { 137, 20 }, { 207, 17 }, { 277, 23 },

    { 347, 26 }, { 417, 7 }, { 418, 8 }, { 494, 13 }, { 495, 12 }, { 496, 11 },

    { 497, 14 }, { 498, 10 }, { 499, 9 }
  };

  const size_t primitiveIndices[27 + 1] = {
    0, 3, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 28, 29, 30, 31
  };

  const SmSizePair stateOffsets[31] = {
    { 0, 3 }, { 1, 4 }, { 2, 5 }, { 6, 9 }, { 7, 10 }, { 8, 11 },

    { 12, 13 }, { 14, 15 }, { 16, 20 }, { 23, 24 }, { 25, 26 }, { 27, 31 },

    { 34, 38 }, { 41, 42 }, { 43, 44 }, { 45, 46 }, { 47, 48 }, { 49, 50 },

    { 51, 52 }, { 53, 54 }, { 55, 56 }, { 57, 61 }, { 64, 65 }, { 66, 67 },

    { 68, 72 }, { 75, 76 }, { 77, 78 }, { 79, 83 }, { 86, 87 }, { 88, 89 },

    { 90, 94 }
  };

  const SmSizePair dofOffsets[31] = {
    { 0, 1 }, { 1, 2 }, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 },

    { 6, 7 }, { 7, 8 }, { 8, 11 }, { 11, 12 }, { 12, 13 }, { 13, 16 },

    { 16, 19 }, { 19, 20 }, { 20, 21 }, { 21, 22 }, { 22, 23 }, { 23, 24 },

    { 24, 25 }, { 25, 26 }, { 26, 27 }, { 27, 30 }, { 30, 31 }, { 31, 32 },

    { 32, 35 }, { 35, 36 }, { 36, 37 }, { 37, 40 }, { 40, 41 }, { 41, 42 },

    { 42, 45 }
  };

  const size_t remodIndices[21] = {
    6, 7, 8, 12, 14, 23, 25, 41, 43, 45,
    47, 49, 51, 53, 55, 64, 66, 75, 77, 86,
    88
  };

  const size_t equationsPerConstraint[5] = {
    3, 3, 3, 3, 3
  };

  const size_t dofToVelSlot[45] = {
    3, 4, 5, 9, 10, 11, 13, 15, 20, 21,
    22, 24, 26, 31, 32, 33, 38, 39, 40, 42,
    44, 46, 48, 50, 52, 54, 56, 61, 62, 63,
    65, 67, 72, 73, 74, 76, 78, 83, 84, 85,
    87, 89, 94, 95, 96
  };

  const size_t constraintDofs[75] = {
    30, 31, 32, 33, 34, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 20, 25, 26, 27, 28, 29,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 21,
    35, 36, 37, 38, 39, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 22, 40, 41, 42, 43, 44,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 23,
    6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 24
  };

  const size_t constraintDofOffsets[5 + 1] = {
    0, 15, 30, 45, 60, 75
  };

  const size_t Jm = 15;
  const size_t Jn = 45;
  SmSizePair zeroSizePair;
  zeroSizePair.mFirst = zeroSizePair.mSecond = 0;
  sm_core_MechanismDelegate_allocScratchpad(delegate);
  scratchpad = delegate->mScratchpad;
  delegate->mTargetStrengthFree = 0;
  delegate->mTargetStrengthSuggested = 1;
  delegate->mTargetStrengthDesired = 2;
  delegate->mTargetStrengthRequired = 3;
  delegate->mConsistencyTol = +1.000000000000000021e-02;
  delegate->mDof = 45;
  delegate->mStateSize = 97;
  delegate->mContinuousStateSize = 97;
  delegate->mNumStages = 27;
  delegate->mNumConstraints = 5;
  delegate->mNumAllConstraintEquations = 15;
  sm_core_SmSizePairVector_create(
    &delegate->mJointToStageIdx, delegate->mNumStages, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mJointToStageIdx),
         jointToStageIdx, 27 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mPrimitiveIndices, delegate->mNumStages + 1, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mPrimitiveIndices),
         primitiveIndices, (delegate->mNumStages + 1) * sizeof(size_t));
  sm_core_SmSizePairVector_create(
    &delegate->mStateOffsets, 31, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mStateOffsets),
         stateOffsets, 31 * sizeof(SmSizePair));
  sm_core_SmSizePairVector_create(
    &delegate->mDofOffsets, 31, &zeroSizePair);
  memcpy(sm_core_SmSizePairVector_nonConstValues(&delegate->mDofOffsets),
         dofOffsets, 31 * sizeof(SmSizePair));
  sm_core_SmSizeTVector_create(
    &delegate->mRemodIndices, 21, 0);
  memcpy(sm_core_SmSizeTVector_nonConstValues(&delegate->mRemodIndices),
         remodIndices, 21 * sizeof(size_t));
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
  sm_core_SmBoundedSet_create(&scratchpad->mPosRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosDesired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggested, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosNonRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mPosSuggAndFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelDesired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggested, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelNonRequired, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mVelSuggAndFree, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mConstraintFilter, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mActiveDofs0, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mNewConstraints, 5);
  sm_core_SmBoundedSet_create(&scratchpad->mNewDofs, 45);
  sm_core_SmBoundedSet_create(&scratchpad->mUnsatisfiedConstraints, 5);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveConstraintsVect,
    5, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mActiveDofsVect, 45, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mFullDofToActiveDof, 45, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyPosTargetedPrims, 31, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mPartiallyVelTargetedPrims, 31, &zeroSizePair);
  sm_core_SmSizeTVector_create(&scratchpad->mPosPartialTypes, 31, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mVelPartialTypes, 31, 0);
  sm_core_SmSizeTVector_create(&scratchpad->mPartiallyActivePrims, 31, 0);
  sm_core_SmSizePairVector_create(
    &scratchpad->mBaseFrameVelOffsets, 7, &zeroSizePair);
  sm_core_SmSizePairVector_create(
    &scratchpad->mCvVelOffsets, 31, &zeroSizePair);
  sm_core_SmRealVector_create(
    &scratchpad->mCvAzimuthValues, 31, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mInitialState, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mStartState, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mTestState, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mFullStateVector, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianRowMaj, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobian, Jm * Jn, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mJacobianPrimSubmatrix, Jm * 6, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintNonhomoTerms, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mBestConstraintError, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mDeltas,
    Jn * (Jm <= Jn ? Jm : Jn), 0.0);
  sm_core_SmRealVector_create(&scratchpad->mSvdWork, 3751, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchScaledDeltaVect, 45, 0.0);
  sm_core_SmRealVector_create(
    &scratchpad->mLineSearchTestStateVect, 97, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mLineSearchErrorVect, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mActiveDofVelsVect, 45, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mVelSystemRhs, Jm, 0.0);
  sm_core_SmRealVector_create(&scratchpad->mMotionData, 701, 0.0);
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
  const int32_T motionInputOffsets[12] = {
    0, 1, 2, 3, 4, 5, 7, 6, 11, 8,
    9, 10
  };

  int_T status = 0;
  initAssemblyDelegate(&smData->mAssemblyDelegate);
  initSimulationDelegate(&smData->mSimulationDelegate);
  status = pm_create_int_vector_fields(
    &smData->mMotionInputOffsets, smData->mNumInputMotionPrimitives, alloc);
  checkMemAllocStatus(status);
  memcpy(smData->mMotionInputOffsets.mX, motionInputOffsets,
         12 * sizeof(int32_T));
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
