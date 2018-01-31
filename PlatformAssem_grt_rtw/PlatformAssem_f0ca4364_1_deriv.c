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

PmfMessageId PlatformAssem_f0ca4364_1_deriv(const double *rtdv, const int
  *eqnEnableFlags, const double *state, const double *input, const double
  *inputDot, const double *inputDdot, const double *discreteState, double *deriv,
  double *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  int ii[15];
  double xx[2578];
  (void) rtdv;
  (void) eqnEnableFlags;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = state[2];
  xx[1] = state[3];
  xx[2] = state[4];
  xx[3] = state[5];
  xx[4] = - 0.5155671767181869;
  xx[5] = - 0.4604575582848391;
  xx[6] = - 0.5499719661948048;
  xx[7] = - 0.4687218361768761;
  pm_math_quatComposeInverse(xx + 0, xx + 4, xx + 8);
  xx[12] = 2.0;
  xx[13] = 0.5;
  xx[14] = xx[13] * state[0];
  xx[15] = cos(xx[14]);
  xx[16] = sin(xx[14]);
  xx[14] = inputDot[0] - (xx[15] * xx[15] * inputDot[0] + xx[16] * inputDot[0] *
    xx[16]) * xx[12] + state[1];
  xx[17] = xx[14] * xx[9];
  xx[18] = xx[14] * xx[10];
  xx[19] = xx[12] * (xx[11] * xx[17] - xx[8] * xx[18]);
  xx[20] = state[6];
  xx[21] = state[7];
  xx[22] = state[8];
  pm_math_quatXform(xx + 4, xx + 20, xx + 23);
  xx[4] = xx[19] + xx[23];
  xx[5] = (xx[8] * xx[17] + xx[11] * xx[18]) * xx[12];
  xx[6] = xx[5] + xx[24];
  xx[7] = xx[14] - (xx[9] * xx[17] + xx[10] * xx[18]) * xx[12];
  xx[17] = xx[7] + xx[25];
  xx[26] = xx[4];
  xx[27] = xx[6];
  xx[28] = xx[17];
  xx[18] = 2.699609151340433e-5;
  xx[29] = 2.686981344948007e-5;
  xx[30] = 2.206362834904043e-7;
  xx[31] = xx[4] * xx[18];
  xx[32] = xx[6] * xx[29];
  xx[33] = xx[17] * xx[30];
  pm_math_cross3(xx + 26, xx + 31, xx + 34);
  xx[37] = - 0.5000003025375193;
  xx[38] = - 0.4999996974622031;
  xx[39] = - 0.5000003021669548;
  xx[40] = - 0.4999996978329573;
  xx[41] = state[9];
  xx[42] = state[10];
  xx[43] = state[11];
  xx[44] = state[12];
  xx[45] = 0.9245073458277432;
  xx[46] = - 0.02686431417290348;
  xx[47] = - 0.0143706770719423;
  xx[48] = - 0.3799446798878163;
  pm_math_quatComposeInverse(xx + 41, xx + 45, xx + 49);
  pm_math_quatCompose(xx + 37, xx + 49, xx + 53);
  pm_math_quatInverseXform(xx + 53, xx + 26, xx + 31);
  xx[37] = state[13];
  xx[38] = state[14];
  xx[39] = state[15];
  pm_math_quatXform(xx + 45, xx + 37, xx + 49);
  xx[40] = xx[31] + xx[49];
  xx[45] = xx[32] + xx[50];
  xx[46] = xx[33] + xx[51];
  xx[57] = xx[40];
  xx[58] = xx[45];
  xx[59] = xx[46];
  xx[47] = 5.752105223459939e-9;
  xx[48] = 5.752878286826099e-9;
  xx[52] = 7.631014080662714e-9;
  xx[60] = xx[40] * xx[47];
  xx[61] = xx[45] * xx[48];
  xx[62] = xx[46] * xx[52];
  pm_math_cross3(xx + 57, xx + 60, xx + 63);
  xx[60] = 0.3535533905932734;
  xx[61] = 0.8660254037844382;
  xx[62] = xx[13] * state[16];
  xx[66] = sin(xx[62]);
  xx[67] = xx[61] * xx[66];
  xx[68] = xx[60] * xx[67];
  xx[69] = 0.6123724356957948;
  xx[70] = 0.5000000000000011;
  xx[71] = xx[70] * xx[66];
  xx[66] = xx[69] * xx[71];
  xx[72] = cos(xx[62]);
  xx[62] = xx[69] * xx[72];
  xx[73] = xx[68] + xx[66] - xx[62];
  xx[74] = xx[69] * xx[67];
  xx[67] = xx[60] * xx[72];
  xx[72] = xx[60] * xx[71];
  xx[71] = xx[74] + xx[67] - xx[72];
  xx[75] = xx[67] - xx[74] + xx[72];
  xx[67] = xx[66] + xx[62] + xx[68];
  xx[76] = xx[73];
  xx[77] = xx[71];
  xx[78] = xx[75];
  xx[79] = xx[67];
  pm_math_quatInverseXform(xx + 76, xx + 57, xx + 80);
  xx[62] = xx[61] * state[17];
  xx[66] = xx[80] - xx[62];
  xx[68] = xx[70] * state[17];
  xx[72] = xx[82] - xx[68];
  xx[83] = xx[66];
  xx[84] = xx[81];
  xx[85] = xx[72];
  xx[74] = 1.810796098281293e-3;
  xx[86] = 3.618881879047153e-3;
  xx[87] = 1.810796098281292e-3;
  xx[88] = xx[66] * xx[74];
  xx[89] = xx[86] * xx[81];
  xx[90] = xx[72] * xx[87];
  pm_math_cross3(xx + 83, xx + 88, xx + 91);
  xx[88] = 0.3535533905932757;
  xx[89] = xx[13] * state[26];
  xx[90] = cos(xx[89]);
  xx[94] = xx[88] * xx[90];
  xx[95] = sin(xx[89]);
  xx[89] = xx[88] * xx[95];
  xx[96] = xx[94] + xx[89];
  xx[97] = 0.6123724356957934;
  xx[98] = xx[97] * xx[90];
  xx[90] = xx[97] * xx[95];
  xx[95] = xx[98] - xx[90];
  xx[99] = xx[98] + xx[90];
  xx[90] = xx[94] - xx[89];
  xx[100] = xx[96];
  xx[101] = xx[95];
  xx[102] = xx[99];
  xx[103] = xx[90];
  pm_math_quatInverseXform(xx + 100, xx + 83, xx + 104);
  xx[89] = xx[106] - state[27];
  xx[106] = xx[104];
  xx[107] = xx[105];
  xx[108] = xx[89];
  xx[109] = xx[47] * xx[104];
  xx[110] = xx[48] * xx[105];
  xx[111] = xx[52] * xx[89];
  pm_math_cross3(xx + 106, xx + 109, xx + 112);
  xx[89] = xx[112] - xx[47] * xx[105] * state[27];
  xx[94] = xx[113] + xx[48] * xx[104] * state[27];
  xx[98] = 0.6903455270798549;
  xx[104] = xx[13] * input[0];
  xx[105] = sin(xx[104]);
  xx[106] = 0.2126311099715937;
  xx[107] = cos(xx[104]);
  xx[104] = xx[98] * xx[105] - xx[106] * xx[107];
  xx[108] = xx[16] * xx[104];
  xx[109] = xx[98] * xx[107] + xx[106] * xx[105];
  xx[98] = xx[109] * xx[15];
  xx[106] = xx[108] + xx[98];
  xx[110] = 0.1530459187330309;
  xx[111] = 0.674379723206628;
  xx[112] = xx[110] * xx[107] + xx[111] * xx[105];
  xx[113] = xx[110] * xx[105] - xx[111] * xx[107];
  xx[105] = xx[15] * xx[112] + xx[113] * xx[16];
  xx[107] = - xx[105];
  xx[110] = xx[16] * xx[112] - xx[113] * xx[15];
  xx[111] = xx[15] * xx[104] - xx[109] * xx[16];
  xx[115] = - xx[106];
  xx[116] = xx[107];
  xx[117] = xx[110];
  xx[118] = xx[111];
  pm_math_quatCompose(xx + 115, xx + 8, xx + 119);
  pm_math_quatCompose(xx + 119, xx + 53, xx + 123);
  pm_math_quatCompose(xx + 123, xx + 76, xx + 127);
  pm_math_quatCompose(xx + 127, xx + 100, xx + 131);
  xx[135] = 5.758402191949155e-16;
  xx[136] = xx[135] * xx[134];
  xx[137] = 2.286672501239409e-15;
  xx[138] = xx[137] * xx[133] - xx[135] * xx[132];
  xx[139] = xx[136];
  xx[140] = - (xx[137] * xx[134]);
  xx[141] = xx[138];
  pm_math_cross3(xx + 132, xx + 139, xx + 142);
  xx[139] = xx[12] * (xx[142] + xx[131] * xx[136]) - xx[137];
  xx[145] = - (xx[98] + xx[108]);
  xx[146] = xx[107];
  xx[147] = xx[110];
  xx[148] = xx[111];
  xx[98] = xx[13] * state[18];
  xx[107] = sin(xx[98]);
  xx[108] = xx[69] * xx[107];
  xx[136] = cos(xx[98]);
  xx[98] = xx[69] * xx[136];
  xx[69] = xx[108] - xx[98];
  xx[140] = xx[60] * xx[136];
  xx[136] = xx[60] * xx[107];
  xx[60] = xx[140] + xx[136];
  xx[107] = - xx[60];
  xx[141] = xx[136] - xx[140];
  xx[136] = xx[108] + xx[98];
  xx[98] = - xx[136];
  xx[149] = xx[69];
  xx[150] = xx[107];
  xx[151] = xx[141];
  xx[152] = xx[98];
  pm_math_quatCompose(xx + 76, xx + 149, xx + 153);
  pm_math_quatCompose(xx + 53, xx + 153, xx + 157);
  pm_math_quatCompose(xx + 8, xx + 157, xx + 161);
  pm_math_quatCompose(xx + 145, xx + 161, xx + 165);
  xx[108] = xx[162] * xx[164];
  xx[140] = xx[161] * xx[163];
  xx[169] = xx[12] * (xx[108] - xx[140]);
  xx[170] = xx[161] * xx[162];
  xx[171] = xx[163] * xx[164];
  xx[172] = 1.0;
  xx[173] = xx[162] * xx[162];
  xx[174] = xx[163] * xx[163];
  xx[175] = xx[169];
  xx[176] = (xx[170] + xx[171]) * xx[12];
  xx[177] = xx[172] - (xx[173] + xx[174]) * xx[12];
  xx[178] = 8.686515201944597e-16;
  xx[179] = 1.865570051261763e-15;
  xx[180] = - xx[178];
  xx[181] = xx[179];
  xx[182] = 1.623211975654105e-15;
  pm_math_cross3(xx + 175, xx + 180, xx + 183);
  pm_math_quatXform(xx + 165, xx + 183, xx + 175);
  xx[165] = 3.999999999999918e-3;
  xx[166] = xx[165] * xx[141];
  xx[167] = xx[60] * xx[165];
  xx[168] = 0.1424825670111358 + (xx[166] * xx[69] + xx[136] * xx[167]) * xx[12];
  xx[183] = xx[12] * (xx[136] * xx[166] - xx[167] * xx[69]);
  xx[184] = 0.05293295474387556 - ((xx[60] * xx[167] + xx[166] * xx[141]) * xx
    [12] - xx[165]);
  xx[165] = xx[168];
  xx[166] = - xx[183];
  xx[167] = xx[184];
  pm_math_quatXform(xx + 76, xx + 165, xx + 185);
  xx[188] = 0.1170825670111356;
  xx[189] = 0.09692704525612497;
  xx[190] = xx[189] * xx[75];
  xx[191] = xx[71];
  xx[192] = xx[75];
  xx[193] = xx[67];
  xx[194] = xx[188] * xx[67] - xx[71] * xx[189];
  xx[195] = xx[188] * xx[75];
  xx[196] = xx[190];
  xx[197] = xx[194];
  xx[198] = - xx[195];
  pm_math_cross3(xx + 191, xx + 196, xx + 199);
  xx[196] = xx[188] + (xx[190] * xx[73] + xx[199]) * xx[12];
  xx[188] = (xx[73] * xx[194] + xx[200]) * xx[12];
  xx[190] = 3.99999999999997e-3 + xx[189] + xx[12] * (xx[201] - xx[195] * xx[73]);
  xx[197] = xx[185] - xx[196];
  xx[198] = xx[186] - xx[188];
  xx[199] = xx[187] - xx[190];
  pm_math_quatXform(xx + 53, xx + 197, xx + 185);
  xx[200] = - 5.667100844660338e-14;
  xx[201] = - 5.860062364969445e-15;
  xx[202] = - 2.016396698107863e-17;
  pm_math_quatXform(xx + 53, xx + 200, xx + 203);
  xx[189] = 2.575015558409614e-7 + xx[203];
  xx[194] = xx[204] - 7.069600220673607e-8;
  xx[195] = xx[205] - 0.05845498436580785;
  xx[203] = xx[185] + xx[189];
  xx[204] = xx[186] + xx[194];
  xx[205] = xx[187] + xx[195];
  pm_math_quatXform(xx + 8, xx + 203, xx + 185);
  xx[206] = - 2.574148821263224e-7;
  xx[207] = - 7.068397670438853e-8;
  xx[208] = - 0.05844501563406446;
  pm_math_quatXform(xx + 8, xx + 206, xx + 209);
  xx[212] = xx[186] + xx[210];
  xx[186] = xx[185] + xx[209];
  xx[185] = xx[212] * xx[16] - xx[186] * xx[15];
  xx[187] = xx[12] * xx[16] * xx[185] - xx[212];
  xx[213] = - xx[109];
  xx[214] = xx[213];
  xx[215] = xx[104];
  xx[216] = xx[113];
  xx[217] = xx[186] + xx[12] * xx[15] * xx[185];
  xx[185] = xx[113] * xx[217];
  xx[218] = xx[113] * xx[187];
  xx[219] = xx[109] * xx[217] + xx[104] * xx[187];
  xx[220] = - xx[185];
  xx[221] = xx[218];
  xx[222] = - xx[219];
  pm_math_cross3(xx + 214, xx + 220, xx + 223);
  xx[220] = xx[175] + xx[187] + xx[12] * (xx[223] - xx[185] * xx[112]);
  pm_math_quatCompose(xx + 127, xx + 149, xx + 226);
  xx[185] = xx[178] * xx[229];
  xx[187] = xx[179] * xx[228] - xx[178] * xx[227];
  xx[230] = xx[185];
  xx[231] = - (xx[179] * xx[229]);
  xx[232] = xx[187];
  pm_math_cross3(xx + 227, xx + 230, xx + 233);
  xx[221] = xx[12] * (xx[233] + xx[226] * xx[185]) - xx[179];
  memcpy(xx + 185, xx + 52, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 185, 1, xx + 222);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_2 /Revolute10' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 222, xx + 185, 1 * sizeof(double));
  xx[230] = xx[221] / xx[222];
  xx[231] = xx[52] * xx[230];
  xx[232] = xx[231] * xx[141];
  xx[236] = xx[60] * xx[231];
  xx[237] = (xx[232] * xx[69] + xx[136] * xx[236]) * xx[12];
  xx[238] = (xx[60] * xx[236] + xx[232] * xx[141]) * xx[12] - xx[231];
  xx[239] = xx[107];
  xx[240] = xx[141];
  xx[241] = xx[98];
  xx[98] = xx[70] * xx[141];
  xx[107] = xx[136] * xx[61] - xx[60] * xx[70];
  xx[231] = xx[61] * xx[141];
  xx[242] = - xx[98];
  xx[243] = xx[107];
  xx[244] = xx[231];
  pm_math_cross3(xx + 239, xx + 242, xx + 245);
  xx[242] = xx[12] * (xx[245] + xx[98] * xx[69]) - xx[61];
  xx[243] = xx[12] * (xx[246] - xx[69] * xx[107]);
  xx[244] = (xx[247] - xx[231] * xx[69]) * xx[12] - xx[70];
  pm_math_cross3(xx + 242, xx + 180, xx + 245);
  pm_math_quatXform(xx + 226, xx + 245, xx + 242);
  xx[245] = - (xx[70] * xx[183]);
  xx[246] = xx[61] * xx[184] - xx[70] * xx[168];
  xx[247] = xx[61] * xx[183];
  pm_math_quatXform(xx + 76, xx + 245, xx + 248);
  xx[98] = 0.02540000000000018;
  xx[107] = xx[98] * xx[67];
  xx[227] = xx[71] * xx[98];
  xx[228] = xx[107] * xx[73] - xx[227] * xx[75];
  xx[231] = xx[12] * xx[228];
  xx[245] = (xx[107] * xx[67] + xx[71] * xx[227]) * xx[12];
  xx[246] = xx[227] * xx[73] + xx[107] * xx[75];
  xx[107] = xx[246] * xx[12];
  xx[251] = xx[248] + xx[231];
  xx[252] = xx[249] + xx[245] - xx[98];
  xx[253] = xx[250] - xx[107];
  pm_math_quatXform(xx + 123, xx + 251, xx + 247);
  xx[227] = xx[242] + xx[247];
  xx[250] = xx[96] * xx[96];
  xx[251] = (xx[250] + xx[95] * xx[95]) * xx[12] - xx[172];
  xx[252] = xx[99] * xx[95];
  xx[253] = xx[96] * xx[90];
  xx[254] = xx[252] - xx[253];
  xx[255] = xx[12] * xx[254];
  xx[256] = xx[90] * xx[95];
  xx[257] = xx[96] * xx[99];
  xx[258] = (xx[256] + xx[257]) * xx[12];
  xx[259] = xx[252] + xx[253];
  xx[252] = xx[259] * xx[12];
  xx[253] = (xx[250] + xx[99] * xx[99]) * xx[12] - xx[172];
  xx[260] = xx[99] * xx[90];
  xx[261] = xx[96] * xx[95];
  xx[262] = xx[12] * (xx[260] - xx[261]);
  xx[263] = xx[256] - xx[257];
  xx[256] = xx[12] * xx[263];
  xx[257] = xx[260] + xx[261];
  xx[260] = xx[257] * xx[12];
  xx[261] = (xx[250] + xx[90] * xx[90]) * xx[12] - xx[172];
  xx[264] = xx[251];
  xx[265] = xx[255];
  xx[266] = xx[258];
  xx[267] = xx[252];
  xx[268] = xx[253];
  xx[269] = xx[262];
  xx[270] = xx[256];
  xx[271] = xx[260];
  xx[272] = xx[261];
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_6/Revolute12' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 250, xx + 185, 1 * sizeof(double));
  xx[273] = xx[52] / xx[250];
  xx[274] = xx[52] - xx[52] * xx[273];
  xx[275] = xx[47] * xx[251];
  xx[276] = xx[47] * xx[252];
  xx[277] = xx[47] * xx[256];
  xx[278] = xx[48] * xx[255];
  xx[279] = xx[48] * xx[253];
  xx[280] = xx[48] * xx[260];
  xx[281] = xx[258] * xx[274];
  xx[282] = xx[262] * xx[274];
  xx[283] = xx[274] * xx[261];
  pm_math_matrix3x3Compose(xx + 264, xx + 275, xx + 284);
  xx[274] = 4.704802836816547e-4;
  xx[275] = xx[274] * xx[251];
  xx[276] = xx[274] * xx[252];
  xx[277] = xx[274] * xx[256];
  xx[278] = xx[274] * xx[255];
  xx[279] = xx[274] * xx[253];
  xx[280] = xx[274] * xx[260];
  xx[281] = xx[274] * xx[258];
  xx[282] = xx[274] * xx[262];
  xx[283] = xx[274] * xx[261];
  pm_math_matrix3x3Compose(xx + 264, xx + 275, xx + 293);
  xx[252] = 3.999999999999281e-3;
  xx[255] = xx[99] * xx[252];
  xx[256] = xx[252] * xx[95];
  xx[258] = 0.1170825670111366 + (xx[96] * xx[255] + xx[256] * xx[90]) * xx[12];
  xx[260] = xx[12] * (xx[255] * xx[90] - xx[96] * xx[256]);
  xx[261] = 0.09692704525612383 - (xx[252] - (xx[256] * xx[95] + xx[99] * xx[255])
    * xx[12]);
  xx[275] = - xx[258];
  xx[276] = - xx[260];
  xx[277] = xx[261];
  pm_math_matrix3x3PostCross(xx + 293, xx + 275, xx + 302);
  pm_math_matrix3x3PreCross(xx + 302, xx + 275, xx + 311);
  xx[252] = xx[13] * state[24];
  xx[255] = cos(xx[252]);
  xx[256] = xx[88] * xx[255];
  xx[262] = sin(xx[252]);
  xx[252] = xx[88] * xx[262];
  xx[88] = xx[256] + xx[252];
  xx[278] = xx[88] * xx[88];
  xx[279] = xx[97] * xx[255];
  xx[255] = xx[97] * xx[262];
  xx[97] = xx[279] - xx[255];
  xx[262] = (xx[278] + xx[97] * xx[97]) * xx[12] - xx[172];
  xx[280] = xx[279] + xx[255];
  xx[255] = xx[280] * xx[97];
  xx[279] = xx[256] - xx[252];
  xx[252] = xx[88] * xx[279];
  xx[256] = xx[255] - xx[252];
  xx[281] = xx[12] * xx[256];
  xx[282] = xx[279] * xx[97];
  xx[283] = xx[88] * xx[280];
  xx[320] = (xx[282] + xx[283]) * xx[12];
  xx[321] = xx[255] + xx[252];
  xx[252] = xx[321] * xx[12];
  xx[255] = (xx[278] + xx[280] * xx[280]) * xx[12] - xx[172];
  xx[322] = xx[280] * xx[279];
  xx[323] = xx[88] * xx[97];
  xx[324] = xx[12] * (xx[322] - xx[323]);
  xx[325] = xx[282] - xx[283];
  xx[282] = xx[12] * xx[325];
  xx[283] = xx[322] + xx[323];
  xx[322] = xx[283] * xx[12];
  xx[323] = (xx[278] + xx[279] * xx[279]) * xx[12] - xx[172];
  xx[326] = xx[262];
  xx[327] = xx[281];
  xx[328] = xx[320];
  xx[329] = xx[252];
  xx[330] = xx[255];
  xx[331] = xx[324];
  xx[332] = xx[282];
  xx[333] = xx[322];
  xx[334] = xx[323];
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_5/Revolute11' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 278, xx + 185, 1 * sizeof(double));
  xx[335] = xx[52] / xx[278];
  xx[336] = xx[52] - xx[52] * xx[335];
  xx[337] = xx[47] * xx[262];
  xx[338] = xx[47] * xx[252];
  xx[339] = xx[47] * xx[282];
  xx[340] = xx[48] * xx[281];
  xx[341] = xx[48] * xx[255];
  xx[342] = xx[48] * xx[322];
  xx[343] = xx[320] * xx[336];
  xx[344] = xx[324] * xx[336];
  xx[345] = xx[336] * xx[323];
  pm_math_matrix3x3Compose(xx + 326, xx + 337, xx + 346);
  xx[336] = xx[274] * xx[262];
  xx[337] = xx[274] * xx[252];
  xx[338] = xx[274] * xx[282];
  xx[339] = xx[274] * xx[281];
  xx[340] = xx[274] * xx[255];
  xx[341] = xx[274] * xx[322];
  xx[342] = xx[274] * xx[320];
  xx[343] = xx[274] * xx[324];
  xx[344] = xx[274] * xx[323];
  pm_math_matrix3x3Compose(xx + 326, xx + 336, xx + 355);
  xx[252] = 3.999999999999725e-3;
  xx[281] = xx[280] * xx[252];
  xx[282] = xx[252] * xx[97];
  xx[320] = 0.1424825670111363 + (xx[88] * xx[281] + xx[282] * xx[279]) * xx[12];
  xx[322] = xx[12] * (xx[281] * xx[279] - xx[88] * xx[282]);
  xx[323] = 0.05293295474387421 - (xx[252] - (xx[282] * xx[97] + xx[280] * xx
    [281]) * xx[12]);
  xx[336] = - xx[320];
  xx[337] = - xx[322];
  xx[338] = xx[323];
  pm_math_matrix3x3PostCross(xx + 355, xx + 336, xx + 364);
  pm_math_matrix3x3PreCross(xx + 364, xx + 336, xx + 373);
  xx[252] = 0.02539999999999824;
  xx[281] = xx[13] * state[22];
  xx[282] = cos(xx[281]);
  xx[324] = sin(xx[281]);
  xx[281] = xx[282] * xx[324];
  xx[339] = xx[12] * xx[281];
  xx[340] = xx[274] * xx[339];
  xx[341] = xx[339] * xx[340];
  xx[342] = xx[282] * xx[282];
  xx[343] = xx[12] * xx[342] - xx[172];
  xx[344] = xx[274] * xx[343];
  xx[345] = xx[344] * xx[343];
  xx[382] = xx[341] + xx[345];
  xx[383] = 0.1538599999999999;
  xx[384] = xx[382] * xx[383];
  xx[385] = 0.02540000000000177;
  xx[386] = xx[13] * state[20];
  xx[387] = cos(xx[386]);
  xx[388] = sin(xx[386]);
  xx[386] = xx[387] * xx[388];
  xx[389] = xx[12] * xx[386];
  xx[390] = xx[274] * xx[389];
  xx[391] = xx[389] * xx[390];
  xx[392] = xx[387] * xx[387];
  xx[393] = xx[12] * xx[392] - xx[172];
  xx[394] = xx[274] * xx[393];
  xx[395] = xx[394] * xx[393];
  xx[396] = xx[391] + xx[395];
  xx[397] = xx[396] * xx[383];
  xx[398] = xx[69] * xx[69];
  xx[399] = (xx[398] + xx[60] * xx[60]) * xx[12] - xx[172];
  xx[400] = xx[136] * xx[69];
  xx[401] = xx[60] * xx[141];
  xx[402] = xx[400] - xx[401];
  xx[403] = xx[12] * xx[402];
  xx[404] = xx[60] * xx[136];
  xx[405] = xx[141] * xx[69];
  xx[406] = (xx[404] + xx[405]) * xx[12];
  xx[407] = xx[401] + xx[400];
  xx[400] = xx[407] * xx[12];
  xx[401] = (xx[398] + xx[141] * xx[141]) * xx[12] - xx[172];
  xx[408] = xx[60] * xx[69];
  xx[409] = xx[136] * xx[141];
  xx[410] = xx[12] * (xx[408] - xx[409]);
  xx[411] = xx[404] - xx[405];
  xx[404] = xx[12] * xx[411];
  xx[405] = xx[409] + xx[408];
  xx[408] = xx[405] * xx[12];
  xx[409] = (xx[398] + xx[136] * xx[136]) * xx[12] - xx[172];
  xx[412] = xx[399];
  xx[413] = xx[403];
  xx[414] = xx[406];
  xx[415] = - xx[400];
  xx[416] = xx[401];
  xx[417] = xx[410];
  xx[418] = xx[404];
  xx[419] = - xx[408];
  xx[420] = xx[409];
  xx[398] = xx[52] / xx[222];
  xx[421] = xx[52] - xx[52] * xx[398];
  xx[422] = xx[47] * xx[399];
  xx[423] = - (xx[47] * xx[400]);
  xx[424] = xx[47] * xx[404];
  xx[425] = xx[48] * xx[403];
  xx[426] = xx[48] * xx[401];
  xx[427] = - (xx[48] * xx[408]);
  xx[428] = xx[406] * xx[421];
  xx[429] = xx[410] * xx[421];
  xx[430] = xx[421] * xx[409];
  pm_math_matrix3x3Compose(xx + 412, xx + 422, xx + 431);
  xx[421] = xx[274] * xx[399];
  xx[422] = - (xx[274] * xx[400]);
  xx[423] = xx[274] * xx[404];
  xx[424] = xx[274] * xx[403];
  xx[425] = xx[274] * xx[401];
  xx[426] = - (xx[274] * xx[408]);
  xx[427] = xx[274] * xx[406];
  xx[428] = xx[274] * xx[410];
  xx[429] = xx[274] * xx[409];
  pm_math_matrix3x3Compose(xx + 412, xx + 421, xx + 440);
  pm_math_matrix3x3PostCross(xx + 440, xx + 165, xx + 421);
  pm_math_matrix3x3PreCross(xx + 421, xx + 165, xx + 449);
  xx[400] = xx[290] - xx[317] + xx[352] - xx[379] - xx[252] * xx[384] + xx[385] *
    xx[397] + xx[437] - xx[455];
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_4/Revolute9' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 403, xx + 185, 1 * sizeof(double));
  xx[404] = xx[52] / xx[403];
  xx[406] = (xx[342] + xx[324] * xx[324]) * xx[12] - xx[172];
  xx[342] = xx[382] * xx[252];
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_3/Revolute8' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[408] = xx[52] / xx[185];
  xx[409] = (xx[392] + xx[388] * xx[388]) * xx[12] - xx[172];
  xx[392] = xx[396] * xx[385];
  xx[410] = xx[292] - xx[319] + xx[354] - xx[381] + (xx[52] - xx[52] * xx[404]) *
    xx[406] * xx[406] + xx[252] * xx[342] + (xx[52] - xx[52] * xx[408]) * xx[409]
    * xx[409] + xx[385] * xx[392] + xx[87] + xx[439] - xx[457];
  xx[87] = xx[392] - (xx[342] + xx[307] + xx[369]) - xx[426];
  xx[307] = xx[400] * xx[61] + xx[410] * xx[70] + xx[98] * xx[87];
  xx[369] = xx[305] + xx[367] - xx[384] - xx[397] + xx[424];
  xx[305] = xx[47] * xx[343];
  xx[367] = xx[48] * xx[339];
  xx[424] = xx[47] * xx[393];
  xx[426] = xx[48] * xx[389];
  xx[430] = xx[284] - xx[311] + xx[346] - xx[373] + xx[305] * xx[343] + xx[339] *
    xx[367] + xx[383] * xx[384] + xx[424] * xx[393] + xx[389] * xx[426] + xx[383]
    * xx[397] + xx[74] + xx[431] - xx[449];
  xx[74] = xx[286] - xx[313] + xx[348] - xx[375] - xx[383] * xx[342] + xx[383] *
    xx[392] + xx[433] - xx[451];
  xx[342] = xx[369] * xx[98] - (xx[430] * xx[61] + xx[74] * xx[70]);
  xx[384] = 10.40241116696294;
  xx[392] = xx[297] + xx[359] + xx[384] + xx[382] + xx[396] + xx[444];
  xx[297] = xx[369] * xx[61] - xx[70] * xx[87] - xx[392] * xx[98];
  xx[359] = xx[307] * xx[70] - xx[61] * xx[342] - xx[297] * xx[98];
  ii[0] = factorSymmetricPosDef(xx + 359, 1, xx + 382);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_1/Revolute13' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[382] = (xx[61] * xx[237] - xx[70] * xx[238] + xx[227]) / xx[359];
  xx[396] = xx[340] * xx[343];
  xx[340] = xx[339] * xx[344];
  xx[344] = xx[396] - xx[340];
  xx[397] = xx[383] * xx[344];
  xx[444] = xx[390] * xx[393];
  xx[390] = xx[389] * xx[394];
  xx[394] = xx[444] - xx[390];
  xx[458] = xx[383] * xx[394];
  xx[459] = xx[397] + xx[306] + xx[368] + xx[458] + xx[425];
  xx[306] = xx[340] - xx[396];
  xx[340] = xx[383] * xx[306];
  xx[368] = xx[390] - xx[444];
  xx[390] = xx[383] * xx[368];
  xx[396] = xx[287] - xx[314] + xx[349] - xx[376] + xx[367] * xx[343] - xx[339] *
    xx[305] - xx[383] * xx[340] + xx[426] * xx[393] - xx[389] * xx[424] - xx[383]
    * xx[390] + xx[434] - xx[452];
  xx[305] = xx[252] * xx[306];
  xx[367] = xx[385] * xx[368];
  xx[424] = xx[289] - xx[316] + xx[351] - xx[378] + xx[383] * xx[305] - xx[383] *
    xx[367] + xx[436] - xx[454];
  xx[425] = xx[98] * xx[459] - (xx[396] * xx[61] + xx[424] * xx[70]);
  xx[460] = - (xx[237] + xx[382] * xx[342]);
  xx[461] = xx[12] * (xx[136] * xx[232] - xx[236] * xx[69]) - xx[425] * xx[382];
  xx[462] = xx[238] + xx[307] * xx[382];
  pm_math_quatXform(xx + 76, xx + 460, xx + 236);
  xx[460] = - xx[196];
  xx[461] = - xx[188];
  xx[462] = - xx[190];
  xx[232] = xx[302] + xx[364] - xx[340] - xx[390] + xx[421];
  xx[302] = xx[367] - (xx[305] + xx[304] + xx[366]) - xx[423];
  xx[304] = xx[294] + xx[356] + xx[306] + xx[368] + xx[441];
  xx[294] = xx[232] * xx[61] - xx[70] * xx[302] - xx[304] * xx[98];
  xx[305] = xx[308] + xx[370] + xx[427];
  xx[306] = xx[310] + xx[372] + xx[429];
  xx[308] = xx[300] + xx[362] + xx[447];
  xx[300] = xx[305] * xx[61] + xx[306] * xx[70] - xx[308] * xx[98];
  xx[366] = - (xx[294] * xx[382]);
  xx[367] = - (xx[297] * xx[382]);
  xx[368] = - (xx[382] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 366, xx + 463);
  pm_math_cross3(xx + 460, xx + 463, xx + 366);
  xx[310] = xx[236] + xx[366];
  xx[340] = xx[73] * xx[73];
  xx[356] = (xx[340] + xx[71] * xx[71]) * xx[12] - xx[172];
  xx[362] = xx[71] * xx[75];
  xx[364] = xx[67] * xx[73];
  xx[370] = xx[12] * (xx[362] - xx[364]);
  xx[372] = xx[71] * xx[67];
  xx[390] = xx[73] * xx[75];
  xx[421] = (xx[372] + xx[390]) * xx[12];
  xx[423] = (xx[362] + xx[364]) * xx[12];
  xx[362] = (xx[340] + xx[75] * xx[75]) * xx[12] - xx[172];
  xx[364] = xx[67] * xx[75];
  xx[426] = xx[71] * xx[73];
  xx[427] = xx[12] * (xx[364] - xx[426]);
  xx[429] = xx[12] * (xx[372] - xx[390]);
  xx[372] = (xx[364] + xx[426]) * xx[12];
  xx[364] = (xx[340] + xx[67] * xx[67]) * xx[12] - xx[172];
  xx[466] = xx[356];
  xx[467] = xx[370];
  xx[468] = xx[421];
  xx[469] = xx[423];
  xx[470] = xx[362];
  xx[471] = xx[427];
  xx[472] = xx[429];
  xx[473] = xx[372];
  xx[474] = xx[364];
  xx[340] = xx[342] / xx[359];
  xx[390] = xx[48] * xx[343];
  xx[426] = xx[47] * xx[339];
  xx[441] = xx[48] * xx[393];
  xx[444] = xx[47] * xx[389];
  xx[447] = xx[285] - xx[312] + xx[347] - xx[374] + xx[339] * xx[390] - xx[426] *
    xx[343] - xx[383] * xx[397] + xx[389] * xx[441] - xx[444] * xx[393] - xx[383]
    * xx[458] + xx[432] - xx[450];
  xx[475] = xx[425] * xx[340];
  xx[476] = xx[307] * xx[340];
  xx[477] = xx[345] + xx[341];
  xx[341] = xx[477] * xx[383];
  xx[345] = xx[274] * xx[406] * xx[406];
  xx[478] = xx[252] * xx[345];
  xx[479] = xx[395] + xx[391];
  xx[391] = xx[479] * xx[383];
  xx[395] = xx[274] * xx[409] * xx[409];
  xx[480] = xx[385] * xx[395];
  xx[481] = xx[288] - xx[315] + xx[350] - xx[377] + xx[339] * xx[426] + xx[390] *
    xx[343] + xx[383] * xx[341] + xx[252] * xx[478] + xx[389] * xx[444] + xx[441]
    * xx[393] + xx[383] * xx[391] + xx[385] * xx[480] + xx[86] + xx[435] - xx
    [453];
  xx[86] = xx[425] / xx[359];
  xx[390] = xx[307] * xx[86];
  xx[284] = xx[291] - xx[318] + xx[353] - xx[380] + xx[252] * xx[397] - xx[385] *
    xx[458] + xx[438] - xx[456];
  xx[285] = xx[307] / xx[359];
  xx[311] = xx[430] - xx[340] * xx[342];
  xx[312] = xx[447] - xx[475];
  xx[313] = xx[74] + xx[476];
  xx[314] = xx[396] - xx[475];
  xx[315] = xx[481] - xx[425] * xx[86];
  xx[316] = xx[424] + xx[390];
  xx[317] = xx[400] + xx[476];
  xx[318] = xx[284] + xx[390];
  xx[319] = xx[410] - xx[307] * xx[285];
  pm_math_matrix3x3ComposeTranspose(xx + 311, xx + 466, xx + 346);
  pm_math_matrix3x3Compose(xx + 466, xx + 346, xx + 311);
  xx[286] = xx[294] / xx[359];
  xx[287] = xx[297] / xx[359];
  xx[288] = xx[300] / xx[359];
  xx[289] = xx[341] + xx[303] + xx[365] + xx[391] + xx[422];
  xx[290] = xx[309] + xx[371] - xx[478] + xx[480] + xx[428];
  xx[346] = - (xx[232] + xx[286] * xx[342]);
  xx[347] = - (xx[369] + xx[287] * xx[342]);
  xx[348] = - (xx[305] + xx[288] * xx[342]);
  xx[349] = - (xx[289] + xx[425] * xx[286]);
  xx[350] = - (xx[459] + xx[425] * xx[287]);
  xx[351] = - (xx[290] + xx[425] * xx[288]);
  xx[352] = xx[302] + xx[307] * xx[286];
  xx[353] = xx[87] + xx[307] * xx[287];
  xx[354] = - (xx[306] - xx[307] * xx[288]);
  pm_math_matrix3x3ComposeTranspose(xx + 346, xx + 466, xx + 373);
  pm_math_matrix3x3Compose(xx + 466, xx + 373, xx + 346);
  pm_math_matrix3x3PostCross(xx + 346, xx + 460, xx + 373);
  xx[291] = xx[293] + xx[355] + xx[384] + xx[477] + xx[479] + xx[440];
  xx[292] = xx[297] * xx[286];
  xx[293] = xx[295] + xx[357] + xx[442];
  xx[295] = xx[286] * xx[300];
  xx[303] = xx[296] + xx[358] + xx[344] + xx[394] + xx[443];
  xx[296] = xx[298] + xx[360] + xx[445];
  xx[298] = xx[287] * xx[300];
  xx[309] = xx[299] + xx[361] + xx[446];
  xx[299] = xx[301] + xx[363] + xx[384] + xx[345] + xx[395] + xx[448];
  xx[431] = xx[291] - xx[294] * xx[286];
  xx[432] = xx[304] - xx[292];
  xx[433] = xx[293] - xx[295];
  xx[434] = xx[303] - xx[292];
  xx[435] = xx[392] - xx[297] * xx[287];
  xx[436] = xx[296] - xx[298];
  xx[437] = xx[309] - xx[295];
  xx[438] = xx[308] - xx[298];
  xx[439] = xx[299] - xx[288] * xx[300];
  pm_math_matrix3x3ComposeTranspose(xx + 431, xx + 466, xx + 448);
  pm_math_matrix3x3Compose(xx + 466, xx + 448, xx + 431);
  pm_math_matrix3x3PostCross(xx + 431, xx + 460, xx + 448);
  pm_math_matrix3x3PreCross(xx + 448, xx + 460, xx + 466);
  xx[292] = xx[311] - xx[373] - xx[373] - xx[466];
  xx[295] = xx[312] - xx[374] - xx[376] - xx[467];
  xx[298] = xx[313] - xx[375] - xx[379] - xx[468];
  xx[301] = xx[314] - xx[376] - xx[374] - xx[469];
  xx[341] = xx[315] - xx[377] - xx[377] - xx[470];
  xx[344] = xx[316] - xx[378] - xx[380] - xx[471];
  xx[345] = xx[317] - xx[379] - xx[375] - xx[472];
  xx[355] = xx[318] - xx[380] - xx[378] - xx[473];
  xx[311] = xx[319] - xx[381] - xx[381] - xx[474];
  xx[373] = xx[47] + xx[292];
  xx[374] = xx[295];
  xx[375] = xx[298];
  xx[376] = xx[301];
  xx[377] = xx[48] + xx[341];
  xx[378] = xx[344];
  xx[379] = xx[345];
  xx[380] = xx[355];
  xx[381] = xx[52] + xx[311];
  xx[312] = 0.7108710477308775;
  xx[313] = 0.7017511783614371;
  xx[314] = 0.04698549953271704;
  xx[315] = xx[312];
  xx[316] = - xx[313];
  xx[317] = xx[314];
  pm_math_matrix3x3Xform(xx + 373, xx + 315, xx + 440);
  xx[318] = xx[346] - xx[448];
  xx[319] = xx[347] - xx[451];
  xx[346] = xx[348] - xx[454];
  xx[347] = xx[349] - xx[449];
  xx[348] = xx[350] - xx[452];
  xx[349] = xx[351] - xx[455];
  xx[350] = xx[352] - xx[450];
  xx[351] = xx[353] - xx[453];
  xx[352] = xx[354] - xx[456];
  xx[448] = xx[318];
  xx[449] = xx[319];
  xx[450] = xx[346];
  xx[451] = xx[347];
  xx[452] = xx[348];
  xx[453] = xx[349];
  xx[454] = xx[350];
  xx[455] = xx[351];
  xx[456] = xx[352];
  xx[353] = 2.894880451003776e-16;
  xx[354] = 2.648381660552236e-15;
  xx[357] = 4.393469562948899e-14;
  xx[443] = xx[353];
  xx[444] = - xx[354];
  xx[445] = - xx[357];
  pm_math_matrix3x3Xform(xx + 448, xx + 443, xx + 466);
  xx[358] = xx[440] + xx[466];
  xx[360] = xx[441] + xx[467];
  xx[361] = xx[442] + xx[468];
  xx[440] = xx[358];
  xx[441] = xx[360];
  xx[442] = xx[361];
  pm_math_matrix3x3TransposeXform(xx + 448, xx + 315, xx + 466);
  xx[469] = xx[274] + xx[431];
  xx[470] = xx[432];
  xx[471] = xx[433];
  xx[472] = xx[434];
  xx[473] = xx[274] + xx[435];
  xx[474] = xx[436];
  xx[475] = xx[437];
  xx[476] = xx[438];
  xx[477] = xx[274] + xx[439];
  pm_math_matrix3x3Xform(xx + 469, xx + 443, xx + 478);
  xx[363] = xx[466] + xx[478];
  xx[365] = xx[467] + xx[479];
  xx[371] = xx[468] + xx[480];
  xx[466] = xx[363];
  xx[467] = xx[365];
  xx[468] = xx[371];
  xx[384] = 0.7032954118963891;
  xx[390] = 0.7098406976979288;
  xx[391] = 0.03875238698720665;
  xx[478] = xx[384];
  xx[479] = xx[390];
  xx[480] = - xx[391];
  pm_math_matrix3x3Xform(xx + 373, xx + 478, xx + 482);
  xx[394] = 2.414046089266682e-16;
  xx[395] = 2.210318075741454e-15;
  xx[397] = 3.610603320027245e-14;
  xx[485] = - xx[394];
  xx[486] = xx[395];
  xx[487] = xx[397];
  pm_math_matrix3x3Xform(xx + 448, xx + 485, xx + 488);
  xx[422] = xx[482] + xx[488];
  xx[426] = xx[483] + xx[489];
  xx[428] = xx[484] + xx[490];
  xx[482] = xx[422];
  xx[483] = xx[426];
  xx[484] = xx[428];
  pm_math_matrix3x3TransposeXform(xx + 448, xx + 478, xx + 488);
  pm_math_matrix3x3Xform(xx + 469, xx + 485, xx + 491);
  xx[446] = xx[488] + xx[491];
  xx[457] = xx[489] + xx[492];
  xx[458] = xx[490] + xx[493];
  xx[488] = xx[446];
  xx[489] = xx[457];
  xx[490] = xx[458];
  xx[491] = pm_math_dot3(xx + 315, xx + 482) + pm_math_dot3(xx + 443, xx + 488);
  xx[492] = 6.157686537398885e-3;
  xx[493] = 0.06059263618668784;
  xx[494] = 0.998143584529027;
  xx[495] = - xx[492];
  xx[496] = xx[493];
  xx[497] = xx[494];
  pm_math_matrix3x3Xform(xx + 373, xx + 495, xx + 498);
  xx[501] = 5.847961866618884e-15;
  xx[502] = 5.656592767315548e-14;
  xx[503] = 3.469930224270842e-15;
  xx[504] = xx[501];
  xx[505] = - xx[502];
  xx[506] = xx[503];
  pm_math_matrix3x3Xform(xx + 448, xx + 504, xx + 507);
  xx[510] = xx[498] + xx[507];
  xx[511] = xx[499] + xx[508];
  xx[498] = xx[500] + xx[509];
  xx[507] = xx[510];
  xx[508] = xx[511];
  xx[509] = xx[498];
  pm_math_matrix3x3TransposeXform(xx + 448, xx + 495, xx + 512);
  pm_math_matrix3x3Xform(xx + 469, xx + 504, xx + 515);
  xx[499] = xx[512] + xx[515];
  xx[500] = xx[513] + xx[516];
  xx[512] = xx[514] + xx[517];
  xx[513] = xx[499];
  xx[514] = xx[500];
  xx[515] = xx[512];
  xx[516] = pm_math_dot3(xx + 315, xx + 507) + pm_math_dot3(xx + 443, xx + 513);
  xx[517] = pm_math_dot3(xx + 478, xx + 507) + pm_math_dot3(xx + 485, xx + 513);
  xx[518] = pm_math_dot3(xx + 315, xx + 440) + pm_math_dot3(xx + 443, xx + 466);
  xx[519] = xx[491];
  xx[520] = xx[516];
  xx[521] = xx[491];
  xx[522] = pm_math_dot3(xx + 478, xx + 482) + pm_math_dot3(xx + 485, xx + 488);
  xx[523] = xx[517];
  xx[524] = xx[516];
  xx[525] = xx[517];
  xx[526] = pm_math_dot3(xx + 495, xx + 507) + pm_math_dot3(xx + 504, xx + 513);
  ii[0] = factorSymmetricPosDef(xx + 518, 3, xx + 440);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_1/Spherical Joint1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[440] = xx[237] + xx[367];
  xx[236] = xx[238] + xx[368];
  xx[366] = xx[310];
  xx[367] = xx[440];
  xx[368] = xx[236];
  pm_math_quatCompose(xx + 123, xx + 153, xx + 488);
  pm_math_quatInverseXform(xx + 153, xx + 315, xx + 466);
  pm_math_cross3(xx + 466, xx + 180, xx + 482);
  pm_math_quatXform(xx + 488, xx + 482, xx + 466);
  pm_math_cross3(xx + 315, xx + 197, xx + 482);
  pm_math_quatXform(xx + 53, xx + 482, xx + 507);
  pm_math_quatXform(xx + 53, xx + 443, xx + 482);
  xx[513] = xx[507] + xx[482];
  xx[514] = xx[508] + xx[483];
  xx[515] = xx[509] + xx[484];
  pm_math_quatXform(xx + 119, xx + 513, xx + 507);
  xx[237] = xx[466] + xx[507];
  pm_math_quatInverseXform(xx + 153, xx + 478, xx + 513);
  pm_math_cross3(xx + 513, xx + 180, xx + 527);
  pm_math_quatXform(xx + 488, xx + 527, xx + 513);
  pm_math_cross3(xx + 478, xx + 197, xx + 527);
  pm_math_quatXform(xx + 53, xx + 527, xx + 530);
  pm_math_quatXform(xx + 53, xx + 485, xx + 527);
  xx[533] = xx[530] + xx[527];
  xx[534] = xx[531] + xx[528];
  xx[535] = xx[532] + xx[529];
  pm_math_quatXform(xx + 119, xx + 533, xx + 530);
  xx[238] = xx[513] + xx[530];
  pm_math_quatInverseXform(xx + 153, xx + 495, xx + 533);
  pm_math_cross3(xx + 533, xx + 180, xx + 536);
  pm_math_quatXform(xx + 488, xx + 536, xx + 533);
  pm_math_cross3(xx + 495, xx + 197, xx + 488);
  pm_math_quatXform(xx + 53, xx + 488, xx + 536);
  pm_math_quatXform(xx + 53, xx + 504, xx + 488);
  xx[539] = xx[536] + xx[488];
  xx[540] = xx[537] + xx[489];
  xx[541] = xx[538] + xx[490];
  pm_math_quatXform(xx + 119, xx + 539, xx + 536);
  xx[441] = xx[533] + xx[536];
  xx[539] = - (pm_math_dot3(xx + 315, xx + 366) + pm_math_dot3(xx + 443, xx +
    463) + xx[237]);
  xx[540] = - (pm_math_dot3(xx + 478, xx + 366) + pm_math_dot3(xx + 485, xx +
    463) + xx[238]);
  xx[541] = - (pm_math_dot3(xx + 495, xx + 366) + pm_math_dot3(xx + 504, xx +
    463) + xx[441]);
  solveSymmetricPosDef(xx + 518, xx + 539, 3, 1, xx + 366, xx + 542);
  xx[539] = xx[310] + xx[358] * xx[366] + xx[422] * xx[367] + xx[510] * xx[368];
  xx[540] = xx[440] + xx[360] * xx[366] + xx[426] * xx[367] + xx[511] * xx[368];
  xx[541] = xx[236] + xx[361] * xx[366] + xx[428] * xx[367] + xx[498] * xx[368];
  pm_math_quatXform(xx + 53, xx + 539, xx + 542);
  xx[539] = xx[189];
  xx[540] = xx[194];
  xx[541] = xx[195];
  xx[545] = xx[463] + xx[363] * xx[366] + xx[446] * xx[367] + xx[499] * xx[368];
  xx[546] = xx[464] + xx[365] * xx[366] + xx[457] * xx[367] + xx[500] * xx[368];
  xx[547] = xx[465] + xx[371] * xx[366] + xx[458] * xx[367] + xx[512] * xx[368];
  pm_math_quatXform(xx + 53, xx + 545, xx + 463);
  pm_math_cross3(xx + 539, xx + 463, xx + 545);
  xx[236] = xx[542] + xx[545];
  xx[310] = xx[53] * xx[53];
  xx[440] = (xx[310] + xx[54] * xx[54]) * xx[12] - xx[172];
  xx[442] = xx[54] * xx[55];
  xx[491] = xx[53] * xx[56];
  xx[516] = xx[12] * (xx[442] - xx[491]);
  xx[517] = xx[54] * xx[56];
  xx[548] = xx[53] * xx[55];
  xx[549] = (xx[517] + xx[548]) * xx[12];
  xx[550] = (xx[442] + xx[491]) * xx[12];
  xx[442] = (xx[310] + xx[55] * xx[55]) * xx[12] - xx[172];
  xx[491] = xx[55] * xx[56];
  xx[551] = xx[53] * xx[54];
  xx[552] = xx[12] * (xx[491] - xx[551]);
  xx[553] = xx[12] * (xx[517] - xx[548]);
  xx[517] = (xx[491] + xx[551]) * xx[12];
  xx[491] = (xx[310] + xx[56] * xx[56]) * xx[12] - xx[172];
  xx[554] = xx[440];
  xx[555] = xx[516];
  xx[556] = xx[549];
  xx[557] = xx[550];
  xx[558] = xx[442];
  xx[559] = xx[552];
  xx[560] = xx[553];
  xx[561] = xx[517];
  xx[562] = xx[491];
  xx[563] = xx[358];
  xx[564] = xx[422];
  xx[565] = xx[510];
  xx[566] = xx[360];
  xx[567] = xx[426];
  xx[568] = xx[511];
  xx[569] = xx[361];
  xx[570] = xx[428];
  xx[571] = xx[498];
  xx[572] = xx[363];
  xx[573] = xx[446];
  xx[574] = xx[499];
  xx[575] = xx[365];
  xx[576] = xx[457];
  xx[577] = xx[500];
  xx[578] = xx[371];
  xx[579] = xx[458];
  xx[580] = xx[512];
  solveSymmetricPosDef(xx + 518, xx + 563, 3, 6, xx + 581, xx + 599);
  xx[310] = xx[360] * xx[581] + xx[426] * xx[582] + xx[511] * xx[583];
  xx[548] = xx[361] * xx[581] + xx[428] * xx[582] + xx[498] * xx[583];
  xx[551] = xx[361] * xx[584] + xx[428] * xx[585] + xx[498] * xx[586];
  xx[563] = xx[292] - (xx[358] * xx[581] + xx[422] * xx[582] + xx[510] * xx[583])
    + xx[47];
  xx[564] = xx[295] - xx[310];
  xx[565] = xx[298] - xx[548];
  xx[566] = xx[301] - xx[310];
  xx[567] = xx[341] - (xx[360] * xx[584] + xx[426] * xx[585] + xx[511] * xx[586])
    + xx[48];
  xx[568] = xx[344] - xx[551];
  xx[569] = xx[345] - xx[548];
  xx[570] = xx[355] - xx[551];
  xx[571] = xx[311] - (xx[361] * xx[587] + xx[428] * xx[588] + xx[498] * xx[589])
    + xx[52];
  pm_math_matrix3x3ComposeTranspose(xx + 563, xx + 554, xx + 572);
  pm_math_matrix3x3Compose(xx + 554, xx + 572, xx + 563);
  xx[572] = xx[318] - (xx[358] * xx[590] + xx[422] * xx[591] + xx[510] * xx[592]);
  xx[573] = xx[319] - (xx[358] * xx[593] + xx[422] * xx[594] + xx[510] * xx[595]);
  xx[574] = xx[346] - (xx[358] * xx[596] + xx[422] * xx[597] + xx[510] * xx[598]);
  xx[575] = xx[347] - (xx[360] * xx[590] + xx[426] * xx[591] + xx[511] * xx[592]);
  xx[576] = xx[348] - (xx[360] * xx[593] + xx[426] * xx[594] + xx[511] * xx[595]);
  xx[577] = xx[349] - (xx[360] * xx[596] + xx[426] * xx[597] + xx[511] * xx[598]);
  xx[578] = xx[350] - (xx[361] * xx[590] + xx[428] * xx[591] + xx[498] * xx[592]);
  xx[579] = xx[351] - (xx[361] * xx[593] + xx[428] * xx[594] + xx[498] * xx[595]);
  xx[580] = xx[352] - (xx[361] * xx[596] + xx[428] * xx[597] + xx[498] * xx[598]);
  pm_math_matrix3x3ComposeTranspose(xx + 572, xx + 554, xx + 344);
  pm_math_matrix3x3Compose(xx + 554, xx + 344, xx + 572);
  pm_math_matrix3x3PostCross(xx + 572, xx + 539, xx + 344);
  xx[292] = xx[365] * xx[590] + xx[457] * xx[591] + xx[500] * xx[592];
  xx[295] = xx[371] * xx[590] + xx[458] * xx[591] + xx[512] * xx[592];
  xx[298] = xx[371] * xx[593] + xx[458] * xx[594] + xx[512] * xx[595];
  xx[599] = xx[431] - (xx[363] * xx[590] + xx[446] * xx[591] + xx[499] * xx[592])
    + xx[274];
  xx[600] = xx[432] - xx[292];
  xx[601] = xx[433] - xx[295];
  xx[602] = xx[434] - xx[292];
  xx[603] = xx[435] - (xx[365] * xx[593] + xx[457] * xx[594] + xx[500] * xx[595])
    + xx[274];
  xx[604] = xx[436] - xx[298];
  xx[605] = xx[437] - xx[295];
  xx[606] = xx[438] - xx[298];
  xx[607] = xx[439] - (xx[371] * xx[596] + xx[458] * xx[597] + xx[512] * xx[598])
    + xx[274];
  pm_math_matrix3x3ComposeTranspose(xx + 599, xx + 554, xx + 431);
  pm_math_matrix3x3Compose(xx + 554, xx + 431, xx + 599);
  pm_math_matrix3x3PostCross(xx + 599, xx + 539, xx + 431);
  pm_math_matrix3x3PreCross(xx + 431, xx + 539, xx + 554);
  xx[292] = xx[563] - xx[344] - xx[344] - xx[554];
  xx[295] = xx[564] - xx[345] - xx[347] - xx[555];
  xx[298] = xx[565] - xx[346] - xx[350] - xx[556];
  xx[301] = xx[566] - xx[347] - xx[345] - xx[557];
  xx[310] = xx[567] - xx[348] - xx[348] - xx[558];
  xx[311] = xx[568] - xx[349] - xx[351] - xx[559];
  xx[318] = xx[569] - xx[350] - xx[346] - xx[560];
  xx[319] = xx[570] - xx[351] - xx[349] - xx[561];
  xx[341] = xx[571] - xx[352] - xx[352] - xx[562];
  xx[344] = xx[18] + xx[292];
  xx[345] = xx[295];
  xx[346] = xx[298];
  xx[347] = xx[301];
  xx[348] = xx[29] + xx[310];
  xx[349] = xx[311];
  xx[350] = xx[318];
  xx[351] = xx[319];
  xx[352] = xx[30] + xx[341];
  xx[355] = 0.0443386466184037;
  xx[548] = 0.9897926848460968;
  xx[551] = 0.1354419633688297;
  xx[554] = - xx[355];
  xx[555] = xx[548];
  xx[556] = - xx[551];
  pm_math_matrix3x3Xform(xx + 344, xx + 554, xx + 557);
  xx[560] = xx[572] - xx[431];
  xx[431] = xx[573] - xx[434];
  xx[434] = xx[574] - xx[437];
  xx[437] = xx[575] - xx[432];
  xx[432] = xx[576] - xx[435];
  xx[435] = xx[577] - xx[438];
  xx[438] = xx[578] - xx[433];
  xx[433] = xx[579] - xx[436];
  xx[436] = xx[580] - xx[439];
  xx[561] = xx[560];
  xx[562] = xx[431];
  xx[563] = xx[434];
  xx[564] = xx[437];
  xx[565] = xx[432];
  xx[566] = xx[435];
  xx[567] = xx[438];
  xx[568] = xx[433];
  xx[569] = xx[436];
  xx[439] = 0.05784845851388935;
  xx[570] = 2.591338030028828e-3;
  xx[571] = 2.579213991638335e-7;
  xx[572] = - xx[439];
  xx[573] = - xx[570];
  xx[574] = xx[571];
  pm_math_matrix3x3Xform(xx + 561, xx + 572, xx + 575);
  xx[578] = xx[557] + xx[575];
  xx[579] = xx[558] + xx[576];
  xx[557] = xx[559] + xx[577];
  xx[575] = xx[578];
  xx[576] = xx[579];
  xx[577] = xx[557];
  pm_math_matrix3x3TransposeXform(xx + 561, xx + 554, xx + 608);
  xx[558] = 0.01546767277802701;
  xx[611] = xx[558] + xx[599];
  xx[612] = xx[600];
  xx[613] = xx[601];
  xx[614] = xx[602];
  xx[615] = xx[558] + xx[603];
  xx[616] = xx[604];
  xx[617] = xx[605];
  xx[618] = xx[606];
  xx[619] = xx[558] + xx[607];
  pm_math_matrix3x3Xform(xx + 611, xx + 572, xx + 620);
  xx[559] = xx[608] + xx[620];
  xx[580] = xx[609] + xx[621];
  xx[608] = xx[610] + xx[622];
  xx[620] = xx[559];
  xx[621] = xx[580];
  xx[622] = xx[608];
  xx[609] = 0.02316230987059076;
  xx[610] = 0.1365573546186835;
  xx[623] = 0.9903613463282005;
  xx[624] = xx[609];
  xx[625] = xx[610];
  xx[626] = xx[623];
  pm_math_matrix3x3Xform(xx + 344, xx + 624, xx + 627);
  xx[630] = 7.981026722957106e-3;
  xx[631] = 1.353466628758495e-3;
  xx[632] = 3.351469117133814e-8;
  xx[633] = - xx[630];
  xx[634] = xx[631];
  xx[635] = xx[632];
  pm_math_matrix3x3Xform(xx + 561, xx + 633, xx + 636);
  xx[639] = xx[627] + xx[636];
  xx[640] = xx[628] + xx[637];
  xx[627] = xx[629] + xx[638];
  xx[636] = xx[639];
  xx[637] = xx[640];
  xx[638] = xx[627];
  pm_math_matrix3x3TransposeXform(xx + 561, xx + 624, xx + 641);
  pm_math_matrix3x3Xform(xx + 611, xx + 633, xx + 644);
  xx[628] = xx[641] + xx[644];
  xx[629] = xx[642] + xx[645];
  xx[641] = xx[643] + xx[646];
  xx[642] = xx[628];
  xx[643] = xx[629];
  xx[644] = xx[641];
  xx[645] = pm_math_dot3(xx + 554, xx + 636) + pm_math_dot3(xx + 572, xx + 642);
  xx[646] = 0.9987480121719927;
  xx[647] = 0.04077413303434263;
  xx[648] = 0.02898065316363096;
  xx[649] = xx[646];
  xx[650] = xx[647];
  xx[651] = - xx[648];
  pm_math_matrix3x3Xform(xx + 344, xx + 649, xx + 652);
  xx[655] = 2.383046891125392e-3;
  xx[656] = 0.05837185064593434;
  xx[657] = 6.009961257708119e-8;
  xx[658] = - xx[655];
  xx[659] = xx[656];
  xx[660] = - xx[657];
  pm_math_matrix3x3Xform(xx + 561, xx + 658, xx + 661);
  xx[664] = xx[652] + xx[661];
  xx[665] = xx[653] + xx[662];
  xx[652] = xx[654] + xx[663];
  xx[661] = xx[664];
  xx[662] = xx[665];
  xx[663] = xx[652];
  pm_math_matrix3x3TransposeXform(xx + 561, xx + 649, xx + 666);
  pm_math_matrix3x3Xform(xx + 611, xx + 658, xx + 669);
  xx[653] = xx[666] + xx[669];
  xx[654] = xx[667] + xx[670];
  xx[666] = xx[668] + xx[671];
  xx[667] = xx[653];
  xx[668] = xx[654];
  xx[669] = xx[666];
  xx[670] = pm_math_dot3(xx + 554, xx + 661) + pm_math_dot3(xx + 572, xx + 667);
  xx[671] = pm_math_dot3(xx + 624, xx + 661) + pm_math_dot3(xx + 633, xx + 667);
  xx[672] = pm_math_dot3(xx + 554, xx + 575) + pm_math_dot3(xx + 572, xx + 620);
  xx[673] = xx[645];
  xx[674] = xx[670];
  xx[675] = xx[645];
  xx[676] = pm_math_dot3(xx + 624, xx + 636) + pm_math_dot3(xx + 633, xx + 642);
  xx[677] = xx[671];
  xx[678] = xx[670];
  xx[679] = xx[671];
  xx[680] = pm_math_dot3(xx + 649, xx + 661) + pm_math_dot3(xx + 658, xx + 667);
  ii[0] = factorSymmetricPosDef(xx + 672, 3, xx + 575);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_1/Spherical Joint12' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[575] = xx[543] + xx[546];
  xx[542] = xx[544] + xx[547];
  xx[543] = xx[236];
  xx[544] = xx[575];
  xx[545] = xx[542];
  pm_math_quatCompose(xx + 119, xx + 157, xx + 642);
  pm_math_quatInverseXform(xx + 157, xx + 554, xx + 620);
  pm_math_cross3(xx + 620, xx + 180, xx + 636);
  pm_math_quatXform(xx + 642, xx + 636, xx + 620);
  pm_math_cross3(xx + 554, xx + 203, xx + 636);
  pm_math_quatXform(xx + 8, xx + 636, xx + 661);
  pm_math_quatXform(xx + 8, xx + 572, xx + 636);
  xx[667] = xx[661] + xx[636];
  xx[668] = xx[662] + xx[637];
  xx[669] = xx[663] + xx[638];
  pm_math_quatXform(xx + 115, xx + 667, xx + 661);
  xx[546] = xx[620] + xx[661];
  pm_math_quatInverseXform(xx + 157, xx + 624, xx + 667);
  pm_math_cross3(xx + 667, xx + 180, xx + 681);
  pm_math_quatXform(xx + 642, xx + 681, xx + 667);
  pm_math_cross3(xx + 624, xx + 203, xx + 681);
  pm_math_quatXform(xx + 8, xx + 681, xx + 684);
  pm_math_quatXform(xx + 8, xx + 633, xx + 681);
  xx[687] = xx[684] + xx[681];
  xx[688] = xx[685] + xx[682];
  xx[689] = xx[686] + xx[683];
  pm_math_quatXform(xx + 115, xx + 687, xx + 684);
  xx[547] = xx[667] + xx[684];
  pm_math_quatInverseXform(xx + 157, xx + 649, xx + 687);
  pm_math_cross3(xx + 687, xx + 180, xx + 690);
  pm_math_quatXform(xx + 642, xx + 690, xx + 687);
  pm_math_cross3(xx + 649, xx + 203, xx + 642);
  pm_math_quatXform(xx + 8, xx + 642, xx + 690);
  pm_math_quatXform(xx + 8, xx + 658, xx + 642);
  xx[693] = xx[690] + xx[642];
  xx[694] = xx[691] + xx[643];
  xx[695] = xx[692] + xx[644];
  pm_math_quatXform(xx + 115, xx + 693, xx + 690);
  xx[576] = xx[687] + xx[690];
  xx[693] = - (pm_math_dot3(xx + 554, xx + 543) + pm_math_dot3(xx + 572, xx +
    463) + xx[546]);
  xx[694] = - (pm_math_dot3(xx + 624, xx + 543) + pm_math_dot3(xx + 633, xx +
    463) + xx[547]);
  xx[695] = - (pm_math_dot3(xx + 649, xx + 543) + pm_math_dot3(xx + 658, xx +
    463) + xx[576]);
  solveSymmetricPosDef(xx + 672, xx + 693, 3, 1, xx + 543, xx + 696);
  xx[693] = xx[236] + xx[578] * xx[543] + xx[639] * xx[544] + xx[664] * xx[545];
  xx[694] = xx[575] + xx[579] * xx[543] + xx[640] * xx[544] + xx[665] * xx[545];
  xx[695] = xx[542] + xx[557] * xx[543] + xx[627] * xx[544] + xx[652] * xx[545];
  pm_math_quatXform(xx + 8, xx + 693, xx + 696);
  xx[693] = xx[463] + xx[559] * xx[543] + xx[628] * xx[544] + xx[653] * xx[545];
  xx[694] = xx[464] + xx[580] * xx[543] + xx[629] * xx[544] + xx[654] * xx[545];
  xx[695] = xx[465] + xx[608] * xx[543] + xx[641] * xx[544] + xx[666] * xx[545];
  pm_math_quatXform(xx + 8, xx + 693, xx + 463);
  pm_math_cross3(xx + 209, xx + 463, xx + 693);
  xx[236] = xx[8] * xx[8];
  xx[463] = (xx[236] + xx[9] * xx[9]) * xx[12] - xx[172];
  xx[464] = xx[9] * xx[10];
  xx[465] = xx[8] * xx[11];
  xx[542] = xx[12] * (xx[464] - xx[465]);
  xx[575] = xx[9] * xx[11];
  xx[577] = xx[8] * xx[10];
  xx[645] = (xx[575] + xx[577]) * xx[12];
  xx[670] = (xx[464] + xx[465]) * xx[12];
  xx[464] = (xx[236] + xx[10] * xx[10]) * xx[12] - xx[172];
  xx[465] = xx[10] * xx[11];
  xx[671] = xx[8] * xx[9];
  xx[693] = xx[12] * (xx[465] - xx[671]);
  xx[694] = xx[12] * (xx[575] - xx[577]);
  xx[575] = (xx[465] + xx[671]) * xx[12];
  xx[465] = (xx[236] + xx[11] * xx[11]) * xx[12] - xx[172];
  xx[699] = xx[463];
  xx[700] = xx[542];
  xx[701] = xx[645];
  xx[702] = xx[670];
  xx[703] = xx[464];
  xx[704] = xx[693];
  xx[705] = xx[694];
  xx[706] = xx[575];
  xx[707] = xx[465];
  xx[708] = xx[578];
  xx[709] = xx[639];
  xx[710] = xx[664];
  xx[711] = xx[579];
  xx[712] = xx[640];
  xx[713] = xx[665];
  xx[714] = xx[557];
  xx[715] = xx[627];
  xx[716] = xx[652];
  xx[717] = xx[559];
  xx[718] = xx[628];
  xx[719] = xx[653];
  xx[720] = xx[580];
  xx[721] = xx[629];
  xx[722] = xx[654];
  xx[723] = xx[608];
  xx[724] = xx[641];
  xx[725] = xx[666];
  solveSymmetricPosDef(xx + 672, xx + 708, 3, 6, xx + 726, xx + 744);
  xx[236] = xx[579] * xx[726] + xx[640] * xx[727] + xx[665] * xx[728];
  xx[577] = xx[557] * xx[726] + xx[627] * xx[727] + xx[652] * xx[728];
  xx[671] = xx[557] * xx[729] + xx[627] * xx[730] + xx[652] * xx[731];
  xx[708] = xx[292] - (xx[578] * xx[726] + xx[639] * xx[727] + xx[664] * xx[728])
    + xx[18];
  xx[709] = xx[295] - xx[236];
  xx[710] = xx[298] - xx[577];
  xx[711] = xx[301] - xx[236];
  xx[712] = xx[310] - (xx[579] * xx[729] + xx[640] * xx[730] + xx[665] * xx[731])
    + xx[29];
  xx[713] = xx[311] - xx[671];
  xx[714] = xx[318] - xx[577];
  xx[715] = xx[319] - xx[671];
  xx[716] = xx[341] - (xx[557] * xx[732] + xx[627] * xx[733] + xx[652] * xx[734])
    + xx[30];
  pm_math_matrix3x3ComposeTranspose(xx + 708, xx + 699, xx + 717);
  pm_math_matrix3x3Compose(xx + 699, xx + 717, xx + 708);
  xx[717] = xx[560] - (xx[578] * xx[735] + xx[639] * xx[736] + xx[664] * xx[737]);
  xx[718] = xx[431] - (xx[578] * xx[738] + xx[639] * xx[739] + xx[664] * xx[740]);
  xx[719] = xx[434] - (xx[578] * xx[741] + xx[639] * xx[742] + xx[664] * xx[743]);
  xx[720] = xx[437] - (xx[579] * xx[735] + xx[640] * xx[736] + xx[665] * xx[737]);
  xx[721] = xx[432] - (xx[579] * xx[738] + xx[640] * xx[739] + xx[665] * xx[740]);
  xx[722] = xx[435] - (xx[579] * xx[741] + xx[640] * xx[742] + xx[665] * xx[743]);
  xx[723] = xx[438] - (xx[557] * xx[735] + xx[627] * xx[736] + xx[652] * xx[737]);
  xx[724] = xx[433] - (xx[557] * xx[738] + xx[627] * xx[739] + xx[652] * xx[740]);
  xx[725] = xx[436] - (xx[557] * xx[741] + xx[627] * xx[742] + xx[652] * xx[743]);
  pm_math_matrix3x3ComposeTranspose(xx + 717, xx + 699, xx + 744);
  pm_math_matrix3x3Compose(xx + 699, xx + 744, xx + 717);
  pm_math_matrix3x3PostCross(xx + 717, xx + 209, xx + 744);
  xx[236] = xx[580] * xx[735] + xx[629] * xx[736] + xx[654] * xx[737];
  xx[292] = xx[608] * xx[735] + xx[641] * xx[736] + xx[666] * xx[737];
  xx[295] = xx[608] * xx[738] + xx[641] * xx[739] + xx[666] * xx[740];
  xx[753] = xx[599] - (xx[559] * xx[735] + xx[628] * xx[736] + xx[653] * xx[737])
    + xx[558];
  xx[754] = xx[600] - xx[236];
  xx[755] = xx[601] - xx[292];
  xx[756] = xx[602] - xx[236];
  xx[757] = xx[603] - (xx[580] * xx[738] + xx[629] * xx[739] + xx[654] * xx[740])
    + xx[558];
  xx[758] = xx[604] - xx[295];
  xx[759] = xx[605] - xx[292];
  xx[760] = xx[606] - xx[295];
  xx[761] = xx[607] - (xx[608] * xx[741] + xx[641] * xx[742] + xx[666] * xx[743])
    + xx[558];
  pm_math_matrix3x3ComposeTranspose(xx + 753, xx + 699, xx + 599);
  pm_math_matrix3x3Compose(xx + 699, xx + 599, xx + 753);
  pm_math_matrix3x3PostCross(xx + 753, xx + 209, xx + 599);
  pm_math_matrix3x3PreCross(xx + 599, xx + 209, xx + 753);
  xx[236] = xx[52] + xx[716] - xx[752] - xx[752] - xx[761];
  memcpy(xx + 292, xx + 236, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 292, 1, xx + 295);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_1/Revolute' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[295] = (xx[698] + xx[695] + xx[220]) / xx[292];
  xx[431] = xx[726];
  xx[432] = xx[729];
  xx[433] = xx[732];
  xx[298] = xx[295] * xx[10];
  xx[301] = xx[295] * xx[9];
  xx[310] = xx[12] * (xx[8] * xx[298] - xx[11] * xx[301]);
  xx[311] = (xx[8] * xx[301] + xx[11] * xx[298]) * xx[12];
  xx[318] = (xx[9] * xx[301] + xx[10] * xx[298]) * xx[12] - xx[295];
  xx[434] = xx[310];
  xx[435] = - xx[311];
  xx[436] = xx[318];
  xx[605] = xx[735];
  xx[606] = xx[738];
  xx[607] = xx[741];
  xx[298] = xx[295] * xx[210];
  xx[301] = xx[295] * xx[209];
  xx[319] = xx[11] * xx[301];
  xx[341] = xx[11] * xx[298];
  xx[437] = xx[9] * xx[301] + xx[10] * xx[298];
  xx[695] = xx[319];
  xx[696] = xx[341];
  xx[697] = - xx[437];
  pm_math_cross3(xx + 9, xx + 695, xx + 708);
  xx[438] = xx[298] + xx[12] * (xx[708] - xx[8] * xx[319]);
  xx[298] = xx[12] * (xx[709] - xx[8] * xx[341]) - xx[301];
  xx[301] = (xx[437] * xx[8] + xx[710]) * xx[12];
  xx[695] = xx[438];
  xx[696] = xx[298];
  xx[697] = xx[301];
  xx[319] = xx[543] - (pm_math_dot3(xx + 431, xx + 434) + pm_math_dot3(xx + 605,
    xx + 695));
  xx[708] = xx[727];
  xx[709] = xx[730];
  xx[710] = xx[733];
  xx[711] = xx[736];
  xx[712] = xx[739];
  xx[713] = xx[742];
  xx[341] = xx[544] - (pm_math_dot3(xx + 708, xx + 434) + pm_math_dot3(xx + 711,
    xx + 695));
  xx[714] = xx[728];
  xx[715] = xx[731];
  xx[716] = xx[734];
  xx[717] = xx[737];
  xx[718] = xx[740];
  xx[719] = xx[743];
  xx[437] = xx[545] - (pm_math_dot3(xx + 714, xx + 434) + pm_math_dot3(xx + 717,
    xx + 695));
  xx[434] = xx[581];
  xx[435] = xx[584];
  xx[436] = xx[587];
  xx[543] = xx[310] - xx[355] * xx[319] + xx[609] * xx[341] + xx[646] * xx[437];
  xx[544] = xx[548] * xx[319] - xx[311] + xx[610] * xx[341] + xx[647] * xx[437];
  xx[545] = xx[318] - xx[551] * xx[319] + xx[623] * xx[341] - xx[648] * xx[437];
  pm_math_quatInverseXform(xx + 53, xx + 543, xx + 695);
  xx[720] = xx[590];
  xx[721] = xx[593];
  xx[722] = xx[596];
  pm_math_cross3(xx + 543, xx + 539, xx + 725);
  xx[543] = xx[438] - xx[439] * xx[319] - xx[630] * xx[341] - xx[655] * xx[437]
    + xx[725];
  xx[544] = xx[298] - xx[570] * xx[319] + xx[631] * xx[341] + xx[656] * xx[437]
    + xx[726];
  xx[545] = xx[301] + xx[571] * xx[319] + xx[632] * xx[341] - xx[657] * xx[437]
    + xx[727];
  pm_math_quatInverseXform(xx + 53, xx + 543, xx + 725);
  xx[298] = xx[366] - (pm_math_dot3(xx + 434, xx + 695) + pm_math_dot3(xx + 720,
    xx + 725));
  xx[543] = xx[582];
  xx[544] = xx[585];
  xx[545] = xx[588];
  xx[728] = xx[591];
  xx[729] = xx[594];
  xx[730] = xx[597];
  xx[301] = xx[367] - (pm_math_dot3(xx + 543, xx + 695) + pm_math_dot3(xx + 728,
    xx + 725));
  xx[731] = xx[583];
  xx[732] = xx[586];
  xx[733] = xx[589];
  xx[581] = xx[592];
  xx[582] = xx[595];
  xx[583] = xx[598];
  xx[310] = xx[368] - (pm_math_dot3(xx + 731, xx + 695) + pm_math_dot3(xx + 581,
    xx + 725));
  xx[366] = xx[340];
  xx[367] = xx[86];
  xx[368] = - xx[285];
  xx[584] = xx[695] + xx[312] * xx[298] + xx[384] * xx[301] - xx[492] * xx[310];
  xx[585] = xx[696] - xx[313] * xx[298] + xx[390] * xx[301] + xx[493] * xx[310];
  xx[586] = xx[697] + xx[314] * xx[298] - xx[391] * xx[301] + xx[494] * xx[310];
  pm_math_quatInverseXform(xx + 76, xx + 584, xx + 587);
  pm_math_cross3(xx + 584, xx + 460, xx + 590);
  xx[584] = xx[725] + xx[353] * xx[298] - xx[394] * xx[301] + xx[501] * xx[310]
    + xx[590];
  xx[585] = xx[726] - xx[354] * xx[298] + xx[395] * xx[301] - xx[502] * xx[310]
    + xx[591];
  xx[586] = xx[727] - xx[357] * xx[298] + xx[397] * xx[301] + xx[503] * xx[310]
    + xx[592];
  pm_math_quatInverseXform(xx + 76, xx + 584, xx + 590);
  xx[86] = xx[382] + pm_math_dot3(xx + 366, xx + 587) + pm_math_dot3(xx + 286,
    xx + 590);
  xx[584] = xx[587] + xx[86] * xx[61];
  xx[585] = xx[588];
  xx[586] = xx[589] + xx[86] * xx[70];
  pm_math_quatInverseXform(xx + 149, xx + 584, xx + 587);
  xx[285] = 0.6906625692646777;
  xx[311] = xx[13] * input[1];
  xx[318] = cos(xx[311]);
  xx[340] = 0.2115990337965399;
  xx[382] = sin(xx[311]);
  xx[311] = xx[285] * xx[318] + xx[340] * xx[382];
  xx[438] = xx[13] * state[28];
  xx[560] = cos(xx[438]);
  xx[577] = xx[311] * xx[560];
  xx[584] = sin(xx[438]);
  xx[438] = xx[285] * xx[382] - xx[340] * xx[318];
  xx[285] = xx[584] * xx[438];
  xx[340] = 0.1540537228335995;
  xx[585] = 0.6741502167871741;
  xx[586] = xx[340] * xx[318] + xx[585] * xx[382];
  xx[587] = xx[340] * xx[382] - xx[585] * xx[318];
  xx[318] = xx[560] * xx[586] + xx[587] * xx[584];
  xx[340] = - xx[318];
  xx[382] = xx[584] * xx[586] - xx[587] * xx[560];
  xx[585] = xx[560] * xx[438] - xx[311] * xx[584];
  xx[590] = - (xx[577] + xx[285]);
  xx[591] = xx[340];
  xx[592] = xx[382];
  xx[593] = xx[585];
  xx[594] = - state[30];
  xx[595] = state[31];
  xx[596] = state[32];
  xx[597] = state[33];
  xx[695] = 0.7104802220622386;
  xx[696] = 0.01519281452457135;
  xx[697] = 0.03567679611900203;
  xx[698] = 0.7026479905784245;
  pm_math_quatComposeInverse(xx + 594, xx + 695, xx + 734);
  pm_math_quatCompose(xx + 590, xx + 734, xx + 594);
  xx[588] = xx[735] * xx[737];
  xx[590] = xx[734] * xx[736];
  xx[591] = xx[12] * (xx[588] - xx[590]);
  xx[592] = xx[734] * xx[735];
  xx[593] = xx[736] * xx[737];
  xx[598] = (xx[592] + xx[593]) * xx[12];
  xx[599] = xx[735] * xx[735];
  xx[600] = xx[736] * xx[736];
  xx[602] = (xx[599] + xx[600]) * xx[12];
  xx[725] = xx[591];
  xx[726] = xx[598];
  xx[727] = xx[172] - xx[602];
  xx[603] = 0.0584549843658078;
  xx[738] = 7.069600219443676e-8;
  xx[739] = xx[603];
  xx[740] = 2.575015558525666e-7;
  pm_math_cross3(xx + 725, xx + 738, xx + 741);
  pm_math_quatXform(xx + 594, xx + 741, xx + 725);
  xx[594] = 7.068388100095277e-8;
  xx[595] = 0.05844501563422291;
  xx[596] = - 2.574148174611749e-7;
  pm_math_quatXform(xx + 734, xx + 594, xx + 741);
  xx[597] = xx[742] * xx[584] - xx[560] * xx[741];
  xx[671] = 6.857529093155745e-14;
  xx[744] = 1.07825278846284e-13;
  xx[745] = xx[671] * xx[584] - xx[744] * xx[560];
  xx[746] = xx[12] * xx[745] * xx[584];
  xx[747] = xx[12] * xx[584] * xx[597] - (xx[742] + xx[746]) + xx[671];
  xx[748] = - xx[311];
  xx[749] = xx[748];
  xx[750] = xx[438];
  xx[751] = xx[587];
  xx[752] = xx[12] * xx[745] * xx[560];
  xx[745] = xx[741] + xx[12] * xx[560] * xx[597] - xx[752] - xx[744];
  xx[597] = xx[587] * xx[745];
  xx[753] = xx[587] * xx[747];
  xx[754] = xx[311] * xx[745] + xx[747] * xx[438];
  xx[755] = - xx[597];
  xx[756] = xx[753];
  xx[757] = - xx[754];
  pm_math_cross3(xx + 749, xx + 755, xx + 758);
  xx[755] = xx[725] + xx[747] + xx[12] * (xx[758] - xx[597] * xx[586]);
  xx[761] = state[30];
  xx[762] = state[31];
  xx[763] = state[32];
  xx[764] = state[33];
  pm_math_quatCompose(xx + 695, xx + 761, xx + 765);
  xx[597] = xx[767] * xx[767];
  xx[695] = xx[768] * xx[768];
  xx[696] = (xx[597] + xx[695]) * xx[12] - xx[172];
  xx[697] = xx[765] * xx[768];
  xx[698] = xx[766] * xx[767];
  xx[747] = (xx[697] + xx[698]) * xx[12];
  xx[756] = xx[765] * xx[767];
  xx[757] = xx[766] * xx[768];
  xx[769] = xx[12] * (xx[756] - xx[757]);
  xx[770] = xx[696];
  xx[771] = - xx[747];
  xx[772] = xx[769];
  xx[773] = xx[696] * xx[29];
  xx[696] = xx[30] * xx[747];
  xx[747] = - xx[696];
  xx[774] = xx[18] * xx[769];
  xx[775] = xx[773];
  xx[776] = xx[747];
  xx[777] = xx[774];
  pm_math_cross3(xx + 770, xx + 594, xx + 778);
  xx[769] = xx[558] * xx[778];
  xx[781] = xx[558] * xx[779];
  xx[782] = xx[558] * xx[780];
  xx[783] = xx[769];
  xx[784] = xx[781];
  xx[785] = xx[782];
  xx[786] = xx[12] * (xx[697] - xx[698]);
  xx[697] = xx[29] * xx[786];
  xx[698] = xx[766] * xx[766];
  xx[787] = (xx[695] + xx[698]) * xx[12] - xx[172];
  xx[695] = xx[787] * xx[30];
  xx[788] = xx[765] * xx[766];
  xx[765] = xx[767] * xx[768];
  xx[766] = (xx[788] + xx[765]) * xx[12];
  xx[767] = xx[18] * xx[766];
  xx[768] = - xx[767];
  xx[789] = xx[697];
  xx[790] = xx[695];
  xx[791] = xx[768];
  xx[792] = xx[786];
  xx[793] = xx[787];
  xx[794] = - xx[766];
  pm_math_cross3(xx + 792, xx + 594, xx + 795);
  xx[766] = xx[558] * xx[795];
  xx[786] = xx[558] * xx[796];
  xx[787] = xx[558] * xx[797];
  xx[798] = xx[766];
  xx[799] = xx[786];
  xx[800] = xx[787];
  xx[801] = pm_math_dot3(xx + 770, xx + 789) + pm_math_dot3(xx + 778, xx + 798);
  xx[802] = (xx[756] + xx[757]) * xx[12];
  xx[756] = xx[29] * xx[802];
  xx[757] = - xx[756];
  xx[803] = xx[12] * (xx[788] - xx[765]);
  xx[765] = xx[30] * xx[803];
  xx[788] = (xx[698] + xx[597]) * xx[12] - xx[172];
  xx[597] = xx[788] * xx[18];
  xx[804] = xx[757];
  xx[805] = xx[765];
  xx[806] = xx[597];
  xx[807] = - xx[802];
  xx[808] = xx[803];
  xx[809] = xx[788];
  pm_math_cross3(xx + 807, xx + 594, xx + 810);
  xx[698] = xx[558] * xx[810];
  xx[788] = xx[558] * xx[811];
  xx[802] = xx[558] * xx[812];
  xx[813] = xx[698];
  xx[814] = xx[788];
  xx[815] = xx[802];
  xx[803] = pm_math_dot3(xx + 770, xx + 804) + pm_math_dot3(xx + 778, xx + 813);
  xx[816] = pm_math_dot3(xx + 792, xx + 804) + pm_math_dot3(xx + 795, xx + 813);
  xx[817] = pm_math_dot3(xx + 770, xx + 775) + pm_math_dot3(xx + 778, xx + 783);
  xx[818] = xx[801];
  xx[819] = xx[803];
  xx[820] = xx[801];
  xx[821] = pm_math_dot3(xx + 792, xx + 789) + pm_math_dot3(xx + 795, xx + 798);
  xx[822] = xx[816];
  xx[823] = xx[803];
  xx[824] = xx[816];
  xx[825] = pm_math_dot3(xx + 807, xx + 804) + pm_math_dot3(xx + 810, xx + 813);
  ii[0] = factorSymmetricPosDef(xx + 817, 3, xx + 775);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_2 /Spherical Joint11' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[775] = xx[285] + xx[577];
  xx[798] = - xx[775];
  xx[799] = xx[340];
  xx[800] = xx[382];
  xx[801] = xx[585];
  pm_math_quatCompose(xx + 798, xx + 734, xx + 803);
  xx[285] = xx[737] * xx[737];
  xx[340] = xx[734] * xx[737];
  xx[577] = xx[735] * xx[736];
  xx[783] = (xx[600] + xx[285]) * xx[12] - xx[172];
  xx[784] = xx[12] * (xx[340] - xx[577]);
  xx[785] = - ((xx[590] + xx[588]) * xx[12]);
  pm_math_cross3(xx + 783, xx + 738, xx + 789);
  pm_math_quatXform(xx + 803, xx + 789, xx + 813);
  pm_math_cross3(xx + 783, xx + 594, xx + 789);
  pm_math_quatXform(xx + 734, xx + 789, xx + 783);
  pm_math_quatXform(xx + 798, xx + 783, xx + 789);
  xx[776] = xx[813] + xx[789];
  xx[783] = - ((xx[340] + xx[577]) * xx[12]);
  xx[784] = (xx[285] + xx[599]) * xx[12] - xx[172];
  xx[785] = xx[12] * (xx[592] - xx[593]);
  pm_math_cross3(xx + 783, xx + 738, xx + 826);
  pm_math_quatXform(xx + 803, xx + 826, xx + 829);
  pm_math_cross3(xx + 783, xx + 594, xx + 826);
  pm_math_quatXform(xx + 734, xx + 826, xx + 783);
  pm_math_quatXform(xx + 798, xx + 783, xx + 826);
  xx[777] = xx[829] + xx[826];
  xx[783] = xx[12] * (xx[590] - xx[588]);
  xx[784] = - xx[598];
  xx[785] = xx[602] - xx[172];
  pm_math_cross3(xx + 783, xx + 738, xx + 832);
  pm_math_quatXform(xx + 803, xx + 832, xx + 835);
  pm_math_cross3(xx + 783, xx + 594, xx + 803);
  pm_math_quatXform(xx + 734, xx + 803, xx + 783);
  pm_math_quatXform(xx + 798, xx + 783, xx + 803);
  xx[598] = xx[835] + xx[803];
  xx[783] = xx[776];
  xx[784] = xx[777];
  xx[785] = xx[598];
  solveSymmetricPosDef(xx + 817, xx + 783, 3, 1, xx + 832, xx + 838);
  xx[783] = xx[832] * xx[773] + xx[833] * xx[697] - xx[834] * xx[756];
  xx[784] = xx[833] * xx[695] - xx[832] * xx[696] + xx[834] * xx[765];
  xx[785] = xx[832] * xx[774] - xx[833] * xx[767] + xx[834] * xx[597];
  pm_math_quatXform(xx + 734, xx + 783, xx + 838);
  xx[783] = xx[832] * xx[769] + xx[833] * xx[766] + xx[834] * xx[698];
  xx[784] = xx[832] * xx[781] + xx[833] * xx[786] + xx[834] * xx[788];
  xx[785] = xx[832] * xx[782] + xx[833] * xx[787] + xx[834] * xx[802];
  pm_math_quatXform(xx + 734, xx + 783, xx + 841);
  pm_math_cross3(xx + 741, xx + 841, xx + 783);
  xx[602] = xx[734] * xx[734];
  xx[783] = (xx[602] + xx[599]) * xx[12] - xx[172];
  xx[599] = xx[12] * (xx[577] - xx[340]);
  xx[784] = (xx[588] + xx[590]) * xx[12];
  xx[588] = (xx[577] + xx[340]) * xx[12];
  xx[340] = (xx[602] + xx[600]) * xx[12] - xx[172];
  xx[577] = xx[12] * (xx[593] - xx[592]);
  xx[590] = (xx[593] + xx[592]) * xx[12];
  xx[592] = (xx[602] + xx[285]) * xx[12] - xx[172];
  xx[843] = xx[783];
  xx[844] = xx[599];
  xx[845] = xx[784];
  xx[846] = xx[588];
  xx[847] = xx[340];
  xx[848] = xx[577];
  xx[849] = xx[591];
  xx[850] = xx[590];
  xx[851] = xx[592];
  xx[852] = xx[773];
  xx[853] = xx[697];
  xx[854] = xx[757];
  xx[855] = xx[747];
  xx[856] = xx[695];
  xx[857] = xx[765];
  xx[858] = xx[774];
  xx[859] = xx[768];
  xx[860] = xx[597];
  xx[861] = xx[769];
  xx[862] = xx[766];
  xx[863] = xx[698];
  xx[864] = xx[781];
  xx[865] = xx[786];
  xx[866] = xx[788];
  xx[867] = xx[782];
  xx[868] = xx[787];
  xx[869] = xx[802];
  solveSymmetricPosDef(xx + 817, xx + 852, 3, 6, xx + 870, xx + 888);
  xx[285] = - (xx[871] * xx[695] - xx[870] * xx[696] + xx[872] * xx[765]);
  xx[593] = - (xx[870] * xx[774] - xx[871] * xx[767] + xx[872] * xx[597]);
  xx[600] = - (xx[873] * xx[774] - xx[874] * xx[767] + xx[875] * xx[597]);
  xx[852] = xx[29] - (xx[870] * xx[773] + xx[871] * xx[697] - xx[872] * xx[756]);
  xx[853] = xx[285];
  xx[854] = xx[593];
  xx[855] = xx[285];
  xx[856] = xx[30] - (xx[874] * xx[695] - xx[873] * xx[696] + xx[875] * xx[765]);
  xx[857] = xx[600];
  xx[858] = xx[593];
  xx[859] = xx[600];
  xx[860] = xx[18] - (xx[876] * xx[774] - xx[877] * xx[767] + xx[878] * xx[597]);
  pm_math_matrix3x3ComposeTranspose(xx + 852, xx + 843, xx + 861);
  pm_math_matrix3x3Compose(xx + 843, xx + 861, xx + 852);
  xx[861] = xx[881] * xx[756] - (xx[879] * xx[773] + xx[880] * xx[697]);
  xx[862] = xx[884] * xx[756] - (xx[882] * xx[773] + xx[883] * xx[697]);
  xx[863] = xx[887] * xx[756] - (xx[885] * xx[773] + xx[886] * xx[697]);
  xx[864] = - (xx[880] * xx[695] - xx[879] * xx[696] + xx[881] * xx[765]);
  xx[865] = - (xx[883] * xx[695] - xx[882] * xx[696] + xx[884] * xx[765]);
  xx[866] = - (xx[886] * xx[695] - xx[885] * xx[696] + xx[887] * xx[765]);
  xx[867] = - (xx[879] * xx[774] - xx[880] * xx[767] + xx[881] * xx[597]);
  xx[868] = - (xx[882] * xx[774] - xx[883] * xx[767] + xx[884] * xx[597]);
  xx[869] = - (xx[885] * xx[774] - xx[886] * xx[767] + xx[887] * xx[597]);
  pm_math_matrix3x3ComposeTranspose(xx + 861, xx + 843, xx + 888);
  pm_math_matrix3x3Compose(xx + 843, xx + 888, xx + 861);
  pm_math_matrix3x3PostCross(xx + 861, xx + 741, xx + 888);
  xx[285] = - (xx[879] * xx[781] + xx[880] * xx[786] + xx[881] * xx[788]);
  xx[593] = - (xx[879] * xx[782] + xx[880] * xx[787] + xx[881] * xx[802]);
  xx[600] = - (xx[882] * xx[782] + xx[883] * xx[787] + xx[884] * xx[802]);
  xx[897] = xx[558] - (xx[879] * xx[769] + xx[880] * xx[766] + xx[881] * xx[698]);
  xx[898] = xx[285];
  xx[899] = xx[593];
  xx[900] = xx[285];
  xx[901] = xx[558] - (xx[882] * xx[781] + xx[883] * xx[786] + xx[884] * xx[788]);
  xx[902] = xx[600];
  xx[903] = xx[593];
  xx[904] = xx[600];
  xx[905] = xx[558] - (xx[885] * xx[782] + xx[886] * xx[787] + xx[887] * xx[802]);
  pm_math_matrix3x3ComposeTranspose(xx + 897, xx + 843, xx + 906);
  pm_math_matrix3x3Compose(xx + 843, xx + 906, xx + 897);
  pm_math_matrix3x3PostCross(xx + 897, xx + 741, xx + 843);
  pm_math_matrix3x3PreCross(xx + 843, xx + 741, xx + 902);
  xx[285] = xx[867] - xx[845];
  xx[593] = xx[868] - xx[848];
  xx[600] = xx[860] - xx[896] - xx[896] - xx[910] + xx[671] * xx[285] - xx[744] *
    xx[593] + xx[52];
  xx[602] = xx[274] + xx[897];
  xx[747] = xx[285] + xx[602] * xx[671] - xx[744] * xx[898];
  xx[757] = xx[274] + xx[901];
  xx[768] = xx[593] + xx[671] * xx[900] - xx[757] * xx[744];
  xx[806] = xx[600] + xx[747] * xx[671] - xx[768] * xx[744];
  ii[0] = factorSymmetricPosDef(xx + 806, 1, xx + 816);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_2 /Revolute1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[816] = (xx[755] - (xx[840] + xx[785] + xx[671] * xx[841] - xx[744] * xx[842]))
    / xx[806];
  xx[838] = xx[870];
  xx[839] = xx[873];
  xx[840] = xx[876];
  xx[785] = xx[816] * xx[735];
  xx[841] = xx[816] * xx[736];
  xx[842] = xx[12] * (xx[737] * xx[785] - xx[734] * xx[841]);
  xx[843] = (xx[734] * xx[785] + xx[737] * xx[841]) * xx[12];
  xx[844] = xx[816] - (xx[735] * xx[785] + xx[736] * xx[841]) * xx[12];
  xx[845] = xx[879];
  xx[846] = xx[882];
  xx[847] = xx[885];
  xx[785] = xx[671] * xx[816] - xx[816] * xx[742];
  xx[841] = xx[816] * xx[741] - xx[744] * xx[816];
  xx[848] = xx[841] * xx[737];
  xx[849] = xx[737] * xx[785];
  xx[850] = xx[841] * xx[735] - xx[736] * xx[785];
  xx[851] = - xx[848];
  xx[852] = xx[849];
  xx[853] = xx[850];
  pm_math_cross3(xx + 735, xx + 851, xx + 854);
  xx[851] = xx[785] + (xx[734] * xx[848] + xx[854]) * xx[12];
  xx[852] = xx[841] + xx[12] * (xx[855] - xx[734] * xx[849]);
  xx[853] = xx[12] * (xx[856] - xx[734] * xx[850]);
  xx[848] = xx[871];
  xx[849] = xx[874];
  xx[850] = xx[877];
  xx[854] = xx[880];
  xx[855] = xx[883];
  xx[856] = xx[886];
  xx[857] = xx[872];
  xx[858] = xx[875];
  xx[859] = xx[878];
  xx[860] = xx[881];
  xx[861] = xx[884];
  xx[862] = xx[887];
  xx[785] = (xx[234] - xx[179] * xx[226] * xx[229]) * xx[12] - xx[178];
  xx[178] = xx[785] / xx[222];
  xx[179] = xx[52] * xx[178];
  xx[229] = xx[179] * xx[141];
  xx[841] = xx[60] * xx[179];
  xx[863] = (xx[229] * xx[69] + xx[136] * xx[841]) * xx[12];
  xx[864] = (xx[60] * xx[841] + xx[229] * xx[141]) * xx[12] - xx[179];
  xx[179] = xx[243] + xx[248];
  xx[865] = (xx[61] * xx[863] - xx[70] * xx[864] + xx[179]) / xx[359];
  xx[866] = - (xx[863] + xx[865] * xx[342]);
  xx[867] = xx[12] * (xx[136] * xx[229] - xx[841] * xx[69]) - xx[425] * xx[865];
  xx[868] = xx[864] + xx[307] * xx[865];
  pm_math_quatXform(xx + 76, xx + 866, xx + 869);
  xx[866] = - (xx[294] * xx[865]);
  xx[867] = - (xx[297] * xx[865]);
  xx[868] = - (xx[865] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 866, xx + 872);
  pm_math_cross3(xx + 460, xx + 872, xx + 866);
  xx[229] = xx[869] + xx[866];
  xx[841] = xx[870] + xx[867];
  xx[863] = xx[871] + xx[868];
  xx[866] = xx[229];
  xx[867] = xx[841];
  xx[868] = xx[863];
  xx[864] = xx[467] + xx[508];
  xx[869] = xx[514] + xx[531];
  xx[870] = xx[534] + xx[537];
  xx[875] = - (pm_math_dot3(xx + 315, xx + 866) + pm_math_dot3(xx + 443, xx +
    872) + xx[864]);
  xx[876] = - (pm_math_dot3(xx + 478, xx + 866) + pm_math_dot3(xx + 485, xx +
    872) + xx[869]);
  xx[877] = - (pm_math_dot3(xx + 495, xx + 866) + pm_math_dot3(xx + 504, xx +
    872) + xx[870]);
  solveSymmetricPosDef(xx + 518, xx + 875, 3, 1, xx + 866, xx + 878);
  xx[875] = xx[229] + xx[358] * xx[866] + xx[422] * xx[867] + xx[510] * xx[868];
  xx[876] = xx[841] + xx[360] * xx[866] + xx[426] * xx[867] + xx[511] * xx[868];
  xx[877] = xx[863] + xx[361] * xx[866] + xx[428] * xx[867] + xx[498] * xx[868];
  pm_math_quatXform(xx + 53, xx + 875, xx + 878);
  xx[875] = xx[872] + xx[363] * xx[866] + xx[446] * xx[867] + xx[499] * xx[868];
  xx[876] = xx[873] + xx[365] * xx[866] + xx[457] * xx[867] + xx[500] * xx[868];
  xx[877] = xx[874] + xx[371] * xx[866] + xx[458] * xx[867] + xx[512] * xx[868];
  pm_math_quatXform(xx + 53, xx + 875, xx + 871);
  pm_math_cross3(xx + 539, xx + 871, xx + 874);
  xx[229] = xx[878] + xx[874];
  xx[841] = xx[879] + xx[875];
  xx[863] = xx[880] + xx[876];
  xx[874] = xx[229];
  xx[875] = xx[841];
  xx[876] = xx[863];
  xx[877] = xx[621] + xx[662];
  xx[878] = xx[668] + xx[685];
  xx[879] = xx[688] + xx[691];
  xx[880] = - (pm_math_dot3(xx + 554, xx + 874) + pm_math_dot3(xx + 572, xx +
    871) + xx[877]);
  xx[881] = - (pm_math_dot3(xx + 624, xx + 874) + pm_math_dot3(xx + 633, xx +
    871) + xx[878]);
  xx[882] = - (pm_math_dot3(xx + 649, xx + 874) + pm_math_dot3(xx + 658, xx +
    871) + xx[879]);
  solveSymmetricPosDef(xx + 672, xx + 880, 3, 1, xx + 874, xx + 883);
  xx[880] = xx[229] + xx[578] * xx[874] + xx[639] * xx[875] + xx[664] * xx[876];
  xx[881] = xx[841] + xx[579] * xx[874] + xx[640] * xx[875] + xx[665] * xx[876];
  xx[882] = xx[863] + xx[557] * xx[874] + xx[627] * xx[875] + xx[652] * xx[876];
  pm_math_quatXform(xx + 8, xx + 880, xx + 883);
  xx[880] = xx[871] + xx[559] * xx[874] + xx[628] * xx[875] + xx[653] * xx[876];
  xx[881] = xx[872] + xx[580] * xx[874] + xx[629] * xx[875] + xx[654] * xx[876];
  xx[882] = xx[873] + xx[608] * xx[874] + xx[641] * xx[875] + xx[666] * xx[876];
  pm_math_quatXform(xx + 8, xx + 880, xx + 871);
  pm_math_cross3(xx + 209, xx + 871, xx + 880);
  xx[229] = xx[176] + xx[217] + (xx[218] * xx[112] + xx[224]) * xx[12];
  xx[217] = (xx[885] + xx[882] + xx[229]) / xx[292];
  xx[218] = xx[217] * xx[10];
  xx[841] = xx[217] * xx[9];
  xx[863] = xx[12] * (xx[8] * xx[218] - xx[11] * xx[841]);
  xx[871] = (xx[8] * xx[841] + xx[11] * xx[218]) * xx[12];
  xx[872] = (xx[9] * xx[841] + xx[10] * xx[218]) * xx[12] - xx[217];
  xx[880] = xx[863];
  xx[881] = - xx[871];
  xx[882] = xx[872];
  xx[218] = xx[217] * xx[210];
  xx[841] = xx[217] * xx[209];
  xx[873] = xx[11] * xx[841];
  xx[883] = xx[11] * xx[218];
  xx[884] = xx[9] * xx[841] + xx[10] * xx[218];
  xx[885] = xx[873];
  xx[886] = xx[883];
  xx[887] = - xx[884];
  pm_math_cross3(xx + 9, xx + 885, xx + 888);
  xx[885] = xx[218] + xx[12] * (xx[888] - xx[8] * xx[873]);
  xx[218] = xx[12] * (xx[889] - xx[8] * xx[883]) - xx[841];
  xx[841] = (xx[884] * xx[8] + xx[890]) * xx[12];
  xx[886] = xx[885];
  xx[887] = xx[218];
  xx[888] = xx[841];
  xx[873] = xx[874] - (pm_math_dot3(xx + 431, xx + 880) + pm_math_dot3(xx + 605,
    xx + 886));
  xx[874] = xx[875] - (pm_math_dot3(xx + 708, xx + 880) + pm_math_dot3(xx + 711,
    xx + 886));
  xx[875] = xx[876] - (pm_math_dot3(xx + 714, xx + 880) + pm_math_dot3(xx + 717,
    xx + 886));
  xx[880] = xx[863] - xx[355] * xx[873] + xx[609] * xx[874] + xx[646] * xx[875];
  xx[881] = xx[548] * xx[873] - xx[871] + xx[610] * xx[874] + xx[647] * xx[875];
  xx[882] = xx[872] - xx[551] * xx[873] + xx[623] * xx[874] - xx[648] * xx[875];
  pm_math_quatInverseXform(xx + 53, xx + 880, xx + 886);
  pm_math_cross3(xx + 880, xx + 539, xx + 889);
  xx[880] = xx[885] - xx[439] * xx[873] - xx[630] * xx[874] - xx[655] * xx[875]
    + xx[889];
  xx[881] = xx[218] - xx[570] * xx[873] + xx[631] * xx[874] + xx[656] * xx[875]
    + xx[890];
  xx[882] = xx[841] + xx[571] * xx[873] + xx[632] * xx[874] - xx[657] * xx[875]
    + xx[891];
  pm_math_quatInverseXform(xx + 53, xx + 880, xx + 883);
  xx[218] = xx[866] - (pm_math_dot3(xx + 434, xx + 886) + pm_math_dot3(xx + 720,
    xx + 883));
  xx[841] = xx[867] - (pm_math_dot3(xx + 543, xx + 886) + pm_math_dot3(xx + 728,
    xx + 883));
  xx[863] = xx[868] - (pm_math_dot3(xx + 731, xx + 886) + pm_math_dot3(xx + 581,
    xx + 883));
  xx[866] = xx[886] + xx[312] * xx[218] + xx[384] * xx[841] - xx[492] * xx[863];
  xx[867] = xx[887] - xx[313] * xx[218] + xx[390] * xx[841] + xx[493] * xx[863];
  xx[868] = xx[888] + xx[314] * xx[218] - xx[391] * xx[841] + xx[494] * xx[863];
  pm_math_quatInverseXform(xx + 76, xx + 866, xx + 880);
  pm_math_cross3(xx + 866, xx + 460, xx + 886);
  xx[866] = xx[883] + xx[353] * xx[218] - xx[394] * xx[841] + xx[501] * xx[863]
    + xx[886];
  xx[867] = xx[884] - xx[354] * xx[218] + xx[395] * xx[841] - xx[502] * xx[863]
    + xx[887];
  xx[868] = xx[885] - xx[357] * xx[218] + xx[397] * xx[841] + xx[503] * xx[863]
    + xx[888];
  pm_math_quatInverseXform(xx + 76, xx + 866, xx + 883);
  xx[866] = xx[865] + pm_math_dot3(xx + 366, xx + 880) + pm_math_dot3(xx + 286,
    xx + 883);
  xx[883] = xx[880] + xx[866] * xx[61];
  xx[884] = xx[881];
  xx[885] = xx[882] + xx[866] * xx[70];
  pm_math_quatInverseXform(xx + 149, xx + 883, xx + 880);
  xx[865] = xx[178] + xx[398] * xx[882];
  xx[178] = xx[726] + xx[745] + (xx[753] * xx[586] + xx[759]) * xx[12];
  xx[745] = xx[814] + xx[790];
  xx[753] = xx[830] + xx[827];
  xx[867] = xx[836] + xx[804];
  xx[880] = xx[745];
  xx[881] = xx[753];
  xx[882] = xx[867];
  solveSymmetricPosDef(xx + 817, xx + 880, 3, 1, xx + 883, xx + 886);
  xx[880] = xx[883] * xx[773] + xx[884] * xx[697] - xx[885] * xx[756];
  xx[881] = xx[884] * xx[695] - xx[883] * xx[696] + xx[885] * xx[765];
  xx[882] = xx[883] * xx[774] - xx[884] * xx[767] + xx[885] * xx[597];
  pm_math_quatXform(xx + 734, xx + 880, xx + 886);
  xx[880] = xx[883] * xx[769] + xx[884] * xx[766] + xx[885] * xx[698];
  xx[881] = xx[883] * xx[781] + xx[884] * xx[786] + xx[885] * xx[788];
  xx[882] = xx[883] * xx[782] + xx[884] * xx[787] + xx[885] * xx[802];
  pm_math_quatXform(xx + 734, xx + 880, xx + 889);
  pm_math_cross3(xx + 741, xx + 889, xx + 880);
  xx[868] = (xx[178] - (xx[888] + xx[882] + xx[671] * xx[889] - xx[744] * xx[890]))
    / xx[806];
  xx[871] = xx[868] * xx[735];
  xx[872] = xx[868] * xx[736];
  xx[880] = xx[12] * (xx[737] * xx[871] - xx[734] * xx[872]);
  xx[881] = (xx[734] * xx[871] + xx[737] * xx[872]) * xx[12];
  xx[882] = xx[868] - (xx[735] * xx[871] + xx[736] * xx[872]) * xx[12];
  xx[871] = xx[671] * xx[868] - xx[868] * xx[742];
  xx[872] = xx[868] * xx[741] - xx[744] * xx[868];
  xx[876] = xx[872] * xx[737];
  xx[886] = xx[737] * xx[871];
  xx[887] = xx[872] * xx[735] - xx[736] * xx[871];
  xx[888] = - xx[876];
  xx[889] = xx[886];
  xx[890] = xx[887];
  pm_math_cross3(xx + 735, xx + 888, xx + 891);
  xx[888] = xx[871] + (xx[734] * xx[876] + xx[891]) * xx[12];
  xx[889] = xx[872] + xx[12] * (xx[892] - xx[734] * xx[886]);
  xx[890] = xx[12] * (xx[893] - xx[734] * xx[887]);
  xx[871] = xx[883] - (pm_math_dot3(xx + 838, xx + 880) + pm_math_dot3(xx + 845,
    xx + 888));
  xx[872] = xx[884] - (pm_math_dot3(xx + 848, xx + 880) + pm_math_dot3(xx + 854,
    xx + 888));
  xx[876] = xx[885] - (pm_math_dot3(xx + 857, xx + 880) + pm_math_dot3(xx + 860,
    xx + 888));
  xx[880] = xx[220] * xx[217] - xx[546] * xx[873] - xx[547] * xx[874] - xx[576] *
    xx[875] - xx[237] * xx[218] - xx[238] * xx[841] - xx[441] * xx[863] + xx[866]
    * xx[227] + xx[221] * xx[865] + xx[755] * xx[868] + xx[776] * xx[871] + xx
    [777] * xx[872] + xx[598] * xx[876];
  xx[233] = (xx[226] * xx[187] + xx[235]) * xx[12];
  xx[187] = xx[233] / xx[222];
  xx[226] = xx[52] * xx[187];
  xx[234] = xx[226] * xx[141];
  xx[235] = xx[60] * xx[226];
  xx[881] = (xx[234] * xx[69] + xx[136] * xx[235]) * xx[12];
  xx[882] = (xx[60] * xx[235] + xx[234] * xx[141]) * xx[12] - xx[226];
  xx[226] = xx[244] + xx[249];
  xx[242] = (xx[61] * xx[881] - xx[70] * xx[882] + xx[226]) / xx[359];
  xx[247] = - (xx[881] + xx[242] * xx[342]);
  xx[248] = xx[12] * (xx[136] * xx[234] - xx[235] * xx[69]) - xx[425] * xx[242];
  xx[249] = xx[882] + xx[307] * xx[242];
  pm_math_quatXform(xx + 76, xx + 247, xx + 881);
  xx[247] = - (xx[294] * xx[242]);
  xx[248] = - (xx[297] * xx[242]);
  xx[249] = - (xx[242] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 247, xx + 884);
  pm_math_cross3(xx + 460, xx + 884, xx + 247);
  xx[234] = xx[881] + xx[247];
  xx[235] = xx[882] + xx[248];
  xx[243] = xx[883] + xx[249];
  xx[247] = xx[234];
  xx[248] = xx[235];
  xx[249] = xx[243];
  xx[244] = xx[468] + xx[509];
  xx[466] = xx[515] + xx[532];
  xx[467] = xx[535] + xx[538];
  xx[507] = - (pm_math_dot3(xx + 315, xx + 247) + pm_math_dot3(xx + 443, xx +
    884) + xx[244]);
  xx[508] = - (pm_math_dot3(xx + 478, xx + 247) + pm_math_dot3(xx + 485, xx +
    884) + xx[466]);
  xx[509] = - (pm_math_dot3(xx + 495, xx + 247) + pm_math_dot3(xx + 504, xx +
    884) + xx[467]);
  solveSymmetricPosDef(xx + 518, xx + 507, 3, 1, xx + 247, xx + 513);
  xx[507] = xx[234] + xx[358] * xx[247] + xx[422] * xx[248] + xx[510] * xx[249];
  xx[508] = xx[235] + xx[360] * xx[247] + xx[426] * xx[248] + xx[511] * xx[249];
  xx[509] = xx[243] + xx[361] * xx[247] + xx[428] * xx[248] + xx[498] * xx[249];
  pm_math_quatXform(xx + 53, xx + 507, xx + 513);
  xx[507] = xx[884] + xx[363] * xx[247] + xx[446] * xx[248] + xx[499] * xx[249];
  xx[508] = xx[885] + xx[365] * xx[247] + xx[457] * xx[248] + xx[500] * xx[249];
  xx[509] = xx[886] + xx[371] * xx[247] + xx[458] * xx[248] + xx[512] * xx[249];
  pm_math_quatXform(xx + 53, xx + 507, xx + 530);
  pm_math_cross3(xx + 539, xx + 530, xx + 507);
  xx[234] = xx[513] + xx[507];
  xx[235] = xx[514] + xx[508];
  xx[243] = xx[515] + xx[509];
  xx[507] = xx[234];
  xx[508] = xx[235];
  xx[509] = xx[243];
  xx[468] = xx[622] + xx[663];
  xx[513] = xx[669] + xx[686];
  xx[514] = xx[689] + xx[692];
  xx[533] = - (pm_math_dot3(xx + 554, xx + 507) + pm_math_dot3(xx + 572, xx +
    530) + xx[468]);
  xx[534] = - (pm_math_dot3(xx + 624, xx + 507) + pm_math_dot3(xx + 633, xx +
    530) + xx[513]);
  xx[535] = - (pm_math_dot3(xx + 649, xx + 507) + pm_math_dot3(xx + 658, xx +
    530) + xx[514]);
  solveSymmetricPosDef(xx + 672, xx + 533, 3, 1, xx + 507, xx + 536);
  xx[533] = xx[234] + xx[578] * xx[507] + xx[639] * xx[508] + xx[664] * xx[509];
  xx[534] = xx[235] + xx[579] * xx[507] + xx[640] * xx[508] + xx[665] * xx[509];
  xx[535] = xx[243] + xx[557] * xx[507] + xx[627] * xx[508] + xx[652] * xx[509];
  pm_math_quatXform(xx + 8, xx + 533, xx + 536);
  xx[533] = xx[530] + xx[559] * xx[507] + xx[628] * xx[508] + xx[653] * xx[509];
  xx[534] = xx[531] + xx[580] * xx[507] + xx[629] * xx[508] + xx[654] * xx[509];
  xx[535] = xx[532] + xx[608] * xx[507] + xx[641] * xx[508] + xx[666] * xx[509];
  pm_math_quatXform(xx + 8, xx + 533, xx + 530);
  pm_math_cross3(xx + 209, xx + 530, xx + 533);
  xx[175] = xx[177] + (xx[225] - xx[112] * xx[219]) * xx[12];
  xx[176] = (xx[538] + xx[535] + xx[175]) / xx[292];
  xx[177] = xx[176] * xx[10];
  xx[219] = xx[176] * xx[9];
  xx[223] = xx[12] * (xx[8] * xx[177] - xx[11] * xx[219]);
  xx[224] = (xx[8] * xx[219] + xx[11] * xx[177]) * xx[12];
  xx[225] = (xx[9] * xx[219] + xx[10] * xx[177]) * xx[12] - xx[176];
  xx[530] = xx[223];
  xx[531] = - xx[224];
  xx[532] = xx[225];
  xx[177] = xx[176] * xx[210];
  xx[219] = xx[176] * xx[209];
  xx[234] = xx[11] * xx[219];
  xx[235] = xx[11] * xx[177];
  xx[243] = xx[9] * xx[219] + xx[10] * xx[177];
  xx[533] = xx[234];
  xx[534] = xx[235];
  xx[535] = - xx[243];
  pm_math_cross3(xx + 9, xx + 533, xx + 536);
  xx[515] = xx[177] + xx[12] * (xx[536] - xx[8] * xx[234]);
  xx[177] = xx[12] * (xx[537] - xx[8] * xx[235]) - xx[219];
  xx[219] = (xx[243] * xx[8] + xx[538]) * xx[12];
  xx[533] = xx[515];
  xx[534] = xx[177];
  xx[535] = xx[219];
  xx[234] = xx[507] - (pm_math_dot3(xx + 431, xx + 530) + pm_math_dot3(xx + 605,
    xx + 533));
  xx[235] = xx[508] - (pm_math_dot3(xx + 708, xx + 530) + pm_math_dot3(xx + 711,
    xx + 533));
  xx[243] = xx[509] - (pm_math_dot3(xx + 714, xx + 530) + pm_math_dot3(xx + 717,
    xx + 533));
  xx[507] = xx[223] - xx[355] * xx[234] + xx[609] * xx[235] + xx[646] * xx[243];
  xx[508] = xx[548] * xx[234] - xx[224] + xx[610] * xx[235] + xx[647] * xx[243];
  xx[509] = xx[225] - xx[551] * xx[234] + xx[623] * xx[235] - xx[648] * xx[243];
  pm_math_quatInverseXform(xx + 53, xx + 507, xx + 223);
  pm_math_cross3(xx + 507, xx + 539, xx + 530);
  xx[507] = xx[515] - xx[439] * xx[234] - xx[630] * xx[235] - xx[655] * xx[243]
    + xx[530];
  xx[508] = xx[177] - xx[570] * xx[234] + xx[631] * xx[235] + xx[656] * xx[243]
    + xx[531];
  xx[509] = xx[219] + xx[571] * xx[234] + xx[632] * xx[235] - xx[657] * xx[243]
    + xx[532];
  pm_math_quatInverseXform(xx + 53, xx + 507, xx + 530);
  xx[177] = xx[247] - (pm_math_dot3(xx + 434, xx + 223) + pm_math_dot3(xx + 720,
    xx + 530));
  xx[219] = xx[248] - (pm_math_dot3(xx + 543, xx + 223) + pm_math_dot3(xx + 728,
    xx + 530));
  xx[247] = xx[249] - (pm_math_dot3(xx + 731, xx + 223) + pm_math_dot3(xx + 581,
    xx + 530));
  xx[507] = xx[223] + xx[312] * xx[177] + xx[384] * xx[219] - xx[492] * xx[247];
  xx[508] = xx[224] - xx[313] * xx[177] + xx[390] * xx[219] + xx[493] * xx[247];
  xx[509] = xx[225] + xx[314] * xx[177] - xx[391] * xx[219] + xx[494] * xx[247];
  pm_math_quatInverseXform(xx + 76, xx + 507, xx + 223);
  pm_math_cross3(xx + 507, xx + 460, xx + 533);
  xx[507] = xx[530] + xx[353] * xx[177] - xx[394] * xx[219] + xx[501] * xx[247]
    + xx[533];
  xx[508] = xx[531] - xx[354] * xx[177] + xx[395] * xx[219] - xx[502] * xx[247]
    + xx[534];
  xx[509] = xx[532] - xx[357] * xx[177] + xx[397] * xx[219] + xx[503] * xx[247]
    + xx[535];
  pm_math_quatInverseXform(xx + 76, xx + 507, xx + 530);
  xx[248] = xx[242] + pm_math_dot3(xx + 366, xx + 223) + pm_math_dot3(xx + 286,
    xx + 530);
  xx[507] = xx[223] + xx[248] * xx[61];
  xx[508] = xx[224];
  xx[509] = xx[225] + xx[248] * xx[70];
  pm_math_quatInverseXform(xx + 149, xx + 507, xx + 223);
  xx[223] = xx[187] + xx[398] * xx[225];
  xx[187] = xx[727] + (xx[760] - xx[586] * xx[754]) * xx[12];
  xx[224] = xx[815] + xx[791];
  xx[225] = xx[831] + xx[828];
  xx[242] = xx[837] + xx[805];
  xx[507] = xx[224];
  xx[508] = xx[225];
  xx[509] = xx[242];
  solveSymmetricPosDef(xx + 817, xx + 507, 3, 1, xx + 530, xx + 533);
  xx[507] = xx[530] * xx[773] + xx[531] * xx[697] - xx[532] * xx[756];
  xx[508] = xx[531] * xx[695] - xx[530] * xx[696] + xx[532] * xx[765];
  xx[509] = xx[530] * xx[774] - xx[531] * xx[767] + xx[532] * xx[597];
  pm_math_quatXform(xx + 734, xx + 507, xx + 533);
  xx[507] = xx[530] * xx[769] + xx[531] * xx[766] + xx[532] * xx[698];
  xx[508] = xx[530] * xx[781] + xx[531] * xx[786] + xx[532] * xx[788];
  xx[509] = xx[530] * xx[782] + xx[531] * xx[787] + xx[532] * xx[802];
  pm_math_quatXform(xx + 734, xx + 507, xx + 536);
  pm_math_cross3(xx + 741, xx + 536, xx + 507);
  xx[249] = (xx[187] - (xx[535] + xx[509] + xx[671] * xx[536] - xx[744] * xx[537]))
    / xx[806];
  xx[507] = xx[249] * xx[735];
  xx[508] = xx[249] * xx[736];
  xx[533] = xx[12] * (xx[737] * xx[507] - xx[734] * xx[508]);
  xx[534] = (xx[734] * xx[507] + xx[737] * xx[508]) * xx[12];
  xx[535] = xx[249] - (xx[735] * xx[507] + xx[736] * xx[508]) * xx[12];
  xx[507] = xx[671] * xx[249] - xx[249] * xx[742];
  xx[508] = xx[249] * xx[741] - xx[744] * xx[249];
  xx[509] = xx[508] * xx[737];
  xx[515] = xx[737] * xx[507];
  xx[536] = xx[508] * xx[735] - xx[736] * xx[507];
  xx[620] = - xx[509];
  xx[621] = xx[515];
  xx[622] = xx[536];
  pm_math_cross3(xx + 735, xx + 620, xx + 661);
  xx[620] = xx[507] + (xx[734] * xx[509] + xx[661]) * xx[12];
  xx[621] = xx[508] + xx[12] * (xx[662] - xx[734] * xx[515]);
  xx[622] = xx[12] * (xx[663] - xx[734] * xx[536]);
  xx[507] = xx[530] - (pm_math_dot3(xx + 838, xx + 533) + pm_math_dot3(xx + 845,
    xx + 620));
  xx[508] = xx[531] - (pm_math_dot3(xx + 848, xx + 533) + pm_math_dot3(xx + 854,
    xx + 620));
  xx[509] = xx[532] - (pm_math_dot3(xx + 857, xx + 533) + pm_math_dot3(xx + 860,
    xx + 620));
  xx[515] = xx[220] * xx[176] - xx[546] * xx[234] - xx[547] * xx[235] - xx[576] *
    xx[243] - xx[237] * xx[177] - xx[238] * xx[219] - xx[441] * xx[247] + xx[248]
    * xx[227] + xx[221] * xx[223] + xx[755] * xx[249] + xx[776] * xx[507] + xx
    [777] * xx[508] + xx[598] * xx[509];
  xx[530] = xx[387] * xx[128] - xx[129] * xx[388];
  xx[531] = xx[387] * xx[129] + xx[128] * xx[388];
  xx[532] = xx[387] * xx[130] - xx[127] * xx[388];
  xx[533] = 1.8512901506173e-13;
  xx[534] = xx[533] * xx[532];
  xx[535] = 6.370804798881182e-14;
  xx[536] = xx[535] * xx[532];
  xx[537] = xx[533] * xx[530] + xx[531] * xx[535];
  xx[620] = - xx[534];
  xx[621] = - xx[536];
  xx[622] = xx[537];
  pm_math_cross3(xx + 530, xx + 620, xx + 661);
  xx[538] = xx[387] * xx[127] + xx[130] * xx[388];
  xx[620] = xx[12] * (xx[661] - xx[538] * xx[534]) - xx[535];
  xx[534] = xx[620] / xx[185];
  xx[621] = xx[52] * xx[534];
  xx[684] = xx[538];
  xx[685] = xx[530];
  xx[686] = xx[531];
  xx[687] = xx[532];
  xx[530] = 2.327469467099984e-14;
  xx[531] = xx[61] * xx[388];
  xx[532] = xx[12] * xx[387] * xx[531];
  xx[622] = xx[12] * xx[531] * xx[388] - xx[61];
  xx[667] = xx[530] * xx[532] - 3.185402399440598e-14;
  xx[668] = 9.256450753086521e-14 + xx[530] * xx[622];
  xx[669] = - (xx[535] * xx[622] + xx[533] * xx[532]);
  pm_math_quatXform(xx + 684, xx + 667, xx + 688);
  xx[531] = 0.1459466686262745;
  xx[532] = xx[531] * xx[67];
  xx[622] = xx[71] * xx[531];
  xx[667] = xx[12] * (xx[532] * xx[73] - xx[622] * xx[75]) + xx[231];
  xx[668] = (xx[532] * xx[67] + xx[71] * xx[622]) * xx[12] + xx[245] -
    0.1713466686262747;
  xx[669] = - ((xx[622] * xx[73] + xx[532] * xx[75]) * xx[12] + xx[107]);
  pm_math_quatXform(xx + 123, xx + 667, xx + 684);
  xx[531] = xx[688] + xx[684];
  xx[532] = (xx[70] * xx[621] - xx[531]) / xx[359];
  xx[667] = xx[532] * xx[342];
  xx[668] = xx[425] * xx[532];
  xx[669] = xx[621] - xx[307] * xx[532];
  pm_math_quatXform(xx + 76, xx + 667, xx + 725);
  xx[667] = xx[294] * xx[532];
  xx[668] = xx[297] * xx[532];
  xx[669] = xx[532] * xx[300];
  pm_math_quatXform(xx + 76, xx + 667, xx + 758);
  pm_math_cross3(xx + 460, xx + 758, xx + 667);
  xx[621] = xx[725] + xx[667];
  xx[622] = xx[726] + xx[668];
  xx[667] = xx[727] + xx[669];
  xx[725] = xx[621];
  xx[726] = xx[622];
  xx[727] = xx[667];
  xx[668] = xx[387] * xx[73] + xx[388] * xx[67];
  xx[669] = xx[71] * xx[387] - xx[388] * xx[75];
  xx[687] = xx[387] * xx[75] + xx[71] * xx[388];
  xx[691] = xx[387] * xx[67] - xx[388] * xx[73];
  xx[826] = xx[668];
  xx[827] = xx[669];
  xx[828] = xx[687];
  xx[829] = xx[691];
  pm_math_quatCompose(xx + 123, xx + 826, xx + 881);
  pm_math_quatInverseXform(xx + 826, xx + 315, xx + 789);
  xx[803] = - xx[533];
  xx[804] = - xx[535];
  xx[805] = - xx[530];
  pm_math_cross3(xx + 789, xx + 803, xx + 813);
  pm_math_quatXform(xx + 881, xx + 813, xx + 789);
  xx[530] = xx[383] * xx[75];
  xx[535] = - xx[530];
  xx[692] = xx[71] * xx[383];
  xx[754] = xx[385] * xx[67] + xx[692];
  xx[813] = xx[385] * xx[75];
  xx[835] = xx[535];
  xx[836] = xx[754];
  xx[837] = - xx[813];
  pm_math_cross3(xx + 191, xx + 835, xx + 885);
  xx[814] = xx[530] * xx[73];
  xx[835] = xx[385] + (xx[885] - xx[814]) * xx[12] - xx[196];
  xx[836] = (xx[754] * xx[73] + xx[886]) * xx[12] - xx[188];
  xx[837] = xx[12] * (xx[887] - xx[813] * xx[73]) - xx[383] - xx[190];
  pm_math_cross3(xx + 315, xx + 835, xx + 885);
  pm_math_quatXform(xx + 53, xx + 885, xx + 888);
  xx[885] = xx[888] + xx[482];
  xx[886] = xx[889] + xx[483];
  xx[887] = xx[890] + xx[484];
  pm_math_quatXform(xx + 119, xx + 885, xx + 888);
  xx[530] = xx[789] + xx[888];
  pm_math_quatInverseXform(xx + 826, xx + 478, xx + 885);
  pm_math_cross3(xx + 885, xx + 803, xx + 891);
  pm_math_quatXform(xx + 881, xx + 891, xx + 885);
  pm_math_cross3(xx + 478, xx + 835, xx + 891);
  pm_math_quatXform(xx + 53, xx + 891, xx + 894);
  xx[891] = xx[894] + xx[527];
  xx[892] = xx[895] + xx[528];
  xx[893] = xx[896] + xx[529];
  pm_math_quatXform(xx + 119, xx + 891, xx + 894);
  xx[754] = xx[885] + xx[894];
  pm_math_quatInverseXform(xx + 826, xx + 495, xx + 891);
  pm_math_cross3(xx + 891, xx + 803, xx + 901);
  pm_math_quatXform(xx + 881, xx + 901, xx + 891);
  pm_math_cross3(xx + 495, xx + 835, xx + 881);
  pm_math_quatXform(xx + 53, xx + 881, xx + 901);
  xx[881] = xx[901] + xx[488];
  xx[882] = xx[902] + xx[489];
  xx[883] = xx[903] + xx[490];
  pm_math_quatXform(xx + 119, xx + 881, xx + 901);
  xx[813] = xx[891] + xx[901];
  xx[881] = - (pm_math_dot3(xx + 315, xx + 725) + pm_math_dot3(xx + 443, xx +
    758) + xx[530]);
  xx[882] = - (pm_math_dot3(xx + 478, xx + 725) + pm_math_dot3(xx + 485, xx +
    758) + xx[754]);
  xx[883] = - (pm_math_dot3(xx + 495, xx + 725) + pm_math_dot3(xx + 504, xx +
    758) + xx[813]);
  solveSymmetricPosDef(xx + 518, xx + 881, 3, 1, xx + 725, xx + 904);
  xx[881] = xx[621] + xx[358] * xx[725] + xx[422] * xx[726] + xx[510] * xx[727];
  xx[882] = xx[622] + xx[360] * xx[725] + xx[426] * xx[726] + xx[511] * xx[727];
  xx[883] = xx[667] + xx[361] * xx[725] + xx[428] * xx[726] + xx[498] * xx[727];
  pm_math_quatXform(xx + 53, xx + 881, xx + 904);
  xx[881] = xx[758] + xx[363] * xx[725] + xx[446] * xx[726] + xx[499] * xx[727];
  xx[882] = xx[759] + xx[365] * xx[725] + xx[457] * xx[726] + xx[500] * xx[727];
  xx[883] = xx[760] + xx[371] * xx[725] + xx[458] * xx[726] + xx[512] * xx[727];
  pm_math_quatXform(xx + 53, xx + 881, xx + 758);
  pm_math_cross3(xx + 539, xx + 758, xx + 881);
  xx[621] = xx[904] + xx[881];
  xx[622] = xx[905] + xx[882];
  xx[667] = xx[906] + xx[883];
  xx[881] = xx[621];
  xx[882] = xx[622];
  xx[883] = xx[667];
  pm_math_quatCompose(xx + 53, xx + 826, xx + 904);
  pm_math_quatCompose(xx + 119, xx + 904, xx + 908);
  pm_math_quatInverseXform(xx + 904, xx + 554, xx + 912);
  pm_math_cross3(xx + 912, xx + 803, xx + 915);
  pm_math_quatXform(xx + 908, xx + 915, xx + 912);
  pm_math_quatXform(xx + 53, xx + 835, xx + 915);
  xx[918] = xx[915] + xx[189];
  xx[919] = xx[916] + xx[194];
  xx[920] = xx[917] + xx[195];
  pm_math_cross3(xx + 554, xx + 918, xx + 915);
  pm_math_quatXform(xx + 8, xx + 915, xx + 921);
  xx[915] = xx[921] + xx[636];
  xx[916] = xx[922] + xx[637];
  xx[917] = xx[923] + xx[638];
  pm_math_quatXform(xx + 115, xx + 915, xx + 921);
  xx[815] = xx[912] + xx[921];
  pm_math_quatInverseXform(xx + 904, xx + 624, xx + 915);
  pm_math_cross3(xx + 915, xx + 803, xx + 924);
  pm_math_quatXform(xx + 908, xx + 924, xx + 915);
  pm_math_cross3(xx + 624, xx + 918, xx + 924);
  pm_math_quatXform(xx + 8, xx + 924, xx + 927);
  xx[924] = xx[927] + xx[681];
  xx[925] = xx[928] + xx[682];
  xx[926] = xx[929] + xx[683];
  pm_math_quatXform(xx + 115, xx + 924, xx + 927);
  xx[830] = xx[915] + xx[927];
  pm_math_quatInverseXform(xx + 904, xx + 649, xx + 924);
  pm_math_cross3(xx + 924, xx + 803, xx + 930);
  pm_math_quatXform(xx + 908, xx + 930, xx + 924);
  pm_math_cross3(xx + 649, xx + 918, xx + 908);
  pm_math_quatXform(xx + 8, xx + 908, xx + 930);
  xx[908] = xx[930] + xx[642];
  xx[909] = xx[931] + xx[643];
  xx[910] = xx[932] + xx[644];
  pm_math_quatXform(xx + 115, xx + 908, xx + 930);
  xx[831] = xx[924] + xx[930];
  xx[908] = - (pm_math_dot3(xx + 554, xx + 881) + pm_math_dot3(xx + 572, xx +
    758) + xx[815]);
  xx[909] = - (pm_math_dot3(xx + 624, xx + 881) + pm_math_dot3(xx + 633, xx +
    758) + xx[830]);
  xx[910] = - (pm_math_dot3(xx + 649, xx + 881) + pm_math_dot3(xx + 658, xx +
    758) + xx[831]);
  solveSymmetricPosDef(xx + 672, xx + 908, 3, 1, xx + 881, xx + 933);
  xx[908] = xx[621] + xx[578] * xx[881] + xx[639] * xx[882] + xx[664] * xx[883];
  xx[909] = xx[622] + xx[579] * xx[881] + xx[640] * xx[882] + xx[665] * xx[883];
  xx[910] = xx[667] + xx[557] * xx[881] + xx[627] * xx[882] + xx[652] * xx[883];
  pm_math_quatXform(xx + 8, xx + 908, xx + 933);
  xx[908] = xx[758] + xx[559] * xx[881] + xx[628] * xx[882] + xx[653] * xx[883];
  xx[909] = xx[759] + xx[580] * xx[881] + xx[629] * xx[882] + xx[654] * xx[883];
  xx[910] = xx[760] + xx[608] * xx[881] + xx[641] * xx[882] + xx[666] * xx[883];
  pm_math_quatXform(xx + 8, xx + 908, xx + 758);
  pm_math_cross3(xx + 209, xx + 758, xx + 908);
  pm_math_quatCompose(xx + 8, xx + 904, xx + 936);
  pm_math_quatCompose(xx + 145, xx + 936, xx + 940);
  xx[621] = xx[937] * xx[939];
  xx[622] = xx[936] * xx[938];
  xx[667] = xx[12] * (xx[621] - xx[622]);
  xx[758] = xx[936] * xx[937];
  xx[759] = xx[938] * xx[939];
  xx[760] = xx[937] * xx[937];
  xx[884] = xx[938] * xx[938];
  xx[944] = xx[667];
  xx[945] = (xx[758] + xx[759]) * xx[12];
  xx[946] = xx[172] - (xx[760] + xx[884]) * xx[12];
  pm_math_cross3(xx + 944, xx + 803, xx + 947);
  pm_math_quatXform(xx + 940, xx + 947, xx + 944);
  pm_math_quatXform(xx + 8, xx + 918, xx + 940);
  xx[897] = xx[941] + xx[210];
  xx[899] = xx[940] + xx[209];
  xx[908] = xx[897] * xx[16] - xx[899] * xx[15];
  xx[909] = xx[12] * xx[16] * xx[908] - xx[897];
  xx[911] = xx[899] + xx[12] * xx[15] * xx[908];
  xx[908] = xx[911] * xx[113];
  xx[933] = xx[113] * xx[909];
  xx[934] = xx[911] * xx[109] + xx[909] * xx[104];
  xx[940] = - xx[908];
  xx[941] = xx[933];
  xx[942] = - xx[934];
  pm_math_cross3(xx + 214, xx + 940, xx + 947);
  xx[940] = xx[944] + xx[909] + xx[12] * (xx[947] - xx[908] * xx[112]);
  xx[908] = (xx[935] + xx[910] + xx[940]) / xx[292];
  xx[909] = xx[908] * xx[10];
  xx[910] = xx[908] * xx[9];
  xx[935] = xx[12] * (xx[8] * xx[909] - xx[11] * xx[910]);
  xx[941] = (xx[8] * xx[910] + xx[11] * xx[909]) * xx[12];
  xx[942] = (xx[9] * xx[910] + xx[10] * xx[909]) * xx[12] - xx[908];
  xx[950] = xx[935];
  xx[951] = - xx[941];
  xx[952] = xx[942];
  xx[909] = xx[908] * xx[210];
  xx[910] = xx[908] * xx[209];
  xx[943] = xx[11] * xx[910];
  xx[953] = xx[11] * xx[909];
  xx[954] = xx[9] * xx[910] + xx[10] * xx[909];
  xx[955] = xx[943];
  xx[956] = xx[953];
  xx[957] = - xx[954];
  pm_math_cross3(xx + 9, xx + 955, xx + 958);
  xx[955] = xx[909] + xx[12] * (xx[958] - xx[8] * xx[943]);
  xx[909] = xx[12] * (xx[959] - xx[8] * xx[953]) - xx[910];
  xx[910] = (xx[954] * xx[8] + xx[960]) * xx[12];
  xx[956] = xx[955];
  xx[957] = xx[909];
  xx[958] = xx[910];
  xx[943] = xx[881] - (pm_math_dot3(xx + 431, xx + 950) + pm_math_dot3(xx + 605,
    xx + 956));
  xx[881] = xx[882] - (pm_math_dot3(xx + 708, xx + 950) + pm_math_dot3(xx + 711,
    xx + 956));
  xx[882] = xx[883] - (pm_math_dot3(xx + 714, xx + 950) + pm_math_dot3(xx + 717,
    xx + 956));
  xx[950] = xx[935] - xx[355] * xx[943] + xx[609] * xx[881] + xx[646] * xx[882];
  xx[951] = xx[548] * xx[943] - xx[941] + xx[610] * xx[881] + xx[647] * xx[882];
  xx[952] = xx[942] - xx[551] * xx[943] + xx[623] * xx[881] - xx[648] * xx[882];
  pm_math_quatInverseXform(xx + 53, xx + 950, xx + 956);
  pm_math_cross3(xx + 950, xx + 539, xx + 959);
  xx[950] = xx[955] - xx[439] * xx[943] - xx[630] * xx[881] - xx[655] * xx[882]
    + xx[959];
  xx[951] = xx[909] - xx[570] * xx[943] + xx[631] * xx[881] + xx[656] * xx[882]
    + xx[960];
  xx[952] = xx[910] + xx[571] * xx[943] + xx[632] * xx[881] - xx[657] * xx[882]
    + xx[961];
  pm_math_quatInverseXform(xx + 53, xx + 950, xx + 953);
  xx[883] = xx[725] - (pm_math_dot3(xx + 434, xx + 956) + pm_math_dot3(xx + 720,
    xx + 953));
  xx[725] = xx[726] - (pm_math_dot3(xx + 543, xx + 956) + pm_math_dot3(xx + 728,
    xx + 953));
  xx[726] = xx[727] - (pm_math_dot3(xx + 731, xx + 956) + pm_math_dot3(xx + 581,
    xx + 953));
  xx[950] = xx[956] + xx[312] * xx[883] + xx[384] * xx[725] - xx[492] * xx[726];
  xx[951] = xx[957] - xx[313] * xx[883] + xx[390] * xx[725] + xx[493] * xx[726];
  xx[952] = xx[958] + xx[314] * xx[883] - xx[391] * xx[725] + xx[494] * xx[726];
  pm_math_quatInverseXform(xx + 76, xx + 950, xx + 956);
  pm_math_cross3(xx + 950, xx + 460, xx + 959);
  xx[950] = xx[953] + xx[353] * xx[883] - xx[394] * xx[725] + xx[501] * xx[726]
    + xx[959];
  xx[951] = xx[954] - xx[354] * xx[883] + xx[395] * xx[725] - xx[502] * xx[726]
    + xx[960];
  xx[952] = xx[955] - xx[357] * xx[883] + xx[397] * xx[725] + xx[503] * xx[726]
    + xx[961];
  pm_math_quatInverseXform(xx + 76, xx + 950, xx + 953);
  xx[727] = xx[532] - (pm_math_dot3(xx + 366, xx + 956) + pm_math_dot3(xx + 286,
    xx + 953));
  xx[532] = xx[958] - xx[70] * xx[727];
  xx[950] = xx[956] - xx[61] * xx[727];
  xx[951] = xx[957];
  xx[952] = xx[532];
  pm_math_quatInverseXform(xx + 149, xx + 950, xx + 953);
  xx[909] = xx[398] * xx[955];
  xx[910] = xx[220] * xx[908] - xx[546] * xx[943] - xx[547] * xx[881] - xx[576] *
    xx[882] - xx[237] * xx[883] - xx[238] * xx[725] - xx[441] * xx[726] - xx[227]
    * xx[727] + xx[221] * xx[909];
  xx[935] = xx[533] + (xx[662] - xx[538] * xx[536]) * xx[12];
  xx[533] = xx[935] / xx[185];
  xx[536] = xx[52] * xx[533];
  xx[941] = xx[689] + xx[685];
  xx[942] = (xx[70] * xx[536] - xx[941]) / xx[359];
  xx[950] = xx[942] * xx[342];
  xx[951] = xx[425] * xx[942];
  xx[952] = xx[536] - xx[307] * xx[942];
  pm_math_quatXform(xx + 76, xx + 950, xx + 953);
  xx[950] = xx[294] * xx[942];
  xx[951] = xx[297] * xx[942];
  xx[952] = xx[942] * xx[300];
  pm_math_quatXform(xx + 76, xx + 950, xx + 956);
  pm_math_cross3(xx + 460, xx + 956, xx + 950);
  xx[536] = xx[953] + xx[950];
  xx[959] = xx[954] + xx[951];
  xx[950] = xx[955] + xx[952];
  xx[951] = xx[536];
  xx[952] = xx[959];
  xx[953] = xx[950];
  xx[954] = xx[790] + xx[889];
  xx[955] = xx[886] + xx[895];
  xx[960] = xx[892] + xx[902];
  xx[961] = - (pm_math_dot3(xx + 315, xx + 951) + pm_math_dot3(xx + 443, xx +
    956) + xx[954]);
  xx[962] = - (pm_math_dot3(xx + 478, xx + 951) + pm_math_dot3(xx + 485, xx +
    956) + xx[955]);
  xx[963] = - (pm_math_dot3(xx + 495, xx + 951) + pm_math_dot3(xx + 504, xx +
    956) + xx[960]);
  solveSymmetricPosDef(xx + 518, xx + 961, 3, 1, xx + 951, xx + 964);
  xx[961] = xx[536] + xx[358] * xx[951] + xx[422] * xx[952] + xx[510] * xx[953];
  xx[962] = xx[959] + xx[360] * xx[951] + xx[426] * xx[952] + xx[511] * xx[953];
  xx[963] = xx[950] + xx[361] * xx[951] + xx[428] * xx[952] + xx[498] * xx[953];
  pm_math_quatXform(xx + 53, xx + 961, xx + 964);
  xx[961] = xx[956] + xx[363] * xx[951] + xx[446] * xx[952] + xx[499] * xx[953];
  xx[962] = xx[957] + xx[365] * xx[951] + xx[457] * xx[952] + xx[500] * xx[953];
  xx[963] = xx[958] + xx[371] * xx[951] + xx[458] * xx[952] + xx[512] * xx[953];
  pm_math_quatXform(xx + 53, xx + 961, xx + 956);
  pm_math_cross3(xx + 539, xx + 956, xx + 961);
  xx[536] = xx[964] + xx[961];
  xx[950] = xx[965] + xx[962];
  xx[959] = xx[966] + xx[963];
  xx[961] = xx[536];
  xx[962] = xx[950];
  xx[963] = xx[959];
  xx[964] = xx[913] + xx[922];
  xx[965] = xx[916] + xx[928];
  xx[966] = xx[925] + xx[931];
  xx[967] = - (pm_math_dot3(xx + 554, xx + 961) + pm_math_dot3(xx + 572, xx +
    956) + xx[964]);
  xx[968] = - (pm_math_dot3(xx + 624, xx + 961) + pm_math_dot3(xx + 633, xx +
    956) + xx[965]);
  xx[969] = - (pm_math_dot3(xx + 649, xx + 961) + pm_math_dot3(xx + 658, xx +
    956) + xx[966]);
  solveSymmetricPosDef(xx + 672, xx + 967, 3, 1, xx + 961, xx + 970);
  xx[967] = xx[536] + xx[578] * xx[961] + xx[639] * xx[962] + xx[664] * xx[963];
  xx[968] = xx[950] + xx[579] * xx[961] + xx[640] * xx[962] + xx[665] * xx[963];
  xx[969] = xx[959] + xx[557] * xx[961] + xx[627] * xx[962] + xx[652] * xx[963];
  pm_math_quatXform(xx + 8, xx + 967, xx + 970);
  xx[967] = xx[956] + xx[559] * xx[961] + xx[628] * xx[962] + xx[653] * xx[963];
  xx[968] = xx[957] + xx[580] * xx[961] + xx[629] * xx[962] + xx[654] * xx[963];
  xx[969] = xx[958] + xx[608] * xx[961] + xx[641] * xx[962] + xx[666] * xx[963];
  pm_math_quatXform(xx + 8, xx + 967, xx + 956);
  pm_math_cross3(xx + 209, xx + 956, xx + 967);
  xx[536] = xx[945] + xx[911] + (xx[933] * xx[112] + xx[948]) * xx[12];
  xx[911] = (xx[972] + xx[969] + xx[536]) / xx[292];
  xx[933] = xx[911] * xx[10];
  xx[950] = xx[911] * xx[9];
  xx[956] = xx[12] * (xx[8] * xx[933] - xx[11] * xx[950]);
  xx[957] = (xx[8] * xx[950] + xx[11] * xx[933]) * xx[12];
  xx[958] = (xx[9] * xx[950] + xx[10] * xx[933]) * xx[12] - xx[911];
  xx[967] = xx[956];
  xx[968] = - xx[957];
  xx[969] = xx[958];
  xx[933] = xx[911] * xx[210];
  xx[950] = xx[911] * xx[209];
  xx[959] = xx[11] * xx[950];
  xx[970] = xx[11] * xx[933];
  xx[971] = xx[9] * xx[950] + xx[10] * xx[933];
  xx[972] = xx[959];
  xx[973] = xx[970];
  xx[974] = - xx[971];
  pm_math_cross3(xx + 9, xx + 972, xx + 975);
  xx[972] = xx[933] + xx[12] * (xx[975] - xx[8] * xx[959]);
  xx[933] = xx[12] * (xx[976] - xx[8] * xx[970]) - xx[950];
  xx[950] = (xx[971] * xx[8] + xx[977]) * xx[12];
  xx[973] = xx[972];
  xx[974] = xx[933];
  xx[975] = xx[950];
  xx[959] = xx[961] - (pm_math_dot3(xx + 431, xx + 967) + pm_math_dot3(xx + 605,
    xx + 973));
  xx[961] = xx[962] - (pm_math_dot3(xx + 708, xx + 967) + pm_math_dot3(xx + 711,
    xx + 973));
  xx[962] = xx[963] - (pm_math_dot3(xx + 714, xx + 967) + pm_math_dot3(xx + 717,
    xx + 973));
  xx[967] = xx[956] - xx[355] * xx[959] + xx[609] * xx[961] + xx[646] * xx[962];
  xx[968] = xx[548] * xx[959] - xx[957] + xx[610] * xx[961] + xx[647] * xx[962];
  xx[969] = xx[958] - xx[551] * xx[959] + xx[623] * xx[961] - xx[648] * xx[962];
  pm_math_quatInverseXform(xx + 53, xx + 967, xx + 956);
  pm_math_cross3(xx + 967, xx + 539, xx + 973);
  xx[967] = xx[972] - xx[439] * xx[959] - xx[630] * xx[961] - xx[655] * xx[962]
    + xx[973];
  xx[968] = xx[933] - xx[570] * xx[959] + xx[631] * xx[961] + xx[656] * xx[962]
    + xx[974];
  xx[969] = xx[950] + xx[571] * xx[959] + xx[632] * xx[961] - xx[657] * xx[962]
    + xx[975];
  pm_math_quatInverseXform(xx + 53, xx + 967, xx + 970);
  xx[933] = xx[951] - (pm_math_dot3(xx + 434, xx + 956) + pm_math_dot3(xx + 720,
    xx + 970));
  xx[950] = xx[952] - (pm_math_dot3(xx + 543, xx + 956) + pm_math_dot3(xx + 728,
    xx + 970));
  xx[951] = xx[953] - (pm_math_dot3(xx + 731, xx + 956) + pm_math_dot3(xx + 581,
    xx + 970));
  xx[967] = xx[956] + xx[312] * xx[933] + xx[384] * xx[950] - xx[492] * xx[951];
  xx[968] = xx[957] - xx[313] * xx[933] + xx[390] * xx[950] + xx[493] * xx[951];
  xx[969] = xx[958] + xx[314] * xx[933] - xx[391] * xx[950] + xx[494] * xx[951];
  pm_math_quatInverseXform(xx + 76, xx + 967, xx + 956);
  pm_math_cross3(xx + 967, xx + 460, xx + 973);
  xx[967] = xx[970] + xx[353] * xx[933] - xx[394] * xx[950] + xx[501] * xx[951]
    + xx[973];
  xx[968] = xx[971] - xx[354] * xx[933] + xx[395] * xx[950] - xx[502] * xx[951]
    + xx[974];
  xx[969] = xx[972] - xx[357] * xx[933] + xx[397] * xx[950] + xx[503] * xx[951]
    + xx[975];
  pm_math_quatInverseXform(xx + 76, xx + 967, xx + 970);
  xx[952] = xx[942] - (pm_math_dot3(xx + 366, xx + 956) + pm_math_dot3(xx + 286,
    xx + 970));
  xx[942] = xx[958] - xx[70] * xx[952];
  xx[967] = xx[956] - xx[61] * xx[952];
  xx[968] = xx[957];
  xx[969] = xx[942];
  pm_math_quatInverseXform(xx + 149, xx + 967, xx + 956);
  xx[953] = xx[398] * xx[958];
  xx[956] = xx[220] * xx[911] - xx[546] * xx[959] - xx[547] * xx[961] - xx[576] *
    xx[962] - xx[237] * xx[933] - xx[238] * xx[950] - xx[441] * xx[951] - xx[227]
    * xx[952] + xx[221] * xx[953];
  xx[661] = (xx[538] * xx[537] + xx[663]) * xx[12];
  xx[537] = xx[661] / xx[185];
  xx[538] = xx[52] * xx[537];
  xx[662] = xx[690] + xx[686];
  xx[663] = (xx[70] * xx[538] - xx[662]) / xx[359];
  xx[684] = xx[663] * xx[342];
  xx[685] = xx[425] * xx[663];
  xx[686] = xx[538] - xx[307] * xx[663];
  pm_math_quatXform(xx + 76, xx + 684, xx + 688);
  xx[684] = xx[294] * xx[663];
  xx[685] = xx[297] * xx[663];
  xx[686] = xx[663] * xx[300];
  pm_math_quatXform(xx + 76, xx + 684, xx + 967);
  pm_math_cross3(xx + 460, xx + 967, xx + 684);
  xx[538] = xx[688] + xx[684];
  xx[957] = xx[689] + xx[685];
  xx[684] = xx[690] + xx[686];
  xx[688] = xx[538];
  xx[689] = xx[957];
  xx[690] = xx[684];
  xx[685] = xx[791] + xx[890];
  xx[686] = xx[887] + xx[896];
  xx[789] = xx[893] + xx[903];
  xx[885] = - (pm_math_dot3(xx + 315, xx + 688) + pm_math_dot3(xx + 443, xx +
    967) + xx[685]);
  xx[886] = - (pm_math_dot3(xx + 478, xx + 688) + pm_math_dot3(xx + 485, xx +
    967) + xx[686]);
  xx[887] = - (pm_math_dot3(xx + 495, xx + 688) + pm_math_dot3(xx + 504, xx +
    967) + xx[789]);
  solveSymmetricPosDef(xx + 518, xx + 885, 3, 1, xx + 688, xx + 888);
  xx[885] = xx[538] + xx[358] * xx[688] + xx[422] * xx[689] + xx[510] * xx[690];
  xx[886] = xx[957] + xx[360] * xx[688] + xx[426] * xx[689] + xx[511] * xx[690];
  xx[887] = xx[684] + xx[361] * xx[688] + xx[428] * xx[689] + xx[498] * xx[690];
  pm_math_quatXform(xx + 53, xx + 885, xx + 888);
  xx[885] = xx[967] + xx[363] * xx[688] + xx[446] * xx[689] + xx[499] * xx[690];
  xx[886] = xx[968] + xx[365] * xx[688] + xx[457] * xx[689] + xx[500] * xx[690];
  xx[887] = xx[969] + xx[371] * xx[688] + xx[458] * xx[689] + xx[512] * xx[690];
  pm_math_quatXform(xx + 53, xx + 885, xx + 891);
  pm_math_cross3(xx + 539, xx + 891, xx + 885);
  xx[538] = xx[888] + xx[885];
  xx[684] = xx[889] + xx[886];
  xx[790] = xx[890] + xx[887];
  xx[885] = xx[538];
  xx[886] = xx[684];
  xx[887] = xx[790];
  xx[791] = xx[914] + xx[923];
  xx[888] = xx[917] + xx[929];
  xx[889] = xx[926] + xx[932];
  xx[894] = - (pm_math_dot3(xx + 554, xx + 885) + pm_math_dot3(xx + 572, xx +
    891) + xx[791]);
  xx[895] = - (pm_math_dot3(xx + 624, xx + 885) + pm_math_dot3(xx + 633, xx +
    891) + xx[888]);
  xx[896] = - (pm_math_dot3(xx + 649, xx + 885) + pm_math_dot3(xx + 658, xx +
    891) + xx[889]);
  solveSymmetricPosDef(xx + 672, xx + 894, 3, 1, xx + 885, xx + 901);
  xx[894] = xx[538] + xx[578] * xx[885] + xx[639] * xx[886] + xx[664] * xx[887];
  xx[895] = xx[684] + xx[579] * xx[885] + xx[640] * xx[886] + xx[665] * xx[887];
  xx[896] = xx[790] + xx[557] * xx[885] + xx[627] * xx[886] + xx[652] * xx[887];
  pm_math_quatXform(xx + 8, xx + 894, xx + 901);
  xx[894] = xx[891] + xx[559] * xx[885] + xx[628] * xx[886] + xx[653] * xx[887];
  xx[895] = xx[892] + xx[580] * xx[885] + xx[629] * xx[886] + xx[654] * xx[887];
  xx[896] = xx[893] + xx[608] * xx[885] + xx[641] * xx[886] + xx[666] * xx[887];
  pm_math_quatXform(xx + 8, xx + 894, xx + 890);
  pm_math_cross3(xx + 209, xx + 890, xx + 893);
  xx[538] = xx[946] + (xx[949] - xx[934] * xx[112]) * xx[12];
  xx[684] = (xx[903] + xx[895] + xx[538]) / xx[292];
  xx[790] = xx[684] * xx[10];
  xx[890] = xx[684] * xx[9];
  xx[891] = xx[12] * (xx[8] * xx[790] - xx[11] * xx[890]);
  xx[892] = (xx[8] * xx[890] + xx[11] * xx[790]) * xx[12];
  xx[893] = (xx[9] * xx[890] + xx[10] * xx[790]) * xx[12] - xx[684];
  xx[894] = xx[891];
  xx[895] = - xx[892];
  xx[896] = xx[893];
  xx[790] = xx[684] * xx[210];
  xx[890] = xx[684] * xx[209];
  xx[901] = xx[11] * xx[890];
  xx[902] = xx[11] * xx[790];
  xx[903] = xx[9] * xx[890] + xx[10] * xx[790];
  xx[912] = xx[901];
  xx[913] = xx[902];
  xx[914] = - xx[903];
  pm_math_cross3(xx + 9, xx + 912, xx + 915);
  xx[912] = xx[790] + xx[12] * (xx[915] - xx[8] * xx[901]);
  xx[790] = xx[12] * (xx[916] - xx[8] * xx[902]) - xx[890];
  xx[890] = (xx[903] * xx[8] + xx[917]) * xx[12];
  xx[901] = xx[912];
  xx[902] = xx[790];
  xx[903] = xx[890];
  xx[913] = xx[885] - (pm_math_dot3(xx + 431, xx + 894) + pm_math_dot3(xx + 605,
    xx + 901));
  xx[885] = xx[886] - (pm_math_dot3(xx + 708, xx + 894) + pm_math_dot3(xx + 711,
    xx + 901));
  xx[886] = xx[887] - (pm_math_dot3(xx + 714, xx + 894) + pm_math_dot3(xx + 717,
    xx + 901));
  xx[894] = xx[891] - xx[355] * xx[913] + xx[609] * xx[885] + xx[646] * xx[886];
  xx[895] = xx[548] * xx[913] - xx[892] + xx[610] * xx[885] + xx[647] * xx[886];
  xx[896] = xx[893] - xx[551] * xx[913] + xx[623] * xx[885] - xx[648] * xx[886];
  pm_math_quatInverseXform(xx + 53, xx + 894, xx + 891);
  pm_math_cross3(xx + 894, xx + 539, xx + 901);
  xx[894] = xx[912] - xx[439] * xx[913] - xx[630] * xx[885] - xx[655] * xx[886]
    + xx[901];
  xx[895] = xx[790] - xx[570] * xx[913] + xx[631] * xx[885] + xx[656] * xx[886]
    + xx[902];
  xx[896] = xx[890] + xx[571] * xx[913] + xx[632] * xx[885] - xx[657] * xx[886]
    + xx[903];
  pm_math_quatInverseXform(xx + 53, xx + 894, xx + 901);
  xx[790] = xx[688] - (pm_math_dot3(xx + 434, xx + 891) + pm_math_dot3(xx + 720,
    xx + 901));
  xx[688] = xx[689] - (pm_math_dot3(xx + 543, xx + 891) + pm_math_dot3(xx + 728,
    xx + 901));
  xx[689] = xx[690] - (pm_math_dot3(xx + 731, xx + 891) + pm_math_dot3(xx + 581,
    xx + 901));
  xx[894] = xx[891] + xx[312] * xx[790] + xx[384] * xx[688] - xx[492] * xx[689];
  xx[895] = xx[892] - xx[313] * xx[790] + xx[390] * xx[688] + xx[493] * xx[689];
  xx[896] = xx[893] + xx[314] * xx[790] - xx[391] * xx[688] + xx[494] * xx[689];
  pm_math_quatInverseXform(xx + 76, xx + 894, xx + 890);
  pm_math_cross3(xx + 894, xx + 460, xx + 914);
  xx[893] = xx[901] + xx[353] * xx[790] - xx[394] * xx[688] + xx[501] * xx[689]
    + xx[914];
  xx[894] = xx[902] - xx[354] * xx[790] + xx[395] * xx[688] - xx[502] * xx[689]
    + xx[915];
  xx[895] = xx[903] - xx[357] * xx[790] + xx[397] * xx[688] + xx[503] * xx[689]
    + xx[916];
  pm_math_quatInverseXform(xx + 76, xx + 893, xx + 901);
  xx[690] = xx[663] - (pm_math_dot3(xx + 366, xx + 890) + pm_math_dot3(xx + 286,
    xx + 901));
  xx[663] = xx[892] - xx[70] * xx[690];
  xx[892] = xx[890] - xx[61] * xx[690];
  xx[893] = xx[891];
  xx[894] = xx[663];
  pm_math_quatInverseXform(xx + 149, xx + 892, xx + 901);
  xx[887] = xx[398] * xx[903];
  xx[890] = xx[220] * xx[684] - xx[546] * xx[913] - xx[547] * xx[885] - xx[576] *
    xx[886] - xx[237] * xx[790] - xx[238] * xx[688] - xx[441] * xx[689] - xx[227]
    * xx[690] + xx[221] * xx[887];
  xx[891] = 1.67594389376953e-16;
  xx[892] = xx[282] * xx[128] - xx[129] * xx[324];
  xx[893] = xx[282] * xx[129] + xx[128] * xx[324];
  xx[894] = xx[282] * xx[130] - xx[127] * xx[324];
  xx[895] = 4.870738748406581e-16;
  xx[896] = xx[895] * xx[894];
  xx[901] = xx[891] * xx[894];
  xx[902] = xx[895] * xx[892] - xx[893] * xx[891];
  xx[914] = - xx[896];
  xx[915] = xx[901];
  xx[916] = xx[902];
  pm_math_cross3(xx + 892, xx + 914, xx + 921);
  xx[903] = xx[282] * xx[127] + xx[130] * xx[324];
  xx[912] = xx[891] + xx[12] * (xx[921] - xx[903] * xx[896]);
  xx[896] = xx[912] / xx[403];
  xx[914] = xx[52] * xx[896];
  xx[924] = xx[903];
  xx[925] = xx[892];
  xx[926] = xx[893];
  xx[927] = xx[894];
  xx[892] = 3.48703222953117e-16;
  xx[893] = xx[61] * xx[324];
  xx[894] = xx[12] * xx[282] * xx[893];
  xx[915] = xx[12] * xx[893] * xx[324] - xx[61];
  xx[928] = xx[892] * xx[894] + 8.379719468847667e-17;
  xx[929] = 2.435369374203296e-16 + xx[892] * xx[915];
  xx[930] = xx[891] * xx[915] - xx[895] * xx[894];
  pm_math_quatXform(xx + 924, xx + 928, xx + 915);
  xx[893] = 0.1205466686262745;
  xx[894] = xx[893] * xx[67];
  xx[924] = xx[71] * xx[893];
  xx[925] = xx[12] * (xx[894] * xx[73] - xx[924] * xx[75]) + xx[231];
  xx[926] = (xx[894] * xx[67] + xx[71] * xx[924]) * xx[12] + xx[245] -
    0.1459466686262746;
  xx[927] = - ((xx[924] * xx[73] + xx[894] * xx[75]) * xx[12] + xx[107]);
  pm_math_quatXform(xx + 123, xx + 925, xx + 928);
  xx[893] = xx[915] + xx[928];
  xx[894] = (xx[70] * xx[914] - xx[893]) / xx[359];
  xx[924] = xx[894] * xx[342];
  xx[925] = xx[425] * xx[894];
  xx[926] = xx[914] - xx[307] * xx[894];
  pm_math_quatXform(xx + 76, xx + 924, xx + 944);
  xx[924] = xx[294] * xx[894];
  xx[925] = xx[297] * xx[894];
  xx[926] = xx[894] * xx[300];
  pm_math_quatXform(xx + 76, xx + 924, xx + 947);
  pm_math_cross3(xx + 460, xx + 947, xx + 924);
  xx[914] = xx[944] + xx[924];
  xx[927] = xx[945] + xx[925];
  xx[924] = xx[946] + xx[926];
  xx[944] = xx[914];
  xx[945] = xx[927];
  xx[946] = xx[924];
  xx[925] = xx[282] * xx[73] + xx[324] * xx[67];
  xx[926] = xx[71] * xx[282] - xx[324] * xx[75];
  xx[931] = xx[282] * xx[75] + xx[71] * xx[324];
  xx[932] = xx[282] * xx[67] - xx[324] * xx[73];
  xx[967] = xx[925];
  xx[968] = xx[926];
  xx[969] = xx[931];
  xx[970] = xx[932];
  pm_math_quatCompose(xx + 123, xx + 967, xx + 971);
  pm_math_quatInverseXform(xx + 967, xx + 315, xx + 975);
  xx[978] = - xx[895];
  xx[979] = xx[891];
  xx[980] = - xx[892];
  pm_math_cross3(xx + 975, xx + 978, xx + 981);
  pm_math_quatXform(xx + 971, xx + 981, xx + 975);
  xx[891] = xx[692] - xx[252] * xx[67];
  xx[692] = xx[252] * xx[75];
  xx[981] = xx[535];
  xx[982] = xx[891];
  xx[983] = xx[692];
  pm_math_cross3(xx + 191, xx + 981, xx + 984);
  xx[981] = (xx[984] - xx[814]) * xx[12] - xx[252] - xx[196];
  xx[982] = (xx[891] * xx[73] + xx[985]) * xx[12] - xx[188];
  xx[983] = xx[12] * (xx[986] + xx[692] * xx[73]) - xx[383] - xx[190];
  pm_math_cross3(xx + 315, xx + 981, xx + 984);
  pm_math_quatXform(xx + 53, xx + 984, xx + 987);
  xx[984] = xx[987] + xx[482];
  xx[985] = xx[988] + xx[483];
  xx[986] = xx[989] + xx[484];
  pm_math_quatXform(xx + 119, xx + 984, xx + 987);
  xx[535] = xx[975] + xx[987];
  pm_math_quatInverseXform(xx + 967, xx + 478, xx + 984);
  pm_math_cross3(xx + 984, xx + 978, xx + 990);
  pm_math_quatXform(xx + 971, xx + 990, xx + 984);
  pm_math_cross3(xx + 478, xx + 981, xx + 990);
  pm_math_quatXform(xx + 53, xx + 990, xx + 993);
  xx[990] = xx[993] + xx[527];
  xx[991] = xx[994] + xx[528];
  xx[992] = xx[995] + xx[529];
  pm_math_quatXform(xx + 119, xx + 990, xx + 993);
  xx[692] = xx[984] + xx[993];
  pm_math_quatInverseXform(xx + 967, xx + 495, xx + 990);
  pm_math_cross3(xx + 990, xx + 978, xx + 996);
  pm_math_quatXform(xx + 971, xx + 996, xx + 990);
  pm_math_cross3(xx + 495, xx + 981, xx + 971);
  pm_math_quatXform(xx + 53, xx + 971, xx + 996);
  xx[971] = xx[996] + xx[488];
  xx[972] = xx[997] + xx[489];
  xx[973] = xx[998] + xx[490];
  pm_math_quatXform(xx + 119, xx + 971, xx + 996);
  xx[814] = xx[990] + xx[996];
  xx[971] = - (pm_math_dot3(xx + 315, xx + 944) + pm_math_dot3(xx + 443, xx +
    947) + xx[535]);
  xx[972] = - (pm_math_dot3(xx + 478, xx + 944) + pm_math_dot3(xx + 485, xx +
    947) + xx[692]);
  xx[973] = - (pm_math_dot3(xx + 495, xx + 944) + pm_math_dot3(xx + 504, xx +
    947) + xx[814]);
  solveSymmetricPosDef(xx + 518, xx + 971, 3, 1, xx + 944, xx + 999);
  xx[971] = xx[914] + xx[358] * xx[944] + xx[422] * xx[945] + xx[510] * xx[946];
  xx[972] = xx[927] + xx[360] * xx[944] + xx[426] * xx[945] + xx[511] * xx[946];
  xx[973] = xx[924] + xx[361] * xx[944] + xx[428] * xx[945] + xx[498] * xx[946];
  pm_math_quatXform(xx + 53, xx + 971, xx + 999);
  xx[971] = xx[947] + xx[363] * xx[944] + xx[446] * xx[945] + xx[499] * xx[946];
  xx[972] = xx[948] + xx[365] * xx[944] + xx[457] * xx[945] + xx[500] * xx[946];
  xx[973] = xx[949] + xx[371] * xx[944] + xx[458] * xx[945] + xx[512] * xx[946];
  pm_math_quatXform(xx + 53, xx + 971, xx + 947);
  pm_math_cross3(xx + 539, xx + 947, xx + 971);
  xx[891] = xx[999] + xx[971];
  xx[892] = xx[1000] + xx[972];
  xx[914] = xx[1001] + xx[973];
  xx[971] = xx[891];
  xx[972] = xx[892];
  xx[973] = xx[914];
  pm_math_quatCompose(xx + 53, xx + 967, xx + 999);
  pm_math_quatCompose(xx + 119, xx + 999, xx + 1003);
  pm_math_quatInverseXform(xx + 999, xx + 554, xx + 1007);
  pm_math_cross3(xx + 1007, xx + 978, xx + 1010);
  pm_math_quatXform(xx + 1003, xx + 1010, xx + 1007);
  pm_math_quatXform(xx + 53, xx + 981, xx + 1010);
  xx[1013] = xx[1010] + xx[189];
  xx[1014] = xx[1011] + xx[194];
  xx[1015] = xx[1012] + xx[195];
  pm_math_cross3(xx + 554, xx + 1013, xx + 1010);
  pm_math_quatXform(xx + 8, xx + 1010, xx + 1016);
  xx[1010] = xx[1016] + xx[636];
  xx[1011] = xx[1017] + xx[637];
  xx[1012] = xx[1018] + xx[638];
  pm_math_quatXform(xx + 115, xx + 1010, xx + 1016);
  xx[924] = xx[1007] + xx[1016];
  pm_math_quatInverseXform(xx + 999, xx + 624, xx + 1010);
  pm_math_cross3(xx + 1010, xx + 978, xx + 1019);
  pm_math_quatXform(xx + 1003, xx + 1019, xx + 1010);
  pm_math_cross3(xx + 624, xx + 1013, xx + 1019);
  pm_math_quatXform(xx + 8, xx + 1019, xx + 1022);
  xx[1019] = xx[1022] + xx[681];
  xx[1020] = xx[1023] + xx[682];
  xx[1021] = xx[1024] + xx[683];
  pm_math_quatXform(xx + 115, xx + 1019, xx + 1022);
  xx[927] = xx[1010] + xx[1022];
  pm_math_quatInverseXform(xx + 999, xx + 649, xx + 1019);
  pm_math_cross3(xx + 1019, xx + 978, xx + 1025);
  pm_math_quatXform(xx + 1003, xx + 1025, xx + 1019);
  pm_math_cross3(xx + 649, xx + 1013, xx + 1003);
  pm_math_quatXform(xx + 8, xx + 1003, xx + 1025);
  xx[1003] = xx[1025] + xx[642];
  xx[1004] = xx[1026] + xx[643];
  xx[1005] = xx[1027] + xx[644];
  pm_math_quatXform(xx + 115, xx + 1003, xx + 1025);
  xx[934] = xx[1019] + xx[1025];
  xx[1003] = - (pm_math_dot3(xx + 554, xx + 971) + pm_math_dot3(xx + 572, xx +
    947) + xx[924]);
  xx[1004] = - (pm_math_dot3(xx + 624, xx + 971) + pm_math_dot3(xx + 633, xx +
    947) + xx[927]);
  xx[1005] = - (pm_math_dot3(xx + 649, xx + 971) + pm_math_dot3(xx + 658, xx +
    947) + xx[934]);
  solveSymmetricPosDef(xx + 672, xx + 1003, 3, 1, xx + 971, xx + 1028);
  xx[1003] = xx[891] + xx[578] * xx[971] + xx[639] * xx[972] + xx[664] * xx[973];
  xx[1004] = xx[892] + xx[579] * xx[971] + xx[640] * xx[972] + xx[665] * xx[973];
  xx[1005] = xx[914] + xx[557] * xx[971] + xx[627] * xx[972] + xx[652] * xx[973];
  pm_math_quatXform(xx + 8, xx + 1003, xx + 1028);
  xx[1003] = xx[947] + xx[559] * xx[971] + xx[628] * xx[972] + xx[653] * xx[973];
  xx[1004] = xx[948] + xx[580] * xx[971] + xx[629] * xx[972] + xx[654] * xx[973];
  xx[1005] = xx[949] + xx[608] * xx[971] + xx[641] * xx[972] + xx[666] * xx[973];
  pm_math_quatXform(xx + 8, xx + 1003, xx + 947);
  pm_math_cross3(xx + 209, xx + 947, xx + 1003);
  pm_math_quatCompose(xx + 8, xx + 999, xx + 1031);
  pm_math_quatCompose(xx + 145, xx + 1031, xx + 1035);
  xx[891] = xx[1032] * xx[1034];
  xx[892] = xx[1031] * xx[1033];
  xx[914] = xx[12] * (xx[891] - xx[892]);
  xx[947] = xx[1031] * xx[1032];
  xx[948] = xx[1033] * xx[1034];
  xx[949] = xx[1032] * xx[1032];
  xx[957] = xx[1033] * xx[1033];
  xx[1039] = xx[914];
  xx[1040] = (xx[947] + xx[948]) * xx[12];
  xx[1041] = xx[172] - (xx[949] + xx[957]) * xx[12];
  pm_math_cross3(xx + 1039, xx + 978, xx + 1042);
  pm_math_quatXform(xx + 1035, xx + 1042, xx + 1039);
  pm_math_quatXform(xx + 8, xx + 1013, xx + 1035);
  xx[958] = xx[1036] + xx[210];
  xx[963] = xx[1035] + xx[209];
  xx[974] = xx[958] * xx[16] - xx[963] * xx[15];
  xx[1003] = xx[12] * xx[16] * xx[974] - xx[958];
  xx[1004] = xx[963] + xx[12] * xx[15] * xx[974];
  xx[974] = xx[1004] * xx[113];
  xx[1006] = xx[113] * xx[1003];
  xx[1028] = xx[1004] * xx[109] + xx[1003] * xx[104];
  xx[1035] = - xx[974];
  xx[1036] = xx[1006];
  xx[1037] = - xx[1028];
  pm_math_cross3(xx + 214, xx + 1035, xx + 1042);
  xx[1029] = xx[1039] + xx[1003] + xx[12] * (xx[1042] - xx[974] * xx[112]);
  xx[974] = (xx[1030] + xx[1005] + xx[1029]) / xx[292];
  xx[1003] = xx[974] * xx[10];
  xx[1005] = xx[974] * xx[9];
  xx[1030] = xx[12] * (xx[8] * xx[1003] - xx[11] * xx[1005]);
  xx[1035] = (xx[8] * xx[1005] + xx[11] * xx[1003]) * xx[12];
  xx[1036] = (xx[9] * xx[1005] + xx[10] * xx[1003]) * xx[12] - xx[974];
  xx[1045] = xx[1030];
  xx[1046] = - xx[1035];
  xx[1047] = xx[1036];
  xx[1003] = xx[974] * xx[210];
  xx[1005] = xx[974] * xx[209];
  xx[1037] = xx[11] * xx[1005];
  xx[1038] = xx[11] * xx[1003];
  xx[1048] = xx[9] * xx[1005] + xx[10] * xx[1003];
  xx[1049] = xx[1037];
  xx[1050] = xx[1038];
  xx[1051] = - xx[1048];
  pm_math_cross3(xx + 9, xx + 1049, xx + 1052);
  xx[1049] = xx[1003] + xx[12] * (xx[1052] - xx[8] * xx[1037]);
  xx[1003] = xx[12] * (xx[1053] - xx[8] * xx[1038]) - xx[1005];
  xx[1005] = (xx[1048] * xx[8] + xx[1054]) * xx[12];
  xx[1050] = xx[1049];
  xx[1051] = xx[1003];
  xx[1052] = xx[1005];
  xx[1037] = xx[971] - (pm_math_dot3(xx + 431, xx + 1045) + pm_math_dot3(xx +
    605, xx + 1050));
  xx[971] = xx[972] - (pm_math_dot3(xx + 708, xx + 1045) + pm_math_dot3(xx + 711,
    xx + 1050));
  xx[972] = xx[973] - (pm_math_dot3(xx + 714, xx + 1045) + pm_math_dot3(xx + 717,
    xx + 1050));
  xx[1045] = xx[1030] - xx[355] * xx[1037] + xx[609] * xx[971] + xx[646] * xx
    [972];
  xx[1046] = xx[548] * xx[1037] - xx[1035] + xx[610] * xx[971] + xx[647] * xx
    [972];
  xx[1047] = xx[1036] - xx[551] * xx[1037] + xx[623] * xx[971] - xx[648] * xx
    [972];
  pm_math_quatInverseXform(xx + 53, xx + 1045, xx + 1050);
  pm_math_cross3(xx + 1045, xx + 539, xx + 1053);
  xx[1045] = xx[1049] - xx[439] * xx[1037] - xx[630] * xx[971] - xx[655] * xx
    [972] + xx[1053];
  xx[1046] = xx[1003] - xx[570] * xx[1037] + xx[631] * xx[971] + xx[656] * xx
    [972] + xx[1054];
  xx[1047] = xx[1005] + xx[571] * xx[1037] + xx[632] * xx[971] - xx[657] * xx
    [972] + xx[1055];
  pm_math_quatInverseXform(xx + 53, xx + 1045, xx + 1053);
  xx[973] = xx[944] - (pm_math_dot3(xx + 434, xx + 1050) + pm_math_dot3(xx + 720,
    xx + 1053));
  xx[944] = xx[945] - (pm_math_dot3(xx + 543, xx + 1050) + pm_math_dot3(xx + 728,
    xx + 1053));
  xx[945] = xx[946] - (pm_math_dot3(xx + 731, xx + 1050) + pm_math_dot3(xx + 581,
    xx + 1053));
  xx[1045] = xx[1050] + xx[312] * xx[973] + xx[384] * xx[944] - xx[492] * xx[945];
  xx[1046] = xx[1051] - xx[313] * xx[973] + xx[390] * xx[944] + xx[493] * xx[945];
  xx[1047] = xx[1052] + xx[314] * xx[973] - xx[391] * xx[944] + xx[494] * xx[945];
  pm_math_quatInverseXform(xx + 76, xx + 1045, xx + 1048);
  pm_math_cross3(xx + 1045, xx + 460, xx + 1056);
  xx[1045] = xx[1053] + xx[353] * xx[973] - xx[394] * xx[944] + xx[501] * xx[945]
    + xx[1056];
  xx[1046] = xx[1054] - xx[354] * xx[973] + xx[395] * xx[944] - xx[502] * xx[945]
    + xx[1057];
  xx[1047] = xx[1055] - xx[357] * xx[973] + xx[397] * xx[944] + xx[503] * xx[945]
    + xx[1058];
  pm_math_quatInverseXform(xx + 76, xx + 1045, xx + 1051);
  xx[946] = xx[894] - (pm_math_dot3(xx + 366, xx + 1048) + pm_math_dot3(xx + 286,
    xx + 1051));
  xx[894] = xx[1050] - xx[70] * xx[946];
  xx[1045] = xx[1048] - xx[61] * xx[946];
  xx[1046] = xx[1049];
  xx[1047] = xx[894];
  pm_math_quatInverseXform(xx + 149, xx + 1045, xx + 1048);
  xx[1003] = xx[398] * xx[1050];
  xx[1005] = xx[220] * xx[974] - xx[546] * xx[1037] - xx[547] * xx[971] - xx[576]
    * xx[972] - xx[237] * xx[973] - xx[238] * xx[944] - xx[441] * xx[945] - xx
    [227] * xx[946] + xx[221] * xx[1003];
  xx[1030] = xx[895] + (xx[903] * xx[901] + xx[922]) * xx[12];
  xx[895] = xx[1030] / xx[403];
  xx[901] = xx[52] * xx[895];
  xx[1035] = xx[916] + xx[929];
  xx[1036] = (xx[70] * xx[901] - xx[1035]) / xx[359];
  xx[1045] = xx[1036] * xx[342];
  xx[1046] = xx[425] * xx[1036];
  xx[1047] = xx[901] - xx[307] * xx[1036];
  pm_math_quatXform(xx + 76, xx + 1045, xx + 1048);
  xx[1045] = xx[294] * xx[1036];
  xx[1046] = xx[297] * xx[1036];
  xx[1047] = xx[1036] * xx[300];
  pm_math_quatXform(xx + 76, xx + 1045, xx + 1051);
  pm_math_cross3(xx + 460, xx + 1051, xx + 1045);
  xx[901] = xx[1048] + xx[1045];
  xx[1038] = xx[1049] + xx[1046];
  xx[1045] = xx[1050] + xx[1047];
  xx[1046] = xx[901];
  xx[1047] = xx[1038];
  xx[1048] = xx[1045];
  xx[1049] = xx[976] + xx[988];
  xx[1050] = xx[985] + xx[994];
  xx[1054] = xx[991] + xx[997];
  xx[1055] = - (pm_math_dot3(xx + 315, xx + 1046) + pm_math_dot3(xx + 443, xx +
    1051) + xx[1049]);
  xx[1056] = - (pm_math_dot3(xx + 478, xx + 1046) + pm_math_dot3(xx + 485, xx +
    1051) + xx[1050]);
  xx[1057] = - (pm_math_dot3(xx + 495, xx + 1046) + pm_math_dot3(xx + 504, xx +
    1051) + xx[1054]);
  solveSymmetricPosDef(xx + 518, xx + 1055, 3, 1, xx + 1046, xx + 1058);
  xx[1055] = xx[901] + xx[358] * xx[1046] + xx[422] * xx[1047] + xx[510] * xx
    [1048];
  xx[1056] = xx[1038] + xx[360] * xx[1046] + xx[426] * xx[1047] + xx[511] * xx
    [1048];
  xx[1057] = xx[1045] + xx[361] * xx[1046] + xx[428] * xx[1047] + xx[498] * xx
    [1048];
  pm_math_quatXform(xx + 53, xx + 1055, xx + 1058);
  xx[1055] = xx[1051] + xx[363] * xx[1046] + xx[446] * xx[1047] + xx[499] * xx
    [1048];
  xx[1056] = xx[1052] + xx[365] * xx[1046] + xx[457] * xx[1047] + xx[500] * xx
    [1048];
  xx[1057] = xx[1053] + xx[371] * xx[1046] + xx[458] * xx[1047] + xx[512] * xx
    [1048];
  pm_math_quatXform(xx + 53, xx + 1055, xx + 1051);
  pm_math_cross3(xx + 539, xx + 1051, xx + 1055);
  xx[901] = xx[1058] + xx[1055];
  xx[1038] = xx[1059] + xx[1056];
  xx[1045] = xx[1060] + xx[1057];
  xx[1055] = xx[901];
  xx[1056] = xx[1038];
  xx[1057] = xx[1045];
  xx[1058] = xx[1008] + xx[1017];
  xx[1059] = xx[1011] + xx[1023];
  xx[1060] = xx[1020] + xx[1026];
  xx[1061] = - (pm_math_dot3(xx + 554, xx + 1055) + pm_math_dot3(xx + 572, xx +
    1051) + xx[1058]);
  xx[1062] = - (pm_math_dot3(xx + 624, xx + 1055) + pm_math_dot3(xx + 633, xx +
    1051) + xx[1059]);
  xx[1063] = - (pm_math_dot3(xx + 649, xx + 1055) + pm_math_dot3(xx + 658, xx +
    1051) + xx[1060]);
  solveSymmetricPosDef(xx + 672, xx + 1061, 3, 1, xx + 1055, xx + 1064);
  xx[1061] = xx[901] + xx[578] * xx[1055] + xx[639] * xx[1056] + xx[664] * xx
    [1057];
  xx[1062] = xx[1038] + xx[579] * xx[1055] + xx[640] * xx[1056] + xx[665] * xx
    [1057];
  xx[1063] = xx[1045] + xx[557] * xx[1055] + xx[627] * xx[1056] + xx[652] * xx
    [1057];
  pm_math_quatXform(xx + 8, xx + 1061, xx + 1064);
  xx[1061] = xx[1051] + xx[559] * xx[1055] + xx[628] * xx[1056] + xx[653] * xx
    [1057];
  xx[1062] = xx[1052] + xx[580] * xx[1055] + xx[629] * xx[1056] + xx[654] * xx
    [1057];
  xx[1063] = xx[1053] + xx[608] * xx[1055] + xx[641] * xx[1056] + xx[666] * xx
    [1057];
  pm_math_quatXform(xx + 8, xx + 1061, xx + 1051);
  pm_math_cross3(xx + 209, xx + 1051, xx + 1061);
  xx[901] = xx[1040] + xx[1004] + (xx[1006] * xx[112] + xx[1043]) * xx[12];
  xx[1004] = (xx[1066] + xx[1063] + xx[901]) / xx[292];
  xx[1006] = xx[1004] * xx[10];
  xx[1038] = xx[1004] * xx[9];
  xx[1045] = xx[12] * (xx[8] * xx[1006] - xx[11] * xx[1038]);
  xx[1051] = (xx[8] * xx[1038] + xx[11] * xx[1006]) * xx[12];
  xx[1052] = (xx[9] * xx[1038] + xx[10] * xx[1006]) * xx[12] - xx[1004];
  xx[1061] = xx[1045];
  xx[1062] = - xx[1051];
  xx[1063] = xx[1052];
  xx[1006] = xx[1004] * xx[210];
  xx[1038] = xx[1004] * xx[209];
  xx[1053] = xx[11] * xx[1038];
  xx[1064] = xx[11] * xx[1006];
  xx[1065] = xx[9] * xx[1038] + xx[10] * xx[1006];
  xx[1066] = xx[1053];
  xx[1067] = xx[1064];
  xx[1068] = - xx[1065];
  pm_math_cross3(xx + 9, xx + 1066, xx + 1069);
  xx[1066] = xx[1006] + xx[12] * (xx[1069] - xx[8] * xx[1053]);
  xx[1006] = xx[12] * (xx[1070] - xx[8] * xx[1064]) - xx[1038];
  xx[1038] = (xx[1065] * xx[8] + xx[1071]) * xx[12];
  xx[1067] = xx[1066];
  xx[1068] = xx[1006];
  xx[1069] = xx[1038];
  xx[1053] = xx[1055] - (pm_math_dot3(xx + 431, xx + 1061) + pm_math_dot3(xx +
    605, xx + 1067));
  xx[1055] = xx[1056] - (pm_math_dot3(xx + 708, xx + 1061) + pm_math_dot3(xx +
    711, xx + 1067));
  xx[1056] = xx[1057] - (pm_math_dot3(xx + 714, xx + 1061) + pm_math_dot3(xx +
    717, xx + 1067));
  xx[1061] = xx[1045] - xx[355] * xx[1053] + xx[609] * xx[1055] + xx[646] * xx
    [1056];
  xx[1062] = xx[548] * xx[1053] - xx[1051] + xx[610] * xx[1055] + xx[647] * xx
    [1056];
  xx[1063] = xx[1052] - xx[551] * xx[1053] + xx[623] * xx[1055] - xx[648] * xx
    [1056];
  pm_math_quatInverseXform(xx + 53, xx + 1061, xx + 1067);
  pm_math_cross3(xx + 1061, xx + 539, xx + 1070);
  xx[1061] = xx[1066] - xx[439] * xx[1053] - xx[630] * xx[1055] - xx[655] * xx
    [1056] + xx[1070];
  xx[1062] = xx[1006] - xx[570] * xx[1053] + xx[631] * xx[1055] + xx[656] * xx
    [1056] + xx[1071];
  xx[1063] = xx[1038] + xx[571] * xx[1053] + xx[632] * xx[1055] - xx[657] * xx
    [1056] + xx[1072];
  pm_math_quatInverseXform(xx + 53, xx + 1061, xx + 1064);
  xx[1006] = xx[1046] - (pm_math_dot3(xx + 434, xx + 1067) + pm_math_dot3(xx +
    720, xx + 1064));
  xx[1038] = xx[1047] - (pm_math_dot3(xx + 543, xx + 1067) + pm_math_dot3(xx +
    728, xx + 1064));
  xx[1045] = xx[1048] - (pm_math_dot3(xx + 731, xx + 1067) + pm_math_dot3(xx +
    581, xx + 1064));
  xx[1046] = xx[1067] + xx[312] * xx[1006] + xx[384] * xx[1038] - xx[492] * xx
    [1045];
  xx[1047] = xx[1068] - xx[313] * xx[1006] + xx[390] * xx[1038] + xx[493] * xx
    [1045];
  xx[1048] = xx[1069] + xx[314] * xx[1006] - xx[391] * xx[1038] + xx[494] * xx
    [1045];
  pm_math_quatInverseXform(xx + 76, xx + 1046, xx + 1061);
  pm_math_cross3(xx + 1046, xx + 460, xx + 1067);
  xx[1046] = xx[1064] + xx[353] * xx[1006] - xx[394] * xx[1038] + xx[501] * xx
    [1045] + xx[1067];
  xx[1047] = xx[1065] - xx[354] * xx[1006] + xx[395] * xx[1038] - xx[502] * xx
    [1045] + xx[1068];
  xx[1048] = xx[1066] - xx[357] * xx[1006] + xx[397] * xx[1038] + xx[503] * xx
    [1045] + xx[1069];
  pm_math_quatInverseXform(xx + 76, xx + 1046, xx + 1064);
  xx[1046] = xx[1036] - (pm_math_dot3(xx + 366, xx + 1061) + pm_math_dot3(xx +
    286, xx + 1064));
  xx[1036] = xx[1063] - xx[70] * xx[1046];
  xx[1063] = xx[1061] - xx[61] * xx[1046];
  xx[1064] = xx[1062];
  xx[1065] = xx[1036];
  pm_math_quatInverseXform(xx + 149, xx + 1063, xx + 1066);
  xx[1047] = xx[398] * xx[1068];
  xx[1048] = xx[220] * xx[1004] - xx[546] * xx[1053] - xx[547] * xx[1055] - xx
    [576] * xx[1056] - xx[237] * xx[1006] - xx[238] * xx[1038] - xx[441] * xx
    [1045] - xx[227] * xx[1046] + xx[221] * xx[1047];
  xx[921] = (xx[903] * xx[902] + xx[923]) * xx[12];
  xx[902] = xx[921] / xx[403];
  xx[903] = xx[52] * xx[902];
  xx[915] = xx[917] + xx[930];
  xx[916] = (xx[70] * xx[903] - xx[915]) / xx[359];
  xx[928] = xx[916] * xx[342];
  xx[929] = xx[425] * xx[916];
  xx[930] = xx[903] - xx[307] * xx[916];
  pm_math_quatXform(xx + 76, xx + 928, xx + 1061);
  xx[928] = xx[294] * xx[916];
  xx[929] = xx[297] * xx[916];
  xx[930] = xx[916] * xx[300];
  pm_math_quatXform(xx + 76, xx + 928, xx + 1064);
  pm_math_cross3(xx + 460, xx + 1064, xx + 928);
  xx[903] = xx[1061] + xx[928];
  xx[917] = xx[1062] + xx[929];
  xx[922] = xx[1063] + xx[930];
  xx[928] = xx[903];
  xx[929] = xx[917];
  xx[930] = xx[922];
  xx[923] = xx[977] + xx[989];
  xx[975] = xx[986] + xx[995];
  xx[976] = xx[992] + xx[998];
  xx[984] = - (pm_math_dot3(xx + 315, xx + 928) + pm_math_dot3(xx + 443, xx +
    1064) + xx[923]);
  xx[985] = - (pm_math_dot3(xx + 478, xx + 928) + pm_math_dot3(xx + 485, xx +
    1064) + xx[975]);
  xx[986] = - (pm_math_dot3(xx + 495, xx + 928) + pm_math_dot3(xx + 504, xx +
    1064) + xx[976]);
  solveSymmetricPosDef(xx + 518, xx + 984, 3, 1, xx + 928, xx + 987);
  xx[984] = xx[903] + xx[358] * xx[928] + xx[422] * xx[929] + xx[510] * xx[930];
  xx[985] = xx[917] + xx[360] * xx[928] + xx[426] * xx[929] + xx[511] * xx[930];
  xx[986] = xx[922] + xx[361] * xx[928] + xx[428] * xx[929] + xx[498] * xx[930];
  pm_math_quatXform(xx + 53, xx + 984, xx + 987);
  xx[984] = xx[1064] + xx[363] * xx[928] + xx[446] * xx[929] + xx[499] * xx[930];
  xx[985] = xx[1065] + xx[365] * xx[928] + xx[457] * xx[929] + xx[500] * xx[930];
  xx[986] = xx[1066] + xx[371] * xx[928] + xx[458] * xx[929] + xx[512] * xx[930];
  pm_math_quatXform(xx + 53, xx + 984, xx + 990);
  pm_math_cross3(xx + 539, xx + 990, xx + 984);
  xx[903] = xx[987] + xx[984];
  xx[917] = xx[988] + xx[985];
  xx[922] = xx[989] + xx[986];
  xx[984] = xx[903];
  xx[985] = xx[917];
  xx[986] = xx[922];
  xx[977] = xx[1009] + xx[1018];
  xx[987] = xx[1012] + xx[1024];
  xx[988] = xx[1021] + xx[1027];
  xx[993] = - (pm_math_dot3(xx + 554, xx + 984) + pm_math_dot3(xx + 572, xx +
    990) + xx[977]);
  xx[994] = - (pm_math_dot3(xx + 624, xx + 984) + pm_math_dot3(xx + 633, xx +
    990) + xx[987]);
  xx[995] = - (pm_math_dot3(xx + 649, xx + 984) + pm_math_dot3(xx + 658, xx +
    990) + xx[988]);
  solveSymmetricPosDef(xx + 672, xx + 993, 3, 1, xx + 984, xx + 996);
  xx[993] = xx[903] + xx[578] * xx[984] + xx[639] * xx[985] + xx[664] * xx[986];
  xx[994] = xx[917] + xx[579] * xx[984] + xx[640] * xx[985] + xx[665] * xx[986];
  xx[995] = xx[922] + xx[557] * xx[984] + xx[627] * xx[985] + xx[652] * xx[986];
  pm_math_quatXform(xx + 8, xx + 993, xx + 996);
  xx[993] = xx[990] + xx[559] * xx[984] + xx[628] * xx[985] + xx[653] * xx[986];
  xx[994] = xx[991] + xx[580] * xx[984] + xx[629] * xx[985] + xx[654] * xx[986];
  xx[995] = xx[992] + xx[608] * xx[984] + xx[641] * xx[985] + xx[666] * xx[986];
  pm_math_quatXform(xx + 8, xx + 993, xx + 989);
  pm_math_cross3(xx + 209, xx + 989, xx + 992);
  xx[903] = xx[1041] + (xx[1044] - xx[1028] * xx[112]) * xx[12];
  xx[917] = (xx[998] + xx[994] + xx[903]) / xx[292];
  xx[922] = xx[917] * xx[10];
  xx[989] = xx[917] * xx[9];
  xx[990] = xx[12] * (xx[8] * xx[922] - xx[11] * xx[989]);
  xx[991] = (xx[8] * xx[989] + xx[11] * xx[922]) * xx[12];
  xx[992] = (xx[9] * xx[989] + xx[10] * xx[922]) * xx[12] - xx[917];
  xx[993] = xx[990];
  xx[994] = - xx[991];
  xx[995] = xx[992];
  xx[922] = xx[917] * xx[210];
  xx[989] = xx[917] * xx[209];
  xx[996] = xx[11] * xx[989];
  xx[997] = xx[11] * xx[922];
  xx[998] = xx[9] * xx[989] + xx[10] * xx[922];
  xx[1007] = xx[996];
  xx[1008] = xx[997];
  xx[1009] = - xx[998];
  pm_math_cross3(xx + 9, xx + 1007, xx + 1010);
  xx[1007] = xx[922] + xx[12] * (xx[1010] - xx[8] * xx[996]);
  xx[922] = xx[12] * (xx[1011] - xx[8] * xx[997]) - xx[989];
  xx[989] = (xx[998] * xx[8] + xx[1012]) * xx[12];
  xx[996] = xx[1007];
  xx[997] = xx[922];
  xx[998] = xx[989];
  xx[1008] = xx[984] - (pm_math_dot3(xx + 431, xx + 993) + pm_math_dot3(xx + 605,
    xx + 996));
  xx[984] = xx[985] - (pm_math_dot3(xx + 708, xx + 993) + pm_math_dot3(xx + 711,
    xx + 996));
  xx[985] = xx[986] - (pm_math_dot3(xx + 714, xx + 993) + pm_math_dot3(xx + 717,
    xx + 996));
  xx[993] = xx[990] - xx[355] * xx[1008] + xx[609] * xx[984] + xx[646] * xx[985];
  xx[994] = xx[548] * xx[1008] - xx[991] + xx[610] * xx[984] + xx[647] * xx[985];
  xx[995] = xx[992] - xx[551] * xx[1008] + xx[623] * xx[984] - xx[648] * xx[985];
  pm_math_quatInverseXform(xx + 53, xx + 993, xx + 990);
  pm_math_cross3(xx + 993, xx + 539, xx + 996);
  xx[993] = xx[1007] - xx[439] * xx[1008] - xx[630] * xx[984] - xx[655] * xx[985]
    + xx[996];
  xx[994] = xx[922] - xx[570] * xx[1008] + xx[631] * xx[984] + xx[656] * xx[985]
    + xx[997];
  xx[995] = xx[989] + xx[571] * xx[1008] + xx[632] * xx[984] - xx[657] * xx[985]
    + xx[998];
  pm_math_quatInverseXform(xx + 53, xx + 993, xx + 996);
  xx[922] = xx[928] - (pm_math_dot3(xx + 434, xx + 990) + pm_math_dot3(xx + 720,
    xx + 996));
  xx[928] = xx[929] - (pm_math_dot3(xx + 543, xx + 990) + pm_math_dot3(xx + 728,
    xx + 996));
  xx[929] = xx[930] - (pm_math_dot3(xx + 731, xx + 990) + pm_math_dot3(xx + 581,
    xx + 996));
  xx[993] = xx[990] + xx[312] * xx[922] + xx[384] * xx[928] - xx[492] * xx[929];
  xx[994] = xx[991] - xx[313] * xx[922] + xx[390] * xx[928] + xx[493] * xx[929];
  xx[995] = xx[992] + xx[314] * xx[922] - xx[391] * xx[928] + xx[494] * xx[929];
  pm_math_quatInverseXform(xx + 76, xx + 993, xx + 989);
  pm_math_cross3(xx + 993, xx + 460, xx + 1009);
  xx[992] = xx[996] + xx[353] * xx[922] - xx[394] * xx[928] + xx[501] * xx[929]
    + xx[1009];
  xx[993] = xx[997] - xx[354] * xx[922] + xx[395] * xx[928] - xx[502] * xx[929]
    + xx[1010];
  xx[994] = xx[998] - xx[357] * xx[922] + xx[397] * xx[928] + xx[503] * xx[929]
    + xx[1011];
  pm_math_quatInverseXform(xx + 76, xx + 992, xx + 995);
  xx[930] = xx[916] - (pm_math_dot3(xx + 366, xx + 989) + pm_math_dot3(xx + 286,
    xx + 995));
  xx[916] = xx[991] - xx[70] * xx[930];
  xx[991] = xx[989] - xx[61] * xx[930];
  xx[992] = xx[990];
  xx[993] = xx[916];
  pm_math_quatInverseXform(xx + 149, xx + 991, xx + 994);
  xx[986] = xx[398] * xx[996];
  xx[989] = xx[220] * xx[917] - xx[546] * xx[1008] - xx[547] * xx[984] - xx[576]
    * xx[985] - xx[237] * xx[922] - xx[238] * xx[928] - xx[441] * xx[929] - xx
    [227] * xx[930] + xx[221] * xx[986];
  xx[990] = xx[88];
  xx[991] = xx[97];
  xx[992] = xx[280];
  xx[993] = xx[279];
  pm_math_quatCompose(xx + 127, xx + 990, xx + 994);
  xx[1009] = xx[97];
  xx[1010] = xx[280];
  xx[1011] = xx[279];
  xx[998] = xx[280] * xx[70];
  xx[1007] = xx[70] * xx[97] - xx[61] * xx[279];
  xx[1012] = xx[280] * xx[61];
  xx[1016] = - xx[998];
  xx[1017] = xx[1007];
  xx[1018] = xx[1012];
  pm_math_cross3(xx + 1009, xx + 1016, xx + 1019);
  xx[1016] = xx[12] * (xx[1019] + xx[88] * xx[998]) - xx[61];
  xx[1017] = xx[12] * (xx[1020] - xx[88] * xx[1007]);
  xx[1018] = (xx[1021] - xx[88] * xx[1012]) * xx[12] - xx[70];
  xx[998] = 8.711233596434026e-16;
  xx[1007] = 2.208729772881146e-15;
  xx[1019] = xx[998];
  xx[1020] = - xx[1007];
  xx[1021] = 1.912846661686156e-15;
  pm_math_cross3(xx + 1016, xx + 1019, xx + 1022);
  pm_math_quatXform(xx + 994, xx + 1022, xx + 1016);
  xx[1022] = - (xx[70] * xx[322]);
  xx[1023] = xx[70] * xx[320] + xx[61] * xx[323];
  xx[1024] = xx[61] * xx[322];
  pm_math_quatXform(xx + 76, xx + 1022, xx + 1025);
  xx[1022] = xx[1025] + xx[231];
  xx[1023] = xx[1026] + xx[245] - xx[98];
  xx[1024] = xx[1027] - xx[107];
  pm_math_quatXform(xx + 123, xx + 1022, xx + 1025);
  xx[1012] = xx[1016] + xx[1025];
  xx[1022] = xx[998] * xx[997];
  xx[1023] = xx[1007] * xx[996] - xx[998] * xx[995];
  xx[1039] = xx[1022];
  xx[1040] = - (xx[1007] * xx[997]);
  xx[1041] = xx[1023];
  pm_math_cross3(xx + 995, xx + 1039, xx + 1042);
  xx[995] = xx[12] * (xx[1042] + xx[994] * xx[1022]) - xx[1007];
  xx[996] = xx[995] / xx[278];
  xx[1022] = xx[52] * xx[996];
  xx[1024] = xx[1022] * xx[97];
  xx[1028] = xx[280] * xx[1022];
  xx[1039] = xx[1022] - (xx[1024] * xx[97] + xx[280] * xx[1028]) * xx[12];
  xx[1022] = (xx[88] * xx[1028] + xx[1024] * xx[279]) * xx[12];
  xx[1040] = (xx[1012] - (xx[70] * xx[1039] + xx[61] * xx[1022])) / xx[359];
  xx[1061] = - (xx[1040] * xx[342] - xx[1022]);
  xx[1062] = xx[12] * (xx[1028] * xx[279] - xx[88] * xx[1024]) - xx[425] * xx
    [1040];
  xx[1063] = xx[1039] + xx[307] * xx[1040];
  pm_math_quatXform(xx + 76, xx + 1061, xx + 1064);
  xx[1061] = - (xx[294] * xx[1040]);
  xx[1062] = - (xx[297] * xx[1040]);
  xx[1063] = - (xx[1040] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 1061, xx + 1067);
  pm_math_cross3(xx + 460, xx + 1067, xx + 1061);
  xx[1022] = xx[1064] + xx[1061];
  xx[1024] = xx[1065] + xx[1062];
  xx[1028] = xx[1066] + xx[1063];
  xx[1061] = xx[1022];
  xx[1062] = xx[1024];
  xx[1063] = xx[1028];
  pm_math_quatCompose(xx + 76, xx + 990, xx + 1070);
  pm_math_quatCompose(xx + 123, xx + 1070, xx + 1074);
  pm_math_quatInverseXform(xx + 1070, xx + 315, xx + 1064);
  pm_math_cross3(xx + 1064, xx + 1019, xx + 1078);
  pm_math_quatXform(xx + 1074, xx + 1078, xx + 1064);
  pm_math_quatXform(xx + 76, xx + 336, xx + 1078);
  xx[1081] = xx[1078] - xx[196];
  xx[1082] = xx[1079] - xx[188];
  xx[1083] = xx[1080] - xx[190];
  pm_math_cross3(xx + 315, xx + 1081, xx + 1078);
  pm_math_quatXform(xx + 53, xx + 1078, xx + 1084);
  xx[1078] = xx[1084] + xx[482];
  xx[1079] = xx[1085] + xx[483];
  xx[1080] = xx[1086] + xx[484];
  pm_math_quatXform(xx + 119, xx + 1078, xx + 1084);
  xx[1039] = xx[1064] + xx[1084];
  pm_math_quatInverseXform(xx + 1070, xx + 478, xx + 1078);
  pm_math_cross3(xx + 1078, xx + 1019, xx + 1087);
  pm_math_quatXform(xx + 1074, xx + 1087, xx + 1078);
  pm_math_cross3(xx + 478, xx + 1081, xx + 1087);
  pm_math_quatXform(xx + 53, xx + 1087, xx + 1090);
  xx[1087] = xx[1090] + xx[527];
  xx[1088] = xx[1091] + xx[528];
  xx[1089] = xx[1092] + xx[529];
  pm_math_quatXform(xx + 119, xx + 1087, xx + 1090);
  xx[1041] = xx[1078] + xx[1090];
  pm_math_quatInverseXform(xx + 1070, xx + 495, xx + 1087);
  pm_math_cross3(xx + 1087, xx + 1019, xx + 1093);
  pm_math_quatXform(xx + 1074, xx + 1093, xx + 1087);
  pm_math_cross3(xx + 495, xx + 1081, xx + 1074);
  pm_math_quatXform(xx + 53, xx + 1074, xx + 1093);
  xx[1074] = xx[1093] + xx[488];
  xx[1075] = xx[1094] + xx[489];
  xx[1076] = xx[1095] + xx[490];
  pm_math_quatXform(xx + 119, xx + 1074, xx + 1093);
  xx[1051] = xx[1087] + xx[1093];
  xx[1074] = - (pm_math_dot3(xx + 315, xx + 1061) + pm_math_dot3(xx + 443, xx +
    1067) + xx[1039]);
  xx[1075] = - (pm_math_dot3(xx + 478, xx + 1061) + pm_math_dot3(xx + 485, xx +
    1067) + xx[1041]);
  xx[1076] = - (pm_math_dot3(xx + 495, xx + 1061) + pm_math_dot3(xx + 504, xx +
    1067) + xx[1051]);
  solveSymmetricPosDef(xx + 518, xx + 1074, 3, 1, xx + 1061, xx + 1096);
  xx[1074] = xx[1022] + xx[358] * xx[1061] + xx[422] * xx[1062] + xx[510] * xx
    [1063];
  xx[1075] = xx[1024] + xx[360] * xx[1061] + xx[426] * xx[1062] + xx[511] * xx
    [1063];
  xx[1076] = xx[1028] + xx[361] * xx[1061] + xx[428] * xx[1062] + xx[498] * xx
    [1063];
  pm_math_quatXform(xx + 53, xx + 1074, xx + 1096);
  xx[1074] = xx[1067] + xx[363] * xx[1061] + xx[446] * xx[1062] + xx[499] * xx
    [1063];
  xx[1075] = xx[1068] + xx[365] * xx[1061] + xx[457] * xx[1062] + xx[500] * xx
    [1063];
  xx[1076] = xx[1069] + xx[371] * xx[1061] + xx[458] * xx[1062] + xx[512] * xx
    [1063];
  pm_math_quatXform(xx + 53, xx + 1074, xx + 1067);
  pm_math_cross3(xx + 539, xx + 1067, xx + 1074);
  xx[1022] = xx[1096] + xx[1074];
  xx[1024] = xx[1097] + xx[1075];
  xx[1028] = xx[1098] + xx[1076];
  xx[1074] = xx[1022];
  xx[1075] = xx[1024];
  xx[1076] = xx[1028];
  pm_math_quatCompose(xx + 53, xx + 1070, xx + 1096);
  pm_math_quatCompose(xx + 119, xx + 1096, xx + 1100);
  pm_math_quatInverseXform(xx + 1096, xx + 554, xx + 1104);
  pm_math_cross3(xx + 1104, xx + 1019, xx + 1107);
  pm_math_quatXform(xx + 1100, xx + 1107, xx + 1104);
  pm_math_quatXform(xx + 53, xx + 1081, xx + 1107);
  xx[1110] = xx[1107] + xx[189];
  xx[1111] = xx[1108] + xx[194];
  xx[1112] = xx[1109] + xx[195];
  pm_math_cross3(xx + 554, xx + 1110, xx + 1107);
  pm_math_quatXform(xx + 8, xx + 1107, xx + 1113);
  xx[1107] = xx[1113] + xx[636];
  xx[1108] = xx[1114] + xx[637];
  xx[1109] = xx[1115] + xx[638];
  pm_math_quatXform(xx + 115, xx + 1107, xx + 1113);
  xx[1052] = xx[1104] + xx[1113];
  pm_math_quatInverseXform(xx + 1096, xx + 624, xx + 1107);
  pm_math_cross3(xx + 1107, xx + 1019, xx + 1116);
  pm_math_quatXform(xx + 1100, xx + 1116, xx + 1107);
  pm_math_cross3(xx + 624, xx + 1110, xx + 1116);
  pm_math_quatXform(xx + 8, xx + 1116, xx + 1119);
  xx[1116] = xx[1119] + xx[681];
  xx[1117] = xx[1120] + xx[682];
  xx[1118] = xx[1121] + xx[683];
  pm_math_quatXform(xx + 115, xx + 1116, xx + 1119);
  xx[1057] = xx[1107] + xx[1119];
  pm_math_quatInverseXform(xx + 1096, xx + 649, xx + 1116);
  pm_math_cross3(xx + 1116, xx + 1019, xx + 1122);
  pm_math_quatXform(xx + 1100, xx + 1122, xx + 1116);
  pm_math_cross3(xx + 649, xx + 1110, xx + 1100);
  pm_math_quatXform(xx + 8, xx + 1100, xx + 1122);
  xx[1100] = xx[1122] + xx[642];
  xx[1101] = xx[1123] + xx[643];
  xx[1102] = xx[1124] + xx[644];
  pm_math_quatXform(xx + 115, xx + 1100, xx + 1122);
  xx[1077] = xx[1116] + xx[1122];
  xx[1100] = - (pm_math_dot3(xx + 554, xx + 1074) + pm_math_dot3(xx + 572, xx +
    1067) + xx[1052]);
  xx[1101] = - (pm_math_dot3(xx + 624, xx + 1074) + pm_math_dot3(xx + 633, xx +
    1067) + xx[1057]);
  xx[1102] = - (pm_math_dot3(xx + 649, xx + 1074) + pm_math_dot3(xx + 658, xx +
    1067) + xx[1077]);
  solveSymmetricPosDef(xx + 672, xx + 1100, 3, 1, xx + 1074, xx + 1125);
  xx[1100] = xx[1022] + xx[578] * xx[1074] + xx[639] * xx[1075] + xx[664] * xx
    [1076];
  xx[1101] = xx[1024] + xx[579] * xx[1074] + xx[640] * xx[1075] + xx[665] * xx
    [1076];
  xx[1102] = xx[1028] + xx[557] * xx[1074] + xx[627] * xx[1075] + xx[652] * xx
    [1076];
  pm_math_quatXform(xx + 8, xx + 1100, xx + 1125);
  xx[1100] = xx[1067] + xx[559] * xx[1074] + xx[628] * xx[1075] + xx[653] * xx
    [1076];
  xx[1101] = xx[1068] + xx[580] * xx[1074] + xx[629] * xx[1075] + xx[654] * xx
    [1076];
  xx[1102] = xx[1069] + xx[608] * xx[1074] + xx[641] * xx[1075] + xx[666] * xx
    [1076];
  pm_math_quatXform(xx + 8, xx + 1100, xx + 1067);
  pm_math_cross3(xx + 209, xx + 1067, xx + 1100);
  pm_math_quatCompose(xx + 8, xx + 1096, xx + 1128);
  pm_math_quatCompose(xx + 145, xx + 1128, xx + 1132);
  xx[1022] = xx[1129] * xx[1131];
  xx[1024] = xx[1128] * xx[1130];
  xx[1028] = xx[12] * (xx[1022] - xx[1024]);
  xx[1067] = xx[1128] * xx[1129];
  xx[1068] = xx[1130] * xx[1131];
  xx[1069] = xx[1129] * xx[1129];
  xx[1100] = xx[1130] * xx[1130];
  xx[1136] = xx[1028];
  xx[1137] = (xx[1067] + xx[1068]) * xx[12];
  xx[1138] = xx[172] - (xx[1069] + xx[1100]) * xx[12];
  pm_math_cross3(xx + 1136, xx + 1019, xx + 1139);
  pm_math_quatXform(xx + 1132, xx + 1139, xx + 1136);
  pm_math_quatXform(xx + 8, xx + 1110, xx + 1132);
  xx[1101] = xx[1133] + xx[210];
  xx[1103] = xx[1132] + xx[209];
  xx[1125] = xx[1101] * xx[16] - xx[1103] * xx[15];
  xx[1126] = xx[12] * xx[16] * xx[1125] - xx[1101];
  xx[1132] = xx[1103] + xx[12] * xx[15] * xx[1125];
  xx[1125] = xx[1132] * xx[113];
  xx[1133] = xx[113] * xx[1126];
  xx[1134] = xx[1132] * xx[109] + xx[1126] * xx[104];
  xx[1139] = - xx[1125];
  xx[1140] = xx[1133];
  xx[1141] = - xx[1134];
  pm_math_cross3(xx + 214, xx + 1139, xx + 1142);
  xx[1135] = xx[1136] + xx[1126] + xx[12] * (xx[1142] - xx[1125] * xx[112]);
  xx[1125] = (xx[1127] + xx[1102] + xx[1135]) / xx[292];
  xx[1102] = xx[1125] * xx[10];
  xx[1126] = xx[1125] * xx[9];
  xx[1127] = xx[12] * (xx[8] * xx[1102] - xx[11] * xx[1126]);
  xx[1139] = (xx[8] * xx[1126] + xx[11] * xx[1102]) * xx[12];
  xx[1140] = (xx[9] * xx[1126] + xx[10] * xx[1102]) * xx[12] - xx[1125];
  xx[1145] = xx[1127];
  xx[1146] = - xx[1139];
  xx[1147] = xx[1140];
  xx[1102] = xx[1125] * xx[210];
  xx[1126] = xx[1125] * xx[209];
  xx[1141] = xx[11] * xx[1126];
  xx[1148] = xx[11] * xx[1102];
  xx[1149] = xx[9] * xx[1126] + xx[10] * xx[1102];
  xx[1150] = xx[1141];
  xx[1151] = xx[1148];
  xx[1152] = - xx[1149];
  pm_math_cross3(xx + 9, xx + 1150, xx + 1153);
  xx[1150] = xx[1102] + xx[12] * (xx[1153] - xx[8] * xx[1141]);
  xx[1102] = xx[12] * (xx[1154] - xx[8] * xx[1148]) - xx[1126];
  xx[1126] = (xx[1149] * xx[8] + xx[1155]) * xx[12];
  xx[1151] = xx[1150];
  xx[1152] = xx[1102];
  xx[1153] = xx[1126];
  xx[1141] = xx[1074] - (pm_math_dot3(xx + 431, xx + 1145) + pm_math_dot3(xx +
    605, xx + 1151));
  xx[1074] = xx[1075] - (pm_math_dot3(xx + 708, xx + 1145) + pm_math_dot3(xx +
    711, xx + 1151));
  xx[1075] = xx[1076] - (pm_math_dot3(xx + 714, xx + 1145) + pm_math_dot3(xx +
    717, xx + 1151));
  xx[1145] = xx[1127] - xx[355] * xx[1141] + xx[609] * xx[1074] + xx[646] * xx
    [1075];
  xx[1146] = xx[548] * xx[1141] - xx[1139] + xx[610] * xx[1074] + xx[647] * xx
    [1075];
  xx[1147] = xx[1140] - xx[551] * xx[1141] + xx[623] * xx[1074] - xx[648] * xx
    [1075];
  pm_math_quatInverseXform(xx + 53, xx + 1145, xx + 1151);
  pm_math_cross3(xx + 1145, xx + 539, xx + 1154);
  xx[1145] = xx[1150] - xx[439] * xx[1141] - xx[630] * xx[1074] - xx[655] * xx
    [1075] + xx[1154];
  xx[1146] = xx[1102] - xx[570] * xx[1141] + xx[631] * xx[1074] + xx[656] * xx
    [1075] + xx[1155];
  xx[1147] = xx[1126] + xx[571] * xx[1141] + xx[632] * xx[1074] - xx[657] * xx
    [1075] + xx[1156];
  pm_math_quatInverseXform(xx + 53, xx + 1145, xx + 1148);
  xx[1076] = xx[1061] - (pm_math_dot3(xx + 434, xx + 1151) + pm_math_dot3(xx +
    720, xx + 1148));
  xx[1061] = xx[1062] - (pm_math_dot3(xx + 543, xx + 1151) + pm_math_dot3(xx +
    728, xx + 1148));
  xx[1062] = xx[1063] - (pm_math_dot3(xx + 731, xx + 1151) + pm_math_dot3(xx +
    581, xx + 1148));
  xx[1145] = xx[1151] + xx[312] * xx[1076] + xx[384] * xx[1061] - xx[492] * xx
    [1062];
  xx[1146] = xx[1152] - xx[313] * xx[1076] + xx[390] * xx[1061] + xx[493] * xx
    [1062];
  xx[1147] = xx[1153] + xx[314] * xx[1076] - xx[391] * xx[1061] + xx[494] * xx
    [1062];
  pm_math_quatInverseXform(xx + 76, xx + 1145, xx + 1151);
  pm_math_cross3(xx + 1145, xx + 460, xx + 1154);
  xx[1145] = xx[1148] + xx[353] * xx[1076] - xx[394] * xx[1061] + xx[501] * xx
    [1062] + xx[1154];
  xx[1146] = xx[1149] - xx[354] * xx[1076] + xx[395] * xx[1061] - xx[502] * xx
    [1062] + xx[1155];
  xx[1147] = xx[1150] - xx[357] * xx[1076] + xx[397] * xx[1061] + xx[503] * xx
    [1062] + xx[1156];
  pm_math_quatInverseXform(xx + 76, xx + 1145, xx + 1148);
  xx[1063] = xx[1040] + pm_math_dot3(xx + 366, xx + 1151) + pm_math_dot3(xx +
    286, xx + 1148);
  xx[1040] = xx[1153] + xx[1063] * xx[70];
  xx[1145] = xx[1151] + xx[1063] * xx[61];
  xx[1146] = xx[1152];
  xx[1147] = xx[1040];
  pm_math_quatInverseXform(xx + 149, xx + 1145, xx + 1148);
  xx[1102] = xx[398] * xx[1150];
  xx[1126] = xx[220] * xx[1125] - xx[546] * xx[1141] - xx[547] * xx[1074] - xx
    [576] * xx[1075] - xx[237] * xx[1076] - xx[238] * xx[1061] - xx[441] * xx
    [1062] + xx[1063] * xx[227] + xx[221] * xx[1102];
  xx[1127] = xx[1017] + xx[1026];
  xx[1139] = (xx[1043] - xx[1007] * xx[994] * xx[997]) * xx[12] - xx[998];
  xx[997] = xx[1139] / xx[278];
  xx[998] = xx[52] * xx[997];
  xx[1007] = xx[998] * xx[97];
  xx[1140] = xx[280] * xx[998];
  xx[1148] = xx[998] - (xx[1007] * xx[97] + xx[280] * xx[1140]) * xx[12];
  xx[998] = (xx[88] * xx[1140] + xx[1007] * xx[279]) * xx[12];
  xx[1149] = (xx[1127] - (xx[70] * xx[1148] + xx[61] * xx[998])) / xx[359];
  xx[1150] = - (xx[1149] * xx[342] - xx[998]);
  xx[1151] = xx[12] * (xx[1140] * xx[279] - xx[88] * xx[1007]) - xx[425] * xx
    [1149];
  xx[1152] = xx[1148] + xx[307] * xx[1149];
  pm_math_quatXform(xx + 76, xx + 1150, xx + 1153);
  xx[1150] = - (xx[294] * xx[1149]);
  xx[1151] = - (xx[297] * xx[1149]);
  xx[1152] = - (xx[1149] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 1150, xx + 1156);
  pm_math_cross3(xx + 460, xx + 1156, xx + 1150);
  xx[998] = xx[1153] + xx[1150];
  xx[1007] = xx[1154] + xx[1151];
  xx[1140] = xx[1155] + xx[1152];
  xx[1150] = xx[998];
  xx[1151] = xx[1007];
  xx[1152] = xx[1140];
  xx[1148] = xx[1065] + xx[1085];
  xx[1153] = xx[1079] + xx[1091];
  xx[1154] = xx[1088] + xx[1094];
  xx[1159] = - (pm_math_dot3(xx + 315, xx + 1150) + pm_math_dot3(xx + 443, xx +
    1156) + xx[1148]);
  xx[1160] = - (pm_math_dot3(xx + 478, xx + 1150) + pm_math_dot3(xx + 485, xx +
    1156) + xx[1153]);
  xx[1161] = - (pm_math_dot3(xx + 495, xx + 1150) + pm_math_dot3(xx + 504, xx +
    1156) + xx[1154]);
  solveSymmetricPosDef(xx + 518, xx + 1159, 3, 1, xx + 1150, xx + 1162);
  xx[1159] = xx[998] + xx[358] * xx[1150] + xx[422] * xx[1151] + xx[510] * xx
    [1152];
  xx[1160] = xx[1007] + xx[360] * xx[1150] + xx[426] * xx[1151] + xx[511] * xx
    [1152];
  xx[1161] = xx[1140] + xx[361] * xx[1150] + xx[428] * xx[1151] + xx[498] * xx
    [1152];
  pm_math_quatXform(xx + 53, xx + 1159, xx + 1162);
  xx[1159] = xx[1156] + xx[363] * xx[1150] + xx[446] * xx[1151] + xx[499] * xx
    [1152];
  xx[1160] = xx[1157] + xx[365] * xx[1150] + xx[457] * xx[1151] + xx[500] * xx
    [1152];
  xx[1161] = xx[1158] + xx[371] * xx[1150] + xx[458] * xx[1151] + xx[512] * xx
    [1152];
  pm_math_quatXform(xx + 53, xx + 1159, xx + 1155);
  pm_math_cross3(xx + 539, xx + 1155, xx + 1158);
  xx[998] = xx[1162] + xx[1158];
  xx[1007] = xx[1163] + xx[1159];
  xx[1140] = xx[1164] + xx[1160];
  xx[1158] = xx[998];
  xx[1159] = xx[1007];
  xx[1160] = xx[1140];
  xx[1161] = xx[1105] + xx[1114];
  xx[1162] = xx[1108] + xx[1120];
  xx[1163] = xx[1117] + xx[1123];
  xx[1164] = - (pm_math_dot3(xx + 554, xx + 1158) + pm_math_dot3(xx + 572, xx +
    1155) + xx[1161]);
  xx[1165] = - (pm_math_dot3(xx + 624, xx + 1158) + pm_math_dot3(xx + 633, xx +
    1155) + xx[1162]);
  xx[1166] = - (pm_math_dot3(xx + 649, xx + 1158) + pm_math_dot3(xx + 658, xx +
    1155) + xx[1163]);
  solveSymmetricPosDef(xx + 672, xx + 1164, 3, 1, xx + 1158, xx + 1167);
  xx[1164] = xx[998] + xx[578] * xx[1158] + xx[639] * xx[1159] + xx[664] * xx
    [1160];
  xx[1165] = xx[1007] + xx[579] * xx[1158] + xx[640] * xx[1159] + xx[665] * xx
    [1160];
  xx[1166] = xx[1140] + xx[557] * xx[1158] + xx[627] * xx[1159] + xx[652] * xx
    [1160];
  pm_math_quatXform(xx + 8, xx + 1164, xx + 1167);
  xx[1164] = xx[1155] + xx[559] * xx[1158] + xx[628] * xx[1159] + xx[653] * xx
    [1160];
  xx[1165] = xx[1156] + xx[580] * xx[1158] + xx[629] * xx[1159] + xx[654] * xx
    [1160];
  xx[1166] = xx[1157] + xx[608] * xx[1158] + xx[641] * xx[1159] + xx[666] * xx
    [1160];
  pm_math_quatXform(xx + 8, xx + 1164, xx + 1155);
  pm_math_cross3(xx + 209, xx + 1155, xx + 1164);
  xx[998] = xx[1137] + xx[1132] + (xx[1133] * xx[112] + xx[1143]) * xx[12];
  xx[1007] = (xx[1169] + xx[1166] + xx[998]) / xx[292];
  xx[1132] = xx[1007] * xx[10];
  xx[1133] = xx[1007] * xx[9];
  xx[1140] = xx[12] * (xx[8] * xx[1132] - xx[11] * xx[1133]);
  xx[1155] = (xx[8] * xx[1133] + xx[11] * xx[1132]) * xx[12];
  xx[1156] = (xx[9] * xx[1133] + xx[10] * xx[1132]) * xx[12] - xx[1007];
  xx[1164] = xx[1140];
  xx[1165] = - xx[1155];
  xx[1166] = xx[1156];
  xx[1132] = xx[1007] * xx[210];
  xx[1133] = xx[1007] * xx[209];
  xx[1157] = xx[11] * xx[1133];
  xx[1167] = xx[11] * xx[1132];
  xx[1168] = xx[9] * xx[1133] + xx[10] * xx[1132];
  xx[1169] = xx[1157];
  xx[1170] = xx[1167];
  xx[1171] = - xx[1168];
  pm_math_cross3(xx + 9, xx + 1169, xx + 1172);
  xx[1169] = xx[1132] + xx[12] * (xx[1172] - xx[8] * xx[1157]);
  xx[1132] = xx[12] * (xx[1173] - xx[8] * xx[1167]) - xx[1133];
  xx[1133] = (xx[1168] * xx[8] + xx[1174]) * xx[12];
  xx[1170] = xx[1169];
  xx[1171] = xx[1132];
  xx[1172] = xx[1133];
  xx[1157] = xx[1158] - (pm_math_dot3(xx + 431, xx + 1164) + pm_math_dot3(xx +
    605, xx + 1170));
  xx[1158] = xx[1159] - (pm_math_dot3(xx + 708, xx + 1164) + pm_math_dot3(xx +
    711, xx + 1170));
  xx[1159] = xx[1160] - (pm_math_dot3(xx + 714, xx + 1164) + pm_math_dot3(xx +
    717, xx + 1170));
  xx[1164] = xx[1140] - xx[355] * xx[1157] + xx[609] * xx[1158] + xx[646] * xx
    [1159];
  xx[1165] = xx[548] * xx[1157] - xx[1155] + xx[610] * xx[1158] + xx[647] * xx
    [1159];
  xx[1166] = xx[1156] - xx[551] * xx[1157] + xx[623] * xx[1158] - xx[648] * xx
    [1159];
  pm_math_quatInverseXform(xx + 53, xx + 1164, xx + 1170);
  pm_math_cross3(xx + 1164, xx + 539, xx + 1173);
  xx[1164] = xx[1169] - xx[439] * xx[1157] - xx[630] * xx[1158] - xx[655] * xx
    [1159] + xx[1173];
  xx[1165] = xx[1132] - xx[570] * xx[1157] + xx[631] * xx[1158] + xx[656] * xx
    [1159] + xx[1174];
  xx[1166] = xx[1133] + xx[571] * xx[1157] + xx[632] * xx[1158] - xx[657] * xx
    [1159] + xx[1175];
  pm_math_quatInverseXform(xx + 53, xx + 1164, xx + 1167);
  xx[1132] = xx[1150] - (pm_math_dot3(xx + 434, xx + 1170) + pm_math_dot3(xx +
    720, xx + 1167));
  xx[1133] = xx[1151] - (pm_math_dot3(xx + 543, xx + 1170) + pm_math_dot3(xx +
    728, xx + 1167));
  xx[1140] = xx[1152] - (pm_math_dot3(xx + 731, xx + 1170) + pm_math_dot3(xx +
    581, xx + 1167));
  xx[1150] = xx[1170] + xx[312] * xx[1132] + xx[384] * xx[1133] - xx[492] * xx
    [1140];
  xx[1151] = xx[1171] - xx[313] * xx[1132] + xx[390] * xx[1133] + xx[493] * xx
    [1140];
  xx[1152] = xx[1172] + xx[314] * xx[1132] - xx[391] * xx[1133] + xx[494] * xx
    [1140];
  pm_math_quatInverseXform(xx + 76, xx + 1150, xx + 1164);
  pm_math_cross3(xx + 1150, xx + 460, xx + 1170);
  xx[1150] = xx[1167] + xx[353] * xx[1132] - xx[394] * xx[1133] + xx[501] * xx
    [1140] + xx[1170];
  xx[1151] = xx[1168] - xx[354] * xx[1132] + xx[395] * xx[1133] - xx[502] * xx
    [1140] + xx[1171];
  xx[1152] = xx[1169] - xx[357] * xx[1132] + xx[397] * xx[1133] + xx[503] * xx
    [1140] + xx[1172];
  pm_math_quatInverseXform(xx + 76, xx + 1150, xx + 1167);
  xx[1150] = xx[1149] + pm_math_dot3(xx + 366, xx + 1164) + pm_math_dot3(xx +
    286, xx + 1167);
  xx[1149] = xx[1166] + xx[1150] * xx[70];
  xx[1166] = xx[1164] + xx[1150] * xx[61];
  xx[1167] = xx[1165];
  xx[1168] = xx[1149];
  pm_math_quatInverseXform(xx + 149, xx + 1166, xx + 1169);
  xx[1151] = xx[398] * xx[1171];
  xx[1152] = xx[220] * xx[1007] - xx[546] * xx[1157] - xx[547] * xx[1158] - xx
    [576] * xx[1159] - xx[237] * xx[1132] - xx[238] * xx[1133] - xx[441] * xx
    [1140] + xx[1150] * xx[227] + xx[221] * xx[1151];
  xx[1016] = xx[1018] + xx[1027];
  xx[1017] = (xx[994] * xx[1023] + xx[1044]) * xx[12];
  xx[994] = xx[1017] / xx[278];
  xx[1018] = xx[52] * xx[994];
  xx[1023] = xx[1018] * xx[97];
  xx[1025] = xx[280] * xx[1018];
  xx[1026] = xx[1018] - (xx[1023] * xx[97] + xx[280] * xx[1025]) * xx[12];
  xx[1018] = (xx[88] * xx[1025] + xx[1023] * xx[279]) * xx[12];
  xx[1027] = (xx[1016] - (xx[70] * xx[1026] + xx[61] * xx[1018])) / xx[359];
  xx[1042] = - (xx[1027] * xx[342] - xx[1018]);
  xx[1043] = xx[12] * (xx[1025] * xx[279] - xx[88] * xx[1023]) - xx[425] * xx
    [1027];
  xx[1044] = xx[1026] + xx[307] * xx[1027];
  pm_math_quatXform(xx + 76, xx + 1042, xx + 1169);
  xx[1042] = - (xx[294] * xx[1027]);
  xx[1043] = - (xx[297] * xx[1027]);
  xx[1044] = - (xx[1027] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 1042, xx + 1172);
  pm_math_cross3(xx + 460, xx + 1172, xx + 1042);
  xx[1018] = xx[1169] + xx[1042];
  xx[1023] = xx[1170] + xx[1043];
  xx[1025] = xx[1171] + xx[1044];
  xx[1042] = xx[1018];
  xx[1043] = xx[1023];
  xx[1044] = xx[1025];
  xx[1026] = xx[1066] + xx[1086];
  xx[1064] = xx[1080] + xx[1092];
  xx[1065] = xx[1089] + xx[1095];
  xx[1078] = - (pm_math_dot3(xx + 315, xx + 1042) + pm_math_dot3(xx + 443, xx +
    1172) + xx[1026]);
  xx[1079] = - (pm_math_dot3(xx + 478, xx + 1042) + pm_math_dot3(xx + 485, xx +
    1172) + xx[1064]);
  xx[1080] = - (pm_math_dot3(xx + 495, xx + 1042) + pm_math_dot3(xx + 504, xx +
    1172) + xx[1065]);
  solveSymmetricPosDef(xx + 518, xx + 1078, 3, 1, xx + 1042, xx + 1084);
  xx[1078] = xx[1018] + xx[358] * xx[1042] + xx[422] * xx[1043] + xx[510] * xx
    [1044];
  xx[1079] = xx[1023] + xx[360] * xx[1042] + xx[426] * xx[1043] + xx[511] * xx
    [1044];
  xx[1080] = xx[1025] + xx[361] * xx[1042] + xx[428] * xx[1043] + xx[498] * xx
    [1044];
  pm_math_quatXform(xx + 53, xx + 1078, xx + 1084);
  xx[1078] = xx[1172] + xx[363] * xx[1042] + xx[446] * xx[1043] + xx[499] * xx
    [1044];
  xx[1079] = xx[1173] + xx[365] * xx[1042] + xx[457] * xx[1043] + xx[500] * xx
    [1044];
  xx[1080] = xx[1174] + xx[371] * xx[1042] + xx[458] * xx[1043] + xx[512] * xx
    [1044];
  pm_math_quatXform(xx + 53, xx + 1078, xx + 1087);
  pm_math_cross3(xx + 539, xx + 1087, xx + 1078);
  xx[1018] = xx[1084] + xx[1078];
  xx[1023] = xx[1085] + xx[1079];
  xx[1025] = xx[1086] + xx[1080];
  xx[1078] = xx[1018];
  xx[1079] = xx[1023];
  xx[1080] = xx[1025];
  xx[1066] = xx[1106] + xx[1115];
  xx[1084] = xx[1109] + xx[1121];
  xx[1085] = xx[1118] + xx[1124];
  xx[1090] = - (pm_math_dot3(xx + 554, xx + 1078) + pm_math_dot3(xx + 572, xx +
    1087) + xx[1066]);
  xx[1091] = - (pm_math_dot3(xx + 624, xx + 1078) + pm_math_dot3(xx + 633, xx +
    1087) + xx[1084]);
  xx[1092] = - (pm_math_dot3(xx + 649, xx + 1078) + pm_math_dot3(xx + 658, xx +
    1087) + xx[1085]);
  solveSymmetricPosDef(xx + 672, xx + 1090, 3, 1, xx + 1078, xx + 1093);
  xx[1090] = xx[1018] + xx[578] * xx[1078] + xx[639] * xx[1079] + xx[664] * xx
    [1080];
  xx[1091] = xx[1023] + xx[579] * xx[1078] + xx[640] * xx[1079] + xx[665] * xx
    [1080];
  xx[1092] = xx[1025] + xx[557] * xx[1078] + xx[627] * xx[1079] + xx[652] * xx
    [1080];
  pm_math_quatXform(xx + 8, xx + 1090, xx + 1093);
  xx[1090] = xx[1087] + xx[559] * xx[1078] + xx[628] * xx[1079] + xx[653] * xx
    [1080];
  xx[1091] = xx[1088] + xx[580] * xx[1078] + xx[629] * xx[1079] + xx[654] * xx
    [1080];
  xx[1092] = xx[1089] + xx[608] * xx[1078] + xx[641] * xx[1079] + xx[666] * xx
    [1080];
  pm_math_quatXform(xx + 8, xx + 1090, xx + 1086);
  pm_math_cross3(xx + 209, xx + 1086, xx + 1089);
  xx[1018] = xx[1138] + (xx[1144] - xx[1134] * xx[112]) * xx[12];
  xx[1023] = (xx[1095] + xx[1091] + xx[1018]) / xx[292];
  xx[1025] = xx[1023] * xx[10];
  xx[1086] = xx[1023] * xx[9];
  xx[1087] = xx[12] * (xx[8] * xx[1025] - xx[11] * xx[1086]);
  xx[1088] = (xx[8] * xx[1086] + xx[11] * xx[1025]) * xx[12];
  xx[1089] = (xx[9] * xx[1086] + xx[10] * xx[1025]) * xx[12] - xx[1023];
  xx[1090] = xx[1087];
  xx[1091] = - xx[1088];
  xx[1092] = xx[1089];
  xx[1025] = xx[1023] * xx[210];
  xx[1086] = xx[1023] * xx[209];
  xx[1093] = xx[11] * xx[1086];
  xx[1094] = xx[11] * xx[1025];
  xx[1095] = xx[9] * xx[1086] + xx[10] * xx[1025];
  xx[1104] = xx[1093];
  xx[1105] = xx[1094];
  xx[1106] = - xx[1095];
  pm_math_cross3(xx + 9, xx + 1104, xx + 1107);
  xx[1104] = xx[1025] + xx[12] * (xx[1107] - xx[8] * xx[1093]);
  xx[1025] = xx[12] * (xx[1108] - xx[8] * xx[1094]) - xx[1086];
  xx[1086] = (xx[1095] * xx[8] + xx[1109]) * xx[12];
  xx[1093] = xx[1104];
  xx[1094] = xx[1025];
  xx[1095] = xx[1086];
  xx[1105] = xx[1078] - (pm_math_dot3(xx + 431, xx + 1090) + pm_math_dot3(xx +
    605, xx + 1093));
  xx[1078] = xx[1079] - (pm_math_dot3(xx + 708, xx + 1090) + pm_math_dot3(xx +
    711, xx + 1093));
  xx[1079] = xx[1080] - (pm_math_dot3(xx + 714, xx + 1090) + pm_math_dot3(xx +
    717, xx + 1093));
  xx[1090] = xx[1087] - xx[355] * xx[1105] + xx[609] * xx[1078] + xx[646] * xx
    [1079];
  xx[1091] = xx[548] * xx[1105] - xx[1088] + xx[610] * xx[1078] + xx[647] * xx
    [1079];
  xx[1092] = xx[1089] - xx[551] * xx[1105] + xx[623] * xx[1078] - xx[648] * xx
    [1079];
  pm_math_quatInverseXform(xx + 53, xx + 1090, xx + 1087);
  pm_math_cross3(xx + 1090, xx + 539, xx + 1093);
  xx[1090] = xx[1104] - xx[439] * xx[1105] - xx[630] * xx[1078] - xx[655] * xx
    [1079] + xx[1093];
  xx[1091] = xx[1025] - xx[570] * xx[1105] + xx[631] * xx[1078] + xx[656] * xx
    [1079] + xx[1094];
  xx[1092] = xx[1086] + xx[571] * xx[1105] + xx[632] * xx[1078] - xx[657] * xx
    [1079] + xx[1095];
  pm_math_quatInverseXform(xx + 53, xx + 1090, xx + 1093);
  xx[1025] = xx[1042] - (pm_math_dot3(xx + 434, xx + 1087) + pm_math_dot3(xx +
    720, xx + 1093));
  xx[1042] = xx[1043] - (pm_math_dot3(xx + 543, xx + 1087) + pm_math_dot3(xx +
    728, xx + 1093));
  xx[1043] = xx[1044] - (pm_math_dot3(xx + 731, xx + 1087) + pm_math_dot3(xx +
    581, xx + 1093));
  xx[1090] = xx[1087] + xx[312] * xx[1025] + xx[384] * xx[1042] - xx[492] * xx
    [1043];
  xx[1091] = xx[1088] - xx[313] * xx[1025] + xx[390] * xx[1042] + xx[493] * xx
    [1043];
  xx[1092] = xx[1089] + xx[314] * xx[1025] - xx[391] * xx[1042] + xx[494] * xx
    [1043];
  pm_math_quatInverseXform(xx + 76, xx + 1090, xx + 1086);
  pm_math_cross3(xx + 1090, xx + 460, xx + 1106);
  xx[1089] = xx[1093] + xx[353] * xx[1025] - xx[394] * xx[1042] + xx[501] * xx
    [1043] + xx[1106];
  xx[1090] = xx[1094] - xx[354] * xx[1025] + xx[395] * xx[1042] - xx[502] * xx
    [1043] + xx[1107];
  xx[1091] = xx[1095] - xx[357] * xx[1025] + xx[397] * xx[1042] + xx[503] * xx
    [1043] + xx[1108];
  pm_math_quatInverseXform(xx + 76, xx + 1089, xx + 1092);
  xx[1044] = xx[1027] + pm_math_dot3(xx + 366, xx + 1086) + pm_math_dot3(xx +
    286, xx + 1092);
  xx[1027] = xx[1088] + xx[1044] * xx[70];
  xx[1088] = xx[1086] + xx[1044] * xx[61];
  xx[1089] = xx[1087];
  xx[1090] = xx[1027];
  pm_math_quatInverseXform(xx + 149, xx + 1088, xx + 1091);
  xx[1080] = xx[398] * xx[1093];
  xx[1086] = xx[220] * xx[1023] - xx[546] * xx[1105] - xx[547] * xx[1078] - xx
    [576] * xx[1079] - xx[237] * xx[1025] - xx[238] * xx[1042] - xx[441] * xx
    [1043] + xx[1044] * xx[227] + xx[221] * xx[1080];
  xx[1091] = xx[95];
  xx[1092] = xx[99];
  xx[1093] = xx[90];
  xx[1087] = xx[99] * xx[70];
  xx[1094] = xx[70] * xx[95] - xx[61] * xx[90];
  xx[1095] = xx[99] * xx[61];
  xx[1106] = - xx[1087];
  xx[1107] = xx[1094];
  xx[1108] = xx[1095];
  pm_math_cross3(xx + 1091, xx + 1106, xx + 1113);
  xx[1106] = xx[12] * (xx[1113] + xx[96] * xx[1087]) - xx[61];
  xx[1107] = xx[12] * (xx[1114] - xx[96] * xx[1094]);
  xx[1108] = (xx[1115] - xx[96] * xx[1095]) * xx[12] - xx[70];
  xx[1113] = xx[135];
  xx[1114] = - xx[137];
  xx[1115] = 1.814580273770204e-15;
  pm_math_cross3(xx + 1106, xx + 1113, xx + 1116);
  pm_math_quatXform(xx + 131, xx + 1116, xx + 1106);
  xx[1116] = - (xx[70] * xx[260]);
  xx[1117] = xx[70] * xx[258] + xx[61] * xx[261];
  xx[1118] = xx[61] * xx[260];
  pm_math_quatXform(xx + 76, xx + 1116, xx + 1119);
  xx[1116] = xx[1119] + xx[231];
  xx[1117] = xx[1120] + xx[245] - xx[98];
  xx[1118] = xx[1121] - xx[107];
  pm_math_quatXform(xx + 123, xx + 1116, xx + 1119);
  xx[107] = xx[1106] + xx[1119];
  xx[132] = xx[139] / xx[250];
  xx[133] = xx[52] * xx[132];
  xx[231] = xx[133] * xx[95];
  xx[1087] = xx[99] * xx[133];
  xx[1094] = xx[133] - (xx[231] * xx[95] + xx[99] * xx[1087]) * xx[12];
  xx[133] = (xx[96] * xx[1087] + xx[231] * xx[90]) * xx[12];
  xx[1095] = (xx[107] - (xx[70] * xx[1094] + xx[61] * xx[133])) / xx[359];
  xx[1116] = - (xx[1095] * xx[342] - xx[133]);
  xx[1117] = xx[12] * (xx[1087] * xx[90] - xx[96] * xx[231]) - xx[425] * xx[1095];
  xx[1118] = xx[1094] + xx[307] * xx[1095];
  pm_math_quatXform(xx + 76, xx + 1116, xx + 1122);
  xx[1116] = - (xx[294] * xx[1095]);
  xx[1117] = - (xx[297] * xx[1095]);
  xx[1118] = - (xx[1095] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 1116, xx + 1136);
  pm_math_cross3(xx + 460, xx + 1136, xx + 1116);
  xx[133] = xx[1122] + xx[1116];
  xx[231] = xx[1123] + xx[1117];
  xx[1087] = xx[1124] + xx[1118];
  xx[1116] = xx[133];
  xx[1117] = xx[231];
  xx[1118] = xx[1087];
  pm_math_quatCompose(xx + 76, xx + 100, xx + 1169);
  pm_math_quatCompose(xx + 123, xx + 1169, xx + 1173);
  pm_math_quatInverseXform(xx + 1169, xx + 315, xx + 1122);
  pm_math_cross3(xx + 1122, xx + 1113, xx + 1142);
  pm_math_quatXform(xx + 1173, xx + 1142, xx + 1122);
  pm_math_quatXform(xx + 76, xx + 275, xx + 1142);
  xx[1177] = xx[1142] - xx[196];
  xx[1178] = xx[1143] - xx[188];
  xx[1179] = xx[1144] - xx[190];
  pm_math_cross3(xx + 315, xx + 1177, xx + 1142);
  pm_math_quatXform(xx + 53, xx + 1142, xx + 1180);
  xx[1142] = xx[1180] + xx[482];
  xx[1143] = xx[1181] + xx[483];
  xx[1144] = xx[1182] + xx[484];
  pm_math_quatXform(xx + 119, xx + 1142, xx + 482);
  xx[188] = xx[1122] + xx[482];
  pm_math_quatInverseXform(xx + 1169, xx + 478, xx + 1142);
  pm_math_cross3(xx + 1142, xx + 1113, xx + 1180);
  pm_math_quatXform(xx + 1173, xx + 1180, xx + 1142);
  pm_math_cross3(xx + 478, xx + 1177, xx + 1180);
  pm_math_quatXform(xx + 53, xx + 1180, xx + 1183);
  xx[1180] = xx[1183] + xx[527];
  xx[1181] = xx[1184] + xx[528];
  xx[1182] = xx[1185] + xx[529];
  pm_math_quatXform(xx + 119, xx + 1180, xx + 527);
  xx[190] = xx[1142] + xx[527];
  pm_math_quatInverseXform(xx + 1169, xx + 495, xx + 1180);
  pm_math_cross3(xx + 1180, xx + 1113, xx + 1183);
  pm_math_quatXform(xx + 1173, xx + 1183, xx + 1180);
  pm_math_cross3(xx + 495, xx + 1177, xx + 1173);
  pm_math_quatXform(xx + 53, xx + 1173, xx + 1183);
  xx[1173] = xx[1183] + xx[488];
  xx[1174] = xx[1184] + xx[489];
  xx[1175] = xx[1185] + xx[490];
  pm_math_quatXform(xx + 119, xx + 1173, xx + 488);
  xx[196] = xx[1180] + xx[488];
  xx[1173] = - (pm_math_dot3(xx + 315, xx + 1116) + pm_math_dot3(xx + 443, xx +
    1136) + xx[188]);
  xx[1174] = - (pm_math_dot3(xx + 478, xx + 1116) + pm_math_dot3(xx + 485, xx +
    1136) + xx[190]);
  xx[1175] = - (pm_math_dot3(xx + 495, xx + 1116) + pm_math_dot3(xx + 504, xx +
    1136) + xx[196]);
  solveSymmetricPosDef(xx + 518, xx + 1173, 3, 1, xx + 1116, xx + 1183);
  xx[1173] = xx[133] + xx[358] * xx[1116] + xx[422] * xx[1117] + xx[510] * xx
    [1118];
  xx[1174] = xx[231] + xx[360] * xx[1116] + xx[426] * xx[1117] + xx[511] * xx
    [1118];
  xx[1175] = xx[1087] + xx[361] * xx[1116] + xx[428] * xx[1117] + xx[498] * xx
    [1118];
  pm_math_quatXform(xx + 53, xx + 1173, xx + 1183);
  xx[1173] = xx[1136] + xx[363] * xx[1116] + xx[446] * xx[1117] + xx[499] * xx
    [1118];
  xx[1174] = xx[1137] + xx[365] * xx[1116] + xx[457] * xx[1117] + xx[500] * xx
    [1118];
  xx[1175] = xx[1138] + xx[371] * xx[1116] + xx[458] * xx[1117] + xx[512] * xx
    [1118];
  pm_math_quatXform(xx + 53, xx + 1173, xx + 1136);
  pm_math_cross3(xx + 539, xx + 1136, xx + 1173);
  xx[133] = xx[1183] + xx[1173];
  xx[231] = xx[1184] + xx[1174];
  xx[1087] = xx[1185] + xx[1175];
  xx[1173] = xx[133];
  xx[1174] = xx[231];
  xx[1175] = xx[1087];
  pm_math_quatCompose(xx + 53, xx + 1169, xx + 1183);
  pm_math_quatCompose(xx + 119, xx + 1183, xx + 1187);
  pm_math_quatInverseXform(xx + 1183, xx + 554, xx + 1191);
  pm_math_cross3(xx + 1191, xx + 1113, xx + 1194);
  pm_math_quatXform(xx + 1187, xx + 1194, xx + 1191);
  pm_math_quatXform(xx + 53, xx + 1177, xx + 1194);
  xx[1197] = xx[1194] + xx[189];
  xx[1198] = xx[1195] + xx[194];
  xx[1199] = xx[1196] + xx[195];
  pm_math_cross3(xx + 554, xx + 1197, xx + 1194);
  pm_math_quatXform(xx + 8, xx + 1194, xx + 1200);
  xx[1194] = xx[1200] + xx[636];
  xx[1195] = xx[1201] + xx[637];
  xx[1196] = xx[1202] + xx[638];
  pm_math_quatXform(xx + 115, xx + 1194, xx + 636);
  xx[189] = xx[1191] + xx[636];
  pm_math_quatInverseXform(xx + 1183, xx + 624, xx + 1194);
  pm_math_cross3(xx + 1194, xx + 1113, xx + 1200);
  pm_math_quatXform(xx + 1187, xx + 1200, xx + 1194);
  pm_math_cross3(xx + 624, xx + 1197, xx + 1200);
  pm_math_quatXform(xx + 8, xx + 1200, xx + 1203);
  xx[1200] = xx[1203] + xx[681];
  xx[1201] = xx[1204] + xx[682];
  xx[1202] = xx[1205] + xx[683];
  pm_math_quatXform(xx + 115, xx + 1200, xx + 681);
  xx[194] = xx[1194] + xx[681];
  pm_math_quatInverseXform(xx + 1183, xx + 649, xx + 1200);
  pm_math_cross3(xx + 1200, xx + 1113, xx + 1203);
  pm_math_quatXform(xx + 1187, xx + 1203, xx + 1200);
  pm_math_cross3(xx + 649, xx + 1197, xx + 1187);
  pm_math_quatXform(xx + 8, xx + 1187, xx + 1203);
  xx[1187] = xx[1203] + xx[642];
  xx[1188] = xx[1204] + xx[643];
  xx[1189] = xx[1205] + xx[644];
  pm_math_quatXform(xx + 115, xx + 1187, xx + 642);
  xx[195] = xx[1200] + xx[642];
  xx[1187] = - (pm_math_dot3(xx + 554, xx + 1173) + pm_math_dot3(xx + 572, xx +
    1136) + xx[189]);
  xx[1188] = - (pm_math_dot3(xx + 624, xx + 1173) + pm_math_dot3(xx + 633, xx +
    1136) + xx[194]);
  xx[1189] = - (pm_math_dot3(xx + 649, xx + 1173) + pm_math_dot3(xx + 658, xx +
    1136) + xx[195]);
  solveSymmetricPosDef(xx + 672, xx + 1187, 3, 1, xx + 1173, xx + 1203);
  xx[1187] = xx[133] + xx[578] * xx[1173] + xx[639] * xx[1174] + xx[664] * xx
    [1175];
  xx[1188] = xx[231] + xx[579] * xx[1173] + xx[640] * xx[1174] + xx[665] * xx
    [1175];
  xx[1189] = xx[1087] + xx[557] * xx[1173] + xx[627] * xx[1174] + xx[652] * xx
    [1175];
  pm_math_quatXform(xx + 8, xx + 1187, xx + 1203);
  xx[1187] = xx[1136] + xx[559] * xx[1173] + xx[628] * xx[1174] + xx[653] * xx
    [1175];
  xx[1188] = xx[1137] + xx[580] * xx[1173] + xx[629] * xx[1174] + xx[654] * xx
    [1175];
  xx[1189] = xx[1138] + xx[608] * xx[1173] + xx[641] * xx[1174] + xx[666] * xx
    [1175];
  pm_math_quatXform(xx + 8, xx + 1187, xx + 1136);
  pm_math_cross3(xx + 209, xx + 1136, xx + 1187);
  pm_math_quatCompose(xx + 8, xx + 1183, xx + 1206);
  pm_math_quatCompose(xx + 145, xx + 1206, xx + 1210);
  xx[133] = xx[1207] * xx[1209];
  xx[145] = xx[1206] * xx[1208];
  xx[146] = xx[12] * (xx[133] - xx[145]);
  xx[147] = xx[1206] * xx[1207];
  xx[148] = xx[1208] * xx[1209];
  xx[231] = xx[1207] * xx[1207];
  xx[1087] = xx[1208] * xx[1208];
  xx[1136] = xx[146];
  xx[1137] = (xx[147] + xx[148]) * xx[12];
  xx[1138] = xx[172] - (xx[231] + xx[1087]) * xx[12];
  pm_math_cross3(xx + 1136, xx + 1113, xx + 1214);
  pm_math_quatXform(xx + 1210, xx + 1214, xx + 1136);
  pm_math_quatXform(xx + 8, xx + 1197, xx + 1210);
  xx[1094] = xx[1211] + xx[210];
  xx[1104] = xx[1210] + xx[209];
  xx[1109] = xx[1094] * xx[16] - xx[1104] * xx[15];
  xx[1134] = xx[12] * xx[16] * xx[1109] - xx[1094];
  xx[1155] = xx[1104] + xx[12] * xx[15] * xx[1109];
  xx[1109] = xx[1155] * xx[113];
  xx[1156] = xx[113] * xx[1134];
  xx[1160] = xx[1155] * xx[109] + xx[1134] * xx[104];
  xx[1210] = - xx[1109];
  xx[1211] = xx[1156];
  xx[1212] = - xx[1160];
  pm_math_cross3(xx + 214, xx + 1210, xx + 1213);
  xx[1164] = xx[1136] + xx[1134] + xx[12] * (xx[1213] - xx[1109] * xx[112]);
  xx[1109] = (xx[1205] + xx[1189] + xx[1164]) / xx[292];
  xx[1134] = xx[1109] * xx[10];
  xx[1165] = xx[1109] * xx[9];
  xx[1176] = xx[12] * (xx[8] * xx[1134] - xx[11] * xx[1165]);
  xx[1187] = (xx[8] * xx[1165] + xx[11] * xx[1134]) * xx[12];
  xx[1188] = (xx[9] * xx[1165] + xx[10] * xx[1134]) * xx[12] - xx[1109];
  xx[1203] = xx[1176];
  xx[1204] = - xx[1187];
  xx[1205] = xx[1188];
  xx[1134] = xx[1109] * xx[210];
  xx[1165] = xx[1109] * xx[209];
  xx[1189] = xx[11] * xx[1165];
  xx[1190] = xx[11] * xx[1134];
  xx[1210] = xx[9] * xx[1165] + xx[10] * xx[1134];
  xx[1216] = xx[1189];
  xx[1217] = xx[1190];
  xx[1218] = - xx[1210];
  pm_math_cross3(xx + 9, xx + 1216, xx + 1219);
  xx[1211] = xx[1134] + xx[12] * (xx[1219] - xx[8] * xx[1189]);
  xx[1134] = xx[12] * (xx[1220] - xx[8] * xx[1190]) - xx[1165];
  xx[1165] = (xx[1210] * xx[8] + xx[1221]) * xx[12];
  xx[1216] = xx[1211];
  xx[1217] = xx[1134];
  xx[1218] = xx[1165];
  xx[1189] = xx[1173] - (pm_math_dot3(xx + 431, xx + 1203) + pm_math_dot3(xx +
    605, xx + 1216));
  xx[1173] = xx[1174] - (pm_math_dot3(xx + 708, xx + 1203) + pm_math_dot3(xx +
    711, xx + 1216));
  xx[1174] = xx[1175] - (pm_math_dot3(xx + 714, xx + 1203) + pm_math_dot3(xx +
    717, xx + 1216));
  xx[1203] = xx[1176] - xx[355] * xx[1189] + xx[609] * xx[1173] + xx[646] * xx
    [1174];
  xx[1204] = xx[548] * xx[1189] - xx[1187] + xx[610] * xx[1173] + xx[647] * xx
    [1174];
  xx[1205] = xx[1188] - xx[551] * xx[1189] + xx[623] * xx[1173] - xx[648] * xx
    [1174];
  pm_math_quatInverseXform(xx + 53, xx + 1203, xx + 1216);
  pm_math_cross3(xx + 1203, xx + 539, xx + 1219);
  xx[1203] = xx[1211] - xx[439] * xx[1189] - xx[630] * xx[1173] - xx[655] * xx
    [1174] + xx[1219];
  xx[1204] = xx[1134] - xx[570] * xx[1189] + xx[631] * xx[1173] + xx[656] * xx
    [1174] + xx[1220];
  xx[1205] = xx[1165] + xx[571] * xx[1189] + xx[632] * xx[1173] - xx[657] * xx
    [1174] + xx[1221];
  pm_math_quatInverseXform(xx + 53, xx + 1203, xx + 1210);
  xx[1134] = xx[1116] - (pm_math_dot3(xx + 434, xx + 1216) + pm_math_dot3(xx +
    720, xx + 1210));
  xx[1116] = xx[1117] - (pm_math_dot3(xx + 543, xx + 1216) + pm_math_dot3(xx +
    728, xx + 1210));
  xx[1117] = xx[1118] - (pm_math_dot3(xx + 731, xx + 1216) + pm_math_dot3(xx +
    581, xx + 1210));
  xx[1203] = xx[1216] + xx[312] * xx[1134] + xx[384] * xx[1116] - xx[492] * xx
    [1117];
  xx[1204] = xx[1217] - xx[313] * xx[1134] + xx[390] * xx[1116] + xx[493] * xx
    [1117];
  xx[1205] = xx[1218] + xx[314] * xx[1134] - xx[391] * xx[1116] + xx[494] * xx
    [1117];
  pm_math_quatInverseXform(xx + 76, xx + 1203, xx + 1216);
  pm_math_cross3(xx + 1203, xx + 460, xx + 1219);
  xx[1203] = xx[1210] + xx[353] * xx[1134] - xx[394] * xx[1116] + xx[501] * xx
    [1117] + xx[1219];
  xx[1204] = xx[1211] - xx[354] * xx[1134] + xx[395] * xx[1116] - xx[502] * xx
    [1117] + xx[1220];
  xx[1205] = xx[1212] - xx[357] * xx[1134] + xx[397] * xx[1116] + xx[503] * xx
    [1117] + xx[1221];
  pm_math_quatInverseXform(xx + 76, xx + 1203, xx + 1210);
  xx[1118] = xx[1095] + pm_math_dot3(xx + 366, xx + 1216) + pm_math_dot3(xx +
    286, xx + 1210);
  xx[1095] = xx[1218] + xx[1118] * xx[70];
  xx[1203] = xx[1216] + xx[1118] * xx[61];
  xx[1204] = xx[1217];
  xx[1205] = xx[1095];
  pm_math_quatInverseXform(xx + 149, xx + 1203, xx + 1210);
  xx[1165] = xx[398] * xx[1212];
  xx[1175] = xx[220] * xx[1109] - xx[546] * xx[1189] - xx[547] * xx[1173] - xx
    [576] * xx[1174] - xx[237] * xx[1134] - xx[238] * xx[1116] - xx[441] * xx
    [1117] + xx[1118] * xx[227] + xx[221] * xx[1165];
  xx[1176] = xx[1107] + xx[1120];
  xx[1187] = (xx[143] - xx[137] * xx[131] * xx[134]) * xx[12] - xx[135];
  xx[134] = xx[1187] / xx[250];
  xx[135] = xx[52] * xx[134];
  xx[137] = xx[135] * xx[95];
  xx[1188] = xx[99] * xx[135];
  xx[1190] = xx[135] - (xx[137] * xx[95] + xx[99] * xx[1188]) * xx[12];
  xx[135] = (xx[96] * xx[1188] + xx[137] * xx[90]) * xx[12];
  xx[1210] = (xx[1176] - (xx[70] * xx[1190] + xx[61] * xx[135])) / xx[359];
  xx[1216] = - (xx[1210] * xx[342] - xx[135]);
  xx[1217] = xx[12] * (xx[1188] * xx[90] - xx[96] * xx[137]) - xx[425] * xx[1210];
  xx[1218] = xx[1190] + xx[307] * xx[1210];
  pm_math_quatXform(xx + 76, xx + 1216, xx + 1219);
  xx[1216] = - (xx[294] * xx[1210]);
  xx[1217] = - (xx[297] * xx[1210]);
  xx[1218] = - (xx[1210] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 1216, xx + 1222);
  pm_math_cross3(xx + 460, xx + 1222, xx + 1216);
  xx[135] = xx[1219] + xx[1216];
  xx[137] = xx[1220] + xx[1217];
  xx[1188] = xx[1221] + xx[1218];
  xx[1216] = xx[135];
  xx[1217] = xx[137];
  xx[1218] = xx[1188];
  xx[1190] = xx[1123] + xx[483];
  xx[1211] = xx[1143] + xx[528];
  xx[1212] = xx[1181] + xx[489];
  xx[1219] = - (pm_math_dot3(xx + 315, xx + 1216) + pm_math_dot3(xx + 443, xx +
    1222) + xx[1190]);
  xx[1220] = - (pm_math_dot3(xx + 478, xx + 1216) + pm_math_dot3(xx + 485, xx +
    1222) + xx[1211]);
  xx[1221] = - (pm_math_dot3(xx + 495, xx + 1216) + pm_math_dot3(xx + 504, xx +
    1222) + xx[1212]);
  solveSymmetricPosDef(xx + 518, xx + 1219, 3, 1, xx + 1216, xx + 1225);
  xx[1219] = xx[135] + xx[358] * xx[1216] + xx[422] * xx[1217] + xx[510] * xx
    [1218];
  xx[1220] = xx[137] + xx[360] * xx[1216] + xx[426] * xx[1217] + xx[511] * xx
    [1218];
  xx[1221] = xx[1188] + xx[361] * xx[1216] + xx[428] * xx[1217] + xx[498] * xx
    [1218];
  pm_math_quatXform(xx + 53, xx + 1219, xx + 1225);
  xx[1219] = xx[1222] + xx[363] * xx[1216] + xx[446] * xx[1217] + xx[499] * xx
    [1218];
  xx[1220] = xx[1223] + xx[365] * xx[1216] + xx[457] * xx[1217] + xx[500] * xx
    [1218];
  xx[1221] = xx[1224] + xx[371] * xx[1216] + xx[458] * xx[1217] + xx[512] * xx
    [1218];
  pm_math_quatXform(xx + 53, xx + 1219, xx + 1222);
  pm_math_cross3(xx + 539, xx + 1222, xx + 1219);
  xx[135] = xx[1225] + xx[1219];
  xx[137] = xx[1226] + xx[1220];
  xx[1188] = xx[1227] + xx[1221];
  xx[1219] = xx[135];
  xx[1220] = xx[137];
  xx[1221] = xx[1188];
  xx[1225] = xx[1192] + xx[637];
  xx[1226] = xx[1195] + xx[682];
  xx[1227] = xx[1201] + xx[643];
  xx[1228] = - (pm_math_dot3(xx + 554, xx + 1219) + pm_math_dot3(xx + 572, xx +
    1222) + xx[1225]);
  xx[1229] = - (pm_math_dot3(xx + 624, xx + 1219) + pm_math_dot3(xx + 633, xx +
    1222) + xx[1226]);
  xx[1230] = - (pm_math_dot3(xx + 649, xx + 1219) + pm_math_dot3(xx + 658, xx +
    1222) + xx[1227]);
  solveSymmetricPosDef(xx + 672, xx + 1228, 3, 1, xx + 1219, xx + 1231);
  xx[1228] = xx[135] + xx[578] * xx[1219] + xx[639] * xx[1220] + xx[664] * xx
    [1221];
  xx[1229] = xx[137] + xx[579] * xx[1219] + xx[640] * xx[1220] + xx[665] * xx
    [1221];
  xx[1230] = xx[1188] + xx[557] * xx[1219] + xx[627] * xx[1220] + xx[652] * xx
    [1221];
  pm_math_quatXform(xx + 8, xx + 1228, xx + 1231);
  xx[1228] = xx[1222] + xx[559] * xx[1219] + xx[628] * xx[1220] + xx[653] * xx
    [1221];
  xx[1229] = xx[1223] + xx[580] * xx[1219] + xx[629] * xx[1220] + xx[654] * xx
    [1221];
  xx[1230] = xx[1224] + xx[608] * xx[1219] + xx[641] * xx[1220] + xx[666] * xx
    [1221];
  pm_math_quatXform(xx + 8, xx + 1228, xx + 1222);
  pm_math_cross3(xx + 209, xx + 1222, xx + 1228);
  xx[135] = xx[1137] + xx[1155] + (xx[1156] * xx[112] + xx[1214]) * xx[12];
  xx[137] = (xx[1233] + xx[1230] + xx[135]) / xx[292];
  xx[1155] = xx[137] * xx[10];
  xx[1156] = xx[137] * xx[9];
  xx[1188] = xx[12] * (xx[8] * xx[1155] - xx[11] * xx[1156]);
  xx[1222] = (xx[8] * xx[1156] + xx[11] * xx[1155]) * xx[12];
  xx[1223] = (xx[9] * xx[1156] + xx[10] * xx[1155]) * xx[12] - xx[137];
  xx[1228] = xx[1188];
  xx[1229] = - xx[1222];
  xx[1230] = xx[1223];
  xx[1155] = xx[137] * xx[210];
  xx[1156] = xx[137] * xx[209];
  xx[1224] = xx[11] * xx[1156];
  xx[1231] = xx[11] * xx[1155];
  xx[1232] = xx[9] * xx[1156] + xx[10] * xx[1155];
  xx[1233] = xx[1224];
  xx[1234] = xx[1231];
  xx[1235] = - xx[1232];
  pm_math_cross3(xx + 9, xx + 1233, xx + 1236);
  xx[1233] = xx[1155] + xx[12] * (xx[1236] - xx[8] * xx[1224]);
  xx[1155] = xx[12] * (xx[1237] - xx[8] * xx[1231]) - xx[1156];
  xx[1156] = (xx[1232] * xx[8] + xx[1238]) * xx[12];
  xx[1234] = xx[1233];
  xx[1235] = xx[1155];
  xx[1236] = xx[1156];
  xx[1224] = xx[1219] - (pm_math_dot3(xx + 431, xx + 1228) + pm_math_dot3(xx +
    605, xx + 1234));
  xx[1219] = xx[1220] - (pm_math_dot3(xx + 708, xx + 1228) + pm_math_dot3(xx +
    711, xx + 1234));
  xx[1220] = xx[1221] - (pm_math_dot3(xx + 714, xx + 1228) + pm_math_dot3(xx +
    717, xx + 1234));
  xx[1228] = xx[1188] - xx[355] * xx[1224] + xx[609] * xx[1219] + xx[646] * xx
    [1220];
  xx[1229] = xx[548] * xx[1224] - xx[1222] + xx[610] * xx[1219] + xx[647] * xx
    [1220];
  xx[1230] = xx[1223] - xx[551] * xx[1224] + xx[623] * xx[1219] - xx[648] * xx
    [1220];
  pm_math_quatInverseXform(xx + 53, xx + 1228, xx + 1221);
  pm_math_cross3(xx + 1228, xx + 539, xx + 1234);
  xx[1228] = xx[1233] - xx[439] * xx[1224] - xx[630] * xx[1219] - xx[655] * xx
    [1220] + xx[1234];
  xx[1229] = xx[1155] - xx[570] * xx[1224] + xx[631] * xx[1219] + xx[656] * xx
    [1220] + xx[1235];
  xx[1230] = xx[1156] + xx[571] * xx[1224] + xx[632] * xx[1219] - xx[657] * xx
    [1220] + xx[1236];
  pm_math_quatInverseXform(xx + 53, xx + 1228, xx + 1231);
  xx[1155] = xx[1216] - (pm_math_dot3(xx + 434, xx + 1221) + pm_math_dot3(xx +
    720, xx + 1231));
  xx[1156] = xx[1217] - (pm_math_dot3(xx + 543, xx + 1221) + pm_math_dot3(xx +
    728, xx + 1231));
  xx[1188] = xx[1218] - (pm_math_dot3(xx + 731, xx + 1221) + pm_math_dot3(xx +
    581, xx + 1231));
  xx[1216] = xx[1221] + xx[312] * xx[1155] + xx[384] * xx[1156] - xx[492] * xx
    [1188];
  xx[1217] = xx[1222] - xx[313] * xx[1155] + xx[390] * xx[1156] + xx[493] * xx
    [1188];
  xx[1218] = xx[1223] + xx[314] * xx[1155] - xx[391] * xx[1156] + xx[494] * xx
    [1188];
  pm_math_quatInverseXform(xx + 76, xx + 1216, xx + 1221);
  pm_math_cross3(xx + 1216, xx + 460, xx + 1228);
  xx[1216] = xx[1231] + xx[353] * xx[1155] - xx[394] * xx[1156] + xx[501] * xx
    [1188] + xx[1228];
  xx[1217] = xx[1232] - xx[354] * xx[1155] + xx[395] * xx[1156] - xx[502] * xx
    [1188] + xx[1229];
  xx[1218] = xx[1233] - xx[357] * xx[1155] + xx[397] * xx[1156] + xx[503] * xx
    [1188] + xx[1230];
  pm_math_quatInverseXform(xx + 76, xx + 1216, xx + 1228);
  xx[1216] = xx[1210] + pm_math_dot3(xx + 366, xx + 1221) + pm_math_dot3(xx +
    286, xx + 1228);
  xx[1210] = xx[1223] + xx[1216] * xx[70];
  xx[1228] = xx[1221] + xx[1216] * xx[61];
  xx[1229] = xx[1222];
  xx[1230] = xx[1210];
  pm_math_quatInverseXform(xx + 149, xx + 1228, xx + 1221);
  xx[1217] = xx[398] * xx[1223];
  xx[1218] = xx[220] * xx[137] - xx[546] * xx[1224] - xx[547] * xx[1219] - xx
    [576] * xx[1220] - xx[237] * xx[1155] - xx[238] * xx[1156] - xx[441] * xx
    [1188] + xx[1216] * xx[227] + xx[221] * xx[1217];
  xx[1106] = xx[1108] + xx[1121];
  xx[142] = (xx[131] * xx[138] + xx[144]) * xx[12];
  xx[131] = xx[142] / xx[250];
  xx[138] = xx[52] * xx[131];
  xx[143] = xx[138] * xx[95];
  xx[144] = xx[99] * xx[138];
  xx[1107] = xx[138] - (xx[143] * xx[95] + xx[99] * xx[144]) * xx[12];
  xx[138] = (xx[96] * xx[144] + xx[143] * xx[90]) * xx[12];
  xx[1108] = (xx[1106] - (xx[70] * xx[1107] + xx[61] * xx[138])) / xx[359];
  xx[1119] = - (xx[1108] * xx[342] - xx[138]);
  xx[1120] = xx[12] * (xx[144] * xx[90] - xx[96] * xx[143]) - xx[425] * xx[1108];
  xx[1121] = xx[1107] + xx[307] * xx[1108];
  pm_math_quatXform(xx + 76, xx + 1119, xx + 1221);
  xx[1119] = - (xx[294] * xx[1108]);
  xx[1120] = - (xx[297] * xx[1108]);
  xx[1121] = - (xx[1108] * xx[300]);
  pm_math_quatXform(xx + 76, xx + 1119, xx + 1231);
  pm_math_cross3(xx + 460, xx + 1231, xx + 1119);
  xx[138] = xx[1221] + xx[1119];
  xx[143] = xx[1222] + xx[1120];
  xx[144] = xx[1223] + xx[1121];
  xx[1119] = xx[138];
  xx[1120] = xx[143];
  xx[1121] = xx[144];
  xx[482] = xx[1124] + xx[484];
  xx[483] = xx[1144] + xx[529];
  xx[484] = xx[1182] + xx[490];
  xx[488] = - (pm_math_dot3(xx + 315, xx + 1119) + pm_math_dot3(xx + 443, xx +
    1231) + xx[482]);
  xx[489] = - (pm_math_dot3(xx + 478, xx + 1119) + pm_math_dot3(xx + 485, xx +
    1231) + xx[483]);
  xx[490] = - (pm_math_dot3(xx + 495, xx + 1119) + pm_math_dot3(xx + 504, xx +
    1231) + xx[484]);
  solveSymmetricPosDef(xx + 518, xx + 488, 3, 1, xx + 527, xx + 1119);
  xx[488] = xx[138] + xx[358] * xx[527] + xx[422] * xx[528] + xx[510] * xx[529];
  xx[489] = xx[143] + xx[360] * xx[527] + xx[426] * xx[528] + xx[511] * xx[529];
  xx[490] = xx[144] + xx[361] * xx[527] + xx[428] * xx[528] + xx[498] * xx[529];
  pm_math_quatXform(xx + 53, xx + 488, xx + 1119);
  xx[488] = xx[1231] + xx[363] * xx[527] + xx[446] * xx[528] + xx[499] * xx[529];
  xx[489] = xx[1232] + xx[365] * xx[527] + xx[457] * xx[528] + xx[500] * xx[529];
  xx[490] = xx[1233] + xx[371] * xx[527] + xx[458] * xx[528] + xx[512] * xx[529];
  pm_math_quatXform(xx + 53, xx + 488, xx + 1122);
  pm_math_cross3(xx + 539, xx + 1122, xx + 488);
  xx[138] = xx[1119] + xx[488];
  xx[143] = xx[1120] + xx[489];
  xx[144] = xx[1121] + xx[490];
  xx[488] = xx[138];
  xx[489] = xx[143];
  xx[490] = xx[144];
  xx[636] = xx[1193] + xx[638];
  xx[637] = xx[1196] + xx[683];
  xx[638] = xx[1202] + xx[644];
  xx[642] = - (pm_math_dot3(xx + 554, xx + 488) + pm_math_dot3(xx + 572, xx +
    1122) + xx[636]);
  xx[643] = - (pm_math_dot3(xx + 624, xx + 488) + pm_math_dot3(xx + 633, xx +
    1122) + xx[637]);
  xx[644] = - (pm_math_dot3(xx + 649, xx + 488) + pm_math_dot3(xx + 658, xx +
    1122) + xx[638]);
  solveSymmetricPosDef(xx + 672, xx + 642, 3, 1, xx + 488, xx + 681);
  xx[642] = xx[138] + xx[578] * xx[488] + xx[639] * xx[489] + xx[664] * xx[490];
  xx[643] = xx[143] + xx[579] * xx[488] + xx[640] * xx[489] + xx[665] * xx[490];
  xx[644] = xx[144] + xx[557] * xx[488] + xx[627] * xx[489] + xx[652] * xx[490];
  pm_math_quatXform(xx + 8, xx + 642, xx + 681);
  xx[642] = xx[1122] + xx[559] * xx[488] + xx[628] * xx[489] + xx[653] * xx[490];
  xx[643] = xx[1123] + xx[580] * xx[488] + xx[629] * xx[489] + xx[654] * xx[490];
  xx[644] = xx[1124] + xx[608] * xx[488] + xx[641] * xx[489] + xx[666] * xx[490];
  pm_math_quatXform(xx + 8, xx + 642, xx + 1119);
  pm_math_cross3(xx + 209, xx + 1119, xx + 642);
  xx[138] = xx[1138] + (xx[1215] - xx[1160] * xx[112]) * xx[12];
  xx[143] = (xx[683] + xx[644] + xx[138]) / xx[292];
  xx[144] = xx[143] * xx[10];
  xx[642] = xx[143] * xx[9];
  xx[643] = xx[12] * (xx[8] * xx[144] - xx[11] * xx[642]);
  xx[644] = (xx[8] * xx[642] + xx[11] * xx[144]) * xx[12];
  xx[681] = (xx[9] * xx[642] + xx[10] * xx[144]) * xx[12] - xx[143];
  xx[1119] = xx[643];
  xx[1120] = - xx[644];
  xx[1121] = xx[681];
  xx[144] = xx[143] * xx[210];
  xx[642] = xx[143] * xx[209];
  xx[682] = xx[11] * xx[642];
  xx[683] = xx[11] * xx[144];
  xx[1107] = xx[9] * xx[642] + xx[10] * xx[144];
  xx[1122] = xx[682];
  xx[1123] = xx[683];
  xx[1124] = - xx[1107];
  pm_math_cross3(xx + 9, xx + 1122, xx + 1136);
  xx[1122] = xx[144] + xx[12] * (xx[1136] - xx[8] * xx[682]);
  xx[144] = xx[12] * (xx[1137] - xx[8] * xx[683]) - xx[642];
  xx[642] = (xx[1107] * xx[8] + xx[1138]) * xx[12];
  xx[1136] = xx[1122];
  xx[1137] = xx[144];
  xx[1138] = xx[642];
  xx[682] = xx[488] - (pm_math_dot3(xx + 431, xx + 1119) + pm_math_dot3(xx + 605,
    xx + 1136));
  xx[488] = xx[489] - (pm_math_dot3(xx + 708, xx + 1119) + pm_math_dot3(xx + 711,
    xx + 1136));
  xx[489] = xx[490] - (pm_math_dot3(xx + 714, xx + 1119) + pm_math_dot3(xx + 717,
    xx + 1136));
  xx[1119] = xx[643] - xx[355] * xx[682] + xx[609] * xx[488] + xx[646] * xx[489];
  xx[1120] = xx[548] * xx[682] - xx[644] + xx[610] * xx[488] + xx[647] * xx[489];
  xx[1121] = xx[681] - xx[551] * xx[682] + xx[623] * xx[488] - xx[648] * xx[489];
  pm_math_quatInverseXform(xx + 53, xx + 1119, xx + 1136);
  pm_math_cross3(xx + 1119, xx + 539, xx + 1142);
  xx[1119] = xx[1122] - xx[439] * xx[682] - xx[630] * xx[488] - xx[655] * xx[489]
    + xx[1142];
  xx[1120] = xx[144] - xx[570] * xx[682] + xx[631] * xx[488] + xx[656] * xx[489]
    + xx[1143];
  xx[1121] = xx[642] + xx[571] * xx[682] + xx[632] * xx[488] - xx[657] * xx[489]
    + xx[1144];
  pm_math_quatInverseXform(xx + 53, xx + 1119, xx + 642);
  xx[144] = xx[527] - (pm_math_dot3(xx + 434, xx + 1136) + pm_math_dot3(xx + 720,
    xx + 642));
  xx[490] = xx[528] - (pm_math_dot3(xx + 543, xx + 1136) + pm_math_dot3(xx + 728,
    xx + 642));
  xx[527] = xx[529] - (pm_math_dot3(xx + 731, xx + 1136) + pm_math_dot3(xx + 581,
    xx + 642));
  xx[1119] = xx[1136] + xx[312] * xx[144] + xx[384] * xx[490] - xx[492] * xx[527];
  xx[1120] = xx[1137] - xx[313] * xx[144] + xx[390] * xx[490] + xx[493] * xx[527];
  xx[1121] = xx[1138] + xx[314] * xx[144] - xx[391] * xx[490] + xx[494] * xx[527];
  pm_math_quatInverseXform(xx + 76, xx + 1119, xx + 1122);
  pm_math_cross3(xx + 1119, xx + 460, xx + 1136);
  xx[1119] = xx[642] + xx[353] * xx[144] - xx[394] * xx[490] + xx[501] * xx[527]
    + xx[1136];
  xx[1120] = xx[643] - xx[354] * xx[144] + xx[395] * xx[490] - xx[502] * xx[527]
    + xx[1137];
  xx[1121] = xx[644] - xx[357] * xx[144] + xx[397] * xx[490] + xx[503] * xx[527]
    + xx[1138];
  pm_math_quatInverseXform(xx + 76, xx + 1119, xx + 642);
  xx[528] = xx[1108] + pm_math_dot3(xx + 366, xx + 1122) + pm_math_dot3(xx + 286,
    xx + 642);
  xx[529] = xx[1124] + xx[528] * xx[70];
  xx[642] = xx[1122] + xx[528] * xx[61];
  xx[643] = xx[1123];
  xx[644] = xx[529];
  pm_math_quatInverseXform(xx + 149, xx + 642, xx + 1119);
  xx[681] = xx[398] * xx[1121];
  xx[683] = xx[220] * xx[143] - xx[546] * xx[682] - xx[547] * xx[488] - xx[576] *
    xx[489] - xx[237] * xx[144] - xx[238] * xx[490] - xx[441] * xx[527] + xx[528]
    * xx[227] + xx[221] * xx[681];
  xx[1107] = xx[229] * xx[176] - xx[877] * xx[234] - xx[878] * xx[235] - xx[879]
    * xx[243] - xx[864] * xx[177] - xx[869] * xx[219] - xx[870] * xx[247] + xx
    [248] * xx[179] + xx[785] * xx[223] + xx[178] * xx[249] + xx[745] * xx[507]
    + xx[753] * xx[508] + xx[867] * xx[509];
  xx[1108] = xx[229] * xx[908] - xx[877] * xx[943] - xx[878] * xx[881] - xx[879]
    * xx[882] - xx[864] * xx[883] - xx[869] * xx[725] - xx[870] * xx[726] - xx
    [179] * xx[727] + xx[785] * xx[909];
  xx[1119] = xx[229] * xx[911] - xx[877] * xx[959] - xx[878] * xx[961] - xx[879]
    * xx[962] - xx[864] * xx[933] - xx[869] * xx[950] - xx[870] * xx[951] - xx
    [179] * xx[952] + xx[785] * xx[953];
  xx[1120] = xx[229] * xx[684] - xx[877] * xx[913] - xx[878] * xx[885] - xx[879]
    * xx[886] - xx[864] * xx[790] - xx[869] * xx[688] - xx[870] * xx[689] - xx
    [179] * xx[690] + xx[785] * xx[887];
  xx[1121] = xx[229] * xx[974] - xx[877] * xx[1037] - xx[878] * xx[971] - xx[879]
    * xx[972] - xx[864] * xx[973] - xx[869] * xx[944] - xx[870] * xx[945] - xx
    [179] * xx[946] + xx[785] * xx[1003];
  xx[1122] = xx[229] * xx[1004] - xx[877] * xx[1053] - xx[878] * xx[1055] - xx
    [879] * xx[1056] - xx[864] * xx[1006] - xx[869] * xx[1038] - xx[870] * xx
    [1045] - xx[179] * xx[1046] + xx[785] * xx[1047];
  xx[1123] = xx[229] * xx[917] - xx[877] * xx[1008] - xx[878] * xx[984] - xx[879]
    * xx[985] - xx[864] * xx[922] - xx[869] * xx[928] - xx[870] * xx[929] - xx
    [179] * xx[930] + xx[785] * xx[986];
  xx[1124] = xx[229] * xx[1125] - xx[877] * xx[1141] - xx[878] * xx[1074] - xx
    [879] * xx[1075] - xx[864] * xx[1076] - xx[869] * xx[1061] - xx[870] * xx
    [1062] + xx[1063] * xx[179] + xx[785] * xx[1102];
  xx[1136] = xx[229] * xx[1007] - xx[877] * xx[1157] - xx[878] * xx[1158] - xx
    [879] * xx[1159] - xx[864] * xx[1132] - xx[869] * xx[1133] - xx[870] * xx
    [1140] + xx[1150] * xx[179] + xx[785] * xx[1151];
  xx[1137] = xx[229] * xx[1023] - xx[877] * xx[1105] - xx[878] * xx[1078] - xx
    [879] * xx[1079] - xx[864] * xx[1025] - xx[869] * xx[1042] - xx[870] * xx
    [1043] + xx[1044] * xx[179] + xx[785] * xx[1080];
  xx[1138] = xx[229] * xx[1109] - xx[877] * xx[1189] - xx[878] * xx[1173] - xx
    [879] * xx[1174] - xx[864] * xx[1134] - xx[869] * xx[1116] - xx[870] * xx
    [1117] + xx[1118] * xx[179] + xx[785] * xx[1165];
  xx[1142] = xx[229] * xx[137] - xx[877] * xx[1224] - xx[878] * xx[1219] - xx
    [879] * xx[1220] - xx[864] * xx[1155] - xx[869] * xx[1156] - xx[870] * xx
    [1188] + xx[179] * xx[1216] + xx[785] * xx[1217];
  xx[1143] = xx[229] * xx[143] - xx[877] * xx[682] - xx[878] * xx[488] - xx[879]
    * xx[489] - xx[864] * xx[144] - xx[869] * xx[490] - xx[870] * xx[527] + xx
    [179] * xx[528] + xx[785] * xx[681];
  xx[1144] = xx[175] * xx[908] - xx[468] * xx[943] - xx[513] * xx[881] - xx[514]
    * xx[882] - xx[244] * xx[883] - xx[466] * xx[725] - xx[467] * xx[726] - xx
    [226] * xx[727] + xx[909] * xx[233];
  xx[909] = xx[175] * xx[911] - xx[468] * xx[959] - xx[513] * xx[961] - xx[514] *
    xx[962] - xx[244] * xx[933] - xx[466] * xx[950] - xx[467] * xx[951] - xx[226]
    * xx[952] + xx[953] * xx[233];
  xx[953] = xx[175] * xx[684] - xx[468] * xx[913] - xx[513] * xx[885] - xx[514] *
    xx[886] - xx[244] * xx[790] - xx[466] * xx[688] - xx[467] * xx[689] - xx[226]
    * xx[690] + xx[887] * xx[233];
  xx[887] = xx[175] * xx[974] - xx[468] * xx[1037] - xx[513] * xx[971] - xx[514]
    * xx[972] - xx[244] * xx[973] - xx[466] * xx[944] - xx[467] * xx[945] - xx
    [226] * xx[946] + xx[1003] * xx[233];
  xx[1003] = xx[175] * xx[1004] - xx[468] * xx[1053] - xx[513] * xx[1055] - xx
    [514] * xx[1056] - xx[244] * xx[1006] - xx[466] * xx[1038] - xx[467] * xx
    [1045] - xx[226] * xx[1046] + xx[1047] * xx[233];
  xx[1047] = xx[175] * xx[917] - xx[468] * xx[1008] - xx[513] * xx[984] - xx[514]
    * xx[985] - xx[244] * xx[922] - xx[466] * xx[928] - xx[467] * xx[929] - xx
    [226] * xx[930] + xx[986] * xx[233];
  xx[986] = xx[175] * xx[1125] - xx[468] * xx[1141] - xx[513] * xx[1074] - xx
    [514] * xx[1075] - xx[244] * xx[1076] - xx[466] * xx[1061] - xx[467] * xx
    [1062] + xx[1063] * xx[226] + xx[1102] * xx[233];
  xx[1102] = xx[175] * xx[1007] - xx[468] * xx[1157] - xx[513] * xx[1158] - xx
    [514] * xx[1159] - xx[244] * xx[1132] - xx[466] * xx[1133] - xx[467] * xx
    [1140] + xx[1150] * xx[226] + xx[1151] * xx[233];
  xx[1151] = xx[175] * xx[1023] - xx[468] * xx[1105] - xx[513] * xx[1078] - xx
    [514] * xx[1079] - xx[244] * xx[1025] - xx[466] * xx[1042] - xx[467] * xx
    [1043] + xx[1044] * xx[226] + xx[1080] * xx[233];
  xx[1080] = xx[175] * xx[1109] - xx[468] * xx[1189] - xx[513] * xx[1173] - xx
    [514] * xx[1174] - xx[244] * xx[1134] - xx[466] * xx[1116] - xx[467] * xx
    [1117] + xx[1118] * xx[226] + xx[1165] * xx[233];
  xx[1160] = xx[175] * xx[137] - xx[468] * xx[1224] - xx[513] * xx[1219] - xx
    [514] * xx[1220] - xx[244] * xx[1155] - xx[466] * xx[1156] - xx[467] * xx
    [1188] + xx[226] * xx[1216] + xx[1217] * xx[233];
  xx[1165] = xx[175] * xx[143] - xx[468] * xx[682] - xx[513] * xx[488] - xx[514]
    * xx[489] - xx[244] * xx[144] - xx[466] * xx[490] - xx[467] * xx[527] + xx
    [226] * xx[528] + xx[681] * xx[233];
  xx[681] = xx[13] * state[37];
  xx[1180] = cos(xx[681]);
  xx[1181] = 0.5213356043991501;
  xx[1182] = xx[13] * input[4];
  xx[1191] = sin(xx[1182]);
  xx[1192] = 0.5213320045418294;
  xx[1193] = cos(xx[1182]);
  xx[1182] = xx[1181] * xx[1191] - xx[1192] * xx[1193];
  xx[1194] = xx[1180] * xx[1182];
  xx[1195] = xx[1181] * xx[1193] + xx[1192] * xx[1191];
  xx[1181] = sin(xx[681]);
  xx[681] = xx[1195] * xx[1181];
  xx[1192] = 0.4777127677746755;
  xx[1196] = 0.4777160664361521;
  xx[1200] = xx[1192] * xx[1193] - xx[1196] * xx[1191];
  xx[1201] = xx[1196] * xx[1193] + xx[1192] * xx[1191];
  xx[1191] = xx[1200] * xx[1180] - xx[1181] * xx[1201];
  xx[1192] = - xx[1191];
  xx[1193] = xx[1200] * xx[1181] + xx[1180] * xx[1201];
  xx[1196] = xx[1181] * xx[1182] - xx[1195] * xx[1180];
  xx[1231] = xx[1194] + xx[681];
  xx[1232] = xx[1192];
  xx[1233] = xx[1193];
  xx[1234] = xx[1196];
  xx[1235] = - state[39];
  xx[1236] = state[40];
  xx[1237] = state[41];
  xx[1238] = state[42];
  xx[1239] = 0.6922503171601047;
  xx[1240] = 0.05225910071601877;
  xx[1241] = 0.07027431878881255;
  xx[1242] = 0.7163239524843881;
  pm_math_quatComposeInverse(xx + 1235, xx + 1239, xx + 1243);
  pm_math_quatCompose(xx + 1231, xx + 1243, xx + 1235);
  xx[1202] = xx[1244] * xx[1246];
  xx[1213] = xx[1243] * xx[1245];
  xx[1214] = xx[12] * (xx[1202] - xx[1213]);
  xx[1215] = xx[1243] * xx[1244];
  xx[1217] = xx[1245] * xx[1246];
  xx[1221] = (xx[1215] + xx[1217]) * xx[12];
  xx[1222] = xx[1244] * xx[1244];
  xx[1223] = xx[1245] * xx[1245];
  xx[1231] = (xx[1222] + xx[1223]) * xx[12];
  xx[1232] = xx[1214];
  xx[1233] = xx[1221];
  xx[1234] = xx[172] - xx[1231];
  xx[1247] = 7.06960023037889e-8;
  xx[1248] = 0.05845498436580776;
  xx[1249] = 2.575015558411529e-7;
  pm_math_cross3(xx + 1232, xx + 1247, xx + 1250);
  pm_math_quatXform(xx + 1235, xx + 1250, xx + 1232);
  xx[1235] = 7.068391728530681e-8;
  xx[1236] = 0.05844501563393761;
  xx[1237] = - 2.574148655368551e-7;
  pm_math_quatXform(xx + 1243, xx + 1235, xx + 1250);
  xx[1238] = xx[1251] * xx[1181] - xx[1180] * xx[1250];
  xx[1253] = xx[12] * xx[1181] * xx[1238] - xx[1251];
  xx[1254] = - xx[1195];
  xx[1255] = - xx[1201];
  xx[1256] = xx[1182];
  xx[1257] = xx[1254];
  xx[1258] = xx[1255];
  xx[1259] = xx[1250] + xx[12] * xx[1180] * xx[1238];
  xx[1238] = xx[1259] * xx[1201];
  xx[1260] = xx[1201] * xx[1253];
  xx[1261] = xx[1259] * xx[1182] + xx[1195] * xx[1253];
  xx[1262] = xx[1238];
  xx[1263] = - xx[1260];
  xx[1264] = xx[1261];
  pm_math_cross3(xx + 1256, xx + 1262, xx + 1265);
  xx[1262] = xx[1232] + xx[1253] + xx[12] * (xx[1265] + xx[1200] * xx[1238]);
  xx[1268] = state[39];
  xx[1269] = state[40];
  xx[1270] = state[41];
  xx[1271] = state[42];
  pm_math_quatCompose(xx + 1239, xx + 1268, xx + 1272);
  xx[1238] = xx[1274] * xx[1274];
  xx[1239] = xx[1275] * xx[1275];
  xx[1240] = (xx[1238] + xx[1239]) * xx[12] - xx[172];
  xx[1241] = xx[1272] * xx[1275];
  xx[1242] = xx[1273] * xx[1274];
  xx[1253] = (xx[1241] + xx[1242]) * xx[12];
  xx[1263] = xx[1272] * xx[1274];
  xx[1264] = xx[1273] * xx[1275];
  xx[1276] = xx[12] * (xx[1263] - xx[1264]);
  xx[1277] = xx[1240];
  xx[1278] = - xx[1253];
  xx[1279] = xx[1276];
  xx[1280] = 2.686981344948006e-5;
  xx[1281] = xx[1240] * xx[1280];
  xx[1240] = 2.206362834904043e-7;
  xx[1282] = xx[1240] * xx[1253];
  xx[1253] = - xx[1282];
  xx[1283] = 2.699609151340432e-5;
  xx[1284] = xx[1283] * xx[1276];
  xx[1285] = xx[1281];
  xx[1286] = xx[1253];
  xx[1287] = xx[1284];
  pm_math_cross3(xx + 1277, xx + 1235, xx + 1288);
  xx[1276] = xx[558] * xx[1288];
  xx[1291] = xx[558] * xx[1289];
  xx[1292] = xx[558] * xx[1290];
  xx[1293] = xx[1276];
  xx[1294] = xx[1291];
  xx[1295] = xx[1292];
  xx[1296] = xx[12] * (xx[1241] - xx[1242]);
  xx[1241] = xx[1280] * xx[1296];
  xx[1242] = xx[1273] * xx[1273];
  xx[1297] = (xx[1239] + xx[1242]) * xx[12] - xx[172];
  xx[1239] = xx[1297] * xx[1240];
  xx[1298] = xx[1272] * xx[1273];
  xx[1272] = xx[1274] * xx[1275];
  xx[1273] = (xx[1298] + xx[1272]) * xx[12];
  xx[1274] = xx[1283] * xx[1273];
  xx[1275] = - xx[1274];
  xx[1299] = xx[1241];
  xx[1300] = xx[1239];
  xx[1301] = xx[1275];
  xx[1302] = xx[1296];
  xx[1303] = xx[1297];
  xx[1304] = - xx[1273];
  pm_math_cross3(xx + 1302, xx + 1235, xx + 1305);
  xx[1273] = xx[558] * xx[1305];
  xx[1296] = xx[558] * xx[1306];
  xx[1297] = xx[558] * xx[1307];
  xx[1308] = xx[1273];
  xx[1309] = xx[1296];
  xx[1310] = xx[1297];
  xx[1311] = pm_math_dot3(xx + 1277, xx + 1299) + pm_math_dot3(xx + 1288, xx +
    1308);
  xx[1312] = (xx[1263] + xx[1264]) * xx[12];
  xx[1263] = xx[1280] * xx[1312];
  xx[1264] = - xx[1263];
  xx[1313] = xx[12] * (xx[1298] - xx[1272]);
  xx[1272] = xx[1240] * xx[1313];
  xx[1298] = (xx[1242] + xx[1238]) * xx[12] - xx[172];
  xx[1238] = xx[1298] * xx[1283];
  xx[1314] = xx[1264];
  xx[1315] = xx[1272];
  xx[1316] = xx[1238];
  xx[1317] = - xx[1312];
  xx[1318] = xx[1313];
  xx[1319] = xx[1298];
  pm_math_cross3(xx + 1317, xx + 1235, xx + 1320);
  xx[1242] = xx[558] * xx[1320];
  xx[1298] = xx[558] * xx[1321];
  xx[1312] = xx[558] * xx[1322];
  xx[1323] = xx[1242];
  xx[1324] = xx[1298];
  xx[1325] = xx[1312];
  xx[1313] = pm_math_dot3(xx + 1277, xx + 1314) + pm_math_dot3(xx + 1288, xx +
    1323);
  xx[1326] = pm_math_dot3(xx + 1302, xx + 1314) + pm_math_dot3(xx + 1305, xx +
    1323);
  xx[1327] = pm_math_dot3(xx + 1277, xx + 1285) + pm_math_dot3(xx + 1288, xx +
    1293);
  xx[1328] = xx[1311];
  xx[1329] = xx[1313];
  xx[1330] = xx[1311];
  xx[1331] = pm_math_dot3(xx + 1302, xx + 1299) + pm_math_dot3(xx + 1305, xx +
    1308);
  xx[1332] = xx[1326];
  xx[1333] = xx[1313];
  xx[1334] = xx[1326];
  xx[1335] = pm_math_dot3(xx + 1317, xx + 1314) + pm_math_dot3(xx + 1320, xx +
    1323);
  ii[0] = factorSymmetricPosDef(xx + 1327, 3, xx + 1285);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_3/Spherical Joint9' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[1285] = xx[681] + xx[1194];
  xx[1308] = xx[1285];
  xx[1309] = xx[1192];
  xx[1310] = xx[1193];
  xx[1311] = xx[1196];
  pm_math_quatCompose(xx + 1308, xx + 1243, xx + 1313);
  xx[681] = xx[1246] * xx[1246];
  xx[1192] = xx[1243] * xx[1246];
  xx[1194] = xx[1244] * xx[1245];
  xx[1293] = (xx[1223] + xx[681]) * xx[12] - xx[172];
  xx[1294] = xx[12] * (xx[1192] - xx[1194]);
  xx[1295] = - ((xx[1213] + xx[1202]) * xx[12]);
  pm_math_cross3(xx + 1293, xx + 1247, xx + 1299);
  pm_math_quatXform(xx + 1313, xx + 1299, xx + 1323);
  pm_math_cross3(xx + 1293, xx + 1235, xx + 1299);
  pm_math_quatXform(xx + 1243, xx + 1299, xx + 1293);
  pm_math_quatXform(xx + 1308, xx + 1293, xx + 1299);
  xx[1286] = xx[1323] + xx[1299];
  xx[1293] = - ((xx[1192] + xx[1194]) * xx[12]);
  xx[1294] = (xx[681] + xx[1222]) * xx[12] - xx[172];
  xx[1295] = xx[12] * (xx[1215] - xx[1217]);
  pm_math_cross3(xx + 1293, xx + 1247, xx + 1336);
  pm_math_quatXform(xx + 1313, xx + 1336, xx + 1339);
  pm_math_cross3(xx + 1293, xx + 1235, xx + 1336);
  pm_math_quatXform(xx + 1243, xx + 1336, xx + 1293);
  pm_math_quatXform(xx + 1308, xx + 1293, xx + 1336);
  xx[1287] = xx[1339] + xx[1336];
  xx[1293] = xx[12] * (xx[1213] - xx[1202]);
  xx[1294] = - xx[1221];
  xx[1295] = xx[1231] - xx[172];
  pm_math_cross3(xx + 1293, xx + 1247, xx + 1342);
  pm_math_quatXform(xx + 1313, xx + 1342, xx + 1345);
  pm_math_cross3(xx + 1293, xx + 1235, xx + 1313);
  pm_math_quatXform(xx + 1243, xx + 1313, xx + 1293);
  pm_math_quatXform(xx + 1308, xx + 1293, xx + 1313);
  xx[1221] = xx[1345] + xx[1313];
  xx[1293] = xx[1286];
  xx[1294] = xx[1287];
  xx[1295] = xx[1221];
  solveSymmetricPosDef(xx + 1327, xx + 1293, 3, 1, xx + 1342, xx + 1348);
  xx[1293] = xx[1342] * xx[1281] + xx[1343] * xx[1241] - xx[1344] * xx[1263];
  xx[1294] = xx[1343] * xx[1239] - xx[1342] * xx[1282] + xx[1344] * xx[1272];
  xx[1295] = xx[1342] * xx[1284] - xx[1343] * xx[1274] + xx[1344] * xx[1238];
  pm_math_quatXform(xx + 1243, xx + 1293, xx + 1348);
  xx[1293] = xx[1342] * xx[1276] + xx[1343] * xx[1273] + xx[1344] * xx[1242];
  xx[1294] = xx[1342] * xx[1291] + xx[1343] * xx[1296] + xx[1344] * xx[1298];
  xx[1295] = xx[1342] * xx[1292] + xx[1343] * xx[1297] + xx[1344] * xx[1312];
  pm_math_quatXform(xx + 1243, xx + 1293, xx + 1351);
  pm_math_cross3(xx + 1250, xx + 1351, xx + 1293);
  xx[1231] = xx[1243] * xx[1243];
  xx[1293] = (xx[1231] + xx[1222]) * xx[12] - xx[172];
  xx[1222] = xx[12] * (xx[1194] - xx[1192]);
  xx[1294] = (xx[1202] + xx[1213]) * xx[12];
  xx[1202] = (xx[1194] + xx[1192]) * xx[12];
  xx[1192] = (xx[1231] + xx[1223]) * xx[12] - xx[172];
  xx[1194] = xx[12] * (xx[1217] - xx[1215]);
  xx[1213] = (xx[1217] + xx[1215]) * xx[12];
  xx[1215] = (xx[1231] + xx[681]) * xx[12] - xx[172];
  xx[1351] = xx[1293];
  xx[1352] = xx[1222];
  xx[1353] = xx[1294];
  xx[1354] = xx[1202];
  xx[1355] = xx[1192];
  xx[1356] = xx[1194];
  xx[1357] = xx[1214];
  xx[1358] = xx[1213];
  xx[1359] = xx[1215];
  xx[1360] = xx[1281];
  xx[1361] = xx[1241];
  xx[1362] = xx[1264];
  xx[1363] = xx[1253];
  xx[1364] = xx[1239];
  xx[1365] = xx[1272];
  xx[1366] = xx[1284];
  xx[1367] = xx[1275];
  xx[1368] = xx[1238];
  xx[1369] = xx[1276];
  xx[1370] = xx[1273];
  xx[1371] = xx[1242];
  xx[1372] = xx[1291];
  xx[1373] = xx[1296];
  xx[1374] = xx[1298];
  xx[1375] = xx[1292];
  xx[1376] = xx[1297];
  xx[1377] = xx[1312];
  solveSymmetricPosDef(xx + 1327, xx + 1360, 3, 6, xx + 1378, xx + 1396);
  xx[681] = - (xx[1379] * xx[1239] - xx[1378] * xx[1282] + xx[1380] * xx[1272]);
  xx[1217] = - (xx[1378] * xx[1284] - xx[1379] * xx[1274] + xx[1380] * xx[1238]);
  xx[1223] = - (xx[1381] * xx[1284] - xx[1382] * xx[1274] + xx[1383] * xx[1238]);
  xx[1360] = xx[1280] - (xx[1378] * xx[1281] + xx[1379] * xx[1241] - xx[1380] *
    xx[1263]);
  xx[1361] = xx[681];
  xx[1362] = xx[1217];
  xx[1363] = xx[681];
  xx[1364] = xx[1240] - (xx[1382] * xx[1239] - xx[1381] * xx[1282] + xx[1383] *
    xx[1272]);
  xx[1365] = xx[1223];
  xx[1366] = xx[1217];
  xx[1367] = xx[1223];
  xx[1368] = xx[1283] - (xx[1384] * xx[1284] - xx[1385] * xx[1274] + xx[1386] *
    xx[1238]);
  pm_math_matrix3x3ComposeTranspose(xx + 1360, xx + 1351, xx + 1369);
  pm_math_matrix3x3Compose(xx + 1351, xx + 1369, xx + 1360);
  xx[1369] = xx[1389] * xx[1263] - (xx[1387] * xx[1281] + xx[1388] * xx[1241]);
  xx[1370] = xx[1392] * xx[1263] - (xx[1390] * xx[1281] + xx[1391] * xx[1241]);
  xx[1371] = xx[1395] * xx[1263] - (xx[1393] * xx[1281] + xx[1394] * xx[1241]);
  xx[1372] = - (xx[1388] * xx[1239] - xx[1387] * xx[1282] + xx[1389] * xx[1272]);
  xx[1373] = - (xx[1391] * xx[1239] - xx[1390] * xx[1282] + xx[1392] * xx[1272]);
  xx[1374] = - (xx[1394] * xx[1239] - xx[1393] * xx[1282] + xx[1395] * xx[1272]);
  xx[1375] = - (xx[1387] * xx[1284] - xx[1388] * xx[1274] + xx[1389] * xx[1238]);
  xx[1376] = - (xx[1390] * xx[1284] - xx[1391] * xx[1274] + xx[1392] * xx[1238]);
  xx[1377] = - (xx[1393] * xx[1284] - xx[1394] * xx[1274] + xx[1395] * xx[1238]);
  pm_math_matrix3x3ComposeTranspose(xx + 1369, xx + 1351, xx + 1396);
  pm_math_matrix3x3Compose(xx + 1351, xx + 1396, xx + 1369);
  pm_math_matrix3x3PostCross(xx + 1369, xx + 1250, xx + 1396);
  xx[681] = - (xx[1387] * xx[1291] + xx[1388] * xx[1296] + xx[1389] * xx[1298]);
  xx[1217] = - (xx[1387] * xx[1292] + xx[1388] * xx[1297] + xx[1389] * xx[1312]);
  xx[1223] = - (xx[1390] * xx[1292] + xx[1391] * xx[1297] + xx[1392] * xx[1312]);
  xx[1405] = xx[558] - (xx[1387] * xx[1276] + xx[1388] * xx[1273] + xx[1389] *
                        xx[1242]);
  xx[1406] = xx[681];
  xx[1407] = xx[1217];
  xx[1408] = xx[681];
  xx[1409] = xx[558] - (xx[1390] * xx[1291] + xx[1391] * xx[1296] + xx[1392] *
                        xx[1298]);
  xx[1410] = xx[1223];
  xx[1411] = xx[1217];
  xx[1412] = xx[1223];
  xx[1413] = xx[558] - (xx[1393] * xx[1292] + xx[1394] * xx[1297] + xx[1395] *
                        xx[1312]);
  pm_math_matrix3x3ComposeTranspose(xx + 1405, xx + 1351, xx + 1414);
  pm_math_matrix3x3Compose(xx + 1351, xx + 1414, xx + 1405);
  pm_math_matrix3x3PostCross(xx + 1405, xx + 1250, xx + 1351);
  pm_math_matrix3x3PreCross(xx + 1351, xx + 1250, xx + 1405);
  xx[681] = xx[52] + xx[1368] - xx[1404] - xx[1404] - xx[1413];
  memcpy(xx + 1217, xx + 681, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 1217, 1, xx + 1223);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_3/Revolute2' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1223] = (xx[1262] - (xx[1350] + xx[1295])) / xx[1217];
  xx[1348] = xx[1378];
  xx[1349] = xx[1381];
  xx[1350] = xx[1384];
  xx[1231] = xx[1223] * xx[1244];
  xx[1253] = xx[1223] * xx[1245];
  xx[1357] = xx[12] * (xx[1246] * xx[1231] - xx[1243] * xx[1253]);
  xx[1358] = (xx[1243] * xx[1231] + xx[1246] * xx[1253]) * xx[12];
  xx[1359] = xx[1223] - (xx[1244] * xx[1231] + xx[1245] * xx[1253]) * xx[12];
  xx[1360] = xx[1387];
  xx[1361] = xx[1390];
  xx[1362] = xx[1393];
  xx[1231] = xx[1223] * xx[1250];
  xx[1253] = xx[1246] * xx[1231];
  xx[1264] = xx[1223] * xx[1251];
  xx[1275] = xx[1246] * xx[1264];
  xx[1295] = xx[1244] * xx[1231] + xx[1245] * xx[1264];
  xx[1363] = - xx[1253];
  xx[1364] = - xx[1275];
  xx[1365] = xx[1295];
  pm_math_cross3(xx + 1244, xx + 1363, xx + 1366);
  xx[1363] = (xx[1243] * xx[1253] + xx[1366]) * xx[12] - xx[1264];
  xx[1364] = xx[1231] + (xx[1243] * xx[1275] + xx[1367]) * xx[12];
  xx[1365] = xx[12] * (xx[1368] - xx[1295] * xx[1243]);
  xx[1366] = xx[1379];
  xx[1367] = xx[1382];
  xx[1368] = xx[1385];
  xx[1369] = xx[1388];
  xx[1370] = xx[1391];
  xx[1371] = xx[1394];
  xx[1372] = xx[1380];
  xx[1373] = xx[1383];
  xx[1374] = xx[1386];
  xx[1377] = xx[1389];
  xx[1378] = xx[1392];
  xx[1379] = xx[1395];
  xx[1231] = xx[533] - xx[942] * xx[408];
  xx[533] = xx[1233] + xx[1259] + (xx[1266] - xx[1200] * xx[1260]) * xx[12];
  xx[942] = xx[1324] + xx[1300];
  xx[1253] = xx[1340] + xx[1337];
  xx[1259] = xx[1346] + xx[1314];
  xx[1380] = xx[942];
  xx[1381] = xx[1253];
  xx[1382] = xx[1259];
  solveSymmetricPosDef(xx + 1327, xx + 1380, 3, 1, xx + 1383, xx + 1386);
  xx[1380] = xx[1383] * xx[1281] + xx[1384] * xx[1241] - xx[1385] * xx[1263];
  xx[1381] = xx[1384] * xx[1239] - xx[1383] * xx[1282] + xx[1385] * xx[1272];
  xx[1382] = xx[1383] * xx[1284] - xx[1384] * xx[1274] + xx[1385] * xx[1238];
  pm_math_quatXform(xx + 1243, xx + 1380, xx + 1386);
  xx[1380] = xx[1383] * xx[1276] + xx[1384] * xx[1273] + xx[1385] * xx[1242];
  xx[1381] = xx[1383] * xx[1291] + xx[1384] * xx[1296] + xx[1385] * xx[1298];
  xx[1382] = xx[1383] * xx[1292] + xx[1384] * xx[1297] + xx[1385] * xx[1312];
  pm_math_quatXform(xx + 1243, xx + 1380, xx + 1389);
  pm_math_cross3(xx + 1250, xx + 1389, xx + 1380);
  xx[1260] = (xx[533] - (xx[1388] + xx[1382])) / xx[1217];
  xx[1264] = xx[1260] * xx[1244];
  xx[1275] = xx[1260] * xx[1245];
  xx[1380] = xx[12] * (xx[1246] * xx[1264] - xx[1243] * xx[1275]);
  xx[1381] = (xx[1243] * xx[1264] + xx[1246] * xx[1275]) * xx[12];
  xx[1382] = xx[1260] - (xx[1244] * xx[1264] + xx[1245] * xx[1275]) * xx[12];
  xx[1264] = xx[1260] * xx[1250];
  xx[1275] = xx[1246] * xx[1264];
  xx[1295] = xx[1260] * xx[1251];
  xx[1316] = xx[1246] * xx[1295];
  xx[1326] = xx[1244] * xx[1264] + xx[1245] * xx[1295];
  xx[1386] = - xx[1275];
  xx[1387] = - xx[1316];
  xx[1388] = xx[1326];
  pm_math_cross3(xx + 1244, xx + 1386, xx + 1389);
  xx[1386] = (xx[1243] * xx[1275] + xx[1389]) * xx[12] - xx[1295];
  xx[1387] = xx[1264] + (xx[1243] * xx[1316] + xx[1390]) * xx[12];
  xx[1388] = xx[12] * (xx[1391] - xx[1326] * xx[1243]);
  xx[1264] = xx[1383] - (pm_math_dot3(xx + 1348, xx + 1380) + pm_math_dot3(xx +
    1360, xx + 1386));
  xx[1275] = xx[1384] - (pm_math_dot3(xx + 1366, xx + 1380) + pm_math_dot3(xx +
    1369, xx + 1386));
  xx[1295] = xx[1385] - (pm_math_dot3(xx + 1372, xx + 1380) + pm_math_dot3(xx +
    1377, xx + 1386));
  xx[1316] = xx[940] * xx[911] - xx[815] * xx[959] - xx[830] * xx[961] - xx[831]
    * xx[962] - xx[530] * xx[933] - xx[754] * xx[950] - xx[813] * xx[951] - xx
    [531] * xx[952] + xx[620] * xx[1231] + xx[1262] * xx[1260] + xx[1286] * xx
    [1264] + xx[1287] * xx[1275] + xx[1221] * xx[1295];
  xx[1326] = xx[537] - xx[663] * xx[408];
  xx[537] = xx[1234] + (xx[1200] * xx[1261] + xx[1267]) * xx[12];
  xx[663] = xx[1325] + xx[1301];
  xx[1232] = xx[1341] + xx[1338];
  xx[1233] = xx[1347] + xx[1315];
  xx[1265] = xx[663];
  xx[1266] = xx[1232];
  xx[1267] = xx[1233];
  solveSymmetricPosDef(xx + 1327, xx + 1265, 3, 1, xx + 1299, xx + 1313);
  xx[1265] = xx[1299] * xx[1281] + xx[1300] * xx[1241] - xx[1301] * xx[1263];
  xx[1266] = xx[1300] * xx[1239] - xx[1299] * xx[1282] + xx[1301] * xx[1272];
  xx[1267] = xx[1299] * xx[1284] - xx[1300] * xx[1274] + xx[1301] * xx[1238];
  pm_math_quatXform(xx + 1243, xx + 1265, xx + 1313);
  xx[1265] = xx[1299] * xx[1276] + xx[1300] * xx[1273] + xx[1301] * xx[1242];
  xx[1266] = xx[1299] * xx[1291] + xx[1300] * xx[1296] + xx[1301] * xx[1298];
  xx[1267] = xx[1299] * xx[1292] + xx[1300] * xx[1297] + xx[1301] * xx[1312];
  pm_math_quatXform(xx + 1243, xx + 1265, xx + 1323);
  pm_math_cross3(xx + 1250, xx + 1323, xx + 1265);
  xx[1234] = (xx[537] - (xx[1315] + xx[1267])) / xx[1217];
  xx[1261] = xx[1234] * xx[1244];
  xx[1265] = xx[1234] * xx[1245];
  xx[1313] = xx[12] * (xx[1246] * xx[1261] - xx[1243] * xx[1265]);
  xx[1314] = (xx[1243] * xx[1261] + xx[1246] * xx[1265]) * xx[12];
  xx[1315] = xx[1234] - (xx[1244] * xx[1261] + xx[1245] * xx[1265]) * xx[12];
  xx[1261] = xx[1234] * xx[1250];
  xx[1265] = xx[1246] * xx[1261];
  xx[1266] = xx[1234] * xx[1251];
  xx[1267] = xx[1246] * xx[1266];
  xx[1323] = xx[1244] * xx[1261] + xx[1245] * xx[1266];
  xx[1336] = - xx[1265];
  xx[1337] = - xx[1267];
  xx[1338] = xx[1323];
  pm_math_cross3(xx + 1244, xx + 1336, xx + 1339);
  xx[1336] = (xx[1243] * xx[1265] + xx[1339]) * xx[12] - xx[1266];
  xx[1337] = xx[1261] + (xx[1243] * xx[1267] + xx[1340]) * xx[12];
  xx[1338] = xx[12] * (xx[1341] - xx[1323] * xx[1243]);
  xx[1261] = xx[1299] - (pm_math_dot3(xx + 1348, xx + 1313) + pm_math_dot3(xx +
    1360, xx + 1336));
  xx[1265] = xx[1300] - (pm_math_dot3(xx + 1366, xx + 1313) + pm_math_dot3(xx +
    1369, xx + 1336));
  xx[1266] = xx[1301] - (pm_math_dot3(xx + 1372, xx + 1313) + pm_math_dot3(xx +
    1377, xx + 1336));
  xx[1267] = xx[940] * xx[684] - xx[815] * xx[913] - xx[830] * xx[885] - xx[831]
    * xx[886] - xx[530] * xx[790] - xx[754] * xx[688] - xx[813] * xx[689] - xx
    [531] * xx[690] + xx[620] * xx[1326] + xx[1262] * xx[1234] + xx[1286] * xx
    [1261] + xx[1287] * xx[1265] + xx[1221] * xx[1266];
  xx[1299] = xx[894] * xx[408];
  xx[1300] = xx[940] * xx[974] - xx[815] * xx[1037] - xx[830] * xx[971] - xx[831]
    * xx[972] - xx[530] * xx[973] - xx[754] * xx[944] - xx[813] * xx[945] - xx
    [531] * xx[946] - xx[620] * xx[1299];
  xx[1301] = xx[1036] * xx[408];
  xx[1313] = xx[940] * xx[1004] - xx[815] * xx[1053] - xx[830] * xx[1055] - xx
    [831] * xx[1056] - xx[530] * xx[1006] - xx[754] * xx[1038] - xx[813] * xx
    [1045] - xx[531] * xx[1046] - xx[620] * xx[1301];
  xx[1314] = xx[916] * xx[408];
  xx[1315] = xx[940] * xx[917] - xx[815] * xx[1008] - xx[830] * xx[984] - xx[831]
    * xx[985] - xx[530] * xx[922] - xx[754] * xx[928] - xx[813] * xx[929] - xx
    [531] * xx[930] - xx[620] * xx[1314];
  xx[1323] = xx[408] * xx[1040];
  xx[1324] = xx[940] * xx[1125] - xx[815] * xx[1141] - xx[830] * xx[1074] - xx
    [831] * xx[1075] - xx[530] * xx[1076] - xx[754] * xx[1061] - xx[813] * xx
    [1062] + xx[1063] * xx[531] - xx[620] * xx[1323];
  xx[1325] = xx[408] * xx[1149];
  xx[1336] = xx[940] * xx[1007] - xx[815] * xx[1157] - xx[830] * xx[1158] - xx
    [831] * xx[1159] - xx[530] * xx[1132] - xx[754] * xx[1133] - xx[813] * xx
    [1140] + xx[1150] * xx[531] - xx[620] * xx[1325];
  xx[1337] = xx[408] * xx[1027];
  xx[1338] = xx[940] * xx[1023] - xx[815] * xx[1105] - xx[830] * xx[1078] - xx
    [831] * xx[1079] - xx[530] * xx[1025] - xx[754] * xx[1042] - xx[813] * xx
    [1043] + xx[1044] * xx[531] - xx[620] * xx[1337];
  xx[1339] = xx[408] * xx[1095];
  xx[1340] = xx[940] * xx[1109] - xx[815] * xx[1189] - xx[830] * xx[1173] - xx
    [831] * xx[1174] - xx[530] * xx[1134] - xx[754] * xx[1116] - xx[813] * xx
    [1117] + xx[1118] * xx[531] - xx[620] * xx[1339];
  xx[1341] = xx[408] * xx[1210];
  xx[1345] = xx[940] * xx[137] - xx[815] * xx[1224] - xx[830] * xx[1219] - xx
    [831] * xx[1220] - xx[530] * xx[1155] - xx[754] * xx[1156] - xx[813] * xx
    [1188] + xx[531] * xx[1216] - xx[620] * xx[1341];
  xx[1346] = xx[408] * xx[529];
  xx[1347] = xx[940] * xx[143] - xx[815] * xx[682] - xx[830] * xx[488] - xx[831]
    * xx[489] - xx[530] * xx[144] - xx[754] * xx[490] - xx[813] * xx[527] + xx
    [531] * xx[528] - xx[620] * xx[1346];
  xx[1351] = xx[536] * xx[684] - xx[964] * xx[913] - xx[965] * xx[885] - xx[966]
    * xx[886] - xx[954] * xx[790] - xx[955] * xx[688] - xx[960] * xx[689] - xx
    [941] * xx[690] + xx[935] * xx[1326] + xx[533] * xx[1234] + xx[942] * xx
    [1261] + xx[1253] * xx[1265] + xx[1259] * xx[1266];
  xx[1352] = xx[536] * xx[974] - xx[964] * xx[1037] - xx[965] * xx[971] - xx[966]
    * xx[972] - xx[954] * xx[973] - xx[955] * xx[944] - xx[960] * xx[945] - xx
    [941] * xx[946] - xx[935] * xx[1299];
  xx[1354] = xx[536] * xx[1004] - xx[964] * xx[1053] - xx[965] * xx[1055] - xx
    [966] * xx[1056] - xx[954] * xx[1006] - xx[955] * xx[1038] - xx[960] * xx
    [1045] - xx[941] * xx[1046] - xx[935] * xx[1301];
  xx[1355] = xx[536] * xx[917] - xx[964] * xx[1008] - xx[965] * xx[984] - xx[966]
    * xx[985] - xx[954] * xx[922] - xx[955] * xx[928] - xx[960] * xx[929] - xx
    [941] * xx[930] - xx[935] * xx[1314];
  xx[1380] = xx[536] * xx[1125] - xx[964] * xx[1141] - xx[965] * xx[1074] - xx
    [966] * xx[1075] - xx[954] * xx[1076] - xx[955] * xx[1061] - xx[960] * xx
    [1062] + xx[941] * xx[1063] - xx[935] * xx[1323];
  xx[1381] = xx[536] * xx[1007] - xx[964] * xx[1157] - xx[965] * xx[1158] - xx
    [966] * xx[1159] - xx[954] * xx[1132] - xx[955] * xx[1133] - xx[960] * xx
    [1140] + xx[1150] * xx[941] - xx[935] * xx[1325];
  xx[1382] = xx[536] * xx[1023] - xx[964] * xx[1105] - xx[965] * xx[1078] - xx
    [966] * xx[1079] - xx[954] * xx[1025] - xx[955] * xx[1042] - xx[960] * xx
    [1043] + xx[1044] * xx[941] - xx[935] * xx[1337];
  xx[1383] = xx[536] * xx[1109] - xx[964] * xx[1189] - xx[965] * xx[1173] - xx
    [966] * xx[1174] - xx[954] * xx[1134] - xx[955] * xx[1116] - xx[960] * xx
    [1117] + xx[1118] * xx[941] - xx[935] * xx[1339];
  xx[1384] = xx[536] * xx[137] - xx[964] * xx[1224] - xx[965] * xx[1219] - xx
    [966] * xx[1220] - xx[954] * xx[1155] - xx[955] * xx[1156] - xx[960] * xx
    [1188] + xx[941] * xx[1216] - xx[935] * xx[1341];
  xx[1385] = xx[536] * xx[143] - xx[964] * xx[682] - xx[965] * xx[488] - xx[966]
    * xx[489] - xx[954] * xx[144] - xx[955] * xx[490] - xx[960] * xx[527] + xx
    [941] * xx[528] - xx[935] * xx[1346];
  xx[1386] = xx[538] * xx[974] - xx[791] * xx[1037] - xx[888] * xx[971] - xx[889]
    * xx[972] - xx[685] * xx[973] - xx[686] * xx[944] - xx[789] * xx[945] - xx
    [662] * xx[946] - xx[661] * xx[1299];
  xx[1299] = xx[538] * xx[1004] - xx[791] * xx[1053] - xx[888] * xx[1055] - xx
    [889] * xx[1056] - xx[685] * xx[1006] - xx[686] * xx[1038] - xx[789] * xx
    [1045] - xx[662] * xx[1046] - xx[661] * xx[1301];
  xx[1301] = xx[538] * xx[917] - xx[791] * xx[1008] - xx[888] * xx[984] - xx[889]
    * xx[985] - xx[685] * xx[922] - xx[686] * xx[928] - xx[789] * xx[929] - xx
    [662] * xx[930] - xx[661] * xx[1314];
  xx[1314] = xx[538] * xx[1125] - xx[791] * xx[1141] - xx[888] * xx[1074] - xx
    [889] * xx[1075] - xx[685] * xx[1076] - xx[686] * xx[1061] - xx[789] * xx
    [1062] + xx[662] * xx[1063] - xx[1323] * xx[661];
  xx[1323] = xx[538] * xx[1007] - xx[791] * xx[1157] - xx[888] * xx[1158] - xx
    [889] * xx[1159] - xx[685] * xx[1132] - xx[686] * xx[1133] - xx[789] * xx
    [1140] + xx[1150] * xx[662] - xx[1325] * xx[661];
  xx[1325] = xx[538] * xx[1023] - xx[791] * xx[1105] - xx[888] * xx[1078] - xx
    [889] * xx[1079] - xx[685] * xx[1025] - xx[686] * xx[1042] - xx[789] * xx
    [1043] + xx[1044] * xx[662] - xx[1337] * xx[661];
  xx[1337] = xx[538] * xx[1109] - xx[791] * xx[1189] - xx[888] * xx[1173] - xx
    [889] * xx[1174] - xx[685] * xx[1134] - xx[686] * xx[1116] - xx[789] * xx
    [1117] + xx[1118] * xx[662] - xx[1339] * xx[661];
  xx[1339] = xx[538] * xx[137] - xx[791] * xx[1224] - xx[888] * xx[1219] - xx
    [889] * xx[1220] - xx[685] * xx[1155] - xx[686] * xx[1156] - xx[789] * xx
    [1188] + xx[662] * xx[1216] - xx[1341] * xx[661];
  xx[1341] = xx[538] * xx[143] - xx[791] * xx[682] - xx[888] * xx[488] - xx[889]
    * xx[489] - xx[685] * xx[144] - xx[686] * xx[490] - xx[789] * xx[527] + xx
    [662] * xx[528] - xx[1346] * xx[661];
  xx[1346] = xx[13] * state[46];
  xx[1387] = cos(xx[1346]);
  xx[1388] = 0.5213347278412575;
  xx[1389] = xx[13] * input[3];
  xx[1390] = cos(xx[1389]);
  xx[1391] = 0.5213328811043012;
  xx[1392] = sin(xx[1389]);
  xx[1389] = xx[1388] * xx[1390] - xx[1391] * xx[1392];
  xx[1393] = xx[1387] * xx[1389];
  xx[1394] = xx[1391] * xx[1390] + xx[1388] * xx[1392];
  xx[1388] = sin(xx[1346]);
  xx[1346] = xx[1394] * xx[1388];
  xx[1391] = 0.477713570996186;
  xx[1395] = 0.4777152632188371;
  xx[1396] = xx[1391] * xx[1392] - xx[1395] * xx[1390];
  xx[1397] = xx[1391] * xx[1390] + xx[1395] * xx[1392];
  xx[1390] = xx[1396] * xx[1387] + xx[1388] * xx[1397];
  xx[1391] = - xx[1390];
  xx[1392] = xx[1396] * xx[1388] - xx[1387] * xx[1397];
  xx[1395] = xx[1388] * xx[1389] + xx[1394] * xx[1387];
  xx[1398] = xx[1393] - xx[1346];
  xx[1399] = xx[1391];
  xx[1400] = xx[1392];
  xx[1401] = xx[1395];
  xx[1402] = - state[48];
  xx[1403] = state[49];
  xx[1404] = state[50];
  xx[1405] = state[51];
  xx[1406] = 0.05325143354313207;
  xx[1407] = 0.08348506340391844;
  xx[1408] = 0.01891842268069084;
  xx[1409] = 0.9949053333344433;
  pm_math_quatComposeInverse(xx + 1402, xx + 1406, xx + 1410);
  pm_math_quatCompose(xx + 1398, xx + 1410, xx + 1402);
  xx[1398] = xx[1411] * xx[1413];
  xx[1399] = xx[1410] * xx[1412];
  xx[1400] = xx[12] * (xx[1398] - xx[1399]);
  xx[1401] = xx[1410] * xx[1411];
  xx[1414] = xx[1412] * xx[1413];
  xx[1415] = (xx[1401] + xx[1414]) * xx[12];
  xx[1416] = xx[1411] * xx[1411];
  xx[1417] = xx[1412] * xx[1412];
  xx[1418] = (xx[1416] + xx[1417]) * xx[12];
  xx[1419] = xx[1400];
  xx[1420] = xx[1415];
  xx[1421] = xx[172] - xx[1418];
  xx[1422] = 7.069600216225381e-8;
  xx[1423] = 0.05845498436580784;
  xx[1424] = 2.575015558684734e-7;
  pm_math_cross3(xx + 1419, xx + 1422, xx + 1425);
  pm_math_quatXform(xx + 1402, xx + 1425, xx + 1419);
  xx[1402] = 7.068394614482949e-8;
  xx[1403] = 0.05844501563410757;
  xx[1404] = - 2.574148959452315e-7;
  pm_math_quatXform(xx + 1410, xx + 1402, xx + 1425);
  xx[1405] = xx[1426] * xx[1388] - xx[1387] * xx[1425];
  xx[1428] = xx[12] * xx[1388] * xx[1405] - xx[1426];
  xx[1429] = xx[1389];
  xx[1430] = xx[1394];
  xx[1431] = xx[1397];
  xx[1432] = xx[1425] + xx[12] * xx[1387] * xx[1405];
  xx[1405] = xx[1432] * xx[1397];
  xx[1433] = xx[1397] * xx[1428];
  xx[1434] = xx[1432] * xx[1389] - xx[1394] * xx[1428];
  xx[1435] = - xx[1405];
  xx[1436] = xx[1433];
  xx[1437] = xx[1434];
  pm_math_cross3(xx + 1429, xx + 1435, xx + 1438);
  xx[1435] = xx[1419] + xx[1428] + xx[12] * (xx[1438] - xx[1396] * xx[1405]);
  xx[1441] = state[48];
  xx[1442] = state[49];
  xx[1443] = state[50];
  xx[1444] = state[51];
  pm_math_quatCompose(xx + 1406, xx + 1441, xx + 1445);
  xx[1405] = xx[1447] * xx[1447];
  xx[1406] = xx[1448] * xx[1448];
  xx[1407] = (xx[1405] + xx[1406]) * xx[12] - xx[172];
  xx[1408] = xx[1445] * xx[1448];
  xx[1409] = xx[1446] * xx[1447];
  xx[1428] = (xx[1408] + xx[1409]) * xx[12];
  xx[1436] = xx[1445] * xx[1447];
  xx[1437] = xx[1446] * xx[1448];
  xx[1449] = xx[12] * (xx[1436] - xx[1437]);
  xx[1450] = xx[1407];
  xx[1451] = - xx[1428];
  xx[1452] = xx[1449];
  xx[1453] = 2.686981344948009e-5;
  xx[1454] = xx[1407] * xx[1453];
  xx[1407] = xx[30] * xx[1428];
  xx[1428] = - xx[1407];
  xx[1455] = 2.699609151340435e-5;
  xx[1456] = xx[1455] * xx[1449];
  xx[1457] = xx[1454];
  xx[1458] = xx[1428];
  xx[1459] = xx[1456];
  pm_math_cross3(xx + 1450, xx + 1402, xx + 1460);
  xx[1449] = xx[558] * xx[1460];
  xx[1463] = xx[558] * xx[1461];
  xx[1464] = xx[558] * xx[1462];
  xx[1465] = xx[1449];
  xx[1466] = xx[1463];
  xx[1467] = xx[1464];
  xx[1468] = xx[12] * (xx[1408] - xx[1409]);
  xx[1408] = xx[1453] * xx[1468];
  xx[1409] = xx[1446] * xx[1446];
  xx[1469] = (xx[1406] + xx[1409]) * xx[12] - xx[172];
  xx[1406] = xx[1469] * xx[30];
  xx[1470] = xx[1445] * xx[1446];
  xx[1445] = xx[1447] * xx[1448];
  xx[1446] = (xx[1470] + xx[1445]) * xx[12];
  xx[1447] = xx[1455] * xx[1446];
  xx[1448] = - xx[1447];
  xx[1471] = xx[1408];
  xx[1472] = xx[1406];
  xx[1473] = xx[1448];
  xx[1474] = xx[1468];
  xx[1475] = xx[1469];
  xx[1476] = - xx[1446];
  pm_math_cross3(xx + 1474, xx + 1402, xx + 1477);
  xx[1446] = xx[558] * xx[1477];
  xx[1468] = xx[558] * xx[1478];
  xx[1469] = xx[558] * xx[1479];
  xx[1480] = xx[1446];
  xx[1481] = xx[1468];
  xx[1482] = xx[1469];
  xx[1483] = pm_math_dot3(xx + 1450, xx + 1471) + pm_math_dot3(xx + 1460, xx +
    1480);
  xx[1484] = (xx[1436] + xx[1437]) * xx[12];
  xx[1436] = xx[1453] * xx[1484];
  xx[1437] = - xx[1436];
  xx[1485] = xx[12] * (xx[1470] - xx[1445]);
  xx[1445] = xx[30] * xx[1485];
  xx[1470] = (xx[1409] + xx[1405]) * xx[12] - xx[172];
  xx[1405] = xx[1470] * xx[1455];
  xx[1486] = xx[1437];
  xx[1487] = xx[1445];
  xx[1488] = xx[1405];
  xx[1489] = - xx[1484];
  xx[1490] = xx[1485];
  xx[1491] = xx[1470];
  pm_math_cross3(xx + 1489, xx + 1402, xx + 1492);
  xx[1409] = xx[558] * xx[1492];
  xx[1470] = xx[558] * xx[1493];
  xx[1484] = xx[558] * xx[1494];
  xx[1495] = xx[1409];
  xx[1496] = xx[1470];
  xx[1497] = xx[1484];
  xx[1485] = pm_math_dot3(xx + 1450, xx + 1486) + pm_math_dot3(xx + 1460, xx +
    1495);
  xx[1498] = pm_math_dot3(xx + 1474, xx + 1486) + pm_math_dot3(xx + 1477, xx +
    1495);
  xx[1499] = pm_math_dot3(xx + 1450, xx + 1457) + pm_math_dot3(xx + 1460, xx +
    1465);
  xx[1500] = xx[1483];
  xx[1501] = xx[1485];
  xx[1502] = xx[1483];
  xx[1503] = pm_math_dot3(xx + 1474, xx + 1471) + pm_math_dot3(xx + 1477, xx +
    1480);
  xx[1504] = xx[1498];
  xx[1505] = xx[1485];
  xx[1506] = xx[1498];
  xx[1507] = pm_math_dot3(xx + 1489, xx + 1486) + pm_math_dot3(xx + 1492, xx +
    1495);
  ii[0] = factorSymmetricPosDef(xx + 1499, 3, xx + 1457);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_4/Spherical Joint7' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[1457] = xx[1346] - xx[1393];
  xx[1480] = - xx[1457];
  xx[1481] = xx[1391];
  xx[1482] = xx[1392];
  xx[1483] = xx[1395];
  pm_math_quatCompose(xx + 1480, xx + 1410, xx + 1485);
  xx[1346] = xx[1413] * xx[1413];
  xx[1391] = xx[1410] * xx[1413];
  xx[1393] = xx[1411] * xx[1412];
  xx[1465] = (xx[1417] + xx[1346]) * xx[12] - xx[172];
  xx[1466] = xx[12] * (xx[1391] - xx[1393]);
  xx[1467] = - ((xx[1399] + xx[1398]) * xx[12]);
  pm_math_cross3(xx + 1465, xx + 1422, xx + 1471);
  pm_math_quatXform(xx + 1485, xx + 1471, xx + 1495);
  pm_math_cross3(xx + 1465, xx + 1402, xx + 1471);
  pm_math_quatXform(xx + 1410, xx + 1471, xx + 1465);
  pm_math_quatXform(xx + 1480, xx + 1465, xx + 1471);
  xx[1458] = xx[1495] + xx[1471];
  xx[1465] = - ((xx[1391] + xx[1393]) * xx[12]);
  xx[1466] = (xx[1346] + xx[1416]) * xx[12] - xx[172];
  xx[1467] = xx[12] * (xx[1401] - xx[1414]);
  pm_math_cross3(xx + 1465, xx + 1422, xx + 1508);
  pm_math_quatXform(xx + 1485, xx + 1508, xx + 1511);
  pm_math_cross3(xx + 1465, xx + 1402, xx + 1508);
  pm_math_quatXform(xx + 1410, xx + 1508, xx + 1465);
  pm_math_quatXform(xx + 1480, xx + 1465, xx + 1508);
  xx[1459] = xx[1511] + xx[1508];
  xx[1465] = xx[12] * (xx[1399] - xx[1398]);
  xx[1466] = - xx[1415];
  xx[1467] = xx[1418] - xx[172];
  pm_math_cross3(xx + 1465, xx + 1422, xx + 1514);
  pm_math_quatXform(xx + 1485, xx + 1514, xx + 1517);
  pm_math_cross3(xx + 1465, xx + 1402, xx + 1485);
  pm_math_quatXform(xx + 1410, xx + 1485, xx + 1465);
  pm_math_quatXform(xx + 1480, xx + 1465, xx + 1485);
  xx[1415] = xx[1517] + xx[1485];
  xx[1465] = xx[1458];
  xx[1466] = xx[1459];
  xx[1467] = xx[1415];
  solveSymmetricPosDef(xx + 1499, xx + 1465, 3, 1, xx + 1514, xx + 1520);
  xx[1465] = xx[1514] * xx[1454] + xx[1515] * xx[1408] - xx[1516] * xx[1436];
  xx[1466] = xx[1515] * xx[1406] - xx[1514] * xx[1407] + xx[1516] * xx[1445];
  xx[1467] = xx[1514] * xx[1456] - xx[1515] * xx[1447] + xx[1516] * xx[1405];
  pm_math_quatXform(xx + 1410, xx + 1465, xx + 1520);
  xx[1465] = xx[1514] * xx[1449] + xx[1515] * xx[1446] + xx[1516] * xx[1409];
  xx[1466] = xx[1514] * xx[1463] + xx[1515] * xx[1468] + xx[1516] * xx[1470];
  xx[1467] = xx[1514] * xx[1464] + xx[1515] * xx[1469] + xx[1516] * xx[1484];
  pm_math_quatXform(xx + 1410, xx + 1465, xx + 1523);
  pm_math_cross3(xx + 1425, xx + 1523, xx + 1465);
  xx[1418] = xx[1410] * xx[1410];
  xx[1465] = (xx[1418] + xx[1416]) * xx[12] - xx[172];
  xx[1416] = xx[12] * (xx[1393] - xx[1391]);
  xx[1466] = (xx[1398] + xx[1399]) * xx[12];
  xx[1398] = (xx[1393] + xx[1391]) * xx[12];
  xx[1391] = (xx[1418] + xx[1417]) * xx[12] - xx[172];
  xx[1393] = xx[12] * (xx[1414] - xx[1401]);
  xx[1399] = (xx[1414] + xx[1401]) * xx[12];
  xx[1401] = (xx[1418] + xx[1346]) * xx[12] - xx[172];
  xx[1523] = xx[1465];
  xx[1524] = xx[1416];
  xx[1525] = xx[1466];
  xx[1526] = xx[1398];
  xx[1527] = xx[1391];
  xx[1528] = xx[1393];
  xx[1529] = xx[1400];
  xx[1530] = xx[1399];
  xx[1531] = xx[1401];
  xx[1532] = xx[1454];
  xx[1533] = xx[1408];
  xx[1534] = xx[1437];
  xx[1535] = xx[1428];
  xx[1536] = xx[1406];
  xx[1537] = xx[1445];
  xx[1538] = xx[1456];
  xx[1539] = xx[1448];
  xx[1540] = xx[1405];
  xx[1541] = xx[1449];
  xx[1542] = xx[1446];
  xx[1543] = xx[1409];
  xx[1544] = xx[1463];
  xx[1545] = xx[1468];
  xx[1546] = xx[1470];
  xx[1547] = xx[1464];
  xx[1548] = xx[1469];
  xx[1549] = xx[1484];
  solveSymmetricPosDef(xx + 1499, xx + 1532, 3, 6, xx + 1550, xx + 1568);
  xx[1346] = - (xx[1551] * xx[1406] - xx[1550] * xx[1407] + xx[1552] * xx[1445]);
  xx[1414] = - (xx[1550] * xx[1456] - xx[1551] * xx[1447] + xx[1552] * xx[1405]);
  xx[1417] = - (xx[1553] * xx[1456] - xx[1554] * xx[1447] + xx[1555] * xx[1405]);
  xx[1532] = xx[1453] - (xx[1550] * xx[1454] + xx[1551] * xx[1408] - xx[1552] *
    xx[1436]);
  xx[1533] = xx[1346];
  xx[1534] = xx[1414];
  xx[1535] = xx[1346];
  xx[1536] = xx[30] - (xx[1554] * xx[1406] - xx[1553] * xx[1407] + xx[1555] *
                       xx[1445]);
  xx[1537] = xx[1417];
  xx[1538] = xx[1414];
  xx[1539] = xx[1417];
  xx[1540] = xx[1455] - (xx[1556] * xx[1456] - xx[1557] * xx[1447] + xx[1558] *
    xx[1405]);
  pm_math_matrix3x3ComposeTranspose(xx + 1532, xx + 1523, xx + 1541);
  pm_math_matrix3x3Compose(xx + 1523, xx + 1541, xx + 1532);
  xx[1541] = xx[1561] * xx[1436] - (xx[1559] * xx[1454] + xx[1560] * xx[1408]);
  xx[1542] = xx[1564] * xx[1436] - (xx[1562] * xx[1454] + xx[1563] * xx[1408]);
  xx[1543] = xx[1567] * xx[1436] - (xx[1565] * xx[1454] + xx[1566] * xx[1408]);
  xx[1544] = - (xx[1560] * xx[1406] - xx[1559] * xx[1407] + xx[1561] * xx[1445]);
  xx[1545] = - (xx[1563] * xx[1406] - xx[1562] * xx[1407] + xx[1564] * xx[1445]);
  xx[1546] = - (xx[1566] * xx[1406] - xx[1565] * xx[1407] + xx[1567] * xx[1445]);
  xx[1547] = - (xx[1559] * xx[1456] - xx[1560] * xx[1447] + xx[1561] * xx[1405]);
  xx[1548] = - (xx[1562] * xx[1456] - xx[1563] * xx[1447] + xx[1564] * xx[1405]);
  xx[1549] = - (xx[1565] * xx[1456] - xx[1566] * xx[1447] + xx[1567] * xx[1405]);
  pm_math_matrix3x3ComposeTranspose(xx + 1541, xx + 1523, xx + 1568);
  pm_math_matrix3x3Compose(xx + 1523, xx + 1568, xx + 1541);
  pm_math_matrix3x3PostCross(xx + 1541, xx + 1425, xx + 1568);
  xx[1346] = - (xx[1559] * xx[1463] + xx[1560] * xx[1468] + xx[1561] * xx[1470]);
  xx[1414] = - (xx[1559] * xx[1464] + xx[1560] * xx[1469] + xx[1561] * xx[1484]);
  xx[1417] = - (xx[1562] * xx[1464] + xx[1563] * xx[1469] + xx[1564] * xx[1484]);
  xx[1577] = xx[558] - (xx[1559] * xx[1449] + xx[1560] * xx[1446] + xx[1561] *
                        xx[1409]);
  xx[1578] = xx[1346];
  xx[1579] = xx[1414];
  xx[1580] = xx[1346];
  xx[1581] = xx[558] - (xx[1562] * xx[1463] + xx[1563] * xx[1468] + xx[1564] *
                        xx[1470]);
  xx[1582] = xx[1417];
  xx[1583] = xx[1414];
  xx[1584] = xx[1417];
  xx[1585] = xx[558] - (xx[1565] * xx[1464] + xx[1566] * xx[1469] + xx[1567] *
                        xx[1484]);
  pm_math_matrix3x3ComposeTranspose(xx + 1577, xx + 1523, xx + 1586);
  pm_math_matrix3x3Compose(xx + 1523, xx + 1586, xx + 1577);
  pm_math_matrix3x3PostCross(xx + 1577, xx + 1425, xx + 1523);
  pm_math_matrix3x3PreCross(xx + 1523, xx + 1425, xx + 1577);
  xx[1346] = xx[52] + xx[1540] - xx[1576] - xx[1576] - xx[1585];
  memcpy(xx + 1414, xx + 1346, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 1414, 1, xx + 1417);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_4/Revolute4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1417] = (xx[1435] - (xx[1522] + xx[1467])) / xx[1414];
  xx[1520] = xx[1550];
  xx[1521] = xx[1553];
  xx[1522] = xx[1556];
  xx[1418] = xx[1417] * xx[1411];
  xx[1428] = xx[1417] * xx[1412];
  xx[1529] = xx[12] * (xx[1413] * xx[1418] - xx[1410] * xx[1428]);
  xx[1530] = (xx[1410] * xx[1418] + xx[1413] * xx[1428]) * xx[12];
  xx[1531] = xx[1417] - (xx[1411] * xx[1418] + xx[1412] * xx[1428]) * xx[12];
  xx[1532] = xx[1559];
  xx[1533] = xx[1562];
  xx[1534] = xx[1565];
  xx[1418] = xx[1417] * xx[1425];
  xx[1428] = xx[1413] * xx[1418];
  xx[1437] = xx[1417] * xx[1426];
  xx[1448] = xx[1413] * xx[1437];
  xx[1467] = xx[1411] * xx[1418] + xx[1412] * xx[1437];
  xx[1535] = - xx[1428];
  xx[1536] = - xx[1448];
  xx[1537] = xx[1467];
  pm_math_cross3(xx + 1411, xx + 1535, xx + 1538);
  xx[1535] = (xx[1410] * xx[1428] + xx[1538]) * xx[12] - xx[1437];
  xx[1536] = xx[1418] + (xx[1410] * xx[1448] + xx[1539]) * xx[12];
  xx[1537] = xx[12] * (xx[1540] - xx[1467] * xx[1410]);
  xx[1538] = xx[1551];
  xx[1539] = xx[1554];
  xx[1540] = xx[1557];
  xx[1541] = xx[1560];
  xx[1542] = xx[1563];
  xx[1543] = xx[1566];
  xx[1544] = xx[1552];
  xx[1545] = xx[1555];
  xx[1546] = xx[1558];
  xx[1549] = xx[1561];
  xx[1550] = xx[1564];
  xx[1551] = xx[1567];
  xx[1418] = xx[895] - xx[1036] * xx[404];
  xx[895] = xx[1420] + xx[1432] + (xx[1396] * xx[1433] + xx[1439]) * xx[12];
  xx[1036] = xx[1496] + xx[1472];
  xx[1428] = xx[1512] + xx[1509];
  xx[1432] = xx[1518] + xx[1486];
  xx[1552] = xx[1036];
  xx[1553] = xx[1428];
  xx[1554] = xx[1432];
  solveSymmetricPosDef(xx + 1499, xx + 1552, 3, 1, xx + 1555, xx + 1558);
  xx[1552] = xx[1555] * xx[1454] + xx[1556] * xx[1408] - xx[1557] * xx[1436];
  xx[1553] = xx[1556] * xx[1406] - xx[1555] * xx[1407] + xx[1557] * xx[1445];
  xx[1554] = xx[1555] * xx[1456] - xx[1556] * xx[1447] + xx[1557] * xx[1405];
  pm_math_quatXform(xx + 1410, xx + 1552, xx + 1558);
  xx[1552] = xx[1555] * xx[1449] + xx[1556] * xx[1446] + xx[1557] * xx[1409];
  xx[1553] = xx[1555] * xx[1463] + xx[1556] * xx[1468] + xx[1557] * xx[1470];
  xx[1554] = xx[1555] * xx[1464] + xx[1556] * xx[1469] + xx[1557] * xx[1484];
  pm_math_quatXform(xx + 1410, xx + 1552, xx + 1561);
  pm_math_cross3(xx + 1425, xx + 1561, xx + 1552);
  xx[1433] = (xx[895] - (xx[1560] + xx[1554])) / xx[1414];
  xx[1437] = xx[1433] * xx[1411];
  xx[1448] = xx[1433] * xx[1412];
  xx[1552] = xx[12] * (xx[1413] * xx[1437] - xx[1410] * xx[1448]);
  xx[1553] = (xx[1410] * xx[1437] + xx[1413] * xx[1448]) * xx[12];
  xx[1554] = xx[1433] - (xx[1411] * xx[1437] + xx[1412] * xx[1448]) * xx[12];
  xx[1437] = xx[1433] * xx[1425];
  xx[1448] = xx[1413] * xx[1437];
  xx[1467] = xx[1433] * xx[1426];
  xx[1488] = xx[1413] * xx[1467];
  xx[1498] = xx[1411] * xx[1437] + xx[1412] * xx[1467];
  xx[1558] = - xx[1448];
  xx[1559] = - xx[1488];
  xx[1560] = xx[1498];
  pm_math_cross3(xx + 1411, xx + 1558, xx + 1561);
  xx[1558] = (xx[1410] * xx[1448] + xx[1561]) * xx[12] - xx[1467];
  xx[1559] = xx[1437] + (xx[1410] * xx[1488] + xx[1562]) * xx[12];
  xx[1560] = xx[12] * (xx[1563] - xx[1498] * xx[1410]);
  xx[1437] = xx[1555] - (pm_math_dot3(xx + 1520, xx + 1552) + pm_math_dot3(xx +
    1532, xx + 1558));
  xx[1448] = xx[1556] - (pm_math_dot3(xx + 1538, xx + 1552) + pm_math_dot3(xx +
    1541, xx + 1558));
  xx[1467] = xx[1557] - (pm_math_dot3(xx + 1544, xx + 1552) + pm_math_dot3(xx +
    1549, xx + 1558));
  xx[1488] = xx[1029] * xx[1004] - xx[924] * xx[1053] - xx[927] * xx[1055] - xx
    [934] * xx[1056] - xx[535] * xx[1006] - xx[692] * xx[1038] - xx[814] * xx
    [1045] - xx[893] * xx[1046] + xx[912] * xx[1418] + xx[1435] * xx[1433] + xx
    [1458] * xx[1437] + xx[1459] * xx[1448] + xx[1415] * xx[1467];
  xx[1498] = xx[902] - xx[916] * xx[404];
  xx[902] = xx[1421] + (xx[1396] * xx[1434] + xx[1440]) * xx[12];
  xx[916] = xx[1497] + xx[1473];
  xx[1419] = xx[1513] + xx[1510];
  xx[1420] = xx[1519] + xx[1487];
  xx[1438] = xx[916];
  xx[1439] = xx[1419];
  xx[1440] = xx[1420];
  solveSymmetricPosDef(xx + 1499, xx + 1438, 3, 1, xx + 1471, xx + 1485);
  xx[1438] = xx[1471] * xx[1454] + xx[1472] * xx[1408] - xx[1473] * xx[1436];
  xx[1439] = xx[1472] * xx[1406] - xx[1471] * xx[1407] + xx[1473] * xx[1445];
  xx[1440] = xx[1471] * xx[1456] - xx[1472] * xx[1447] + xx[1473] * xx[1405];
  pm_math_quatXform(xx + 1410, xx + 1438, xx + 1485);
  xx[1438] = xx[1471] * xx[1449] + xx[1472] * xx[1446] + xx[1473] * xx[1409];
  xx[1439] = xx[1471] * xx[1463] + xx[1472] * xx[1468] + xx[1473] * xx[1470];
  xx[1440] = xx[1471] * xx[1464] + xx[1472] * xx[1469] + xx[1473] * xx[1484];
  pm_math_quatXform(xx + 1410, xx + 1438, xx + 1495);
  pm_math_cross3(xx + 1425, xx + 1495, xx + 1438);
  xx[1421] = (xx[902] - (xx[1487] + xx[1440])) / xx[1414];
  xx[1434] = xx[1421] * xx[1411];
  xx[1438] = xx[1421] * xx[1412];
  xx[1485] = xx[12] * (xx[1413] * xx[1434] - xx[1410] * xx[1438]);
  xx[1486] = (xx[1410] * xx[1434] + xx[1413] * xx[1438]) * xx[12];
  xx[1487] = xx[1421] - (xx[1411] * xx[1434] + xx[1412] * xx[1438]) * xx[12];
  xx[1434] = xx[1421] * xx[1425];
  xx[1438] = xx[1413] * xx[1434];
  xx[1439] = xx[1421] * xx[1426];
  xx[1440] = xx[1413] * xx[1439];
  xx[1495] = xx[1411] * xx[1434] + xx[1412] * xx[1439];
  xx[1508] = - xx[1438];
  xx[1509] = - xx[1440];
  xx[1510] = xx[1495];
  pm_math_cross3(xx + 1411, xx + 1508, xx + 1511);
  xx[1508] = (xx[1410] * xx[1438] + xx[1511]) * xx[12] - xx[1439];
  xx[1509] = xx[1434] + (xx[1410] * xx[1440] + xx[1512]) * xx[12];
  xx[1510] = xx[12] * (xx[1513] - xx[1495] * xx[1410]);
  xx[1434] = xx[1471] - (pm_math_dot3(xx + 1520, xx + 1485) + pm_math_dot3(xx +
    1532, xx + 1508));
  xx[1438] = xx[1472] - (pm_math_dot3(xx + 1538, xx + 1485) + pm_math_dot3(xx +
    1541, xx + 1508));
  xx[1439] = xx[1473] - (pm_math_dot3(xx + 1544, xx + 1485) + pm_math_dot3(xx +
    1549, xx + 1508));
  xx[1440] = xx[1029] * xx[917] - xx[924] * xx[1008] - xx[927] * xx[984] - xx
    [934] * xx[985] - xx[535] * xx[922] - xx[692] * xx[928] - xx[814] * xx[929]
    - xx[893] * xx[930] + xx[912] * xx[1498] + xx[1435] * xx[1421] + xx[1458] *
    xx[1434] + xx[1459] * xx[1438] + xx[1415] * xx[1439];
  xx[1471] = xx[404] * xx[1040];
  xx[1040] = xx[1029] * xx[1125] - xx[924] * xx[1141] - xx[927] * xx[1074] - xx
    [934] * xx[1075] - xx[535] * xx[1076] - xx[692] * xx[1061] - xx[814] * xx
    [1062] + xx[893] * xx[1063] - xx[912] * xx[1471];
  xx[1472] = xx[404] * xx[1149];
  xx[1149] = xx[1029] * xx[1007] - xx[924] * xx[1157] - xx[927] * xx[1158] - xx
    [934] * xx[1159] - xx[535] * xx[1132] - xx[692] * xx[1133] - xx[814] * xx
    [1140] + xx[1150] * xx[893] - xx[912] * xx[1472];
  xx[1473] = xx[404] * xx[1027];
  xx[1027] = xx[1029] * xx[1023] - xx[924] * xx[1105] - xx[927] * xx[1078] - xx
    [934] * xx[1079] - xx[535] * xx[1025] - xx[692] * xx[1042] - xx[814] * xx
    [1043] + xx[1044] * xx[893] - xx[912] * xx[1473];
  xx[1485] = xx[404] * xx[1095];
  xx[1095] = xx[1029] * xx[1109] - xx[924] * xx[1189] - xx[927] * xx[1173] - xx
    [934] * xx[1174] - xx[535] * xx[1134] - xx[692] * xx[1116] - xx[814] * xx
    [1117] + xx[1118] * xx[893] - xx[912] * xx[1485];
  xx[1486] = xx[404] * xx[1210];
  xx[1210] = xx[1029] * xx[137] - xx[924] * xx[1224] - xx[927] * xx[1219] - xx
    [934] * xx[1220] - xx[535] * xx[1155] - xx[692] * xx[1156] - xx[814] * xx
    [1188] + xx[893] * xx[1216] - xx[912] * xx[1486];
  xx[1487] = xx[404] * xx[529];
  xx[529] = xx[1029] * xx[143] - xx[924] * xx[682] - xx[927] * xx[488] - xx[934]
    * xx[489] - xx[535] * xx[144] - xx[692] * xx[490] - xx[814] * xx[527] + xx
    [893] * xx[528] - xx[912] * xx[1487];
  xx[1495] = xx[901] * xx[917] - xx[1058] * xx[1008] - xx[1059] * xx[984] - xx
    [1060] * xx[985] - xx[1049] * xx[922] - xx[1050] * xx[928] - xx[1054] * xx
    [929] - xx[1035] * xx[930] + xx[1030] * xx[1498] + xx[895] * xx[1421] + xx
    [1036] * xx[1434] + xx[1428] * xx[1438] + xx[1432] * xx[1439];
  xx[1496] = xx[901] * xx[1125] - xx[1058] * xx[1141] - xx[1059] * xx[1074] -
    xx[1060] * xx[1075] - xx[1049] * xx[1076] - xx[1050] * xx[1061] - xx[1054] *
    xx[1062] + xx[1063] * xx[1035] - xx[1030] * xx[1471];
  xx[1497] = xx[901] * xx[1007] - xx[1058] * xx[1157] - xx[1059] * xx[1158] -
    xx[1060] * xx[1159] - xx[1049] * xx[1132] - xx[1050] * xx[1133] - xx[1054] *
    xx[1140] + xx[1150] * xx[1035] - xx[1030] * xx[1472];
  xx[1508] = xx[901] * xx[1023] - xx[1058] * xx[1105] - xx[1059] * xx[1078] -
    xx[1060] * xx[1079] - xx[1049] * xx[1025] - xx[1050] * xx[1042] - xx[1054] *
    xx[1043] + xx[1044] * xx[1035] - xx[1030] * xx[1473];
  xx[1509] = xx[901] * xx[1109] - xx[1058] * xx[1189] - xx[1059] * xx[1173] -
    xx[1060] * xx[1174] - xx[1049] * xx[1134] - xx[1050] * xx[1116] - xx[1054] *
    xx[1117] + xx[1118] * xx[1035] - xx[1030] * xx[1485];
  xx[1510] = xx[901] * xx[137] - xx[1058] * xx[1224] - xx[1059] * xx[1219] - xx
    [1060] * xx[1220] - xx[1049] * xx[1155] - xx[1050] * xx[1156] - xx[1054] *
    xx[1188] + xx[1035] * xx[1216] - xx[1030] * xx[1486];
  xx[1511] = xx[901] * xx[143] - xx[1058] * xx[682] - xx[1059] * xx[488] - xx
    [1060] * xx[489] - xx[1049] * xx[144] - xx[1050] * xx[490] - xx[1054] * xx
    [527] + xx[1035] * xx[528] - xx[1030] * xx[1487];
  xx[1512] = xx[903] * xx[1125] - xx[977] * xx[1141] - xx[987] * xx[1074] - xx
    [988] * xx[1075] - xx[923] * xx[1076] - xx[975] * xx[1061] - xx[976] * xx
    [1062] + xx[915] * xx[1063] - xx[1471] * xx[921];
  xx[1471] = xx[903] * xx[1007] - xx[977] * xx[1157] - xx[987] * xx[1158] - xx
    [988] * xx[1159] - xx[923] * xx[1132] - xx[975] * xx[1133] - xx[976] * xx
    [1140] + xx[1150] * xx[915] - xx[1472] * xx[921];
  xx[1472] = xx[903] * xx[1023] - xx[977] * xx[1105] - xx[987] * xx[1078] - xx
    [988] * xx[1079] - xx[923] * xx[1025] - xx[975] * xx[1042] - xx[976] * xx
    [1043] + xx[1044] * xx[915] - xx[1473] * xx[921];
  xx[1473] = xx[903] * xx[1109] - xx[977] * xx[1189] - xx[987] * xx[1173] - xx
    [988] * xx[1174] - xx[923] * xx[1134] - xx[975] * xx[1116] - xx[976] * xx
    [1117] + xx[1118] * xx[915] - xx[1485] * xx[921];
  xx[1485] = xx[903] * xx[137] - xx[977] * xx[1224] - xx[987] * xx[1219] - xx
    [988] * xx[1220] - xx[923] * xx[1155] - xx[975] * xx[1156] - xx[976] * xx
    [1188] + xx[915] * xx[1216] - xx[1486] * xx[921];
  xx[1486] = xx[903] * xx[143] - xx[977] * xx[682] - xx[987] * xx[488] - xx[988]
    * xx[489] - xx[923] * xx[144] - xx[975] * xx[490] - xx[976] * xx[527] + xx
    [915] * xx[528] - xx[1487] * xx[921];
  pm_math_quatInverseXform(xx + 990, xx + 1145, xx + 1517);
  xx[1145] = xx[13] * state[55];
  xx[1146] = cos(xx[1145]);
  xx[1147] = 0.6743802474163428;
  xx[1487] = xx[13] * input[5];
  xx[1513] = cos(xx[1487]);
  xx[1517] = 0.1530436088432244;
  xx[1518] = sin(xx[1487]);
  xx[1487] = xx[1147] * xx[1513] + xx[1517] * xx[1518];
  xx[1523] = xx[1146] * xx[1487];
  xx[1524] = xx[1147] * xx[1518] - xx[1517] * xx[1513];
  xx[1147] = sin(xx[1145]);
  xx[1145] = xx[1524] * xx[1147];
  xx[1517] = 0.2126334745454068;
  xx[1526] = 0.6903447987706306;
  xx[1527] = xx[1517] * xx[1513] + xx[1526] * xx[1518];
  xx[1552] = xx[1526] * xx[1513] - xx[1517] * xx[1518];
  xx[1513] = xx[1527] * xx[1146] + xx[1147] * xx[1552];
  xx[1517] = - xx[1513];
  xx[1518] = xx[1527] * xx[1147] - xx[1146] * xx[1552];
  xx[1526] = xx[1147] * xx[1487] + xx[1524] * xx[1146];
  xx[1553] = xx[1523] - xx[1145];
  xx[1554] = xx[1517];
  xx[1555] = xx[1518];
  xx[1556] = xx[1526];
  xx[1557] = - state[57];
  xx[1558] = state[58];
  xx[1559] = state[59];
  xx[1560] = state[60];
  xx[1561] = 0.6390031902989547;
  xx[1562] = - 0.06142787709812805;
  xx[1563] = - 0.07530377297612073;
  xx[1564] = 0.763040549694796;
  pm_math_quatComposeInverse(xx + 1557, xx + 1561, xx + 1565);
  pm_math_quatCompose(xx + 1553, xx + 1565, xx + 1557);
  xx[1553] = xx[1566] * xx[1568];
  xx[1554] = xx[1565] * xx[1567];
  xx[1555] = xx[12] * (xx[1553] - xx[1554]);
  xx[1556] = xx[1565] * xx[1566];
  xx[1569] = xx[1567] * xx[1568];
  xx[1570] = (xx[1556] + xx[1569]) * xx[12];
  xx[1571] = xx[1566] * xx[1566];
  xx[1572] = xx[1567] * xx[1567];
  xx[1573] = (xx[1571] + xx[1572]) * xx[12];
  xx[1574] = xx[1555];
  xx[1575] = xx[1570];
  xx[1576] = xx[172] - xx[1573];
  xx[1577] = 7.069600233234095e-8;
  xx[1578] = 0.05845498436580786;
  xx[1579] = 2.575015558254249e-7;
  pm_math_cross3(xx + 1574, xx + 1577, xx + 1580);
  pm_math_quatXform(xx + 1557, xx + 1580, xx + 1574);
  xx[1557] = 7.068394618606908e-8;
  xx[1558] = 0.0584450156341071;
  xx[1559] = - 2.574148956766106e-7;
  pm_math_quatXform(xx + 1565, xx + 1557, xx + 1580);
  xx[1560] = xx[1581] * xx[1147] - xx[1146] * xx[1580];
  xx[1583] = xx[12] * xx[1147] * xx[1560] - xx[1581];
  xx[1584] = xx[1487];
  xx[1585] = xx[1524];
  xx[1586] = xx[1552];
  xx[1587] = xx[1580] + xx[12] * xx[1146] * xx[1560];
  xx[1560] = xx[1587] * xx[1552];
  xx[1588] = xx[1552] * xx[1583];
  xx[1589] = xx[1587] * xx[1487] - xx[1524] * xx[1583];
  xx[1590] = - xx[1560];
  xx[1591] = xx[1588];
  xx[1592] = xx[1589];
  pm_math_cross3(xx + 1584, xx + 1590, xx + 1593);
  xx[1590] = xx[1574] + xx[1583] + xx[12] * (xx[1593] - xx[1527] * xx[1560]);
  xx[1596] = state[57];
  xx[1597] = state[58];
  xx[1598] = state[59];
  xx[1599] = state[60];
  pm_math_quatCompose(xx + 1561, xx + 1596, xx + 1600);
  xx[1560] = xx[1602] * xx[1602];
  xx[1561] = xx[1603] * xx[1603];
  xx[1562] = (xx[1560] + xx[1561]) * xx[12] - xx[172];
  xx[1563] = xx[1600] * xx[1603];
  xx[1564] = xx[1601] * xx[1602];
  xx[1583] = (xx[1563] + xx[1564]) * xx[12];
  xx[1591] = xx[1600] * xx[1602];
  xx[1592] = xx[1601] * xx[1603];
  xx[1604] = xx[12] * (xx[1591] - xx[1592]);
  xx[1605] = xx[1562];
  xx[1606] = - xx[1583];
  xx[1607] = xx[1604];
  xx[1608] = 2.686981344948011e-5;
  xx[1609] = xx[1562] * xx[1608];
  xx[1562] = xx[1240] * xx[1583];
  xx[1583] = - xx[1562];
  xx[1610] = 2.699609151340438e-5;
  xx[1611] = xx[1610] * xx[1604];
  xx[1612] = xx[1609];
  xx[1613] = xx[1583];
  xx[1614] = xx[1611];
  pm_math_cross3(xx + 1605, xx + 1557, xx + 1615);
  xx[1604] = xx[558] * xx[1615];
  xx[1618] = xx[558] * xx[1616];
  xx[1619] = xx[558] * xx[1617];
  xx[1620] = xx[1604];
  xx[1621] = xx[1618];
  xx[1622] = xx[1619];
  xx[1623] = xx[12] * (xx[1563] - xx[1564]);
  xx[1563] = xx[1608] * xx[1623];
  xx[1564] = xx[1601] * xx[1601];
  xx[1624] = (xx[1561] + xx[1564]) * xx[12] - xx[172];
  xx[1561] = xx[1624] * xx[1240];
  xx[1625] = xx[1600] * xx[1601];
  xx[1600] = xx[1602] * xx[1603];
  xx[1601] = (xx[1625] + xx[1600]) * xx[12];
  xx[1602] = xx[1610] * xx[1601];
  xx[1603] = - xx[1602];
  xx[1626] = xx[1563];
  xx[1627] = xx[1561];
  xx[1628] = xx[1603];
  xx[1629] = xx[1623];
  xx[1630] = xx[1624];
  xx[1631] = - xx[1601];
  pm_math_cross3(xx + 1629, xx + 1557, xx + 1632);
  xx[1601] = xx[558] * xx[1632];
  xx[1623] = xx[558] * xx[1633];
  xx[1624] = xx[558] * xx[1634];
  xx[1635] = xx[1601];
  xx[1636] = xx[1623];
  xx[1637] = xx[1624];
  xx[1638] = pm_math_dot3(xx + 1605, xx + 1626) + pm_math_dot3(xx + 1615, xx +
    1635);
  xx[1639] = (xx[1591] + xx[1592]) * xx[12];
  xx[1591] = xx[1608] * xx[1639];
  xx[1592] = - xx[1591];
  xx[1640] = xx[12] * (xx[1625] - xx[1600]);
  xx[1600] = xx[1240] * xx[1640];
  xx[1625] = (xx[1564] + xx[1560]) * xx[12] - xx[172];
  xx[1560] = xx[1625] * xx[1610];
  xx[1641] = xx[1592];
  xx[1642] = xx[1600];
  xx[1643] = xx[1560];
  xx[1644] = - xx[1639];
  xx[1645] = xx[1640];
  xx[1646] = xx[1625];
  pm_math_cross3(xx + 1644, xx + 1557, xx + 1647);
  xx[1564] = xx[558] * xx[1647];
  xx[1625] = xx[558] * xx[1648];
  xx[1639] = xx[558] * xx[1649];
  xx[1650] = xx[1564];
  xx[1651] = xx[1625];
  xx[1652] = xx[1639];
  xx[1640] = pm_math_dot3(xx + 1605, xx + 1641) + pm_math_dot3(xx + 1615, xx +
    1650);
  xx[1653] = pm_math_dot3(xx + 1629, xx + 1641) + pm_math_dot3(xx + 1632, xx +
    1650);
  xx[1654] = pm_math_dot3(xx + 1605, xx + 1612) + pm_math_dot3(xx + 1615, xx +
    1620);
  xx[1655] = xx[1638];
  xx[1656] = xx[1640];
  xx[1657] = xx[1638];
  xx[1658] = pm_math_dot3(xx + 1629, xx + 1626) + pm_math_dot3(xx + 1632, xx +
    1635);
  xx[1659] = xx[1653];
  xx[1660] = xx[1640];
  xx[1661] = xx[1653];
  xx[1662] = pm_math_dot3(xx + 1644, xx + 1641) + pm_math_dot3(xx + 1647, xx +
    1650);
  ii[0] = factorSymmetricPosDef(xx + 1654, 3, xx + 1612);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_5/Spherical Joint5' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[1612] = xx[1145] - xx[1523];
  xx[1635] = - xx[1612];
  xx[1636] = xx[1517];
  xx[1637] = xx[1518];
  xx[1638] = xx[1526];
  pm_math_quatCompose(xx + 1635, xx + 1565, xx + 1640);
  xx[1145] = xx[1568] * xx[1568];
  xx[1517] = xx[1565] * xx[1568];
  xx[1523] = xx[1566] * xx[1567];
  xx[1620] = (xx[1572] + xx[1145]) * xx[12] - xx[172];
  xx[1621] = xx[12] * (xx[1517] - xx[1523]);
  xx[1622] = - ((xx[1554] + xx[1553]) * xx[12]);
  pm_math_cross3(xx + 1620, xx + 1577, xx + 1626);
  pm_math_quatXform(xx + 1640, xx + 1626, xx + 1650);
  pm_math_cross3(xx + 1620, xx + 1557, xx + 1626);
  pm_math_quatXform(xx + 1565, xx + 1626, xx + 1620);
  pm_math_quatXform(xx + 1635, xx + 1620, xx + 1626);
  xx[1613] = xx[1650] + xx[1626];
  xx[1620] = - ((xx[1517] + xx[1523]) * xx[12]);
  xx[1621] = (xx[1145] + xx[1571]) * xx[12] - xx[172];
  xx[1622] = xx[12] * (xx[1556] - xx[1569]);
  pm_math_cross3(xx + 1620, xx + 1577, xx + 1663);
  pm_math_quatXform(xx + 1640, xx + 1663, xx + 1666);
  pm_math_cross3(xx + 1620, xx + 1557, xx + 1663);
  pm_math_quatXform(xx + 1565, xx + 1663, xx + 1620);
  pm_math_quatXform(xx + 1635, xx + 1620, xx + 1663);
  xx[1614] = xx[1666] + xx[1663];
  xx[1620] = xx[12] * (xx[1554] - xx[1553]);
  xx[1621] = - xx[1570];
  xx[1622] = xx[1573] - xx[172];
  pm_math_cross3(xx + 1620, xx + 1577, xx + 1669);
  pm_math_quatXform(xx + 1640, xx + 1669, xx + 1672);
  pm_math_cross3(xx + 1620, xx + 1557, xx + 1640);
  pm_math_quatXform(xx + 1565, xx + 1640, xx + 1620);
  pm_math_quatXform(xx + 1635, xx + 1620, xx + 1640);
  xx[1570] = xx[1672] + xx[1640];
  xx[1620] = xx[1613];
  xx[1621] = xx[1614];
  xx[1622] = xx[1570];
  solveSymmetricPosDef(xx + 1654, xx + 1620, 3, 1, xx + 1669, xx + 1675);
  xx[1620] = xx[1669] * xx[1609] + xx[1670] * xx[1563] - xx[1671] * xx[1591];
  xx[1621] = xx[1670] * xx[1561] - xx[1669] * xx[1562] + xx[1671] * xx[1600];
  xx[1622] = xx[1669] * xx[1611] - xx[1670] * xx[1602] + xx[1671] * xx[1560];
  pm_math_quatXform(xx + 1565, xx + 1620, xx + 1675);
  xx[1620] = xx[1669] * xx[1604] + xx[1670] * xx[1601] + xx[1671] * xx[1564];
  xx[1621] = xx[1669] * xx[1618] + xx[1670] * xx[1623] + xx[1671] * xx[1625];
  xx[1622] = xx[1669] * xx[1619] + xx[1670] * xx[1624] + xx[1671] * xx[1639];
  pm_math_quatXform(xx + 1565, xx + 1620, xx + 1678);
  pm_math_cross3(xx + 1580, xx + 1678, xx + 1620);
  xx[1573] = xx[1565] * xx[1565];
  xx[1620] = (xx[1573] + xx[1571]) * xx[12] - xx[172];
  xx[1571] = xx[12] * (xx[1523] - xx[1517]);
  xx[1621] = (xx[1553] + xx[1554]) * xx[12];
  xx[1553] = (xx[1523] + xx[1517]) * xx[12];
  xx[1517] = (xx[1573] + xx[1572]) * xx[12] - xx[172];
  xx[1523] = xx[12] * (xx[1569] - xx[1556]);
  xx[1554] = (xx[1569] + xx[1556]) * xx[12];
  xx[1556] = (xx[1573] + xx[1145]) * xx[12] - xx[172];
  xx[1678] = xx[1620];
  xx[1679] = xx[1571];
  xx[1680] = xx[1621];
  xx[1681] = xx[1553];
  xx[1682] = xx[1517];
  xx[1683] = xx[1523];
  xx[1684] = xx[1555];
  xx[1685] = xx[1554];
  xx[1686] = xx[1556];
  xx[1687] = xx[1609];
  xx[1688] = xx[1563];
  xx[1689] = xx[1592];
  xx[1690] = xx[1583];
  xx[1691] = xx[1561];
  xx[1692] = xx[1600];
  xx[1693] = xx[1611];
  xx[1694] = xx[1603];
  xx[1695] = xx[1560];
  xx[1696] = xx[1604];
  xx[1697] = xx[1601];
  xx[1698] = xx[1564];
  xx[1699] = xx[1618];
  xx[1700] = xx[1623];
  xx[1701] = xx[1625];
  xx[1702] = xx[1619];
  xx[1703] = xx[1624];
  xx[1704] = xx[1639];
  solveSymmetricPosDef(xx + 1654, xx + 1687, 3, 6, xx + 1705, xx + 1723);
  xx[1145] = - (xx[1706] * xx[1561] - xx[1705] * xx[1562] + xx[1707] * xx[1600]);
  xx[1569] = - (xx[1705] * xx[1611] - xx[1706] * xx[1602] + xx[1707] * xx[1560]);
  xx[1572] = - (xx[1708] * xx[1611] - xx[1709] * xx[1602] + xx[1710] * xx[1560]);
  xx[1687] = xx[1608] - (xx[1705] * xx[1609] + xx[1706] * xx[1563] - xx[1707] *
    xx[1591]);
  xx[1688] = xx[1145];
  xx[1689] = xx[1569];
  xx[1690] = xx[1145];
  xx[1691] = xx[1240] - (xx[1709] * xx[1561] - xx[1708] * xx[1562] + xx[1710] *
    xx[1600]);
  xx[1692] = xx[1572];
  xx[1693] = xx[1569];
  xx[1694] = xx[1572];
  xx[1695] = xx[1610] - (xx[1711] * xx[1611] - xx[1712] * xx[1602] + xx[1713] *
    xx[1560]);
  pm_math_matrix3x3ComposeTranspose(xx + 1687, xx + 1678, xx + 1696);
  pm_math_matrix3x3Compose(xx + 1678, xx + 1696, xx + 1687);
  xx[1696] = xx[1716] * xx[1591] - (xx[1714] * xx[1609] + xx[1715] * xx[1563]);
  xx[1697] = xx[1719] * xx[1591] - (xx[1717] * xx[1609] + xx[1718] * xx[1563]);
  xx[1698] = xx[1722] * xx[1591] - (xx[1720] * xx[1609] + xx[1721] * xx[1563]);
  xx[1699] = - (xx[1715] * xx[1561] - xx[1714] * xx[1562] + xx[1716] * xx[1600]);
  xx[1700] = - (xx[1718] * xx[1561] - xx[1717] * xx[1562] + xx[1719] * xx[1600]);
  xx[1701] = - (xx[1721] * xx[1561] - xx[1720] * xx[1562] + xx[1722] * xx[1600]);
  xx[1702] = - (xx[1714] * xx[1611] - xx[1715] * xx[1602] + xx[1716] * xx[1560]);
  xx[1703] = - (xx[1717] * xx[1611] - xx[1718] * xx[1602] + xx[1719] * xx[1560]);
  xx[1704] = - (xx[1720] * xx[1611] - xx[1721] * xx[1602] + xx[1722] * xx[1560]);
  pm_math_matrix3x3ComposeTranspose(xx + 1696, xx + 1678, xx + 1723);
  pm_math_matrix3x3Compose(xx + 1678, xx + 1723, xx + 1696);
  pm_math_matrix3x3PostCross(xx + 1696, xx + 1580, xx + 1723);
  xx[1145] = - (xx[1714] * xx[1618] + xx[1715] * xx[1623] + xx[1716] * xx[1625]);
  xx[1569] = - (xx[1714] * xx[1619] + xx[1715] * xx[1624] + xx[1716] * xx[1639]);
  xx[1572] = - (xx[1717] * xx[1619] + xx[1718] * xx[1624] + xx[1719] * xx[1639]);
  xx[1732] = xx[558] - (xx[1714] * xx[1604] + xx[1715] * xx[1601] + xx[1716] *
                        xx[1564]);
  xx[1733] = xx[1145];
  xx[1734] = xx[1569];
  xx[1735] = xx[1145];
  xx[1736] = xx[558] - (xx[1717] * xx[1618] + xx[1718] * xx[1623] + xx[1719] *
                        xx[1625]);
  xx[1737] = xx[1572];
  xx[1738] = xx[1569];
  xx[1739] = xx[1572];
  xx[1740] = xx[558] - (xx[1720] * xx[1619] + xx[1721] * xx[1624] + xx[1722] *
                        xx[1639]);
  pm_math_matrix3x3ComposeTranspose(xx + 1732, xx + 1678, xx + 1741);
  pm_math_matrix3x3Compose(xx + 1678, xx + 1741, xx + 1732);
  pm_math_matrix3x3PostCross(xx + 1732, xx + 1580, xx + 1678);
  pm_math_matrix3x3PreCross(xx + 1678, xx + 1580, xx + 1732);
  xx[1145] = xx[52] + xx[1695] - xx[1731] - xx[1731] - xx[1740];
  memcpy(xx + 1569, xx + 1145, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 1569, 1, xx + 1572);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_5/Revolute5' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1572] = (xx[1590] - (xx[1677] + xx[1622])) / xx[1569];
  xx[1675] = xx[1705];
  xx[1676] = xx[1708];
  xx[1677] = xx[1711];
  xx[1573] = xx[1572] * xx[1566];
  xx[1583] = xx[1572] * xx[1567];
  xx[1684] = xx[12] * (xx[1568] * xx[1573] - xx[1565] * xx[1583]);
  xx[1685] = (xx[1565] * xx[1573] + xx[1568] * xx[1583]) * xx[12];
  xx[1686] = xx[1572] - (xx[1566] * xx[1573] + xx[1567] * xx[1583]) * xx[12];
  xx[1687] = xx[1714];
  xx[1688] = xx[1717];
  xx[1689] = xx[1720];
  xx[1573] = xx[1572] * xx[1580];
  xx[1583] = xx[1568] * xx[1573];
  xx[1592] = xx[1572] * xx[1581];
  xx[1603] = xx[1568] * xx[1592];
  xx[1622] = xx[1566] * xx[1573] + xx[1567] * xx[1592];
  xx[1690] = - xx[1583];
  xx[1691] = - xx[1603];
  xx[1692] = xx[1622];
  pm_math_cross3(xx + 1566, xx + 1690, xx + 1693);
  xx[1690] = (xx[1565] * xx[1583] + xx[1693]) * xx[12] - xx[1592];
  xx[1691] = xx[1573] + (xx[1565] * xx[1603] + xx[1694]) * xx[12];
  xx[1692] = xx[12] * (xx[1695] - xx[1622] * xx[1565]);
  xx[1693] = xx[1706];
  xx[1694] = xx[1709];
  xx[1695] = xx[1712];
  xx[1696] = xx[1715];
  xx[1697] = xx[1718];
  xx[1698] = xx[1721];
  xx[1699] = xx[1707];
  xx[1700] = xx[1710];
  xx[1701] = xx[1713];
  xx[1704] = xx[1716];
  xx[1705] = xx[1719];
  xx[1706] = xx[1722];
  pm_math_quatInverseXform(xx + 990, xx + 1166, xx + 1707);
  xx[1166] = xx[997] - xx[335] * xx[1709];
  xx[997] = xx[1575] + xx[1587] + (xx[1527] * xx[1588] + xx[1594]) * xx[12];
  xx[1167] = xx[1651] + xx[1627];
  xx[1168] = xx[1667] + xx[1664];
  xx[1573] = xx[1673] + xx[1641];
  xx[1707] = xx[1167];
  xx[1708] = xx[1168];
  xx[1709] = xx[1573];
  solveSymmetricPosDef(xx + 1654, xx + 1707, 3, 1, xx + 1710, xx + 1713);
  xx[1707] = xx[1710] * xx[1609] + xx[1711] * xx[1563] - xx[1712] * xx[1591];
  xx[1708] = xx[1711] * xx[1561] - xx[1710] * xx[1562] + xx[1712] * xx[1600];
  xx[1709] = xx[1710] * xx[1611] - xx[1711] * xx[1602] + xx[1712] * xx[1560];
  pm_math_quatXform(xx + 1565, xx + 1707, xx + 1713);
  xx[1707] = xx[1710] * xx[1604] + xx[1711] * xx[1601] + xx[1712] * xx[1564];
  xx[1708] = xx[1710] * xx[1618] + xx[1711] * xx[1623] + xx[1712] * xx[1625];
  xx[1709] = xx[1710] * xx[1619] + xx[1711] * xx[1624] + xx[1712] * xx[1639];
  pm_math_quatXform(xx + 1565, xx + 1707, xx + 1716);
  pm_math_cross3(xx + 1580, xx + 1716, xx + 1707);
  xx[1583] = (xx[997] - (xx[1715] + xx[1709])) / xx[1569];
  xx[1587] = xx[1583] * xx[1566];
  xx[1588] = xx[1583] * xx[1567];
  xx[1707] = xx[12] * (xx[1568] * xx[1587] - xx[1565] * xx[1588]);
  xx[1708] = (xx[1565] * xx[1587] + xx[1568] * xx[1588]) * xx[12];
  xx[1709] = xx[1583] - (xx[1566] * xx[1587] + xx[1567] * xx[1588]) * xx[12];
  xx[1587] = xx[1583] * xx[1580];
  xx[1588] = xx[1568] * xx[1587];
  xx[1592] = xx[1583] * xx[1581];
  xx[1603] = xx[1568] * xx[1592];
  xx[1622] = xx[1566] * xx[1587] + xx[1567] * xx[1592];
  xx[1713] = - xx[1588];
  xx[1714] = - xx[1603];
  xx[1715] = xx[1622];
  pm_math_cross3(xx + 1566, xx + 1713, xx + 1716);
  xx[1713] = (xx[1565] * xx[1588] + xx[1716]) * xx[12] - xx[1592];
  xx[1714] = xx[1587] + (xx[1565] * xx[1603] + xx[1717]) * xx[12];
  xx[1715] = xx[12] * (xx[1718] - xx[1622] * xx[1565]);
  xx[1587] = xx[1710] - (pm_math_dot3(xx + 1675, xx + 1707) + pm_math_dot3(xx +
    1687, xx + 1713));
  xx[1588] = xx[1711] - (pm_math_dot3(xx + 1693, xx + 1707) + pm_math_dot3(xx +
    1696, xx + 1713));
  xx[1592] = xx[1712] - (pm_math_dot3(xx + 1699, xx + 1707) + pm_math_dot3(xx +
    1704, xx + 1713));
  xx[1603] = xx[1135] * xx[1007] - xx[1052] * xx[1157] - xx[1057] * xx[1158] -
    xx[1077] * xx[1159] - xx[1039] * xx[1132] - xx[1041] * xx[1133] - xx[1051] *
    xx[1140] + xx[1150] * xx[1012] + xx[1166] * xx[995] + xx[1590] * xx[1583] +
    xx[1613] * xx[1587] + xx[1614] * xx[1588] + xx[1570] * xx[1592];
  pm_math_quatInverseXform(xx + 990, xx + 1088, xx + 1707);
  xx[1088] = xx[994] - xx[335] * xx[1709];
  xx[994] = xx[1576] + (xx[1527] * xx[1589] + xx[1595]) * xx[12];
  xx[1089] = xx[1652] + xx[1628];
  xx[1090] = xx[1668] + xx[1665];
  xx[1574] = xx[1674] + xx[1642];
  xx[1593] = xx[1089];
  xx[1594] = xx[1090];
  xx[1595] = xx[1574];
  solveSymmetricPosDef(xx + 1654, xx + 1593, 3, 1, xx + 1626, xx + 1640);
  xx[1593] = xx[1626] * xx[1609] + xx[1627] * xx[1563] - xx[1628] * xx[1591];
  xx[1594] = xx[1627] * xx[1561] - xx[1626] * xx[1562] + xx[1628] * xx[1600];
  xx[1595] = xx[1626] * xx[1611] - xx[1627] * xx[1602] + xx[1628] * xx[1560];
  pm_math_quatXform(xx + 1565, xx + 1593, xx + 1640);
  xx[1593] = xx[1626] * xx[1604] + xx[1627] * xx[1601] + xx[1628] * xx[1564];
  xx[1594] = xx[1626] * xx[1618] + xx[1627] * xx[1623] + xx[1628] * xx[1625];
  xx[1595] = xx[1626] * xx[1619] + xx[1627] * xx[1624] + xx[1628] * xx[1639];
  pm_math_quatXform(xx + 1565, xx + 1593, xx + 1650);
  pm_math_cross3(xx + 1580, xx + 1650, xx + 1593);
  xx[1575] = (xx[994] - (xx[1642] + xx[1595])) / xx[1569];
  xx[1576] = xx[1575] * xx[1566];
  xx[1589] = xx[1575] * xx[1567];
  xx[1593] = xx[12] * (xx[1568] * xx[1576] - xx[1565] * xx[1589]);
  xx[1594] = (xx[1565] * xx[1576] + xx[1568] * xx[1589]) * xx[12];
  xx[1595] = xx[1575] - (xx[1566] * xx[1576] + xx[1567] * xx[1589]) * xx[12];
  xx[1576] = xx[1575] * xx[1580];
  xx[1589] = xx[1568] * xx[1576];
  xx[1622] = xx[1575] * xx[1581];
  xx[1640] = xx[1568] * xx[1622];
  xx[1641] = xx[1566] * xx[1576] + xx[1567] * xx[1622];
  xx[1650] = - xx[1589];
  xx[1651] = - xx[1640];
  xx[1652] = xx[1641];
  pm_math_cross3(xx + 1566, xx + 1650, xx + 1663);
  xx[1650] = (xx[1565] * xx[1589] + xx[1663]) * xx[12] - xx[1622];
  xx[1651] = xx[1576] + (xx[1565] * xx[1640] + xx[1664]) * xx[12];
  xx[1652] = xx[12] * (xx[1665] - xx[1641] * xx[1565]);
  xx[1576] = xx[1626] - (pm_math_dot3(xx + 1675, xx + 1593) + pm_math_dot3(xx +
    1687, xx + 1650));
  xx[1589] = xx[1627] - (pm_math_dot3(xx + 1693, xx + 1593) + pm_math_dot3(xx +
    1696, xx + 1650));
  xx[1622] = xx[1628] - (pm_math_dot3(xx + 1699, xx + 1593) + pm_math_dot3(xx +
    1704, xx + 1650));
  xx[1593] = xx[1135] * xx[1023] - xx[1052] * xx[1105] - xx[1057] * xx[1078] -
    xx[1077] * xx[1079] - xx[1039] * xx[1025] - xx[1041] * xx[1042] - xx[1051] *
    xx[1043] + xx[1044] * xx[1012] + xx[1088] * xx[995] + xx[1590] * xx[1575] +
    xx[1613] * xx[1576] + xx[1614] * xx[1589] + xx[1570] * xx[1622];
  pm_math_quatInverseXform(xx + 990, xx + 1203, xx + 1626);
  xx[1594] = xx[335] * xx[1628];
  xx[1595] = xx[1135] * xx[1109] - xx[1052] * xx[1189] - xx[1057] * xx[1173] -
    xx[1077] * xx[1174] - xx[1039] * xx[1134] - xx[1041] * xx[1116] - xx[1051] *
    xx[1117] + xx[1118] * xx[1012] - xx[995] * xx[1594];
  pm_math_quatInverseXform(xx + 990, xx + 1228, xx + 1626);
  xx[1626] = xx[335] * xx[1628];
  xx[1627] = xx[1135] * xx[137] - xx[1052] * xx[1224] - xx[1057] * xx[1219] -
    xx[1077] * xx[1220] - xx[1039] * xx[1155] - xx[1041] * xx[1156] - xx[1051] *
    xx[1188] + xx[1012] * xx[1216] - xx[995] * xx[1626];
  pm_math_quatInverseXform(xx + 990, xx + 642, xx + 1640);
  xx[1628] = xx[335] * xx[1642];
  xx[1640] = xx[1135] * xx[143] - xx[1052] * xx[682] - xx[1057] * xx[488] - xx
    [1077] * xx[489] - xx[1039] * xx[144] - xx[1041] * xx[490] - xx[1051] * xx
    [527] + xx[1012] * xx[528] - xx[995] * xx[1628];
  xx[1641] = xx[998] * xx[1023] - xx[1161] * xx[1105] - xx[1162] * xx[1078] -
    xx[1163] * xx[1079] - xx[1148] * xx[1025] - xx[1153] * xx[1042] - xx[1154] *
    xx[1043] + xx[1127] * xx[1044] + xx[1088] * xx[1139] + xx[997] * xx[1575] +
    xx[1167] * xx[1576] + xx[1168] * xx[1589] + xx[1573] * xx[1622];
  xx[1642] = xx[998] * xx[1109] - xx[1161] * xx[1189] - xx[1162] * xx[1173] -
    xx[1163] * xx[1174] - xx[1148] * xx[1134] - xx[1153] * xx[1116] - xx[1154] *
    xx[1117] + xx[1118] * xx[1127] - xx[1139] * xx[1594];
  xx[1643] = xx[998] * xx[137] - xx[1161] * xx[1224] - xx[1162] * xx[1219] - xx
    [1163] * xx[1220] - xx[1148] * xx[1155] - xx[1153] * xx[1156] - xx[1154] *
    xx[1188] + xx[1127] * xx[1216] - xx[1139] * xx[1626];
  xx[1650] = xx[998] * xx[143] - xx[1161] * xx[682] - xx[1162] * xx[488] - xx
    [1163] * xx[489] - xx[1148] * xx[144] - xx[1153] * xx[490] - xx[1154] * xx
    [527] + xx[1127] * xx[528] - xx[1139] * xx[1628];
  xx[1651] = xx[1018] * xx[1109] - xx[1066] * xx[1189] - xx[1084] * xx[1173] -
    xx[1085] * xx[1174] - xx[1026] * xx[1134] - xx[1064] * xx[1116] - xx[1065] *
    xx[1117] + xx[1118] * xx[1016] - xx[1594] * xx[1017];
  xx[1594] = xx[1018] * xx[137] - xx[1066] * xx[1224] - xx[1084] * xx[1219] -
    xx[1085] * xx[1220] - xx[1026] * xx[1155] - xx[1064] * xx[1156] - xx[1065] *
    xx[1188] + xx[1016] * xx[1216] - xx[1626] * xx[1017];
  xx[1626] = xx[1018] * xx[143] - xx[1066] * xx[682] - xx[1084] * xx[488] - xx
    [1085] * xx[489] - xx[1026] * xx[144] - xx[1064] * xx[490] - xx[1065] * xx
    [527] + xx[1016] * xx[528] - xx[1628] * xx[1017];
  pm_math_quatInverseXform(xx + 100, xx + 1203, xx + 1663);
  xx[1203] = xx[13] * state[64];
  xx[1204] = cos(xx[1203]);
  xx[1205] = 0.6743807558001905;
  xx[1628] = xx[13] * input[2];
  xx[13] = cos(xx[1628]);
  xx[1652] = 0.1530413686538698;
  xx[1653] = sin(xx[1628]);
  xx[1628] = xx[1205] * xx[13] + xx[1652] * xx[1653];
  xx[1663] = xx[1204] * xx[1628];
  xx[1664] = xx[1652] * xx[13] - xx[1205] * xx[1653];
  xx[1205] = sin(xx[1203]);
  xx[1203] = xx[1664] * xx[1205];
  xx[1652] = 0.2126357677645524;
  xx[1666] = 0.690344092430792;
  xx[1667] = xx[1652] * xx[1653] - xx[1666] * xx[13];
  xx[1668] = xx[1652] * xx[13] + xx[1666] * xx[1653];
  xx[13] = xx[1205] * xx[1667] - xx[1668] * xx[1204];
  xx[1652] = - xx[13];
  xx[1653] = xx[1668] * xx[1205] + xx[1204] * xx[1667];
  xx[1666] = - xx[1653];
  xx[1672] = xx[1664] * xx[1204] - xx[1205] * xx[1628];
  xx[1707] = - (xx[1663] + xx[1203]);
  xx[1708] = xx[1652];
  xx[1709] = xx[1666];
  xx[1710] = xx[1672];
  xx[1711] = - state[66];
  xx[1712] = state[67];
  xx[1713] = state[68];
  xx[1714] = state[69];
  xx[1715] = 0.03228380479922692;
  xx[1716] = - 0.1014724376522449;
  xx[1717] = - 0.02140705865916673;
  xx[1718] = 0.9940839190853857;
  pm_math_quatComposeInverse(xx + 1711, xx + 1715, xx + 1719);
  pm_math_quatCompose(xx + 1707, xx + 1719, xx + 1711);
  xx[1673] = xx[1720] * xx[1722];
  xx[1674] = xx[1719] * xx[1721];
  xx[1678] = xx[12] * (xx[1673] - xx[1674]);
  xx[1679] = xx[1719] * xx[1720];
  xx[1681] = xx[1721] * xx[1722];
  xx[1682] = (xx[1679] + xx[1681]) * xx[12];
  xx[1707] = xx[1720] * xx[1720];
  xx[1708] = xx[1721] * xx[1721];
  xx[1709] = (xx[1707] + xx[1708]) * xx[12];
  xx[1723] = xx[1678];
  xx[1724] = xx[1682];
  xx[1725] = xx[172] - xx[1709];
  xx[1726] = 7.069600213271652e-8;
  xx[1727] = xx[603];
  xx[1728] = 2.575015558861548e-7;
  pm_math_cross3(xx + 1723, xx + 1726, xx + 1729);
  pm_math_quatXform(xx + 1711, xx + 1729, xx + 1723);
  xx[1710] = 7.068375803486764e-8;
  xx[1711] = 0.05844501563418947;
  xx[1712] = - 2.574148387902545e-7;
  pm_math_quatXform(xx + 1719, xx + 1710, xx + 1729);
  xx[603] = xx[1730] * xx[1205] - xx[1204] * xx[1729];
  xx[1713] = 1.735132426627928e-13;
  xx[1714] = 7.202511642656616e-14;
  xx[1732] = xx[1713] * xx[1204] + xx[1714] * xx[1205];
  xx[1733] = xx[12] * xx[1732] * xx[1205];
  xx[1734] = xx[12] * xx[1205] * xx[603] - (xx[1730] - xx[1733]) - xx[1714];
  xx[1735] = - xx[1628];
  xx[1736] = xx[1735];
  xx[1737] = xx[1664];
  xx[1738] = xx[1667];
  xx[1739] = xx[12] * xx[1732] * xx[1204];
  xx[1732] = xx[1729] + xx[12] * xx[1204] * xx[603] + xx[1739] - xx[1713];
  xx[603] = xx[1732] * xx[1667];
  xx[1740] = xx[1734] * xx[1667];
  xx[1741] = xx[1732] * xx[1628] + xx[1664] * xx[1734];
  xx[1742] = - xx[603];
  xx[1743] = xx[1740];
  xx[1744] = - xx[1741];
  pm_math_cross3(xx + 1736, xx + 1742, xx + 1745);
  xx[1742] = xx[1723] + xx[1734] + xx[12] * (xx[1745] + xx[1668] * xx[603]);
  xx[1748] = state[66];
  xx[1749] = state[67];
  xx[1750] = state[68];
  xx[1751] = state[69];
  pm_math_quatCompose(xx + 1715, xx + 1748, xx + 1752);
  xx[603] = xx[1754] * xx[1754];
  xx[1715] = xx[1755] * xx[1755];
  xx[1716] = (xx[603] + xx[1715]) * xx[12] - xx[172];
  xx[1717] = xx[1752] * xx[1755];
  xx[1718] = xx[1753] * xx[1754];
  xx[1734] = (xx[1717] + xx[1718]) * xx[12];
  xx[1743] = xx[1752] * xx[1754];
  xx[1744] = xx[1753] * xx[1755];
  xx[1756] = xx[12] * (xx[1743] - xx[1744]);
  xx[1757] = xx[1716];
  xx[1758] = - xx[1734];
  xx[1759] = xx[1756];
  xx[1760] = xx[1716] * xx[29];
  xx[1716] = xx[1240] * xx[1734];
  xx[1734] = - xx[1716];
  xx[1761] = xx[18] * xx[1756];
  xx[1762] = xx[1760];
  xx[1763] = xx[1734];
  xx[1764] = xx[1761];
  pm_math_cross3(xx + 1757, xx + 1710, xx + 1765);
  xx[1756] = xx[558] * xx[1765];
  xx[1768] = xx[558] * xx[1766];
  xx[1769] = xx[558] * xx[1767];
  xx[1770] = xx[1756];
  xx[1771] = xx[1768];
  xx[1772] = xx[1769];
  xx[1773] = xx[12] * (xx[1717] - xx[1718]);
  xx[1717] = xx[29] * xx[1773];
  xx[1718] = xx[1753] * xx[1753];
  xx[1774] = (xx[1715] + xx[1718]) * xx[12] - xx[172];
  xx[1715] = xx[1774] * xx[1240];
  xx[1775] = xx[1752] * xx[1753];
  xx[1752] = xx[1754] * xx[1755];
  xx[1753] = (xx[1775] + xx[1752]) * xx[12];
  xx[1754] = xx[18] * xx[1753];
  xx[1755] = - xx[1754];
  xx[1776] = xx[1717];
  xx[1777] = xx[1715];
  xx[1778] = xx[1755];
  xx[1779] = xx[1773];
  xx[1780] = xx[1774];
  xx[1781] = - xx[1753];
  pm_math_cross3(xx + 1779, xx + 1710, xx + 1782);
  xx[1753] = xx[558] * xx[1782];
  xx[1773] = xx[558] * xx[1783];
  xx[1774] = xx[558] * xx[1784];
  xx[1785] = xx[1753];
  xx[1786] = xx[1773];
  xx[1787] = xx[1774];
  xx[1788] = pm_math_dot3(xx + 1757, xx + 1776) + pm_math_dot3(xx + 1765, xx +
    1785);
  xx[1789] = (xx[1743] + xx[1744]) * xx[12];
  xx[1743] = xx[29] * xx[1789];
  xx[1744] = - xx[1743];
  xx[1790] = xx[12] * (xx[1775] - xx[1752]);
  xx[1752] = xx[1240] * xx[1790];
  xx[1775] = (xx[1718] + xx[603]) * xx[12] - xx[172];
  xx[603] = xx[1775] * xx[18];
  xx[1791] = xx[1744];
  xx[1792] = xx[1752];
  xx[1793] = xx[603];
  xx[1794] = - xx[1789];
  xx[1795] = xx[1790];
  xx[1796] = xx[1775];
  pm_math_cross3(xx + 1794, xx + 1710, xx + 1797);
  xx[1718] = xx[558] * xx[1797];
  xx[1775] = xx[558] * xx[1798];
  xx[1789] = xx[558] * xx[1799];
  xx[1800] = xx[1718];
  xx[1801] = xx[1775];
  xx[1802] = xx[1789];
  xx[1790] = pm_math_dot3(xx + 1757, xx + 1791) + pm_math_dot3(xx + 1765, xx +
    1800);
  xx[1803] = pm_math_dot3(xx + 1779, xx + 1791) + pm_math_dot3(xx + 1782, xx +
    1800);
  xx[1804] = pm_math_dot3(xx + 1757, xx + 1762) + pm_math_dot3(xx + 1765, xx +
    1770);
  xx[1805] = xx[1788];
  xx[1806] = xx[1790];
  xx[1807] = xx[1788];
  xx[1808] = pm_math_dot3(xx + 1779, xx + 1776) + pm_math_dot3(xx + 1782, xx +
    1785);
  xx[1809] = xx[1803];
  xx[1810] = xx[1790];
  xx[1811] = xx[1803];
  xx[1812] = pm_math_dot3(xx + 1794, xx + 1791) + pm_math_dot3(xx + 1797, xx +
    1800);
  ii[0] = factorSymmetricPosDef(xx + 1804, 3, xx + 1762);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_6/Spherical Joint3' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[1762] = xx[1203] + xx[1663];
  xx[1785] = - xx[1762];
  xx[1786] = xx[1652];
  xx[1787] = xx[1666];
  xx[1788] = xx[1672];
  pm_math_quatCompose(xx + 1785, xx + 1719, xx + 1790);
  xx[1203] = xx[1722] * xx[1722];
  xx[1652] = xx[1719] * xx[1722];
  xx[1663] = xx[1720] * xx[1721];
  xx[1770] = (xx[1708] + xx[1203]) * xx[12] - xx[172];
  xx[1771] = xx[12] * (xx[1652] - xx[1663]);
  xx[1772] = - ((xx[1674] + xx[1673]) * xx[12]);
  pm_math_cross3(xx + 1770, xx + 1726, xx + 1776);
  pm_math_quatXform(xx + 1790, xx + 1776, xx + 1800);
  pm_math_cross3(xx + 1770, xx + 1710, xx + 1776);
  pm_math_quatXform(xx + 1719, xx + 1776, xx + 1770);
  pm_math_quatXform(xx + 1785, xx + 1770, xx + 1776);
  xx[1666] = xx[1800] + xx[1776];
  xx[1770] = - ((xx[1652] + xx[1663]) * xx[12]);
  xx[1771] = (xx[1203] + xx[1707]) * xx[12] - xx[172];
  xx[1772] = xx[12] * (xx[1679] - xx[1681]);
  pm_math_cross3(xx + 1770, xx + 1726, xx + 1813);
  pm_math_quatXform(xx + 1790, xx + 1813, xx + 1816);
  pm_math_cross3(xx + 1770, xx + 1710, xx + 1813);
  pm_math_quatXform(xx + 1719, xx + 1813, xx + 1770);
  pm_math_quatXform(xx + 1785, xx + 1770, xx + 1813);
  xx[1763] = xx[1816] + xx[1813];
  xx[1770] = xx[12] * (xx[1674] - xx[1673]);
  xx[1771] = - xx[1682];
  xx[1772] = xx[1709] - xx[172];
  pm_math_cross3(xx + 1770, xx + 1726, xx + 1819);
  pm_math_quatXform(xx + 1790, xx + 1819, xx + 1822);
  pm_math_cross3(xx + 1770, xx + 1710, xx + 1790);
  pm_math_quatXform(xx + 1719, xx + 1790, xx + 1770);
  pm_math_quatXform(xx + 1785, xx + 1770, xx + 1790);
  xx[1682] = xx[1822] + xx[1790];
  xx[1770] = xx[1666];
  xx[1771] = xx[1763];
  xx[1772] = xx[1682];
  solveSymmetricPosDef(xx + 1804, xx + 1770, 3, 1, xx + 1819, xx + 1825);
  xx[1770] = xx[1819] * xx[1760] + xx[1820] * xx[1717] - xx[1821] * xx[1743];
  xx[1771] = xx[1820] * xx[1715] - xx[1819] * xx[1716] + xx[1821] * xx[1752];
  xx[1772] = xx[1819] * xx[1761] - xx[1820] * xx[1754] + xx[1821] * xx[603];
  pm_math_quatXform(xx + 1719, xx + 1770, xx + 1825);
  xx[1770] = xx[1819] * xx[1756] + xx[1820] * xx[1753] + xx[1821] * xx[1718];
  xx[1771] = xx[1819] * xx[1768] + xx[1820] * xx[1773] + xx[1821] * xx[1775];
  xx[1772] = xx[1819] * xx[1769] + xx[1820] * xx[1774] + xx[1821] * xx[1789];
  pm_math_quatXform(xx + 1719, xx + 1770, xx + 1828);
  pm_math_cross3(xx + 1729, xx + 1828, xx + 1770);
  xx[1709] = xx[1719] * xx[1719];
  xx[1764] = (xx[1709] + xx[1707]) * xx[12] - xx[172];
  xx[1707] = xx[12] * (xx[1663] - xx[1652]);
  xx[1770] = (xx[1673] + xx[1674]) * xx[12];
  xx[1673] = (xx[1663] + xx[1652]) * xx[12];
  xx[1652] = (xx[1709] + xx[1708]) * xx[12] - xx[172];
  xx[1663] = xx[12] * (xx[1681] - xx[1679]);
  xx[1674] = (xx[1681] + xx[1679]) * xx[12];
  xx[1679] = (xx[1709] + xx[1203]) * xx[12] - xx[172];
  xx[1830] = xx[1764];
  xx[1831] = xx[1707];
  xx[1832] = xx[1770];
  xx[1833] = xx[1673];
  xx[1834] = xx[1652];
  xx[1835] = xx[1663];
  xx[1836] = xx[1678];
  xx[1837] = xx[1674];
  xx[1838] = xx[1679];
  xx[1839] = xx[1760];
  xx[1840] = xx[1717];
  xx[1841] = xx[1744];
  xx[1842] = xx[1734];
  xx[1843] = xx[1715];
  xx[1844] = xx[1752];
  xx[1845] = xx[1761];
  xx[1846] = xx[1755];
  xx[1847] = xx[603];
  xx[1848] = xx[1756];
  xx[1849] = xx[1753];
  xx[1850] = xx[1718];
  xx[1851] = xx[1768];
  xx[1852] = xx[1773];
  xx[1853] = xx[1775];
  xx[1854] = xx[1769];
  xx[1855] = xx[1774];
  xx[1856] = xx[1789];
  solveSymmetricPosDef(xx + 1804, xx + 1839, 3, 6, xx + 1857, xx + 1875);
  xx[1203] = - (xx[1858] * xx[1715] - xx[1857] * xx[1716] + xx[1859] * xx[1752]);
  xx[1681] = - (xx[1857] * xx[1761] - xx[1858] * xx[1754] + xx[1859] * xx[603]);
  xx[1708] = - (xx[1860] * xx[1761] - xx[1861] * xx[1754] + xx[1862] * xx[603]);
  xx[1839] = xx[29] - (xx[1857] * xx[1760] + xx[1858] * xx[1717] - xx[1859] *
                       xx[1743]);
  xx[1840] = xx[1203];
  xx[1841] = xx[1681];
  xx[1842] = xx[1203];
  xx[1843] = xx[1240] - (xx[1861] * xx[1715] - xx[1860] * xx[1716] + xx[1862] *
    xx[1752]);
  xx[1844] = xx[1708];
  xx[1845] = xx[1681];
  xx[1846] = xx[1708];
  xx[1847] = xx[18] - (xx[1863] * xx[1761] - xx[1864] * xx[1754] + xx[1865] *
                       xx[603]);
  pm_math_matrix3x3ComposeTranspose(xx + 1839, xx + 1830, xx + 1848);
  pm_math_matrix3x3Compose(xx + 1830, xx + 1848, xx + 1839);
  xx[1848] = xx[1868] * xx[1743] - (xx[1866] * xx[1760] + xx[1867] * xx[1717]);
  xx[1849] = xx[1871] * xx[1743] - (xx[1869] * xx[1760] + xx[1870] * xx[1717]);
  xx[1850] = xx[1874] * xx[1743] - (xx[1872] * xx[1760] + xx[1873] * xx[1717]);
  xx[1851] = - (xx[1867] * xx[1715] - xx[1866] * xx[1716] + xx[1868] * xx[1752]);
  xx[1852] = - (xx[1870] * xx[1715] - xx[1869] * xx[1716] + xx[1871] * xx[1752]);
  xx[1853] = - (xx[1873] * xx[1715] - xx[1872] * xx[1716] + xx[1874] * xx[1752]);
  xx[1854] = - (xx[1866] * xx[1761] - xx[1867] * xx[1754] + xx[1868] * xx[603]);
  xx[1855] = - (xx[1869] * xx[1761] - xx[1870] * xx[1754] + xx[1871] * xx[603]);
  xx[1856] = - (xx[1872] * xx[1761] - xx[1873] * xx[1754] + xx[1874] * xx[603]);
  pm_math_matrix3x3ComposeTranspose(xx + 1848, xx + 1830, xx + 1875);
  pm_math_matrix3x3Compose(xx + 1830, xx + 1875, xx + 1848);
  pm_math_matrix3x3PostCross(xx + 1848, xx + 1729, xx + 1875);
  xx[1203] = - (xx[1866] * xx[1768] + xx[1867] * xx[1773] + xx[1868] * xx[1775]);
  xx[1681] = - (xx[1866] * xx[1769] + xx[1867] * xx[1774] + xx[1868] * xx[1789]);
  xx[1708] = - (xx[1869] * xx[1769] + xx[1870] * xx[1774] + xx[1871] * xx[1789]);
  xx[1884] = xx[558] - (xx[1866] * xx[1756] + xx[1867] * xx[1753] + xx[1868] *
                        xx[1718]);
  xx[1885] = xx[1203];
  xx[1886] = xx[1681];
  xx[1887] = xx[1203];
  xx[1888] = xx[558] - (xx[1869] * xx[1768] + xx[1870] * xx[1773] + xx[1871] *
                        xx[1775]);
  xx[1889] = xx[1708];
  xx[1890] = xx[1681];
  xx[1891] = xx[1708];
  xx[1892] = xx[558] - (xx[1872] * xx[1769] + xx[1873] * xx[1774] + xx[1874] *
                        xx[1789]);
  pm_math_matrix3x3ComposeTranspose(xx + 1884, xx + 1830, xx + 1893);
  pm_math_matrix3x3Compose(xx + 1830, xx + 1893, xx + 1884);
  pm_math_matrix3x3PostCross(xx + 1884, xx + 1729, xx + 1830);
  pm_math_matrix3x3PreCross(xx + 1830, xx + 1729, xx + 1889);
  xx[1203] = xx[1854] - xx[1832];
  xx[1681] = xx[1855] - xx[1835];
  xx[1708] = xx[1847] - xx[1883] - xx[1883] - xx[1897] - xx[1714] * xx[1203] -
    xx[1713] * xx[1681] + xx[52];
  xx[1709] = xx[274] + xx[1884];
  xx[1734] = xx[1203] - (xx[1709] * xx[1714] + xx[1713] * xx[1885]);
  xx[1744] = xx[274] + xx[1888];
  xx[1755] = xx[1681] - (xx[1714] * xx[1887] + xx[1744] * xx[1713]);
  xx[1771] = xx[1708] - (xx[1734] * xx[1714] + xx[1755] * xx[1713]);
  ii[0] = factorSymmetricPosDef(xx + 1771, 1, xx + 1793);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Linkage_6/Revolute7' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1793] = (xx[1742] - (xx[1827] + xx[1772] - (xx[1714] * xx[1828] + xx[1713] *
    xx[1829]))) / xx[1771];
  xx[1825] = xx[1857];
  xx[1826] = xx[1860];
  xx[1827] = xx[1863];
  xx[1772] = xx[1793] * xx[1720];
  xx[1803] = xx[1793] * xx[1721];
  xx[1828] = xx[12] * (xx[1722] * xx[1772] - xx[1719] * xx[1803]);
  xx[1829] = (xx[1719] * xx[1772] + xx[1722] * xx[1803]) * xx[12];
  xx[1830] = xx[1793] - (xx[1720] * xx[1772] + xx[1721] * xx[1803]) * xx[12];
  xx[1831] = xx[1866];
  xx[1832] = xx[1869];
  xx[1833] = xx[1872];
  xx[1772] = xx[1793] * xx[1729] - xx[1713] * xx[1793];
  xx[1803] = xx[1772] * xx[1722];
  xx[1834] = xx[1714] * xx[1793] + xx[1793] * xx[1730];
  xx[1835] = xx[1722] * xx[1834];
  xx[1836] = xx[1772] * xx[1720] + xx[1721] * xx[1834];
  xx[1837] = - xx[1803];
  xx[1838] = - xx[1835];
  xx[1839] = xx[1836];
  pm_math_cross3(xx + 1720, xx + 1837, xx + 1840);
  xx[1837] = (xx[1719] * xx[1803] + xx[1840]) * xx[12] - xx[1834];
  xx[1838] = xx[1772] + xx[12] * (xx[1841] + xx[1719] * xx[1835]);
  xx[1839] = xx[12] * (xx[1842] - xx[1719] * xx[1836]);
  xx[1834] = xx[1858];
  xx[1835] = xx[1861];
  xx[1836] = xx[1864];
  xx[1840] = xx[1867];
  xx[1841] = xx[1870];
  xx[1842] = xx[1873];
  xx[1843] = xx[1859];
  xx[1844] = xx[1862];
  xx[1845] = xx[1865];
  xx[1846] = xx[1868];
  xx[1847] = xx[1871];
  xx[1848] = xx[1874];
  pm_math_quatInverseXform(xx + 100, xx + 1228, xx + 1849);
  xx[1228] = xx[134] - xx[273] * xx[1851];
  xx[134] = xx[1724] + xx[1732] + (xx[1746] - xx[1668] * xx[1740]) * xx[12];
  xx[1229] = xx[1801] + xx[1777];
  xx[1230] = xx[1817] + xx[1814];
  xx[1732] = xx[1823] + xx[1791];
  xx[1849] = xx[1229];
  xx[1850] = xx[1230];
  xx[1851] = xx[1732];
  solveSymmetricPosDef(xx + 1804, xx + 1849, 3, 1, xx + 1852, xx + 1855);
  xx[1849] = xx[1852] * xx[1760] + xx[1853] * xx[1717] - xx[1854] * xx[1743];
  xx[1850] = xx[1853] * xx[1715] - xx[1852] * xx[1716] + xx[1854] * xx[1752];
  xx[1851] = xx[1852] * xx[1761] - xx[1853] * xx[1754] + xx[1854] * xx[603];
  pm_math_quatXform(xx + 1719, xx + 1849, xx + 1855);
  xx[1849] = xx[1852] * xx[1756] + xx[1853] * xx[1753] + xx[1854] * xx[1718];
  xx[1850] = xx[1852] * xx[1768] + xx[1853] * xx[1773] + xx[1854] * xx[1775];
  xx[1851] = xx[1852] * xx[1769] + xx[1853] * xx[1774] + xx[1854] * xx[1789];
  pm_math_quatXform(xx + 1719, xx + 1849, xx + 1858);
  pm_math_cross3(xx + 1729, xx + 1858, xx + 1849);
  xx[1740] = (xx[134] - (xx[1857] + xx[1851] - (xx[1714] * xx[1858] + xx[1713] *
    xx[1859]))) / xx[1771];
  xx[1772] = xx[1740] * xx[1720];
  xx[1803] = xx[1740] * xx[1721];
  xx[1849] = xx[12] * (xx[1722] * xx[1772] - xx[1719] * xx[1803]);
  xx[1850] = (xx[1719] * xx[1772] + xx[1722] * xx[1803]) * xx[12];
  xx[1851] = xx[1740] - (xx[1720] * xx[1772] + xx[1721] * xx[1803]) * xx[12];
  xx[1772] = xx[1740] * xx[1729] - xx[1713] * xx[1740];
  xx[1803] = xx[1772] * xx[1722];
  xx[1855] = xx[1714] * xx[1740] + xx[1740] * xx[1730];
  xx[1856] = xx[1722] * xx[1855];
  xx[1857] = xx[1772] * xx[1720] + xx[1721] * xx[1855];
  xx[1858] = - xx[1803];
  xx[1859] = - xx[1856];
  xx[1860] = xx[1857];
  pm_math_cross3(xx + 1720, xx + 1858, xx + 1861);
  xx[1858] = (xx[1719] * xx[1803] + xx[1861]) * xx[12] - xx[1855];
  xx[1859] = xx[1772] + xx[12] * (xx[1862] + xx[1719] * xx[1856]);
  xx[1860] = xx[12] * (xx[1863] - xx[1719] * xx[1857]);
  xx[1772] = xx[1852] - (pm_math_dot3(xx + 1825, xx + 1849) + pm_math_dot3(xx +
    1831, xx + 1858));
  xx[1803] = xx[1853] - (pm_math_dot3(xx + 1834, xx + 1849) + pm_math_dot3(xx +
    1840, xx + 1858));
  xx[1852] = xx[1854] - (pm_math_dot3(xx + 1843, xx + 1849) + pm_math_dot3(xx +
    1846, xx + 1858));
  xx[1849] = xx[1164] * xx[137] - xx[189] * xx[1224] - xx[194] * xx[1219] - xx
    [195] * xx[1220] - xx[188] * xx[1155] - xx[190] * xx[1156] - xx[196] * xx
    [1188] + xx[107] * xx[1216] + xx[139] * xx[1228] + xx[1742] * xx[1740] + xx
    [1666] * xx[1772] + xx[1763] * xx[1803] + xx[1682] * xx[1852];
  pm_math_quatInverseXform(xx + 100, xx + 642, xx + 1853);
  xx[642] = xx[131] - xx[273] * xx[1855];
  xx[131] = xx[1725] + (xx[1668] * xx[1741] + xx[1747]) * xx[12];
  xx[643] = xx[1802] + xx[1778];
  xx[644] = xx[1818] + xx[1815];
  xx[1723] = xx[1824] + xx[1792];
  xx[1745] = xx[643];
  xx[1746] = xx[644];
  xx[1747] = xx[1723];
  solveSymmetricPosDef(xx + 1804, xx + 1745, 3, 1, xx + 1776, xx + 1790);
  xx[1745] = xx[1776] * xx[1760] + xx[1777] * xx[1717] - xx[1778] * xx[1743];
  xx[1746] = xx[1777] * xx[1715] - xx[1776] * xx[1716] + xx[1778] * xx[1752];
  xx[1747] = xx[1776] * xx[1761] - xx[1777] * xx[1754] + xx[1778] * xx[603];
  pm_math_quatXform(xx + 1719, xx + 1745, xx + 1790);
  xx[1745] = xx[1776] * xx[1756] + xx[1777] * xx[1753] + xx[1778] * xx[1718];
  xx[1746] = xx[1776] * xx[1768] + xx[1777] * xx[1773] + xx[1778] * xx[1775];
  xx[1747] = xx[1776] * xx[1769] + xx[1777] * xx[1774] + xx[1778] * xx[1789];
  pm_math_quatXform(xx + 1719, xx + 1745, xx + 1800);
  pm_math_cross3(xx + 1729, xx + 1800, xx + 1745);
  xx[1724] = (xx[131] - (xx[1792] + xx[1747] - (xx[1714] * xx[1800] + xx[1713] *
    xx[1801]))) / xx[1771];
  xx[1725] = xx[1724] * xx[1720];
  xx[1741] = xx[1724] * xx[1721];
  xx[1745] = xx[12] * (xx[1722] * xx[1725] - xx[1719] * xx[1741]);
  xx[1746] = (xx[1719] * xx[1725] + xx[1722] * xx[1741]) * xx[12];
  xx[1747] = xx[1724] - (xx[1720] * xx[1725] + xx[1721] * xx[1741]) * xx[12];
  xx[1725] = xx[1724] * xx[1729] - xx[1713] * xx[1724];
  xx[1741] = xx[1725] * xx[1722];
  xx[1790] = xx[1714] * xx[1724] + xx[1724] * xx[1730];
  xx[1791] = xx[1722] * xx[1790];
  xx[1792] = xx[1725] * xx[1720] + xx[1721] * xx[1790];
  xx[1800] = - xx[1741];
  xx[1801] = - xx[1791];
  xx[1802] = xx[1792];
  pm_math_cross3(xx + 1720, xx + 1800, xx + 1813);
  xx[1800] = (xx[1719] * xx[1741] + xx[1813]) * xx[12] - xx[1790];
  xx[1801] = xx[1725] + xx[12] * (xx[1814] + xx[1719] * xx[1791]);
  xx[1802] = xx[12] * (xx[1815] - xx[1719] * xx[1792]);
  xx[1725] = xx[1776] - (pm_math_dot3(xx + 1825, xx + 1745) + pm_math_dot3(xx +
    1831, xx + 1800));
  xx[1741] = xx[1777] - (pm_math_dot3(xx + 1834, xx + 1745) + pm_math_dot3(xx +
    1840, xx + 1800));
  xx[1776] = xx[1778] - (pm_math_dot3(xx + 1843, xx + 1745) + pm_math_dot3(xx +
    1846, xx + 1800));
  xx[1745] = xx[1164] * xx[143] - xx[189] * xx[682] - xx[194] * xx[488] - xx[195]
    * xx[489] - xx[188] * xx[144] - xx[190] * xx[490] - xx[196] * xx[527] + xx
    [107] * xx[528] + xx[139] * xx[642] + xx[1742] * xx[1724] + xx[1666] * xx
    [1725] + xx[1763] * xx[1741] + xx[1682] * xx[1776];
  xx[1746] = xx[135] * xx[143] - xx[1225] * xx[682] - xx[1226] * xx[488] - xx
    [1227] * xx[489] - xx[1190] * xx[144] - xx[1211] * xx[490] - xx[1212] * xx
    [527] + xx[1176] * xx[528] + xx[1187] * xx[642] + xx[134] * xx[1724] + xx
    [1229] * xx[1725] + xx[1230] * xx[1741] + xx[1732] * xx[1776];
  xx[1888] = xx[220] * xx[295] - xx[546] * xx[319] - xx[547] * xx[341] - xx[576]
    * xx[437] - xx[237] * xx[298] - xx[238] * xx[301] - xx[441] * xx[310] + xx
    [227] * xx[86] + xx[221] * (xx[230] + xx[398] * xx[589]) + xx[755] * xx[816]
    + xx[776] * (xx[832] - (pm_math_dot3(xx + 838, xx + 842) + pm_math_dot3(xx +
    845, xx + 851))) + xx[777] * (xx[833] - (pm_math_dot3(xx + 848, xx + 842) +
    pm_math_dot3(xx + 854, xx + 851))) + xx[598] * (xx[834] - (pm_math_dot3(xx +
    857, xx + 842) + pm_math_dot3(xx + 860, xx + 851)));
  xx[1889] = xx[880];
  xx[1890] = xx[515];
  xx[1891] = xx[910];
  xx[1892] = xx[956];
  xx[1893] = xx[890];
  xx[1894] = xx[1005];
  xx[1895] = xx[1048];
  xx[1896] = xx[989];
  xx[1897] = xx[1126];
  xx[1898] = xx[1152];
  xx[1899] = xx[1086];
  xx[1900] = xx[1175];
  xx[1901] = xx[1218];
  xx[1902] = xx[683];
  xx[1903] = xx[880];
  xx[1904] = xx[229] * xx[217] - xx[877] * xx[873] - xx[878] * xx[874] - xx[879]
    * xx[875] - xx[864] * xx[218] - xx[869] * xx[841] - xx[870] * xx[863] + xx
    [179] * xx[866] + xx[785] * xx[865] + xx[178] * xx[868] + xx[745] * xx[871]
    + xx[753] * xx[872] + xx[867] * xx[876];
  xx[1905] = xx[1107];
  xx[1906] = xx[1108];
  xx[1907] = xx[1119];
  xx[1908] = xx[1120];
  xx[1909] = xx[1121];
  xx[1910] = xx[1122];
  xx[1911] = xx[1123];
  xx[1912] = xx[1124];
  xx[1913] = xx[1136];
  xx[1914] = xx[1137];
  xx[1915] = xx[1138];
  xx[1916] = xx[1142];
  xx[1917] = xx[1143];
  xx[1918] = xx[515];
  xx[1919] = xx[1107];
  xx[1920] = xx[175] * xx[176] - xx[468] * xx[234] - xx[513] * xx[235] - xx[514]
    * xx[243] - xx[244] * xx[177] - xx[466] * xx[219] - xx[467] * xx[247] + xx
    [226] * xx[248] + xx[223] * xx[233] + xx[187] * xx[249] + xx[224] * xx[507]
    + xx[225] * xx[508] + xx[242] * xx[509];
  xx[1921] = xx[1144];
  xx[1922] = xx[909];
  xx[1923] = xx[953];
  xx[1924] = xx[887];
  xx[1925] = xx[1003];
  xx[1926] = xx[1047];
  xx[1927] = xx[986];
  xx[1928] = xx[1102];
  xx[1929] = xx[1151];
  xx[1930] = xx[1080];
  xx[1931] = xx[1160];
  xx[1932] = xx[1165];
  xx[1933] = xx[910];
  xx[1934] = xx[1108];
  xx[1935] = xx[1144];
  xx[1936] = xx[940] * xx[908] - xx[815] * xx[943] - xx[830] * xx[881] - xx[831]
    * xx[882] - xx[530] * xx[883] - xx[754] * xx[725] - xx[813] * xx[726] - xx
    [531] * xx[727] + xx[620] * (xx[534] - xx[532] * xx[408]) + xx[1262] * xx
    [1223] + xx[1286] * (xx[1342] - (pm_math_dot3(xx + 1348, xx + 1357) +
    pm_math_dot3(xx + 1360, xx + 1363))) + xx[1287] * (xx[1343] - (pm_math_dot3
    (xx + 1366, xx + 1357) + pm_math_dot3(xx + 1369, xx + 1363))) + xx[1221] *
    (xx[1344] - (pm_math_dot3(xx + 1372, xx + 1357) + pm_math_dot3(xx + 1377, xx
       + 1363)));
  xx[1937] = xx[1316];
  xx[1938] = xx[1267];
  xx[1939] = xx[1300];
  xx[1940] = xx[1313];
  xx[1941] = xx[1315];
  xx[1942] = xx[1324];
  xx[1943] = xx[1336];
  xx[1944] = xx[1338];
  xx[1945] = xx[1340];
  xx[1946] = xx[1345];
  xx[1947] = xx[1347];
  xx[1948] = xx[956];
  xx[1949] = xx[1119];
  xx[1950] = xx[909];
  xx[1951] = xx[1316];
  xx[1952] = xx[536] * xx[911] - xx[964] * xx[959] - xx[965] * xx[961] - xx[966]
    * xx[962] - xx[954] * xx[933] - xx[955] * xx[950] - xx[960] * xx[951] - xx
    [941] * xx[952] + xx[935] * xx[1231] + xx[533] * xx[1260] + xx[942] * xx
    [1264] + xx[1253] * xx[1275] + xx[1259] * xx[1295];
  xx[1953] = xx[1351];
  xx[1954] = xx[1352];
  xx[1955] = xx[1354];
  xx[1956] = xx[1355];
  xx[1957] = xx[1380];
  xx[1958] = xx[1381];
  xx[1959] = xx[1382];
  xx[1960] = xx[1383];
  xx[1961] = xx[1384];
  xx[1962] = xx[1385];
  xx[1963] = xx[890];
  xx[1964] = xx[1120];
  xx[1965] = xx[953];
  xx[1966] = xx[1267];
  xx[1967] = xx[1351];
  xx[1968] = xx[538] * xx[684] - xx[791] * xx[913] - xx[888] * xx[885] - xx[889]
    * xx[886] - xx[685] * xx[790] - xx[686] * xx[688] - xx[789] * xx[689] - xx
    [662] * xx[690] + xx[1326] * xx[661] + xx[537] * xx[1234] + xx[663] * xx
    [1261] + xx[1232] * xx[1265] + xx[1233] * xx[1266];
  xx[1969] = xx[1386];
  xx[1970] = xx[1299];
  xx[1971] = xx[1301];
  xx[1972] = xx[1314];
  xx[1973] = xx[1323];
  xx[1974] = xx[1325];
  xx[1975] = xx[1337];
  xx[1976] = xx[1339];
  xx[1977] = xx[1341];
  xx[1978] = xx[1005];
  xx[1979] = xx[1121];
  xx[1980] = xx[887];
  xx[1981] = xx[1300];
  xx[1982] = xx[1352];
  xx[1983] = xx[1386];
  xx[1984] = xx[1029] * xx[974] - xx[924] * xx[1037] - xx[927] * xx[971] - xx
    [934] * xx[972] - xx[535] * xx[973] - xx[692] * xx[944] - xx[814] * xx[945]
    - xx[893] * xx[946] + xx[912] * (xx[896] - xx[894] * xx[404]) + xx[1435] *
    xx[1417] + xx[1458] * (xx[1514] - (pm_math_dot3(xx + 1520, xx + 1529) +
    pm_math_dot3(xx + 1532, xx + 1535))) + xx[1459] * (xx[1515] - (pm_math_dot3
    (xx + 1538, xx + 1529) + pm_math_dot3(xx + 1541, xx + 1535))) + xx[1415] *
    (xx[1516] - (pm_math_dot3(xx + 1544, xx + 1529) + pm_math_dot3(xx + 1549, xx
       + 1535)));
  xx[1985] = xx[1488];
  xx[1986] = xx[1440];
  xx[1987] = xx[1040];
  xx[1988] = xx[1149];
  xx[1989] = xx[1027];
  xx[1990] = xx[1095];
  xx[1991] = xx[1210];
  xx[1992] = xx[529];
  xx[1993] = xx[1048];
  xx[1994] = xx[1122];
  xx[1995] = xx[1003];
  xx[1996] = xx[1313];
  xx[1997] = xx[1354];
  xx[1998] = xx[1299];
  xx[1999] = xx[1488];
  xx[2000] = xx[901] * xx[1004] - xx[1058] * xx[1053] - xx[1059] * xx[1055] -
    xx[1060] * xx[1056] - xx[1049] * xx[1006] - xx[1050] * xx[1038] - xx[1054] *
    xx[1045] - xx[1035] * xx[1046] + xx[1030] * xx[1418] + xx[895] * xx[1433] +
    xx[1036] * xx[1437] + xx[1428] * xx[1448] + xx[1432] * xx[1467];
  xx[2001] = xx[1495];
  xx[2002] = xx[1496];
  xx[2003] = xx[1497];
  xx[2004] = xx[1508];
  xx[2005] = xx[1509];
  xx[2006] = xx[1510];
  xx[2007] = xx[1511];
  xx[2008] = xx[989];
  xx[2009] = xx[1123];
  xx[2010] = xx[1047];
  xx[2011] = xx[1315];
  xx[2012] = xx[1355];
  xx[2013] = xx[1301];
  xx[2014] = xx[1440];
  xx[2015] = xx[1495];
  xx[2016] = xx[903] * xx[917] - xx[977] * xx[1008] - xx[987] * xx[984] - xx[988]
    * xx[985] - xx[923] * xx[922] - xx[975] * xx[928] - xx[976] * xx[929] - xx
    [915] * xx[930] + xx[1498] * xx[921] + xx[902] * xx[1421] + xx[916] * xx
    [1434] + xx[1419] * xx[1438] + xx[1420] * xx[1439];
  xx[2017] = xx[1512];
  xx[2018] = xx[1471];
  xx[2019] = xx[1472];
  xx[2020] = xx[1473];
  xx[2021] = xx[1485];
  xx[2022] = xx[1486];
  xx[2023] = xx[1126];
  xx[2024] = xx[1124];
  xx[2025] = xx[986];
  xx[2026] = xx[1324];
  xx[2027] = xx[1380];
  xx[2028] = xx[1314];
  xx[2029] = xx[1040];
  xx[2030] = xx[1496];
  xx[2031] = xx[1512];
  xx[2032] = xx[1135] * xx[1125] - xx[1052] * xx[1141] - xx[1057] * xx[1074] -
    xx[1077] * xx[1075] - xx[1039] * xx[1076] - xx[1041] * xx[1061] - xx[1051] *
    xx[1062] + xx[1063] * xx[1012] + xx[995] * (xx[996] - xx[335] * xx[1519]) +
    xx[1590] * xx[1572] + xx[1613] * (xx[1669] - (pm_math_dot3(xx + 1675, xx +
    1684) + pm_math_dot3(xx + 1687, xx + 1690))) + xx[1614] * (xx[1670] -
    (pm_math_dot3(xx + 1693, xx + 1684) + pm_math_dot3(xx + 1696, xx + 1690))) +
    xx[1570] * (xx[1671] - (pm_math_dot3(xx + 1699, xx + 1684) + pm_math_dot3(xx
    + 1704, xx + 1690)));
  xx[2033] = xx[1603];
  xx[2034] = xx[1593];
  xx[2035] = xx[1595];
  xx[2036] = xx[1627];
  xx[2037] = xx[1640];
  xx[2038] = xx[1152];
  xx[2039] = xx[1136];
  xx[2040] = xx[1102];
  xx[2041] = xx[1336];
  xx[2042] = xx[1381];
  xx[2043] = xx[1323];
  xx[2044] = xx[1149];
  xx[2045] = xx[1497];
  xx[2046] = xx[1471];
  xx[2047] = xx[1603];
  xx[2048] = xx[998] * xx[1007] - xx[1161] * xx[1157] - xx[1162] * xx[1158] -
    xx[1163] * xx[1159] - xx[1148] * xx[1132] - xx[1153] * xx[1133] - xx[1154] *
    xx[1140] + xx[1150] * xx[1127] + xx[1166] * xx[1139] + xx[997] * xx[1583] +
    xx[1167] * xx[1587] + xx[1168] * xx[1588] + xx[1573] * xx[1592];
  xx[2049] = xx[1641];
  xx[2050] = xx[1642];
  xx[2051] = xx[1643];
  xx[2052] = xx[1650];
  xx[2053] = xx[1086];
  xx[2054] = xx[1137];
  xx[2055] = xx[1151];
  xx[2056] = xx[1338];
  xx[2057] = xx[1382];
  xx[2058] = xx[1325];
  xx[2059] = xx[1027];
  xx[2060] = xx[1508];
  xx[2061] = xx[1472];
  xx[2062] = xx[1593];
  xx[2063] = xx[1641];
  xx[2064] = xx[1018] * xx[1023] - xx[1066] * xx[1105] - xx[1084] * xx[1078] -
    xx[1085] * xx[1079] - xx[1026] * xx[1025] - xx[1064] * xx[1042] - xx[1065] *
    xx[1043] + xx[1016] * xx[1044] + xx[1088] * xx[1017] + xx[994] * xx[1575] +
    xx[1089] * xx[1576] + xx[1090] * xx[1589] + xx[1574] * xx[1622];
  xx[2065] = xx[1651];
  xx[2066] = xx[1594];
  xx[2067] = xx[1626];
  xx[2068] = xx[1175];
  xx[2069] = xx[1138];
  xx[2070] = xx[1080];
  xx[2071] = xx[1340];
  xx[2072] = xx[1383];
  xx[2073] = xx[1337];
  xx[2074] = xx[1095];
  xx[2075] = xx[1509];
  xx[2076] = xx[1473];
  xx[2077] = xx[1595];
  xx[2078] = xx[1642];
  xx[2079] = xx[1651];
  xx[2080] = xx[1164] * xx[1109] - xx[189] * xx[1189] - xx[194] * xx[1173] - xx
    [195] * xx[1174] - xx[188] * xx[1134] - xx[190] * xx[1116] - xx[196] * xx
    [1117] + xx[107] * xx[1118] + (xx[132] - xx[273] * xx[1665]) * xx[139] + xx
    [1742] * xx[1793] + xx[1666] * (xx[1819] - (pm_math_dot3(xx + 1825, xx +
    1828) + pm_math_dot3(xx + 1831, xx + 1837))) + xx[1763] * (xx[1820] -
    (pm_math_dot3(xx + 1834, xx + 1828) + pm_math_dot3(xx + 1840, xx + 1837))) +
    xx[1682] * (xx[1821] - (pm_math_dot3(xx + 1843, xx + 1828) + pm_math_dot3(xx
    + 1846, xx + 1837)));
  xx[2081] = xx[1849];
  xx[2082] = xx[1745];
  xx[2083] = xx[1218];
  xx[2084] = xx[1142];
  xx[2085] = xx[1160];
  xx[2086] = xx[1345];
  xx[2087] = xx[1384];
  xx[2088] = xx[1339];
  xx[2089] = xx[1210];
  xx[2090] = xx[1510];
  xx[2091] = xx[1485];
  xx[2092] = xx[1627];
  xx[2093] = xx[1643];
  xx[2094] = xx[1594];
  xx[2095] = xx[1849];
  xx[2096] = xx[135] * xx[137] - xx[1225] * xx[1224] - xx[1226] * xx[1219] - xx
    [1227] * xx[1220] - xx[1190] * xx[1155] - xx[1211] * xx[1156] - xx[1212] *
    xx[1188] + xx[1176] * xx[1216] + xx[1187] * xx[1228] + xx[134] * xx[1740] +
    xx[1229] * xx[1772] + xx[1230] * xx[1803] + xx[1732] * xx[1852];
  xx[2097] = xx[1746];
  xx[2098] = xx[683];
  xx[2099] = xx[1143];
  xx[2100] = xx[1165];
  xx[2101] = xx[1347];
  xx[2102] = xx[1385];
  xx[2103] = xx[1341];
  xx[2104] = xx[529];
  xx[2105] = xx[1511];
  xx[2106] = xx[1486];
  xx[2107] = xx[1640];
  xx[2108] = xx[1650];
  xx[2109] = xx[1626];
  xx[2110] = xx[1745];
  xx[2111] = xx[1746];
  xx[2112] = xx[138] * xx[143] - xx[636] * xx[682] - xx[637] * xx[488] - xx[638]
    * xx[489] - xx[482] * xx[144] - xx[483] * xx[490] - xx[484] * xx[527] + xx
    [528] * xx[1106] + xx[642] * xx[142] + xx[131] * xx[1724] + xx[643] * xx
    [1725] + xx[644] * xx[1741] + xx[1723] * xx[1776];
  xx[841] = xx[112];
  xx[842] = xx[213];
  xx[843] = xx[104];
  xx[844] = xx[113];
  xx[86] = xx[163] * xx[16] - xx[15] * xx[162];
  xx[132] = xx[164] * xx[16] - xx[15] * xx[161];
  xx[137] = xx[161] * xx[16] + xx[15] * xx[164];
  xx[143] = xx[15] * xx[163] + xx[162] * xx[16];
  xx[871] = - xx[86];
  xx[872] = xx[132];
  xx[873] = xx[137];
  xx[874] = - xx[143];
  pm_math_quatCompose(xx + 841, xx + 871, xx + 880);
  xx[144] = xx[137] * xx[86];
  xx[176] = xx[143] * xx[132];
  xx[177] = xx[12] * (xx[144] - xx[176]);
  xx[213] = xx[86] * xx[132];
  xx[217] = xx[137] * xx[143];
  xx[218] = xx[132] * xx[132];
  xx[219] = xx[137] * xx[137];
  xx[247] = xx[177];
  xx[248] = - ((xx[213] + xx[217]) * xx[12]);
  xx[249] = xx[172] - (xx[218] + xx[219]) * xx[12];
  pm_math_cross3(xx + 247, xx + 180, xx + 488);
  pm_math_quatXform(xx + 880, xx + 488, xx + 247);
  xx[223] = xx[212] * xx[15] + xx[186] * xx[16];
  xx[230] = 0.02856734473576056;
  xx[234] = xx[186] - xx[12] * xx[223] * xx[16] + xx[230];
  xx[235] = xx[234] * xx[113];
  xx[243] = xx[212] - xx[12] * xx[223] * xx[15];
  xx[223] = xx[113] * xx[243];
  xx[295] = xx[104] * xx[243] - xx[234] * xx[109];
  xx[488] = - xx[235];
  xx[489] = - xx[223];
  xx[490] = xx[295];
  pm_math_cross3(xx + 214, xx + 488, xx + 507);
  xx[298] = 0.02223265526423945;
  xx[301] = xx[109] * xx[298];
  xx[310] = xx[113] * xx[298];
  xx[319] = xx[310] * xx[112];
  xx[341] = xx[12] * (xx[301] * xx[104] + xx[319]);
  xx[437] = xx[775] * xx[775];
  xx[488] = xx[585] * xx[775];
  xx[489] = xx[318] * xx[382];
  xx[490] = xx[585] * xx[318];
  xx[515] = xx[382] * xx[775];
  xx[527] = xx[585] * xx[382];
  xx[528] = xx[318] * xx[775];
  xx[1116] = (xx[437] + xx[318] * xx[318]) * xx[12] - xx[172];
  xx[1117] = xx[12] * (xx[488] - xx[489]);
  xx[1118] = - ((xx[490] + xx[515]) * xx[12]);
  xx[1119] = - ((xx[489] + xx[488]) * xx[12]);
  xx[1120] = (xx[437] + xx[382] * xx[382]) * xx[12] - xx[172];
  xx[1121] = xx[12] * (xx[527] - xx[528]);
  xx[1122] = xx[12] * (xx[515] - xx[490]);
  xx[1123] = (xx[527] + xx[528]) * xx[12];
  xx[1124] = (xx[437] + xx[585] * xx[585]) * xx[12] - xx[172];
  xx[488] = - state[34];
  xx[489] = - state[35];
  xx[490] = - state[36];
  pm_math_quatInverseXform(xx + 734, xx + 488, xx + 527);
  xx[318] = xx[527] * xx[784] - xx[529] * xx[783];
  xx[382] = xx[528] * xx[783] - xx[527] * xx[599];
  xx[437] = xx[529] * xx[599] - xx[528] * xx[784];
  xx[488] = xx[527] * xx[577] - xx[529] * xx[588];
  xx[489] = xx[528] * xx[588] - xx[527] * xx[340];
  xx[490] = xx[529] * xx[340] - xx[528] * xx[577];
  xx[515] = xx[527] * xx[592] - xx[529] * xx[591];
  xx[532] = xx[528] * xx[591] - xx[527] * xx[590];
  xx[534] = xx[529] * xx[590] - xx[528] * xx[592];
  xx[1336] = xx[529] * xx[318] - xx[528] * xx[382];
  xx[1337] = xx[527] * xx[382] - xx[529] * xx[437];
  xx[1338] = xx[528] * xx[437] - xx[527] * xx[318];
  xx[1339] = xx[529] * xx[488] - xx[528] * xx[489];
  xx[1340] = xx[527] * xx[489] - xx[529] * xx[490];
  xx[1341] = xx[528] * xx[490] - xx[527] * xx[488];
  xx[1342] = xx[529] * xx[515] - xx[528] * xx[532];
  xx[1343] = xx[527] * xx[532] - xx[529] * xx[534];
  xx[1344] = xx[528] * xx[534] - xx[527] * xx[515];
  pm_math_matrix3x3Compose(xx + 1116, xx + 1336, xx + 1813);
  xx[318] = xx[12] * xx[560] * xx[584] * state[29] * state[29];
  xx[382] = xx[586] * xx[586];
  xx[437] = (xx[382] + xx[311] * xx[311]) * xx[12] - xx[172];
  xx[488] = xx[311] * xx[438];
  xx[489] = xx[587] * xx[586];
  xx[490] = xx[488] + xx[489];
  xx[515] = xx[12] * xx[490];
  xx[532] = (xx[12] * xx[584] * xx[584] - xx[172]) * state[29] * state[29];
  xx[534] = xx[318] * xx[437] + xx[515] * xx[532];
  xx[585] = (xx[12] * xx[560] * xx[560] - xx[172]) * state[29] * state[29];
  xx[589] = xx[515] * xx[318] + xx[585] * xx[437];
  xx[590] = xx[437] * inputDot[1] * inputDot[1];
  xx[591] = xx[736] * xx[584] - xx[560] * xx[735];
  xx[592] = xx[591] * xx[591];
  xx[642] = xx[737] * xx[584] - xx[560] * xx[734];
  xx[682] = xx[642] * xx[642];
  xx[683] = (xx[592] + xx[682]) * xx[12] - xx[172];
  xx[684] = xx[12] * xx[490] * inputDot[1] * inputDot[1];
  xx[490] = xx[734] * xx[584] + xx[560] * xx[737];
  xx[688] = xx[490] * xx[642];
  xx[689] = xx[560] * xx[736] + xx[735] * xx[584];
  xx[690] = xx[689] * xx[591];
  xx[725] = (xx[688] + xx[690]) * xx[12];
  xx[871] = xx[586];
  xx[872] = xx[748];
  xx[873] = xx[438];
  xx[874] = xx[587];
  xx[908] = - xx[591];
  xx[909] = xx[642];
  xx[910] = xx[490];
  xx[911] = - xx[689];
  pm_math_quatCompose(xx + 871, xx + 908, xx + 943);
  xx[726] = xx[943] * xx[943];
  xx[727] = xx[944] * xx[945];
  xx[748] = xx[943] * xx[946];
  xx[775] = xx[944] * xx[946];
  xx[790] = xx[943] * xx[945];
  xx[816] = xx[945] * xx[946];
  xx[832] = xx[943] * xx[944];
  xx[1116] = (xx[726] + xx[944] * xx[944]) * xx[12] - xx[172];
  xx[1117] = xx[12] * (xx[727] - xx[748]);
  xx[1118] = (xx[775] + xx[790]) * xx[12];
  xx[1119] = (xx[727] + xx[748]) * xx[12];
  xx[1120] = (xx[726] + xx[945] * xx[945]) * xx[12] - xx[172];
  xx[1121] = xx[12] * (xx[816] - xx[832]);
  xx[1122] = xx[12] * (xx[775] - xx[790]);
  xx[1123] = (xx[816] + xx[832]) * xx[12];
  xx[1124] = (xx[726] + xx[946] * xx[946]) * xx[12] - xx[172];
  xx[726] = xx[490] * inputDot[1];
  xx[727] = xx[642] * inputDot[1];
  xx[832] = xx[12] * (xx[726] * xx[591] - xx[689] * xx[727]);
  xx[833] = - ((xx[727] * xx[591] + xx[689] * xx[726]) * xx[12]);
  xx[834] = inputDot[1] - (xx[727] * xx[642] + xx[490] * xx[726]) * xx[12];
  pm_math_matrix3x3PostCross(xx + 1116, xx + 832, xx + 1849);
  xx[726] = xx[735] * state[29];
  xx[727] = xx[736] * state[29];
  xx[748] = xx[12] * (xx[737] * xx[726] - xx[734] * xx[727]);
  xx[775] = (xx[734] * xx[726] + xx[737] * xx[727]) * xx[12];
  xx[790] = state[29] - (xx[735] * xx[726] + xx[736] * xx[727]) * xx[12];
  xx[832] = xx[748] + xx[527];
  xx[833] = xx[775] + xx[528];
  xx[834] = xx[790] + xx[529];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 832, xx + 1116);
  xx[726] = xx[438] * xx[586];
  xx[727] = xx[311] * xx[587];
  xx[816] = xx[489] - xx[488];
  xx[488] = xx[816] * xx[12];
  xx[489] = (xx[382] + xx[438] * xx[438]) * xx[12] - xx[172];
  xx[832] = xx[587] * xx[438];
  xx[833] = xx[311] * xx[586];
  xx[834] = xx[727] + xx[726];
  xx[851] = xx[12] * xx[834];
  xx[852] = xx[832] - xx[833];
  xx[853] = xx[852] * xx[12];
  xx[1849] = xx[437];
  xx[1850] = - xx[515];
  xx[1851] = (xx[726] - xx[727]) * xx[12];
  xx[1852] = xx[488];
  xx[1853] = xx[489];
  xx[1854] = xx[12] * (xx[832] + xx[833]);
  xx[1855] = - xx[851];
  xx[1856] = xx[853];
  xx[1857] = (xx[382] + xx[587] * xx[587]) * xx[12] - xx[172];
  xx[382] = xx[12] * (xx[688] - xx[690]);
  xx[437] = xx[689] * xx[642];
  xx[515] = xx[490] * xx[591];
  xx[688] = (xx[437] + xx[515]) * xx[12];
  xx[690] = xx[490] * xx[490];
  xx[726] = (xx[592] + xx[690]) * xx[12] - xx[172];
  xx[727] = xx[642] * xx[591];
  xx[591] = xx[689] * xx[490];
  xx[490] = xx[12] * (xx[727] - xx[591]);
  xx[642] = xx[12] * (xx[515] - xx[437]);
  xx[1858] = xx[683];
  xx[1859] = xx[382];
  xx[1860] = - xx[688];
  xx[1861] = xx[725];
  xx[1862] = xx[726];
  xx[1863] = xx[490];
  xx[1864] = xx[642];
  xx[1865] = - ((xx[591] + xx[727]) * xx[12]);
  xx[1866] = (xx[592] + xx[689] * xx[689]) * xx[12] - xx[172];
  xx[871] = xx[748];
  xx[872] = xx[775];
  xx[873] = xx[790];
  pm_math_matrix3x3PostCross(xx + 1858, xx + 871, xx + 1867);
  pm_math_matrix3x3PostCross(xx + 1867, xx + 527, xx + 1858);
  pm_math_matrix3x3Compose(xx + 1849, xx + 1858, xx + 1867);
  xx[437] = xx[318] * xx[489] - xx[585] * xx[488];
  xx[515] = xx[318] * xx[488] - xx[532] * xx[489];
  xx[488] = xx[12] * xx[816] * inputDot[1] * inputDot[1];
  xx[592] = xx[489] * inputDot[1] * inputDot[1];
  xx[489] = xx[318] * xx[853] + xx[851] * xx[585];
  xx[689] = xx[318] * xx[851] + xx[532] * xx[853];
  xx[748] = xx[12] * xx[852] * inputDot[1] * inputDot[1];
  xx[775] = xx[12] * xx[834] * inputDot[1] * inputDot[1];
  xx[1849] = xx[1813] + xx[588] * xx[534] - xx[783] * xx[589] - (xx[590] * xx
    [683] - xx[684] * xx[725]) + (xx[1116] + xx[1867]) * xx[12];
  xx[1850] = xx[1814] + xx[340] * xx[534] - xx[599] * xx[589] - (xx[382] * xx
    [590] - xx[684] * xx[726]) + (xx[1117] + xx[1868]) * xx[12];
  xx[1851] = xx[1815] + xx[577] * xx[534] - xx[784] * xx[589] + xx[590] * xx[688]
    + xx[684] * xx[490] + (xx[1118] + xx[1869]) * xx[12];
  xx[1852] = xx[1816] + xx[783] * xx[437] + xx[588] * xx[515] - (xx[488] * xx
    [683] + xx[725] * xx[592]) + (xx[1119] + xx[1870]) * xx[12];
  xx[1853] = xx[1817] + xx[599] * xx[437] + xx[340] * xx[515] - (xx[382] * xx
    [488] + xx[592] * xx[726]) + (xx[1120] + xx[1871]) * xx[12];
  xx[1854] = xx[1818] + xx[784] * xx[437] + xx[577] * xx[515] + xx[488] * xx[688]
    - xx[490] * xx[592] + (xx[1121] + xx[1872]) * xx[12];
  xx[1855] = xx[1819] + xx[783] * xx[489] - xx[588] * xx[689] - (xx[748] * xx
    [725] - xx[775] * xx[683]) + (xx[1122] + xx[1873]) * xx[12];
  xx[1856] = xx[1820] + xx[599] * xx[489] - xx[340] * xx[689] - (xx[748] * xx
    [726] - xx[382] * xx[775]) + (xx[1123] + xx[1874]) * xx[12];
  xx[1857] = xx[1821] + xx[784] * xx[489] - xx[577] * xx[689] - (xx[775] * xx
    [688] + xx[490] * xx[748]) + (xx[1124] + xx[1875]) * xx[12];
  pm_math_matrix3x3Xform(xx + 1849, xx + 738, xx + 832);
  pm_math_matrix3x3Xform(xx + 1336, xx + 594, xx + 851);
  pm_math_quatXform(xx + 798, xx + 851, xx + 871);
  xx[340] = state[29] * state[29];
  xx[382] = xx[671] * xx[560] + xx[744] * xx[584];
  xx[437] = xx[12] * xx[382] * xx[584];
  xx[489] = xx[742] * xx[318] - xx[741] * xx[585] + xx[340] * (xx[744] - xx[437]);
  xx[490] = xx[671] - xx[12] * xx[382] * xx[560];
  xx[382] = xx[741] * xx[318] - xx[742] * xx[532] + xx[340] * xx[490];
  xx[318] = xx[382] * xx[587];
  xx[340] = xx[489] * xx[587];
  xx[515] = xx[382] * xx[311] + xx[489] * xx[438];
  xx[798] = - xx[318];
  xx[799] = xx[340];
  xx[800] = - xx[515];
  pm_math_cross3(xx + 749, xx + 798, xx + 851);
  xx[532] = inputDot[1] * inputDot[1];
  xx[534] = 0.02223265526423945;
  xx[577] = xx[534] * xx[438];
  xx[585] = xx[587] * xx[534];
  xx[588] = xx[587] * xx[585];
  xx[589] = xx[560] * xx[742] + xx[741] * xx[584];
  xx[599] = xx[437] + 0.02856734473565274;
  xx[437] = xx[741] - xx[12] * xx[589] * xx[584] + xx[599];
  xx[683] = xx[742] - xx[12] * xx[589] * xx[560] - xx[490];
  pm_math_cross3(xx + 527, xx + 594, xx + 798);
  pm_math_quatXform(xx + 734, xx + 798, xx + 594);
  xx[589] = xx[594] - xx[742] * state[29];
  xx[596] = xx[595] + xx[741] * state[29];
  xx[688] = xx[596] * xx[560] + xx[584] * xx[589];
  xx[689] = ((xx[671] - xx[746]) * state[29] + xx[589] - xx[12] * xx[688] * xx
             [584]) * inputDot[1];
  xx[589] = xx[587] * xx[689];
  xx[725] = (xx[596] - xx[12] * xx[688] * xx[560] - (xx[744] + xx[752]) * state
             [29]) * inputDot[1];
  xx[596] = xx[587] * xx[725];
  xx[688] = xx[725] * xx[438] - xx[311] * xx[689];
  xx[874] = - xx[589];
  xx[875] = - xx[596];
  xx[876] = xx[688];
  pm_math_cross3(xx + 749, xx + 874, xx + 885);
  xx[726] = xx[595] * state[29];
  xx[595] = xx[594] * state[29];
  xx[594] = xx[726] * xx[584] - xx[560] * xx[595];
  xx[746] = xx[12] * xx[584] * xx[594] - xx[726];
  xx[726] = xx[595] + xx[12] * xx[560] * xx[594];
  xx[594] = xx[726] * xx[587];
  xx[595] = xx[587] * xx[746];
  xx[752] = xx[726] * xx[311] + xx[746] * xx[438];
  xx[874] = - xx[594];
  xx[875] = xx[595];
  xx[876] = - xx[752];
  pm_math_cross3(xx + 749, xx + 874, xx + 908);
  xx[783] = xx[123] * xx[123];
  xx[784] = xx[124] * xx[125];
  xx[790] = xx[123] * xx[126];
  xx[801] = xx[124] * xx[126];
  xx[816] = xx[123] * xx[125];
  xx[863] = xx[125] * xx[126];
  xx[865] = xx[123] * xx[124];
  xx[1116] = (xx[783] + xx[124] * xx[124]) * xx[12] - xx[172];
  xx[1117] = xx[12] * (xx[784] - xx[790]);
  xx[1118] = (xx[801] + xx[816]) * xx[12];
  xx[1119] = (xx[784] + xx[790]) * xx[12];
  xx[1120] = (xx[783] + xx[125] * xx[125]) * xx[12] - xx[172];
  xx[1121] = xx[12] * (xx[863] - xx[865]);
  xx[1122] = xx[12] * (xx[801] - xx[816]);
  xx[1123] = (xx[863] + xx[865]) * xx[12];
  xx[1124] = (xx[783] + xx[126] * xx[126]) * xx[12] - xx[172];
  xx[783] = xx[68] * xx[356] - xx[62] * xx[421];
  xx[356] = xx[68] * xx[783];
  xx[421] = xx[62] * xx[783];
  xx[783] = xx[68] * xx[423] - xx[427] * xx[62];
  xx[423] = xx[68] * xx[783];
  xx[427] = xx[62] * xx[783];
  xx[783] = xx[429] * xx[68] - xx[62] * xx[364];
  xx[364] = xx[68] * xx[783];
  xx[429] = xx[62] * xx[783];
  xx[1336] = - xx[356];
  xx[1337] = - (xx[68] * xx[370] * xx[68] + xx[62] * xx[370] * xx[62]);
  xx[1338] = xx[421];
  xx[1339] = - xx[423];
  xx[1340] = - (xx[68] * xx[68] * xx[362] + xx[62] * xx[62] * xx[362]);
  xx[1341] = xx[427];
  xx[1342] = - xx[364];
  xx[1343] = - (xx[68] * xx[68] * xx[372] + xx[62] * xx[62] * xx[372]);
  xx[1344] = xx[429];
  pm_math_matrix3x3Compose(xx + 1116, xx + 1336, xx + 1813);
  pm_math_matrix3x3Compose(xx + 1813, xx + 412, xx + 1116);
  xx[362] = xx[399] * state[19] * state[19];
  xx[370] = xx[127] * xx[127];
  xx[372] = (xx[370] + xx[128] * xx[128]) * xx[12] - xx[172];
  xx[399] = xx[12] * xx[407] * state[19] * state[19];
  xx[407] = xx[128] * xx[129];
  xx[412] = xx[127] * xx[130];
  xx[413] = xx[12] * (xx[407] - xx[412]);
  xx[414] = xx[12] * xx[411] * state[19] * state[19];
  xx[411] = xx[128] * xx[130];
  xx[415] = xx[127] * xx[129];
  xx[416] = (xx[411] + xx[415]) * xx[12];
  xx[417] = xx[119] * xx[119];
  xx[418] = xx[120] * xx[121];
  xx[419] = xx[119] * xx[122];
  xx[420] = xx[120] * xx[122];
  xx[783] = xx[119] * xx[121];
  xx[784] = xx[121] * xx[122];
  xx[790] = xx[119] * xx[120];
  xx[1849] = (xx[417] + xx[120] * xx[120]) * xx[12] - xx[172];
  xx[1850] = xx[12] * (xx[418] - xx[419]);
  xx[1851] = (xx[420] + xx[783]) * xx[12];
  xx[1852] = (xx[418] + xx[419]) * xx[12];
  xx[1853] = (xx[417] + xx[121] * xx[121]) * xx[12] - xx[172];
  xx[1854] = xx[12] * (xx[784] - xx[790]);
  xx[1855] = xx[12] * (xx[420] - xx[783]);
  xx[1856] = (xx[784] + xx[790]) * xx[12];
  xx[1857] = (xx[417] + xx[122] * xx[122]) * xx[12] - xx[172];
  xx[417] = xx[49] * xx[549] - xx[51] * xx[440];
  xx[418] = xx[50] * xx[440] - xx[49] * xx[516];
  xx[419] = xx[51] * xx[516] - xx[50] * xx[549];
  xx[420] = xx[49] * xx[552] - xx[51] * xx[550];
  xx[783] = xx[50] * xx[550] - xx[49] * xx[442];
  xx[784] = xx[51] * xx[442] - xx[50] * xx[552];
  xx[790] = xx[49] * xx[491] - xx[51] * xx[553];
  xx[801] = xx[50] * xx[553] - xx[49] * xx[517];
  xx[816] = xx[51] * xx[517] - xx[50] * xx[491];
  xx[1858] = xx[51] * xx[417] - xx[50] * xx[418];
  xx[1859] = xx[49] * xx[418] - xx[51] * xx[419];
  xx[1860] = xx[50] * xx[419] - xx[49] * xx[417];
  xx[1861] = xx[51] * xx[420] - xx[50] * xx[783];
  xx[1862] = xx[49] * xx[783] - xx[51] * xx[784];
  xx[1863] = xx[50] * xx[784] - xx[49] * xx[420];
  xx[1864] = xx[51] * xx[790] - xx[50] * xx[801];
  xx[1865] = xx[49] * xx[801] - xx[51] * xx[816];
  xx[1866] = xx[50] * xx[816] - xx[49] * xx[790];
  pm_math_matrix3x3Compose(xx + 1849, xx + 1858, xx + 1867);
  xx[417] = xx[153] * xx[153];
  xx[418] = xx[154] * xx[155];
  xx[419] = xx[153] * xx[156];
  xx[420] = xx[154] * xx[156];
  xx[783] = xx[153] * xx[155];
  xx[784] = xx[155] * xx[156];
  xx[790] = xx[153] * xx[154];
  xx[1849] = (xx[417] + xx[154] * xx[154]) * xx[12] - xx[172];
  xx[1850] = xx[12] * (xx[418] - xx[419]);
  xx[1851] = (xx[420] + xx[783]) * xx[12];
  xx[1852] = (xx[418] + xx[419]) * xx[12];
  xx[1853] = (xx[417] + xx[155] * xx[155]) * xx[12] - xx[172];
  xx[1854] = xx[12] * (xx[784] - xx[790]);
  xx[1855] = xx[12] * (xx[420] - xx[783]);
  xx[1856] = (xx[784] + xx[790]) * xx[12];
  xx[1857] = (xx[417] + xx[156] * xx[156]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 1867, xx + 1849, xx + 1876);
  xx[417] = xx[106] * xx[106];
  xx[418] = xx[111] * xx[106];
  xx[419] = xx[105] * xx[110];
  xx[420] = xx[105] * xx[111];
  xx[783] = xx[106] * xx[110];
  xx[784] = xx[111] * xx[110];
  xx[790] = xx[105] * xx[106];
  xx[2113] = (xx[417] + xx[105] * xx[105]) * xx[12] - xx[172];
  xx[2114] = xx[12] * (xx[418] - xx[419]);
  xx[2115] = - ((xx[420] + xx[783]) * xx[12]);
  xx[2116] = - ((xx[419] + xx[418]) * xx[12]);
  xx[2117] = (xx[417] + xx[110] * xx[110]) * xx[12] - xx[172];
  xx[2118] = xx[12] * (xx[784] - xx[790]);
  xx[2119] = xx[12] * (xx[783] - xx[420]);
  xx[2120] = (xx[784] + xx[790]) * xx[12];
  xx[2121] = (xx[417] + xx[111] * xx[111]) * xx[12] - xx[172];
  xx[105] = xx[23] * xx[645] - xx[25] * xx[463];
  xx[106] = xx[24] * xx[463] - xx[23] * xx[542];
  xx[110] = xx[25] * xx[542] - xx[24] * xx[645];
  xx[111] = xx[23] * xx[693] - xx[25] * xx[670];
  xx[417] = xx[24] * xx[670] - xx[23] * xx[464];
  xx[418] = xx[25] * xx[464] - xx[24] * xx[693];
  xx[419] = xx[23] * xx[465] - xx[25] * xx[694];
  xx[420] = xx[24] * xx[694] - xx[23] * xx[575];
  xx[463] = xx[25] * xx[575] - xx[24] * xx[465];
  xx[2122] = xx[25] * xx[105] - xx[24] * xx[106];
  xx[2123] = xx[23] * xx[106] - xx[25] * xx[110];
  xx[2124] = xx[24] * xx[110] - xx[23] * xx[105];
  xx[2125] = xx[25] * xx[111] - xx[24] * xx[417];
  xx[2126] = xx[23] * xx[417] - xx[25] * xx[418];
  xx[2127] = xx[24] * xx[418] - xx[23] * xx[111];
  xx[2128] = xx[25] * xx[419] - xx[24] * xx[420];
  xx[2129] = xx[23] * xx[420] - xx[25] * xx[463];
  xx[2130] = xx[24] * xx[463] - xx[23] * xx[419];
  pm_math_matrix3x3Compose(xx + 2113, xx + 2122, xx + 2131);
  xx[105] = xx[157] * xx[157];
  xx[106] = xx[158] * xx[159];
  xx[110] = xx[157] * xx[160];
  xx[111] = xx[158] * xx[160];
  xx[417] = xx[157] * xx[159];
  xx[418] = xx[159] * xx[160];
  xx[419] = xx[157] * xx[158];
  xx[2113] = (xx[105] + xx[158] * xx[158]) * xx[12] - xx[172];
  xx[2114] = xx[12] * (xx[106] - xx[110]);
  xx[2115] = (xx[111] + xx[417]) * xx[12];
  xx[2116] = (xx[106] + xx[110]) * xx[12];
  xx[2117] = (xx[105] + xx[159] * xx[159]) * xx[12] - xx[172];
  xx[2118] = xx[12] * (xx[418] - xx[419]);
  xx[2119] = xx[12] * (xx[111] - xx[417]);
  xx[2120] = (xx[418] + xx[419]) * xx[12];
  xx[2121] = (xx[105] + xx[160] * xx[160]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 2131, xx + 2113, xx + 2140);
  xx[105] = xx[162] * xx[163];
  xx[106] = xx[161] * xx[164];
  xx[110] = (xx[105] + xx[106]) * xx[12];
  xx[111] = xx[15] * xx[16];
  xx[417] = xx[12] * xx[111] * state[1] * state[1];
  xx[418] = xx[112] * xx[112];
  xx[419] = (xx[418] + xx[109] * xx[109]) * xx[12] - xx[172];
  xx[420] = xx[109] * xx[104];
  xx[463] = xx[113] * xx[112];
  xx[464] = xx[420] + xx[463];
  xx[465] = xx[12] * xx[464];
  xx[542] = xx[12] * xx[16] * xx[16] - xx[172];
  xx[575] = xx[542] * state[1] * state[1];
  xx[645] = xx[417] * xx[419] + xx[465] * xx[575];
  xx[670] = xx[12] * xx[15] * xx[15] - xx[172];
  xx[693] = xx[670] * state[1] * state[1];
  xx[694] = xx[465] * xx[417] + xx[693] * xx[419];
  xx[783] = xx[161] * xx[161];
  xx[784] = (xx[783] + xx[173]) * xx[12] - xx[172];
  xx[173] = xx[419] * inputDot[0] * inputDot[0];
  xx[790] = xx[86] * xx[86];
  xx[801] = (xx[790] + xx[218]) * xx[12] - xx[172];
  xx[218] = xx[12] * xx[464] * inputDot[0] * inputDot[0];
  xx[464] = xx[137] * xx[132];
  xx[816] = xx[143] * xx[86];
  xx[863] = (xx[464] + xx[816]) * xx[12];
  xx[865] = xx[880] * xx[880];
  xx[866] = xx[881] * xx[882];
  xx[868] = xx[880] * xx[883];
  xx[874] = xx[881] * xx[883];
  xx[875] = xx[880] * xx[882];
  xx[876] = xx[882] * xx[883];
  xx[890] = xx[880] * xx[881];
  xx[2149] = (xx[865] + xx[881] * xx[881]) * xx[12] - xx[172];
  xx[2150] = xx[12] * (xx[866] - xx[868]);
  xx[2151] = (xx[874] + xx[875]) * xx[12];
  xx[2152] = (xx[866] + xx[868]) * xx[12];
  xx[2153] = (xx[865] + xx[882] * xx[882]) * xx[12] - xx[172];
  xx[2154] = xx[12] * (xx[876] - xx[890]);
  xx[2155] = xx[12] * (xx[874] - xx[875]);
  xx[2156] = (xx[876] + xx[890]) * xx[12];
  xx[2157] = (xx[865] + xx[883] * xx[883]) * xx[12] - xx[172];
  xx[865] = xx[137] * inputDot[0];
  xx[866] = xx[132] * inputDot[0];
  xx[874] = xx[12] * (xx[865] * xx[86] - xx[143] * xx[866]);
  xx[875] = - ((xx[866] * xx[86] + xx[143] * xx[865]) * xx[12]);
  xx[876] = inputDot[0] - (xx[866] * xx[132] + xx[137] * xx[865]) * xx[12];
  pm_math_matrix3x3PostCross(xx + 2149, xx + 874, xx + 2158);
  xx[86] = xx[162] * state[1];
  xx[132] = xx[163] * state[1];
  xx[137] = xx[12] * (xx[164] * xx[86] - xx[161] * xx[132]);
  pm_math_quatInverseXform(xx + 157, xx + 23, xx + 874);
  pm_math_quatInverseXform(xx + 153, xx + 49, xx + 157);
  xx[153] = xx[68] * xx[141];
  xx[154] = xx[136] * xx[62] - xx[60] * xx[68];
  xx[60] = xx[62] * xx[141];
  xx[880] = - xx[153];
  xx[881] = xx[154];
  xx[882] = xx[60];
  pm_math_cross3(xx + 239, xx + 880, xx + 928);
  xx[136] = xx[12] * (xx[928] + xx[153] * xx[69]) - xx[62];
  xx[141] = xx[157] + xx[136];
  xx[153] = xx[874] + xx[141];
  xx[155] = (xx[161] * xx[86] + xx[164] * xx[132]) * xx[12];
  xx[156] = xx[12] * (xx[929] - xx[154] * xx[69]);
  xx[154] = xx[158] + xx[156];
  xx[160] = xx[875] + xx[154];
  xx[161] = state[1] - (xx[162] * xx[86] + xx[163] * xx[132]) * xx[12];
  xx[86] = (xx[930] - xx[60] * xx[69]) * xx[12] - xx[68];
  xx[60] = xx[86] + state[19];
  xx[69] = xx[159] + xx[60];
  xx[132] = xx[876] + xx[69];
  xx[239] = xx[137] + xx[153];
  xx[240] = xx[155] + xx[160];
  xx[241] = xx[161] + xx[132];
  pm_math_matrix3x3PostCross(xx + 2158, xx + 239, xx + 2149);
  xx[162] = xx[104] * xx[112];
  xx[163] = xx[109] * xx[113];
  xx[239] = xx[463] - xx[420];
  xx[240] = xx[239] * xx[12];
  xx[241] = (xx[418] + xx[104] * xx[104]) * xx[12] - xx[172];
  xx[420] = xx[113] * xx[104];
  xx[463] = xx[109] * xx[112];
  xx[865] = xx[163] + xx[162];
  xx[866] = xx[12] * xx[865];
  xx[868] = xx[420] - xx[463];
  xx[880] = xx[868] * xx[12];
  xx[2158] = xx[419];
  xx[2159] = - xx[465];
  xx[2160] = (xx[162] - xx[163]) * xx[12];
  xx[2161] = xx[240];
  xx[2162] = xx[241];
  xx[2163] = xx[12] * (xx[420] + xx[463]);
  xx[2164] = - xx[866];
  xx[2165] = xx[880];
  xx[2166] = (xx[418] + xx[113] * xx[113]) * xx[12] - xx[172];
  xx[162] = xx[12] * (xx[464] - xx[816]);
  xx[163] = (xx[176] + xx[144]) * xx[12];
  xx[144] = (xx[790] + xx[219]) * xx[12] - xx[172];
  xx[176] = xx[12] * (xx[213] - xx[217]);
  xx[2167] = xx[801];
  xx[2168] = xx[162];
  xx[2169] = - xx[163];
  xx[2170] = xx[863];
  xx[2171] = xx[144];
  xx[2172] = xx[176];
  xx[2173] = xx[177];
  xx[2174] = - ((xx[217] + xx[213]) * xx[12]);
  xx[2175] = (xx[790] + xx[143] * xx[143]) * xx[12] - xx[172];
  xx[418] = xx[137];
  xx[419] = xx[155];
  xx[420] = xx[161];
  pm_math_matrix3x3PostCross(xx + 2167, xx + 418, xx + 2176);
  xx[418] = xx[153];
  xx[419] = xx[160];
  xx[420] = xx[132];
  pm_math_matrix3x3PostCross(xx + 2176, xx + 418, xx + 2167);
  xx[132] = xx[12] * (xx[105] - xx[106]);
  xx[105] = (xx[108] + xx[140]) * xx[12];
  xx[106] = (xx[783] + xx[174]) * xx[12] - xx[172];
  xx[108] = xx[12] * (xx[171] - xx[170]);
  xx[2176] = xx[784];
  xx[2177] = xx[132];
  xx[2178] = xx[105];
  xx[2179] = xx[110];
  xx[2180] = xx[106];
  xx[2181] = xx[108];
  xx[2182] = xx[169];
  xx[2183] = (xx[171] + xx[170]) * xx[12];
  xx[2184] = (xx[783] + xx[164] * xx[164]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 2176, xx + 874, xx + 2185);
  xx[169] = xx[141];
  xx[170] = xx[154];
  xx[171] = xx[69];
  pm_math_matrix3x3PostCross(xx + 2185, xx + 169, xx + 2176);
  pm_math_matrix3x3PostCross(xx + 2113, xx + 157, xx + 2185);
  xx[153] = xx[136];
  xx[154] = xx[156];
  xx[155] = xx[60];
  pm_math_matrix3x3PostCross(xx + 2185, xx + 153, xx + 2113);
  xx[153] = xx[136];
  xx[154] = xx[156];
  xx[155] = xx[86];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 153, xx + 2185);
  xx[60] = xx[2186] * state[19];
  xx[69] = xx[2189] * state[19];
  xx[86] = xx[2192] * state[19];
  xx[136] = xx[2185] * state[19];
  xx[137] = xx[2188] * state[19];
  xx[140] = xx[2191] * state[19];
  xx[153] = xx[2113] + xx[60] * xx[440] + xx[516] * xx[69] + xx[86] * xx[549];
  xx[154] = xx[2114] - (xx[136] * xx[440] + xx[516] * xx[137] + xx[140] * xx[549]);
  xx[155] = xx[2115];
  xx[156] = xx[2116] + xx[60] * xx[550] + xx[69] * xx[442] + xx[552] * xx[86];
  xx[157] = xx[2117] - (xx[136] * xx[550] + xx[137] * xx[442] + xx[552] * xx[140]);
  xx[158] = xx[2118];
  xx[159] = xx[2119] + xx[553] * xx[60] + xx[69] * xx[517] + xx[86] * xx[491];
  xx[160] = xx[2120] - (xx[553] * xx[136] + xx[137] * xx[517] + xx[140] * xx[491]);
  xx[161] = xx[2121];
  pm_math_matrix3x3Compose(xx + 699, xx + 153, xx + 1849);
  xx[60] = xx[2176] + xx[1849];
  xx[69] = xx[2179] + xx[1852];
  xx[86] = xx[12] * xx[111];
  xx[111] = xx[2177] + xx[1850];
  xx[136] = xx[2180] + xx[1853];
  xx[137] = xx[2178] + xx[1851];
  xx[140] = xx[2181] + xx[1854];
  xx[153] = xx[2167] + xx[60] * xx[670] - xx[69] * xx[86];
  xx[154] = xx[2168] + xx[111] * xx[670] - xx[136] * xx[86];
  xx[155] = xx[2169] + xx[137] * xx[670] - xx[140] * xx[86];
  xx[156] = xx[2170] + xx[69] * xx[542] - xx[60] * xx[86];
  xx[157] = xx[2171] + xx[136] * xx[542] - xx[111] * xx[86];
  xx[158] = xx[2172] + xx[140] * xx[542] - xx[137] * xx[86];
  xx[159] = xx[2173] - (xx[2182] + xx[1855]);
  xx[160] = xx[2174] - (xx[2183] + xx[1856]);
  xx[161] = xx[2175] - (xx[2184] + xx[1857]);
  pm_math_matrix3x3Compose(xx + 2158, xx + 153, xx + 1849);
  xx[60] = xx[12] * xx[402] * state[19] * state[19];
  xx[69] = xx[401] * state[19] * state[19];
  xx[111] = xx[12] * xx[405] * state[19] * state[19];
  xx[136] = (xx[407] + xx[412]) * xx[12];
  xx[137] = (xx[370] + xx[129] * xx[129]) * xx[12] - xx[172];
  xx[140] = xx[129] * xx[130];
  xx[129] = xx[127] * xx[128];
  xx[127] = xx[12] * (xx[140] - xx[129]);
  xx[128] = xx[417] * xx[241] - xx[693] * xx[240];
  xx[141] = xx[417] * xx[240] - xx[575] * xx[241];
  xx[143] = xx[12] * xx[239] * inputDot[0] * inputDot[0];
  xx[153] = xx[241] * inputDot[0] * inputDot[0];
  xx[154] = xx[12] * (xx[411] - xx[415]);
  xx[155] = (xx[140] + xx[129]) * xx[12];
  xx[129] = (xx[370] + xx[130] * xx[130]) * xx[12] - xx[172];
  xx[130] = xx[417] * xx[880] + xx[866] * xx[693];
  xx[140] = xx[417] * xx[866] + xx[575] * xx[880];
  xx[156] = xx[12] * xx[868] * inputDot[0] * inputDot[0];
  xx[157] = xx[12] * xx[865] * inputDot[0] * inputDot[0];
  xx[2113] = xx[1116] - (xx[362] * xx[372] - xx[399] * xx[413] + xx[414] * xx
    [416]) + xx[1876] + xx[2140] + xx[110] * xx[645] - xx[694] * xx[784] - (xx
    [173] * xx[801] - xx[218] * xx[863]) + (xx[2149] + xx[1849]) * xx[12];
  xx[2114] = xx[1117] - (xx[60] * xx[372] + xx[413] * xx[69] - xx[111] * xx[416])
    + xx[1877] + xx[2141] + xx[645] * xx[106] - xx[132] * xx[694] - (xx[162] *
    xx[173] - xx[218] * xx[144]) + (xx[2150] + xx[1850]) * xx[12];
  xx[2115] = xx[1118] + xx[1878] + xx[2142] + xx[108] * xx[645] - xx[105] * xx
    [694] + xx[173] * xx[163] + xx[218] * xx[176] + (xx[2151] + xx[1851]) * xx
    [12];
  xx[2116] = xx[1119] - (xx[136] * xx[362] - xx[399] * xx[137] + xx[127] * xx
    [414]) + xx[1879] + xx[2143] + xx[784] * xx[128] + xx[110] * xx[141] - (xx
    [143] * xx[801] + xx[863] * xx[153]) + (xx[2152] + xx[1852]) * xx[12];
  xx[2117] = xx[1120] - (xx[60] * xx[136] + xx[69] * xx[137] - xx[111] * xx[127])
    + xx[1880] + xx[2144] + xx[132] * xx[128] + xx[106] * xx[141] - (xx[162] *
    xx[143] + xx[153] * xx[144]) + (xx[2153] + xx[1853]) * xx[12];
  xx[2118] = xx[1121] + xx[1881] + xx[2145] + xx[105] * xx[128] + xx[108] * xx
    [141] + xx[143] * xx[163] - xx[176] * xx[153] + (xx[2154] + xx[1854]) * xx
    [12];
  xx[2119] = xx[1122] - (xx[154] * xx[362] - xx[399] * xx[155] + xx[414] * xx
    [129]) + xx[1882] + xx[2146] + xx[784] * xx[130] - xx[110] * xx[140] - (xx
    [156] * xx[863] - xx[157] * xx[801]) + (xx[2155] + xx[1855]) * xx[12];
  xx[2120] = xx[1123] - (xx[60] * xx[154] + xx[69] * xx[155] - xx[111] * xx[129])
    + xx[1883] + xx[2147] + xx[132] * xx[130] - xx[106] * xx[140] - (xx[156] *
    xx[144] - xx[162] * xx[157]) + (xx[2156] + xx[1856]) * xx[12];
  xx[2121] = xx[1124] + xx[1884] + xx[2148] + xx[105] * xx[130] - xx[108] * xx
    [140] - (xx[157] * xx[163] + xx[176] * xx[156]) + (xx[2157] + xx[1857]) *
    xx[12];
  pm_math_matrix3x3Xform(xx + 2113, xx + 180, xx + 158);
  pm_math_matrix3x3Xform(xx + 1336, xx + 165, xx + 161);
  xx[60] = 0.02199704525612488;
  xx[69] = xx[60] * xx[75];
  xx[105] = 0.01270000000000012;
  xx[106] = xx[105] * xx[67] + xx[71] * xx[60];
  xx[108] = xx[105] * xx[75];
  xx[169] = xx[69];
  xx[170] = - xx[106];
  xx[171] = xx[108];
  pm_math_cross3(xx + 191, xx + 169, xx + 180);
  xx[110] = state[17] * state[17];
  xx[111] = ((xx[69] * xx[73] + xx[180]) * xx[12] - xx[105]) * xx[110];
  xx[69] = (xx[181] - xx[106] * xx[73]) * xx[12] * xx[110];
  xx[105] = (xx[60] + xx[12] * (xx[182] + xx[108] * xx[73])) * xx[110];
  xx[169] = xx[161] + xx[111];
  xx[170] = xx[162] + xx[69];
  xx[171] = xx[163] + xx[105];
  pm_math_quatXform(xx + 123, xx + 169, xx + 161);
  pm_math_matrix3x3Xform(xx + 1858, xx + 197, xx + 169);
  pm_math_matrix3x3Xform(xx + 1858, xx + 200, xx + 180);
  xx[191] = xx[169] + xx[180];
  xx[192] = xx[170] + xx[181];
  xx[193] = xx[171] + xx[182];
  pm_math_quatXform(xx + 119, xx + 191, xx + 169);
  pm_math_matrix3x3Xform(xx + 2122, xx + 203, xx + 191);
  pm_math_matrix3x3Xform(xx + 2122, xx + 206, xx + 239);
  xx[418] = xx[191] + xx[239];
  xx[419] = xx[192] + xx[240];
  xx[420] = xx[193] + xx[241];
  pm_math_quatXform(xx + 115, xx + 418, xx + 191);
  xx[60] = xx[212] * xx[417] - xx[186] * xx[693];
  xx[106] = xx[186] * xx[417] - xx[212] * xx[575];
  xx[108] = xx[113] * xx[106];
  xx[110] = xx[113] * xx[60];
  xx[132] = xx[109] * xx[106] + xx[60] * xx[104];
  xx[418] = - xx[108];
  xx[419] = xx[110];
  xx[420] = - xx[132];
  pm_math_cross3(xx + 214, xx + 418, xx + 463);
  xx[144] = inputDot[0] * inputDot[0];
  xx[164] = xx[298] * xx[104];
  xx[174] = xx[113] * xx[310];
  xx[176] = xx[144] * ((xx[164] * xx[104] + xx[174]) * xx[12] - xx[298]);
  pm_math_cross3(xx + 23, xx + 206, xx + 418);
  pm_math_quatXform(xx + 8, xx + 418, xx + 206);
  pm_math_cross3(xx + 49, xx + 200, xx + 874);
  pm_math_quatXform(xx + 53, xx + 874, xx + 200);
  xx[177] = xx[12] * xx[228] * state[17];
  xx[880] = - (xx[183] * xx[68]);
  xx[881] = xx[62] * xx[184] - xx[68] * xx[168];
  xx[882] = xx[183] * xx[62];
  pm_math_quatXform(xx + 76, xx + 880, xx + 928);
  xx[168] = xx[177] + xx[928];
  pm_math_cross3(xx + 49, xx + 197, xx + 880);
  xx[183] = (xx[245] - xx[98]) * state[17];
  xx[184] = xx[183] + xx[929];
  xx[197] = xx[12] * xx[246] * state[17];
  xx[198] = xx[930] - xx[197];
  xx[928] = xx[168] + xx[880];
  xx[929] = xx[184] + xx[881];
  xx[930] = xx[198] + xx[882];
  pm_math_quatXform(xx + 53, xx + 928, xx + 880);
  xx[199] = xx[200] + xx[880];
  pm_math_cross3(xx + 23, xx + 203, xx + 928);
  xx[203] = xx[201] + xx[881];
  xx[204] = xx[202] + xx[882];
  xx[880] = xx[199] + xx[928];
  xx[881] = xx[203] + xx[929];
  xx[882] = xx[204] + xx[930];
  pm_math_quatXform(xx + 8, xx + 880, xx + 928);
  xx[205] = xx[206] + xx[928];
  xx[213] = xx[205] - xx[212] * state[1];
  xx[208] = xx[207] + xx[929];
  xx[212] = xx[208] + xx[186] * state[1];
  xx[186] = xx[212] * xx[15] + xx[16] * xx[213];
  xx[217] = (xx[213] - xx[12] * xx[186] * xx[16]) * inputDot[0];
  xx[213] = xx[113] * xx[217];
  xx[219] = (xx[212] - xx[12] * xx[186] * xx[15]) * inputDot[0];
  xx[186] = xx[113] * xx[219];
  xx[212] = xx[219] * xx[104] - xx[109] * xx[217];
  xx[880] = - xx[213];
  xx[881] = - xx[186];
  xx[882] = xx[212];
  pm_math_cross3(xx + 214, xx + 880, xx + 928);
  xx[228] = xx[208] * state[1];
  xx[208] = xx[205] * state[1];
  xx[205] = xx[228] * xx[16] - xx[15] * xx[208];
  xx[880] = xx[199];
  xx[881] = xx[203];
  xx[882] = xx[204];
  pm_math_cross3(xx + 23, xx + 880, xx + 950);
  pm_math_quatXform(xx + 8, xx + 950, xx + 880);
  xx[950] = xx[168];
  xx[951] = xx[184];
  xx[952] = xx[198];
  pm_math_cross3(xx + 49, xx + 950, xx + 971);
  pm_math_quatXform(xx + 53, xx + 971, xx + 950);
  pm_math_quatXform(xx + 8, xx + 950, xx + 971);
  xx[168] = xx[880] + xx[971];
  xx[184] = xx[881] + xx[972];
  xx[198] = xx[184] * xx[15] + xx[168] * xx[16];
  xx[199] = xx[882] + xx[973];
  xx[880] = xx[12] * xx[16] * xx[205] - xx[228] + xx[168] - xx[12] * xx[198] *
    xx[16];
  xx[881] = xx[208] + xx[12] * xx[15] * xx[205] + xx[184] - xx[12] * xx[198] *
    xx[15];
  xx[882] = xx[199] - (xx[15] * xx[199] * xx[15] + xx[199] * xx[16] * xx[16]) *
    xx[12];
  pm_math_quatXform(xx + 841, xx + 880, xx + 203);
  xx[168] = xx[114] / xx[250];
  xx[880] = xx[89];
  xx[881] = xx[94];
  xx[882] = xx[114] - xx[52] * xx[168];
  pm_math_quatXform(xx + 100, xx + 880, xx + 950);
  pm_math_cross3(xx + 83, xx + 275, xx + 880);
  pm_math_cross3(xx + 83, xx + 880, xx + 971);
  pm_math_quatInverseXform(xx + 100, xx + 971, xx + 880);
  xx[971] = xx[274] * xx[880];
  xx[972] = xx[274] * xx[881];
  xx[973] = xx[274] * xx[882];
  pm_math_quatXform(xx + 100, xx + 971, xx + 880);
  pm_math_cross3(xx + 275, xx + 880, xx + 971);
  pm_math_quatInverseXform(xx + 990, xx + 83, xx + 984);
  xx[184] = xx[986] - state[25];
  xx[1003] = xx[984];
  xx[1004] = xx[985];
  xx[1005] = xx[184];
  xx[1006] = xx[47] * xx[984];
  xx[1007] = xx[48] * xx[985];
  xx[1008] = xx[52] * xx[184];
  pm_math_cross3(xx + 1003, xx + 1006, xx + 1042);
  xx[184] = xx[1042] - xx[47] * xx[985] * state[25];
  xx[198] = xx[1043] + xx[48] * xx[984] * state[25];
  xx[199] = xx[1044] / xx[278];
  xx[984] = xx[184];
  xx[985] = xx[198];
  xx[986] = xx[1044] - xx[52] * xx[199];
  pm_math_quatXform(xx + 990, xx + 984, xx + 1003);
  pm_math_cross3(xx + 83, xx + 336, xx + 984);
  pm_math_cross3(xx + 83, xx + 984, xx + 1006);
  pm_math_quatInverseXform(xx + 990, xx + 1006, xx + 984);
  xx[1006] = xx[274] * xx[984];
  xx[1007] = xx[274] * xx[985];
  xx[1008] = xx[274] * xx[986];
  pm_math_quatXform(xx + 990, xx + 1006, xx + 984);
  pm_math_cross3(xx + 336, xx + 984, xx + 1006);
  xx[208] = xx[81] * xx[324];
  xx[228] = xx[66] * xx[324];
  xx[245] = xx[66] - (xx[282] * xx[208] + xx[228] * xx[324]) * xx[12];
  xx[246] = xx[81] + xx[12] * (xx[282] * xx[228] - xx[208] * xx[324]);
  xx[208] = xx[72] - state[23];
  xx[1045] = xx[245];
  xx[1046] = xx[246];
  xx[1047] = xx[208];
  xx[1061] = xx[47] * xx[245];
  xx[1062] = xx[246] * xx[48];
  xx[1063] = xx[52] * xx[208];
  pm_math_cross3(xx + 1045, xx + 1061, xx + 1074);
  xx[208] = xx[1074] - xx[47] * xx[246] * state[23];
  xx[228] = xx[1075] + xx[48] * xx[245] * state[23];
  xx[245] = xx[228] * xx[324];
  xx[246] = xx[324] * xx[208];
  xx[362] = - (xx[383] * xx[81]);
  xx[370] = xx[66] * xx[383];
  xx[1045] = xx[362];
  xx[1046] = xx[370] - xx[72] * xx[252];
  xx[1047] = xx[252] * xx[81];
  pm_math_cross3(xx + 83, xx + 1045, xx + 1061);
  xx[399] = xx[1061] * xx[324];
  xx[401] = xx[1062] * xx[324];
  xx[402] = (xx[1062] + xx[12] * (xx[282] * xx[399] - xx[401] * xx[324])) * xx
    [274];
  xx[405] = xx[274] * (xx[1061] - (xx[282] * xx[401] + xx[399] * xx[324]) * xx
                       [12]);
  xx[399] = xx[405] * xx[324];
  xx[401] = xx[402] * xx[324];
  xx[407] = xx[402] - (xx[282] * xx[399] + xx[401] * xx[324]) * xx[12];
  xx[402] = xx[208] + xx[12] * (xx[282] * xx[245] - xx[246] * xx[324]) + xx[383]
    * xx[407];
  xx[208] = xx[81] * xx[388];
  xx[411] = xx[66] * xx[388];
  xx[412] = xx[66] - (xx[387] * xx[208] + xx[411] * xx[388]) * xx[12];
  xx[414] = xx[81] + xx[12] * (xx[387] * xx[411] - xx[208] * xx[388]);
  xx[208] = xx[72] - state[21];
  xx[1045] = xx[412];
  xx[1046] = xx[414];
  xx[1047] = xx[208];
  xx[1078] = xx[47] * xx[412];
  xx[1079] = xx[414] * xx[48];
  xx[1080] = xx[52] * xx[208];
  pm_math_cross3(xx + 1045, xx + 1078, xx + 1107);
  xx[208] = xx[1107] - xx[47] * xx[414] * state[21];
  xx[411] = xx[1108] + xx[48] * xx[412] * state[21];
  xx[412] = xx[411] * xx[388];
  xx[414] = xx[388] * xx[208];
  xx[1045] = xx[362];
  xx[1046] = xx[72] * xx[385] + xx[370];
  xx[1047] = - (xx[385] * xx[81]);
  pm_math_cross3(xx + 83, xx + 1045, xx + 1078);
  xx[362] = xx[1078] * xx[388];
  xx[370] = xx[1079] * xx[388];
  xx[415] = (xx[1079] + xx[12] * (xx[387] * xx[362] - xx[370] * xx[388])) * xx
    [274];
  xx[783] = xx[274] * (xx[1078] - (xx[387] * xx[370] + xx[362] * xx[388]) * xx
                       [12]);
  xx[362] = xx[783] * xx[388];
  xx[370] = xx[415] * xx[388];
  xx[784] = xx[415] - (xx[387] * xx[362] + xx[370] * xx[388]) * xx[12];
  xx[415] = xx[208] + xx[12] * (xx[387] * xx[412] - xx[414] * xx[388]) + xx[383]
    * xx[784];
  pm_math_quatInverseXform(xx + 149, xx + 83, xx + 1045);
  xx[208] = xx[1047] + state[19];
  xx[1116] = xx[1045];
  xx[1117] = xx[1046];
  xx[1118] = xx[208];
  xx[1119] = xx[47] * xx[1045];
  xx[1120] = xx[48] * xx[1046];
  xx[1121] = xx[208] * xx[52];
  pm_math_cross3(xx + 1116, xx + 1119, xx + 1122);
  xx[208] = xx[1122] + xx[47] * xx[1046] * state[19];
  xx[47] = xx[1123] - xx[48] * xx[1045] * state[19];
  xx[48] = xx[1124] / xx[222];
  xx[1045] = xx[208];
  xx[1046] = xx[47];
  xx[1047] = xx[1124] - xx[52] * xx[48];
  pm_math_quatXform(xx + 149, xx + 1045, xx + 1116);
  pm_math_cross3(xx + 83, xx + 165, xx + 1045);
  pm_math_cross3(xx + 83, xx + 1045, xx + 1119);
  pm_math_quatInverseXform(xx + 149, xx + 1119, xx + 83);
  xx[1045] = xx[274] * xx[83];
  xx[1046] = xx[274] * xx[84];
  xx[1047] = xx[274] * xx[85];
  pm_math_quatXform(xx + 149, xx + 1045, xx + 83);
  pm_math_cross3(xx + 165, xx + 83, xx + 1045);
  xx[1849] = xx[430];
  xx[1850] = xx[447];
  xx[1851] = xx[74];
  xx[1852] = xx[396];
  xx[1853] = xx[481];
  xx[1854] = xx[424];
  xx[1855] = xx[400];
  xx[1856] = xx[284];
  xx[1857] = xx[410];
  xx[74] = xx[81] * xx[68];
  xx[165] = xx[80] * xx[68] - xx[82] * xx[62];
  xx[166] = xx[81] * xx[62];
  xx[1119] = - xx[74];
  xx[1120] = xx[165];
  xx[1121] = xx[166];
  pm_math_matrix3x3Xform(xx + 1849, xx + 1119, xx + 1132);
  xx[1849] = - xx[232];
  xx[1850] = - xx[369];
  xx[1851] = - xx[305];
  xx[1852] = - xx[289];
  xx[1853] = - xx[459];
  xx[1854] = - xx[290];
  xx[1855] = xx[302];
  xx[1856] = xx[87];
  xx[1857] = - xx[306];
  pm_math_cross3(xx + 57, xx + 460, xx + 1136);
  pm_math_cross3(xx + 57, xx + 1136, xx + 1140);
  pm_math_quatInverseXform(xx + 76, xx + 1140, xx + 57);
  xx[81] = xx[98] * state[17];
  xx[1136] = xx[57] + (xx[82] + xx[72]) * xx[81];
  xx[1137] = xx[58];
  xx[1138] = xx[59] - (xx[80] + xx[66]) * xx[81];
  pm_math_matrix3x3Xform(xx + 1849, xx + 1136, xx + 57);
  xx[66] = xx[1132] + xx[57];
  xx[72] = xx[91] + xx[950] + xx[971] + xx[1003] + xx[1006] + xx[402] + xx[415]
    + xx[1116] + xx[1045] + xx[66];
  xx[80] = xx[1076] / xx[403];
  xx[81] = xx[252] * xx[407];
  xx[82] = xx[1109] / xx[185];
  xx[87] = xx[385] * xx[784];
  xx[167] = xx[1134] + xx[59];
  xx[232] = xx[93] + xx[952] + xx[973] + xx[1005] + xx[1008] + xx[1076] - xx[52]
    * xx[80] - xx[81] + xx[1109] - xx[52] * xx[82] + xx[87] + xx[1118] + xx[1047]
    + xx[167];
  pm_math_matrix3x3TransposeXform(xx + 1849, xx + 1119, xx + 1140);
  xx[1849] = xx[291];
  xx[1850] = xx[304];
  xx[1851] = xx[293];
  xx[1852] = xx[303];
  xx[1853] = xx[392];
  xx[1854] = xx[296];
  xx[1855] = xx[309];
  xx[1856] = xx[308];
  xx[1857] = xx[299];
  pm_math_matrix3x3Xform(xx + 1849, xx + 1136, xx + 289);
  xx[284] = xx[881] + xx[985] + xx[407] + xx[784] + xx[84] + xx[1141] + xx[290];
  xx[84] = xx[284] * xx[98];
  xx[98] = (xx[72] * xx[61] + xx[232] * xx[70] + xx[84]) / xx[359];
  xx[293] = xx[274] * xx[1063];
  xx[296] = xx[405] + xx[12] * (xx[282] * xx[401] - xx[399] * xx[324]);
  xx[299] = xx[228] - (xx[282] * xx[246] + xx[245] * xx[324]) * xx[12] + xx[252]
    * xx[293] - xx[296] * xx[383];
  xx[228] = xx[783] + xx[12] * (xx[387] * xx[370] - xx[362] * xx[388]);
  xx[245] = xx[274] * xx[1080];
  xx[246] = xx[411] - (xx[387] * xx[414] + xx[412] * xx[388]) * xx[12] - (xx[228]
    * xx[383] + xx[385] * xx[245]);
  xx[57] = xx[1133] + xx[58];
  xx[302] = xx[72] + xx[98] * xx[342];
  xx[303] = xx[92] + xx[951] + xx[972] + xx[1004] + xx[1007] + xx[299] + xx[246]
    + xx[1117] + xx[1046] + xx[57] + xx[425] * xx[98];
  xx[304] = xx[232] - xx[307] * xx[98];
  pm_math_quatXform(xx + 76, xx + 302, xx + 399);
  xx[58] = xx[880] + xx[984] + xx[296] + xx[228] + xx[83] + xx[1140] + xx[289];
  xx[59] = xx[882] + xx[986] + xx[293] + xx[245] + xx[85] + xx[1142] + xx[291];
  xx[289] = xx[58] + xx[294] * xx[98];
  xx[290] = xx[284] + xx[297] * xx[98];
  xx[291] = xx[59] + xx[98] * xx[300];
  pm_math_quatXform(xx + 76, xx + 289, xx + 302);
  pm_math_cross3(xx + 460, xx + 302, xx + 289);
  pm_math_cross3(xx + 31, xx + 49, xx + 410);
  pm_math_matrix3x3Xform(xx + 373, xx + 410, xx + 880);
  xx[373] = xx[31] + xx[40];
  xx[374] = xx[32] + xx[45];
  xx[375] = xx[33] + xx[46];
  pm_math_cross3(xx + 373, xx + 874, xx + 31);
  pm_math_cross3(xx + 26, xx + 539, xx + 373);
  pm_math_cross3(xx + 26, xx + 373, xx + 376);
  pm_math_quatInverseXform(xx + 53, xx + 376, xx + 26);
  xx[40] = xx[31] + xx[26];
  xx[45] = xx[32] + xx[27];
  xx[26] = xx[33] + xx[28];
  xx[31] = xx[40];
  xx[32] = xx[45];
  xx[33] = xx[26];
  pm_math_matrix3x3Xform(xx + 448, xx + 31, xx + 373);
  xx[27] = xx[880] + xx[373];
  xx[28] = xx[63] + xx[399] + xx[289] + xx[27];
  xx[46] = xx[881] + xx[374];
  xx[72] = xx[64] + xx[400] + xx[290] + xx[46];
  xx[83] = xx[882] + xx[375];
  xx[85] = xx[65] + xx[401] + xx[291] + xx[83];
  xx[289] = xx[28];
  xx[290] = xx[72];
  xx[291] = xx[85];
  pm_math_matrix3x3TransposeXform(xx + 448, xx + 410, xx + 373);
  pm_math_matrix3x3Xform(xx + 469, xx + 31, xx + 376);
  xx[31] = xx[373] + xx[376];
  xx[32] = xx[302] + xx[31];
  xx[33] = xx[374] + xx[377];
  xx[228] = xx[303] + xx[33];
  xx[232] = xx[375] + xx[378];
  xx[245] = xx[304] + xx[232];
  xx[302] = xx[32];
  xx[303] = xx[228];
  xx[304] = xx[245];
  xx[373] = - (pm_math_dot3(xx + 315, xx + 289) + pm_math_dot3(xx + 443, xx +
    302));
  xx[374] = - (pm_math_dot3(xx + 478, xx + 289) + pm_math_dot3(xx + 485, xx +
    302));
  xx[375] = - (pm_math_dot3(xx + 495, xx + 289) + pm_math_dot3(xx + 504, xx +
    302));
  solveSymmetricPosDef(xx + 518, xx + 373, 3, 1, xx + 289, xx + 302);
  xx[302] = xx[28] + xx[358] * xx[289] + xx[422] * xx[290] + xx[510] * xx[291];
  xx[303] = xx[72] + xx[360] * xx[289] + xx[426] * xx[290] + xx[511] * xx[291];
  xx[304] = xx[85] + xx[361] * xx[289] + xx[428] * xx[290] + xx[498] * xx[291];
  pm_math_quatXform(xx + 53, xx + 302, xx + 373);
  xx[302] = xx[32] + xx[363] * xx[289] + xx[446] * xx[290] + xx[499] * xx[291];
  xx[303] = xx[228] + xx[365] * xx[289] + xx[457] * xx[290] + xx[500] * xx[291];
  xx[304] = xx[245] + xx[371] * xx[289] + xx[458] * xx[290] + xx[512] * xx[291];
  pm_math_quatXform(xx + 53, xx + 302, xx + 376);
  pm_math_cross3(xx + 539, xx + 376, xx + 302);
  xx[379] = xx[19];
  xx[380] = xx[5];
  xx[381] = xx[7];
  pm_math_cross3(xx + 379, xx + 23, xx + 399);
  pm_math_matrix3x3Xform(xx + 344, xx + 399, xx + 379);
  xx[344] = xx[19] + xx[4];
  xx[345] = xx[5] + xx[6];
  xx[346] = xx[7] + xx[17];
  pm_math_cross3(xx + 344, xx + 418, xx + 4);
  xx[7] = xx[14] * xx[14] * xx[210];
  xx[17] = xx[11] * xx[7];
  xx[19] = xx[14] * xx[14] * xx[209];
  xx[14] = xx[11] * xx[19];
  xx[28] = xx[10] * xx[19] - xx[9] * xx[7];
  xx[344] = xx[17];
  xx[345] = - xx[14];
  xx[346] = xx[28];
  pm_math_cross3(xx + 9, xx + 344, xx + 347);
  xx[32] = xx[4] + xx[12] * (xx[347] - xx[8] * xx[17]) - xx[19];
  xx[17] = xx[5] + (xx[8] * xx[14] + xx[348]) * xx[12] - xx[7];
  xx[4] = xx[6] + xx[12] * (xx[349] - xx[8] * xx[28]);
  xx[5] = xx[32];
  xx[6] = xx[17];
  xx[7] = xx[4];
  pm_math_matrix3x3Xform(xx + 561, xx + 5, xx + 344);
  xx[14] = xx[379] + xx[344];
  xx[19] = xx[34] + xx[373] + xx[302] + xx[14];
  xx[28] = xx[380] + xx[345];
  xx[72] = xx[35] + xx[374] + xx[303] + xx[28];
  xx[85] = xx[381] + xx[346];
  xx[228] = xx[36] + xx[375] + xx[304] + xx[85];
  xx[302] = xx[19];
  xx[303] = xx[72];
  xx[304] = xx[228];
  pm_math_matrix3x3TransposeXform(xx + 561, xx + 399, xx + 344);
  pm_math_matrix3x3Xform(xx + 611, xx + 5, xx + 347);
  xx[5] = xx[344] + xx[347];
  xx[6] = xx[376] + xx[5];
  xx[7] = xx[345] + xx[348];
  xx[245] = xx[377] + xx[7];
  xx[274] = xx[346] + xx[349];
  xx[293] = xx[378] + xx[274];
  xx[344] = xx[6];
  xx[345] = xx[245];
  xx[346] = xx[293];
  xx[347] = - (pm_math_dot3(xx + 554, xx + 302) + pm_math_dot3(xx + 572, xx +
    344));
  xx[348] = - (pm_math_dot3(xx + 624, xx + 302) + pm_math_dot3(xx + 633, xx +
    344));
  xx[349] = - (pm_math_dot3(xx + 649, xx + 302) + pm_math_dot3(xx + 658, xx +
    344));
  solveSymmetricPosDef(xx + 672, xx + 347, 3, 1, xx + 302, xx + 344);
  xx[344] = xx[19] + xx[578] * xx[302] + xx[639] * xx[303] + xx[664] * xx[304];
  xx[345] = xx[72] + xx[579] * xx[302] + xx[640] * xx[303] + xx[665] * xx[304];
  xx[346] = xx[228] + xx[557] * xx[302] + xx[627] * xx[303] + xx[652] * xx[304];
  pm_math_quatXform(xx + 8, xx + 344, xx + 347);
  xx[344] = xx[6] + xx[559] * xx[302] + xx[628] * xx[303] + xx[653] * xx[304];
  xx[345] = xx[245] + xx[580] * xx[302] + xx[629] * xx[303] + xx[654] * xx[304];
  xx[346] = xx[293] + xx[608] * xx[302] + xx[641] * xx[303] + xx[666] * xx[304];
  pm_math_quatXform(xx + 8, xx + 344, xx + 350);
  pm_math_cross3(xx + 209, xx + 350, xx + 344);
  xx[6] = xx[230] * xx[144];
  xx[19] = xx[6] * xx[16];
  xx[72] = xx[12] * xx[19] * xx[16] - xx[6];
  xx[6] = xx[723] - xx[601];
  xx[228] = xx[12] * xx[15] * xx[19];
  xx[19] = xx[724] - xx[604];
  xx[245] = xx[72] * xx[6] + xx[228] * xx[19];
  xx[293] = inputDdot[0] - (xx[15] * xx[15] * inputDdot[0] + xx[16] * inputDdot
    [0] * xx[16]) * xx[12];
  xx[296] = xx[298] * xx[144];
  xx[305] = xx[298] * inputDdot[0] + xx[230] * inputDdot[0];
  xx[306] = xx[296] * xx[16] - xx[305] * xx[15];
  xx[308] = xx[12] * xx[16] * xx[306] - xx[296];
  xx[296] = xx[305] + xx[12] * xx[15] * xx[306];
  xx[305] = xx[236] / xx[292] * xx[293] + xx[6] / xx[292] * xx[308] + xx[296] *
    xx[19] / xx[292];
  xx[6] = (xx[349] + xx[346] + xx[245]) / xx[292] + xx[305];
  xx[19] = xx[293] - xx[6];
  xx[236] = xx[9] * xx[19];
  xx[306] = xx[10] * xx[19];
  xx[309] = xx[12] * (xx[11] * xx[236] - xx[8] * xx[306]);
  xx[344] = (xx[8] * xx[236] + xx[11] * xx[306]) * xx[12];
  xx[345] = xx[19] - (xx[9] * xx[236] + xx[10] * xx[306]) * xx[12];
  xx[346] = xx[309];
  xx[347] = xx[344];
  xx[348] = xx[345];
  xx[236] = xx[308] + xx[72];
  xx[72] = xx[236] - xx[210] * xx[19];
  xx[306] = xx[296] + xx[228];
  xx[228] = xx[306] + xx[209] * xx[19];
  xx[19] = xx[228] * xx[11];
  xx[296] = xx[11] * xx[72];
  xx[308] = xx[228] * xx[9] - xx[10] * xx[72];
  xx[349] = - xx[19];
  xx[350] = xx[296];
  xx[351] = xx[308];
  pm_math_cross3(xx + 9, xx + 349, xx + 373);
  xx[349] = xx[72] + (xx[8] * xx[19] + xx[373]) * xx[12];
  xx[19] = xx[228] + xx[12] * (xx[374] - xx[8] * xx[296]);
  xx[72] = xx[12] * (xx[375] - xx[8] * xx[308]);
  xx[350] = xx[349];
  xx[351] = xx[19];
  xx[352] = xx[72];
  xx[228] = xx[302] - (pm_math_dot3(xx + 431, xx + 346) + pm_math_dot3(xx + 605,
    xx + 350));
  xx[296] = xx[303] - (pm_math_dot3(xx + 708, xx + 346) + pm_math_dot3(xx + 711,
    xx + 350));
  xx[302] = xx[304] - (pm_math_dot3(xx + 714, xx + 346) + pm_math_dot3(xx + 717,
    xx + 350));
  xx[346] = xx[309] - xx[355] * xx[228] + xx[609] * xx[296] + xx[646] * xx[302]
    + xx[399];
  xx[347] = xx[344] + xx[548] * xx[228] + xx[610] * xx[296] + xx[647] * xx[302]
    + xx[400];
  xx[348] = xx[345] - xx[551] * xx[228] + xx[623] * xx[296] - xx[648] * xx[302]
    + xx[401];
  pm_math_quatInverseXform(xx + 53, xx + 346, xx + 350);
  pm_math_cross3(xx + 346, xx + 539, xx + 373);
  xx[344] = xx[349] - xx[439] * xx[228] - xx[630] * xx[296] - xx[655] * xx[302]
    + xx[32] + xx[373];
  xx[345] = xx[19] - xx[570] * xx[228] + xx[631] * xx[296] + xx[656] * xx[302] +
    xx[17] + xx[374];
  xx[346] = xx[72] + xx[571] * xx[228] + xx[632] * xx[296] - xx[657] * xx[302] +
    xx[4] + xx[375];
  pm_math_quatInverseXform(xx + 53, xx + 344, xx + 347);
  xx[19] = xx[289] - (pm_math_dot3(xx + 434, xx + 350) + pm_math_dot3(xx + 720,
    xx + 347));
  xx[72] = xx[290] - (pm_math_dot3(xx + 543, xx + 350) + pm_math_dot3(xx + 728,
    xx + 347));
  xx[289] = xx[291] - (pm_math_dot3(xx + 731, xx + 350) + pm_math_dot3(xx + 581,
    xx + 347));
  xx[344] = xx[350] + xx[312] * xx[19] + xx[384] * xx[72] - xx[492] * xx[289] +
    xx[410];
  xx[345] = xx[351] - xx[313] * xx[19] + xx[390] * xx[72] + xx[493] * xx[289] +
    xx[411];
  xx[346] = xx[352] + xx[314] * xx[19] - xx[391] * xx[72] + xx[494] * xx[289] +
    xx[412];
  pm_math_quatInverseXform(xx + 76, xx + 344, xx + 350);
  pm_math_cross3(xx + 344, xx + 460, xx + 373);
  xx[344] = xx[347] + xx[353] * xx[19] - xx[394] * xx[72] + xx[501] * xx[289] +
    xx[40] + xx[373];
  xx[345] = xx[348] - xx[354] * xx[19] + xx[395] * xx[72] - xx[502] * xx[289] +
    xx[45] + xx[374];
  xx[346] = xx[349] - xx[357] * xx[19] + xx[397] * xx[72] + xx[503] * xx[289] +
    xx[26] + xx[375];
  pm_math_quatInverseXform(xx + 76, xx + 344, xx + 347);
  xx[290] = pm_math_dot3(xx + 366, xx + 350) + pm_math_dot3(xx + 286, xx + 347)
    - xx[98];
  xx[98] = xx[352] + xx[290] * xx[70] + xx[166];
  xx[344] = xx[350] + xx[290] * xx[61] - xx[74];
  xx[345] = xx[351] + xx[165];
  xx[346] = xx[98];
  pm_math_quatInverseXform(xx + 149, xx + 344, xx + 347);
  xx[291] = xx[48] + xx[398] * xx[349];
  xx[347] = xx[642];
  xx[348] = - ((xx[727] + xx[591]) * xx[12]);
  xx[349] = xx[172] - (xx[682] + xx[690]) * xx[12];
  pm_math_cross3(xx + 347, xx + 738, xx + 350);
  pm_math_quatXform(xx + 943, xx + 350, xx + 347);
  xx[48] = xx[437] * xx[587];
  xx[303] = xx[587] * xx[683];
  xx[304] = xx[683] * xx[438] - xx[437] * xx[311];
  xx[350] = - xx[48];
  xx[351] = - xx[303];
  xx[352] = xx[304];
  pm_math_cross3(xx + 749, xx + 350, xx + 373);
  xx[308] = xx[311] * xx[534];
  xx[309] = xx[585] * xx[586];
  xx[350] = inputDot[1] - (xx[560] * xx[560] * inputDot[1] + xx[584] * inputDot
    [1] * xx[584]) * xx[12];
  xx[351] = xx[350] + state[29];
  xx[352] = xx[351] * xx[735];
  xx[362] = xx[351] * xx[736];
  xx[369] = xx[12] * (xx[737] * xx[352] - xx[734] * xx[362]);
  xx[370] = xx[369] + xx[527];
  xx[376] = (xx[734] * xx[352] + xx[737] * xx[362]) * xx[12];
  xx[377] = xx[376] + xx[528];
  xx[378] = xx[351] - (xx[735] * xx[352] + xx[736] * xx[362]) * xx[12];
  xx[352] = xx[378] + xx[529];
  xx[379] = xx[370];
  xx[380] = xx[377];
  xx[381] = xx[352];
  xx[418] = xx[370] * xx[29];
  xx[419] = xx[377] * xx[30];
  xx[420] = xx[352] * xx[18];
  pm_math_cross3(xx + 379, xx + 418, xx + 447);
  xx[379] = xx[369];
  xx[380] = xx[376];
  xx[381] = xx[378];
  pm_math_cross3(xx + 379, xx + 527, xx + 418);
  xx[362] = xx[447] + xx[29] * xx[418];
  xx[379] = xx[448] + xx[30] * xx[419];
  xx[380] = xx[449] + xx[18] * xx[420];
  xx[418] = xx[362];
  xx[419] = xx[379];
  xx[420] = xx[380];
  xx[447] = xx[369] + xx[370];
  xx[448] = xx[376] + xx[377];
  xx[449] = xx[378] + xx[352];
  pm_math_cross3(xx + 447, xx + 798, xx + 376);
  xx[352] = xx[351] * xx[351] * xx[742];
  xx[369] = xx[737] * xx[352];
  xx[370] = xx[351] * xx[351] * xx[741];
  xx[381] = xx[737] * xx[370];
  xx[392] = xx[736] * xx[370] - xx[735] * xx[352];
  xx[447] = xx[369];
  xx[448] = - xx[381];
  xx[449] = xx[392];
  pm_math_cross3(xx + 735, xx + 447, xx + 450);
  xx[396] = (xx[376] + xx[12] * (xx[450] - xx[734] * xx[369]) - xx[370]) * xx
    [558];
  xx[369] = (xx[377] + (xx[734] * xx[381] + xx[451]) * xx[12] - xx[352]) * xx
    [558];
  xx[352] = (xx[378] + xx[12] * (xx[452] - xx[734] * xx[392])) * xx[558];
  xx[376] = xx[396];
  xx[377] = xx[369];
  xx[378] = xx[352];
  xx[370] = pm_math_dot3(xx + 770, xx + 418) + pm_math_dot3(xx + 778, xx + 376);
  xx[381] = pm_math_dot3(xx + 792, xx + 418) + pm_math_dot3(xx + 795, xx + 376);
  xx[392] = pm_math_dot3(xx + 807, xx + 418) + pm_math_dot3(xx + 810, xx + 376);
  xx[376] = - xx[370];
  xx[377] = - xx[381];
  xx[378] = - xx[392];
  solveSymmetricPosDef(xx + 817, xx + 376, 3, 1, xx + 418, xx + 447);
  xx[376] = xx[362] + xx[418] * xx[773] + xx[419] * xx[697] - xx[420] * xx[756];
  xx[377] = xx[379] - xx[418] * xx[696] + xx[419] * xx[695] + xx[420] * xx[765];
  xx[378] = xx[380] + xx[418] * xx[774] - xx[419] * xx[767] + xx[420] * xx[597];
  pm_math_quatXform(xx + 734, xx + 376, xx + 447);
  xx[376] = xx[396] + xx[418] * xx[769] + xx[419] * xx[766] + xx[420] * xx[698];
  xx[377] = xx[369] + xx[418] * xx[781] + xx[419] * xx[786] + xx[420] * xx[788];
  xx[378] = xx[352] + xx[418] * xx[782] + xx[419] * xx[787] + xx[420] * xx[802];
  pm_math_quatXform(xx + 734, xx + 376, xx + 450);
  pm_math_cross3(xx + 741, xx + 450, xx + 376);
  xx[376] = xx[599] * inputDot[1] * inputDot[1];
  xx[377] = xx[490] * inputDot[1] * inputDot[1];
  xx[405] = xx[376] * xx[584] - xx[560] * xx[377];
  xx[407] = xx[350] + xx[351];
  xx[350] = xx[12] * xx[584] * xx[405] - xx[376] + xx[407] * xx[744] * state[29];
  xx[351] = xx[407] * xx[671] * state[29] + xx[377] + xx[12] * xx[560] * xx[405];
  xx[376] = xx[285] * xx[350] + xx[351] * xx[593];
  xx[285] = xx[602] * xx[350] + xx[351] * xx[898];
  xx[377] = xx[900] * xx[350] + xx[757] * xx[351];
  xx[405] = inputDdot[1] - (xx[560] * xx[560] * inputDdot[1] + xx[584] *
    inputDdot[1] * xx[584]) * xx[12];
  xx[407] = xx[490] * inputDdot[1] - xx[534] * xx[532];
  xx[414] = xx[534] * inputDdot[1] + xx[599] * inputDdot[1];
  xx[424] = xx[414] * xx[560] + xx[584] * xx[407];
  xx[430] = xx[407] - xx[12] * xx[424] * xx[584];
  xx[407] = xx[414] - xx[12] * xx[424] * xx[560];
  xx[414] = xx[600] / xx[806] * xx[405] + xx[747] / xx[806] * xx[430] + xx[768] /
    xx[806] * xx[407];
  xx[424] = (xx[449] + xx[378] + xx[376] + (xx[450] + xx[285]) * xx[671] - (xx
              [451] + xx[377]) * xx[744]) / xx[806] + xx[414];
  xx[378] = xx[405] - xx[424];
  xx[447] = xx[735] * xx[378];
  xx[448] = xx[736] * xx[378];
  xx[449] = xx[12] * (xx[737] * xx[447] - xx[734] * xx[448]);
  xx[450] = (xx[734] * xx[447] + xx[737] * xx[448]) * xx[12];
  xx[451] = xx[378] - (xx[735] * xx[447] + xx[736] * xx[448]) * xx[12];
  xx[447] = xx[430] - xx[424] * xx[671] + xx[350] - xx[742] * xx[378];
  xx[448] = xx[407] + xx[424] * xx[744] + xx[351] + xx[741] * xx[378];
  xx[378] = xx[448] * xx[737];
  xx[452] = xx[737] * xx[447];
  xx[453] = xx[448] * xx[735] - xx[736] * xx[447];
  xx[454] = - xx[378];
  xx[455] = xx[452];
  xx[456] = xx[453];
  pm_math_cross3(xx + 735, xx + 454, xx + 469);
  xx[454] = xx[447] + (xx[734] * xx[378] + xx[469]) * xx[12];
  xx[455] = xx[448] + xx[12] * (xx[470] - xx[734] * xx[452]);
  xx[456] = xx[12] * (xx[471] - xx[734] * xx[453]);
  xx[378] = xx[418] - (pm_math_dot3(xx + 838, xx + 449) + pm_math_dot3(xx + 845,
    xx + 454));
  xx[418] = xx[419] - (pm_math_dot3(xx + 848, xx + 449) + pm_math_dot3(xx + 854,
    xx + 454));
  xx[419] = xx[420] - (pm_math_dot3(xx + 857, xx + 449) + pm_math_dot3(xx + 860,
    xx + 454));
  xx[420] = (xx[174] + xx[109] * xx[301]) * xx[12];
  xx[174] = xx[144] * (xx[109] * xx[164] - xx[319]) * xx[12];
  xx[319] = (xx[310] * xx[104] - xx[301] * xx[112]) * xx[12];
  xx[301] = xx[12] * (xx[109] * xx[310] + xx[164] * xx[112]) * xx[144];
  xx[144] = xx[938] * xx[16] - xx[15] * xx[937];
  xx[164] = xx[939] * xx[16] - xx[15] * xx[936];
  xx[310] = xx[936] * xx[16] + xx[15] * xx[939];
  xx[447] = xx[15] * xx[938] + xx[937] * xx[16];
  xx[448] = - xx[144];
  xx[449] = xx[164];
  xx[450] = xx[310];
  xx[451] = - xx[447];
  pm_math_quatCompose(xx + 841, xx + 448, xx + 452);
  xx[448] = xx[310] * xx[144];
  xx[449] = xx[447] * xx[164];
  xx[450] = xx[12] * (xx[448] - xx[449]);
  xx[451] = xx[144] * xx[164];
  xx[456] = xx[447] * xx[310];
  xx[459] = xx[164] * xx[164];
  xx[469] = xx[310] * xx[310];
  xx[470] = xx[450];
  xx[471] = - ((xx[451] + xx[456]) * xx[12]);
  xx[472] = xx[172] - (xx[459] + xx[469]) * xx[12];
  pm_math_cross3(xx + 470, xx + 803, xx + 473);
  pm_math_quatXform(xx + 452, xx + 473, xx + 470);
  xx[473] = xx[897] * xx[15] + xx[899] * xx[16];
  xx[474] = xx[899] - xx[12] * xx[473] * xx[16] + xx[230];
  xx[475] = xx[474] * xx[113];
  xx[476] = xx[897] - xx[12] * xx[473] * xx[15];
  xx[473] = xx[113] * xx[476];
  xx[477] = xx[476] * xx[104] - xx[474] * xx[109];
  xx[527] = - xx[475];
  xx[528] = - xx[473];
  xx[529] = xx[477];
  pm_math_cross3(xx + 214, xx + 527, xx + 560);
  xx[481] = xx[1285] * xx[1285];
  xx[490] = xx[1196] * xx[1285];
  xx[527] = xx[1191] * xx[1193];
  xx[528] = xx[1196] * xx[1191];
  xx[529] = xx[1193] * xx[1285];
  xx[563] = xx[1196] * xx[1193];
  xx[564] = xx[1191] * xx[1285];
  xx[611] = (xx[481] + xx[1191] * xx[1191]) * xx[12] - xx[172];
  xx[612] = - (xx[12] * (xx[490] + xx[527]));
  xx[613] = - ((xx[528] - xx[529]) * xx[12]);
  xx[614] = - ((xx[527] - xx[490]) * xx[12]);
  xx[615] = (xx[481] + xx[1193] * xx[1193]) * xx[12] - xx[172];
  xx[616] = xx[12] * (xx[563] + xx[564]);
  xx[617] = - (xx[12] * (xx[529] + xx[528]));
  xx[618] = (xx[563] - xx[564]) * xx[12];
  xx[619] = (xx[481] + xx[1196] * xx[1196]) * xx[12] - xx[172];
  xx[527] = - state[43];
  xx[528] = - state[44];
  xx[529] = - state[45];
  pm_math_quatInverseXform(xx + 1243, xx + 527, xx + 563);
  xx[481] = xx[563] * xx[1294] - xx[565] * xx[1293];
  xx[490] = xx[564] * xx[1293] - xx[563] * xx[1222];
  xx[527] = xx[565] * xx[1222] - xx[564] * xx[1294];
  xx[528] = xx[563] * xx[1194] - xx[565] * xx[1202];
  xx[529] = xx[564] * xx[1202] - xx[563] * xx[1192];
  xx[566] = xx[565] * xx[1192] - xx[564] * xx[1194];
  xx[567] = xx[563] * xx[1215] - xx[565] * xx[1214];
  xx[568] = xx[564] * xx[1214] - xx[563] * xx[1213];
  xx[569] = xx[565] * xx[1213] - xx[564] * xx[1215];
  xx[792] = xx[565] * xx[481] - xx[564] * xx[490];
  xx[793] = xx[563] * xx[490] - xx[565] * xx[527];
  xx[794] = xx[564] * xx[527] - xx[563] * xx[481];
  xx[795] = xx[565] * xx[528] - xx[564] * xx[529];
  xx[796] = xx[563] * xx[529] - xx[565] * xx[566];
  xx[797] = xx[564] * xx[566] - xx[563] * xx[528];
  xx[798] = xx[565] * xx[567] - xx[564] * xx[568];
  xx[799] = xx[563] * xx[568] - xx[565] * xx[569];
  xx[800] = xx[564] * xx[569] - xx[563] * xx[567];
  pm_math_matrix3x3Compose(xx + 611, xx + 792, xx + 1849);
  xx[481] = xx[1200] * xx[1201];
  xx[490] = xx[1195] * xx[1182];
  xx[527] = xx[481] - xx[490];
  xx[528] = xx[12] * xx[527];
  xx[529] = xx[12] * xx[1180] * xx[1181] * state[38] * state[38];
  xx[566] = (xx[12] * xx[1180] * xx[1180] - xx[172]) * state[38] * state[38];
  xx[567] = xx[1200] * xx[1200];
  xx[568] = (xx[567] + xx[1182] * xx[1182]) * xx[12] - xx[172];
  xx[569] = xx[528] * xx[529] - xx[566] * xx[568];
  xx[584] = (xx[12] * xx[1181] * xx[1181] - xx[172]) * state[38] * state[38];
  xx[587] = xx[529] * xx[568] - xx[528] * xx[584];
  xx[591] = xx[568] * inputDot[4] * inputDot[4];
  xx[593] = xx[1245] * xx[1181] - xx[1180] * xx[1244];
  xx[599] = xx[593] * xx[593];
  xx[600] = xx[1246] * xx[1181] - xx[1180] * xx[1243];
  xx[601] = xx[600] * xx[600];
  xx[602] = (xx[599] + xx[601]) * xx[12] - xx[172];
  xx[604] = xx[12] * xx[527] * inputDot[4] * inputDot[4];
  xx[527] = xx[1243] * xx[1181] + xx[1180] * xx[1246];
  xx[611] = xx[527] * xx[600];
  xx[612] = xx[1180] * xx[1245] + xx[1244] * xx[1181];
  xx[613] = xx[612] * xx[593];
  xx[614] = (xx[611] + xx[613]) * xx[12];
  xx[615] = xx[1200];
  xx[616] = xx[1182];
  xx[617] = xx[1254];
  xx[618] = xx[1255];
  xx[807] = - xx[593];
  xx[808] = xx[600];
  xx[809] = xx[527];
  xx[810] = - xx[612];
  pm_math_quatCompose(xx + 615, xx + 807, xx + 880);
  xx[615] = xx[880] * xx[880];
  xx[616] = xx[881] * xx[882];
  xx[617] = xx[880] * xx[883];
  xx[618] = xx[881] * xx[883];
  xx[619] = xx[880] * xx[882];
  xx[642] = xx[882] * xx[883];
  xx[682] = xx[880] * xx[881];
  xx[1876] = (xx[615] + xx[881] * xx[881]) * xx[12] - xx[172];
  xx[1877] = xx[12] * (xx[616] - xx[617]);
  xx[1878] = (xx[618] + xx[619]) * xx[12];
  xx[1879] = (xx[616] + xx[617]) * xx[12];
  xx[1880] = (xx[615] + xx[882] * xx[882]) * xx[12] - xx[172];
  xx[1881] = xx[12] * (xx[642] - xx[682]);
  xx[1882] = xx[12] * (xx[618] - xx[619]);
  xx[1883] = (xx[642] + xx[682]) * xx[12];
  xx[1884] = (xx[615] + xx[883] * xx[883]) * xx[12] - xx[172];
  xx[615] = xx[600] * inputDot[4];
  xx[616] = xx[527] * inputDot[4];
  xx[617] = xx[12] * (xx[612] * xx[615] - xx[616] * xx[593]);
  xx[618] = (xx[615] * xx[593] + xx[612] * xx[616]) * xx[12];
  xx[619] = (xx[615] * xx[600] + xx[527] * xx[616]) * xx[12] - inputDot[4];
  pm_math_matrix3x3PostCross(xx + 1876, xx + 617, xx + 2113);
  xx[615] = xx[1244] * state[38];
  xx[616] = xx[1245] * state[38];
  xx[617] = xx[12] * (xx[1246] * xx[615] - xx[1243] * xx[616]);
  xx[618] = (xx[1243] * xx[615] + xx[1246] * xx[616]) * xx[12];
  xx[619] = state[38] - (xx[1244] * xx[615] + xx[1245] * xx[616]) * xx[12];
  xx[738] = xx[617] + xx[563];
  xx[739] = xx[618] + xx[564];
  xx[740] = xx[619] + xx[565];
  pm_math_matrix3x3PostCross(xx + 2113, xx + 738, xx + 1876);
  xx[615] = xx[1182] * xx[1201];
  xx[616] = xx[1195] * xx[1200];
  xx[642] = xx[490] + xx[481];
  xx[481] = xx[642] * xx[12];
  xx[490] = (xx[567] + xx[1195] * xx[1195]) * xx[12] - xx[172];
  xx[682] = xx[1195] * xx[1201];
  xx[690] = xx[1200] * xx[1182];
  xx[723] = xx[616] - xx[615];
  xx[724] = xx[12] * xx[723];
  xx[727] = xx[682] + xx[690];
  xx[738] = xx[727] * xx[12];
  xx[2113] = xx[568];
  xx[2114] = xx[528];
  xx[2115] = - ((xx[615] + xx[616]) * xx[12]);
  xx[2116] = - xx[481];
  xx[2117] = xx[490];
  xx[2118] = xx[12] * (xx[682] - xx[690]);
  xx[2119] = xx[724];
  xx[2120] = xx[738];
  xx[2121] = (xx[567] + xx[1201] * xx[1201]) * xx[12] - xx[172];
  xx[528] = xx[12] * (xx[611] - xx[613]);
  xx[567] = xx[612] * xx[600];
  xx[568] = xx[527] * xx[593];
  xx[611] = (xx[567] + xx[568]) * xx[12];
  xx[613] = xx[527] * xx[527];
  xx[615] = (xx[599] + xx[613]) * xx[12] - xx[172];
  xx[616] = xx[593] * xx[600];
  xx[593] = xx[612] * xx[527];
  xx[527] = xx[12] * (xx[616] - xx[593]);
  xx[2140] = xx[602];
  xx[2141] = xx[528];
  xx[2142] = - xx[611];
  xx[2143] = xx[614];
  xx[2144] = xx[615];
  xx[2145] = xx[527];
  xx[2146] = xx[12] * (xx[568] - xx[567]);
  xx[2147] = - ((xx[593] + xx[616]) * xx[12]);
  xx[2148] = (xx[599] + xx[612] * xx[612]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 2140, xx + 617, xx + 2149);
  pm_math_matrix3x3PostCross(xx + 2149, xx + 563, xx + 2140);
  pm_math_matrix3x3Compose(xx + 2113, xx + 2140, xx + 2149);
  xx[599] = xx[529] * xx[490] + xx[481] * xx[566];
  xx[600] = xx[529] * xx[481] + xx[584] * xx[490];
  xx[481] = xx[490] * inputDot[4] * inputDot[4];
  xx[490] = xx[12] * xx[642] * inputDot[4] * inputDot[4];
  xx[612] = xx[529] * xx[738] - xx[724] * xx[566];
  xx[617] = xx[724] * xx[529] - xx[738] * xx[584];
  xx[618] = xx[12] * xx[723] * inputDot[4] * inputDot[4];
  xx[619] = xx[12] * xx[727] * inputDot[4] * inputDot[4];
  xx[2113] = xx[1849] + xx[1293] * xx[569] + xx[1202] * xx[587] - (xx[591] * xx
    [602] + xx[604] * xx[614]) + (xx[1876] + xx[2149]) * xx[12];
  xx[2114] = xx[1850] + xx[1222] * xx[569] + xx[1192] * xx[587] - (xx[528] * xx
    [591] + xx[604] * xx[615]) + (xx[1877] + xx[2150]) * xx[12];
  xx[2115] = xx[1851] + xx[1294] * xx[569] + xx[1194] * xx[587] + xx[611] * xx
    [591] - xx[527] * xx[604] + (xx[1878] + xx[2151]) * xx[12];
  xx[2116] = xx[1852] + xx[1293] * xx[599] - xx[1202] * xx[600] - (xx[481] * xx
    [614] - xx[490] * xx[602]) + (xx[1879] + xx[2152]) * xx[12];
  xx[2117] = xx[1853] + xx[1222] * xx[599] - xx[1192] * xx[600] - (xx[481] * xx
    [615] - xx[528] * xx[490]) + (xx[1880] + xx[2153]) * xx[12];
  xx[2118] = xx[1854] + xx[1294] * xx[599] - xx[1194] * xx[600] - (xx[490] * xx
    [611] + xx[527] * xx[481]) + (xx[1881] + xx[2154]) * xx[12];
  xx[2119] = xx[1855] + xx[1293] * xx[612] + xx[1202] * xx[617] - (xx[618] * xx
    [602] + xx[619] * xx[614]) + (xx[1882] + xx[2155]) * xx[12];
  xx[2120] = xx[1856] + xx[1222] * xx[612] + xx[1192] * xx[617] - (xx[528] * xx
    [618] + xx[619] * xx[615]) + (xx[1883] + xx[2156]) * xx[12];
  xx[2121] = xx[1857] + xx[1294] * xx[612] + xx[1194] * xx[617] + xx[618] * xx
    [611] - xx[527] * xx[619] + (xx[1884] + xx[2157]) * xx[12];
  pm_math_matrix3x3Xform(xx + 2113, xx + 1247, xx + 738);
  pm_math_matrix3x3Xform(xx + 792, xx + 1235, xx + 749);
  pm_math_quatXform(xx + 1308, xx + 749, xx + 770);
  xx[527] = xx[1251] * xx[529] - xx[1250] * xx[566];
  xx[528] = xx[1250] * xx[529] - xx[1251] * xx[584];
  xx[529] = xx[1201] * xx[528];
  xx[566] = xx[1201] * xx[527];
  xx[569] = xx[1182] * xx[528] + xx[1195] * xx[527];
  xx[749] = xx[529];
  xx[750] = - xx[566];
  xx[751] = xx[569];
  pm_math_cross3(xx + 1256, xx + 749, xx + 778);
  xx[584] = inputDot[4] * inputDot[4];
  xx[587] = 0.02223265526423943;
  xx[599] = xx[1195] * xx[587];
  xx[600] = xx[587] * xx[1201];
  xx[602] = xx[600] * xx[1201];
  xx[611] = xx[1180] * xx[1251] + xx[1250] * xx[1181];
  xx[612] = xx[1250] - xx[12] * xx[611] * xx[1181] + xx[230];
  xx[614] = xx[1251] - xx[12] * xx[611] * xx[1180];
  pm_math_cross3(xx + 563, xx + 1235, xx + 749);
  pm_math_quatXform(xx + 1243, xx + 749, xx + 792);
  xx[611] = xx[793] + xx[1250] * state[38];
  xx[615] = xx[792] - xx[1251] * state[38];
  xx[617] = xx[611] * xx[1180] + xx[1181] * xx[615];
  xx[642] = (xx[611] - xx[12] * xx[617] * xx[1180]) * inputDot[4];
  xx[611] = (xx[615] - xx[12] * xx[617] * xx[1181]) * inputDot[4];
  xx[615] = xx[611] * xx[1201];
  xx[617] = xx[642] * xx[1201];
  xx[682] = xx[611] * xx[1182] - xx[1195] * xx[642];
  xx[794] = - xx[615];
  xx[795] = - xx[617];
  xx[796] = - xx[682];
  pm_math_cross3(xx + 1256, xx + 794, xx + 797);
  xx[690] = xx[793] * state[38];
  xx[723] = xx[792] * state[38];
  xx[724] = xx[690] * xx[1181] - xx[1180] * xx[723];
  xx[727] = xx[12] * xx[1181] * xx[724] - xx[690];
  xx[690] = xx[723] + xx[12] * xx[1180] * xx[724];
  xx[723] = xx[690] * xx[1201];
  xx[724] = xx[1201] * xx[727];
  xx[747] = xx[690] * xx[1182] + xx[1195] * xx[727];
  xx[792] = xx[723];
  xx[793] = - xx[724];
  xx[794] = xx[747];
  pm_math_cross3(xx + 1256, xx + 792, xx + 807);
  xx[757] = xx[12] * xx[386] * state[21] * state[21];
  xx[386] = xx[393] * state[21] * state[21];
  xx[768] = xx[668] * xx[668];
  xx[783] = xx[687] * xx[669];
  xx[784] = xx[668] * xx[691];
  xx[790] = xx[669] * xx[691];
  xx[792] = xx[668] * xx[687];
  xx[793] = xx[687] * xx[691];
  xx[794] = xx[668] * xx[669];
  xx[1849] = (xx[768] + xx[669] * xx[669]) * xx[12] - xx[172];
  xx[1850] = xx[12] * (xx[783] - xx[784]);
  xx[1851] = (xx[790] + xx[792]) * xx[12];
  xx[1852] = (xx[783] + xx[784]) * xx[12];
  xx[1853] = (xx[768] + xx[687] * xx[687]) * xx[12] - xx[172];
  xx[1854] = xx[12] * (xx[793] - xx[794]);
  xx[1855] = xx[12] * (xx[790] - xx[792]);
  xx[1856] = (xx[793] + xx[794]) * xx[12];
  xx[1857] = (xx[768] + xx[691] * xx[691]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 1867, xx + 1849, xx + 1876);
  xx[668] = xx[904] * xx[904];
  xx[669] = xx[905] * xx[906];
  xx[687] = xx[904] * xx[907];
  xx[691] = xx[905] * xx[907];
  xx[768] = xx[904] * xx[906];
  xx[783] = xx[906] * xx[907];
  xx[784] = xx[904] * xx[905];
  xx[2113] = (xx[668] + xx[905] * xx[905]) * xx[12] - xx[172];
  xx[2114] = xx[12] * (xx[669] - xx[687]);
  xx[2115] = (xx[691] + xx[768]) * xx[12];
  xx[2116] = (xx[669] + xx[687]) * xx[12];
  xx[2117] = (xx[668] + xx[906] * xx[906]) * xx[12] - xx[172];
  xx[2118] = xx[12] * (xx[783] - xx[784]);
  xx[2119] = xx[12] * (xx[691] - xx[768]);
  xx[2120] = (xx[783] + xx[784]) * xx[12];
  xx[2121] = (xx[668] + xx[907] * xx[907]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 2131, xx + 2113, xx + 2140);
  xx[668] = xx[937] * xx[938];
  xx[669] = xx[936] * xx[939];
  xx[687] = (xx[668] + xx[669]) * xx[12];
  xx[691] = xx[936] * xx[936];
  xx[768] = (xx[691] + xx[760]) * xx[12] - xx[172];
  xx[760] = xx[144] * xx[144];
  xx[783] = (xx[760] + xx[459]) * xx[12] - xx[172];
  xx[459] = xx[310] * xx[164];
  xx[784] = xx[447] * xx[144];
  xx[790] = (xx[459] + xx[784]) * xx[12];
  xx[792] = xx[452] * xx[452];
  xx[793] = xx[453] * xx[454];
  xx[794] = xx[452] * xx[455];
  xx[795] = xx[453] * xx[455];
  xx[796] = xx[452] * xx[454];
  xx[800] = xx[454] * xx[455];
  xx[801] = xx[452] * xx[453];
  xx[2149] = (xx[792] + xx[453] * xx[453]) * xx[12] - xx[172];
  xx[2150] = xx[12] * (xx[793] - xx[794]);
  xx[2151] = (xx[795] + xx[796]) * xx[12];
  xx[2152] = (xx[793] + xx[794]) * xx[12];
  xx[2153] = (xx[792] + xx[454] * xx[454]) * xx[12] - xx[172];
  xx[2154] = xx[12] * (xx[800] - xx[801]);
  xx[2155] = xx[12] * (xx[795] - xx[796]);
  xx[2156] = (xx[800] + xx[801]) * xx[12];
  xx[2157] = (xx[792] + xx[455] * xx[455]) * xx[12] - xx[172];
  xx[452] = xx[310] * inputDot[0];
  xx[453] = xx[164] * inputDot[0];
  xx[792] = xx[12] * (xx[452] * xx[144] - xx[447] * xx[453]);
  xx[793] = - ((xx[453] * xx[144] + xx[447] * xx[452]) * xx[12]);
  xx[794] = inputDot[0] - (xx[453] * xx[164] + xx[310] * xx[452]) * xx[12];
  pm_math_matrix3x3PostCross(xx + 2149, xx + 792, xx + 2167);
  xx[144] = xx[937] * state[1];
  xx[164] = xx[938] * state[1];
  xx[310] = xx[12] * (xx[939] * xx[144] - xx[936] * xx[164]);
  pm_math_quatInverseXform(xx + 904, xx + 23, xx + 452);
  pm_math_quatInverseXform(xx + 826, xx + 49, xx + 792);
  xx[455] = xx[62] * xx[388];
  xx[795] = xx[12] * xx[455] * xx[388] - xx[62];
  xx[388] = xx[792] + xx[795];
  xx[796] = xx[452] + xx[388];
  xx[800] = (xx[936] * xx[144] + xx[939] * xx[164]) * xx[12];
  xx[801] = xx[12] * xx[387] * xx[455];
  xx[387] = xx[793] - xx[801];
  xx[455] = xx[453] + xx[387];
  xx[810] = state[1] - (xx[937] * xx[144] + xx[938] * xx[164]) * xx[12];
  xx[144] = xx[68] + state[21];
  xx[164] = xx[794] - xx[144];
  xx[811] = xx[454] + xx[164];
  xx[826] = xx[310] + xx[796];
  xx[827] = xx[800] + xx[455];
  xx[828] = xx[810] + xx[811];
  pm_math_matrix3x3PostCross(xx + 2167, xx + 826, xx + 2149);
  xx[812] = xx[12] * (xx[459] - xx[784]);
  xx[459] = (xx[449] + xx[448]) * xx[12];
  xx[448] = (xx[760] + xx[469]) * xx[12] - xx[172];
  xx[449] = xx[12] * (xx[451] - xx[456]);
  xx[2167] = xx[783];
  xx[2168] = xx[812];
  xx[2169] = - xx[459];
  xx[2170] = xx[790];
  xx[2171] = xx[448];
  xx[2172] = xx[449];
  xx[2173] = xx[450];
  xx[2174] = - ((xx[456] + xx[451]) * xx[12]);
  xx[2175] = (xx[760] + xx[447] * xx[447]) * xx[12] - xx[172];
  xx[826] = xx[310];
  xx[827] = xx[800];
  xx[828] = xx[810];
  pm_math_matrix3x3PostCross(xx + 2167, xx + 826, xx + 2176);
  xx[826] = xx[796];
  xx[827] = xx[455];
  xx[828] = xx[811];
  pm_math_matrix3x3PostCross(xx + 2176, xx + 826, xx + 2167);
  xx[310] = xx[12] * (xx[668] - xx[669]);
  xx[447] = (xx[621] + xx[622]) * xx[12];
  xx[450] = (xx[691] + xx[884]) * xx[12] - xx[172];
  xx[451] = xx[12] * (xx[759] - xx[758]);
  xx[2176] = xx[768];
  xx[2177] = xx[310];
  xx[2178] = xx[447];
  xx[2179] = xx[687];
  xx[2180] = xx[450];
  xx[2181] = xx[451];
  xx[2182] = xx[667];
  xx[2183] = (xx[759] + xx[758]) * xx[12];
  xx[2184] = (xx[691] + xx[939] * xx[939]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 2176, xx + 452, xx + 2185);
  xx[452] = xx[388];
  xx[453] = xx[387];
  xx[454] = xx[164];
  pm_math_matrix3x3PostCross(xx + 2185, xx + 452, xx + 2176);
  pm_math_matrix3x3PostCross(xx + 2113, xx + 792, xx + 2185);
  xx[164] = - xx[801];
  xx[452] = xx[795];
  xx[453] = xx[164];
  xx[454] = - xx[144];
  pm_math_matrix3x3PostCross(xx + 2185, xx + 452, xx + 2113);
  xx[144] = - xx[68];
  xx[452] = xx[795];
  xx[453] = xx[164];
  xx[454] = xx[144];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 452, xx + 2185);
  xx[164] = xx[2186] * state[21];
  xx[387] = xx[2189] * state[21];
  xx[388] = xx[2192] * state[21];
  xx[452] = xx[2185] * state[21];
  xx[453] = xx[2188] * state[21];
  xx[454] = xx[2191] * state[21];
  xx[1849] = xx[2113] - (xx[164] * xx[440] + xx[516] * xx[387] + xx[549] * xx
    [388]);
  xx[1850] = xx[2114] + xx[452] * xx[440] + xx[516] * xx[453] + xx[549] * xx[454];
  xx[1851] = xx[2115];
  xx[1852] = xx[2116] - (xx[550] * xx[164] + xx[387] * xx[442] + xx[552] * xx
    [388]);
  xx[1853] = xx[2117] + xx[550] * xx[452] + xx[453] * xx[442] + xx[552] * xx[454];
  xx[1854] = xx[2118];
  xx[1855] = xx[2119] - (xx[553] * xx[164] + xx[517] * xx[387] + xx[388] * xx
    [491]);
  xx[1856] = xx[2120] + xx[553] * xx[452] + xx[517] * xx[453] + xx[454] * xx[491];
  xx[1857] = xx[2121];
  pm_math_matrix3x3Compose(xx + 699, xx + 1849, xx + 2113);
  xx[164] = xx[2176] + xx[2113];
  xx[387] = xx[2179] + xx[2116];
  xx[388] = xx[2177] + xx[2114];
  xx[452] = xx[2180] + xx[2117];
  xx[453] = xx[2178] + xx[2115];
  xx[454] = xx[2181] + xx[2118];
  xx[1849] = xx[2167] + xx[164] * xx[670] - xx[387] * xx[86];
  xx[1850] = xx[2168] + xx[388] * xx[670] - xx[452] * xx[86];
  xx[1851] = xx[2169] + xx[453] * xx[670] - xx[454] * xx[86];
  xx[1852] = xx[2170] + xx[387] * xx[542] - xx[164] * xx[86];
  xx[1853] = xx[2171] + xx[452] * xx[542] - xx[388] * xx[86];
  xx[1854] = xx[2172] + xx[454] * xx[542] - xx[453] * xx[86];
  xx[1855] = xx[2173] - (xx[2182] + xx[2119]);
  xx[1856] = xx[2174] - (xx[2183] + xx[2120]);
  xx[1857] = xx[2175] - (xx[2184] + xx[2121]);
  pm_math_matrix3x3Compose(xx + 2158, xx + 1849, xx + 2113);
  xx[1849] = xx[413] * xx[757] - xx[386] * xx[372] + xx[1813] * xx[393] - xx
    [1814] * xx[389] + xx[1876] + xx[2140] + xx[687] * xx[645] - xx[694] * xx
    [768] - (xx[173] * xx[783] - xx[218] * xx[790]) + (xx[2149] + xx[2113]) *
    xx[12];
  xx[1850] = xx[1813] * xx[389] + xx[1814] * xx[393] - (xx[757] * xx[372] + xx
    [413] * xx[386]) + xx[1877] + xx[2141] + xx[645] * xx[450] - xx[310] * xx
    [694] - (xx[812] * xx[173] - xx[218] * xx[448]) + (xx[2150] + xx[2114]) *
    xx[12];
  xx[1851] = xx[1815] * xx[409] + xx[1878] + xx[2142] + xx[451] * xx[645] - xx
    [447] * xx[694] + xx[173] * xx[459] + xx[218] * xx[449] + (xx[2151] + xx
    [2115]) * xx[12];
  xx[1852] = xx[757] * xx[137] - xx[136] * xx[386] + xx[1816] * xx[393] - xx
    [1817] * xx[389] + xx[1879] + xx[2143] + xx[128] * xx[768] + xx[687] * xx
    [141] - (xx[143] * xx[783] + xx[153] * xx[790]) + (xx[2152] + xx[2116]) *
    xx[12];
  xx[1853] = xx[1816] * xx[389] + xx[1817] * xx[393] - (xx[757] * xx[136] + xx
    [386] * xx[137]) + xx[1880] + xx[2144] + xx[310] * xx[128] + xx[141] * xx
    [450] - (xx[143] * xx[812] + xx[153] * xx[448]) + (xx[2153] + xx[2117]) *
    xx[12];
  xx[1854] = xx[1818] * xx[409] + xx[1881] + xx[2145] + xx[447] * xx[128] + xx
    [451] * xx[141] + xx[143] * xx[459] - xx[449] * xx[153] + (xx[2154] + xx
    [2118]) * xx[12];
  xx[1855] = xx[757] * xx[155] - xx[154] * xx[386] + xx[1819] * xx[393] - xx
    [1820] * xx[389] + xx[1882] + xx[2146] + xx[130] * xx[768] - xx[687] * xx
    [140] - (xx[156] * xx[790] - xx[157] * xx[783]) + (xx[2155] + xx[2119]) *
    xx[12];
  xx[1856] = xx[1819] * xx[389] + xx[1820] * xx[393] - (xx[154] * xx[757] + xx
    [155] * xx[386]) + xx[1883] + xx[2147] + xx[310] * xx[130] - xx[140] * xx
    [450] - (xx[156] * xx[448] - xx[157] * xx[812]) + (xx[2156] + xx[2120]) *
    xx[12];
  xx[1857] = xx[1821] * xx[409] + xx[1884] + xx[2148] + xx[447] * xx[130] - xx
    [451] * xx[140] - (xx[157] * xx[459] + xx[156] * xx[449]) + (xx[2157] + xx
    [2121]) * xx[12];
  pm_math_matrix3x3Xform(xx + 1849, xx + 803, xx + 386);
  xx[164] = xx[383] * xx[421];
  xx[310] = xx[383] * xx[427];
  xx[389] = xx[383] * xx[429];
  xx[447] = xx[111] - (xx[385] * xx[356] + xx[164]);
  xx[448] = xx[69] - (xx[385] * xx[423] + xx[310]);
  xx[449] = xx[105] - (xx[385] * xx[364] + xx[389]);
  pm_math_quatXform(xx + 123, xx + 447, xx + 450);
  pm_math_matrix3x3Xform(xx + 1858, xx + 835, xx + 447);
  xx[453] = xx[447] + xx[180];
  xx[454] = xx[448] + xx[181];
  xx[455] = xx[449] + xx[182];
  pm_math_quatXform(xx + 119, xx + 453, xx + 447);
  pm_math_matrix3x3Xform(xx + 2122, xx + 918, xx + 453);
  xx[667] = xx[453] + xx[239];
  xx[668] = xx[454] + xx[240];
  xx[669] = xx[455] + xx[241];
  pm_math_quatXform(xx + 115, xx + 667, xx + 453);
  xx[393] = xx[897] * xx[417] - xx[899] * xx[693];
  xx[409] = xx[899] * xx[417] - xx[897] * xx[575];
  xx[421] = xx[113] * xx[409];
  xx[427] = xx[113] * xx[393];
  xx[429] = xx[109] * xx[409] + xx[393] * xx[104];
  xx[667] = - xx[421];
  xx[668] = xx[427];
  xx[669] = - xx[429];
  pm_math_cross3(xx + 214, xx + 667, xx + 757);
  xx[456] = xx[383] * xx[62];
  xx[383] = xx[385] * xx[68] + xx[456];
  xx[385] = xx[383] * xx[67];
  xx[459] = xx[71] * xx[383];
  xx[469] = xx[177] + xx[12] * (xx[385] * xx[73] - xx[459] * xx[75]);
  pm_math_cross3(xx + 49, xx + 835, xx + 667);
  xx[621] = xx[183] + (xx[385] * xx[67] + xx[71] * xx[459]) * xx[12] - xx[383];
  xx[383] = xx[197] + (xx[459] * xx[73] + xx[385] * xx[75]) * xx[12];
  xx[792] = xx[469] + xx[667];
  xx[793] = xx[621] + xx[668];
  xx[794] = xx[669] - xx[383];
  pm_math_quatXform(xx + 53, xx + 792, xx + 667);
  xx[385] = xx[200] + xx[667];
  pm_math_cross3(xx + 23, xx + 918, xx + 792);
  xx[459] = xx[201] + xx[668];
  xx[622] = xx[202] + xx[669];
  xx[667] = xx[385] + xx[792];
  xx[668] = xx[459] + xx[793];
  xx[669] = xx[622] + xx[794];
  pm_math_quatXform(xx + 8, xx + 667, xx + 792);
  xx[667] = xx[206] + xx[792];
  xx[668] = xx[667] - xx[897] * state[1];
  xx[669] = xx[207] + xx[793];
  xx[687] = xx[669] + xx[899] * state[1];
  xx[691] = xx[687] * xx[15] + xx[16] * xx[668];
  xx[760] = (xx[668] - xx[12] * xx[691] * xx[16]) * inputDot[0];
  xx[668] = xx[113] * xx[760];
  xx[768] = (xx[687] - xx[12] * xx[691] * xx[15]) * inputDot[0];
  xx[687] = xx[113] * xx[768];
  xx[691] = xx[768] * xx[104] - xx[109] * xx[760];
  xx[792] = - xx[668];
  xx[793] = - xx[687];
  xx[794] = xx[691];
  pm_math_cross3(xx + 214, xx + 792, xx + 803);
  xx[783] = xx[669] * state[1];
  xx[669] = xx[667] * state[1];
  xx[667] = xx[783] * xx[16] - xx[15] * xx[669];
  xx[792] = xx[385];
  xx[793] = xx[459];
  xx[794] = xx[622];
  pm_math_cross3(xx + 23, xx + 792, xx + 810);
  pm_math_quatXform(xx + 8, xx + 810, xx + 792);
  xx[810] = xx[469];
  xx[811] = xx[621];
  xx[812] = - xx[383];
  pm_math_cross3(xx + 49, xx + 810, xx + 826);
  pm_math_quatXform(xx + 53, xx + 826, xx + 810);
  pm_math_quatXform(xx + 8, xx + 810, xx + 826);
  xx[383] = xx[792] + xx[826];
  xx[385] = xx[793] + xx[827];
  xx[459] = xx[385] * xx[15] + xx[383] * xx[16];
  xx[469] = xx[794] + xx[828];
  xx[792] = xx[12] * xx[16] * xx[667] - xx[783] + xx[383] - xx[12] * xx[459] *
    xx[16];
  xx[793] = xx[669] + xx[12] * xx[15] * xx[667] + xx[385] - xx[12] * xx[459] *
    xx[15];
  xx[794] = xx[469] - (xx[15] * xx[469] * xx[15] + xx[469] * xx[16] * xx[16]) *
    xx[12];
  pm_math_quatXform(xx + 841, xx + 792, xx + 810);
  xx[383] = xx[82] + xx[408] * xx[98];
  xx[792] = xx[12] * (xx[567] - xx[568]);
  xx[793] = (xx[616] + xx[593]) * xx[12];
  xx[794] = (xx[601] + xx[613]) * xx[12] - xx[172];
  pm_math_cross3(xx + 792, xx + 1247, xx + 826);
  pm_math_quatXform(xx + 880, xx + 826, xx + 792);
  xx[82] = xx[612] * xx[1201];
  xx[385] = xx[1201] * xx[614];
  xx[459] = xx[612] * xx[1182] - xx[1195] * xx[614];
  xx[826] = - xx[82];
  xx[827] = - xx[385];
  xx[828] = - xx[459];
  pm_math_cross3(xx + 1256, xx + 826, xx + 835);
  xx[469] = xx[587] * xx[1182];
  xx[567] = xx[1200] * xx[600];
  xx[568] = (xx[1180] * xx[1180] * inputDot[4] + xx[1181] * inputDot[4] * xx
             [1181]) * xx[12] - inputDot[4] + state[38];
  xx[593] = xx[568] * xx[1244];
  xx[601] = xx[568] * xx[1245];
  xx[613] = xx[12] * (xx[1246] * xx[593] - xx[1243] * xx[601]);
  xx[616] = xx[613] + xx[563];
  xx[621] = (xx[1243] * xx[593] + xx[1246] * xx[601]) * xx[12];
  xx[622] = xx[621] + xx[564];
  xx[667] = xx[568] - (xx[1244] * xx[593] + xx[1245] * xx[601]) * xx[12];
  xx[593] = xx[667] + xx[565];
  xx[826] = xx[616];
  xx[827] = xx[622];
  xx[828] = xx[593];
  xx[874] = xx[616] * xx[1280];
  xx[875] = xx[622] * xx[1240];
  xx[876] = xx[593] * xx[1283];
  pm_math_cross3(xx + 826, xx + 874, xx + 880);
  xx[826] = xx[613];
  xx[827] = xx[621];
  xx[828] = xx[667];
  pm_math_cross3(xx + 826, xx + 563, xx + 874);
  xx[563] = xx[880] + xx[1280] * xx[874];
  xx[564] = xx[881] + xx[1240] * xx[875];
  xx[565] = xx[882] + xx[1283] * xx[876];
  xx[826] = xx[613] + xx[616];
  xx[827] = xx[621] + xx[622];
  xx[828] = xx[667] + xx[593];
  pm_math_cross3(xx + 826, xx + 749, xx + 874);
  xx[593] = xx[568] * xx[568] * xx[1251];
  xx[601] = xx[1246] * xx[593];
  xx[613] = xx[568] * xx[568] * xx[1250];
  xx[568] = xx[1246] * xx[613];
  xx[616] = xx[1245] * xx[613] - xx[1244] * xx[593];
  xx[749] = xx[601];
  xx[750] = - xx[568];
  xx[751] = xx[616];
  pm_math_cross3(xx + 1244, xx + 749, xx + 826);
  xx[621] = (xx[874] + xx[12] * (xx[826] - xx[1243] * xx[601]) - xx[613]) * xx
    [558];
  xx[601] = (xx[875] + (xx[1243] * xx[568] + xx[827]) * xx[12] - xx[593]) * xx
    [558];
  xx[568] = (xx[876] + xx[12] * (xx[828] - xx[1243] * xx[616])) * xx[558];
  xx[749] = xx[621];
  xx[750] = xx[601];
  xx[751] = xx[568];
  xx[593] = pm_math_dot3(xx + 1277, xx + 563) + pm_math_dot3(xx + 1288, xx + 749);
  xx[613] = pm_math_dot3(xx + 1302, xx + 563) + pm_math_dot3(xx + 1305, xx + 749);
  xx[616] = pm_math_dot3(xx + 1317, xx + 563) + pm_math_dot3(xx + 1320, xx + 749);
  xx[749] = - xx[593];
  xx[750] = - xx[613];
  xx[751] = - xx[616];
  solveSymmetricPosDef(xx + 1327, xx + 749, 3, 1, xx + 826, xx + 874);
  xx[749] = xx[563] + xx[826] * xx[1281] + xx[827] * xx[1241] - xx[828] * xx
    [1263];
  xx[750] = xx[564] - xx[826] * xx[1282] + xx[827] * xx[1239] + xx[828] * xx
    [1272];
  xx[751] = xx[565] + xx[826] * xx[1284] - xx[827] * xx[1274] + xx[828] * xx
    [1238];
  pm_math_quatXform(xx + 1243, xx + 749, xx + 874);
  xx[749] = xx[621] + xx[826] * xx[1276] + xx[827] * xx[1273] + xx[828] * xx
    [1242];
  xx[750] = xx[601] + xx[826] * xx[1291] + xx[827] * xx[1296] + xx[828] * xx
    [1298];
  xx[751] = xx[568] + xx[826] * xx[1292] + xx[827] * xx[1297] + xx[828] * xx
    [1312];
  pm_math_quatXform(xx + 1243, xx + 749, xx + 880);
  pm_math_cross3(xx + 1250, xx + 880, xx + 749);
  xx[622] = xx[1375] - xx[1353];
  xx[667] = xx[230] * xx[584];
  xx[669] = xx[667] * xx[1181];
  xx[749] = xx[12] * xx[669] * xx[1181] - xx[667];
  xx[667] = xx[12] * xx[1180] * xx[669];
  xx[669] = xx[1376] - xx[1356];
  xx[750] = xx[622] * xx[749] + xx[667] * xx[669];
  xx[783] = (xx[1180] * xx[1180] * inputDdot[4] + xx[1181] * inputDdot[4] * xx
             [1181]) * xx[12] - inputDdot[4];
  xx[784] = xx[587] * inputDdot[4] + xx[230] * inputDdot[4];
  xx[790] = xx[587] * xx[584];
  xx[795] = xx[1180] * xx[784] + xx[790] * xx[1181];
  xx[796] = xx[12] * xx[795] * xx[1181] - xx[790];
  xx[790] = xx[12] * xx[795] * xx[1180] - xx[784];
  xx[784] = xx[681] / xx[1217] * xx[783] + xx[622] / xx[1217] * xx[796] + xx[669]
    / xx[1217] * xx[790];
  xx[622] = (xx[876] + xx[751] + xx[750]) / xx[1217] + xx[784];
  xx[669] = xx[783] - xx[622];
  xx[681] = xx[1244] * xx[669];
  xx[751] = xx[1245] * xx[669];
  xx[874] = xx[12] * (xx[1246] * xx[681] - xx[1243] * xx[751]);
  xx[875] = (xx[1243] * xx[681] + xx[1246] * xx[751]) * xx[12];
  xx[876] = xx[669] - (xx[1244] * xx[681] + xx[1245] * xx[751]) * xx[12];
  xx[681] = xx[796] + xx[749];
  xx[749] = xx[681] - xx[1251] * xx[669];
  xx[751] = xx[790] + xx[667];
  xx[667] = xx[751] + xx[1250] * xx[669];
  xx[669] = xx[667] * xx[1246];
  xx[790] = xx[1246] * xx[749];
  xx[795] = xx[667] * xx[1244] - xx[1245] * xx[749];
  xx[880] = - xx[669];
  xx[881] = xx[790];
  xx[882] = xx[795];
  pm_math_cross3(xx + 1244, xx + 880, xx + 896);
  xx[880] = xx[749] + (xx[1243] * xx[669] + xx[896]) * xx[12];
  xx[881] = xx[667] + xx[12] * (xx[897] - xx[1243] * xx[790]);
  xx[882] = xx[12] * (xx[898] - xx[1243] * xx[795]);
  xx[667] = xx[826] - (pm_math_dot3(xx + 1348, xx + 874) + pm_math_dot3(xx +
    1360, xx + 880));
  xx[669] = xx[827] - (pm_math_dot3(xx + 1366, xx + 874) + pm_math_dot3(xx +
    1369, xx + 880));
  xx[749] = xx[828] - (pm_math_dot3(xx + 1372, xx + 874) + pm_math_dot3(xx +
    1377, xx + 880));
  xx[790] = xx[1033] * xx[16] - xx[15] * xx[1032];
  xx[795] = xx[1034] * xx[16] - xx[15] * xx[1031];
  xx[796] = xx[1031] * xx[16] + xx[15] * xx[1034];
  xx[800] = xx[15] * xx[1033] + xx[1032] * xx[16];
  xx[826] = - xx[790];
  xx[827] = xx[795];
  xx[828] = xx[796];
  xx[829] = - xx[800];
  pm_math_quatCompose(xx + 841, xx + 826, xx + 880);
  xx[801] = xx[796] * xx[790];
  xx[816] = xx[800] * xx[795];
  xx[826] = xx[12] * (xx[801] - xx[816]);
  xx[827] = xx[790] * xx[795];
  xx[828] = xx[800] * xx[796];
  xx[829] = xx[795] * xx[795];
  xx[863] = xx[796] * xx[796];
  xx[874] = xx[826];
  xx[875] = - ((xx[827] + xx[828]) * xx[12]);
  xx[876] = xx[172] - (xx[829] + xx[863]) * xx[12];
  pm_math_cross3(xx + 874, xx + 978, xx + 896);
  pm_math_quatXform(xx + 880, xx + 896, xx + 874);
  xx[865] = xx[958] * xx[15] + xx[963] * xx[16];
  xx[866] = xx[963] - xx[12] * xx[865] * xx[16] + xx[230];
  xx[868] = xx[866] * xx[113];
  xx[884] = xx[958] - xx[12] * xx[865] * xx[15];
  xx[865] = xx[113] * xx[884];
  xx[890] = xx[884] * xx[104] - xx[866] * xx[109];
  xx[896] = - xx[868];
  xx[897] = - xx[865];
  xx[898] = xx[890];
  pm_math_cross3(xx + 214, xx + 896, xx + 904);
  xx[894] = xx[1457] * xx[1457];
  xx[896] = xx[1395] * xx[1457];
  xx[897] = xx[1390] * xx[1392];
  xx[898] = xx[1390] * xx[1395];
  xx[899] = xx[1392] * xx[1457];
  xx[900] = xx[1395] * xx[1392];
  xx[907] = xx[1390] * xx[1457];
  xx[1299] = (xx[894] + xx[1390] * xx[1390]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[896] - xx[897]);
  xx[1301] = - ((xx[898] + xx[899]) * xx[12]);
  xx[1302] = - ((xx[897] + xx[896]) * xx[12]);
  xx[1303] = (xx[894] + xx[1392] * xx[1392]) * xx[12] - xx[172];
  xx[1304] = xx[12] * (xx[900] - xx[907]);
  xx[1305] = xx[12] * (xx[899] - xx[898]);
  xx[1306] = (xx[900] + xx[907]) * xx[12];
  xx[1307] = (xx[894] + xx[1395] * xx[1395]) * xx[12] - xx[172];
  xx[896] = - state[52];
  xx[897] = - state[53];
  xx[898] = - state[54];
  pm_math_quatInverseXform(xx + 1410, xx + 896, xx + 917);
  xx[894] = xx[917] * xx[1466] - xx[919] * xx[1465];
  xx[896] = xx[918] * xx[1465] - xx[917] * xx[1416];
  xx[897] = xx[919] * xx[1416] - xx[918] * xx[1466];
  xx[898] = xx[917] * xx[1393] - xx[919] * xx[1398];
  xx[899] = xx[918] * xx[1398] - xx[917] * xx[1391];
  xx[900] = xx[919] * xx[1391] - xx[918] * xx[1393];
  xx[907] = xx[917] * xx[1401] - xx[919] * xx[1400];
  xx[911] = xx[918] * xx[1400] - xx[917] * xx[1399];
  xx[913] = xx[919] * xx[1399] - xx[918] * xx[1401];
  xx[1313] = xx[919] * xx[894] - xx[918] * xx[896];
  xx[1314] = xx[917] * xx[896] - xx[919] * xx[897];
  xx[1315] = xx[918] * xx[897] - xx[917] * xx[894];
  xx[1316] = xx[919] * xx[898] - xx[918] * xx[899];
  xx[1317] = xx[917] * xx[899] - xx[919] * xx[900];
  xx[1318] = xx[918] * xx[900] - xx[917] * xx[898];
  xx[1319] = xx[919] * xx[907] - xx[918] * xx[911];
  xx[1320] = xx[917] * xx[911] - xx[919] * xx[913];
  xx[1321] = xx[918] * xx[913] - xx[917] * xx[907];
  pm_math_matrix3x3Compose(xx + 1299, xx + 1313, xx + 1351);
  xx[894] = xx[1394] * xx[1389];
  xx[896] = xx[1396] * xx[1397];
  xx[897] = xx[894] - xx[896];
  xx[898] = xx[12] * xx[897];
  xx[899] = xx[12] * xx[1387] * xx[1388] * state[47] * state[47];
  xx[900] = (xx[12] * xx[1387] * xx[1387] - xx[172]) * state[47] * state[47];
  xx[907] = xx[1396] * xx[1396];
  xx[911] = (xx[907] + xx[1389] * xx[1389]) * xx[12] - xx[172];
  xx[913] = xx[898] * xx[899] - xx[900] * xx[911];
  xx[920] = (xx[12] * xx[1388] * xx[1388] - xx[172]) * state[47] * state[47];
  xx[922] = xx[899] * xx[911] - xx[898] * xx[920];
  xx[933] = xx[911] * inputDot[3] * inputDot[3];
  xx[936] = xx[1412] * xx[1388] - xx[1387] * xx[1411];
  xx[937] = xx[936] * xx[936];
  xx[938] = xx[1413] * xx[1388] - xx[1387] * xx[1410];
  xx[939] = xx[938] * xx[938];
  xx[943] = (xx[937] + xx[939]) * xx[12] - xx[172];
  xx[944] = xx[12] * xx[897] * inputDot[3] * inputDot[3];
  xx[897] = xx[1410] * xx[1388] + xx[1387] * xx[1413];
  xx[945] = xx[897] * xx[938];
  xx[946] = xx[1387] * xx[1412] + xx[1411] * xx[1388];
  xx[950] = xx[946] * xx[936];
  xx[951] = (xx[945] + xx[950]) * xx[12];
  xx[1116] = xx[1396];
  xx[1117] = xx[1389];
  xx[1118] = xx[1394];
  xx[1119] = xx[1397];
  xx[1120] = - xx[936];
  xx[1121] = xx[938];
  xx[1122] = xx[897];
  xx[1123] = - xx[946];
  pm_math_quatCompose(xx + 1116, xx + 1120, xx + 1140);
  xx[952] = xx[1140] * xx[1140];
  xx[953] = xx[1141] * xx[1142];
  xx[956] = xx[1140] * xx[1143];
  xx[959] = xx[1141] * xx[1143];
  xx[961] = xx[1140] * xx[1142];
  xx[962] = xx[1142] * xx[1143];
  xx[974] = xx[1140] * xx[1141];
  xx[1299] = (xx[952] + xx[1141] * xx[1141]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[953] - xx[956]);
  xx[1301] = (xx[959] + xx[961]) * xx[12];
  xx[1302] = (xx[953] + xx[956]) * xx[12];
  xx[1303] = (xx[952] + xx[1142] * xx[1142]) * xx[12] - xx[172];
  xx[1304] = xx[12] * (xx[962] - xx[974]);
  xx[1305] = xx[12] * (xx[959] - xx[961]);
  xx[1306] = (xx[962] + xx[974]) * xx[12];
  xx[1307] = (xx[952] + xx[1143] * xx[1143]) * xx[12] - xx[172];
  xx[952] = xx[938] * inputDot[3];
  xx[953] = xx[897] * inputDot[3];
  xx[984] = xx[12] * (xx[946] * xx[952] - xx[953] * xx[936]);
  xx[985] = (xx[952] * xx[936] + xx[946] * xx[953]) * xx[12];
  xx[986] = (xx[952] * xx[938] + xx[897] * xx[953]) * xx[12] - inputDot[3];
  pm_math_matrix3x3PostCross(xx + 1299, xx + 984, xx + 1849);
  xx[952] = xx[1411] * state[47];
  xx[953] = xx[1412] * state[47];
  xx[956] = xx[12] * (xx[1413] * xx[952] - xx[1410] * xx[953]);
  xx[959] = (xx[1410] * xx[952] + xx[1413] * xx[953]) * xx[12];
  xx[961] = state[47] - (xx[1411] * xx[952] + xx[1412] * xx[953]) * xx[12];
  xx[984] = xx[956] + xx[917];
  xx[985] = xx[959] + xx[918];
  xx[986] = xx[961] + xx[919];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 984, xx + 1299);
  xx[952] = xx[1389] * xx[1397];
  xx[953] = xx[1396] * xx[1394];
  xx[962] = xx[894] + xx[896];
  xx[894] = xx[962] * xx[12];
  xx[896] = (xx[907] + xx[1394] * xx[1394]) * xx[12] - xx[172];
  xx[974] = xx[1394] * xx[1397];
  xx[984] = xx[1396] * xx[1389];
  xx[985] = xx[952] - xx[953];
  xx[986] = xx[12] * xx[985];
  xx[989] = xx[974] + xx[984];
  xx[996] = xx[989] * xx[12];
  xx[1849] = xx[911];
  xx[1850] = xx[898];
  xx[1851] = (xx[952] + xx[953]) * xx[12];
  xx[1852] = xx[894];
  xx[1853] = xx[896];
  xx[1854] = xx[12] * (xx[974] - xx[984]);
  xx[1855] = xx[986];
  xx[1856] = xx[996];
  xx[1857] = (xx[907] + xx[1397] * xx[1397]) * xx[12] - xx[172];
  xx[898] = xx[12] * (xx[945] - xx[950]);
  xx[907] = xx[946] * xx[938];
  xx[911] = xx[897] * xx[936];
  xx[945] = (xx[907] + xx[911]) * xx[12];
  xx[950] = xx[897] * xx[897];
  xx[952] = (xx[937] + xx[950]) * xx[12] - xx[172];
  xx[953] = xx[936] * xx[938];
  xx[936] = xx[946] * xx[897];
  xx[897] = xx[12] * (xx[953] - xx[936]);
  xx[1876] = xx[943];
  xx[1877] = xx[898];
  xx[1878] = - xx[945];
  xx[1879] = xx[951];
  xx[1880] = xx[952];
  xx[1881] = xx[897];
  xx[1882] = xx[12] * (xx[911] - xx[907]);
  xx[1883] = - ((xx[936] + xx[953]) * xx[12]);
  xx[1884] = (xx[937] + xx[946] * xx[946]) * xx[12] - xx[172];
  xx[1003] = xx[956];
  xx[1004] = xx[959];
  xx[1005] = xx[961];
  pm_math_matrix3x3PostCross(xx + 1876, xx + 1003, xx + 2113);
  pm_math_matrix3x3PostCross(xx + 2113, xx + 917, xx + 1876);
  pm_math_matrix3x3Compose(xx + 1849, xx + 1876, xx + 2113);
  xx[937] = xx[899] * xx[896] - xx[900] * xx[894];
  xx[938] = xx[899] * xx[894] - xx[920] * xx[896];
  xx[894] = xx[12] * xx[962] * inputDot[3] * inputDot[3];
  xx[946] = xx[896] * inputDot[3] * inputDot[3];
  xx[896] = xx[899] * xx[996] - xx[986] * xx[900];
  xx[956] = xx[899] * xx[986] - xx[920] * xx[996];
  xx[959] = xx[12] * xx[985] * inputDot[3] * inputDot[3];
  xx[961] = xx[12] * xx[989] * inputDot[3] * inputDot[3];
  xx[1849] = xx[1351] + xx[1465] * xx[913] + xx[1398] * xx[922] - (xx[933] * xx
    [943] + xx[944] * xx[951]) + (xx[1299] + xx[2113]) * xx[12];
  xx[1850] = xx[1352] + xx[1416] * xx[913] + xx[1391] * xx[922] - (xx[898] * xx
    [933] + xx[944] * xx[952]) + (xx[1300] + xx[2114]) * xx[12];
  xx[1851] = xx[1353] + xx[1466] * xx[913] + xx[1393] * xx[922] + xx[933] * xx
    [945] - xx[944] * xx[897] + (xx[1301] + xx[2115]) * xx[12];
  xx[1852] = xx[1354] + xx[1465] * xx[937] + xx[1398] * xx[938] - (xx[894] * xx
    [943] + xx[946] * xx[951]) + (xx[1302] + xx[2116]) * xx[12];
  xx[1853] = xx[1355] + xx[1416] * xx[937] + xx[1391] * xx[938] - (xx[894] * xx
    [898] + xx[946] * xx[952]) + (xx[1303] + xx[2117]) * xx[12];
  xx[1854] = xx[1356] + xx[1466] * xx[937] + xx[1393] * xx[938] + xx[894] * xx
    [945] - xx[897] * xx[946] + (xx[1304] + xx[2118]) * xx[12];
  xx[1855] = xx[1357] + xx[1465] * xx[896] + xx[1398] * xx[956] - (xx[959] * xx
    [943] + xx[961] * xx[951]) + (xx[1305] + xx[2119]) * xx[12];
  xx[1856] = xx[1358] + xx[1416] * xx[896] + xx[1391] * xx[956] - (xx[959] * xx
    [898] + xx[961] * xx[952]) + (xx[1306] + xx[2120]) * xx[12];
  xx[1857] = xx[1359] + xx[1466] * xx[896] + xx[1393] * xx[956] + xx[959] * xx
    [945] - xx[961] * xx[897] + (xx[1307] + xx[2121]) * xx[12];
  pm_math_matrix3x3Xform(xx + 1849, xx + 1422, xx + 896);
  pm_math_matrix3x3Xform(xx + 1313, xx + 1402, xx + 984);
  pm_math_quatXform(xx + 1480, xx + 984, xx + 1003);
  xx[913] = xx[1426] * xx[899] - xx[1425] * xx[900];
  xx[900] = xx[1425] * xx[899] - xx[1426] * xx[920];
  xx[899] = xx[1397] * xx[900];
  xx[920] = xx[1397] * xx[913];
  xx[922] = xx[1389] * xx[900] - xx[1394] * xx[913];
  xx[984] = - xx[899];
  xx[985] = xx[920];
  xx[986] = xx[922];
  pm_math_cross3(xx + 1429, xx + 984, xx + 1061);
  xx[937] = inputDot[3] * inputDot[3];
  xx[938] = xx[1394] * xx[587];
  xx[943] = xx[587] * xx[1397];
  xx[945] = xx[943] * xx[1397];
  xx[951] = xx[1387] * xx[1426] + xx[1425] * xx[1388];
  xx[952] = xx[1425] - xx[12] * xx[951] * xx[1388] + xx[230];
  xx[956] = xx[1426] - xx[12] * xx[951] * xx[1387];
  pm_math_cross3(xx + 917, xx + 1402, xx + 984);
  pm_math_quatXform(xx + 1410, xx + 984, xx + 1078);
  xx[951] = xx[1079] + xx[1425] * state[47];
  xx[962] = xx[1078] - xx[1426] * state[47];
  xx[974] = xx[951] * xx[1387] + xx[1388] * xx[962];
  xx[989] = (xx[951] - xx[12] * xx[974] * xx[1387]) * inputDot[3];
  xx[951] = (xx[962] - xx[12] * xx[974] * xx[1388]) * inputDot[3];
  xx[962] = xx[951] * xx[1397];
  xx[974] = xx[989] * xx[1397];
  xx[996] = xx[951] * xx[1389] + xx[1394] * xx[989];
  xx[1116] = xx[962];
  xx[1117] = xx[974];
  xx[1118] = - xx[996];
  pm_math_cross3(xx + 1429, xx + 1116, xx + 1119);
  xx[1023] = xx[1079] * state[47];
  xx[1025] = xx[1078] * state[47];
  xx[1027] = xx[1023] * xx[1388] - xx[1387] * xx[1025];
  xx[1037] = xx[12] * xx[1388] * xx[1027] - xx[1023];
  xx[1023] = xx[1025] + xx[12] * xx[1387] * xx[1027];
  xx[1025] = xx[1023] * xx[1397];
  xx[1027] = xx[1397] * xx[1037];
  xx[1038] = xx[1023] * xx[1389] - xx[1394] * xx[1037];
  xx[1078] = - xx[1025];
  xx[1079] = xx[1027];
  xx[1080] = xx[1038];
  pm_math_cross3(xx + 1429, xx + 1078, xx + 1116);
  xx[1040] = xx[12] * xx[281] * state[23] * state[23];
  xx[281] = xx[343] * state[23] * state[23];
  xx[1042] = xx[925] * xx[925];
  xx[1043] = xx[931] * xx[926];
  xx[1048] = xx[925] * xx[932];
  xx[1053] = xx[926] * xx[932];
  xx[1055] = xx[931] * xx[925];
  xx[1056] = xx[931] * xx[932];
  xx[1074] = xx[925] * xx[926];
  xx[1299] = (xx[1042] + xx[926] * xx[926]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[1043] - xx[1048]);
  xx[1301] = (xx[1053] + xx[1055]) * xx[12];
  xx[1302] = (xx[1043] + xx[1048]) * xx[12];
  xx[1303] = (xx[1042] + xx[931] * xx[931]) * xx[12] - xx[172];
  xx[1304] = xx[12] * (xx[1056] - xx[1074]);
  xx[1305] = xx[12] * (xx[1053] - xx[1055]);
  xx[1306] = (xx[1056] + xx[1074]) * xx[12];
  xx[1307] = (xx[1042] + xx[932] * xx[932]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 1867, xx + 1299, xx + 1313);
  xx[925] = xx[999] * xx[999];
  xx[926] = xx[1000] * xx[1001];
  xx[931] = xx[999] * xx[1002];
  xx[932] = xx[1000] * xx[1002];
  xx[1042] = xx[999] * xx[1001];
  xx[1043] = xx[1001] * xx[1002];
  xx[1048] = xx[999] * xx[1000];
  xx[1351] = (xx[925] + xx[1000] * xx[1000]) * xx[12] - xx[172];
  xx[1352] = xx[12] * (xx[926] - xx[931]);
  xx[1353] = (xx[932] + xx[1042]) * xx[12];
  xx[1354] = (xx[926] + xx[931]) * xx[12];
  xx[1355] = (xx[925] + xx[1001] * xx[1001]) * xx[12] - xx[172];
  xx[1356] = xx[12] * (xx[1043] - xx[1048]);
  xx[1357] = xx[12] * (xx[932] - xx[1042]);
  xx[1358] = (xx[1043] + xx[1048]) * xx[12];
  xx[1359] = (xx[925] + xx[1002] * xx[1002]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 2131, xx + 1351, xx + 1849);
  xx[925] = xx[1032] * xx[1033];
  xx[926] = xx[1031] * xx[1034];
  xx[931] = (xx[925] + xx[926]) * xx[12];
  xx[932] = xx[1031] * xx[1031];
  xx[1042] = (xx[932] + xx[949]) * xx[12] - xx[172];
  xx[949] = xx[790] * xx[790];
  xx[1043] = (xx[949] + xx[829]) * xx[12] - xx[172];
  xx[829] = xx[796] * xx[795];
  xx[1048] = xx[800] * xx[790];
  xx[1053] = (xx[829] + xx[1048]) * xx[12];
  xx[1055] = xx[880] * xx[880];
  xx[1056] = xx[881] * xx[882];
  xx[1074] = xx[880] * xx[883];
  xx[1075] = xx[881] * xx[883];
  xx[1078] = xx[880] * xx[882];
  xx[1079] = xx[882] * xx[883];
  xx[1080] = xx[880] * xx[881];
  xx[1876] = (xx[1055] + xx[881] * xx[881]) * xx[12] - xx[172];
  xx[1877] = xx[12] * (xx[1056] - xx[1074]);
  xx[1878] = (xx[1075] + xx[1078]) * xx[12];
  xx[1879] = (xx[1056] + xx[1074]) * xx[12];
  xx[1880] = (xx[1055] + xx[882] * xx[882]) * xx[12] - xx[172];
  xx[1881] = xx[12] * (xx[1079] - xx[1080]);
  xx[1882] = xx[12] * (xx[1075] - xx[1078]);
  xx[1883] = (xx[1079] + xx[1080]) * xx[12];
  xx[1884] = (xx[1055] + xx[883] * xx[883]) * xx[12] - xx[172];
  xx[880] = xx[796] * inputDot[0];
  xx[881] = xx[795] * inputDot[0];
  xx[1078] = xx[12] * (xx[880] * xx[790] - xx[800] * xx[881]);
  xx[1079] = - ((xx[881] * xx[790] + xx[800] * xx[880]) * xx[12]);
  xx[1080] = inputDot[0] - (xx[881] * xx[795] + xx[796] * xx[880]) * xx[12];
  pm_math_matrix3x3PostCross(xx + 1876, xx + 1078, xx + 2113);
  xx[790] = xx[1032] * state[1];
  xx[795] = xx[1033] * state[1];
  xx[796] = xx[12] * (xx[1034] * xx[790] - xx[1031] * xx[795]);
  pm_math_quatInverseXform(xx + 999, xx + 23, xx + 880);
  pm_math_quatInverseXform(xx + 967, xx + 49, xx + 999);
  xx[883] = xx[62] * xx[324];
  xx[967] = xx[12] * xx[883] * xx[324] - xx[62];
  xx[324] = xx[999] + xx[967];
  xx[968] = xx[880] + xx[324];
  xx[969] = (xx[1031] * xx[790] + xx[1034] * xx[795]) * xx[12];
  xx[970] = xx[12] * xx[282] * xx[883];
  xx[282] = xx[1000] - xx[970];
  xx[883] = xx[881] + xx[282];
  xx[1002] = state[1] - (xx[1032] * xx[790] + xx[1033] * xx[795]) * xx[12];
  xx[790] = xx[68] + state[23];
  xx[795] = xx[1001] - xx[790];
  xx[1031] = xx[882] + xx[795];
  xx[1078] = xx[796] + xx[968];
  xx[1079] = xx[969] + xx[883];
  xx[1080] = xx[1002] + xx[1031];
  pm_math_matrix3x3PostCross(xx + 2113, xx + 1078, xx + 1876);
  xx[1032] = xx[12] * (xx[829] - xx[1048]);
  xx[829] = (xx[816] + xx[801]) * xx[12];
  xx[801] = (xx[949] + xx[863]) * xx[12] - xx[172];
  xx[816] = xx[12] * (xx[827] - xx[828]);
  xx[2113] = xx[1043];
  xx[2114] = xx[1032];
  xx[2115] = - xx[829];
  xx[2116] = xx[1053];
  xx[2117] = xx[801];
  xx[2118] = xx[816];
  xx[2119] = xx[826];
  xx[2120] = - ((xx[828] + xx[827]) * xx[12]);
  xx[2121] = (xx[949] + xx[800] * xx[800]) * xx[12] - xx[172];
  xx[826] = xx[796];
  xx[827] = xx[969];
  xx[828] = xx[1002];
  pm_math_matrix3x3PostCross(xx + 2113, xx + 826, xx + 2140);
  xx[826] = xx[968];
  xx[827] = xx[883];
  xx[828] = xx[1031];
  pm_math_matrix3x3PostCross(xx + 2140, xx + 826, xx + 2113);
  xx[796] = xx[12] * (xx[925] - xx[926]);
  xx[800] = (xx[891] + xx[892]) * xx[12];
  xx[826] = (xx[932] + xx[957]) * xx[12] - xx[172];
  xx[827] = xx[12] * (xx[948] - xx[947]);
  xx[2140] = xx[1042];
  xx[2141] = xx[796];
  xx[2142] = xx[800];
  xx[2143] = xx[931];
  xx[2144] = xx[826];
  xx[2145] = xx[827];
  xx[2146] = xx[914];
  xx[2147] = (xx[948] + xx[947]) * xx[12];
  xx[2148] = (xx[932] + xx[1034] * xx[1034]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 2140, xx + 880, xx + 2149);
  xx[880] = xx[324];
  xx[881] = xx[282];
  xx[882] = xx[795];
  pm_math_matrix3x3PostCross(xx + 2149, xx + 880, xx + 2140);
  pm_math_matrix3x3PostCross(xx + 1351, xx + 999, xx + 2149);
  xx[282] = - xx[970];
  xx[880] = xx[967];
  xx[881] = xx[282];
  xx[882] = - xx[790];
  pm_math_matrix3x3PostCross(xx + 2149, xx + 880, xx + 1351);
  xx[880] = xx[967];
  xx[881] = xx[282];
  xx[882] = xx[144];
  pm_math_matrix3x3PostCross(xx + 1299, xx + 880, xx + 2149);
  xx[144] = xx[2150] * state[23];
  xx[282] = xx[2153] * state[23];
  xx[324] = xx[2156] * state[23];
  xx[790] = xx[2149] * state[23];
  xx[795] = xx[2152] * state[23];
  xx[828] = xx[2155] * state[23];
  xx[1299] = xx[1351] - (xx[144] * xx[440] + xx[516] * xx[282] + xx[324] * xx
    [549]);
  xx[1300] = xx[1352] + xx[790] * xx[440] + xx[516] * xx[795] + xx[828] * xx[549];
  xx[1301] = xx[1353];
  xx[1302] = xx[1354] - (xx[144] * xx[550] + xx[282] * xx[442] + xx[552] * xx
    [324]);
  xx[1303] = xx[1355] + xx[790] * xx[550] + xx[795] * xx[442] + xx[552] * xx[828];
  xx[1304] = xx[1356];
  xx[1305] = xx[1357] - (xx[553] * xx[144] + xx[282] * xx[517] + xx[324] * xx
    [491]);
  xx[1306] = xx[1358] + xx[553] * xx[790] + xx[795] * xx[517] + xx[828] * xx[491];
  xx[1307] = xx[1359];
  pm_math_matrix3x3Compose(xx + 699, xx + 1299, xx + 1351);
  xx[144] = xx[2140] + xx[1351];
  xx[282] = xx[2143] + xx[1354];
  xx[324] = xx[2141] + xx[1352];
  xx[790] = xx[2144] + xx[1355];
  xx[795] = xx[2142] + xx[1353];
  xx[828] = xx[2145] + xx[1356];
  xx[1299] = xx[2113] + xx[144] * xx[670] - xx[282] * xx[86];
  xx[1300] = xx[2114] + xx[324] * xx[670] - xx[790] * xx[86];
  xx[1301] = xx[2115] + xx[795] * xx[670] - xx[828] * xx[86];
  xx[1302] = xx[2116] + xx[282] * xx[542] - xx[144] * xx[86];
  xx[1303] = xx[2117] + xx[790] * xx[542] - xx[324] * xx[86];
  xx[1304] = xx[2118] + xx[828] * xx[542] - xx[795] * xx[86];
  xx[1305] = xx[2119] - (xx[2146] + xx[1357]);
  xx[1306] = xx[2120] - (xx[2147] + xx[1358]);
  xx[1307] = xx[2121] - (xx[2148] + xx[1359]);
  pm_math_matrix3x3Compose(xx + 2158, xx + 1299, xx + 1351);
  xx[1299] = xx[413] * xx[1040] - xx[281] * xx[372] + xx[1813] * xx[343] - xx
    [1814] * xx[339] + xx[1313] + xx[1849] + xx[931] * xx[645] - xx[694] * xx
    [1042] - (xx[173] * xx[1043] - xx[218] * xx[1053]) + (xx[1876] + xx[1351]) *
    xx[12];
  xx[1300] = xx[1813] * xx[339] + xx[1814] * xx[343] - (xx[1040] * xx[372] + xx
    [413] * xx[281]) + xx[1314] + xx[1850] + xx[645] * xx[826] - xx[796] * xx
    [694] - (xx[1032] * xx[173] - xx[218] * xx[801]) + (xx[1877] + xx[1352]) *
    xx[12];
  xx[1301] = xx[1815] * xx[406] + xx[1315] + xx[1851] + xx[827] * xx[645] - xx
    [800] * xx[694] + xx[173] * xx[829] + xx[218] * xx[816] + (xx[1878] + xx
    [1353]) * xx[12];
  xx[1302] = xx[1040] * xx[137] - xx[136] * xx[281] + xx[1816] * xx[343] - xx
    [1817] * xx[339] + xx[1316] + xx[1852] + xx[128] * xx[1042] + xx[931] * xx
    [141] - (xx[143] * xx[1043] + xx[153] * xx[1053]) + (xx[1879] + xx[1354]) *
    xx[12];
  xx[1303] = xx[1816] * xx[339] + xx[1817] * xx[343] - (xx[1040] * xx[136] + xx
    [281] * xx[137]) + xx[1317] + xx[1853] + xx[796] * xx[128] + xx[141] * xx
    [826] - (xx[143] * xx[1032] + xx[153] * xx[801]) + (xx[1880] + xx[1355]) *
    xx[12];
  xx[1304] = xx[1818] * xx[406] + xx[1318] + xx[1854] + xx[800] * xx[128] + xx
    [827] * xx[141] + xx[143] * xx[829] - xx[816] * xx[153] + (xx[1881] + xx
    [1356]) * xx[12];
  xx[1305] = xx[1040] * xx[155] - xx[154] * xx[281] + xx[1819] * xx[343] - xx
    [1820] * xx[339] + xx[1319] + xx[1855] + xx[130] * xx[1042] - xx[931] * xx
    [140] - (xx[156] * xx[1053] - xx[157] * xx[1043]) + (xx[1882] + xx[1357]) *
    xx[12];
  xx[1306] = xx[1819] * xx[339] + xx[1820] * xx[343] - (xx[154] * xx[1040] + xx
    [155] * xx[281]) + xx[1320] + xx[1856] + xx[796] * xx[130] - xx[140] * xx
    [826] - (xx[156] * xx[801] - xx[157] * xx[1032]) + (xx[1883] + xx[1358]) *
    xx[12];
  xx[1307] = xx[1821] * xx[406] + xx[1321] + xx[1857] + xx[800] * xx[130] - xx
    [827] * xx[140] - (xx[157] * xx[829] + xx[156] * xx[816]) + (xx[1884] + xx
    [1359]) * xx[12];
  pm_math_matrix3x3Xform(xx + 1299, xx + 978, xx + 826);
  xx[880] = xx[252] * xx[356] - xx[164] + xx[111];
  xx[881] = xx[252] * xx[423] - xx[310] + xx[69];
  xx[882] = xx[252] * xx[364] - xx[389] + xx[105];
  pm_math_quatXform(xx + 123, xx + 880, xx + 947);
  pm_math_matrix3x3Xform(xx + 1858, xx + 981, xx + 880);
  xx[967] = xx[880] + xx[180];
  xx[968] = xx[881] + xx[181];
  xx[969] = xx[882] + xx[182];
  pm_math_quatXform(xx + 119, xx + 967, xx + 880);
  pm_math_matrix3x3Xform(xx + 2122, xx + 1013, xx + 967);
  xx[978] = xx[967] + xx[239];
  xx[979] = xx[968] + xx[240];
  xx[980] = xx[969] + xx[241];
  pm_math_quatXform(xx + 115, xx + 978, xx + 967);
  xx[144] = xx[958] * xx[417] - xx[963] * xx[693];
  xx[164] = xx[963] * xx[417] - xx[958] * xx[575];
  xx[281] = xx[113] * xx[164];
  xx[282] = xx[113] * xx[144];
  xx[310] = xx[109] * xx[164] + xx[144] * xx[104];
  xx[978] = - xx[281];
  xx[979] = xx[282];
  xx[980] = - xx[310];
  pm_math_cross3(xx + 214, xx + 978, xx + 999);
  xx[324] = xx[252] * xx[68] - xx[456];
  xx[252] = xx[71] * xx[324];
  xx[339] = xx[324] * xx[67];
  xx[343] = xx[177] + xx[12] * (xx[252] * xx[75] - xx[339] * xx[73]);
  pm_math_cross3(xx + 49, xx + 981, xx + 978);
  xx[356] = xx[183] + xx[324] - (xx[339] * xx[67] + xx[71] * xx[252]) * xx[12];
  xx[67] = (xx[252] * xx[73] + xx[339] * xx[75]) * xx[12] - xx[197];
  xx[981] = xx[343] + xx[978];
  xx[982] = xx[356] + xx[979];
  xx[983] = xx[67] + xx[980];
  pm_math_quatXform(xx + 53, xx + 981, xx + 978);
  xx[71] = xx[200] + xx[978];
  pm_math_cross3(xx + 23, xx + 1013, xx + 981);
  xx[73] = xx[201] + xx[979];
  xx[75] = xx[202] + xx[980];
  xx[978] = xx[71] + xx[981];
  xx[979] = xx[73] + xx[982];
  xx[980] = xx[75] + xx[983];
  pm_math_quatXform(xx + 8, xx + 978, xx + 981);
  xx[252] = xx[206] + xx[981];
  xx[324] = xx[252] - xx[958] * state[1];
  xx[339] = xx[207] + xx[982];
  xx[364] = xx[339] + xx[963] * state[1];
  xx[389] = xx[364] * xx[15] + xx[16] * xx[324];
  xx[406] = (xx[324] - xx[12] * xx[389] * xx[16]) * inputDot[0];
  xx[324] = xx[113] * xx[406];
  xx[423] = (xx[364] - xx[12] * xx[389] * xx[15]) * inputDot[0];
  xx[364] = xx[113] * xx[423];
  xx[389] = xx[423] * xx[104] - xx[109] * xx[406];
  xx[978] = - xx[324];
  xx[979] = - xx[364];
  xx[980] = xx[389];
  pm_math_cross3(xx + 214, xx + 978, xx + 981);
  xx[456] = xx[339] * state[1];
  xx[339] = xx[252] * state[1];
  xx[252] = xx[456] * xx[16] - xx[15] * xx[339];
  xx[978] = xx[71];
  xx[979] = xx[73];
  xx[980] = xx[75];
  pm_math_cross3(xx + 23, xx + 978, xx + 1013);
  pm_math_quatXform(xx + 8, xx + 1013, xx + 978);
  xx[1013] = xx[343];
  xx[1014] = xx[356];
  xx[1015] = xx[67];
  pm_math_cross3(xx + 49, xx + 1013, xx + 1031);
  pm_math_quatXform(xx + 53, xx + 1031, xx + 1013);
  pm_math_quatXform(xx + 8, xx + 1013, xx + 1031);
  xx[67] = xx[978] + xx[1031];
  xx[71] = xx[979] + xx[1032];
  xx[73] = xx[71] * xx[15] + xx[67] * xx[16];
  xx[75] = xx[980] + xx[1033];
  xx[978] = xx[12] * xx[16] * xx[252] - xx[456] + xx[67] - xx[12] * xx[73] * xx
    [16];
  xx[979] = xx[339] + xx[12] * xx[15] * xx[252] + xx[71] - xx[12] * xx[73] * xx
    [15];
  xx[980] = xx[75] - (xx[15] * xx[75] * xx[15] + xx[75] * xx[16] * xx[16]) * xx
    [12];
  pm_math_quatXform(xx + 841, xx + 978, xx + 1013);
  xx[67] = xx[80] + xx[404] * xx[98];
  xx[978] = xx[12] * (xx[907] - xx[911]);
  xx[979] = (xx[953] + xx[936]) * xx[12];
  xx[980] = (xx[939] + xx[950]) * xx[12] - xx[172];
  pm_math_cross3(xx + 978, xx + 1422, xx + 1031);
  pm_math_quatXform(xx + 1140, xx + 1031, xx + 978);
  xx[71] = xx[952] * xx[1397];
  xx[73] = xx[1397] * xx[956];
  xx[75] = xx[952] * xx[1389] + xx[1394] * xx[956];
  xx[1031] = xx[71];
  xx[1032] = xx[73];
  xx[1033] = - xx[75];
  pm_math_cross3(xx + 1429, xx + 1031, xx + 1078);
  xx[80] = xx[1396] * xx[943];
  xx[98] = xx[587] * xx[1389];
  xx[252] = (xx[1387] * xx[1387] * inputDot[3] + xx[1388] * inputDot[3] * xx
             [1388]) * xx[12] - inputDot[3] + state[47];
  xx[339] = xx[252] * xx[1411];
  xx[343] = xx[252] * xx[1412];
  xx[356] = xx[12] * (xx[1413] * xx[339] - xx[1410] * xx[343]);
  xx[456] = xx[356] + xx[917];
  xx[790] = (xx[1410] * xx[339] + xx[1413] * xx[343]) * xx[12];
  xx[795] = xx[790] + xx[918];
  xx[796] = xx[252] - (xx[1411] * xx[339] + xx[1412] * xx[343]) * xx[12];
  xx[339] = xx[796] + xx[919];
  xx[1031] = xx[456];
  xx[1032] = xx[795];
  xx[1033] = xx[339];
  xx[1132] = xx[456] * xx[1453];
  xx[1133] = xx[795] * xx[30];
  xx[1134] = xx[339] * xx[1455];
  pm_math_cross3(xx + 1031, xx + 1132, xx + 1136);
  xx[1031] = xx[356];
  xx[1032] = xx[790];
  xx[1033] = xx[796];
  pm_math_cross3(xx + 1031, xx + 917, xx + 1132);
  xx[343] = xx[1136] + xx[1453] * xx[1132];
  xx[800] = xx[1137] + xx[30] * xx[1133];
  xx[30] = xx[1138] + xx[1455] * xx[1134];
  xx[917] = xx[343];
  xx[918] = xx[800];
  xx[919] = xx[30];
  xx[1031] = xx[356] + xx[456];
  xx[1032] = xx[790] + xx[795];
  xx[1033] = xx[796] + xx[339];
  pm_math_cross3(xx + 1031, xx + 984, xx + 1132);
  xx[339] = xx[252] * xx[252] * xx[1426];
  xx[356] = xx[1413] * xx[339];
  xx[456] = xx[252] * xx[252] * xx[1425];
  xx[252] = xx[1413] * xx[456];
  xx[790] = xx[1412] * xx[456] - xx[1411] * xx[339];
  xx[984] = xx[356];
  xx[985] = - xx[252];
  xx[986] = xx[790];
  pm_math_cross3(xx + 1411, xx + 984, xx + 1031);
  xx[795] = (xx[1132] + xx[12] * (xx[1031] - xx[1410] * xx[356]) - xx[456]) *
    xx[558];
  xx[356] = (xx[1133] + (xx[1410] * xx[252] + xx[1032]) * xx[12] - xx[339]) *
    xx[558];
  xx[252] = (xx[1134] + xx[12] * (xx[1033] - xx[1410] * xx[790])) * xx[558];
  xx[984] = xx[795];
  xx[985] = xx[356];
  xx[986] = xx[252];
  xx[339] = pm_math_dot3(xx + 1450, xx + 917) + pm_math_dot3(xx + 1460, xx + 984);
  xx[456] = pm_math_dot3(xx + 1474, xx + 917) + pm_math_dot3(xx + 1477, xx + 984);
  xx[790] = pm_math_dot3(xx + 1489, xx + 917) + pm_math_dot3(xx + 1492, xx + 984);
  xx[917] = - xx[339];
  xx[918] = - xx[456];
  xx[919] = - xx[790];
  solveSymmetricPosDef(xx + 1499, xx + 917, 3, 1, xx + 984, xx + 1031);
  xx[917] = xx[343] + xx[984] * xx[1454] + xx[985] * xx[1408] - xx[986] * xx
    [1436];
  xx[918] = xx[800] - xx[984] * xx[1407] + xx[985] * xx[1406] + xx[986] * xx
    [1445];
  xx[919] = xx[30] + xx[984] * xx[1456] - xx[985] * xx[1447] + xx[986] * xx[1405];
  pm_math_quatXform(xx + 1410, xx + 917, xx + 1031);
  xx[917] = xx[795] + xx[984] * xx[1449] + xx[985] * xx[1446] + xx[986] * xx
    [1409];
  xx[918] = xx[356] + xx[984] * xx[1463] + xx[985] * xx[1468] + xx[986] * xx
    [1470];
  xx[919] = xx[252] + xx[984] * xx[1464] + xx[985] * xx[1469] + xx[986] * xx
    [1484];
  pm_math_quatXform(xx + 1410, xx + 917, xx + 1132);
  pm_math_cross3(xx + 1425, xx + 1132, xx + 917);
  xx[796] = xx[1547] - xx[1525];
  xx[801] = xx[230] * xx[937];
  xx[816] = xx[801] * xx[1388];
  xx[829] = xx[12] * xx[816] * xx[1388] - xx[801];
  xx[801] = xx[12] * xx[1387] * xx[816];
  xx[816] = xx[1548] - xx[1528];
  xx[863] = xx[796] * xx[829] + xx[801] * xx[816];
  xx[883] = (xx[1387] * xx[1387] * inputDdot[3] + xx[1388] * inputDdot[3] * xx
             [1388]) * xx[12] - inputDdot[3];
  xx[891] = xx[587] * inputDdot[3] + xx[230] * inputDdot[3];
  xx[892] = xx[587] * xx[937];
  xx[907] = xx[1387] * xx[891] + xx[892] * xx[1388];
  xx[911] = xx[12] * xx[907] * xx[1388] - xx[892];
  xx[892] = xx[12] * xx[907] * xx[1387] - xx[891];
  xx[891] = xx[1346] / xx[1414] * xx[883] + xx[796] / xx[1414] * xx[911] + xx
    [816] / xx[1414] * xx[892];
  xx[796] = (xx[1033] + xx[919] + xx[863]) / xx[1414] + xx[891];
  xx[816] = xx[883] - xx[796];
  xx[907] = xx[1411] * xx[816];
  xx[914] = xx[1412] * xx[816];
  xx[917] = xx[12] * (xx[1413] * xx[907] - xx[1410] * xx[914]);
  xx[918] = (xx[1410] * xx[907] + xx[1413] * xx[914]) * xx[12];
  xx[919] = xx[816] - (xx[1411] * xx[907] + xx[1412] * xx[914]) * xx[12];
  xx[907] = xx[911] + xx[829];
  xx[829] = xx[907] - xx[1426] * xx[816];
  xx[911] = xx[892] + xx[801];
  xx[801] = xx[911] + xx[1425] * xx[816];
  xx[816] = xx[801] * xx[1413];
  xx[892] = xx[1413] * xx[829];
  xx[914] = xx[801] * xx[1411] - xx[1412] * xx[829];
  xx[1031] = - xx[816];
  xx[1032] = xx[892];
  xx[1033] = xx[914];
  pm_math_cross3(xx + 1411, xx + 1031, xx + 1132);
  xx[1031] = xx[829] + (xx[1410] * xx[816] + xx[1132]) * xx[12];
  xx[1032] = xx[801] + xx[12] * (xx[1133] - xx[1410] * xx[892]);
  xx[1033] = xx[12] * (xx[1134] - xx[1410] * xx[914]);
  xx[801] = xx[984] - (pm_math_dot3(xx + 1520, xx + 917) + pm_math_dot3(xx +
    1532, xx + 1031));
  xx[816] = xx[985] - (pm_math_dot3(xx + 1538, xx + 917) + pm_math_dot3(xx +
    1541, xx + 1031));
  xx[829] = xx[986] - (pm_math_dot3(xx + 1544, xx + 917) + pm_math_dot3(xx +
    1549, xx + 1031));
  xx[892] = xx[1130] * xx[16] - xx[15] * xx[1129];
  xx[914] = xx[1131] * xx[16] - xx[15] * xx[1128];
  xx[917] = xx[1128] * xx[16] + xx[15] * xx[1131];
  xx[918] = xx[15] * xx[1130] + xx[1129] * xx[16];
  xx[1031] = - xx[892];
  xx[1032] = xx[914];
  xx[1033] = xx[917];
  xx[1034] = - xx[918];
  pm_math_quatCompose(xx + 841, xx + 1031, xx + 1140);
  xx[919] = xx[917] * xx[892];
  xx[925] = xx[918] * xx[914];
  xx[926] = xx[12] * (xx[919] - xx[925]);
  xx[931] = xx[914] * xx[892];
  xx[932] = xx[917] * xx[918];
  xx[936] = xx[914] * xx[914];
  xx[939] = xx[917] * xx[917];
  xx[984] = xx[926];
  xx[985] = - ((xx[931] + xx[932]) * xx[12]);
  xx[986] = xx[172] - (xx[936] + xx[939]) * xx[12];
  pm_math_cross3(xx + 984, xx + 1019, xx + 1031);
  pm_math_quatXform(xx + 1140, xx + 1031, xx + 984);
  xx[950] = xx[1101] * xx[15] + xx[1103] * xx[16];
  xx[953] = xx[1103] - xx[12] * xx[950] * xx[16] + xx[230];
  xx[957] = xx[953] * xx[113];
  xx[958] = xx[1101] - xx[12] * xx[950] * xx[15];
  xx[950] = xx[113] * xx[958];
  xx[963] = xx[958] * xx[104] - xx[953] * xx[109];
  xx[1031] = - xx[957];
  xx[1032] = - xx[950];
  xx[1033] = xx[963];
  pm_math_cross3(xx + 214, xx + 1031, xx + 1132);
  xx[970] = xx[1612] * xx[1612];
  xx[1002] = xx[1526] * xx[1612];
  xx[1031] = xx[1513] * xx[1518];
  xx[1032] = xx[1526] * xx[1513];
  xx[1033] = xx[1518] * xx[1612];
  xx[1034] = xx[1526] * xx[1518];
  xx[1040] = xx[1513] * xx[1612];
  xx[1299] = (xx[970] + xx[1513] * xx[1513]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[1002] - xx[1031]);
  xx[1301] = - ((xx[1032] + xx[1033]) * xx[12]);
  xx[1302] = - ((xx[1031] + xx[1002]) * xx[12]);
  xx[1303] = (xx[970] + xx[1518] * xx[1518]) * xx[12] - xx[172];
  xx[1304] = xx[12] * (xx[1034] - xx[1040]);
  xx[1305] = xx[12] * (xx[1033] - xx[1032]);
  xx[1306] = (xx[1034] + xx[1040]) * xx[12];
  xx[1307] = (xx[970] + xx[1526] * xx[1526]) * xx[12] - xx[172];
  xx[1031] = - state[61];
  xx[1032] = - state[62];
  xx[1033] = - state[63];
  pm_math_quatInverseXform(xx + 1565, xx + 1031, xx + 1136);
  xx[970] = xx[1136] * xx[1621] - xx[1138] * xx[1620];
  xx[1002] = xx[1137] * xx[1620] - xx[1136] * xx[1571];
  xx[1031] = xx[1138] * xx[1571] - xx[1137] * xx[1621];
  xx[1032] = xx[1136] * xx[1523] - xx[1138] * xx[1553];
  xx[1033] = xx[1137] * xx[1553] - xx[1136] * xx[1517];
  xx[1034] = xx[1138] * xx[1517] - xx[1137] * xx[1523];
  xx[1040] = xx[1136] * xx[1556] - xx[1138] * xx[1555];
  xx[1042] = xx[1137] * xx[1555] - xx[1136] * xx[1554];
  xx[1043] = xx[1138] * xx[1554] - xx[1137] * xx[1556];
  xx[1313] = xx[1138] * xx[970] - xx[1137] * xx[1002];
  xx[1314] = xx[1136] * xx[1002] - xx[1138] * xx[1031];
  xx[1315] = xx[1137] * xx[1031] - xx[1136] * xx[970];
  xx[1316] = xx[1138] * xx[1032] - xx[1137] * xx[1033];
  xx[1317] = xx[1136] * xx[1033] - xx[1138] * xx[1034];
  xx[1318] = xx[1137] * xx[1034] - xx[1136] * xx[1032];
  xx[1319] = xx[1138] * xx[1040] - xx[1137] * xx[1042];
  xx[1320] = xx[1136] * xx[1042] - xx[1138] * xx[1043];
  xx[1321] = xx[1137] * xx[1043] - xx[1136] * xx[1040];
  pm_math_matrix3x3Compose(xx + 1299, xx + 1313, xx + 1351);
  xx[970] = xx[1524] * xx[1487];
  xx[1002] = xx[1527] * xx[1552];
  xx[1031] = xx[970] - xx[1002];
  xx[1032] = xx[12] * xx[1031];
  xx[1033] = xx[12] * xx[1146] * xx[1147] * state[56] * state[56];
  xx[1034] = (xx[12] * xx[1146] * xx[1146] - xx[172]) * state[56] * state[56];
  xx[1040] = xx[1527] * xx[1527];
  xx[1042] = (xx[1040] + xx[1487] * xx[1487]) * xx[12] - xx[172];
  xx[1043] = xx[1032] * xx[1033] - xx[1034] * xx[1042];
  xx[1048] = (xx[12] * xx[1147] * xx[1147] - xx[172]) * state[56] * state[56];
  xx[1053] = xx[1033] * xx[1042] - xx[1032] * xx[1048];
  xx[1055] = xx[1042] * inputDot[5] * inputDot[5];
  xx[1056] = xx[1567] * xx[1147] - xx[1146] * xx[1566];
  xx[1074] = xx[1056] * xx[1056];
  xx[1075] = xx[1568] * xx[1147] - xx[1146] * xx[1565];
  xx[1086] = xx[1075] * xx[1075];
  xx[1088] = (xx[1074] + xx[1086]) * xx[12] - xx[172];
  xx[1095] = xx[12] * xx[1031] * inputDot[5] * inputDot[5];
  xx[1031] = xx[1565] * xx[1147] + xx[1146] * xx[1568];
  xx[1102] = xx[1031] * xx[1075];
  xx[1105] = xx[1146] * xx[1567] + xx[1566] * xx[1147];
  xx[1107] = xx[1105] * xx[1056];
  xx[1108] = (xx[1102] + xx[1107]) * xx[12];
  xx[1149] = xx[1527];
  xx[1150] = xx[1487];
  xx[1151] = xx[1524];
  xx[1152] = xx[1552];
  xx[1155] = - xx[1056];
  xx[1156] = xx[1075];
  xx[1157] = xx[1031];
  xx[1158] = - xx[1105];
  pm_math_quatCompose(xx + 1149, xx + 1155, xx + 1191);
  xx[1122] = xx[1191] * xx[1191];
  xx[1123] = xx[1192] * xx[1193];
  xx[1125] = xx[1191] * xx[1194];
  xx[1126] = xx[1192] * xx[1194];
  xx[1144] = xx[1191] * xx[1193];
  xx[1149] = xx[1193] * xx[1194];
  xx[1150] = xx[1191] * xx[1192];
  xx[1299] = (xx[1122] + xx[1192] * xx[1192]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[1123] - xx[1125]);
  xx[1301] = (xx[1126] + xx[1144]) * xx[12];
  xx[1302] = (xx[1123] + xx[1125]) * xx[12];
  xx[1303] = (xx[1122] + xx[1193] * xx[1193]) * xx[12] - xx[172];
  xx[1304] = xx[12] * (xx[1149] - xx[1150]);
  xx[1305] = xx[12] * (xx[1126] - xx[1144]);
  xx[1306] = (xx[1149] + xx[1150]) * xx[12];
  xx[1307] = (xx[1122] + xx[1194] * xx[1194]) * xx[12] - xx[172];
  xx[1122] = xx[1075] * inputDot[5];
  xx[1123] = xx[1031] * inputDot[5];
  xx[1149] = xx[12] * (xx[1105] * xx[1122] - xx[1123] * xx[1056]);
  xx[1150] = (xx[1122] * xx[1056] + xx[1105] * xx[1123]) * xx[12];
  xx[1151] = (xx[1122] * xx[1075] + xx[1031] * xx[1123]) * xx[12] - inputDot[5];
  pm_math_matrix3x3PostCross(xx + 1299, xx + 1149, xx + 1380);
  xx[1122] = xx[1566] * state[56];
  xx[1123] = xx[1567] * state[56];
  xx[1125] = xx[12] * (xx[1568] * xx[1122] - xx[1565] * xx[1123]);
  xx[1126] = (xx[1565] * xx[1122] + xx[1568] * xx[1123]) * xx[12];
  xx[1144] = state[56] - (xx[1566] * xx[1122] + xx[1567] * xx[1123]) * xx[12];
  xx[1149] = xx[1125] + xx[1136];
  xx[1150] = xx[1126] + xx[1137];
  xx[1151] = xx[1144] + xx[1138];
  pm_math_matrix3x3PostCross(xx + 1380, xx + 1149, xx + 1299);
  xx[1122] = xx[1487] * xx[1552];
  xx[1123] = xx[1527] * xx[1524];
  xx[1149] = xx[970] + xx[1002];
  xx[970] = xx[1149] * xx[12];
  xx[1002] = (xx[1040] + xx[1524] * xx[1524]) * xx[12] - xx[172];
  xx[1150] = xx[1524] * xx[1552];
  xx[1151] = xx[1527] * xx[1487];
  xx[1152] = xx[1122] - xx[1123];
  xx[1155] = xx[12] * xx[1152];
  xx[1156] = xx[1150] + xx[1151];
  xx[1157] = xx[1156] * xx[12];
  xx[1380] = xx[1042];
  xx[1381] = xx[1032];
  xx[1382] = (xx[1122] + xx[1123]) * xx[12];
  xx[1383] = xx[970];
  xx[1384] = xx[1002];
  xx[1385] = xx[12] * (xx[1150] - xx[1151]);
  xx[1386] = xx[1155];
  xx[1387] = xx[1157];
  xx[1388] = (xx[1040] + xx[1552] * xx[1552]) * xx[12] - xx[172];
  xx[1032] = xx[12] * (xx[1102] - xx[1107]);
  xx[1040] = xx[1105] * xx[1075];
  xx[1042] = xx[1031] * xx[1056];
  xx[1102] = (xx[1040] + xx[1042]) * xx[12];
  xx[1107] = xx[1031] * xx[1031];
  xx[1122] = (xx[1074] + xx[1107]) * xx[12] - xx[172];
  xx[1123] = xx[1075] * xx[1056];
  xx[1056] = xx[1031] * xx[1105];
  xx[1031] = xx[12] * (xx[1123] - xx[1056]);
  xx[1471] = xx[1088];
  xx[1472] = xx[1032];
  xx[1473] = - xx[1102];
  xx[1474] = xx[1108];
  xx[1475] = xx[1122];
  xx[1476] = xx[1031];
  xx[1477] = xx[12] * (xx[1042] - xx[1040]);
  xx[1478] = - ((xx[1056] + xx[1123]) * xx[12]);
  xx[1479] = (xx[1074] + xx[1105] * xx[1105]) * xx[12] - xx[172];
  xx[1158] = xx[1125];
  xx[1159] = xx[1126];
  xx[1160] = xx[1144];
  pm_math_matrix3x3PostCross(xx + 1471, xx + 1158, xx + 1488);
  pm_math_matrix3x3PostCross(xx + 1488, xx + 1136, xx + 1471);
  pm_math_matrix3x3Compose(xx + 1380, xx + 1471, xx + 1488);
  xx[1074] = xx[1033] * xx[1002] - xx[1034] * xx[970];
  xx[1075] = xx[1033] * xx[970] - xx[1048] * xx[1002];
  xx[970] = xx[12] * xx[1149] * inputDot[5] * inputDot[5];
  xx[1105] = xx[1002] * inputDot[5] * inputDot[5];
  xx[1002] = xx[1033] * xx[1157] - xx[1155] * xx[1034];
  xx[1125] = xx[1033] * xx[1155] - xx[1048] * xx[1157];
  xx[1126] = xx[12] * xx[1152] * inputDot[5] * inputDot[5];
  xx[1144] = xx[12] * xx[1156] * inputDot[5] * inputDot[5];
  xx[1380] = xx[1351] + xx[1620] * xx[1043] + xx[1553] * xx[1053] - (xx[1055] *
    xx[1088] + xx[1095] * xx[1108]) + (xx[1299] + xx[1488]) * xx[12];
  xx[1381] = xx[1352] + xx[1571] * xx[1043] + xx[1517] * xx[1053] - (xx[1032] *
    xx[1055] + xx[1095] * xx[1122]) + (xx[1300] + xx[1489]) * xx[12];
  xx[1382] = xx[1353] + xx[1621] * xx[1043] + xx[1523] * xx[1053] + xx[1055] *
    xx[1102] - xx[1095] * xx[1031] + (xx[1301] + xx[1490]) * xx[12];
  xx[1383] = xx[1354] + xx[1620] * xx[1074] + xx[1553] * xx[1075] - (xx[970] *
    xx[1088] + xx[1108] * xx[1105]) + (xx[1302] + xx[1491]) * xx[12];
  xx[1384] = xx[1355] + xx[1571] * xx[1074] + xx[1517] * xx[1075] - (xx[1032] *
    xx[970] + xx[1105] * xx[1122]) + (xx[1303] + xx[1492]) * xx[12];
  xx[1385] = xx[1356] + xx[1621] * xx[1074] + xx[1523] * xx[1075] + xx[970] *
    xx[1102] - xx[1031] * xx[1105] + (xx[1304] + xx[1493]) * xx[12];
  xx[1386] = xx[1357] + xx[1620] * xx[1002] + xx[1553] * xx[1125] - (xx[1126] *
    xx[1088] + xx[1144] * xx[1108]) + (xx[1305] + xx[1494]) * xx[12];
  xx[1387] = xx[1358] + xx[1571] * xx[1002] + xx[1517] * xx[1125] - (xx[1032] *
    xx[1126] + xx[1144] * xx[1122]) + (xx[1306] + xx[1495]) * xx[12];
  xx[1388] = xx[1359] + xx[1621] * xx[1002] + xx[1523] * xx[1125] + xx[1126] *
    xx[1102] - xx[1031] * xx[1144] + (xx[1307] + xx[1496]) * xx[12];
  pm_math_matrix3x3Xform(xx + 1380, xx + 1577, xx + 1149);
  pm_math_matrix3x3Xform(xx + 1313, xx + 1557, xx + 1155);
  pm_math_quatXform(xx + 1635, xx + 1155, xx + 1158);
  xx[1002] = xx[1581] * xx[1033] - xx[1580] * xx[1034];
  xx[1031] = xx[1580] * xx[1033] - xx[1581] * xx[1048];
  xx[1032] = xx[1552] * xx[1031];
  xx[1033] = xx[1552] * xx[1002];
  xx[1034] = xx[1487] * xx[1031] - xx[1524] * xx[1002];
  xx[1155] = - xx[1032];
  xx[1156] = xx[1033];
  xx[1157] = xx[1034];
  pm_math_cross3(xx + 1584, xx + 1155, xx + 1173);
  xx[1043] = inputDot[5] * inputDot[5];
  xx[1048] = 0.02223265526423945;
  xx[1053] = xx[1524] * xx[1048];
  xx[1074] = xx[1048] * xx[1552];
  xx[1075] = xx[1074] * xx[1552];
  xx[1088] = xx[1146] * xx[1581] + xx[1580] * xx[1147];
  xx[1102] = 0.02856734473576051;
  xx[1108] = xx[1580] - xx[12] * xx[1088] * xx[1147] + xx[1102];
  xx[1122] = xx[1581] - xx[12] * xx[1088] * xx[1146];
  pm_math_cross3(xx + 1136, xx + 1557, xx + 1155);
  pm_math_quatXform(xx + 1565, xx + 1155, xx + 1213);
  xx[1088] = xx[1214] + xx[1580] * state[56];
  xx[1125] = xx[1213] - xx[1581] * state[56];
  xx[1152] = xx[1088] * xx[1146] + xx[1147] * xx[1125];
  xx[1165] = (xx[1088] - xx[12] * xx[1152] * xx[1146]) * inputDot[5];
  xx[1088] = (xx[1125] - xx[12] * xx[1152] * xx[1147]) * inputDot[5];
  xx[1125] = xx[1088] * xx[1552];
  xx[1152] = xx[1165] * xx[1552];
  xx[1166] = xx[1088] * xx[1487] + xx[1524] * xx[1165];
  xx[1218] = xx[1125];
  xx[1219] = xx[1152];
  xx[1220] = - xx[1166];
  pm_math_cross3(xx + 1584, xx + 1218, xx + 1222);
  xx[1180] = xx[1214] * state[56];
  xx[1181] = xx[1213] * state[56];
  xx[1188] = xx[1180] * xx[1147] - xx[1146] * xx[1181];
  xx[1189] = xx[12] * xx[1147] * xx[1188] - xx[1180];
  xx[1180] = xx[1181] + xx[12] * xx[1146] * xx[1188];
  xx[1181] = xx[1180] * xx[1552];
  xx[1188] = xx[1552] * xx[1189];
  xx[1196] = xx[1180] * xx[1487] - xx[1524] * xx[1189];
  xx[1213] = - xx[1181];
  xx[1214] = xx[1188];
  xx[1215] = xx[1196];
  pm_math_cross3(xx + 1584, xx + 1213, xx + 1218);
  pm_math_matrix3x3Compose(xx + 1813, xx + 326, xx + 1299);
  xx[326] = xx[262] * state[25] * state[25];
  xx[262] = xx[12] * xx[321] * state[25] * state[25];
  xx[321] = xx[12] * xx[325] * state[25] * state[25];
  xx[325] = xx[1070] * xx[1070];
  xx[327] = xx[1071] * xx[1072];
  xx[328] = xx[1070] * xx[1073];
  xx[329] = xx[1071] * xx[1073];
  xx[330] = xx[1070] * xx[1072];
  xx[331] = xx[1072] * xx[1073];
  xx[332] = xx[1070] * xx[1071];
  xx[1313] = (xx[325] + xx[1071] * xx[1071]) * xx[12] - xx[172];
  xx[1314] = xx[12] * (xx[327] - xx[328]);
  xx[1315] = (xx[329] + xx[330]) * xx[12];
  xx[1316] = (xx[327] + xx[328]) * xx[12];
  xx[1317] = (xx[325] + xx[1072] * xx[1072]) * xx[12] - xx[172];
  xx[1318] = xx[12] * (xx[331] - xx[332]);
  xx[1319] = xx[12] * (xx[329] - xx[330]);
  xx[1320] = (xx[331] + xx[332]) * xx[12];
  xx[1321] = (xx[325] + xx[1073] * xx[1073]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 1867, xx + 1313, xx + 1351);
  xx[325] = xx[1096] * xx[1096];
  xx[327] = xx[1097] * xx[1098];
  xx[328] = xx[1096] * xx[1099];
  xx[329] = xx[1097] * xx[1099];
  xx[330] = xx[1096] * xx[1098];
  xx[331] = xx[1098] * xx[1099];
  xx[332] = xx[1096] * xx[1097];
  xx[1380] = (xx[325] + xx[1097] * xx[1097]) * xx[12] - xx[172];
  xx[1381] = xx[12] * (xx[327] - xx[328]);
  xx[1382] = (xx[329] + xx[330]) * xx[12];
  xx[1383] = (xx[327] + xx[328]) * xx[12];
  xx[1384] = (xx[325] + xx[1098] * xx[1098]) * xx[12] - xx[172];
  xx[1385] = xx[12] * (xx[331] - xx[332]);
  xx[1386] = xx[12] * (xx[329] - xx[330]);
  xx[1387] = (xx[331] + xx[332]) * xx[12];
  xx[1388] = (xx[325] + xx[1099] * xx[1099]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 2131, xx + 1380, xx + 1471);
  xx[325] = xx[1129] * xx[1130];
  xx[327] = xx[1128] * xx[1131];
  xx[328] = (xx[325] + xx[327]) * xx[12];
  xx[329] = xx[1128] * xx[1128];
  xx[330] = (xx[329] + xx[1069]) * xx[12] - xx[172];
  xx[331] = xx[892] * xx[892];
  xx[332] = (xx[331] + xx[936]) * xx[12] - xx[172];
  xx[333] = xx[917] * xx[914];
  xx[334] = xx[918] * xx[892];
  xx[936] = (xx[333] + xx[334]) * xx[12];
  xx[1069] = xx[1140] * xx[1140];
  xx[1201] = xx[1141] * xx[1142];
  xx[1202] = xx[1140] * xx[1143];
  xx[1210] = xx[1141] * xx[1143];
  xx[1213] = xx[1140] * xx[1142];
  xx[1214] = xx[1142] * xx[1143];
  xx[1215] = xx[1140] * xx[1141];
  xx[1488] = (xx[1069] + xx[1141] * xx[1141]) * xx[12] - xx[172];
  xx[1489] = xx[12] * (xx[1201] - xx[1202]);
  xx[1490] = (xx[1210] + xx[1213]) * xx[12];
  xx[1491] = (xx[1201] + xx[1202]) * xx[12];
  xx[1492] = (xx[1069] + xx[1142] * xx[1142]) * xx[12] - xx[172];
  xx[1493] = xx[12] * (xx[1214] - xx[1215]);
  xx[1494] = xx[12] * (xx[1210] - xx[1213]);
  xx[1495] = (xx[1214] + xx[1215]) * xx[12];
  xx[1496] = (xx[1069] + xx[1143] * xx[1143]) * xx[12] - xx[172];
  xx[1069] = xx[917] * inputDot[0];
  xx[1140] = xx[914] * inputDot[0];
  xx[1141] = xx[12] * (xx[1069] * xx[892] - xx[918] * xx[1140]);
  xx[1142] = - ((xx[1140] * xx[892] + xx[918] * xx[1069]) * xx[12]);
  xx[1143] = inputDot[0] - (xx[1140] * xx[914] + xx[917] * xx[1069]) * xx[12];
  pm_math_matrix3x3PostCross(xx + 1488, xx + 1141, xx + 1508);
  xx[892] = xx[1129] * state[1];
  xx[914] = xx[1130] * state[1];
  xx[917] = xx[12] * (xx[1131] * xx[892] - xx[1128] * xx[914]);
  pm_math_quatInverseXform(xx + 1096, xx + 23, xx + 1140);
  pm_math_quatInverseXform(xx + 1070, xx + 49, xx + 1096);
  xx[1069] = xx[280] * xx[68];
  xx[1070] = xx[68] * xx[97] - xx[62] * xx[279];
  xx[97] = xx[280] * xx[62];
  xx[1071] = - xx[1069];
  xx[1072] = xx[1070];
  xx[1073] = xx[97];
  pm_math_cross3(xx + 1009, xx + 1071, xx + 1213);
  xx[279] = xx[12] * (xx[1213] + xx[88] * xx[1069]) - xx[62];
  xx[280] = xx[1096] + xx[279];
  xx[1009] = xx[1140] + xx[280];
  xx[1010] = (xx[1128] * xx[892] + xx[1131] * xx[914]) * xx[12];
  xx[1011] = xx[12] * (xx[1214] - xx[88] * xx[1070]);
  xx[1069] = xx[1097] + xx[1011];
  xx[1070] = xx[1141] + xx[1069];
  xx[1071] = state[1] - (xx[1129] * xx[892] + xx[1130] * xx[914]) * xx[12];
  xx[892] = (xx[1215] - xx[88] * xx[97]) * xx[12] - xx[68];
  xx[88] = xx[892] - state[25];
  xx[97] = xx[1098] + xx[88];
  xx[914] = xx[1142] + xx[97];
  xx[1128] = xx[917] + xx[1009];
  xx[1129] = xx[1010] + xx[1070];
  xx[1130] = xx[1071] + xx[914];
  pm_math_matrix3x3PostCross(xx + 1508, xx + 1128, xx + 1488);
  xx[1072] = xx[12] * (xx[333] - xx[334]);
  xx[333] = (xx[925] + xx[919]) * xx[12];
  xx[334] = (xx[331] + xx[939]) * xx[12] - xx[172];
  xx[919] = xx[12] * (xx[931] - xx[932]);
  xx[1508] = xx[332];
  xx[1509] = xx[1072];
  xx[1510] = - xx[333];
  xx[1511] = xx[936];
  xx[1512] = xx[334];
  xx[1513] = xx[919];
  xx[1514] = xx[926];
  xx[1515] = - ((xx[932] + xx[931]) * xx[12]);
  xx[1516] = (xx[331] + xx[918] * xx[918]) * xx[12] - xx[172];
  xx[1128] = xx[917];
  xx[1129] = xx[1010];
  xx[1130] = xx[1071];
  pm_math_matrix3x3PostCross(xx + 1508, xx + 1128, xx + 1849);
  xx[1128] = xx[1009];
  xx[1129] = xx[1070];
  xx[1130] = xx[914];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 1128, xx + 1508);
  xx[331] = xx[12] * (xx[325] - xx[327]);
  xx[325] = (xx[1022] + xx[1024]) * xx[12];
  xx[327] = (xx[329] + xx[1100]) * xx[12] - xx[172];
  xx[914] = xx[12] * (xx[1068] - xx[1067]);
  xx[1849] = xx[330];
  xx[1850] = xx[331];
  xx[1851] = xx[325];
  xx[1852] = xx[328];
  xx[1853] = xx[327];
  xx[1854] = xx[914];
  xx[1855] = xx[1028];
  xx[1856] = (xx[1068] + xx[1067]) * xx[12];
  xx[1857] = (xx[329] + xx[1131] * xx[1131]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 1140, xx + 1876);
  xx[1128] = xx[280];
  xx[1129] = xx[1069];
  xx[1130] = xx[97];
  pm_math_matrix3x3PostCross(xx + 1876, xx + 1128, xx + 1849);
  pm_math_matrix3x3PostCross(xx + 1380, xx + 1096, xx + 1876);
  xx[1067] = xx[279];
  xx[1068] = xx[1011];
  xx[1069] = xx[88];
  pm_math_matrix3x3PostCross(xx + 1876, xx + 1067, xx + 1380);
  xx[1067] = xx[279];
  xx[1068] = xx[1011];
  xx[1069] = xx[892];
  pm_math_matrix3x3PostCross(xx + 1313, xx + 1067, xx + 1876);
  xx[88] = xx[1877] * state[25];
  xx[97] = xx[1880] * state[25];
  xx[279] = xx[1883] * state[25];
  xx[280] = xx[1876] * state[25];
  xx[329] = xx[1879] * state[25];
  xx[892] = xx[1882] * state[25];
  xx[1313] = xx[1380] - (xx[88] * xx[440] + xx[516] * xx[97] + xx[549] * xx[279]);
  xx[1314] = xx[1381] + xx[280] * xx[440] + xx[516] * xx[329] + xx[549] * xx[892];
  xx[1315] = xx[1382];
  xx[1316] = xx[1383] - (xx[550] * xx[88] + xx[97] * xx[442] + xx[552] * xx[279]);
  xx[1317] = xx[1384] + xx[550] * xx[280] + xx[329] * xx[442] + xx[552] * xx[892];
  xx[1318] = xx[1385];
  xx[1319] = xx[1386] - (xx[553] * xx[88] + xx[517] * xx[97] + xx[279] * xx[491]);
  xx[1320] = xx[1387] + xx[553] * xx[280] + xx[517] * xx[329] + xx[892] * xx[491];
  xx[1321] = xx[1388];
  pm_math_matrix3x3Compose(xx + 699, xx + 1313, xx + 1380);
  xx[88] = xx[1849] + xx[1380];
  xx[97] = xx[1852] + xx[1383];
  xx[279] = xx[1850] + xx[1381];
  xx[280] = xx[1853] + xx[1384];
  xx[329] = xx[1851] + xx[1382];
  xx[892] = xx[1854] + xx[1385];
  xx[1313] = xx[1508] + xx[88] * xx[670] - xx[97] * xx[86];
  xx[1314] = xx[1509] + xx[279] * xx[670] - xx[280] * xx[86];
  xx[1315] = xx[1510] + xx[329] * xx[670] - xx[892] * xx[86];
  xx[1316] = xx[1511] + xx[97] * xx[542] - xx[88] * xx[86];
  xx[1317] = xx[1512] + xx[280] * xx[542] - xx[279] * xx[86];
  xx[1318] = xx[1513] + xx[892] * xx[542] - xx[329] * xx[86];
  xx[1319] = xx[1514] - (xx[1855] + xx[1386]);
  xx[1320] = xx[1515] - (xx[1856] + xx[1387]);
  xx[1321] = xx[1516] - (xx[1857] + xx[1388]);
  pm_math_matrix3x3Compose(xx + 2158, xx + 1313, xx + 1380);
  xx[88] = xx[12] * xx[256] * state[25] * state[25];
  xx[97] = xx[255] * state[25] * state[25];
  xx[255] = xx[12] * xx[283] * state[25] * state[25];
  xx[1313] = xx[1299] - (xx[326] * xx[372] + xx[413] * xx[262] + xx[321] * xx
    [416]) + xx[1351] + xx[1471] + xx[328] * xx[645] - xx[694] * xx[330] - (xx
    [173] * xx[332] - xx[218] * xx[936]) + (xx[1488] + xx[1380]) * xx[12];
  xx[1314] = xx[1300] - (xx[88] * xx[372] + xx[413] * xx[97] + xx[255] * xx[416])
    + xx[1352] + xx[1472] + xx[645] * xx[327] - xx[331] * xx[694] - (xx[1072] *
    xx[173] - xx[218] * xx[334]) + (xx[1489] + xx[1381]) * xx[12];
  xx[1315] = xx[1301] + xx[1353] + xx[1473] + xx[914] * xx[645] - xx[325] * xx
    [694] + xx[173] * xx[333] + xx[218] * xx[919] + (xx[1490] + xx[1382]) * xx
    [12];
  xx[1316] = xx[1302] - (xx[136] * xx[326] + xx[262] * xx[137] + xx[127] * xx
    [321]) + xx[1354] + xx[1474] + xx[128] * xx[330] + xx[328] * xx[141] - (xx
    [143] * xx[332] + xx[153] * xx[936]) + (xx[1491] + xx[1383]) * xx[12];
  xx[1317] = xx[1303] - (xx[88] * xx[136] + xx[97] * xx[137] + xx[127] * xx[255])
    + xx[1355] + xx[1475] + xx[331] * xx[128] + xx[141] * xx[327] - (xx[143] *
    xx[1072] + xx[153] * xx[334]) + (xx[1492] + xx[1384]) * xx[12];
  xx[1318] = xx[1304] + xx[1356] + xx[1476] + xx[325] * xx[128] + xx[914] * xx
    [141] + xx[143] * xx[333] - xx[919] * xx[153] + (xx[1493] + xx[1385]) * xx
    [12];
  xx[1319] = xx[1305] - (xx[154] * xx[326] + xx[262] * xx[155] + xx[321] * xx
    [129]) + xx[1357] + xx[1477] + xx[130] * xx[330] - xx[328] * xx[140] - (xx
    [156] * xx[936] - xx[157] * xx[332]) + (xx[1494] + xx[1386]) * xx[12];
  xx[1320] = xx[1306] - (xx[154] * xx[88] + xx[155] * xx[97] + xx[255] * xx[129])
    + xx[1358] + xx[1478] + xx[331] * xx[130] - xx[140] * xx[327] - (xx[156] *
    xx[334] - xx[157] * xx[1072]) + (xx[1495] + xx[1387]) * xx[12];
  xx[1321] = xx[1307] + xx[1359] + xx[1479] + xx[325] * xx[130] - xx[914] * xx
    [140] - (xx[157] * xx[333] + xx[156] * xx[919]) + (xx[1496] + xx[1388]) *
    xx[12];
  pm_math_matrix3x3Xform(xx + 1313, xx + 1019, xx + 325);
  pm_math_matrix3x3Xform(xx + 1336, xx + 336, xx + 328);
  xx[331] = xx[328] + xx[111];
  xx[332] = xx[329] + xx[69];
  xx[333] = xx[330] + xx[105];
  pm_math_quatXform(xx + 123, xx + 331, xx + 328);
  pm_math_matrix3x3Xform(xx + 1858, xx + 1081, xx + 331);
  xx[336] = xx[331] + xx[180];
  xx[337] = xx[332] + xx[181];
  xx[338] = xx[333] + xx[182];
  pm_math_quatXform(xx + 119, xx + 336, xx + 331);
  pm_math_matrix3x3Xform(xx + 2122, xx + 1110, xx + 336);
  xx[917] = xx[336] + xx[239];
  xx[918] = xx[337] + xx[240];
  xx[919] = xx[338] + xx[241];
  pm_math_quatXform(xx + 115, xx + 917, xx + 336);
  xx[88] = xx[1101] * xx[417] - xx[1103] * xx[693];
  xx[97] = xx[1103] * xx[417] - xx[1101] * xx[575];
  xx[255] = xx[113] * xx[97];
  xx[256] = xx[113] * xx[88];
  xx[262] = xx[109] * xx[97] + xx[88] * xx[104];
  xx[917] = - xx[255];
  xx[918] = xx[256];
  xx[919] = - xx[262];
  pm_math_cross3(xx + 214, xx + 917, xx + 1009);
  xx[917] = - (xx[322] * xx[68]);
  xx[918] = xx[68] * xx[320] + xx[62] * xx[323];
  xx[919] = xx[322] * xx[62];
  pm_math_quatXform(xx + 76, xx + 917, xx + 320);
  xx[279] = xx[177] + xx[320];
  pm_math_cross3(xx + 49, xx + 1081, xx + 917);
  xx[280] = xx[183] + xx[321];
  xx[283] = xx[322] - xx[197];
  xx[320] = xx[279] + xx[917];
  xx[321] = xx[280] + xx[918];
  xx[322] = xx[283] + xx[919];
  pm_math_quatXform(xx + 53, xx + 320, xx + 917);
  xx[320] = xx[200] + xx[917];
  pm_math_cross3(xx + 23, xx + 1110, xx + 321);
  xx[334] = xx[201] + xx[918];
  xx[892] = xx[202] + xx[919];
  xx[917] = xx[320] + xx[321];
  xx[918] = xx[334] + xx[322];
  xx[919] = xx[892] + xx[323];
  pm_math_quatXform(xx + 8, xx + 917, xx + 321);
  xx[914] = xx[206] + xx[321];
  xx[917] = xx[914] - xx[1101] * state[1];
  xx[321] = xx[207] + xx[322];
  xx[322] = xx[321] + xx[1103] * state[1];
  xx[323] = xx[322] * xx[15] + xx[16] * xx[917];
  xx[918] = (xx[917] - xx[12] * xx[323] * xx[16]) * inputDot[0];
  xx[917] = xx[113] * xx[918];
  xx[919] = (xx[322] - xx[12] * xx[323] * xx[15]) * inputDot[0];
  xx[322] = xx[113] * xx[919];
  xx[323] = xx[919] * xx[104] - xx[109] * xx[918];
  xx[1019] = - xx[917];
  xx[1020] = - xx[322];
  xx[1021] = xx[323];
  pm_math_cross3(xx + 214, xx + 1019, xx + 1067);
  xx[925] = xx[321] * state[1];
  xx[321] = xx[914] * state[1];
  xx[914] = xx[925] * xx[16] - xx[15] * xx[321];
  xx[1019] = xx[320];
  xx[1020] = xx[334];
  xx[1021] = xx[892];
  pm_math_cross3(xx + 23, xx + 1019, xx + 1070);
  pm_math_quatXform(xx + 8, xx + 1070, xx + 1019);
  xx[1070] = xx[279];
  xx[1071] = xx[280];
  xx[1072] = xx[283];
  pm_math_cross3(xx + 49, xx + 1070, xx + 1081);
  pm_math_quatXform(xx + 53, xx + 1081, xx + 1070);
  pm_math_quatXform(xx + 8, xx + 1070, xx + 1081);
  xx[279] = xx[1019] + xx[1081];
  xx[280] = xx[1020] + xx[1082];
  xx[283] = xx[280] * xx[15] + xx[279] * xx[16];
  xx[320] = xx[1021] + xx[1083];
  xx[1019] = xx[12] * xx[16] * xx[914] - xx[925] + xx[279] - xx[12] * xx[283] *
    xx[16];
  xx[1020] = xx[321] + xx[12] * xx[15] * xx[914] + xx[280] - xx[12] * xx[283] *
    xx[15];
  xx[1021] = xx[320] - (xx[15] * xx[320] * xx[15] + xx[320] * xx[16] * xx[16]) *
    xx[12];
  pm_math_quatXform(xx + 841, xx + 1019, xx + 1070);
  pm_math_quatInverseXform(xx + 990, xx + 344, xx + 1019);
  xx[279] = xx[199] + xx[335] * xx[1021];
  xx[1019] = xx[12] * (xx[1040] - xx[1042]);
  xx[1020] = (xx[1123] + xx[1056]) * xx[12];
  xx[1021] = (xx[1086] + xx[1107]) * xx[12] - xx[172];
  pm_math_cross3(xx + 1019, xx + 1577, xx + 1081);
  pm_math_quatXform(xx + 1191, xx + 1081, xx + 1019);
  xx[199] = xx[1108] * xx[1552];
  xx[280] = xx[1552] * xx[1122];
  xx[283] = xx[1108] * xx[1487] + xx[1524] * xx[1122];
  xx[1081] = xx[199];
  xx[1082] = xx[280];
  xx[1083] = - xx[283];
  pm_math_cross3(xx + 1584, xx + 1081, xx + 1096);
  xx[320] = xx[1527] * xx[1074];
  xx[321] = xx[1048] * xx[1487];
  xx[334] = (xx[1146] * xx[1146] * inputDot[5] + xx[1147] * inputDot[5] * xx
             [1147]) * xx[12] - inputDot[5] + state[56];
  xx[892] = xx[334] * xx[1566];
  xx[914] = xx[334] * xx[1567];
  xx[925] = xx[12] * (xx[1568] * xx[892] - xx[1565] * xx[914]);
  xx[926] = xx[925] + xx[1136];
  xx[931] = (xx[1565] * xx[892] + xx[1568] * xx[914]) * xx[12];
  xx[932] = xx[931] + xx[1137];
  xx[936] = xx[334] - (xx[1566] * xx[892] + xx[1567] * xx[914]) * xx[12];
  xx[892] = xx[936] + xx[1138];
  xx[1081] = xx[926];
  xx[1082] = xx[932];
  xx[1083] = xx[892];
  xx[1099] = xx[926] * xx[1608];
  xx[1100] = xx[932] * xx[1240];
  xx[1101] = xx[892] * xx[1610];
  pm_math_cross3(xx + 1081, xx + 1099, xx + 1110);
  xx[1081] = xx[925];
  xx[1082] = xx[931];
  xx[1083] = xx[936];
  pm_math_cross3(xx + 1081, xx + 1136, xx + 1099);
  xx[914] = xx[1110] + xx[1608] * xx[1099];
  xx[939] = xx[1111] + xx[1240] * xx[1100];
  xx[1022] = xx[1112] + xx[1610] * xx[1101];
  xx[1081] = xx[914];
  xx[1082] = xx[939];
  xx[1083] = xx[1022];
  xx[1099] = xx[925] + xx[926];
  xx[1100] = xx[931] + xx[932];
  xx[1101] = xx[936] + xx[892];
  pm_math_cross3(xx + 1099, xx + 1155, xx + 1110);
  xx[892] = xx[334] * xx[334] * xx[1581];
  xx[925] = xx[1568] * xx[892];
  xx[926] = xx[334] * xx[334] * xx[1580];
  xx[334] = xx[1568] * xx[926];
  xx[931] = xx[1567] * xx[926] - xx[1566] * xx[892];
  xx[1099] = xx[925];
  xx[1100] = - xx[334];
  xx[1101] = xx[931];
  pm_math_cross3(xx + 1566, xx + 1099, xx + 1128);
  xx[932] = (xx[1110] + xx[12] * (xx[1128] - xx[1565] * xx[925]) - xx[926]) *
    xx[558];
  xx[925] = (xx[1111] + (xx[1565] * xx[334] + xx[1129]) * xx[12] - xx[892]) *
    xx[558];
  xx[334] = (xx[1112] + xx[12] * (xx[1130] - xx[1565] * xx[931])) * xx[558];
  xx[1099] = xx[932];
  xx[1100] = xx[925];
  xx[1101] = xx[334];
  xx[892] = pm_math_dot3(xx + 1605, xx + 1081) + pm_math_dot3(xx + 1615, xx +
    1099);
  xx[926] = pm_math_dot3(xx + 1629, xx + 1081) + pm_math_dot3(xx + 1632, xx +
    1099);
  xx[931] = pm_math_dot3(xx + 1644, xx + 1081) + pm_math_dot3(xx + 1647, xx +
    1099);
  xx[1081] = - xx[892];
  xx[1082] = - xx[926];
  xx[1083] = - xx[931];
  solveSymmetricPosDef(xx + 1654, xx + 1081, 3, 1, xx + 1099, xx + 1110);
  xx[1081] = xx[914] + xx[1099] * xx[1609] + xx[1100] * xx[1563] - xx[1101] *
    xx[1591];
  xx[1082] = xx[939] - xx[1099] * xx[1562] + xx[1100] * xx[1561] + xx[1101] *
    xx[1600];
  xx[1083] = xx[1022] + xx[1099] * xx[1611] - xx[1100] * xx[1602] + xx[1101] *
    xx[1560];
  pm_math_quatXform(xx + 1565, xx + 1081, xx + 1110);
  xx[1081] = xx[932] + xx[1099] * xx[1604] + xx[1100] * xx[1601] + xx[1101] *
    xx[1564];
  xx[1082] = xx[925] + xx[1099] * xx[1618] + xx[1100] * xx[1623] + xx[1101] *
    xx[1625];
  xx[1083] = xx[334] + xx[1099] * xx[1619] + xx[1100] * xx[1624] + xx[1101] *
    xx[1639];
  pm_math_quatXform(xx + 1565, xx + 1081, xx + 1128);
  pm_math_cross3(xx + 1580, xx + 1128, xx + 1081);
  xx[936] = xx[1702] - xx[1680];
  xx[1024] = xx[1102] * xx[1043];
  xx[1028] = xx[1024] * xx[1147];
  xx[1040] = xx[12] * xx[1028] * xx[1147] - xx[1024];
  xx[1024] = xx[12] * xx[1146] * xx[1028];
  xx[1028] = xx[1703] - xx[1683];
  xx[1042] = xx[936] * xx[1040] + xx[1024] * xx[1028];
  xx[1056] = (xx[1146] * xx[1146] * inputDdot[5] + xx[1147] * inputDdot[5] * xx
              [1147]) * xx[12] - inputDdot[5];
  xx[1073] = xx[1048] * inputDdot[5] + xx[1102] * inputDdot[5];
  xx[1081] = xx[1048] * xx[1043];
  xx[1082] = xx[1146] * xx[1073] + xx[1081] * xx[1147];
  xx[1086] = xx[12] * xx[1082] * xx[1147] - xx[1081];
  xx[1081] = xx[12] * xx[1082] * xx[1146] - xx[1073];
  xx[1073] = xx[1145] / xx[1569] * xx[1056] + xx[936] / xx[1569] * xx[1086] +
    xx[1028] / xx[1569] * xx[1081];
  xx[936] = (xx[1112] + xx[1083] + xx[1042]) / xx[1569] + xx[1073];
  xx[1028] = xx[1056] - xx[936];
  xx[1082] = xx[1566] * xx[1028];
  xx[1083] = xx[1567] * xx[1028];
  xx[1110] = xx[12] * (xx[1568] * xx[1082] - xx[1565] * xx[1083]);
  xx[1111] = (xx[1565] * xx[1082] + xx[1568] * xx[1083]) * xx[12];
  xx[1112] = xx[1028] - (xx[1566] * xx[1082] + xx[1567] * xx[1083]) * xx[12];
  xx[1082] = xx[1086] + xx[1040];
  xx[1040] = xx[1082] - xx[1581] * xx[1028];
  xx[1083] = xx[1081] + xx[1024];
  xx[1024] = xx[1083] + xx[1580] * xx[1028];
  xx[1028] = xx[1024] * xx[1568];
  xx[1081] = xx[1568] * xx[1040];
  xx[1086] = xx[1024] * xx[1566] - xx[1567] * xx[1040];
  xx[1128] = - xx[1028];
  xx[1129] = xx[1081];
  xx[1130] = xx[1086];
  pm_math_cross3(xx + 1566, xx + 1128, xx + 1136);
  xx[1128] = xx[1040] + (xx[1565] * xx[1028] + xx[1136]) * xx[12];
  xx[1129] = xx[1024] + xx[12] * (xx[1137] - xx[1565] * xx[1081]);
  xx[1130] = xx[12] * (xx[1138] - xx[1565] * xx[1086]);
  xx[1024] = xx[1099] - (pm_math_dot3(xx + 1675, xx + 1110) + pm_math_dot3(xx +
    1687, xx + 1128));
  xx[1028] = xx[1100] - (pm_math_dot3(xx + 1693, xx + 1110) + pm_math_dot3(xx +
    1696, xx + 1128));
  xx[1040] = xx[1101] - (pm_math_dot3(xx + 1699, xx + 1110) + pm_math_dot3(xx +
    1704, xx + 1128));
  xx[1081] = xx[1208] * xx[16] - xx[15] * xx[1207];
  xx[1086] = xx[1209] * xx[16] - xx[15] * xx[1206];
  xx[1099] = xx[1206] * xx[16] + xx[15] * xx[1209];
  xx[1100] = xx[15] * xx[1208] + xx[1207] * xx[16];
  xx[1128] = - xx[1081];
  xx[1129] = xx[1086];
  xx[1130] = xx[1099];
  xx[1131] = - xx[1100];
  pm_math_quatCompose(xx + 841, xx + 1128, xx + 1140);
  xx[1101] = xx[1099] * xx[1081];
  xx[1102] = xx[1100] * xx[1086];
  xx[1103] = xx[12] * (xx[1101] - xx[1102]);
  xx[1107] = xx[1081] * xx[1086];
  xx[1110] = xx[1099] * xx[1100];
  xx[1111] = xx[1086] * xx[1086];
  xx[1112] = xx[1099] * xx[1099];
  xx[1128] = xx[1103];
  xx[1129] = - ((xx[1107] + xx[1110]) * xx[12]);
  xx[1130] = xx[172] - (xx[1111] + xx[1112]) * xx[12];
  pm_math_cross3(xx + 1128, xx + 1113, xx + 1136);
  pm_math_quatXform(xx + 1140, xx + 1136, xx + 1128);
  xx[1123] = xx[1094] * xx[15] + xx[1104] * xx[16];
  xx[1131] = xx[1104] - xx[12] * xx[1123] * xx[16] + xx[230];
  xx[230] = xx[1131] * xx[113];
  xx[1136] = xx[1094] - xx[12] * xx[1123] * xx[15];
  xx[1123] = xx[113] * xx[1136];
  xx[1137] = xx[1136] * xx[104] - xx[1131] * xx[109];
  xx[1145] = - xx[230];
  xx[1146] = - xx[1123];
  xx[1147] = xx[1137];
  pm_math_cross3(xx + 214, xx + 1145, xx + 1155);
  xx[1138] = xx[1762] * xx[1762];
  xx[1145] = xx[1672] * xx[1762];
  xx[1146] = xx[13] * xx[1653];
  xx[1147] = xx[1672] * xx[13];
  xx[1191] = xx[1762] * xx[1653];
  xx[1192] = xx[1672] * xx[1653];
  xx[1193] = xx[13] * xx[1762];
  xx[1299] = (xx[1138] + xx[13] * xx[13]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[1145] + xx[1146]);
  xx[1301] = - ((xx[1147] - xx[1191]) * xx[12]);
  xx[1302] = - ((xx[1145] - xx[1146]) * xx[12]);
  xx[1303] = (xx[1138] + xx[1653] * xx[1653]) * xx[12] - xx[172];
  xx[1304] = - (xx[12] * (xx[1192] + xx[1193]));
  xx[1305] = - (xx[12] * (xx[1191] + xx[1147]));
  xx[1306] = (xx[1193] - xx[1192]) * xx[12];
  xx[1307] = (xx[1138] + xx[1672] * xx[1672]) * xx[12] - xx[172];
  xx[1145] = - state[70];
  xx[1146] = - state[71];
  xx[1147] = - state[72];
  pm_math_quatInverseXform(xx + 1719, xx + 1145, xx + 1191);
  xx[13] = xx[1191] * xx[1770] - xx[1193] * xx[1764];
  xx[1138] = xx[1192] * xx[1764] - xx[1191] * xx[1707];
  xx[1145] = xx[1193] * xx[1707] - xx[1192] * xx[1770];
  xx[1146] = xx[1191] * xx[1663] - xx[1193] * xx[1673];
  xx[1147] = xx[1192] * xx[1673] - xx[1191] * xx[1652];
  xx[1194] = xx[1193] * xx[1652] - xx[1192] * xx[1663];
  xx[1201] = xx[1191] * xx[1679] - xx[1193] * xx[1678];
  xx[1202] = xx[1192] * xx[1678] - xx[1191] * xx[1674];
  xx[1210] = xx[1193] * xx[1674] - xx[1192] * xx[1679];
  xx[1313] = xx[1193] * xx[13] - xx[1192] * xx[1138];
  xx[1314] = xx[1191] * xx[1138] - xx[1193] * xx[1145];
  xx[1315] = xx[1192] * xx[1145] - xx[1191] * xx[13];
  xx[1316] = xx[1193] * xx[1146] - xx[1192] * xx[1147];
  xx[1317] = xx[1191] * xx[1147] - xx[1193] * xx[1194];
  xx[1318] = xx[1192] * xx[1194] - xx[1191] * xx[1146];
  xx[1319] = xx[1193] * xx[1201] - xx[1192] * xx[1202];
  xx[1320] = xx[1191] * xx[1202] - xx[1193] * xx[1210];
  xx[1321] = xx[1192] * xx[1210] - xx[1191] * xx[1201];
  pm_math_matrix3x3Compose(xx + 1299, xx + 1313, xx + 1351);
  xx[13] = xx[12] * xx[1204] * xx[1205] * state[65] * state[65];
  xx[1138] = xx[1668] * xx[1667];
  xx[1145] = xx[1664] * xx[1628];
  xx[1146] = xx[1138] - xx[1145];
  xx[1147] = xx[12] * xx[1146];
  xx[1194] = (xx[12] * xx[1204] * xx[1204] - xx[172]) * state[65] * state[65];
  xx[1201] = xx[1668] * xx[1668];
  xx[1202] = (xx[1201] + xx[1628] * xx[1628]) * xx[12] - xx[172];
  xx[1210] = xx[13] * xx[1147] - xx[1194] * xx[1202];
  xx[1213] = (xx[12] * xx[1205] * xx[1205] - xx[172]) * state[65] * state[65];
  xx[1214] = xx[13] * xx[1202] - xx[1147] * xx[1213];
  xx[1215] = xx[1202] * inputDot[2] * inputDot[2];
  xx[1216] = xx[1721] * xx[1205] - xx[1204] * xx[1720];
  xx[1228] = xx[1216] * xx[1216];
  xx[1231] = xx[1722] * xx[1205] - xx[1204] * xx[1719];
  xx[1234] = xx[1231] * xx[1231];
  xx[1235] = (xx[1228] + xx[1234]) * xx[12] - xx[172];
  xx[1236] = xx[12] * xx[1146] * inputDot[2] * inputDot[2];
  xx[1146] = xx[1719] * xx[1205] + xx[1204] * xx[1722];
  xx[1237] = xx[1146] * xx[1231];
  xx[1247] = xx[1204] * xx[1721] + xx[1720] * xx[1205];
  xx[1248] = xx[1247] * xx[1216];
  xx[1249] = (xx[1237] + xx[1248]) * xx[12];
  xx[1254] = - xx[1668];
  xx[1255] = xx[1735];
  xx[1256] = xx[1664];
  xx[1257] = xx[1667];
  xx[1264] = - xx[1216];
  xx[1265] = xx[1231];
  xx[1266] = xx[1146];
  xx[1267] = - xx[1247];
  pm_math_quatCompose(xx + 1254, xx + 1264, xx + 1277);
  xx[1254] = xx[1277] * xx[1277];
  xx[1255] = xx[1278] * xx[1279];
  xx[1256] = xx[1277] * xx[1280];
  xx[1257] = xx[1278] * xx[1280];
  xx[1258] = xx[1277] * xx[1279];
  xx[1260] = xx[1279] * xx[1280];
  xx[1261] = xx[1277] * xx[1278];
  xx[1299] = (xx[1254] + xx[1278] * xx[1278]) * xx[12] - xx[172];
  xx[1300] = xx[12] * (xx[1255] - xx[1256]);
  xx[1301] = (xx[1257] + xx[1258]) * xx[12];
  xx[1302] = (xx[1255] + xx[1256]) * xx[12];
  xx[1303] = (xx[1254] + xx[1279] * xx[1279]) * xx[12] - xx[172];
  xx[1304] = xx[12] * (xx[1260] - xx[1261]);
  xx[1305] = xx[12] * (xx[1257] - xx[1258]);
  xx[1306] = (xx[1260] + xx[1261]) * xx[12];
  xx[1307] = (xx[1254] + xx[1280] * xx[1280]) * xx[12] - xx[172];
  xx[1254] = xx[1231] * inputDot[2];
  xx[1255] = xx[1146] * inputDot[2];
  xx[1256] = xx[12] * (xx[1247] * xx[1254] - xx[1255] * xx[1216]);
  xx[1257] = (xx[1254] * xx[1216] + xx[1247] * xx[1255]) * xx[12];
  xx[1258] = (xx[1254] * xx[1231] + xx[1146] * xx[1255]) * xx[12] - inputDot[2];
  pm_math_matrix3x3PostCross(xx + 1299, xx + 1256, xx + 1380);
  xx[1254] = xx[1720] * state[65];
  xx[1255] = xx[1721] * state[65];
  xx[1256] = xx[12] * (xx[1722] * xx[1254] - xx[1719] * xx[1255]);
  xx[1257] = (xx[1719] * xx[1254] + xx[1722] * xx[1255]) * xx[12];
  xx[1258] = state[65] - (xx[1720] * xx[1254] + xx[1721] * xx[1255]) * xx[12];
  xx[1264] = xx[1256] + xx[1191];
  xx[1265] = xx[1257] + xx[1192];
  xx[1266] = xx[1258] + xx[1193];
  pm_math_matrix3x3PostCross(xx + 1380, xx + 1264, xx + 1299);
  xx[1254] = xx[1628] * xx[1667];
  xx[1255] = xx[1668] * xx[1664];
  xx[1260] = xx[1145] + xx[1138];
  xx[1138] = xx[1260] * xx[12];
  xx[1145] = (xx[1201] + xx[1664] * xx[1664]) * xx[12] - xx[172];
  xx[1261] = xx[1664] * xx[1667];
  xx[1264] = xx[1668] * xx[1628];
  xx[1265] = xx[1255] - xx[1254];
  xx[1266] = xx[12] * xx[1265];
  xx[1267] = xx[1261] + xx[1264];
  xx[1275] = xx[1267] * xx[12];
  xx[1380] = xx[1202];
  xx[1381] = xx[1147];
  xx[1382] = - ((xx[1254] + xx[1255]) * xx[12]);
  xx[1383] = - xx[1138];
  xx[1384] = xx[1145];
  xx[1385] = xx[12] * (xx[1261] - xx[1264]);
  xx[1386] = xx[1266];
  xx[1387] = xx[1275];
  xx[1388] = (xx[1201] + xx[1667] * xx[1667]) * xx[12] - xx[172];
  xx[1147] = xx[12] * (xx[1237] - xx[1248]);
  xx[1201] = xx[1247] * xx[1231];
  xx[1202] = xx[1146] * xx[1216];
  xx[1237] = (xx[1201] + xx[1202]) * xx[12];
  xx[1248] = xx[1146] * xx[1146];
  xx[1254] = (xx[1228] + xx[1248]) * xx[12] - xx[172];
  xx[1255] = xx[1216] * xx[1231];
  xx[1216] = xx[1247] * xx[1146];
  xx[1146] = xx[12] * (xx[1255] - xx[1216]);
  xx[1471] = xx[1235];
  xx[1472] = xx[1147];
  xx[1473] = - xx[1237];
  xx[1474] = xx[1249];
  xx[1475] = xx[1254];
  xx[1476] = xx[1146];
  xx[1477] = xx[12] * (xx[1202] - xx[1201]);
  xx[1478] = - ((xx[1216] + xx[1255]) * xx[12]);
  xx[1479] = (xx[1228] + xx[1247] * xx[1247]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 1471, xx + 1256, xx + 1488);
  pm_math_matrix3x3PostCross(xx + 1488, xx + 1191, xx + 1471);
  pm_math_matrix3x3Compose(xx + 1380, xx + 1471, xx + 1488);
  xx[1228] = xx[13] * xx[1145] + xx[1194] * xx[1138];
  xx[1231] = xx[13] * xx[1138] + xx[1213] * xx[1145];
  xx[1138] = xx[1145] * inputDot[2] * inputDot[2];
  xx[1145] = xx[12] * xx[1260] * inputDot[2] * inputDot[2];
  xx[1247] = xx[13] * xx[1275] - xx[1266] * xx[1194];
  xx[1256] = xx[13] * xx[1266] - xx[1213] * xx[1275];
  xx[1257] = xx[12] * xx[1265] * inputDot[2] * inputDot[2];
  xx[1258] = xx[12] * xx[1267] * inputDot[2] * inputDot[2];
  xx[1380] = xx[1351] + xx[1764] * xx[1210] + xx[1673] * xx[1214] - (xx[1215] *
    xx[1235] + xx[1236] * xx[1249]) + (xx[1299] + xx[1488]) * xx[12];
  xx[1381] = xx[1352] + xx[1707] * xx[1210] + xx[1652] * xx[1214] - (xx[1147] *
    xx[1215] + xx[1236] * xx[1254]) + (xx[1300] + xx[1489]) * xx[12];
  xx[1382] = xx[1353] + xx[1770] * xx[1210] + xx[1663] * xx[1214] + xx[1215] *
    xx[1237] - xx[1236] * xx[1146] + (xx[1301] + xx[1490]) * xx[12];
  xx[1383] = xx[1354] + xx[1764] * xx[1228] - xx[1673] * xx[1231] - (xx[1249] *
    xx[1138] - xx[1145] * xx[1235]) + (xx[1302] + xx[1491]) * xx[12];
  xx[1384] = xx[1355] + xx[1707] * xx[1228] - xx[1652] * xx[1231] - (xx[1138] *
    xx[1254] - xx[1147] * xx[1145]) + (xx[1303] + xx[1492]) * xx[12];
  xx[1385] = xx[1356] + xx[1770] * xx[1228] - xx[1663] * xx[1231] - (xx[1145] *
    xx[1237] + xx[1146] * xx[1138]) + (xx[1304] + xx[1493]) * xx[12];
  xx[1386] = xx[1357] + xx[1764] * xx[1247] + xx[1673] * xx[1256] - (xx[1257] *
    xx[1235] + xx[1258] * xx[1249]) + (xx[1305] + xx[1494]) * xx[12];
  xx[1387] = xx[1358] + xx[1707] * xx[1247] + xx[1652] * xx[1256] - (xx[1147] *
    xx[1257] + xx[1258] * xx[1254]) + (xx[1306] + xx[1495]) * xx[12];
  xx[1388] = xx[1359] + xx[1770] * xx[1247] + xx[1663] * xx[1256] + xx[1257] *
    xx[1237] - xx[1146] * xx[1258] + (xx[1307] + xx[1496]) * xx[12];
  pm_math_matrix3x3Xform(xx + 1380, xx + 1726, xx + 1264);
  pm_math_matrix3x3Xform(xx + 1313, xx + 1710, xx + 1288);
  pm_math_quatXform(xx + 1785, xx + 1288, xx + 1293);
  xx[1146] = state[65] * state[65];
  xx[1147] = xx[1713] * xx[1205] - xx[1714] * xx[1204];
  xx[1210] = xx[12] * xx[1147] * xx[1205];
  xx[1214] = xx[1730] * xx[13] - xx[1729] * xx[1194] + xx[1146] * (xx[1713] -
    xx[1210]);
  xx[1194] = xx[1714] + xx[12] * xx[1147] * xx[1204];
  xx[1147] = xx[1729] * xx[13] - xx[1730] * xx[1213] - xx[1146] * xx[1194];
  xx[13] = xx[1147] * xx[1667];
  xx[1146] = xx[1214] * xx[1667];
  xx[1213] = xx[1147] * xx[1628] + xx[1664] * xx[1214];
  xx[1288] = - xx[13];
  xx[1289] = xx[1146];
  xx[1290] = - xx[1213];
  pm_math_cross3(xx + 1736, xx + 1288, xx + 1299);
  xx[1228] = inputDot[2] * inputDot[2];
  xx[1231] = 0.02223265526423946;
  xx[1235] = xx[1664] * xx[1231];
  xx[1237] = xx[1231] * xx[1667];
  xx[1247] = xx[1237] * xx[1667];
  xx[1249] = xx[1204] * xx[1730] + xx[1729] * xx[1205];
  xx[1254] = xx[1210] + 0.02856734473558706;
  xx[1210] = xx[1729] - xx[12] * xx[1249] * xx[1205] + xx[1254];
  xx[1256] = xx[1730] - xx[12] * xx[1249] * xx[1204] + xx[1194];
  pm_math_cross3(xx + 1191, xx + 1710, xx + 1288);
  pm_math_quatXform(xx + 1719, xx + 1288, xx + 1302);
  xx[1249] = xx[1303] + xx[1729] * state[65];
  xx[1260] = xx[1302] - xx[1730] * state[65];
  xx[1261] = xx[1249] * xx[1204] + xx[1205] * xx[1260];
  xx[1267] = ((xx[1739] - xx[1713]) * state[65] + xx[1249] - xx[12] * xx[1261] *
              xx[1204]) * inputDot[2];
  xx[1249] = ((xx[1733] - xx[1714]) * state[65] + xx[1260] - xx[12] * xx[1261] *
              xx[1205]) * inputDot[2];
  xx[1260] = xx[1249] * xx[1667];
  xx[1261] = xx[1267] * xx[1667];
  xx[1275] = xx[1664] * xx[1267] - xx[1249] * xx[1628];
  xx[1304] = xx[1260];
  xx[1305] = xx[1261];
  xx[1306] = - xx[1275];
  pm_math_cross3(xx + 1736, xx + 1304, xx + 1307);
  xx[1283] = xx[1303] * state[65];
  xx[1285] = xx[1302] * state[65];
  xx[1302] = xx[1283] * xx[1205] - xx[1204] * xx[1285];
  xx[1303] = xx[12] * xx[1205] * xx[1302] - xx[1283];
  xx[1283] = xx[1285] + xx[12] * xx[1204] * xx[1302];
  xx[1285] = xx[1283] * xx[1667];
  xx[1302] = xx[1667] * xx[1303];
  xx[1304] = xx[1283] * xx[1628] + xx[1664] * xx[1303];
  xx[1313] = - xx[1285];
  xx[1314] = xx[1302];
  xx[1315] = - xx[1304];
  pm_math_cross3(xx + 1736, xx + 1313, xx + 1316);
  pm_math_matrix3x3Compose(xx + 1813, xx + 264, xx + 1351);
  xx[264] = xx[251] * state[27] * state[27];
  xx[251] = xx[12] * xx[259] * state[27] * state[27];
  xx[259] = xx[12] * xx[263] * state[27] * state[27];
  xx[263] = xx[1169] * xx[1169];
  xx[265] = xx[1170] * xx[1171];
  xx[266] = xx[1169] * xx[1172];
  xx[267] = xx[1170] * xx[1172];
  xx[268] = xx[1169] * xx[1171];
  xx[269] = xx[1171] * xx[1172];
  xx[270] = xx[1169] * xx[1170];
  xx[1380] = (xx[263] + xx[1170] * xx[1170]) * xx[12] - xx[172];
  xx[1381] = xx[12] * (xx[265] - xx[266]);
  xx[1382] = (xx[267] + xx[268]) * xx[12];
  xx[1383] = (xx[265] + xx[266]) * xx[12];
  xx[1384] = (xx[263] + xx[1171] * xx[1171]) * xx[12] - xx[172];
  xx[1385] = xx[12] * (xx[269] - xx[270]);
  xx[1386] = xx[12] * (xx[267] - xx[268]);
  xx[1387] = (xx[269] + xx[270]) * xx[12];
  xx[1388] = (xx[263] + xx[1172] * xx[1172]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 1867, xx + 1380, xx + 1471);
  xx[263] = xx[1183] * xx[1183];
  xx[265] = xx[1184] * xx[1185];
  xx[266] = xx[1183] * xx[1186];
  xx[267] = xx[1184] * xx[1186];
  xx[268] = xx[1183] * xx[1185];
  xx[269] = xx[1185] * xx[1186];
  xx[270] = xx[1183] * xx[1184];
  xx[1488] = (xx[263] + xx[1184] * xx[1184]) * xx[12] - xx[172];
  xx[1489] = xx[12] * (xx[265] - xx[266]);
  xx[1490] = (xx[267] + xx[268]) * xx[12];
  xx[1491] = (xx[265] + xx[266]) * xx[12];
  xx[1492] = (xx[263] + xx[1185] * xx[1185]) * xx[12] - xx[172];
  xx[1493] = xx[12] * (xx[269] - xx[270]);
  xx[1494] = xx[12] * (xx[267] - xx[268]);
  xx[1495] = (xx[269] + xx[270]) * xx[12];
  xx[1496] = (xx[263] + xx[1186] * xx[1186]) * xx[12] - xx[172];
  pm_math_matrix3x3Compose(xx + 2131, xx + 1488, xx + 1508);
  xx[263] = xx[1207] * xx[1208];
  xx[265] = xx[1206] * xx[1209];
  xx[266] = (xx[263] + xx[265]) * xx[12];
  xx[267] = xx[1206] * xx[1206];
  xx[268] = (xx[267] + xx[231]) * xx[12] - xx[172];
  xx[231] = xx[1081] * xx[1081];
  xx[269] = (xx[231] + xx[1111]) * xx[12] - xx[172];
  xx[270] = xx[1099] * xx[1086];
  xx[271] = xx[1100] * xx[1081];
  xx[272] = (xx[270] + xx[271]) * xx[12];
  xx[1111] = xx[1140] * xx[1140];
  xx[1305] = xx[1141] * xx[1142];
  xx[1306] = xx[1140] * xx[1143];
  xx[1310] = xx[1141] * xx[1143];
  xx[1311] = xx[1140] * xx[1142];
  xx[1313] = xx[1142] * xx[1143];
  xx[1314] = xx[1140] * xx[1141];
  xx[1629] = (xx[1111] + xx[1141] * xx[1141]) * xx[12] - xx[172];
  xx[1630] = xx[12] * (xx[1305] - xx[1306]);
  xx[1631] = (xx[1310] + xx[1311]) * xx[12];
  xx[1632] = (xx[1305] + xx[1306]) * xx[12];
  xx[1633] = (xx[1111] + xx[1142] * xx[1142]) * xx[12] - xx[172];
  xx[1634] = xx[12] * (xx[1313] - xx[1314]);
  xx[1635] = xx[12] * (xx[1310] - xx[1311]);
  xx[1636] = (xx[1313] + xx[1314]) * xx[12];
  xx[1637] = (xx[1111] + xx[1143] * xx[1143]) * xx[12] - xx[172];
  xx[1111] = xx[1099] * inputDot[0];
  xx[1140] = xx[1086] * inputDot[0];
  xx[1141] = xx[12] * (xx[1111] * xx[1081] - xx[1100] * xx[1140]);
  xx[1142] = - ((xx[1140] * xx[1081] + xx[1100] * xx[1111]) * xx[12]);
  xx[1143] = inputDot[0] - (xx[1140] * xx[1086] + xx[1099] * xx[1111]) * xx[12];
  pm_math_matrix3x3PostCross(xx + 1629, xx + 1141, xx + 1640);
  xx[1081] = xx[1207] * state[1];
  xx[1086] = xx[1208] * state[1];
  xx[1099] = xx[12] * (xx[1209] * xx[1081] - xx[1206] * xx[1086]);
  pm_math_quatInverseXform(xx + 1183, xx + 23, xx + 1140);
  pm_math_quatInverseXform(xx + 1169, xx + 49, xx + 1183);
  xx[1111] = xx[99] * xx[68];
  xx[1143] = xx[68] * xx[95] - xx[62] * xx[90];
  xx[90] = xx[99] * xx[62];
  xx[1169] = - xx[1111];
  xx[1170] = xx[1143];
  xx[1171] = xx[90];
  pm_math_cross3(xx + 1091, xx + 1169, xx + 1313);
  xx[95] = xx[12] * (xx[1313] + xx[96] * xx[1111]) - xx[62];
  xx[99] = xx[1183] + xx[95];
  xx[1091] = xx[1140] + xx[99];
  xx[1092] = (xx[1206] * xx[1081] + xx[1209] * xx[1086]) * xx[12];
  xx[1093] = xx[12] * (xx[1314] - xx[96] * xx[1143]);
  xx[1111] = xx[1184] + xx[1093];
  xx[1143] = xx[1141] + xx[1111];
  xx[1169] = state[1] - (xx[1207] * xx[1081] + xx[1208] * xx[1086]) * xx[12];
  xx[1081] = (xx[1315] - xx[96] * xx[90]) * xx[12] - xx[68];
  xx[90] = xx[1081] - state[27];
  xx[96] = xx[1185] + xx[90];
  xx[1086] = xx[1142] + xx[96];
  xx[1170] = xx[1099] + xx[1091];
  xx[1171] = xx[1092] + xx[1143];
  xx[1172] = xx[1169] + xx[1086];
  pm_math_matrix3x3PostCross(xx + 1640, xx + 1170, xx + 1629);
  xx[1170] = xx[12] * (xx[270] - xx[271]);
  xx[270] = (xx[1102] + xx[1101]) * xx[12];
  xx[271] = (xx[231] + xx[1112]) * xx[12] - xx[172];
  xx[1101] = xx[12] * (xx[1107] - xx[1110]);
  xx[1640] = xx[269];
  xx[1641] = xx[1170];
  xx[1642] = - xx[270];
  xx[1643] = xx[272];
  xx[1644] = xx[271];
  xx[1645] = xx[1101];
  xx[1646] = xx[1103];
  xx[1647] = - ((xx[1110] + xx[1107]) * xx[12]);
  xx[1648] = (xx[231] + xx[1100] * xx[1100]) * xx[12] - xx[172];
  xx[1206] = xx[1099];
  xx[1207] = xx[1092];
  xx[1208] = xx[1169];
  pm_math_matrix3x3PostCross(xx + 1640, xx + 1206, xx + 1813);
  xx[1206] = xx[1091];
  xx[1207] = xx[1143];
  xx[1208] = xx[1086];
  pm_math_matrix3x3PostCross(xx + 1813, xx + 1206, xx + 1640);
  xx[231] = xx[12] * (xx[263] - xx[265]);
  xx[263] = (xx[133] + xx[145]) * xx[12];
  xx[133] = (xx[267] + xx[1087]) * xx[12] - xx[172];
  xx[145] = xx[12] * (xx[148] - xx[147]);
  xx[1813] = xx[268];
  xx[1814] = xx[231];
  xx[1815] = xx[263];
  xx[1816] = xx[266];
  xx[1817] = xx[133];
  xx[1818] = xx[145];
  xx[1819] = xx[146];
  xx[1820] = (xx[148] + xx[147]) * xx[12];
  xx[1821] = (xx[267] + xx[1209] * xx[1209]) * xx[12] - xx[172];
  pm_math_matrix3x3PostCross(xx + 1813, xx + 1140, xx + 1849);
  xx[146] = xx[99];
  xx[147] = xx[1111];
  xx[148] = xx[96];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 146, xx + 1813);
  pm_math_matrix3x3PostCross(xx + 1488, xx + 1183, xx + 1849);
  xx[146] = xx[95];
  xx[147] = xx[1093];
  xx[148] = xx[90];
  pm_math_matrix3x3PostCross(xx + 1849, xx + 146, xx + 1488);
  xx[146] = xx[95];
  xx[147] = xx[1093];
  xx[148] = xx[1081];
  pm_math_matrix3x3PostCross(xx + 1380, xx + 146, xx + 1849);
  xx[90] = xx[1850] * state[27];
  xx[95] = xx[1853] * state[27];
  xx[96] = xx[1856] * state[27];
  xx[99] = xx[1849] * state[27];
  xx[146] = xx[1852] * state[27];
  xx[147] = xx[1855] * state[27];
  xx[1380] = xx[1488] - (xx[90] * xx[440] + xx[516] * xx[95] + xx[549] * xx[96]);
  xx[1381] = xx[1489] + xx[99] * xx[440] + xx[516] * xx[146] + xx[549] * xx[147];
  xx[1382] = xx[1490];
  xx[1383] = xx[1491] - (xx[550] * xx[90] + xx[95] * xx[442] + xx[552] * xx[96]);
  xx[1384] = xx[1492] + xx[550] * xx[99] + xx[146] * xx[442] + xx[552] * xx[147];
  xx[1385] = xx[1493];
  xx[1386] = xx[1494] - (xx[553] * xx[90] + xx[517] * xx[95] + xx[96] * xx[491]);
  xx[1387] = xx[1495] + xx[553] * xx[99] + xx[517] * xx[146] + xx[147] * xx[491];
  xx[1388] = xx[1496];
  pm_math_matrix3x3Compose(xx + 699, xx + 1380, xx + 1488);
  xx[90] = xx[1813] + xx[1488];
  xx[95] = xx[1816] + xx[1491];
  xx[96] = xx[1814] + xx[1489];
  xx[99] = xx[1817] + xx[1492];
  xx[146] = xx[1815] + xx[1490];
  xx[147] = xx[1818] + xx[1493];
  xx[699] = xx[1640] + xx[90] * xx[670] - xx[95] * xx[86];
  xx[700] = xx[1641] + xx[96] * xx[670] - xx[99] * xx[86];
  xx[701] = xx[1642] + xx[146] * xx[670] - xx[147] * xx[86];
  xx[702] = xx[1643] + xx[95] * xx[542] - xx[90] * xx[86];
  xx[703] = xx[1644] + xx[99] * xx[542] - xx[96] * xx[86];
  xx[704] = xx[1645] + xx[147] * xx[542] - xx[146] * xx[86];
  xx[705] = xx[1646] - (xx[1819] + xx[1494]);
  xx[706] = xx[1647] - (xx[1820] + xx[1495]);
  xx[707] = xx[1648] - (xx[1821] + xx[1496]);
  pm_math_matrix3x3Compose(xx + 2158, xx + 699, xx + 1380);
  xx[86] = xx[12] * xx[254] * state[27] * state[27];
  xx[90] = xx[253] * state[27] * state[27];
  xx[95] = xx[12] * xx[257] * state[27] * state[27];
  xx[699] = xx[1351] - (xx[264] * xx[372] + xx[413] * xx[251] + xx[259] * xx[416])
    + xx[1471] + xx[1508] + xx[266] * xx[645] - xx[694] * xx[268] - (xx[173] *
    xx[269] - xx[218] * xx[272]) + (xx[1629] + xx[1380]) * xx[12];
  xx[700] = xx[1352] - (xx[86] * xx[372] + xx[413] * xx[90] + xx[95] * xx[416])
    + xx[1472] + xx[1509] + xx[645] * xx[133] - xx[231] * xx[694] - (xx[1170] *
    xx[173] - xx[218] * xx[271]) + (xx[1630] + xx[1381]) * xx[12];
  xx[701] = xx[1353] + xx[1473] + xx[1510] + xx[145] * xx[645] - xx[263] * xx
    [694] + xx[173] * xx[270] + xx[218] * xx[1101] + (xx[1631] + xx[1382]) * xx
    [12];
  xx[702] = xx[1354] - (xx[136] * xx[264] + xx[251] * xx[137] + xx[127] * xx[259])
    + xx[1474] + xx[1511] + xx[128] * xx[268] + xx[266] * xx[141] - (xx[143] *
    xx[269] + xx[153] * xx[272]) + (xx[1632] + xx[1383]) * xx[12];
  xx[703] = xx[1355] - (xx[86] * xx[136] + xx[90] * xx[137] + xx[127] * xx[95])
    + xx[1475] + xx[1512] + xx[231] * xx[128] + xx[141] * xx[133] - (xx[143] *
    xx[1170] + xx[153] * xx[271]) + (xx[1633] + xx[1384]) * xx[12];
  xx[704] = xx[1356] + xx[1476] + xx[1513] + xx[263] * xx[128] + xx[145] * xx
    [141] + xx[143] * xx[270] - xx[1101] * xx[153] + (xx[1634] + xx[1385]) * xx
    [12];
  xx[705] = xx[1357] - (xx[154] * xx[264] + xx[251] * xx[155] + xx[259] * xx[129])
    + xx[1477] + xx[1514] + xx[130] * xx[268] - xx[266] * xx[140] - (xx[156] *
    xx[272] - xx[157] * xx[269]) + (xx[1635] + xx[1386]) * xx[12];
  xx[706] = xx[1358] - (xx[154] * xx[86] + xx[155] * xx[90] + xx[95] * xx[129])
    + xx[1478] + xx[1515] + xx[231] * xx[130] - xx[140] * xx[133] - (xx[156] *
    xx[271] - xx[157] * xx[1170]) + (xx[1636] + xx[1387]) * xx[12];
  xx[707] = xx[1359] + xx[1479] + xx[1516] + xx[263] * xx[130] - xx[145] * xx
    [140] - (xx[157] * xx[270] + xx[156] * xx[1101]) + (xx[1637] + xx[1388]) *
    xx[12];
  pm_math_matrix3x3Xform(xx + 699, xx + 1113, xx + 127);
  pm_math_matrix3x3Xform(xx + 1336, xx + 275, xx + 145);
  xx[263] = xx[145] + xx[111];
  xx[264] = xx[146] + xx[69];
  xx[265] = xx[147] + xx[105];
  pm_math_quatXform(xx + 123, xx + 263, xx + 145);
  pm_math_matrix3x3Xform(xx + 1858, xx + 1177, xx + 123);
  xx[263] = xx[123] + xx[180];
  xx[264] = xx[124] + xx[181];
  xx[265] = xx[125] + xx[182];
  pm_math_quatXform(xx + 119, xx + 263, xx + 123);
  pm_math_matrix3x3Xform(xx + 2122, xx + 1197, xx + 119);
  xx[180] = xx[119] + xx[239];
  xx[181] = xx[120] + xx[240];
  xx[182] = xx[121] + xx[241];
  pm_math_quatXform(xx + 115, xx + 180, xx + 119);
  xx[69] = xx[1094] * xx[417] - xx[1104] * xx[693];
  xx[86] = xx[1104] * xx[417] - xx[1094] * xx[575];
  xx[90] = xx[113] * xx[86];
  xx[95] = xx[113] * xx[69];
  xx[96] = xx[109] * xx[86] + xx[69] * xx[104];
  xx[115] = - xx[90];
  xx[116] = xx[95];
  xx[117] = - xx[96];
  pm_math_cross3(xx + 214, xx + 115, xx + 180);
  xx[115] = - (xx[260] * xx[68]);
  xx[116] = xx[68] * xx[258] + xx[62] * xx[261];
  xx[117] = xx[260] * xx[62];
  pm_math_quatXform(xx + 76, xx + 115, xx + 239);
  xx[62] = xx[177] + xx[239];
  pm_math_cross3(xx + 49, xx + 1177, xx + 115);
  xx[68] = xx[183] + xx[240];
  xx[99] = xx[241] - xx[197];
  xx[239] = xx[62] + xx[115];
  xx[240] = xx[68] + xx[116];
  xx[241] = xx[99] + xx[117];
  pm_math_quatXform(xx + 53, xx + 239, xx + 115);
  xx[105] = xx[200] + xx[115];
  pm_math_cross3(xx + 23, xx + 1197, xx + 239);
  xx[111] = xx[201] + xx[116];
  xx[115] = xx[202] + xx[117];
  xx[116] = xx[105] + xx[239];
  xx[117] = xx[111] + xx[240];
  xx[118] = xx[115] + xx[241];
  pm_math_quatXform(xx + 8, xx + 116, xx + 200);
  xx[116] = xx[206] + xx[200];
  xx[117] = xx[116] - xx[1094] * state[1];
  xx[118] = xx[207] + xx[201];
  xx[122] = xx[118] + xx[1104] * state[1];
  xx[126] = xx[122] * xx[15] + xx[16] * xx[117];
  xx[130] = (xx[117] - xx[12] * xx[126] * xx[16]) * inputDot[0];
  xx[117] = xx[113] * xx[130];
  xx[133] = (xx[122] - xx[12] * xx[126] * xx[15]) * inputDot[0];
  xx[122] = xx[113] * xx[133];
  xx[113] = xx[133] * xx[104] - xx[109] * xx[130];
  xx[200] = - xx[117];
  xx[201] = - xx[122];
  xx[202] = xx[113];
  pm_math_cross3(xx + 214, xx + 200, xx + 239);
  xx[104] = xx[118] * state[1];
  xx[109] = xx[116] * state[1];
  xx[116] = xx[104] * xx[16] - xx[15] * xx[109];
  xx[200] = xx[105];
  xx[201] = xx[111];
  xx[202] = xx[115];
  pm_math_cross3(xx + 23, xx + 200, xx + 214);
  pm_math_quatXform(xx + 8, xx + 214, xx + 23);
  xx[200] = xx[62];
  xx[201] = xx[68];
  xx[202] = xx[99];
  pm_math_cross3(xx + 49, xx + 200, xx + 214);
  pm_math_quatXform(xx + 53, xx + 214, xx + 49);
  pm_math_quatXform(xx + 8, xx + 49, xx + 200);
  xx[49] = xx[23] + xx[200];
  xx[50] = xx[24] + xx[201];
  xx[51] = xx[50] * xx[15] + xx[49] * xx[16];
  xx[23] = xx[25] + xx[202];
  xx[200] = xx[12] * xx[16] * xx[116] - xx[104] + xx[49] - xx[12] * xx[51] * xx
    [16];
  xx[201] = xx[109] + xx[12] * xx[15] * xx[116] + xx[50] - xx[12] * xx[51] * xx
    [15];
  xx[202] = xx[23] - (xx[15] * xx[23] * xx[15] + xx[23] * xx[16] * xx[16]) * xx
    [12];
  pm_math_quatXform(xx + 841, xx + 200, xx + 23);
  pm_math_quatInverseXform(xx + 100, xx + 344, xx + 49);
  xx[15] = xx[168] + xx[273] * xx[51];
  xx[49] = xx[12] * (xx[1201] - xx[1202]);
  xx[50] = (xx[1255] + xx[1216]) * xx[12];
  xx[51] = (xx[1234] + xx[1248]) * xx[12] - xx[172];
  pm_math_cross3(xx + 49, xx + 1726, xx + 200);
  pm_math_quatXform(xx + 1277, xx + 200, xx + 49);
  xx[16] = xx[1210] * xx[1667];
  xx[62] = xx[1667] * xx[1256];
  xx[68] = xx[1664] * xx[1256] - xx[1210] * xx[1628];
  xx[200] = xx[16];
  xx[201] = xx[62];
  xx[202] = - xx[68];
  pm_math_cross3(xx + 1736, xx + 200, xx + 214);
  xx[99] = xx[1231] * xx[1628];
  xx[104] = xx[1668] * xx[1237];
  xx[105] = (xx[1204] * xx[1204] * inputDot[2] + xx[1205] * inputDot[2] * xx
             [1205]) * xx[12] - inputDot[2];
  xx[109] = xx[105] + state[65];
  xx[111] = xx[109] * xx[1720];
  xx[115] = xx[109] * xx[1721];
  xx[116] = xx[12] * (xx[1722] * xx[111] - xx[1719] * xx[115]);
  xx[118] = xx[116] + xx[1191];
  xx[126] = (xx[1719] * xx[111] + xx[1722] * xx[115]) * xx[12];
  xx[136] = xx[126] + xx[1192];
  xx[137] = xx[109] - (xx[1720] * xx[111] + xx[1721] * xx[115]) * xx[12];
  xx[111] = xx[137] + xx[1193];
  xx[200] = xx[118];
  xx[201] = xx[136];
  xx[202] = xx[111];
  xx[257] = xx[118] * xx[29];
  xx[258] = xx[136] * xx[1240];
  xx[259] = xx[111] * xx[18];
  pm_math_cross3(xx + 200, xx + 257, xx + 263);
  xx[200] = xx[116];
  xx[201] = xx[126];
  xx[202] = xx[137];
  pm_math_cross3(xx + 200, xx + 1191, xx + 257);
  xx[115] = xx[263] + xx[29] * xx[257];
  xx[29] = xx[264] + xx[1240] * xx[258];
  xx[140] = xx[265] + xx[18] * xx[259];
  xx[200] = xx[115];
  xx[201] = xx[29];
  xx[202] = xx[140];
  xx[257] = xx[116] + xx[118];
  xx[258] = xx[126] + xx[136];
  xx[259] = xx[137] + xx[111];
  pm_math_cross3(xx + 257, xx + 1288, xx + 263);
  xx[18] = xx[109] * xx[109] * xx[1730];
  xx[111] = xx[1722] * xx[18];
  xx[116] = xx[109] * xx[109] * xx[1729];
  xx[118] = xx[1722] * xx[116];
  xx[126] = xx[1721] * xx[116] - xx[1720] * xx[18];
  xx[257] = xx[111];
  xx[258] = - xx[118];
  xx[259] = xx[126];
  pm_math_cross3(xx + 1720, xx + 257, xx + 266);
  xx[136] = (xx[263] + xx[12] * (xx[266] - xx[1719] * xx[111]) - xx[116]) * xx
    [558];
  xx[111] = (xx[264] + (xx[1719] * xx[118] + xx[267]) * xx[12] - xx[18]) * xx
    [558];
  xx[18] = (xx[265] + xx[12] * (xx[268] - xx[1719] * xx[126])) * xx[558];
  xx[257] = xx[136];
  xx[258] = xx[111];
  xx[259] = xx[18];
  xx[116] = pm_math_dot3(xx + 1757, xx + 200) + pm_math_dot3(xx + 1765, xx + 257);
  xx[118] = pm_math_dot3(xx + 1779, xx + 200) + pm_math_dot3(xx + 1782, xx + 257);
  xx[126] = pm_math_dot3(xx + 1794, xx + 200) + pm_math_dot3(xx + 1797, xx + 257);
  xx[200] = - xx[116];
  xx[201] = - xx[118];
  xx[202] = - xx[126];
  solveSymmetricPosDef(xx + 1804, xx + 200, 3, 1, xx + 257, xx + 263);
  xx[200] = xx[115] + xx[257] * xx[1760] + xx[258] * xx[1717] - xx[259] * xx
    [1743];
  xx[201] = xx[29] - xx[257] * xx[1716] + xx[258] * xx[1715] + xx[259] * xx[1752];
  xx[202] = xx[140] + xx[257] * xx[1761] - xx[258] * xx[1754] + xx[259] * xx[603];
  pm_math_quatXform(xx + 1719, xx + 200, xx + 263);
  xx[200] = xx[136] + xx[257] * xx[1756] + xx[258] * xx[1753] + xx[259] * xx
    [1718];
  xx[201] = xx[111] + xx[257] * xx[1768] + xx[258] * xx[1773] + xx[259] * xx
    [1775];
  xx[202] = xx[18] + xx[257] * xx[1769] + xx[258] * xx[1774] + xx[259] * xx[1789];
  pm_math_quatXform(xx + 1719, xx + 200, xx + 266);
  pm_math_cross3(xx + 1729, xx + 266, xx + 200);
  xx[137] = xx[1254] * inputDot[2] * inputDot[2];
  xx[141] = xx[1194] * inputDot[2] * inputDot[2];
  xx[148] = xx[137] * xx[1205] + xx[1204] * xx[141];
  xx[154] = xx[105] + xx[109];
  xx[105] = xx[12] * xx[1205] * xx[148] - xx[137] + xx[154] * xx[1713] * state
    [65];
  xx[109] = xx[12] * xx[1204] * xx[148] - xx[141] - xx[154] * xx[1714] * state
    [65];
  xx[137] = xx[1203] * xx[105] + xx[109] * xx[1681];
  xx[141] = xx[1709] * xx[105] + xx[109] * xx[1885];
  xx[148] = xx[1887] * xx[105] + xx[1744] * xx[109];
  xx[154] = (xx[1204] * xx[1204] * inputDdot[2] + xx[1205] * inputDdot[2] * xx
             [1205]) * xx[12] - inputDdot[2];
  xx[155] = xx[1194] * inputDdot[2] - xx[1231] * xx[1228];
  xx[168] = xx[1231] * inputDdot[2] + xx[1254] * inputDdot[2];
  xx[172] = xx[1205] * xx[155] - xx[1204] * xx[168];
  xx[177] = xx[155] - xx[12] * xx[172] * xx[1205];
  xx[155] = xx[168] + xx[12] * xx[172] * xx[1204];
  xx[168] = xx[1708] / xx[1771] * xx[154] + xx[1734] / xx[1771] * xx[177] - xx
    [1755] / xx[1771] * xx[155];
  xx[172] = (xx[265] + xx[202] + xx[137] - ((xx[266] + xx[141]) * xx[1714] +
              (xx[267] + xx[148]) * xx[1713])) / xx[1771] + xx[168];
  xx[183] = xx[154] - xx[172];
  xx[197] = xx[1720] * xx[183];
  xx[200] = xx[1721] * xx[183];
  xx[263] = xx[12] * (xx[1722] * xx[197] - xx[1719] * xx[200]);
  xx[264] = (xx[1719] * xx[197] + xx[1722] * xx[200]) * xx[12];
  xx[265] = xx[183] - (xx[1720] * xx[197] + xx[1721] * xx[200]) * xx[12];
  xx[197] = xx[177] + xx[172] * xx[1714] + xx[105] - xx[1730] * xx[183];
  xx[200] = xx[172] * xx[1713] - xx[155] + xx[109] + xx[1729] * xx[183];
  xx[183] = xx[200] * xx[1722];
  xx[201] = xx[1722] * xx[197];
  xx[202] = xx[200] * xx[1720] - xx[1721] * xx[197];
  xx[266] = - xx[183];
  xx[267] = xx[201];
  xx[268] = xx[202];
  pm_math_cross3(xx + 1720, xx + 266, xx + 269);
  xx[266] = xx[197] + (xx[1719] * xx[183] + xx[269]) * xx[12];
  xx[267] = xx[200] + xx[12] * (xx[270] - xx[1719] * xx[201]);
  xx[268] = xx[12] * (xx[271] - xx[1719] * xx[202]);
  xx[183] = xx[257] - (pm_math_dot3(xx + 1825, xx + 263) + pm_math_dot3(xx +
    1831, xx + 266));
  xx[197] = xx[258] - (pm_math_dot3(xx + 1834, xx + 263) + pm_math_dot3(xx +
    1840, xx + 266));
  xx[200] = xx[259] - (pm_math_dot3(xx + 1843, xx + 263) + pm_math_dot3(xx +
    1846, xx + 266));
  xx[1849] = (xx[247] + xx[12] * (xx[507] - xx[235] * xx[112]) - xx[243] - xx
              [341]) * inputDdot[0] - (xx[832] + xx[871] + xx[489] + xx[12] *
    (xx[851] - xx[318] * xx[586]) + xx[532] * ((xx[577] * xx[438] + xx[588]) *
    xx[12] - xx[534]) - (xx[437] * xx[590] - xx[684] * xx[683]) + (xx[12] * (xx
    [885] - xx[589] * xx[586]) - xx[725] + xx[746] + xx[12] * (xx[908] - xx[594]
    * xx[586])) * xx[12] - (xx[158] + xx[161] + xx[169] + xx[191] + xx[60] + xx
    [12] * (xx[463] - xx[108] * xx[112]) + xx[176] - (xx[234] * xx[173] - xx[218]
    * xx[243]) + (xx[12] * (xx[928] - xx[213] * xx[112]) - xx[219] + xx[203]) *
    xx[12])) - xx[6] * xx[220] + xx[546] * xx[228] + xx[547] * xx[296] + xx[576]
    * xx[302] + xx[237] * xx[19] + xx[238] * xx[72] + xx[441] * xx[289] - xx[290]
    * xx[227] - xx[221] * xx[291] - (xx[347] + xx[12] * (xx[373] - xx[48] * xx
    [586]) - xx[683] - xx[12] * (xx[308] * xx[438] + xx[309])) * inputDdot[1] +
    xx[755] * xx[424] - xx[776] * xx[378] - xx[777] * xx[418] - xx[598] * xx[419];
  xx[1850] = (xx[248] + xx[234] + xx[12] * (xx[508] - xx[223] * xx[112]) - xx
              [420] + xx[298]) * inputDdot[0] - (xx[833] + xx[872] + xx[382] +
    (xx[340] * xx[586] + xx[852]) * xx[12] + xx[532] * (xx[311] * xx[577] - xx
    [309]) * xx[12] - (xx[437] * xx[488] + xx[592] * xx[683]) + (xx[689] + xx[12]
    * (xx[886] - xx[596] * xx[586]) + xx[726] + (xx[595] * xx[586] + xx[909]) *
    xx[12]) * xx[12] - (xx[159] + xx[162] + xx[170] + xx[192] + xx[106] + (xx
    [110] * xx[112] + xx[464]) * xx[12] + xx[174] - (xx[234] * xx[143] + xx[153]
    * xx[243]) + (xx[217] + xx[12] * (xx[929] - xx[186] * xx[112]) + xx[204]) *
                        xx[12])) - xx[6] * xx[229] + xx[877] * xx[228] + xx[878]
    * xx[296] + xx[879] * xx[302] + xx[864] * xx[19] + xx[869] * xx[72] + xx[870]
    * xx[289] - xx[290] * xx[179] - xx[785] * xx[291] - (xx[348] + xx[437] + xx
    [12] * (xx[374] - xx[303] * xx[586]) - (xx[588] + xx[311] * xx[308]) * xx[12]
    + xx[534]) * inputDdot[1] + xx[178] * xx[424] - xx[745] * xx[378] - xx[753] *
    xx[418] - xx[867] * xx[419];
  xx[1851] = (xx[249] + (xx[295] * xx[112] + xx[509]) * xx[12] + xx[319]) *
    inputDdot[0] - (xx[834] + xx[873] + (xx[853] - xx[515] * xx[586]) * xx[12] +
                    xx[12] * (xx[311] * xx[585] + xx[577] * xx[586]) * xx[532] -
                    (xx[748] * xx[683] - xx[437] * xx[775]) + ((xx[688] * xx[586]
    + xx[887]) * xx[12] + (xx[910] - xx[752] * xx[586]) * xx[12]) * xx[12] -
                    (xx[160] + xx[163] + xx[171] + xx[193] + (xx[465] - xx[132] *
    xx[112]) * xx[12] + xx[301] - (xx[156] * xx[243] - xx[234] * xx[157]) +
                     ((xx[212] * xx[112] + xx[930]) * xx[12] + xx[205]) * xx[12]))
    - xx[6] * xx[175] + xx[468] * xx[228] + xx[513] * xx[296] + xx[514] * xx[302]
    + xx[244] * xx[19] + xx[466] * xx[72] + xx[467] * xx[289] - xx[290] * xx[226]
    - xx[291] * xx[233] - (xx[349] + (xx[304] * xx[586] + xx[375]) * xx[12] +
    (xx[585] * xx[438] - xx[308] * xx[586]) * xx[12]) * inputDdot[1] + xx[187] *
    xx[424] - xx[224] * xx[378] - xx[225] * xx[418] - xx[242] * xx[419];
  xx[1852] = (xx[470] + xx[12] * (xx[560] - xx[475] * xx[112]) - xx[476] - xx
              [341]) * inputDdot[0] - (xx[738] + xx[770] + xx[527] + xx[12] *
    (xx[778] + xx[1200] * xx[529]) + xx[584] * ((xx[1195] * xx[599] + xx[602]) *
    xx[12] - xx[587]) - (xx[612] * xx[591] + xx[604] * xx[614]) + (xx[642] +
    (xx[797] - xx[1200] * xx[615]) * xx[12] + xx[727] + xx[12] * (xx[807] + xx
    [1200] * xx[723])) * xx[12] - (xx[386] + xx[450] + xx[447] + xx[453] + xx
    [393] + xx[12] * (xx[757] - xx[421] * xx[112]) + xx[176] - (xx[474] * xx[173]
    - xx[218] * xx[476]) + (xx[12] * (xx[803] - xx[668] * xx[112]) - xx[768] +
    xx[810]) * xx[12])) - xx[940] * xx[6] + xx[815] * xx[228] + xx[830] * xx[296]
    + xx[831] * xx[302] + xx[530] * xx[19] + xx[754] * xx[72] + xx[813] * xx[289]
    - xx[290] * xx[531] + xx[620] * xx[383] - (xx[792] + xx[614] + (xx[835] -
    xx[1200] * xx[82]) * xx[12] + xx[12] * (xx[1195] * xx[469] - xx[567])) *
    inputDdot[4] + xx[1262] * xx[622] - xx[1286] * xx[667] - xx[1287] * xx[669]
    - xx[1221] * xx[749];
  xx[1853] = (xx[471] + xx[474] + xx[12] * (xx[561] - xx[473] * xx[112]) - xx
              [420] + xx[298]) * inputDdot[0] - (xx[739] + xx[771] + xx[528] +
    (xx[779] - xx[1200] * xx[566]) * xx[12] + xx[584] * (xx[567] + xx[599] * xx
    [1182]) * xx[12] - (xx[481] * xx[614] - xx[612] * xx[490]) + ((xx[798] - xx
    [1200] * xx[617]) * xx[12] - xx[611] + xx[690] + (xx[808] - xx[1200] * xx
    [724]) * xx[12]) * xx[12] - (xx[387] + xx[451] + xx[448] + xx[454] + xx[409]
    + (xx[427] * xx[112] + xx[758]) * xx[12] + xx[174] - (xx[474] * xx[143] +
    xx[153] * xx[476]) + (xx[760] + xx[12] * (xx[804] - xx[687] * xx[112]) + xx
    [811]) * xx[12])) - xx[536] * xx[6] + xx[964] * xx[228] + xx[965] * xx[296]
    + xx[966] * xx[302] + xx[954] * xx[19] + xx[955] * xx[72] + xx[960] * xx[289]
    - xx[941] * xx[290] + xx[935] * xx[383] - (xx[793] + (xx[836] - xx[1200] *
    xx[385]) * xx[12] - (xx[612] - (xx[602] + xx[469] * xx[1182]) * xx[12]) -
    xx[587]) * inputDdot[4] + xx[533] * xx[622] - xx[942] * xx[667] - xx[1253] *
    xx[669] - xx[1259] * xx[749];
  xx[1854] = (xx[472] + (xx[477] * xx[112] + xx[562]) * xx[12] + xx[319]) *
    inputDdot[0] - (xx[740] + xx[772] + (xx[1200] * xx[569] + xx[780]) * xx[12]
                    + xx[12] * (xx[600] * xx[1182] - xx[1200] * xx[599]) * xx
                    [584] - (xx[612] * xx[618] + xx[619] * xx[614]) + (xx[12] *
    (xx[799] - xx[1200] * xx[682]) + (xx[1200] * xx[747] + xx[809]) * xx[12]) *
                    xx[12] - (xx[388] + xx[452] + xx[449] + xx[455] + (xx[759] -
    xx[429] * xx[112]) * xx[12] + xx[301] - (xx[156] * xx[476] - xx[474] * xx
    [157]) + ((xx[691] * xx[112] + xx[805]) * xx[12] + xx[812]) * xx[12])) - xx
    [538] * xx[6] + xx[791] * xx[228] + xx[888] * xx[296] + xx[889] * xx[302] +
    xx[685] * xx[19] + xx[686] * xx[72] + xx[789] * xx[289] - xx[662] * xx[290]
    + xx[661] * xx[383] - (xx[794] + xx[12] * (xx[837] - xx[1200] * xx[459]) -
    (xx[1200] * xx[469] + xx[1195] * xx[600]) * xx[12]) * inputDdot[4] + xx[537]
    * xx[622] - xx[663] * xx[667] - xx[1232] * xx[669] - xx[1233] * xx[749];
  xx[1855] = (xx[874] + xx[12] * (xx[904] - xx[868] * xx[112]) - xx[884] - xx
              [341]) * inputDdot[0] - (xx[896] + xx[1003] + xx[913] + xx[12] *
    (xx[1061] - xx[1396] * xx[899]) + xx[937] * ((xx[1394] * xx[938] + xx[945]) *
    xx[12] - xx[587]) - (xx[952] * xx[933] + xx[944] * xx[956]) + (xx[989] +
    (xx[1396] * xx[962] + xx[1119]) * xx[12] + xx[1037] + xx[12] * (xx[1116] -
    xx[1396] * xx[1025])) * xx[12] - (xx[826] + xx[947] + xx[880] + xx[967] +
    xx[144] + xx[12] * (xx[999] - xx[281] * xx[112]) + xx[176] - (xx[866] * xx
    [173] - xx[218] * xx[884]) + (xx[12] * (xx[981] - xx[324] * xx[112]) - xx
    [423] + xx[1013]) * xx[12])) - xx[6] * xx[1029] + xx[924] * xx[228] + xx[927]
    * xx[296] + xx[934] * xx[302] + xx[535] * xx[19] + xx[692] * xx[72] + xx[814]
    * xx[289] - xx[893] * xx[290] + xx[912] * xx[67] - (xx[978] + xx[956] + (xx
    [1396] * xx[71] + xx[1078]) * xx[12] + xx[12] * (xx[80] - xx[1394] * xx[98]))
    * inputDdot[3] + xx[1435] * xx[796] - xx[1458] * xx[801] - xx[1459] * xx[816]
    - xx[1415] * xx[829];
  xx[1856] = (xx[875] + xx[866] + xx[12] * (xx[905] - xx[865] * xx[112]) - xx
              [420] + xx[298]) * inputDdot[0] - (xx[897] + xx[1004] + xx[900] +
    (xx[1396] * xx[920] + xx[1062]) * xx[12] - (xx[937] * (xx[80] + xx[938] *
    xx[1389]) * xx[12] + xx[952] * xx[894] + xx[946] * xx[956]) + ((xx[1396] *
    xx[974] + xx[1120]) * xx[12] - xx[951] + xx[1023] + (xx[1396] * xx[1027] +
    xx[1117]) * xx[12]) * xx[12] - (xx[827] + xx[948] + xx[881] + xx[968] + xx
    [164] + (xx[282] * xx[112] + xx[1000]) * xx[12] + xx[174] - (xx[866] * xx
    [143] + xx[153] * xx[884]) + (xx[406] + xx[12] * (xx[982] - xx[364] * xx[112])
    + xx[1014]) * xx[12])) - xx[6] * xx[901] + xx[1058] * xx[228] + xx[1059] *
    xx[296] + xx[1060] * xx[302] + xx[1049] * xx[19] + xx[1050] * xx[72] + xx
    [1054] * xx[289] - xx[290] * xx[1035] + xx[1030] * xx[67] - (xx[979] + (xx
    [1396] * xx[73] + xx[1079]) * xx[12] - (xx[952] - (xx[945] + xx[98] * xx
    [1389]) * xx[12]) - xx[587]) * inputDdot[3] + xx[895] * xx[796] - xx[1036] *
    xx[801] - xx[1428] * xx[816] - xx[1432] * xx[829];
  xx[1857] = (xx[876] + (xx[890] * xx[112] + xx[906]) * xx[12] + xx[319]) *
    inputDdot[0] - (xx[898] + xx[1005] + (xx[1396] * xx[922] + xx[1063]) * xx[12]
                    + xx[12] * (xx[1396] * xx[938] - xx[943] * xx[1389]) * xx
                    [937] - (xx[952] * xx[959] + xx[961] * xx[956]) + (xx[12] *
    (xx[1121] - xx[1396] * xx[996]) + (xx[1396] * xx[1038] + xx[1118]) * xx[12])
                    * xx[12] - (xx[828] + xx[949] + xx[882] + xx[969] + (xx[1001]
    - xx[310] * xx[112]) * xx[12] + xx[301] - (xx[156] * xx[884] - xx[866] * xx
    [157]) + ((xx[389] * xx[112] + xx[983]) * xx[12] + xx[1015]) * xx[12])) -
    xx[6] * xx[903] + xx[977] * xx[228] + xx[987] * xx[296] + xx[988] * xx[302]
    + xx[923] * xx[19] + xx[975] * xx[72] + xx[976] * xx[289] - xx[290] * xx[915]
    + xx[921] * xx[67] - (xx[980] + xx[12] * (xx[1080] - xx[1396] * xx[75]) -
    (xx[1396] * xx[98] + xx[1394] * xx[943]) * xx[12]) * inputDdot[3] + xx[902] *
    xx[796] - xx[916] * xx[801] - xx[1419] * xx[816] - xx[1420] * xx[829];
  xx[1858] = (xx[984] + xx[12] * (xx[1132] - xx[957] * xx[112]) - xx[958] - xx
              [341]) * inputDdot[0] - (xx[1149] + xx[1158] + xx[1002] + xx[12] *
    (xx[1173] - xx[1527] * xx[1032]) + xx[1043] * ((xx[1524] * xx[1053] + xx
    [1075]) * xx[12] - xx[1048]) - (xx[1108] * xx[1055] + xx[1095] * xx[1122]) +
    (xx[1165] + (xx[1527] * xx[1125] + xx[1222]) * xx[12] + xx[1189] + xx[12] *
     (xx[1218] - xx[1527] * xx[1181])) * xx[12] - (xx[325] + xx[328] + xx[331] +
    xx[336] + xx[88] + xx[12] * (xx[1009] - xx[255] * xx[112]) + xx[176] - (xx
    [953] * xx[173] - xx[218] * xx[958]) + (xx[12] * (xx[1067] - xx[917] * xx
    [112]) - xx[919] + xx[1070]) * xx[12])) - xx[1135] * xx[6] + xx[1052] * xx
    [228] + xx[1057] * xx[296] + xx[1077] * xx[302] + xx[1039] * xx[19] + xx
    [1041] * xx[72] + xx[1051] * xx[289] - xx[290] * xx[1012] + xx[995] * xx[279]
    - (xx[1019] + xx[1122] + (xx[1527] * xx[199] + xx[1096]) * xx[12] + xx[12] *
       (xx[320] - xx[1524] * xx[321])) * inputDdot[5] + xx[1590] * xx[936] - xx
    [1613] * xx[1024] - xx[1614] * xx[1028] - xx[1570] * xx[1040];
  xx[1859] = (xx[985] + xx[953] + xx[12] * (xx[1133] - xx[950] * xx[112]) - xx
              [420] + xx[298]) * inputDdot[0] - (xx[1150] + xx[1159] + xx[1031]
    + (xx[1527] * xx[1033] + xx[1174]) * xx[12] - (xx[1043] * (xx[320] + xx[1053]
    * xx[1487]) * xx[12] + xx[1108] * xx[970] + xx[1105] * xx[1122]) + ((xx[1527]
    * xx[1152] + xx[1223]) * xx[12] - xx[1088] + xx[1180] + (xx[1527] * xx[1188]
    + xx[1219]) * xx[12]) * xx[12] - (xx[326] + xx[329] + xx[332] + xx[337] +
    xx[97] + (xx[256] * xx[112] + xx[1010]) * xx[12] + xx[174] - (xx[953] * xx
    [143] + xx[153] * xx[958]) + (xx[918] + xx[12] * (xx[1068] - xx[322] * xx
    [112]) + xx[1071]) * xx[12])) - xx[998] * xx[6] + xx[1161] * xx[228] + xx
    [1162] * xx[296] + xx[1163] * xx[302] + xx[1148] * xx[19] + xx[1153] * xx[72]
    + xx[1154] * xx[289] - xx[1127] * xx[290] + xx[1139] * xx[279] - (xx[1020] +
    (xx[1527] * xx[280] + xx[1097]) * xx[12] - (xx[1108] - (xx[1075] + xx[321] *
    xx[1487]) * xx[12]) - xx[1048]) * inputDdot[5] + xx[997] * xx[936] - xx[1167]
    * xx[1024] - xx[1168] * xx[1028] - xx[1573] * xx[1040];
  xx[1860] = (xx[986] + (xx[963] * xx[112] + xx[1134]) * xx[12] + xx[319]) *
    inputDdot[0] - (xx[1151] + xx[1160] + (xx[1527] * xx[1034] + xx[1175]) * xx
                    [12] + xx[12] * (xx[1527] * xx[1053] - xx[1074] * xx[1487]) *
                    xx[1043] - (xx[1108] * xx[1126] + xx[1144] * xx[1122]) +
                    (xx[12] * (xx[1224] - xx[1527] * xx[1166]) + (xx[1527] * xx
    [1196] + xx[1220]) * xx[12]) * xx[12] - (xx[327] + xx[330] + xx[333] + xx
    [338] + (xx[1011] - xx[262] * xx[112]) * xx[12] + xx[301] - (xx[156] * xx
    [958] - xx[953] * xx[157]) + ((xx[323] * xx[112] + xx[1069]) * xx[12] + xx
    [1072]) * xx[12])) - xx[1018] * xx[6] + xx[1066] * xx[228] + xx[1084] * xx
    [296] + xx[1085] * xx[302] + xx[1026] * xx[19] + xx[1064] * xx[72] + xx[1065]
    * xx[289] - xx[1016] * xx[290] + xx[1017] * xx[279] - (xx[1021] + xx[12] *
    (xx[1098] - xx[1527] * xx[283]) - (xx[1527] * xx[321] + xx[1524] * xx[1074])
    * xx[12]) * inputDdot[5] + xx[994] * xx[936] - xx[1089] * xx[1024] - xx[1090]
    * xx[1028] - xx[1574] * xx[1040];
  xx[1861] = (xx[1128] + xx[12] * (xx[1155] - xx[230] * xx[112]) - xx[1136] -
              xx[341]) * inputDdot[0] - (xx[1264] + xx[1293] + xx[1214] + xx[12]
    * (xx[1299] + xx[1668] * xx[13]) + xx[1228] * ((xx[1664] * xx[1235] + xx
    [1247]) * xx[12] - xx[1231]) - (xx[1210] * xx[1215] + xx[1236] * xx[1256]) +
    (xx[1267] + (xx[1307] - xx[1668] * xx[1260]) * xx[12] + xx[1303] + xx[12] *
     (xx[1316] + xx[1668] * xx[1285])) * xx[12] - (xx[127] + xx[145] + xx[123] +
    xx[119] + xx[69] + xx[12] * (xx[180] - xx[90] * xx[112]) + xx[176] - (xx
    [1131] * xx[173] - xx[218] * xx[1136]) + (xx[12] * (xx[239] - xx[117] * xx
    [112]) - xx[133] + xx[23]) * xx[12])) - xx[6] * xx[1164] + xx[189] * xx[228]
    + xx[194] * xx[296] + xx[195] * xx[302] + xx[188] * xx[19] + xx[190] * xx[72]
    + xx[196] * xx[289] - xx[107] * xx[290] + xx[139] * xx[15] - (xx[49] + xx
    [1256] + (xx[214] - xx[1668] * xx[16]) * xx[12] + xx[12] * (xx[1664] * xx[99]
    - xx[104])) * inputDdot[2] + xx[1742] * xx[172] - xx[1666] * xx[183] - xx
    [1763] * xx[197] - xx[1682] * xx[200];
  xx[1862] = (xx[1129] + xx[1131] + xx[12] * (xx[1156] - xx[1123] * xx[112]) -
              xx[420] + xx[298]) * inputDdot[0] - (xx[1265] + xx[1294] + xx[1147]
    + (xx[1300] - xx[1668] * xx[1146]) * xx[12] + xx[1228] * (xx[104] + xx[1235]
    * xx[1628]) * xx[12] - (xx[1138] * xx[1256] - xx[1210] * xx[1145]) + ((xx
    [1308] - xx[1668] * xx[1261]) * xx[12] - xx[1249] + xx[1283] + (xx[1317] -
    xx[1668] * xx[1302]) * xx[12]) * xx[12] - (xx[128] + xx[146] + xx[124] + xx
    [120] + xx[86] + (xx[95] * xx[112] + xx[181]) * xx[12] + xx[174] - (xx[1131]
    * xx[143] + xx[153] * xx[1136]) + (xx[130] + xx[12] * (xx[240] - xx[122] *
    xx[112]) + xx[24]) * xx[12])) - xx[6] * xx[135] + xx[1225] * xx[228] + xx
    [1226] * xx[296] + xx[1227] * xx[302] + xx[1190] * xx[19] + xx[1211] * xx[72]
    + xx[1212] * xx[289] - xx[290] * xx[1176] + xx[1187] * xx[15] - (xx[50] +
    (xx[215] - xx[1668] * xx[62]) * xx[12] - (xx[1210] - (xx[1247] + xx[99] *
    xx[1628]) * xx[12]) - xx[1231]) * inputDdot[2] + xx[134] * xx[172] - xx[1229]
    * xx[183] - xx[1230] * xx[197] - xx[1732] * xx[200];
  xx[1863] = (xx[1130] + (xx[1137] * xx[112] + xx[1157]) * xx[12] + xx[319]) *
    inputDdot[0] - (xx[1266] + xx[1295] + (xx[1668] * xx[1213] + xx[1301]) * xx
                    [12] + xx[12] * (xx[1237] * xx[1628] - xx[1668] * xx[1235]) *
                    xx[1228] - (xx[1210] * xx[1257] + xx[1258] * xx[1256]) +
                    (xx[12] * (xx[1309] + xx[1668] * xx[1275]) + (xx[1668] * xx
    [1304] + xx[1318]) * xx[12]) * xx[12] - (xx[129] + xx[147] + xx[125] + xx
    [121] + (xx[182] - xx[96] * xx[112]) * xx[12] + xx[301] - (xx[156] * xx[1136]
    - xx[1131] * xx[157]) + ((xx[113] * xx[112] + xx[241]) * xx[12] + xx[25]) *
    xx[12])) - xx[6] * xx[138] + xx[636] * xx[228] + xx[637] * xx[296] + xx[638]
    * xx[302] + xx[482] * xx[19] + xx[483] * xx[72] + xx[484] * xx[289] - xx[290]
    * xx[1106] + xx[142] * xx[15] - (xx[51] + xx[12] * (xx[216] + xx[1668] * xx
    [68]) - (xx[1668] * xx[99] + xx[1664] * xx[1237]) * xx[12]) * inputDdot[2] +
    xx[131] * xx[172] - xx[643] * xx[183] - xx[644] * xx[197] - xx[1723] * xx
    [200];
  memcpy(xx + 2113, xx + 1888, 225 * sizeof(double));
  factorAndSolveSymmetric(xx + 2113, 15, xx + 318, ii + 0, xx + 1849, xx + 253,
    xx + 2338);
  xx[6] = (xx[114] - (xx[139] * xx[265] + xx[1187] * xx[266] + xx[267] * xx[142]))
    / xx[250];
  xx[23] = xx[89];
  xx[24] = xx[94];
  xx[25] = xx[114] - xx[52] * xx[6];
  pm_math_quatXform(xx + 100, xx + 23, xx + 48);
  xx[13] = (xx[1044] - (xx[995] * xx[262] + xx[1139] * xx[263] + xx[264] * xx
                        [1017])) / xx[278];
  xx[23] = xx[184];
  xx[24] = xx[198];
  xx[25] = xx[1044] - xx[52] * xx[13];
  pm_math_quatXform(xx + 990, xx + 23, xx + 67);
  xx[15] = (xx[1124] + xx[221] * xx[253] + xx[785] * xx[254] + xx[255] * xx[233])
    / xx[222];
  xx[23] = xx[208];
  xx[24] = xx[47];
  xx[25] = xx[1124] - xx[52] * xx[15];
  pm_math_quatXform(xx + 149, xx + 23, xx + 71);
  xx[16] = xx[91] + xx[48] + xx[971] + xx[67] + xx[1006] + xx[402] + xx[415] +
    xx[71] + xx[1045] + xx[66];
  xx[19] = (xx[1076] - (xx[912] * xx[259] + xx[1030] * xx[260] + xx[261] * xx
                        [921])) / xx[403];
  xx[23] = (xx[1109] - (xx[620] * xx[256] + xx[935] * xx[257] + xx[258] * xx[661]))
    / xx[185];
  xx[24] = xx[93] + xx[50] + xx[973] + xx[69] + xx[1008] + xx[1076] - xx[52] *
    xx[19] - xx[81] + xx[1109] - xx[52] * xx[23] + xx[87] + xx[73] + xx[1047] +
    xx[167];
  xx[25] = (xx[227] * xx[253] + xx[179] * xx[254] + xx[226] * xx[255] + xx[531] *
            xx[256] + xx[941] * xx[257] + xx[662] * xx[258] + xx[893] * xx[259]
            + xx[1035] * xx[260] + xx[915] * xx[261] + xx[1012] * xx[262] + xx
            [1127] * xx[263] + xx[1016] * xx[264] + xx[107] * xx[265] + xx[1176]
            * xx[266] + xx[1106] * xx[267] - (xx[16] * xx[61] + xx[24] * xx[70]
             + xx[84])) / xx[359];
  xx[50] = xx[16] - xx[25] * xx[342];
  xx[51] = xx[92] + xx[49] + xx[972] + xx[68] + xx[1007] + xx[299] + xx[246] +
    xx[72] + xx[1046] + xx[57] - xx[425] * xx[25];
  xx[52] = xx[24] + xx[307] * xx[25];
  pm_math_quatXform(xx + 76, xx + 50, xx + 47);
  xx[50] = xx[58] - xx[294] * xx[25];
  xx[51] = xx[284] - xx[297] * xx[25];
  xx[52] = xx[59] - xx[25] * xx[300];
  pm_math_quatXform(xx + 76, xx + 50, xx + 57);
  pm_math_cross3(xx + 460, xx + 57, xx + 50);
  xx[16] = xx[63] + xx[47] + xx[50] + xx[27];
  xx[24] = xx[64] + xx[48] + xx[51] + xx[46];
  xx[27] = xx[65] + xx[49] + xx[52] + xx[83];
  xx[46] = xx[16];
  xx[47] = xx[24];
  xx[48] = xx[27];
  xx[49] = xx[57] + xx[31];
  xx[31] = xx[58] + xx[33];
  xx[33] = xx[59] + xx[232];
  xx[50] = xx[49];
  xx[51] = xx[31];
  xx[52] = xx[33];
  xx[57] = - (pm_math_dot3(xx + 315, xx + 46) + pm_math_dot3(xx + 443, xx + 50)
              + xx[237] * xx[253] + xx[864] * xx[254] + xx[244] * xx[255] + xx
              [530] * xx[256] + xx[954] * xx[257] + xx[685] * xx[258] + xx[535] *
              xx[259] + xx[1049] * xx[260] + xx[923] * xx[261] + xx[1039] * xx
              [262] + xx[1148] * xx[263] + xx[1026] * xx[264] + xx[188] * xx[265]
              + xx[1190] * xx[266] + xx[482] * xx[267]);
  xx[58] = - (pm_math_dot3(xx + 478, xx + 46) + pm_math_dot3(xx + 485, xx + 50)
              + xx[238] * xx[253] + xx[869] * xx[254] + xx[466] * xx[255] + xx
              [754] * xx[256] + xx[955] * xx[257] + xx[686] * xx[258] + xx[692] *
              xx[259] + xx[1050] * xx[260] + xx[975] * xx[261] + xx[1041] * xx
              [262] + xx[1153] * xx[263] + xx[1064] * xx[264] + xx[190] * xx[265]
              + xx[1211] * xx[266] + xx[483] * xx[267]);
  xx[59] = - (pm_math_dot3(xx + 495, xx + 46) + pm_math_dot3(xx + 504, xx + 50)
              + xx[441] * xx[253] + xx[870] * xx[254] + xx[467] * xx[255] + xx
              [813] * xx[256] + xx[960] * xx[257] + xx[789] * xx[258] + xx[814] *
              xx[259] + xx[1054] * xx[260] + xx[976] * xx[261] + xx[1051] * xx
              [262] + xx[1154] * xx[263] + xx[1065] * xx[264] + xx[196] * xx[265]
              + xx[1212] * xx[266] + xx[484] * xx[267]);
  solveSymmetricPosDef(xx + 518, xx + 57, 3, 1, xx + 46, xx + 50);
  xx[50] = xx[16] + xx[358] * xx[46] + xx[422] * xx[47] + xx[510] * xx[48];
  xx[51] = xx[24] + xx[360] * xx[46] + xx[426] * xx[47] + xx[511] * xx[48];
  xx[52] = xx[27] + xx[361] * xx[46] + xx[428] * xx[47] + xx[498] * xx[48];
  pm_math_quatXform(xx + 53, xx + 50, xx + 57);
  xx[50] = xx[49] + xx[363] * xx[46] + xx[446] * xx[47] + xx[499] * xx[48];
  xx[51] = xx[31] + xx[365] * xx[46] + xx[457] * xx[47] + xx[500] * xx[48];
  xx[52] = xx[33] + xx[371] * xx[46] + xx[458] * xx[47] + xx[512] * xx[48];
  pm_math_quatXform(xx + 53, xx + 50, xx + 62);
  pm_math_cross3(xx + 539, xx + 62, xx + 49);
  xx[16] = xx[34] + xx[57] + xx[49] + xx[14];
  xx[14] = xx[35] + xx[58] + xx[50] + xx[28];
  xx[24] = xx[36] + xx[59] + xx[51] + xx[85];
  xx[33] = xx[16];
  xx[34] = xx[14];
  xx[35] = xx[24];
  xx[27] = xx[62] + xx[5];
  xx[5] = xx[63] + xx[7];
  xx[7] = xx[64] + xx[274];
  xx[49] = xx[27];
  xx[50] = xx[5];
  xx[51] = xx[7];
  xx[57] = - (pm_math_dot3(xx + 554, xx + 33) + pm_math_dot3(xx + 572, xx + 49)
              + xx[546] * xx[253] + xx[877] * xx[254] + xx[468] * xx[255] + xx
              [815] * xx[256] + xx[964] * xx[257] + xx[791] * xx[258] + xx[924] *
              xx[259] + xx[1058] * xx[260] + xx[977] * xx[261] + xx[1052] * xx
              [262] + xx[1161] * xx[263] + xx[1066] * xx[264] + xx[189] * xx[265]
              + xx[1225] * xx[266] + xx[636] * xx[267]);
  xx[58] = - (pm_math_dot3(xx + 624, xx + 33) + pm_math_dot3(xx + 633, xx + 49)
              + xx[547] * xx[253] + xx[878] * xx[254] + xx[513] * xx[255] + xx
              [830] * xx[256] + xx[965] * xx[257] + xx[888] * xx[258] + xx[927] *
              xx[259] + xx[1059] * xx[260] + xx[987] * xx[261] + xx[1057] * xx
              [262] + xx[1162] * xx[263] + xx[1084] * xx[264] + xx[194] * xx[265]
              + xx[1226] * xx[266] + xx[637] * xx[267]);
  xx[59] = - (pm_math_dot3(xx + 649, xx + 33) + pm_math_dot3(xx + 658, xx + 49)
              + xx[576] * xx[253] + xx[879] * xx[254] + xx[514] * xx[255] + xx
              [831] * xx[256] + xx[966] * xx[257] + xx[889] * xx[258] + xx[934] *
              xx[259] + xx[1060] * xx[260] + xx[988] * xx[261] + xx[1077] * xx
              [262] + xx[1163] * xx[263] + xx[1085] * xx[264] + xx[195] * xx[265]
              + xx[1227] * xx[266] + xx[638] * xx[267]);
  solveSymmetricPosDef(xx + 672, xx + 57, 3, 1, xx + 33, xx + 49);
  xx[49] = xx[16] + xx[578] * xx[33] + xx[639] * xx[34] + xx[664] * xx[35];
  xx[50] = xx[14] + xx[579] * xx[33] + xx[640] * xx[34] + xx[665] * xx[35];
  xx[51] = xx[24] + xx[557] * xx[33] + xx[627] * xx[34] + xx[652] * xx[35];
  pm_math_quatXform(xx + 8, xx + 49, xx + 57);
  xx[49] = xx[27] + xx[559] * xx[33] + xx[628] * xx[34] + xx[653] * xx[35];
  xx[50] = xx[5] + xx[580] * xx[33] + xx[629] * xx[34] + xx[654] * xx[35];
  xx[51] = xx[7] + xx[608] * xx[33] + xx[641] * xx[34] + xx[666] * xx[35];
  pm_math_quatXform(xx + 8, xx + 49, xx + 62);
  pm_math_cross3(xx + 209, xx + 62, xx + 49);
  xx[5] = (xx[59] + xx[51] + xx[245] + xx[220] * xx[253] + xx[229] * xx[254] +
           xx[175] * xx[255] + xx[940] * xx[256] + xx[536] * xx[257] + xx[538] *
           xx[258] + xx[1029] * xx[259] + xx[901] * xx[260] + xx[903] * xx[261]
           + xx[1135] * xx[262] + xx[998] * xx[263] + xx[1018] * xx[264] + xx
           [1164] * xx[265] + xx[135] * xx[266] + xx[138] * xx[267]) / xx[292] +
    xx[305];
  pm_math_quatDeriv(xx + 0, xx + 20, xx + 49);
  xx[0] = xx[293] - xx[5];
  xx[1] = xx[9] * xx[0];
  xx[2] = xx[10] * xx[0];
  xx[3] = xx[12] * (xx[11] * xx[1] - xx[8] * xx[2]);
  xx[7] = (xx[8] * xx[1] + xx[11] * xx[2]) * xx[12];
  xx[14] = xx[0] - (xx[9] * xx[1] + xx[10] * xx[2]) * xx[12];
  xx[20] = xx[3];
  xx[21] = xx[7];
  xx[22] = xx[14];
  xx[1] = xx[236] - xx[210] * xx[0];
  xx[2] = xx[306] + xx[209] * xx[0];
  xx[0] = xx[2] * xx[11];
  xx[16] = xx[11] * xx[1];
  xx[24] = xx[2] * xx[9] - xx[10] * xx[1];
  xx[57] = - xx[0];
  xx[58] = xx[16];
  xx[59] = xx[24];
  pm_math_cross3(xx + 9, xx + 57, xx + 62);
  xx[9] = xx[1] + (xx[8] * xx[0] + xx[62]) * xx[12];
  xx[0] = xx[2] + xx[12] * (xx[63] - xx[8] * xx[16]);
  xx[1] = xx[12] * (xx[64] - xx[8] * xx[24]);
  xx[57] = xx[9];
  xx[58] = xx[0];
  xx[59] = xx[1];
  xx[2] = xx[33] - (pm_math_dot3(xx + 431, xx + 20) + pm_math_dot3(xx + 605, xx
    + 57));
  xx[8] = xx[34] - (pm_math_dot3(xx + 708, xx + 20) + pm_math_dot3(xx + 711, xx
    + 57));
  xx[10] = xx[35] - (pm_math_dot3(xx + 714, xx + 20) + pm_math_dot3(xx + 717, xx
    + 57));
  pm_math_quatDeriv(xx + 41, xx + 37, xx + 33);
  xx[20] = xx[3] - xx[355] * xx[2] + xx[609] * xx[8] + xx[646] * xx[10] + xx[399];
  xx[21] = xx[7] + xx[548] * xx[2] + xx[610] * xx[8] + xx[647] * xx[10] + xx[400];
  xx[22] = xx[14] - xx[551] * xx[2] + xx[623] * xx[8] - xx[648] * xx[10] + xx
    [401];
  pm_math_quatInverseXform(xx + 53, xx + 20, xx + 37);
  pm_math_cross3(xx + 20, xx + 539, xx + 41);
  xx[20] = xx[9] - xx[439] * xx[2] - xx[630] * xx[8] - xx[655] * xx[10] + xx[32]
    + xx[41];
  xx[21] = xx[0] - xx[570] * xx[2] + xx[631] * xx[8] + xx[656] * xx[10] + xx[17]
    + xx[42];
  xx[22] = xx[1] + xx[571] * xx[2] + xx[632] * xx[8] - xx[657] * xx[10] + xx[4]
    + xx[43];
  pm_math_quatInverseXform(xx + 53, xx + 20, xx + 41);
  xx[0] = xx[46] - (pm_math_dot3(xx + 434, xx + 37) + pm_math_dot3(xx + 720, xx
    + 41));
  xx[1] = xx[47] - (pm_math_dot3(xx + 543, xx + 37) + pm_math_dot3(xx + 728, xx
    + 41));
  xx[3] = xx[48] - (pm_math_dot3(xx + 731, xx + 37) + pm_math_dot3(xx + 581, xx
    + 41));
  xx[20] = xx[37] + xx[312] * xx[0] + xx[384] * xx[1] - xx[492] * xx[3] + xx[410];
  xx[21] = xx[38] - xx[313] * xx[0] + xx[390] * xx[1] + xx[493] * xx[3] + xx[411];
  xx[22] = xx[39] + xx[314] * xx[0] - xx[391] * xx[1] + xx[494] * xx[3] + xx[412];
  pm_math_quatInverseXform(xx + 76, xx + 20, xx + 37);
  pm_math_cross3(xx + 20, xx + 460, xx + 46);
  xx[20] = xx[41] + xx[353] * xx[0] - xx[394] * xx[1] + xx[501] * xx[3] + xx[40]
    + xx[46];
  xx[21] = xx[42] - xx[354] * xx[0] + xx[395] * xx[1] - xx[502] * xx[3] + xx[45]
    + xx[47];
  xx[22] = xx[43] - xx[357] * xx[0] + xx[397] * xx[1] + xx[503] * xx[3] + xx[26]
    + xx[48];
  pm_math_quatInverseXform(xx + 76, xx + 20, xx + 26);
  xx[4] = xx[25] + pm_math_dot3(xx + 366, xx + 37) + pm_math_dot3(xx + 286, xx +
    26);
  xx[7] = xx[39] + xx[4] * xx[70] + xx[166];
  xx[20] = xx[37] + xx[4] * xx[61] - xx[74];
  xx[21] = xx[38] + xx[165];
  xx[22] = xx[7];
  pm_math_quatInverseXform(xx + 149, xx + 20, xx + 24);
  pm_math_quatInverseXform(xx + 990, xx + 20, xx + 37);
  pm_math_quatInverseXform(xx + 100, xx + 20, xx + 40);
  xx[20] = xx[776] * xx[253] + xx[745] * xx[254] + xx[224] * xx[255] - xx[370];
  xx[21] = xx[777] * xx[253] + xx[753] * xx[254] + xx[225] * xx[255] - xx[381];
  xx[22] = xx[598] * xx[253] + xx[867] * xx[254] + xx[242] * xx[255] - xx[392];
  solveSymmetricPosDef(xx + 817, xx + 20, 3, 1, xx + 43, xx + 46);
  xx[20] = xx[362] + xx[43] * xx[773] + xx[44] * xx[697] - xx[45] * xx[756];
  xx[21] = xx[379] - xx[43] * xx[696] + xx[44] * xx[695] + xx[45] * xx[765];
  xx[22] = xx[380] + xx[43] * xx[774] - xx[44] * xx[767] + xx[45] * xx[597];
  pm_math_quatXform(xx + 734, xx + 20, xx + 46);
  xx[20] = xx[396] + xx[43] * xx[769] + xx[44] * xx[766] + xx[45] * xx[698];
  xx[21] = xx[369] + xx[43] * xx[781] + xx[44] * xx[786] + xx[45] * xx[788];
  xx[22] = xx[352] + xx[43] * xx[782] + xx[44] * xx[787] + xx[45] * xx[802];
  pm_math_quatXform(xx + 734, xx + 20, xx + 53);
  pm_math_cross3(xx + 741, xx + 53, xx + 20);
  xx[9] = (xx[755] * xx[253] + xx[178] * xx[254] + xx[187] * xx[255] - (xx[48] +
            xx[22] + xx[376] + (xx[53] + xx[285]) * xx[671] - (xx[54] + xx[377])
            * xx[744])) / xx[806] - xx[414];
  xx[20] = state[34];
  xx[21] = state[35];
  xx[22] = state[36];
  pm_math_quatDeriv(xx + 761, xx + 20, xx + 53);
  xx[11] = xx[405] + xx[9];
  xx[14] = xx[11] * xx[735];
  xx[16] = xx[11] * xx[736];
  xx[20] = xx[12] * (xx[737] * xx[14] - xx[734] * xx[16]);
  xx[21] = (xx[734] * xx[14] + xx[737] * xx[16]) * xx[12];
  xx[22] = xx[11] - (xx[735] * xx[14] + xx[736] * xx[16]) * xx[12];
  xx[14] = xx[430] + xx[671] * xx[9] + xx[350] - xx[11] * xx[742];
  xx[16] = xx[407] - xx[744] * xx[9] + xx[351] + xx[11] * xx[741];
  xx[11] = xx[16] * xx[737];
  xx[17] = xx[737] * xx[14];
  xx[24] = xx[16] * xx[735] - xx[736] * xx[14];
  xx[46] = - xx[11];
  xx[47] = xx[17];
  xx[48] = xx[24];
  pm_math_cross3(xx + 735, xx + 46, xx + 57);
  xx[46] = xx[14] + (xx[734] * xx[11] + xx[57]) * xx[12];
  xx[47] = xx[16] + xx[12] * (xx[58] - xx[734] * xx[17]);
  xx[48] = xx[12] * (xx[59] - xx[734] * xx[24]);
  xx[57] = xx[1286] * xx[256] + xx[942] * xx[257] + xx[663] * xx[258] - xx[593];
  xx[58] = xx[1287] * xx[256] + xx[1253] * xx[257] + xx[1232] * xx[258] - xx[613];
  xx[59] = xx[1221] * xx[256] + xx[1259] * xx[257] + xx[1233] * xx[258] - xx[616];
  solveSymmetricPosDef(xx + 1327, xx + 57, 3, 1, xx + 60, xx + 63);
  xx[57] = xx[563] + xx[60] * xx[1281] + xx[61] * xx[1241] - xx[62] * xx[1263];
  xx[58] = xx[564] - xx[60] * xx[1282] + xx[61] * xx[1239] + xx[62] * xx[1272];
  xx[59] = xx[565] + xx[60] * xx[1284] - xx[61] * xx[1274] + xx[62] * xx[1238];
  pm_math_quatXform(xx + 1243, xx + 57, xx + 63);
  xx[57] = xx[621] + xx[60] * xx[1276] + xx[61] * xx[1273] + xx[62] * xx[1242];
  xx[58] = xx[601] + xx[60] * xx[1291] + xx[61] * xx[1296] + xx[62] * xx[1298];
  xx[59] = xx[568] + xx[60] * xx[1292] + xx[61] * xx[1297] + xx[62] * xx[1312];
  pm_math_quatXform(xx + 1243, xx + 57, xx + 66);
  pm_math_cross3(xx + 1250, xx + 66, xx + 57);
  xx[11] = (xx[1262] * xx[256] + xx[533] * xx[257] + xx[537] * xx[258] - (xx[65]
             + xx[59] + xx[750])) / xx[1217] - xx[784];
  xx[57] = state[43];
  xx[58] = state[44];
  xx[59] = state[45];
  pm_math_quatDeriv(xx + 1268, xx + 57, xx + 63);
  xx[14] = xx[783] + xx[11];
  xx[16] = xx[14] * xx[1244];
  xx[17] = xx[14] * xx[1245];
  xx[57] = xx[12] * (xx[1246] * xx[16] - xx[1243] * xx[17]);
  xx[58] = (xx[1243] * xx[16] + xx[1246] * xx[17]) * xx[12];
  xx[59] = xx[14] - (xx[1244] * xx[16] + xx[1245] * xx[17]) * xx[12];
  xx[16] = xx[681] - xx[14] * xx[1251];
  xx[17] = xx[751] + xx[14] * xx[1250];
  xx[14] = xx[17] * xx[1246];
  xx[24] = xx[1246] * xx[16];
  xx[25] = xx[17] * xx[1244] - xx[1245] * xx[16];
  xx[67] = - xx[14];
  xx[68] = xx[24];
  xx[69] = xx[25];
  pm_math_cross3(xx + 1244, xx + 67, xx + 70);
  xx[67] = xx[16] + (xx[1243] * xx[14] + xx[70]) * xx[12];
  xx[68] = xx[17] + xx[12] * (xx[71] - xx[1243] * xx[24]);
  xx[69] = xx[12] * (xx[72] - xx[1243] * xx[25]);
  xx[70] = xx[1458] * xx[259] + xx[1036] * xx[260] + xx[916] * xx[261] - xx[339];
  xx[71] = xx[1459] * xx[259] + xx[1428] * xx[260] + xx[1419] * xx[261] - xx[456];
  xx[72] = xx[1415] * xx[259] + xx[1432] * xx[260] + xx[1420] * xx[261] - xx[790];
  solveSymmetricPosDef(xx + 1499, xx + 70, 3, 1, xx + 73, xx + 76);
  xx[70] = xx[343] + xx[73] * xx[1454] + xx[74] * xx[1408] - xx[75] * xx[1436];
  xx[71] = xx[800] - xx[73] * xx[1407] + xx[74] * xx[1406] + xx[75] * xx[1445];
  xx[72] = xx[30] + xx[73] * xx[1456] - xx[74] * xx[1447] + xx[75] * xx[1405];
  pm_math_quatXform(xx + 1410, xx + 70, xx + 30);
  xx[70] = xx[795] + xx[73] * xx[1449] + xx[74] * xx[1446] + xx[75] * xx[1409];
  xx[71] = xx[356] + xx[73] * xx[1463] + xx[74] * xx[1468] + xx[75] * xx[1470];
  xx[72] = xx[252] + xx[73] * xx[1464] + xx[74] * xx[1469] + xx[75] * xx[1484];
  pm_math_quatXform(xx + 1410, xx + 70, xx + 76);
  pm_math_cross3(xx + 1425, xx + 76, xx + 70);
  xx[14] = (xx[1435] * xx[259] + xx[895] * xx[260] + xx[902] * xx[261] - (xx[32]
             + xx[72] + xx[863])) / xx[1414] - xx[891];
  xx[30] = state[52];
  xx[31] = state[53];
  xx[32] = state[54];
  pm_math_quatDeriv(xx + 1441, xx + 30, xx + 76);
  xx[16] = xx[883] + xx[14];
  xx[17] = xx[16] * xx[1411];
  xx[24] = xx[16] * xx[1412];
  xx[30] = xx[12] * (xx[1413] * xx[17] - xx[1410] * xx[24]);
  xx[31] = (xx[1410] * xx[17] + xx[1413] * xx[24]) * xx[12];
  xx[32] = xx[16] - (xx[1411] * xx[17] + xx[1412] * xx[24]) * xx[12];
  xx[17] = xx[907] - xx[16] * xx[1426];
  xx[24] = xx[911] + xx[16] * xx[1425];
  xx[16] = xx[24] * xx[1413];
  xx[25] = xx[1413] * xx[17];
  xx[27] = xx[24] * xx[1411] - xx[1412] * xx[17];
  xx[70] = - xx[16];
  xx[71] = xx[25];
  xx[72] = xx[27];
  pm_math_cross3(xx + 1411, xx + 70, xx + 80);
  xx[70] = xx[17] + (xx[1410] * xx[16] + xx[80]) * xx[12];
  xx[71] = xx[24] + xx[12] * (xx[81] - xx[1410] * xx[25]);
  xx[72] = xx[12] * (xx[82] - xx[1410] * xx[27]);
  xx[80] = xx[1613] * xx[262] + xx[1167] * xx[263] + xx[1089] * xx[264] - xx[892];
  xx[81] = xx[1614] * xx[262] + xx[1168] * xx[263] + xx[1090] * xx[264] - xx[926];
  xx[82] = xx[1570] * xx[262] + xx[1573] * xx[263] + xx[1574] * xx[264] - xx[931];
  solveSymmetricPosDef(xx + 1654, xx + 80, 3, 1, xx + 83, xx + 86);
  xx[80] = xx[914] + xx[83] * xx[1609] + xx[84] * xx[1563] - xx[85] * xx[1591];
  xx[81] = xx[939] - xx[83] * xx[1562] + xx[84] * xx[1561] + xx[85] * xx[1600];
  xx[82] = xx[1022] + xx[83] * xx[1611] - xx[84] * xx[1602] + xx[85] * xx[1560];
  pm_math_quatXform(xx + 1565, xx + 80, xx + 86);
  xx[80] = xx[932] + xx[83] * xx[1604] + xx[84] * xx[1601] + xx[85] * xx[1564];
  xx[81] = xx[925] + xx[83] * xx[1618] + xx[84] * xx[1623] + xx[85] * xx[1625];
  xx[82] = xx[334] + xx[83] * xx[1619] + xx[84] * xx[1624] + xx[85] * xx[1639];
  pm_math_quatXform(xx + 1565, xx + 80, xx + 89);
  pm_math_cross3(xx + 1580, xx + 89, xx + 80);
  xx[16] = (xx[1590] * xx[262] + xx[997] * xx[263] + xx[994] * xx[264] - (xx[88]
             + xx[82] + xx[1042])) / xx[1569] - xx[1073];
  xx[80] = state[61];
  xx[81] = state[62];
  xx[82] = state[63];
  pm_math_quatDeriv(xx + 1596, xx + 80, xx + 86);
  xx[17] = xx[1056] + xx[16];
  xx[24] = xx[17] * xx[1566];
  xx[25] = xx[17] * xx[1567];
  xx[80] = xx[12] * (xx[1568] * xx[24] - xx[1565] * xx[25]);
  xx[81] = (xx[1565] * xx[24] + xx[1568] * xx[25]) * xx[12];
  xx[82] = xx[17] - (xx[1566] * xx[24] + xx[1567] * xx[25]) * xx[12];
  xx[24] = xx[1082] - xx[17] * xx[1581];
  xx[25] = xx[1083] + xx[17] * xx[1580];
  xx[17] = xx[25] * xx[1568];
  xx[27] = xx[1568] * xx[24];
  xx[28] = xx[25] * xx[1566] - xx[1567] * xx[24];
  xx[90] = - xx[17];
  xx[91] = xx[27];
  xx[92] = xx[28];
  pm_math_cross3(xx + 1566, xx + 90, xx + 93);
  xx[90] = xx[24] + (xx[1565] * xx[17] + xx[93]) * xx[12];
  xx[91] = xx[25] + xx[12] * (xx[94] - xx[1565] * xx[27]);
  xx[92] = xx[12] * (xx[95] - xx[1565] * xx[28]);
  xx[93] = xx[1666] * xx[265] + xx[1229] * xx[266] + xx[643] * xx[267] - xx[116];
  xx[94] = xx[1763] * xx[265] + xx[1230] * xx[266] + xx[644] * xx[267] - xx[118];
  xx[95] = xx[1682] * xx[265] + xx[1732] * xx[266] + xx[1723] * xx[267] - xx[126];
  solveSymmetricPosDef(xx + 1804, xx + 93, 3, 1, xx + 96, xx + 99);
  xx[93] = xx[115] + xx[96] * xx[1760] + xx[97] * xx[1717] - xx[98] * xx[1743];
  xx[94] = xx[29] - xx[96] * xx[1716] + xx[97] * xx[1715] + xx[98] * xx[1752];
  xx[95] = xx[140] + xx[96] * xx[1761] - xx[97] * xx[1754] + xx[98] * xx[603];
  pm_math_quatXform(xx + 1719, xx + 93, xx + 27);
  xx[93] = xx[136] + xx[96] * xx[1756] + xx[97] * xx[1753] + xx[98] * xx[1718];
  xx[94] = xx[111] + xx[96] * xx[1768] + xx[97] * xx[1773] + xx[98] * xx[1775];
  xx[95] = xx[18] + xx[96] * xx[1769] + xx[97] * xx[1774] + xx[98] * xx[1789];
  pm_math_quatXform(xx + 1719, xx + 93, xx + 99);
  pm_math_cross3(xx + 1729, xx + 99, xx + 93);
  xx[17] = (xx[1742] * xx[265] + xx[134] * xx[266] + xx[131] * xx[267] - (xx[29]
             + xx[95] + xx[137] - ((xx[99] + xx[141]) * xx[1714] + (xx[100] +
    xx[148]) * xx[1713]))) / xx[1771] - xx[168];
  xx[27] = state[70];
  xx[28] = state[71];
  xx[29] = state[72];
  pm_math_quatDeriv(xx + 1748, xx + 27, xx + 99);
  xx[18] = xx[154] + xx[17];
  xx[24] = xx[18] * xx[1720];
  xx[25] = xx[18] * xx[1721];
  xx[27] = xx[12] * (xx[1722] * xx[24] - xx[1719] * xx[25]);
  xx[28] = (xx[1719] * xx[24] + xx[1722] * xx[25]) * xx[12];
  xx[29] = xx[18] - (xx[1720] * xx[24] + xx[1721] * xx[25]) * xx[12];
  xx[24] = xx[177] - xx[1714] * xx[17] + xx[105] - xx[18] * xx[1730];
  xx[25] = xx[109] - (xx[155] + xx[1713] * xx[17]) + xx[18] * xx[1729];
  xx[18] = xx[25] * xx[1722];
  xx[37] = xx[1722] * xx[24];
  xx[38] = xx[25] * xx[1720] - xx[1721] * xx[24];
  xx[93] = - xx[18];
  xx[94] = xx[37];
  xx[95] = xx[38];
  pm_math_cross3(xx + 1720, xx + 93, xx + 103);
  xx[93] = xx[24] + (xx[1719] * xx[18] + xx[103]) * xx[12];
  xx[94] = xx[25] + xx[12] * (xx[104] - xx[1719] * xx[37]);
  xx[95] = xx[12] * (xx[105] - xx[1719] * xx[38]);
  deriv[0] = state[1];
  deriv[1] = - xx[5];
  deriv[2] = xx[49];
  deriv[3] = xx[50];
  deriv[4] = xx[51];
  deriv[5] = xx[52];
  deriv[6] = xx[2];
  deriv[7] = xx[8];
  deriv[8] = xx[10];
  deriv[9] = xx[33];
  deriv[10] = xx[34];
  deriv[11] = xx[35];
  deriv[12] = xx[36];
  deriv[13] = xx[0];
  deriv[14] = xx[1];
  deriv[15] = xx[3];
  deriv[16] = state[17];
  deriv[17] = - xx[4];
  deriv[18] = state[19];
  deriv[19] = - (xx[15] + xx[398] * xx[26]);
  deriv[20] = state[21];
  deriv[21] = xx[23] + xx[408] * xx[7];
  deriv[22] = state[23];
  deriv[23] = xx[19] + xx[404] * xx[7];
  deriv[24] = state[25];
  deriv[25] = xx[13] + xx[335] * xx[39];
  deriv[26] = state[27];
  deriv[27] = xx[6] + xx[273] * xx[42];
  deriv[28] = state[29];
  deriv[29] = xx[9];
  deriv[30] = xx[53];
  deriv[31] = xx[54];
  deriv[32] = xx[55];
  deriv[33] = xx[56];
  deriv[34] = xx[43] - (pm_math_dot3(xx + 838, xx + 20) + pm_math_dot3(xx + 845,
    xx + 46));
  deriv[35] = xx[44] - (pm_math_dot3(xx + 848, xx + 20) + pm_math_dot3(xx + 854,
    xx + 46));
  deriv[36] = xx[45] - (pm_math_dot3(xx + 857, xx + 20) + pm_math_dot3(xx + 860,
    xx + 46));
  deriv[37] = state[38];
  deriv[38] = xx[11];
  deriv[39] = xx[63];
  deriv[40] = xx[64];
  deriv[41] = xx[65];
  deriv[42] = xx[66];
  deriv[43] = xx[60] - (pm_math_dot3(xx + 1348, xx + 57) + pm_math_dot3(xx +
    1360, xx + 67));
  deriv[44] = xx[61] - (pm_math_dot3(xx + 1366, xx + 57) + pm_math_dot3(xx +
    1369, xx + 67));
  deriv[45] = xx[62] - (pm_math_dot3(xx + 1372, xx + 57) + pm_math_dot3(xx +
    1377, xx + 67));
  deriv[46] = state[47];
  deriv[47] = xx[14];
  deriv[48] = xx[76];
  deriv[49] = xx[77];
  deriv[50] = xx[78];
  deriv[51] = xx[79];
  deriv[52] = xx[73] - (pm_math_dot3(xx + 1520, xx + 30) + pm_math_dot3(xx +
    1532, xx + 70));
  deriv[53] = xx[74] - (pm_math_dot3(xx + 1538, xx + 30) + pm_math_dot3(xx +
    1541, xx + 70));
  deriv[54] = xx[75] - (pm_math_dot3(xx + 1544, xx + 30) + pm_math_dot3(xx +
    1549, xx + 70));
  deriv[55] = state[56];
  deriv[56] = xx[16];
  deriv[57] = xx[86];
  deriv[58] = xx[87];
  deriv[59] = xx[88];
  deriv[60] = xx[89];
  deriv[61] = xx[83] - (pm_math_dot3(xx + 1675, xx + 80) + pm_math_dot3(xx +
    1687, xx + 90));
  deriv[62] = xx[84] - (pm_math_dot3(xx + 1693, xx + 80) + pm_math_dot3(xx +
    1696, xx + 90));
  deriv[63] = xx[85] - (pm_math_dot3(xx + 1699, xx + 80) + pm_math_dot3(xx +
    1704, xx + 90));
  deriv[64] = state[65];
  deriv[65] = xx[17];
  deriv[66] = xx[99];
  deriv[67] = xx[100];
  deriv[68] = xx[101];
  deriv[69] = xx[102];
  deriv[70] = xx[96] - (pm_math_dot3(xx + 1825, xx + 27) + pm_math_dot3(xx +
    1831, xx + 93));
  deriv[71] = xx[97] - (pm_math_dot3(xx + 1834, xx + 27) + pm_math_dot3(xx +
    1840, xx + 93));
  deriv[72] = xx[98] - (pm_math_dot3(xx + 1843, xx + 27) + pm_math_dot3(xx +
    1846, xx + 93));
  errorResult[0] = 0.0;
  return NULL;
}
