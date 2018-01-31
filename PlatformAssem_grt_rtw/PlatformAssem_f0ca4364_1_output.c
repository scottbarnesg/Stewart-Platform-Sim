/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PlatformAssem/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"

PmfMessageId PlatformAssem_f0ca4364_1_output(const double *rtdv, const double
  *state, const double *input, const double *inputDot, const double *inputDdot,
  const double *discreteState, double *output, NeuDiagnosticManager *neDiagMgr)
{
  double xx[54];
  (void) rtdv;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 0.7071067811865476;
  xx[1] = 0.5;
  xx[2] = xx[1] * state[0];
  xx[3] = sin(xx[2]);
  xx[4] = 0.6903455270798549;
  xx[5] = xx[1] * input[0];
  xx[6] = sin(xx[5]);
  xx[7] = 0.2126311099715937;
  xx[8] = cos(xx[5]);
  xx[5] = xx[4] * xx[6] - xx[7] * xx[8];
  xx[9] = xx[4] * xx[8] + xx[7] * xx[6];
  xx[4] = cos(xx[2]);
  xx[2] = 0.1530459187330309;
  xx[7] = 0.674379723206628;
  xx[10] = xx[2] * xx[8] + xx[7] * xx[6];
  xx[11] = xx[2] * xx[6] - xx[7] * xx[8];
  xx[12] = - (xx[3] * xx[5] + xx[9] * xx[4]);
  xx[13] = - (xx[4] * xx[10] + xx[11] * xx[3]);
  xx[14] = xx[3] * xx[10] - xx[11] * xx[4];
  xx[15] = xx[4] * xx[5] - xx[9] * xx[3];
  xx[16] = state[2];
  xx[17] = state[3];
  xx[18] = state[4];
  xx[19] = state[5];
  xx[20] = - 0.5155671767181869;
  xx[21] = - 0.4604575582848391;
  xx[22] = - 0.5499719661948048;
  xx[23] = - 0.4687218361768761;
  pm_math_quatComposeInverse(xx + 16, xx + 20, xx + 24);
  pm_math_quatCompose(xx + 12, xx + 24, xx + 16);
  xx[20] = - 0.5000003025375193;
  xx[21] = - 0.4999996974622031;
  xx[22] = - 0.5000003021669548;
  xx[23] = - 0.4999996978329573;
  xx[28] = state[9];
  xx[29] = state[10];
  xx[30] = state[11];
  xx[31] = state[12];
  xx[32] = 0.9245073458277432;
  xx[33] = - 0.02686431417290348;
  xx[34] = - 0.0143706770719423;
  xx[35] = - 0.3799446798878163;
  pm_math_quatComposeInverse(xx + 28, xx + 32, xx + 36);
  pm_math_quatCompose(xx + 20, xx + 36, xx + 28);
  pm_math_quatCompose(xx + 16, xx + 28, xx + 20);
  xx[2] = 0.3535533905932734;
  xx[6] = xx[1] * state[16];
  xx[1] = sin(xx[6]);
  xx[7] = 0.8660254037844382 * xx[1];
  xx[8] = xx[2] * xx[7];
  xx[32] = 0.6123724356957948;
  xx[33] = 0.5000000000000011 * xx[1];
  xx[1] = xx[32] * xx[33];
  xx[34] = cos(xx[6]);
  xx[6] = xx[32] * xx[34];
  xx[35] = xx[8] + xx[1] - xx[6];
  xx[36] = xx[32] * xx[7];
  xx[7] = xx[2] * xx[34];
  xx[32] = xx[2] * xx[33];
  xx[2] = xx[36] + xx[7] - xx[32];
  xx[33] = xx[7] - xx[36] + xx[32];
  xx[7] = xx[1] + xx[6] + xx[8];
  xx[36] = xx[35];
  xx[37] = xx[2];
  xx[38] = xx[33];
  xx[39] = xx[7];
  pm_math_quatCompose(xx + 20, xx + 36, xx + 40);
  xx[1] = xx[0] * xx[40];
  xx[6] = xx[0] * xx[41];
  xx[8] = xx[0] * xx[42];
  xx[32] = xx[0] * xx[43];
  xx[0] = 2.0;
  xx[34] = 3.174999999999999e-3;
  xx[36] = xx[34] * xx[43];
  xx[37] = xx[34] * xx[41];
  xx[34] = 0.1170825670111356;
  xx[38] = 0.09692704525612497;
  xx[39] = xx[38] * xx[33];
  xx[44] = xx[2];
  xx[45] = xx[33];
  xx[46] = xx[7];
  xx[47] = xx[34] * xx[7] - xx[2] * xx[38];
  xx[2] = xx[34] * xx[33];
  xx[48] = xx[39];
  xx[49] = xx[47];
  xx[50] = - xx[2];
  pm_math_cross3(xx + 44, xx + 48, xx + 51);
  xx[44] = - (xx[34] + (xx[39] * xx[35] + xx[51]) * xx[0]);
  xx[45] = - ((xx[35] * xx[47] + xx[52]) * xx[0]);
  xx[46] = - (0.1009270452561249 + xx[0] * (xx[53] - xx[2] * xx[35]));
  pm_math_quatXform(xx + 20, xx + 44, xx + 33);
  xx[20] = - 5.667100844660338e-14;
  xx[21] = - 5.860062364969445e-15;
  xx[22] = - 2.016396698107863e-17;
  pm_math_quatXform(xx + 28, xx + 20, xx + 44);
  xx[20] = 2.575015558409614e-7 + xx[44];
  xx[21] = xx[45] - 7.069600220673607e-8;
  xx[22] = xx[46] - 0.05845498436580785;
  pm_math_quatXform(xx + 16, xx + 20, xx + 28);
  xx[16] = - 2.574148821263224e-7;
  xx[17] = - 7.068397670438853e-8;
  xx[18] = - 0.05844501563406446;
  pm_math_quatXform(xx + 24, xx + 16, xx + 19);
  pm_math_quatXform(xx + 12, xx + 19, xx + 16);
  xx[2] = 7.174999999999993e-3;
  xx[7] = 8.762500000000003e-3 - (xx[4] * xx[2] * xx[4] + xx[2] * xx[3] * xx[3])
    * xx[0];
  xx[2] = xx[7] * xx[5];
  xx[12] = - xx[9];
  xx[13] = xx[5];
  xx[14] = xx[11];
  xx[3] = 0.02856734473576056;
  xx[4] = xx[11] * xx[3] + xx[9] * xx[7];
  xx[15] = xx[3] * xx[5];
  xx[19] = xx[2];
  xx[20] = xx[4];
  xx[21] = - xx[15];
  pm_math_cross3(xx + 12, xx + 19, xx + 22);
  xx[3] = 1.5875e-3;
  xx[19] = xx[3] * xx[5];
  xx[20] = 0.02223265526423945;
  xx[21] = xx[11] * xx[20] + xx[9] * xx[3];
  xx[3] = xx[20] * xx[5];
  xx[25] = - xx[19];
  xx[26] = - xx[21];
  xx[27] = xx[3];
  pm_math_cross3(xx + 12, xx + 25, xx + 44);
  output[0] = input[0];
  output[1] = input[1];
  output[2] = input[2];
  output[3] = input[3];
  output[4] = input[4];
  output[5] = input[5];
  output[6] = - (xx[1] + xx[6]);
  output[7] = xx[1] - xx[6];
  output[8] = - (xx[8] + xx[32]);
  output[9] = xx[8] - xx[32];
  output[10] = xx[0] * (xx[40] * xx[36] - xx[42] * xx[37]) + xx[33] + xx[28] +
    xx[16] + (xx[2] * xx[10] + xx[22]) * xx[0] - (xx[44] - xx[19] * xx[10]) *
    xx[0] - 0.05233233451079669;
  output[11] = xx[34] + xx[29] + xx[17] + (xx[10] * xx[4] + xx[23]) * xx[0] -
    (xx[45] - xx[10] * xx[21]) * xx[0] + (xx[43] * xx[36] + xx[41] * xx[37]) *
    xx[0] - 0.1249447956704745;
  output[12] = xx[35] + xx[30] + xx[18] + xx[7] + xx[0] * (xx[24] - xx[15] * xx
    [10]) - xx[0] * (xx[46] + xx[3] * xx[10]) - (xx[40] * xx[37] + xx[42] * xx
    [36]) * xx[0] - 0.03361799053442093;
  return NULL;
}
