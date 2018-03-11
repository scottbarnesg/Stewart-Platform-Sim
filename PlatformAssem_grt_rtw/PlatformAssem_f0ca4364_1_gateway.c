/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PlatformAssem/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "PlatformAssem_f0ca4364_1.h"

void PlatformAssem_f0ca4364_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 1, 0.001, 0, 0.00015, 0, 0, 0,
    0, (SscLoggingSetting) 0, 442541153, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 1e-06, 1e-09, 0, 0,
    100, 0, 1, 0, 1e-09, 0, (NeLocalSolverChoice) 0, 0.001, 0, 3, 2,
    (NeLinearAlgebraChoice) 0, (NeEquationFormulationChoice) 0, 1024, 0, 0.001,
  };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae[1];
  size_t numOutputs = 0;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0,
        "PlatformAssem/Solver\nConfiguration", }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  PlatformAssem_f0ca4364_1_dae(&dae[0],
    &modelparams,
    &solverparams);
  nesl_register_simulator_group("PlatformAssem/Solver Configuration_1",
    1,
    &dae[0],
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    1);
}
