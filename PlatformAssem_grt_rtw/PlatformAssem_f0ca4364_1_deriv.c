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
  double xx[2792];
  (void) rtdv;
  (void) eqnEnableFlags;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 0.3895853754265615;
  xx[1] = 0.5;
  xx[2] = xx[1] * input[7];
  xx[3] = cos(xx[2]);
  xx[4] = 0.389581900177037;
  xx[5] = sin(xx[2]);
  xx[2] = xx[0] * xx[3] - xx[4] * xx[5];
  xx[6] = 0.5901074779979933;
  xx[7] = 0.5901036711621462;
  xx[8] = xx[6] * xx[3] + xx[7] * xx[5];
  xx[9] = - xx[8];
  xx[10] = xx[7] * xx[3] - xx[6] * xx[5];
  xx[6] = xx[4] * xx[3] + xx[0] * xx[5];
  xx[0] = - xx[6];
  xx[11] = xx[2];
  xx[12] = xx[9];
  xx[13] = xx[10];
  xx[14] = xx[0];
  xx[15] = - 0.9982060081755033;
  xx[16] = 7.822272946646824e-7;
  xx[17] = - 0.05987290897428056;
  xx[18] = 3.559887592452546e-6;
  xx[3] = xx[1] * input[4];
  xx[4] = sin(xx[3]);
  xx[5] = 0.7071067811865476;
  xx[7] = xx[1] * input[3];
  xx[19] = xx[5] * sin(xx[7]);
  xx[20] = xx[5] * cos(xx[7]);
  xx[5] = xx[19] - xx[20];
  xx[7] = xx[4] * xx[5];
  xx[21] = xx[1] * input[5];
  xx[22] = sin(xx[21]);
  xx[23] = cos(xx[21]);
  xx[21] = xx[20] + xx[19];
  xx[19] = cos(xx[3]);
  xx[3] = xx[21] * xx[19];
  xx[20] = xx[7] * xx[22] - xx[23] * xx[3];
  xx[24] = xx[19] * xx[5];
  xx[5] = xx[21] * xx[4];
  xx[4] = xx[23] * xx[24] + xx[5] * xx[22];
  xx[19] = 2.0;
  xx[21] = 1.0;
  xx[25] = (xx[20] * xx[20] + xx[4] * xx[4]) * xx[19] - xx[21];
  xx[26] = xx[25] * inputDot[3];
  xx[27] = xx[23] * xx[22];
  xx[28] = xx[19] * xx[27] * inputDot[4];
  xx[29] = xx[21] - xx[19] * xx[22] * xx[22];
  xx[30] = xx[29] * inputDot[4];
  xx[31] = xx[24] * xx[22] - xx[23] * xx[5];
  xx[5] = xx[3] * xx[22] + xx[23] * xx[7];
  xx[3] = (xx[31] * xx[4] - xx[20] * xx[5]) * xx[19];
  xx[7] = xx[3] * inputDot[3];
  xx[22] = xx[19] * (xx[20] * xx[31] + xx[5] * xx[4]);
  xx[23] = xx[22] * inputDot[3];
  xx[32] = xx[26] + xx[28];
  xx[33] = xx[30] - xx[7];
  xx[34] = xx[23] + inputDot[5];
  pm_math_quatInverseXform(xx + 15, xx + 32, xx + 35);
  pm_math_quatInverseXform(xx + 11, xx + 35, xx + 38);
  xx[24] = xx[1] * state[0];
  xx[41] = cos(xx[24]);
  xx[42] = sin(xx[24]);
  xx[24] = xx[41] * xx[39] + xx[38] * xx[42];
  xx[43] = xx[38] - xx[19] * xx[24] * xx[42];
  xx[44] = xx[39] - xx[19] * xx[24] * xx[41];
  xx[24] = xx[40] - inputDot[7];
  xx[45] = xx[24] - (xx[41] * xx[41] * xx[24] + xx[42] * xx[24] * xx[42]) * xx
    [19];
  xx[46] = xx[45] + state[1];
  xx[47] = xx[43];
  xx[48] = xx[44];
  xx[49] = xx[46];
  xx[50] = 5.752105223459939e-9;
  xx[51] = 5.752878286826099e-9;
  xx[52] = 7.631014080662714e-9;
  xx[53] = xx[50] * xx[43];
  xx[54] = xx[51] * xx[44];
  xx[55] = xx[46] * xx[52];
  pm_math_cross3(xx + 47, xx + 53, xx + 56);
  xx[53] = 3.980251324392935e-7;
  xx[54] = 0.999999999999921;
  xx[55] = xx[53] * state[5] - xx[54] * state[2];
  xx[56] = xx[53] * state[4] + xx[54] * state[3];
  xx[57] = - xx[56];
  xx[59] = xx[54] * state[4] - xx[53] * state[3];
  xx[60] = - xx[59];
  xx[61] = xx[53] * state[2] + xx[54] * state[5];
  xx[62] = - xx[61];
  xx[63] = xx[55];
  xx[64] = xx[57];
  xx[65] = xx[60];
  xx[66] = xx[62];
  pm_math_quatInverseXform(xx + 63, xx + 47, xx + 67);
  xx[70] = xx[53] * state[6];
  xx[71] = xx[53] * state[7];
  xx[72] = state[6] - (xx[53] * xx[70] - xx[54] * xx[71]) * xx[19];
  xx[73] = xx[67] + xx[72];
  xx[74] = state[7] - xx[19] * (xx[54] * xx[70] + xx[53] * xx[71]);
  xx[70] = xx[68] + xx[74];
  xx[71] = xx[69] + state[8];
  xx[75] = xx[73];
  xx[76] = xx[70];
  xx[77] = xx[71];
  xx[78] = 1.510286728400273e-5;
  xx[79] = 2.110548808184631e-7;
  xx[80] = 1.522914534809649e-5;
  xx[81] = xx[73] * xx[78];
  xx[82] = xx[70] * xx[79];
  xx[83] = xx[71] * xx[80];
  pm_math_cross3(xx + 75, xx + 81, xx + 84);
  xx[75] = xx[72];
  xx[76] = xx[74];
  xx[77] = state[8];
  pm_math_cross3(xx + 67, xx + 75, xx + 81);
  xx[87] = xx[84] + xx[78] * xx[81];
  xx[88] = 1.185940755304492e-11;
  xx[89] = - 3.054821332187513e-20;
  xx[90] = 1.821902325602747e-10;
  xx[91] = 4.358909629907198e-5;
  xx[92] = xx[88];
  xx[93] = xx[89];
  xx[94] = xx[88];
  xx[95] = 2.110548819932733e-7;
  xx[96] = xx[90];
  xx[97] = xx[89];
  xx[98] = xx[90];
  xx[99] = 4.371537436200037e-5;
  ii[0] = factorSymmetricPosDef(xx + 91, 3, xx + 88);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_1/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 100, xx + 91, 9 * sizeof(double));
  xx[88] = xx[85] + xx[79] * xx[82];
  xx[89] = 7.960502648785241e-7;
  xx[90] = 2.329280111075767e-13;
  xx[109] = 2.926046524751139e-7;
  xx[110] = 0.04575000000718987;
  xx[111] = xx[90];
  xx[112] = xx[109];
  xx[113] = xx[110];
  xx[114] = xx[67] + xx[73];
  xx[115] = xx[68] + xx[70];
  xx[116] = xx[69] + xx[71];
  xx[67] = 3.641162862673871e-8;
  xx[68] = 0.04575000000717538;
  xx[69] = xx[67];
  xx[70] = xx[68];
  xx[71] = - 2.926046524752066e-7;
  pm_math_cross3(xx + 75, xx + 69, xx + 117);
  pm_math_cross3(xx + 114, xx + 117, xx + 120);
  pm_math_quatXform(xx + 63, xx + 69, xx + 114);
  pm_math_cross3(xx + 47, xx + 114, xx + 123);
  pm_math_cross3(xx + 47, xx + 123, xx + 126);
  pm_math_quatInverseXform(xx + 63, xx + 126, xx + 47);
  xx[73] = 0.01360983200690392;
  xx[123] = (xx[120] + xx[47]) * xx[73];
  xx[124] = (xx[121] + xx[48]) * xx[73];
  xx[47] = (xx[122] + xx[49]) * xx[73];
  xx[120] = xx[123];
  xx[121] = xx[124];
  xx[122] = xx[47];
  xx[48] = xx[87] - xx[88] * xx[89] + pm_math_dot3(xx + 111, xx + 120);
  xx[49] = xx[10] * xx[42];
  xx[125] = xx[41] * xx[8];
  xx[126] = xx[49] + xx[125];
  xx[127] = xx[2] * xx[41] - xx[42] * xx[6];
  xx[128] = - xx[127];
  xx[129] = xx[2] * xx[42] + xx[41] * xx[6];
  xx[130] = xx[10] * xx[41] - xx[42] * xx[8];
  xx[131] = - xx[126];
  xx[132] = xx[128];
  xx[133] = xx[129];
  xx[134] = xx[130];
  pm_math_quatCompose(xx + 131, xx + 63, xx + 135);
  xx[139] = - 2.329268144978725e-13;
  xx[140] = 2.92603149291605e-7;
  xx[141] = xx[139];
  xx[142] = - xx[140];
  xx[143] = 0.0457500000000094;
  pm_math_quatXform(xx + 135, xx + 141, xx + 144);
  pm_math_quatXform(xx + 63, xx + 111, xx + 147);
  pm_math_quatXform(xx + 131, xx + 147, xx + 150);
  xx[147] = xx[144] + xx[150];
  xx[148] = 0.7058357201813958;
  xx[149] = xx[1] * input[6];
  xx[153] = sin(xx[149]);
  xx[154] = 0.7058407546227096;
  xx[155] = cos(xx[149]);
  xx[149] = xx[148] * xx[153] - xx[154] * xx[155];
  xx[156] = xx[1] * state[9];
  xx[157] = cos(xx[156]);
  xx[158] = xx[149] * xx[157];
  xx[159] = sin(xx[156]);
  xx[156] = xx[148] * xx[155] + xx[154] * xx[153];
  xx[160] = xx[159] * xx[156];
  xx[161] = 0.04233709306330295;
  xx[162] = 0.04233598682685397;
  xx[163] = xx[161] * xx[155] + xx[162] * xx[153];
  xx[164] = xx[161] * xx[153] - xx[162] * xx[155];
  xx[153] = xx[157] * xx[163] + xx[164] * xx[159];
  xx[155] = - xx[153];
  xx[165] = xx[159] * xx[163] - xx[164] * xx[157];
  xx[166] = xx[149] * xx[159] + xx[157] * xx[156];
  xx[167] = xx[158] - xx[160];
  xx[168] = xx[155];
  xx[169] = xx[165];
  xx[170] = xx[166];
  xx[171] = xx[53] * state[14] - xx[54] * state[11];
  xx[172] = xx[53] * state[13] + xx[54] * state[12];
  xx[173] = - xx[172];
  xx[174] = xx[54] * state[13] - xx[53] * state[12];
  xx[175] = - xx[174];
  xx[176] = xx[53] * state[11] + xx[54] * state[14];
  xx[177] = - xx[176];
  xx[178] = xx[171];
  xx[179] = xx[173];
  xx[180] = xx[175];
  xx[181] = xx[177];
  xx[182] = 3.980251340548381e-7;
  xx[183] = xx[54] * state[21] - xx[182] * state[18];
  xx[184] = xx[54] * state[20] - xx[182] * state[19];
  xx[185] = xx[182] * state[20] + xx[54] * state[19];
  xx[186] = - xx[185];
  xx[187] = xx[182] * state[21] + xx[54] * state[18];
  xx[182] = - xx[187];
  xx[188] = xx[183];
  xx[189] = xx[184];
  xx[190] = xx[186];
  xx[191] = xx[182];
  xx[192] = xx[1] * state[27];
  xx[193] = cos(xx[192]);
  xx[194] = 0.3535533905932732;
  xx[195] = 0.8660254037844377;
  xx[196] = xx[1] * state[25];
  xx[197] = sin(xx[196]);
  xx[198] = xx[195] * xx[197];
  xx[199] = xx[194] * xx[198];
  xx[200] = 0.6123724356957949;
  xx[201] = 0.5000000000000017;
  xx[202] = xx[201] * xx[197];
  xx[197] = xx[200] * xx[202];
  xx[203] = cos(xx[196]);
  xx[196] = xx[200] * xx[203];
  xx[204] = xx[199] + xx[197] - xx[196];
  xx[205] = sin(xx[192]);
  xx[192] = xx[197] + xx[196] + xx[199];
  xx[196] = xx[193] * xx[204] + xx[205] * xx[192];
  xx[197] = xx[200] * xx[198];
  xx[198] = xx[194] * xx[203];
  xx[199] = xx[194] * xx[202];
  xx[202] = xx[197] + xx[198] - xx[199];
  xx[203] = xx[198] - xx[197] + xx[199];
  xx[197] = xx[202] * xx[193] - xx[205] * xx[203];
  xx[198] = xx[193] * xx[203] + xx[202] * xx[205];
  xx[199] = xx[193] * xx[192] - xx[205] * xx[204];
  pm_math_quatCompose(xx + 188, xx + 196, xx + 206);
  pm_math_quatCompose(xx + 178, xx + 206, xx + 210);
  pm_math_quatCompose(xx + 167, xx + 210, xx + 214);
  xx[218] = xx[211] * xx[213];
  xx[219] = xx[210] * xx[212];
  xx[220] = xx[19] * (xx[218] - xx[219]);
  xx[221] = xx[210] * xx[211];
  xx[222] = xx[212] * xx[213];
  xx[223] = xx[211] * xx[211];
  xx[224] = xx[212] * xx[212];
  xx[225] = xx[220];
  xx[226] = (xx[221] + xx[222]) * xx[19];
  xx[227] = xx[21] - (xx[223] + xx[224]) * xx[19];
  xx[228] = 7.599121945184391e-12;
  xx[229] = 5.036130209737022e-12;
  xx[230] = 5.192027881355888e-12;
  xx[231] = - xx[228];
  xx[232] = xx[229];
  xx[233] = - xx[230];
  pm_math_cross3(xx + 225, xx + 231, xx + 234);
  pm_math_quatXform(xx + 214, xx + 234, xx + 225);
  xx[214] = xx[204];
  xx[215] = xx[202];
  xx[216] = xx[203];
  xx[217] = xx[192];
  xx[234] = 2.191920996097441e-12;
  xx[235] = xx[234] * xx[205];
  xx[236] = xx[193] * xx[235];
  xx[237] = 3.368449963403463e-13;
  xx[238] = xx[237] * xx[205];
  xx[239] = xx[238] * xx[205];
  xx[240] = xx[19] * (xx[236] + xx[239]) - xx[237];
  xx[241] = 0.02539999999999815 + xx[240];
  xx[242] = xx[235] * xx[205];
  xx[235] = xx[193] * xx[238];
  xx[238] = xx[234] - (xx[242] - xx[235]) * xx[19];
  xx[243] = 0.1524264000010511;
  xx[244] = - xx[241];
  xx[245] = - xx[238];
  xx[246] = - xx[243];
  pm_math_quatXform(xx + 214, xx + 244, xx + 247);
  xx[250] = 0.1158410329922703;
  xx[251] = 0.09621024525612519;
  xx[252] = xx[251] * xx[203];
  xx[253] = xx[202];
  xx[254] = xx[203];
  xx[255] = xx[192];
  xx[256] = xx[250] * xx[192] - xx[202] * xx[251];
  xx[257] = xx[250] * xx[203];
  xx[258] = xx[252];
  xx[259] = xx[256];
  xx[260] = - xx[257];
  pm_math_cross3(xx + 253, xx + 258, xx + 261);
  xx[258] = 7.483145982728478e-12 + xx[250] + (xx[252] * xx[204] + xx[261]) *
    xx[19];
  xx[250] = xx[247] - xx[258];
  xx[252] = 5.088251355846174e-12 - (xx[204] * xx[256] + xx[262]) * xx[19];
  xx[256] = xx[248] + xx[252];
  xx[247] = 4.00000000521855e-3 + xx[251] + xx[19] * (xx[263] - xx[257] * xx[204]);
  xx[248] = xx[249] - xx[247];
  xx[259] = xx[250];
  xx[260] = xx[256];
  xx[261] = xx[248];
  pm_math_quatXform(xx + 188, xx + 259, xx + 262);
  xx[249] = 3.641924106626229e-8;
  xx[265] = xx[228];
  xx[266] = - xx[229];
  xx[267] = xx[230];
  pm_math_quatXform(xx + 188, xx + 265, xx + 268);
  xx[251] = xx[249] + xx[268];
  xx[257] = xx[262] + xx[251];
  xx[271] = 0.04574999999998041;
  xx[272] = xx[271] + xx[269];
  xx[273] = xx[263] + xx[272];
  xx[262] = xx[140] + xx[270];
  xx[263] = xx[264] + xx[262];
  xx[268] = xx[257];
  xx[269] = xx[273];
  xx[270] = xx[263];
  pm_math_quatXform(xx + 178, xx + 268, xx + 274);
  pm_math_quatXform(xx + 178, xx + 69, xx + 277);
  xx[264] = xx[275] + xx[278];
  xx[275] = xx[274] + xx[277];
  xx[274] = xx[264] * xx[159] - xx[275] * xx[157];
  xx[276] = 3.107391981487723e-12;
  xx[280] = 9.83617579279345e-12;
  xx[281] = xx[276] * xx[157] + xx[280] * xx[159];
  xx[282] = xx[19] * xx[281] * xx[159];
  xx[283] = xx[19] * xx[159] * xx[274] - (xx[264] - xx[282]) - xx[280];
  xx[284] = xx[149];
  xx[285] = xx[156];
  xx[286] = xx[164];
  xx[287] = xx[19] * xx[281] * xx[157];
  xx[281] = xx[275] + xx[19] * xx[157] * xx[274] + xx[287] - xx[276];
  xx[274] = xx[164] * xx[281];
  xx[288] = xx[164] * xx[283];
  xx[289] = xx[149] * xx[281] - xx[283] * xx[156];
  xx[290] = - xx[274];
  xx[291] = xx[288];
  xx[292] = xx[289];
  pm_math_cross3(xx + 284, xx + 290, xx + 293);
  xx[290] = xx[225] + xx[283] + xx[19] * (xx[293] - xx[274] * xx[163]);
  xx[274] = xx[160] - xx[158];
  xx[296] = - xx[274];
  xx[297] = xx[155];
  xx[298] = xx[165];
  xx[299] = xx[166];
  pm_math_quatCompose(xx + 296, xx + 178, xx + 300);
  pm_math_quatCompose(xx + 300, xx + 188, xx + 304);
  pm_math_quatCompose(xx + 304, xx + 214, xx + 308);
  xx[155] = xx[193] * xx[308] + xx[311] * xx[205];
  xx[158] = xx[193] * xx[309] - xx[310] * xx[205];
  xx[160] = xx[193] * xx[310] + xx[309] * xx[205];
  xx[283] = xx[193] * xx[311] - xx[308] * xx[205];
  xx[312] = xx[155];
  xx[313] = xx[158];
  xx[314] = xx[160];
  xx[315] = xx[283];
  xx[291] = xx[195] * xx[205];
  xx[292] = xx[19] * xx[193] * xx[291];
  xx[316] = 2.51806510486852e-12;
  xx[317] = 3.799560972592208e-12;
  xx[318] = xx[19] * xx[291] * xx[205] - xx[195];
  xx[319] = xx[230] * xx[292] + xx[316];
  xx[320] = xx[317] + xx[230] * xx[318];
  xx[321] = xx[229] * xx[318] - xx[228] * xx[292];
  pm_math_quatXform(xx + 312, xx + 319, xx + 322);
  xx[312] = - (xx[201] * xx[238]);
  xx[313] = xx[201] * xx[241] - 0.1320051346083185;
  xx[314] = xx[195] * xx[238];
  pm_math_quatXform(xx + 214, xx + 312, xx + 318);
  xx[291] = 0.02540000000000025;
  xx[292] = xx[291] * xx[192];
  xx[312] = xx[202] * xx[291];
  xx[313] = xx[292] * xx[204] - xx[312] * xx[203];
  xx[314] = xx[19] * xx[313];
  xx[315] = (xx[292] * xx[192] + xx[202] * xx[312]) * xx[19];
  xx[321] = xx[312] * xx[204] + xx[292] * xx[203];
  xx[292] = xx[321] * xx[19];
  xx[325] = xx[318] + xx[314];
  xx[326] = xx[319] + xx[315] - xx[291];
  xx[327] = xx[320] - xx[292];
  pm_math_quatXform(xx + 304, xx + 325, xx + 318);
  xx[312] = xx[322] + xx[318];
  xx[325] = 1.031255612051699e-15;
  xx[326] = xx[158];
  xx[327] = xx[160];
  xx[328] = xx[283];
  xx[329] = xx[228] * xx[283];
  xx[330] = xx[229] * xx[283];
  xx[283] = xx[228] * xx[158] - xx[160] * xx[229];
  xx[331] = - xx[329];
  xx[332] = xx[330];
  xx[333] = xx[283];
  pm_math_cross3(xx + 326, xx + 331, xx + 334);
  xx[158] = xx[19] * (xx[242] - xx[235]) - xx[234];
  xx[160] = (xx[236] + xx[239]) * xx[19] - xx[237];
  xx[235] = xx[311] * xx[160];
  xx[236] = xx[158] * xx[311];
  xx[239] = xx[309] * xx[160] - xx[158] * xx[310];
  xx[326] = - xx[235];
  xx[327] = xx[236];
  xx[328] = xx[239];
  pm_math_cross3(xx + 309, xx + 326, xx + 331);
  xx[242] = xx[19] * (xx[334] - xx[155] * xx[329]) + xx[158] + xx[19] * (xx[331]
    - xx[308] * xx[235]) + xx[229];
  memcpy(xx + 235, xx + 52, 1 * sizeof(double));
  ii[1] = factorSymmetricPosDef(xx + 235, 1, xx + 326);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute15' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 326, xx + 235, 1 * sizeof(double));
  xx[327] = xx[242] / xx[326];
  xx[328] = xx[325] * xx[327];
  xx[329] = xx[328] * xx[205];
  xx[337] = 1.584789294349521e-16;
  xx[338] = xx[337] * xx[327];
  xx[339] = xx[338] * xx[205];
  xx[340] = xx[19] * (xx[329] * xx[205] - xx[193] * xx[339]) - xx[328];
  xx[328] = (xx[193] * xx[329] + xx[339] * xx[205]) * xx[19] - xx[338];
  xx[329] = xx[340] * xx[238] - xx[241] * xx[328] - xx[52] * xx[327];
  xx[338] = xx[243] * xx[328];
  xx[339] = 0.3535533905932758;
  xx[341] = xx[1] * state[33];
  xx[342] = cos(xx[341]);
  xx[343] = xx[339] * xx[342];
  xx[344] = sin(xx[341]);
  xx[341] = xx[339] * xx[344];
  xx[345] = xx[343] + xx[341];
  xx[346] = xx[345] * xx[345];
  xx[347] = 0.6123724356957934;
  xx[348] = xx[347] * xx[342];
  xx[342] = xx[347] * xx[344];
  xx[344] = xx[348] - xx[342];
  xx[349] = (xx[346] + xx[344] * xx[344]) * xx[19] - xx[21];
  xx[350] = xx[348] + xx[342];
  xx[342] = xx[350] * xx[344];
  xx[348] = xx[343] - xx[341];
  xx[341] = xx[345] * xx[348];
  xx[343] = xx[342] - xx[341];
  xx[351] = xx[19] * xx[343];
  xx[352] = xx[348] * xx[344];
  xx[353] = xx[345] * xx[350];
  xx[354] = (xx[352] + xx[353]) * xx[19];
  xx[355] = xx[342] + xx[341];
  xx[341] = xx[355] * xx[19];
  xx[342] = (xx[346] + xx[350] * xx[350]) * xx[19] - xx[21];
  xx[356] = xx[350] * xx[348];
  xx[357] = xx[345] * xx[344];
  xx[358] = xx[19] * (xx[356] - xx[357]);
  xx[359] = xx[352] - xx[353];
  xx[352] = xx[19] * xx[359];
  xx[353] = xx[356] + xx[357];
  xx[356] = xx[353] * xx[19];
  xx[357] = (xx[346] + xx[348] * xx[348]) * xx[19] - xx[21];
  xx[360] = xx[349];
  xx[361] = xx[351];
  xx[362] = xx[354];
  xx[363] = xx[341];
  xx[364] = xx[342];
  xx[365] = xx[358];
  xx[366] = xx[352];
  xx[367] = xx[356];
  xx[368] = xx[357];
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute10' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 346, xx + 235, 1 * sizeof(double));
  xx[369] = xx[52] / xx[346];
  xx[370] = xx[52] - xx[52] * xx[369];
  xx[371] = xx[50] * xx[349];
  xx[372] = xx[50] * xx[341];
  xx[373] = xx[50] * xx[352];
  xx[374] = xx[51] * xx[351];
  xx[375] = xx[51] * xx[342];
  xx[376] = xx[51] * xx[356];
  xx[377] = xx[354] * xx[370];
  xx[378] = xx[358] * xx[370];
  xx[379] = xx[357] * xx[370];
  pm_math_matrix3x3Compose(xx + 360, xx + 371, xx + 380);
  xx[370] = 2.822269593544343e-15;
  xx[371] = xx[370] / xx[346];
  xx[372] = xx[52] * xx[371];
  xx[373] = 2.968427723224885e-15;
  xx[374] = xx[373] / xx[346];
  xx[375] = xx[52] * xx[374];
  xx[376] = xx[372] * xx[351] - xx[375] * xx[349];
  xx[377] = xx[376] * xx[354];
  xx[378] = xx[372] * xx[342] - xx[341] * xx[375];
  xx[379] = xx[378] * xx[354];
  xx[389] = xx[356] * xx[372] - xx[375] * xx[352];
  xx[372] = xx[389] * xx[354];
  xx[375] = xx[376] * xx[358];
  xx[390] = xx[378] * xx[358];
  xx[391] = xx[389] * xx[358];
  xx[392] = xx[376] * xx[357];
  xx[376] = xx[378] * xx[357];
  xx[378] = xx[389] * xx[357];
  xx[393] = - xx[377];
  xx[394] = - xx[379];
  xx[395] = - xx[372];
  xx[396] = - xx[375];
  xx[397] = - xx[390];
  xx[398] = - xx[391];
  xx[399] = - xx[392];
  xx[400] = - xx[376];
  xx[401] = - xx[378];
  xx[402] = xx[345];
  xx[403] = xx[344];
  xx[404] = xx[350];
  xx[405] = xx[348];
  xx[389] = 5.998698970888227e-12;
  xx[406] = 6.30935626036444e-12;
  xx[407] = - xx[389];
  xx[408] = - xx[406];
  xx[409] = 4.000000001735564e-3;
  pm_math_quatXform(xx + 402, xx + 407, xx + 410);
  xx[407] = 0.1158410329922713 + xx[410];
  xx[408] = 0.09621024525612379 - xx[412];
  xx[412] = - xx[407];
  xx[413] = - xx[411];
  xx[414] = xx[408];
  pm_math_matrix3x3PostCross(xx + 393, xx + 412, xx + 415);
  xx[393] = 4.704802836816547e-4;
  xx[394] = xx[393] - xx[373] * xx[374];
  xx[395] = xx[370] * xx[374];
  xx[396] = xx[393] - xx[370] * xx[371];
  xx[424] = xx[394] * xx[349] + xx[395] * xx[351];
  xx[425] = xx[341] * xx[394] + xx[395] * xx[342];
  xx[426] = xx[352] * xx[394] + xx[395] * xx[356];
  xx[427] = xx[351] * xx[396] + xx[395] * xx[349];
  xx[428] = xx[396] * xx[342] + xx[395] * xx[341];
  xx[429] = xx[356] * xx[396] + xx[395] * xx[352];
  xx[430] = xx[393] * xx[354];
  xx[431] = xx[393] * xx[358];
  xx[432] = xx[393] * xx[357];
  pm_math_matrix3x3Compose(xx + 360, xx + 424, xx + 433);
  pm_math_matrix3x3PostCross(xx + 433, xx + 412, xx + 424);
  pm_math_matrix3x3PreCross(xx + 424, xx + 412, xx + 442);
  xx[341] = 0.152426400001803;
  xx[351] = xx[1] * state[35];
  xx[352] = cos(xx[351]);
  xx[354] = xx[352] * xx[352];
  xx[356] = sin(xx[351]);
  xx[351] = (xx[354] + xx[356] * xx[356]) * xx[19] - xx[21];
  xx[357] = 2.642797429992618e-15;
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute14' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 358, xx + 235, 1 * sizeof(double));
  xx[394] = xx[357] / xx[358];
  xx[395] = xx[52] * xx[394];
  xx[396] = xx[352] * xx[356];
  xx[397] = xx[19] * xx[396];
  xx[398] = 3.2073700752247e-15;
  xx[399] = xx[398] / xx[358];
  xx[400] = xx[52] * xx[399];
  xx[401] = xx[19] * xx[354] - xx[21];
  xx[354] = xx[351] * (xx[395] * xx[397] + xx[400] * xx[401]);
  xx[409] = xx[341] * xx[354];
  xx[410] = xx[393] - xx[357] * xx[394];
  xx[451] = xx[398] * xx[394];
  xx[452] = xx[451] * xx[401];
  xx[453] = xx[397] * xx[410] - xx[452];
  xx[454] = xx[393] - xx[398] * xx[399];
  xx[455] = xx[451] * xx[397];
  xx[451] = xx[454] * xx[401] - xx[455];
  xx[456] = xx[453] * xx[397] + xx[451] * xx[401];
  xx[457] = xx[456] * xx[341];
  xx[458] = 6.817225262079063e-12;
  xx[459] = xx[458] * xx[356];
  xx[460] = xx[459] * xx[356];
  xx[461] = 5.61723311615081e-12;
  xx[462] = xx[461] * xx[356];
  xx[463] = xx[352] * xx[462];
  xx[464] = xx[19] * (xx[460] - xx[463]) - xx[458];
  xx[465] = 0.02540000000000185 - xx[464];
  xx[466] = xx[451] * xx[397] - xx[453] * xx[401];
  xx[451] = xx[341] * xx[466];
  xx[453] = xx[352] * xx[459];
  xx[459] = xx[462] * xx[356];
  xx[462] = (xx[453] + xx[459]) * xx[19] - xx[461];
  xx[467] = xx[1] * state[31];
  xx[468] = cos(xx[467]);
  xx[469] = xx[339] * xx[468];
  xx[470] = sin(xx[467]);
  xx[467] = xx[339] * xx[470];
  xx[339] = xx[469] + xx[467];
  xx[471] = xx[339] * xx[339];
  xx[472] = xx[347] * xx[470];
  xx[470] = xx[347] * xx[468];
  xx[347] = xx[472] - xx[470];
  xx[468] = (xx[471] + xx[347] * xx[347]) * xx[19] - xx[21];
  xx[473] = xx[467] - xx[469];
  xx[467] = xx[339] * xx[473];
  xx[469] = xx[470] + xx[472];
  xx[470] = xx[469] * xx[347];
  xx[472] = xx[467] - xx[470];
  xx[474] = xx[19] * xx[472];
  xx[475] = xx[347] * xx[473];
  xx[476] = xx[469] * xx[339];
  xx[477] = (xx[475] + xx[476]) * xx[19];
  xx[478] = xx[470] + xx[467];
  xx[467] = xx[478] * xx[19];
  xx[470] = (xx[471] + xx[469] * xx[469]) * xx[19] - xx[21];
  xx[479] = xx[339] * xx[347];
  xx[480] = xx[469] * xx[473];
  xx[481] = xx[19] * (xx[479] - xx[480]);
  xx[482] = xx[475] - xx[476];
  xx[475] = xx[19] * xx[482];
  xx[476] = xx[480] + xx[479];
  xx[479] = xx[476] * xx[19];
  xx[480] = (xx[471] + xx[473] * xx[473]) * xx[19] - xx[21];
  xx[483] = xx[468];
  xx[484] = xx[474];
  xx[485] = xx[477];
  xx[486] = - xx[467];
  xx[487] = xx[470];
  xx[488] = xx[481];
  xx[489] = xx[475];
  xx[490] = - xx[479];
  xx[491] = xx[480];
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute11' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 471, xx + 235, 1 * sizeof(double));
  xx[492] = xx[52] / xx[471];
  xx[493] = xx[52] - xx[52] * xx[492];
  xx[494] = xx[50] * xx[468];
  xx[495] = - (xx[50] * xx[467]);
  xx[496] = xx[50] * xx[475];
  xx[497] = xx[51] * xx[474];
  xx[498] = xx[51] * xx[470];
  xx[499] = - (xx[51] * xx[479]);
  xx[500] = xx[477] * xx[493];
  xx[501] = xx[481] * xx[493];
  xx[502] = xx[480] * xx[493];
  pm_math_matrix3x3Compose(xx + 483, xx + 494, xx + 503);
  xx[493] = 1.787946147172686e-15;
  xx[494] = xx[493] / xx[471];
  xx[495] = xx[52] * xx[494];
  xx[496] = 1.826292542130627e-15;
  xx[497] = xx[496] / xx[471];
  xx[498] = xx[52] * xx[497];
  xx[499] = xx[495] * xx[468] + xx[498] * xx[474];
  xx[500] = xx[499] * xx[477];
  xx[501] = xx[467] * xx[495] - xx[498] * xx[470];
  xx[502] = xx[501] * xx[477];
  xx[512] = xx[479] * xx[498] - xx[495] * xx[475];
  xx[495] = xx[512] * xx[477];
  xx[498] = xx[499] * xx[481];
  xx[513] = xx[501] * xx[481];
  xx[514] = xx[512] * xx[481];
  xx[515] = xx[499] * xx[480];
  xx[499] = xx[501] * xx[480];
  xx[501] = xx[512] * xx[480];
  xx[516] = xx[500];
  xx[517] = - xx[502];
  xx[518] = - xx[495];
  xx[519] = xx[498];
  xx[520] = - xx[513];
  xx[521] = - xx[514];
  xx[522] = xx[515];
  xx[523] = - xx[499];
  xx[524] = - xx[501];
  xx[512] = - xx[469];
  xx[525] = - xx[339];
  xx[526] = xx[347];
  xx[527] = xx[512];
  xx[528] = xx[473];
  xx[529] = 3.881762117297072e-12;
  xx[530] = 3.80025733104361e-12;
  xx[531] = xx[529];
  xx[532] = - xx[530];
  xx[533] = 3.999999998874377e-3;
  pm_math_quatXform(xx + 525, xx + 531, xx + 534);
  xx[531] = 0.1412410329922711 + xx[534];
  xx[532] = 0.05221615474387407 - xx[536];
  xx[536] = - xx[531];
  xx[537] = - xx[535];
  xx[538] = xx[532];
  pm_math_matrix3x3PostCross(xx + 516, xx + 536, xx + 539);
  xx[516] = xx[393] - xx[493] * xx[494];
  xx[517] = xx[496] * xx[494];
  xx[518] = xx[393] - xx[496] * xx[497];
  xx[548] = xx[516] * xx[468] - xx[517] * xx[474];
  xx[549] = - (xx[467] * xx[516] + xx[517] * xx[470]);
  xx[550] = xx[475] * xx[516] + xx[479] * xx[517];
  xx[551] = xx[474] * xx[518] - xx[517] * xx[468];
  xx[552] = xx[518] * xx[470] + xx[467] * xx[517];
  xx[553] = - (xx[479] * xx[518] + xx[517] * xx[475]);
  xx[554] = xx[393] * xx[477];
  xx[555] = xx[393] * xx[481];
  xx[556] = xx[393] * xx[480];
  pm_math_matrix3x3Compose(xx + 483, xx + 548, xx + 516);
  pm_math_matrix3x3PostCross(xx + 516, xx + 536, xx + 548);
  pm_math_matrix3x3PreCross(xx + 548, xx + 536, xx + 557);
  xx[467] = xx[1] * state[29];
  xx[474] = sin(xx[467]);
  xx[475] = xx[200] * xx[474];
  xx[477] = cos(xx[467]);
  xx[467] = xx[200] * xx[477];
  xx[200] = xx[475] - xx[467];
  xx[479] = xx[200] * xx[200];
  xx[480] = xx[194] * xx[477];
  xx[477] = xx[194] * xx[474];
  xx[194] = xx[480] + xx[477];
  xx[474] = (xx[479] + xx[194] * xx[194]) * xx[19] - xx[21];
  xx[481] = xx[475] + xx[467];
  xx[467] = xx[481] * xx[200];
  xx[475] = xx[477] - xx[480];
  xx[477] = xx[194] * xx[475];
  xx[480] = xx[467] - xx[477];
  xx[533] = xx[19] * xx[480];
  xx[534] = xx[481] * xx[194];
  xx[566] = xx[475] * xx[200];
  xx[567] = (xx[534] + xx[566]) * xx[19];
  xx[568] = xx[477] + xx[467];
  xx[467] = xx[568] * xx[19];
  xx[477] = (xx[479] + xx[475] * xx[475]) * xx[19] - xx[21];
  xx[569] = xx[194] * xx[200];
  xx[570] = xx[481] * xx[475];
  xx[571] = xx[19] * (xx[569] - xx[570]);
  xx[572] = xx[534] - xx[566];
  xx[534] = xx[19] * xx[572];
  xx[566] = xx[570] + xx[569];
  xx[569] = xx[566] * xx[19];
  xx[570] = (xx[479] + xx[481] * xx[481]) * xx[19] - xx[21];
  xx[573] = xx[474];
  xx[574] = xx[533];
  xx[575] = xx[567];
  xx[576] = - xx[467];
  xx[577] = xx[477];
  xx[578] = xx[571];
  xx[579] = xx[534];
  xx[580] = - xx[569];
  xx[581] = xx[570];
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute12' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[479] = xx[52] / xx[235];
  xx[582] = xx[52] - xx[52] * xx[479];
  xx[583] = xx[50] * xx[474];
  xx[584] = - (xx[50] * xx[467]);
  xx[585] = xx[50] * xx[534];
  xx[586] = xx[51] * xx[533];
  xx[587] = xx[51] * xx[477];
  xx[588] = - (xx[51] * xx[569]);
  xx[589] = xx[567] * xx[582];
  xx[590] = xx[571] * xx[582];
  xx[591] = xx[570] * xx[582];
  pm_math_matrix3x3Compose(xx + 573, xx + 583, xx + 592);
  xx[582] = 5.275037938510027e-15;
  xx[583] = xx[582] / xx[235];
  xx[584] = xx[52] * xx[583];
  xx[585] = 2.891114289123629e-16;
  xx[586] = xx[585] / xx[235];
  xx[587] = xx[52] * xx[586];
  xx[588] = xx[584] * xx[533] - xx[587] * xx[474];
  xx[589] = xx[588] * xx[567];
  xx[590] = xx[467] * xx[587] + xx[584] * xx[477];
  xx[591] = xx[590] * xx[567];
  xx[601] = xx[587] * xx[534] + xx[569] * xx[584];
  xx[584] = xx[601] * xx[567];
  xx[587] = xx[588] * xx[571];
  xx[602] = xx[590] * xx[571];
  xx[603] = xx[601] * xx[571];
  xx[604] = xx[588] * xx[570];
  xx[588] = xx[590] * xx[570];
  xx[590] = xx[601] * xx[570];
  xx[605] = - xx[589];
  xx[606] = - xx[591];
  xx[607] = xx[584];
  xx[608] = - xx[587];
  xx[609] = - xx[602];
  xx[610] = xx[603];
  xx[611] = - xx[604];
  xx[612] = - xx[588];
  xx[613] = xx[590];
  xx[601] = - xx[194];
  xx[614] = - xx[481];
  xx[615] = xx[200];
  xx[616] = xx[601];
  xx[617] = xx[475];
  xx[618] = xx[614];
  xx[619] = 1.121202762681406e-11;
  xx[620] = 6.145027516349377e-13;
  xx[621] = - xx[619];
  xx[622] = - xx[620];
  xx[623] = - 3.999999999522439e-3;
  pm_math_quatXform(xx + 615, xx + 621, xx + 624);
  xx[621] = 0.1412410329922704 - xx[624];
  xx[622] = 0.05221615474387575 - xx[626];
  xx[626] = xx[621];
  xx[627] = - xx[625];
  xx[628] = xx[622];
  pm_math_matrix3x3PostCross(xx + 605, xx + 626, xx + 629);
  xx[605] = xx[393] - xx[585] * xx[586];
  xx[606] = xx[582] * xx[586];
  xx[607] = xx[393] - xx[582] * xx[583];
  xx[638] = xx[605] * xx[474] + xx[606] * xx[533];
  xx[639] = xx[606] * xx[477] - xx[467] * xx[605];
  xx[640] = xx[534] * xx[605] - xx[606] * xx[569];
  xx[641] = xx[533] * xx[607] + xx[606] * xx[474];
  xx[642] = xx[607] * xx[477] - xx[606] * xx[467];
  xx[643] = xx[606] * xx[534] - xx[569] * xx[607];
  xx[644] = xx[393] * xx[567];
  xx[645] = xx[393] * xx[571];
  xx[646] = xx[393] * xx[570];
  pm_math_matrix3x3Compose(xx + 573, xx + 638, xx + 605);
  pm_math_matrix3x3PostCross(xx + 605, xx + 626, xx + 638);
  pm_math_matrix3x3PreCross(xx + 638, xx + 626, xx + 647);
  xx[467] = xx[193] * xx[205];
  xx[533] = xx[19] * xx[467];
  xx[534] = xx[325] / xx[326];
  xx[567] = xx[393] - xx[325] * xx[534];
  xx[569] = xx[337] * xx[534];
  xx[570] = xx[193] * xx[193];
  xx[571] = xx[19] * xx[570] - xx[21];
  xx[623] = xx[569] * xx[571];
  xx[624] = xx[533] * xx[567] + xx[623];
  xx[656] = xx[569] * xx[533];
  xx[569] = xx[337] / xx[326];
  xx[657] = xx[393] - xx[337] * xx[569];
  xx[658] = xx[656] + xx[657] * xx[571];
  xx[659] = xx[624] * xx[533] + xx[658] * xx[571];
  xx[660] = xx[659] * xx[243];
  xx[661] = xx[658] * xx[533] - xx[624] * xx[571];
  xx[624] = xx[243] * xx[661];
  xx[658] = (xx[570] + xx[205] * xx[205]) * xx[19] - xx[21];
  xx[570] = xx[52] * xx[534];
  xx[662] = xx[52] * xx[569];
  xx[663] = xx[658] * (xx[570] * xx[533] - xx[662] * xx[571]);
  xx[664] = xx[243] * xx[663];
  xx[665] = xx[386] - xx[421] - xx[417] - xx[448] - (xx[409] - (xx[457] * xx[465]
    + xx[451] * xx[462])) + xx[509] - xx[545] - xx[541] - xx[563] + xx[598] -
    xx[635] - xx[631] - xx[653] - (xx[660] * xx[241] - xx[624] * xx[238] - xx
    [664]);
  xx[666] = xx[52] / xx[358];
  xx[667] = (xx[400] * xx[397] - xx[395] * xx[401]) * xx[351];
  xx[395] = xx[667] * xx[462] + xx[354] * xx[465];
  xx[400] = xx[397] * xx[454] + xx[452];
  xx[452] = xx[410] * xx[401] + xx[455];
  xx[410] = xx[401] * xx[400] - xx[397] * xx[452];
  xx[454] = xx[462] * xx[410] + xx[456] * xx[465];
  xx[455] = xx[401] * xx[452] + xx[397] * xx[400];
  xx[400] = xx[455] * xx[462] + xx[466] * xx[465];
  xx[452] = 1.754495192997305e-3;
  xx[668] = xx[52] / xx[326];
  xx[669] = (xx[570] * xx[571] + xx[662] * xx[533]) * xx[658];
  xx[570] = xx[669] * xx[238] + xx[663] * xx[241];
  xx[662] = xx[567] * xx[571] - xx[656];
  xx[567] = xx[533] * xx[657] - xx[623];
  xx[623] = xx[571] * xx[662] + xx[533] * xx[567];
  xx[656] = xx[623] * xx[238] - xx[241] * xx[661];
  xx[657] = xx[571] * xx[567] - xx[533] * xx[662];
  xx[567] = xx[657] * xx[238] - xx[659] * xx[241];
  xx[662] = xx[351] * (xx[52] - xx[52] * xx[666]) * xx[351] - xx[395] - xx[395]
    + xx[454] * xx[465] + xx[400] * xx[462] + xx[388] - xx[423] - xx[423] - xx
    [450] + xx[511] - xx[547] - xx[547] - xx[565] + xx[600] - xx[637] - xx[637]
    - xx[655] + xx[452] + xx[658] * (xx[52] - xx[52] * xx[668]) * xx[658] - xx
    [570] - xx[570] + xx[656] * xx[238] - xx[567] * xx[241];
  xx[395] = xx[454] - xx[354] - (xx[376] + xx[429]) - (xx[499] + xx[553]) - (xx
    [588] + xx[643]) + xx[663] + xx[567];
  xx[354] = xx[195] * xx[665] + xx[662] * xx[201] + xx[395] * xx[291];
  xx[376] = xx[379] + xx[427] - xx[457] + xx[502] + xx[551] + xx[591] + xx[641]
    - xx[660];
  xx[379] = xx[50] * xx[401];
  xx[427] = xx[51] * xx[397];
  xx[429] = xx[393] * xx[351] * xx[351];
  xx[499] = xx[429] * xx[462];
  xx[502] = 1.754495192997305e-3;
  xx[551] = xx[50] * xx[571];
  xx[553] = xx[51] * xx[533];
  xx[570] = xx[393] * xx[658] * xx[658];
  xx[588] = xx[570] * xx[238];
  xx[591] = xx[379] * xx[401] + xx[427] * xx[397] + xx[499] * xx[462] + xx[341] *
    xx[457] + xx[380] - xx[415] - xx[415] - xx[442] + xx[503] - xx[539] - xx[539]
    - xx[557] + xx[592] - xx[629] - xx[629] - xx[647] + xx[502] + xx[551] * xx
    [571] + xx[553] * xx[533] + xx[588] * xx[238] + xx[243] * xx[660];
  xx[457] = xx[382] - xx[417] - xx[421] - xx[444] - (xx[409] - xx[454] * xx[341])
    + xx[505] - xx[541] - xx[545] - xx[559] + xx[594] - xx[631] - xx[635] - xx
    [649] + xx[664] + xx[567] * xx[243];
  xx[409] = xx[376] * xx[291] - (xx[591] * xx[195] + xx[201] * xx[457]);
  xx[454] = 0.3963053387673541;
  xx[567] = xx[456] + xx[437] + xx[520] + xx[609] + xx[454] + xx[659];
  xx[437] = xx[376] * xx[195] - xx[395] * xx[201] - xx[567] * xx[291];
  xx[456] = xx[354] * xx[201] - xx[195] * xx[409] - xx[437] * xx[291];
  ii[1] = factorSymmetricPosDef(xx + 456, 1, xx + 520);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute9' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[520] = (xx[312] + xx[329] * xx[201] + xx[195] * xx[338] + xx[291] * xx[328])
    / xx[456];
  xx[609] = xx[341] * xx[410];
  xx[641] = xx[243] * xx[657];
  xx[643] = xx[609] + xx[390] + xx[428] + xx[513] + xx[552] + xx[602] + xx[642]
    + xx[641];
  xx[390] = xx[427] * xx[401] - xx[379] * xx[397] - (xx[341] * xx[451] - xx[499]
    * xx[465]) + xx[383] - xx[418] - xx[416] - xx[445] + xx[506] - xx[542] - xx
    [540] - xx[560] + xx[595] - xx[632] - xx[630] - xx[650] + xx[553] * xx[571]
    - xx[551] * xx[533] - (xx[243] * xx[624] + xx[588] * xx[241]);
  xx[379] = xx[341] * xx[667];
  xx[427] = xx[243] * xx[669];
  xx[428] = xx[379] - xx[400] * xx[341] + xx[385] - xx[420] - xx[422] - xx[447]
    + xx[508] - xx[544] - xx[546] - xx[562] + xx[597] - xx[634] - xx[636] - xx
    [652] + xx[427] - xx[656] * xx[243];
  xx[513] = xx[643] * xx[291] - (xx[390] * xx[195] + xx[428] * xx[201]);
  xx[551] = xx[520] * xx[409] + xx[338];
  xx[552] = xx[513] * xx[520] - xx[340] * xx[243];
  xx[553] = xx[329] - xx[354] * xx[520];
  pm_math_quatXform(xx + 214, xx + 551, xx + 670);
  xx[551] = - xx[258];
  xx[552] = xx[252];
  xx[553] = - xx[247];
  xx[329] = xx[377] + xx[424] - xx[451] + xx[548] - xx[500] + xx[589] + xx[638]
    - xx[624];
  xx[338] = xx[400] - xx[667] - (xx[392] + xx[426]) - (xx[550] - xx[515]) - (xx
    [604] + xx[640]) + xx[656] - xx[669];
  xx[377] = xx[466] + xx[434] + xx[517] + xx[606] + xx[661];
  xx[392] = xx[329] * xx[195] - xx[338] * xx[201] - xx[377] * xx[291];
  xx[400] = xx[499] + xx[372] + xx[430] + xx[495] + xx[554] + xx[644] - xx[584]
    + xx[588];
  xx[372] = xx[378] + xx[432] + xx[501] + xx[556] + xx[646] - xx[590];
  xx[378] = xx[440] + xx[523] + xx[612];
  xx[424] = xx[400] * xx[195] + xx[372] * xx[201] - xx[378] * xx[291];
  xx[499] = xx[340] + xx[392] * xx[520];
  xx[500] = xx[328] + xx[437] * xx[520];
  xx[501] = xx[520] * xx[424];
  pm_math_quatXform(xx + 214, xx + 499, xx + 588);
  pm_math_cross3(xx + 551, xx + 588, xx + 499);
  xx[328] = xx[670] + xx[499];
  xx[340] = xx[204] * xx[204];
  xx[426] = (xx[340] + xx[202] * xx[202]) * xx[19] - xx[21];
  xx[430] = xx[202] * xx[203];
  xx[432] = xx[204] * xx[192];
  xx[434] = xx[19] * (xx[430] - xx[432]);
  xx[440] = xx[202] * xx[192];
  xx[451] = xx[204] * xx[203];
  xx[466] = (xx[440] + xx[451]) * xx[19];
  xx[495] = (xx[430] + xx[432]) * xx[19];
  xx[430] = (xx[340] + xx[203] * xx[203]) * xx[19] - xx[21];
  xx[432] = xx[192] * xx[203];
  xx[515] = xx[202] * xx[204];
  xx[517] = xx[19] * (xx[432] - xx[515]);
  xx[523] = xx[19] * (xx[440] - xx[451]);
  xx[440] = (xx[432] + xx[515]) * xx[19];
  xx[432] = (xx[340] + xx[192] * xx[192]) * xx[19] - xx[21];
  xx[673] = xx[426];
  xx[674] = xx[434];
  xx[675] = xx[466];
  xx[676] = xx[495];
  xx[677] = xx[430];
  xx[678] = xx[517];
  xx[679] = xx[523];
  xx[680] = xx[440];
  xx[681] = xx[432];
  xx[340] = xx[409] / xx[456];
  xx[451] = xx[51] * xx[401];
  xx[515] = xx[50] * xx[397];
  xx[548] = xx[429] * xx[465];
  xx[550] = xx[51] * xx[571];
  xx[554] = xx[50] * xx[533];
  xx[556] = xx[570] * xx[241];
  xx[584] = xx[451] * xx[397] - xx[515] * xx[401] - (xx[341] * xx[609] - xx[548]
    * xx[462]) + xx[381] - xx[416] - xx[418] - xx[443] + xx[504] - xx[540] - xx
    [542] - xx[558] + xx[593] - xx[630] - xx[632] - xx[648] + xx[550] * xx[533]
    - xx[554] * xx[571] - (xx[243] * xx[641] + xx[556] * xx[238]);
  xx[602] = xx[513] * xx[340];
  xx[604] = xx[354] * xx[340];
  xx[606] = xx[455] * xx[341];
  xx[415] = 3.506321102188747e-3;
  xx[416] = xx[623] * xx[243];
  xx[417] = xx[515] * xx[397] + xx[451] * xx[401] + xx[341] * xx[606] + xx[548] *
    xx[465] + xx[384] - xx[419] - xx[419] - xx[446] + xx[507] - xx[543] - xx[543]
    - xx[561] + xx[596] - xx[633] - xx[633] - xx[651] + xx[415] + xx[554] * xx
    [533] + xx[550] * xx[571] + xx[243] * xx[416] + xx[556] * xx[241];
  xx[418] = xx[513] / xx[456];
  xx[419] = xx[354] * xx[418];
  xx[380] = xx[379] - (xx[609] * xx[465] + xx[606] * xx[462]) + xx[387] - xx[422]
    - xx[420] - xx[449] + xx[510] - xx[546] - xx[544] - xx[564] + xx[599] - xx
    [636] - xx[634] - xx[654] + xx[641] * xx[241] - xx[416] * xx[238] + xx[427];
  xx[379] = xx[354] / xx[456];
  xx[442] = xx[591] - xx[340] * xx[409];
  xx[443] = xx[584] - xx[602];
  xx[444] = xx[457] + xx[604];
  xx[445] = xx[390] - xx[602];
  xx[446] = xx[417] - xx[513] * xx[418];
  xx[447] = xx[428] + xx[419];
  xx[448] = xx[665] + xx[604];
  xx[449] = xx[380] + xx[419];
  xx[450] = xx[662] - xx[354] * xx[379];
  pm_math_matrix3x3ComposeTranspose(xx + 442, xx + 673, xx + 503);
  pm_math_matrix3x3Compose(xx + 673, xx + 503, xx + 442);
  xx[381] = xx[392] / xx[456];
  xx[382] = xx[437] / xx[456];
  xx[383] = xx[424] / xx[456];
  xx[384] = xx[606] + xx[375] + xx[425] + xx[549] - xx[498] + xx[587] + xx[639]
    + xx[416];
  xx[375] = xx[548] + xx[391] + xx[431] + xx[514] + xx[555] + xx[645] - xx[603]
    - xx[556];
  xx[503] = - (xx[329] + xx[381] * xx[409]);
  xx[504] = - (xx[376] + xx[382] * xx[409]);
  xx[505] = - (xx[400] + xx[383] * xx[409]);
  xx[506] = - (xx[384] + xx[513] * xx[381]);
  xx[507] = - (xx[643] + xx[513] * xx[382]);
  xx[508] = - (xx[375] + xx[513] * xx[383]);
  xx[509] = xx[338] + xx[354] * xx[381];
  xx[510] = xx[395] + xx[354] * xx[382];
  xx[511] = - (xx[372] - xx[354] * xx[383]);
  pm_math_matrix3x3ComposeTranspose(xx + 503, xx + 673, xx + 539);
  pm_math_matrix3x3Compose(xx + 673, xx + 539, xx + 503);
  pm_math_matrix3x3PostCross(xx + 503, xx + 551, xx + 539);
  xx[385] = xx[455] + xx[433] + xx[516] + xx[605] + xx[454] + xx[623];
  xx[386] = xx[437] * xx[381];
  xx[387] = xx[435] + xx[518] + xx[607];
  xx[388] = xx[381] * xx[424];
  xx[391] = xx[410] + xx[436] + xx[519] + xx[608] + xx[657];
  xx[410] = xx[438] + xx[521] + xx[610];
  xx[416] = xx[382] * xx[424];
  xx[419] = xx[439] + xx[522] + xx[611];
  xx[420] = xx[429] + xx[441] + xx[524] + xx[613] + xx[454] + xx[570];
  xx[554] = xx[385] - xx[392] * xx[381];
  xx[555] = xx[377] - xx[386];
  xx[556] = xx[387] - xx[388];
  xx[557] = xx[391] - xx[386];
  xx[558] = xx[567] - xx[437] * xx[382];
  xx[559] = xx[410] - xx[416];
  xx[560] = xx[419] - xx[388];
  xx[561] = xx[378] - xx[416];
  xx[562] = xx[420] - xx[383] * xx[424];
  pm_math_matrix3x3ComposeTranspose(xx + 554, xx + 673, xx + 592);
  pm_math_matrix3x3Compose(xx + 673, xx + 592, xx + 554);
  pm_math_matrix3x3PostCross(xx + 554, xx + 551, xx + 592);
  pm_math_matrix3x3PreCross(xx + 592, xx + 551, xx + 602);
  xx[386] = xx[50] + xx[442] - xx[539] - xx[539] - xx[602];
  xx[388] = xx[504] - xx[595];
  xx[416] = xx[505] - xx[598];
  xx[421] = xx[386] - (xx[230] * xx[388] + xx[229] * xx[416]);
  xx[422] = xx[393] + xx[558];
  xx[423] = xx[388] - (xx[422] * xx[230] + xx[229] * xx[559]);
  xx[425] = xx[393] + xx[562];
  xx[427] = xx[416] - (xx[230] * xx[561] + xx[425] * xx[229]);
  xx[429] = xx[443] - xx[540] - xx[542] - xx[603];
  xx[431] = xx[503] - xx[592];
  xx[433] = xx[429] + xx[230] * xx[431] - xx[228] * xx[416];
  xx[435] = xx[507] - xx[596];
  xx[436] = xx[435] + xx[230] * xx[557] - xx[228] * xx[559];
  xx[438] = xx[508] - xx[599];
  xx[439] = xx[438] + xx[230] * xx[560] - xx[425] * xx[228];
  xx[441] = xx[433] - (xx[436] * xx[230] + xx[439] * xx[229]);
  xx[451] = xx[444] - xx[541] - xx[545] - xx[604];
  xx[454] = xx[451] + xx[229] * xx[431] + xx[228] * xx[388];
  xx[455] = xx[510] - xx[597];
  xx[498] = xx[455] + xx[229] * xx[557] + xx[422] * xx[228];
  xx[503] = xx[511] - xx[600];
  xx[504] = xx[503] + xx[229] * xx[560] + xx[228] * xx[561];
  xx[505] = xx[454] - (xx[498] * xx[230] + xx[504] * xx[229]);
  xx[507] = xx[51] + xx[446] - xx[543] - xx[543] - xx[606];
  xx[508] = xx[506] - xx[593];
  xx[506] = xx[507] + xx[230] * xx[508] - xx[228] * xx[438];
  xx[510] = xx[393] + xx[554];
  xx[511] = xx[508] + xx[510] * xx[230] - xx[228] * xx[556];
  xx[514] = xx[447] - xx[544] - xx[546] - xx[607];
  xx[515] = xx[514] + xx[229] * xx[508] + xx[228] * xx[435];
  xx[516] = xx[509] - xx[594];
  xx[509] = xx[516] + xx[510] * xx[229] + xx[228] * xx[555];
  xx[518] = xx[515] + xx[509] * xx[230] - xx[504] * xx[228];
  xx[519] = xx[52] + xx[450] - xx[547] - xx[547] - xx[610];
  xx[521] = xx[519] + xx[229] * xx[516] + xx[228] * xx[455];
  xx[592] = xx[421] - (xx[423] * xx[230] + xx[427] * xx[229]);
  xx[593] = xx[441];
  xx[594] = xx[505];
  xx[595] = xx[441];
  xx[596] = xx[506] + xx[511] * xx[230] - xx[439] * xx[228];
  xx[597] = xx[518];
  xx[598] = xx[505];
  xx[599] = xx[518];
  xx[600] = xx[521] + xx[509] * xx[229] + xx[498] * xx[228];
  ii[1] = factorSymmetricPosDef(xx + 592, 3, xx + 547);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_15/Spherical1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  pm_math_quatCompose(xx + 304, xx + 196, xx + 547);
  xx[441] = xx[198] * xx[198];
  xx[505] = xx[199] * xx[199];
  xx[518] = xx[198] * xx[197];
  xx[522] = xx[196] * xx[199];
  xx[524] = xx[19] * (xx[518] - xx[522]);
  xx[539] = xx[196] * xx[198];
  xx[543] = xx[197] * xx[199];
  xx[562] = xx[21] - (xx[441] + xx[505]) * xx[19];
  xx[563] = xx[524];
  xx[564] = (xx[539] + xx[543]) * xx[19];
  pm_math_cross3(xx + 562, xx + 231, xx + 611);
  pm_math_quatXform(xx + 547, xx + 611, xx + 562);
  xx[611] = xx[184];
  xx[612] = xx[186];
  xx[613] = xx[182];
  xx[182] = xx[185] * xx[256];
  xx[186] = xx[187] * xx[248];
  xx[554] = xx[182] + xx[186];
  xx[558] = xx[256] * xx[184];
  xx[565] = xx[248] * xx[184];
  xx[629] = - xx[554];
  xx[630] = - xx[558];
  xx[631] = - xx[565];
  pm_math_cross3(xx + 611, xx + 629, xx + 632);
  xx[570] = xx[185] * xx[229];
  xx[587] = xx[187] * xx[230];
  xx[623] = xx[570] - xx[587];
  xx[624] = xx[229] * xx[184];
  xx[629] = xx[230] * xx[184];
  xx[635] = xx[623];
  xx[636] = xx[624];
  xx[637] = - xx[629];
  pm_math_cross3(xx + 611, xx + 635, xx + 638);
  xx[630] = (xx[623] * xx[183] + xx[638]) * xx[19];
  xx[623] = xx[19] * (xx[639] + xx[624] * xx[183]);
  xx[624] = (xx[640] - xx[629] * xx[183]) * xx[19];
  xx[635] = xx[19] * (xx[632] - xx[554] * xx[183]) + xx[630];
  xx[636] = xx[19] * (xx[633] - xx[558] * xx[183]) + xx[623] - xx[248] - xx[230];
  xx[637] = xx[256] + xx[19] * (xx[634] - xx[565] * xx[183]) + xx[624] - xx[229];
  pm_math_quatXform(xx + 300, xx + 635, xx + 631);
  xx[554] = xx[562] + xx[631];
  xx[558] = xx[197] * xx[197];
  xx[565] = xx[198] * xx[199];
  xx[629] = xx[196] * xx[197];
  xx[634] = xx[19] * (xx[565] - xx[629]);
  xx[635] = (xx[522] + xx[518]) * xx[19];
  xx[636] = xx[21] - (xx[505] + xx[558]) * xx[19];
  xx[637] = xx[634];
  pm_math_cross3(xx + 635, xx + 231, xx + 638);
  pm_math_quatXform(xx + 547, xx + 638, xx + 635);
  xx[638] = xx[185] * xx[250];
  xx[639] = xx[250] * xx[184];
  xx[640] = xx[639] - xx[186];
  xx[186] = xx[185] * xx[248];
  xx[644] = xx[638];
  xx[645] = xx[640];
  xx[646] = xx[186];
  pm_math_cross3(xx + 611, xx + 644, xx + 647);
  xx[641] = xx[185] * xx[228];
  xx[642] = xx[228] * xx[184];
  xx[644] = xx[587] - xx[642];
  xx[587] = xx[185] * xx[230];
  xx[650] = xx[641];
  xx[651] = - xx[644];
  xx[652] = xx[587];
  pm_math_cross3(xx + 611, xx + 650, xx + 653);
  xx[645] = xx[19] * (xx[653] + xx[641] * xx[183]);
  xx[641] = xx[19] * (xx[654] - xx[644] * xx[183]);
  xx[644] = (xx[587] * xx[183] + xx[655]) * xx[19];
  xx[650] = xx[248] + (xx[638] * xx[183] + xx[647]) * xx[19] + xx[645] + xx[230];
  xx[651] = (xx[640] * xx[183] + xx[648]) * xx[19] + xx[641];
  xx[652] = (xx[186] * xx[183] + xx[649]) * xx[19] + xx[644] - xx[250] - xx[228];
  pm_math_quatXform(xx + 300, xx + 650, xx + 646);
  xx[186] = xx[635] + xx[646];
  xx[248] = xx[671] + xx[500];
  xx[587] = xx[19] * (xx[543] - xx[539]);
  xx[649] = xx[587];
  xx[650] = (xx[629] + xx[565]) * xx[19];
  xx[651] = xx[21] - (xx[558] + xx[441]) * xx[19];
  pm_math_cross3(xx + 649, xx + 231, xx + 652);
  pm_math_quatXform(xx + 547, xx + 652, xx + 649);
  xx[547] = xx[187] * xx[250];
  xx[548] = xx[187] * xx[256];
  xx[549] = xx[639] - xx[182];
  pm_math_cross3(xx + 611, xx + 547, xx + 638);
  xx[182] = xx[187] * xx[228];
  xx[550] = xx[187] * xx[229];
  xx[652] = xx[642] + xx[570];
  xx[653] = xx[182];
  xx[654] = - xx[550];
  xx[655] = xx[652];
  pm_math_cross3(xx + 611, xx + 653, xx + 659);
  xx[570] = (xx[182] * xx[183] + xx[659]) * xx[19];
  xx[182] = xx[19] * (xx[660] - xx[550] * xx[183]);
  xx[550] = (xx[652] * xx[183] + xx[661]) * xx[19];
  xx[652] = (xx[547] * xx[183] + xx[638]) * xx[19] + xx[570] - xx[256] + xx[229];
  xx[653] = xx[250] + (xx[548] * xx[183] + xx[639]) * xx[19] + xx[182] + xx[228];
  xx[654] = (xx[549] * xx[183] + xx[640]) * xx[19] + xx[550];
  pm_math_quatXform(xx + 300, xx + 652, xx + 547);
  xx[250] = xx[649] + xx[547];
  xx[256] = xx[672] + xx[501];
  xx[499] = xx[554] - (xx[328] - (xx[230] * xx[589] + xx[229] * xx[590]));
  xx[500] = xx[186] - (xx[248] + xx[230] * xx[588] - xx[228] * xx[590]);
  xx[501] = xx[250] - (xx[256] + xx[229] * xx[588] + xx[228] * xx[589]);
  solveSymmetricPosDef(xx + 592, xx + 499, 3, 1, xx + 638, xx + 652);
  xx[499] = xx[445] - xx[542] - xx[540] - xx[605];
  xx[500] = xx[499] - (xx[230] * xx[435] + xx[229] * xx[438]);
  xx[501] = xx[448] - xx[545] - xx[541] - xx[608];
  xx[540] = xx[501] - (xx[230] * xx[455] + xx[229] * xx[503]);
  xx[442] = xx[449] - xx[546] - xx[544] - xx[609];
  xx[443] = xx[442] + xx[230] * xx[516] - xx[228] * xx[503];
  xx[444] = xx[328] + xx[421] * xx[638] + xx[433] * xx[639] + xx[454] * xx[640];
  xx[445] = xx[248] + xx[500] * xx[638] + xx[506] * xx[639] + xx[515] * xx[640];
  xx[446] = xx[256] + xx[540] * xx[638] + xx[443] * xx[639] + xx[521] * xx[640];
  pm_math_quatXform(xx + 188, xx + 444, xx + 447);
  xx[444] = xx[251];
  xx[445] = xx[272];
  xx[446] = xx[262];
  xx[248] = xx[431] - (xx[230] * xx[555] + xx[229] * xx[556]);
  xx[544] = xx[588] + xx[248] * xx[638] + xx[511] * xx[639] + xx[509] * xx[640];
  xx[545] = xx[589] + xx[423] * xx[638] + xx[436] * xx[639] + xx[498] * xx[640];
  xx[546] = xx[590] + xx[427] * xx[638] + xx[439] * xx[639] + xx[504] * xx[640];
  pm_math_quatXform(xx + 188, xx + 544, xx + 588);
  pm_math_cross3(xx + 444, xx + 588, xx + 544);
  xx[256] = xx[447] + xx[544];
  xx[328] = xx[183] * xx[183];
  xx[450] = (xx[328] + xx[184] * xx[184]) * xx[19] - xx[21];
  xx[541] = xx[187] * xx[183];
  xx[542] = xx[185] * xx[184];
  xx[602] = xx[19] * (xx[541] - xx[542]);
  xx[603] = xx[187] * xx[184];
  xx[604] = xx[185] * xx[183];
  xx[605] = (xx[603] + xx[604]) * xx[19];
  xx[606] = (xx[542] + xx[541]) * xx[19];
  xx[541] = (xx[328] + xx[185] * xx[185]) * xx[19] - xx[21];
  xx[542] = xx[185] * xx[187];
  xx[607] = xx[183] * xx[184];
  xx[608] = xx[19] * (xx[542] - xx[607]);
  xx[609] = xx[19] * (xx[604] - xx[603]);
  xx[603] = (xx[542] + xx[607]) * xx[19];
  xx[542] = (xx[328] + xx[187] * xx[187]) * xx[19] - xx[21];
  xx[669] = xx[450];
  xx[670] = xx[602];
  xx[671] = - xx[605];
  xx[672] = - xx[606];
  xx[673] = xx[541];
  xx[674] = xx[608];
  xx[675] = xx[609];
  xx[676] = xx[603];
  xx[677] = xx[542];
  xx[678] = xx[421];
  xx[679] = xx[433];
  xx[680] = xx[454];
  xx[681] = xx[500];
  xx[682] = xx[506];
  xx[683] = xx[515];
  xx[684] = xx[540];
  xx[685] = xx[443];
  xx[686] = xx[521];
  xx[687] = xx[248];
  xx[688] = xx[511];
  xx[689] = xx[509];
  xx[690] = xx[423];
  xx[691] = xx[436];
  xx[692] = xx[498];
  xx[693] = xx[427];
  xx[694] = xx[439];
  xx[695] = xx[504];
  solveSymmetricPosDef(xx + 592, xx + 678, 3, 6, xx + 696, xx + 652);
  xx[328] = xx[500] * xx[696] + xx[506] * xx[697] + xx[515] * xx[698];
  xx[604] = xx[540] * xx[696] + xx[443] * xx[697] + xx[521] * xx[698];
  xx[607] = xx[540] * xx[699] + xx[443] * xx[700] + xx[521] * xx[701];
  xx[678] = xx[386] - (xx[421] * xx[696] + xx[433] * xx[697] + xx[454] * xx[698]);
  xx[679] = xx[429] - xx[328];
  xx[680] = xx[451] - xx[604];
  xx[681] = xx[499] - xx[328];
  xx[682] = xx[507] - (xx[500] * xx[699] + xx[506] * xx[700] + xx[515] * xx[701]);
  xx[683] = xx[514] - xx[607];
  xx[684] = xx[501] - xx[604];
  xx[685] = xx[442] - xx[607];
  xx[686] = xx[519] - (xx[540] * xx[702] + xx[443] * xx[703] + xx[521] * xx[704]);
  pm_math_matrix3x3ComposeTranspose(xx + 678, xx + 669, xx + 687);
  pm_math_matrix3x3Compose(xx + 669, xx + 687, xx + 678);
  xx[687] = xx[431] - (xx[421] * xx[705] + xx[433] * xx[706] + xx[454] * xx[707]);
  xx[688] = xx[388] - (xx[421] * xx[708] + xx[433] * xx[709] + xx[454] * xx[710]);
  xx[689] = xx[416] - (xx[421] * xx[711] + xx[433] * xx[712] + xx[454] * xx[713]);
  xx[690] = xx[508] - (xx[500] * xx[705] + xx[506] * xx[706] + xx[515] * xx[707]);
  xx[691] = xx[435] - (xx[500] * xx[708] + xx[506] * xx[709] + xx[515] * xx[710]);
  xx[692] = xx[438] - (xx[500] * xx[711] + xx[506] * xx[712] + xx[515] * xx[713]);
  xx[693] = xx[516] - (xx[540] * xx[705] + xx[443] * xx[706] + xx[521] * xx[707]);
  xx[694] = xx[455] - (xx[540] * xx[708] + xx[443] * xx[709] + xx[521] * xx[710]);
  xx[695] = xx[503] - (xx[540] * xx[711] + xx[443] * xx[712] + xx[521] * xx[713]);
  pm_math_matrix3x3ComposeTranspose(xx + 687, xx + 669, xx + 714);
  pm_math_matrix3x3Compose(xx + 669, xx + 714, xx + 687);
  pm_math_matrix3x3PostCross(xx + 687, xx + 444, xx + 714);
  xx[328] = xx[423] * xx[705] + xx[436] * xx[706] + xx[498] * xx[707];
  xx[604] = xx[427] * xx[705] + xx[439] * xx[706] + xx[504] * xx[707];
  xx[607] = xx[427] * xx[708] + xx[439] * xx[709] + xx[504] * xx[710];
  xx[723] = xx[510] - (xx[248] * xx[705] + xx[511] * xx[706] + xx[509] * xx[707]);
  xx[724] = xx[555] - xx[328];
  xx[725] = xx[556] - xx[604];
  xx[726] = xx[557] - xx[328];
  xx[727] = xx[422] - (xx[423] * xx[708] + xx[436] * xx[709] + xx[498] * xx[710]);
  xx[728] = xx[559] - xx[607];
  xx[729] = xx[560] - xx[604];
  xx[730] = xx[561] - xx[607];
  xx[731] = xx[425] - (xx[427] * xx[711] + xx[439] * xx[712] + xx[504] * xx[713]);
  pm_math_matrix3x3ComposeTranspose(xx + 723, xx + 669, xx + 732);
  pm_math_matrix3x3Compose(xx + 669, xx + 732, xx + 723);
  pm_math_matrix3x3PostCross(xx + 723, xx + 444, xx + 669);
  pm_math_matrix3x3PreCross(xx + 669, xx + 444, xx + 732);
  xx[328] = xx[78] + xx[678] - xx[714] - xx[714] - xx[732];
  xx[604] = xx[679] - xx[715] - xx[717] - xx[733];
  xx[607] = xx[687] - xx[669];
  xx[610] = xx[688] - xx[672];
  xx[642] = xx[689] - xx[675];
  xx[652] = xx[690] - xx[670];
  xx[653] = xx[691] - xx[673];
  xx[654] = xx[692] - xx[676];
  xx[655] = xx[693] - xx[671];
  xx[656] = xx[694] - xx[674];
  xx[657] = xx[695] - xx[677];
  xx[669] = xx[607];
  xx[670] = xx[610];
  xx[671] = xx[642];
  xx[672] = xx[652];
  xx[673] = xx[653];
  xx[674] = xx[654];
  xx[675] = xx[655];
  xx[676] = xx[656];
  xx[677] = xx[657];
  pm_math_matrix3x3Xform(xx + 669, xx + 111, xx + 659);
  xx[663] = xx[328] - xx[89] * xx[604] + xx[659];
  xx[664] = xx[681] - xx[717] - xx[715] - xx[735];
  xx[667] = xx[79] + xx[682] - xx[718] - xx[718] - xx[736];
  xx[687] = xx[664] - xx[667] * xx[89] + xx[660];
  xx[688] = xx[73] + xx[723];
  xx[689] = xx[73] + xx[727];
  xx[741] = xx[688];
  xx[742] = xx[724];
  xx[743] = xx[725];
  xx[744] = xx[726];
  xx[745] = xx[689];
  xx[746] = xx[728];
  xx[747] = xx[729];
  xx[748] = xx[730];
  xx[749] = xx[73] + xx[731];
  pm_math_matrix3x3Xform(xx + 741, xx + 111, xx + 690);
  xx[693] = xx[607] - xx[89] * xx[652] + xx[690];
  xx[694] = xx[610] - xx[89] * xx[653] + xx[691];
  xx[690] = xx[642] - xx[89] * xx[654] + xx[692];
  xx[750] = xx[693];
  xx[751] = xx[694];
  xx[752] = xx[690];
  xx[691] = 7.670997177269469e-12;
  xx[753] = - xx[109];
  xx[754] = xx[90];
  xx[755] = xx[691];
  pm_math_matrix3x3Xform(xx + 669, xx + 753, xx + 756);
  xx[692] = xx[328] * xx[89] + xx[604] + xx[756];
  xx[695] = xx[89] * xx[664] + xx[667] + xx[757];
  pm_math_matrix3x3Xform(xx + 741, xx + 753, xx + 759);
  xx[723] = xx[89] * xx[607] + xx[652] + xx[759];
  xx[727] = xx[89] * xx[610] + xx[653] + xx[760];
  xx[759] = xx[89] * xx[642] + xx[654] + xx[761];
  xx[760] = xx[723];
  xx[761] = xx[727];
  xx[762] = xx[759];
  xx[763] = xx[692] - xx[695] * xx[89] + pm_math_dot3(xx + 111, xx + 760);
  xx[764] = xx[680] - xx[716] - xx[720] - xx[734];
  xx[765] = xx[764] + xx[67] * xx[610] - xx[68] * xx[607];
  xx[766] = xx[683] - xx[719] - xx[721] - xx[737];
  xx[767] = xx[766] + xx[67] * xx[653] - xx[68] * xx[652];
  xx[768] = xx[655] + xx[67] * xx[724] - xx[688] * xx[68];
  xx[769] = xx[656] + xx[689] * xx[67] - xx[68] * xx[726];
  xx[770] = xx[657] + xx[67] * xx[730] - xx[68] * xx[729];
  xx[771] = xx[765] - xx[767] * xx[89] + pm_math_dot3(xx + 111, xx + 768);
  xx[772] = xx[765] * xx[89] + xx[767] + pm_math_dot3(xx + 753, xx + 768);
  xx[714] = xx[80] + xx[686] - xx[722] - xx[722] - xx[740];
  xx[715] = xx[714] + xx[67] * xx[656] - xx[68] * xx[655];
  xx[773] = xx[663] - xx[687] * xx[89] + pm_math_dot3(xx + 111, xx + 750);
  xx[774] = xx[763];
  xx[775] = xx[771];
  xx[776] = xx[763];
  xx[777] = xx[692] * xx[89] + xx[695] + pm_math_dot3(xx + 753, xx + 760);
  xx[778] = xx[772];
  xx[779] = xx[771];
  xx[780] = xx[772];
  xx[781] = xx[715] + xx[769] * xx[67] - xx[768] * xx[68];
  ii[1] = factorSymmetricPosDef(xx + 773, 3, xx + 750);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_15/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  pm_math_quatCompose(xx + 300, xx + 206, xx + 760);
  xx[717] = xx[89] * xx[209];
  xx[718] = xx[89] * xx[207] + xx[208];
  xx[750] = xx[717];
  xx[751] = xx[209];
  xx[752] = - xx[718];
  pm_math_cross3(xx + 207, xx + 750, xx + 782);
  xx[722] = xx[206] * xx[209];
  xx[750] = xx[21] + (xx[782] - xx[206] * xx[717]) * xx[19];
  xx[751] = xx[19] * (xx[783] - xx[722]) - xx[89];
  xx[752] = xx[19] * (xx[784] + xx[206] * xx[718]);
  pm_math_cross3(xx + 750, xx + 231, xx + 782);
  pm_math_quatXform(xx + 760, xx + 782, xx + 750);
  xx[718] = - (xx[263] * xx[89]);
  xx[782] = xx[718];
  xx[783] = - xx[263];
  xx[784] = xx[273] + xx[257] * xx[89];
  pm_math_quatXform(xx + 178, xx + 782, xx + 785);
  pm_math_quatXform(xx + 178, xx + 111, xx + 782);
  xx[788] = xx[785] + xx[782];
  xx[789] = xx[786] + xx[783];
  xx[790] = xx[787] + xx[784];
  pm_math_quatXform(xx + 296, xx + 788, xx + 785);
  xx[771] = xx[750] + xx[785];
  xx[772] = xx[448] + xx[545];
  xx[788] = xx[207] - xx[89] * xx[208];
  xx[789] = - xx[209];
  xx[790] = xx[717];
  xx[791] = xx[788];
  pm_math_cross3(xx + 207, xx + 789, xx + 792);
  xx[789] = xx[89] + (xx[722] + xx[792]) * xx[19];
  xx[790] = xx[21] + xx[19] * (xx[793] - xx[89] * xx[722]);
  xx[791] = xx[19] * (xx[794] - xx[206] * xx[788]);
  pm_math_cross3(xx + 789, xx + 231, xx + 792);
  pm_math_quatXform(xx + 760, xx + 792, xx + 788);
  xx[791] = xx[263];
  xx[792] = xx[718];
  xx[793] = xx[273] * xx[89] - xx[257];
  pm_math_quatXform(xx + 178, xx + 791, xx + 794);
  pm_math_quatXform(xx + 178, xx + 753, xx + 791);
  xx[797] = xx[794] + xx[791];
  xx[798] = xx[795] + xx[792];
  xx[799] = xx[796] + xx[793];
  pm_math_quatXform(xx + 296, xx + 797, xx + 794);
  xx[263] = xx[788] + xx[794];
  xx[717] = xx[207] * xx[209];
  xx[718] = xx[206] * xx[208];
  xx[797] = xx[19] * (xx[717] - xx[718]);
  xx[798] = xx[206] * xx[207];
  xx[799] = xx[208] * xx[209];
  xx[800] = xx[207] * xx[207];
  xx[801] = xx[208] * xx[208];
  xx[802] = xx[797];
  xx[803] = (xx[798] + xx[799]) * xx[19];
  xx[804] = xx[21] - (xx[800] + xx[801]) * xx[19];
  pm_math_cross3(xx + 802, xx + 231, xx + 805);
  pm_math_quatXform(xx + 760, xx + 805, xx + 802);
  xx[760] = xx[173];
  xx[761] = xx[175];
  xx[762] = xx[177];
  xx[173] = xx[257] * xx[176];
  xx[175] = xx[273] * xx[176];
  xx[177] = xx[257] * xx[172] + xx[174] * xx[273];
  xx[805] = xx[173];
  xx[806] = xx[175];
  xx[807] = - xx[177];
  pm_math_cross3(xx + 760, xx + 805, xx + 808);
  xx[763] = xx[67] * xx[176];
  xx[805] = xx[68] * xx[176];
  xx[806] = xx[67] * xx[172] + xx[174] * xx[68];
  xx[811] = xx[763];
  xx[812] = xx[805];
  xx[813] = - xx[806];
  pm_math_cross3(xx + 760, xx + 811, xx + 814);
  xx[807] = xx[19] * (xx[814] + xx[763] * xx[171]);
  xx[763] = (xx[805] * xx[171] + xx[815]) * xx[19];
  xx[805] = (xx[816] - xx[806] * xx[171]) * xx[19];
  xx[811] = xx[19] * (xx[808] + xx[173] * xx[171]) + xx[807] - xx[273] - xx[68];
  xx[812] = xx[257] + xx[19] * (xx[809] + xx[175] * xx[171]) + xx[763] + xx[67];
  xx[813] = (xx[810] - xx[177] * xx[171]) * xx[19] + xx[805];
  pm_math_quatXform(xx + 296, xx + 811, xx + 808);
  xx[173] = xx[802] + xx[808];
  xx[175] = xx[449] + xx[546];
  xx[447] = xx[771] - (xx[256] - xx[772] * xx[89] + pm_math_dot3(xx + 111, xx +
    588));
  xx[448] = xx[263] - (xx[256] * xx[89] + xx[772] + pm_math_dot3(xx + 753, xx +
    588));
  xx[449] = xx[173] - (xx[175] + xx[67] * xx[589] - xx[68] * xx[588]);
  solveSymmetricPosDef(xx + 773, xx + 447, 3, 1, xx + 544, xx + 811);
  xx[177] = xx[684] - xx[720] - xx[716] - xx[738];
  xx[257] = xx[685] - xx[721] - xx[719] - xx[739];
  xx[273] = xx[177] - xx[89] * xx[257] + xx[661];
  xx[447] = xx[89] * xx[177] + xx[257] + xx[758];
  xx[659] = xx[256] + xx[663] * xx[544] + xx[692] * xx[545] + xx[765] * xx[546];
  xx[660] = xx[772] + xx[687] * xx[544] + xx[695] * xx[545] + xx[767] * xx[546];
  xx[661] = xx[175] + xx[273] * xx[544] + xx[447] * xx[545] + xx[715] * xx[546];
  pm_math_quatXform(xx + 178, xx + 659, xx + 678);
  xx[659] = xx[588] + xx[693] * xx[544] + xx[723] * xx[545] + xx[768] * xx[546];
  xx[660] = xx[589] + xx[694] * xx[544] + xx[727] * xx[545] + xx[769] * xx[546];
  xx[661] = xx[590] + xx[690] * xx[544] + xx[759] * xx[545] + xx[770] * xx[546];
  pm_math_quatXform(xx + 178, xx + 659, xx + 588);
  pm_math_cross3(xx + 277, xx + 588, xx + 659);
  xx[175] = xx[171] * xx[171];
  xx[256] = (xx[175] + xx[172] * xx[172]) * xx[19] - xx[21];
  xx[448] = xx[174] * xx[172];
  xx[449] = xx[176] * xx[171];
  xx[590] = (xx[448] + xx[449]) * xx[19];
  xx[659] = xx[176] * xx[172];
  xx[660] = xx[174] * xx[171];
  xx[678] = xx[19] * (xx[659] - xx[660]);
  xx[679] = xx[19] * (xx[448] - xx[449]);
  xx[448] = (xx[175] + xx[174] * xx[174]) * xx[19] - xx[21];
  xx[449] = xx[174] * xx[176];
  xx[681] = xx[172] * xx[171];
  xx[682] = (xx[449] + xx[681]) * xx[19];
  xx[683] = (xx[659] + xx[660]) * xx[19];
  xx[659] = xx[19] * (xx[449] - xx[681]);
  xx[449] = (xx[175] + xx[176] * xx[176]) * xx[19] - xx[21];
  xx[732] = xx[256];
  xx[733] = xx[590];
  xx[734] = xx[678];
  xx[735] = xx[679];
  xx[736] = xx[448];
  xx[737] = xx[682];
  xx[738] = xx[683];
  xx[739] = xx[659];
  xx[740] = xx[449];
  xx[811] = xx[663];
  xx[812] = xx[692];
  xx[813] = xx[765];
  xx[814] = xx[687];
  xx[815] = xx[695];
  xx[816] = xx[767];
  xx[817] = xx[273];
  xx[818] = xx[447];
  xx[819] = xx[715];
  xx[820] = xx[693];
  xx[821] = xx[723];
  xx[822] = xx[768];
  xx[823] = xx[694];
  xx[824] = xx[727];
  xx[825] = xx[769];
  xx[826] = xx[690];
  xx[827] = xx[759];
  xx[828] = xx[770];
  solveSymmetricPosDef(xx + 773, xx + 811, 3, 6, xx + 829, xx + 684);
  xx[175] = xx[687] * xx[829] + xx[695] * xx[830] + xx[767] * xx[831];
  xx[660] = xx[273] * xx[829] + xx[447] * xx[830] + xx[715] * xx[831];
  xx[681] = xx[273] * xx[832] + xx[447] * xx[833] + xx[715] * xx[834];
  xx[811] = xx[328] - (xx[663] * xx[829] + xx[692] * xx[830] + xx[765] * xx[831]);
  xx[812] = xx[604] - xx[175];
  xx[813] = xx[764] - xx[660];
  xx[814] = xx[664] - xx[175];
  xx[815] = xx[667] - (xx[687] * xx[832] + xx[695] * xx[833] + xx[767] * xx[834]);
  xx[816] = xx[766] - xx[681];
  xx[817] = xx[177] - xx[660];
  xx[818] = xx[257] - xx[681];
  xx[819] = xx[714] - (xx[273] * xx[835] + xx[447] * xx[836] + xx[715] * xx[837]);
  pm_math_matrix3x3ComposeTranspose(xx + 811, xx + 732, xx + 820);
  pm_math_matrix3x3Compose(xx + 732, xx + 820, xx + 811);
  xx[820] = xx[607] - (xx[663] * xx[838] + xx[692] * xx[839] + xx[765] * xx[840]);
  xx[821] = xx[610] - (xx[663] * xx[841] + xx[692] * xx[842] + xx[765] * xx[843]);
  xx[822] = xx[642] - (xx[663] * xx[844] + xx[692] * xx[845] + xx[765] * xx[846]);
  xx[823] = xx[652] - (xx[687] * xx[838] + xx[695] * xx[839] + xx[767] * xx[840]);
  xx[824] = xx[653] - (xx[687] * xx[841] + xx[695] * xx[842] + xx[767] * xx[843]);
  xx[825] = xx[654] - (xx[687] * xx[844] + xx[695] * xx[845] + xx[767] * xx[846]);
  xx[826] = xx[655] - (xx[273] * xx[838] + xx[447] * xx[839] + xx[715] * xx[840]);
  xx[827] = xx[656] - (xx[273] * xx[841] + xx[447] * xx[842] + xx[715] * xx[843]);
  xx[828] = xx[657] - (xx[273] * xx[844] + xx[447] * xx[845] + xx[715] * xx[846]);
  pm_math_matrix3x3ComposeTranspose(xx + 820, xx + 732, xx + 847);
  pm_math_matrix3x3Compose(xx + 732, xx + 847, xx + 820);
  pm_math_matrix3x3PostCross(xx + 820, xx + 277, xx + 847);
  xx[175] = xx[694] * xx[838] + xx[727] * xx[839] + xx[769] * xx[840];
  xx[607] = xx[690] * xx[838] + xx[759] * xx[839] + xx[770] * xx[840];
  xx[610] = xx[690] * xx[841] + xx[759] * xx[842] + xx[770] * xx[843];
  xx[856] = xx[688] - (xx[693] * xx[838] + xx[723] * xx[839] + xx[768] * xx[840]);
  xx[857] = xx[724] - xx[175];
  xx[858] = xx[725] - xx[607];
  xx[859] = xx[726] - xx[175];
  xx[860] = xx[689] - (xx[694] * xx[841] + xx[727] * xx[842] + xx[769] * xx[843]);
  xx[861] = xx[728] - xx[610];
  xx[862] = xx[729] - xx[607];
  xx[863] = xx[730] - xx[610];
  xx[864] = xx[731] - (xx[690] * xx[844] + xx[759] * xx[845] + xx[770] * xx[846])
    + xx[73];
  pm_math_matrix3x3ComposeTranspose(xx + 856, xx + 732, xx + 865);
  pm_math_matrix3x3Compose(xx + 732, xx + 865, xx + 856);
  pm_math_matrix3x3PostCross(xx + 856, xx + 277, xx + 865);
  pm_math_matrix3x3PreCross(xx + 865, xx + 277, xx + 874);
  xx[175] = xx[826] - xx[867];
  xx[607] = xx[827] - xx[870];
  xx[610] = xx[819] - xx[855] - xx[855] - xx[882] - xx[280] * xx[175] - xx[276] *
    xx[607] + xx[52];
  xx[642] = xx[393] + xx[856];
  xx[652] = xx[175] - (xx[642] * xx[280] + xx[276] * xx[857]);
  xx[653] = xx[393] + xx[860];
  xx[654] = xx[607] - (xx[280] * xx[859] + xx[653] * xx[276]);
  xx[655] = xx[610] - (xx[652] * xx[280] + xx[654] * xx[276]);
  ii[1] = factorSymmetricPosDef(xx + 655, 1, xx + 656);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[656] = (xx[290] - (xx[680] + xx[661] - (xx[280] * xx[588] + xx[276] * xx
    [589]))) / xx[655];
  xx[684] = xx[829];
  xx[685] = xx[832];
  xx[686] = xx[835];
  xx[588] = xx[174] * xx[656];
  xx[589] = xx[656] * xx[172];
  xx[657] = (xx[588] * xx[171] + xx[589] * xx[176]) * xx[19];
  xx[660] = xx[19] * (xx[588] * xx[176] - xx[589] * xx[171]);
  xx[661] = xx[656] - (xx[589] * xx[172] + xx[174] * xx[588]) * xx[19];
  xx[719] = xx[657];
  xx[720] = xx[660];
  xx[721] = xx[661];
  xx[724] = xx[838];
  xx[725] = xx[841];
  xx[726] = xx[844];
  xx[588] = xx[656] * xx[277] - xx[276] * xx[656];
  xx[589] = xx[588] * xx[176];
  xx[680] = xx[280] * xx[656] + xx[656] * xx[278];
  xx[681] = xx[176] * xx[680];
  xx[688] = xx[588] * xx[172] + xx[174] * xx[680];
  xx[728] = xx[589];
  xx[729] = xx[681];
  xx[730] = - xx[688];
  pm_math_cross3(xx + 760, xx + 728, xx + 756);
  xx[689] = (xx[756] - xx[589] * xx[171]) * xx[19] - xx[680];
  xx[589] = xx[588] + xx[19] * (xx[757] - xx[681] * xx[171]);
  xx[588] = xx[19] * (xx[758] + xx[688] * xx[171]);
  xx[728] = xx[689];
  xx[729] = xx[589];
  xx[730] = xx[588];
  xx[680] = xx[544] - (pm_math_dot3(xx + 684, xx + 719) + pm_math_dot3(xx + 724,
    xx + 728));
  xx[756] = xx[830];
  xx[757] = xx[833];
  xx[758] = xx[836];
  xx[883] = xx[839];
  xx[884] = xx[842];
  xx[885] = xx[845];
  xx[544] = xx[545] - (pm_math_dot3(xx + 756, xx + 719) + pm_math_dot3(xx + 883,
    xx + 728));
  xx[886] = xx[831];
  xx[887] = xx[834];
  xx[888] = xx[837];
  xx[829] = xx[840];
  xx[830] = xx[843];
  xx[831] = xx[846];
  xx[545] = xx[546] - (pm_math_dot3(xx + 886, xx + 719) + pm_math_dot3(xx + 829,
    xx + 728));
  xx[719] = xx[696];
  xx[720] = xx[699];
  xx[721] = xx[702];
  xx[728] = xx[657] + xx[680] + xx[89] * xx[544];
  xx[729] = xx[660] - xx[89] * xx[680] + xx[544];
  xx[730] = xx[661] + xx[545];
  pm_math_quatInverseXform(xx + 188, xx + 728, xx + 832);
  xx[835] = xx[705];
  xx[836] = xx[708];
  xx[837] = xx[711];
  pm_math_cross3(xx + 728, xx + 444, xx + 838);
  xx[728] = xx[689] + xx[90] * xx[680] - xx[109] * xx[544] - xx[68] * xx[545] +
    xx[838];
  xx[729] = xx[589] + xx[109] * xx[680] + xx[90] * xx[544] + xx[67] * xx[545] +
    xx[839];
  xx[730] = xx[588] + xx[110] * xx[680] + xx[691] * xx[544] + xx[840];
  pm_math_quatInverseXform(xx + 188, xx + 728, xx + 838);
  xx[546] = xx[638] - (pm_math_dot3(xx + 719, xx + 832) + pm_math_dot3(xx + 835,
    xx + 838));
  xx[728] = xx[697];
  xx[729] = xx[700];
  xx[730] = xx[703];
  xx[841] = xx[706];
  xx[842] = xx[709];
  xx[843] = xx[712];
  xx[588] = xx[639] - (pm_math_dot3(xx + 728, xx + 832) + pm_math_dot3(xx + 841,
    xx + 838));
  xx[844] = xx[698];
  xx[845] = xx[701];
  xx[846] = xx[704];
  xx[696] = xx[707];
  xx[697] = xx[710];
  xx[698] = xx[713];
  xx[589] = xx[640] - (pm_math_dot3(xx + 844, xx + 832) + pm_math_dot3(xx + 696,
    xx + 838));
  xx[638] = xx[340];
  xx[639] = xx[418];
  xx[640] = - xx[379];
  xx[699] = xx[832] + xx[546];
  xx[700] = xx[833] + xx[588];
  xx[701] = xx[834] + xx[589];
  pm_math_quatInverseXform(xx + 214, xx + 699, xx + 702);
  pm_math_cross3(xx + 699, xx + 551, xx + 705);
  xx[699] = xx[838] + xx[230] * xx[588] + xx[229] * xx[589] + xx[705];
  xx[700] = xx[839] - xx[230] * xx[546] + xx[228] * xx[589] + xx[706];
  xx[701] = xx[840] - xx[229] * xx[546] - xx[228] * xx[588] + xx[707];
  pm_math_quatInverseXform(xx + 214, xx + 699, xx + 705);
  xx[340] = xx[520] - (pm_math_dot3(xx + 638, xx + 702) + pm_math_dot3(xx + 381,
    xx + 705));
  xx[379] = xx[704] - xx[201] * xx[340];
  xx[699] = xx[702] - xx[195] * xx[340];
  xx[700] = xx[703];
  xx[701] = xx[379];
  pm_math_cross3(xx + 699, xx + 244, xx + 702);
  xx[418] = xx[705] + xx[702];
  xx[520] = xx[706] - xx[291] * xx[340] + xx[703];
  xx[657] = xx[520] * xx[205];
  xx[660] = xx[418] * xx[205];
  xx[661] = xx[1] * state[46];
  xx[681] = cos(xx[661]);
  xx[688] = 0.5901074779979936;
  xx[689] = xx[1] * input[8];
  xx[699] = cos(xx[689]);
  xx[700] = 0.5901036711621467;
  xx[701] = sin(xx[689]);
  xx[689] = xx[688] * xx[699] + xx[700] * xx[701];
  xx[702] = xx[681] * xx[689];
  xx[703] = xx[700] * xx[699] - xx[688] * xx[701];
  xx[688] = sin(xx[661]);
  xx[661] = xx[703] * xx[688];
  xx[700] = 0.389585375426561;
  xx[704] = 0.3895819001770367;
  xx[705] = xx[700] * xx[699] - xx[704] * xx[701];
  xx[706] = xx[704] * xx[699] + xx[700] * xx[701];
  xx[699] = xx[705] * xx[681] - xx[688] * xx[706];
  xx[700] = - xx[699];
  xx[701] = xx[705] * xx[688] + xx[681] * xx[706];
  xx[704] = xx[703] * xx[681] - xx[688] * xx[689];
  xx[707] = - (xx[702] + xx[661]);
  xx[708] = xx[700];
  xx[709] = xx[701];
  xx[710] = xx[704];
  xx[711] = xx[53] * state[51] - xx[54] * state[48];
  xx[712] = xx[53] * state[50] + xx[54] * state[49];
  xx[713] = - xx[712];
  xx[716] = xx[54] * state[50] - xx[53] * state[49];
  xx[731] = - xx[716];
  xx[772] = xx[53] * state[48] + xx[54] * state[51];
  xx[806] = - xx[772];
  xx[889] = xx[711];
  xx[890] = xx[713];
  xx[891] = xx[731];
  xx[892] = xx[806];
  pm_math_quatCompose(xx + 707, xx + 889, xx + 893);
  xx[707] = xx[716] * xx[711];
  xx[708] = xx[712] * xx[772];
  xx[709] = xx[716] * xx[772];
  xx[710] = xx[712] * xx[711];
  xx[826] = xx[19] * (xx[709] - xx[710]);
  xx[827] = xx[712] * xx[712];
  xx[832] = xx[716] * xx[716];
  xx[838] = (xx[707] + xx[708]) * xx[19];
  xx[839] = xx[826];
  xx[840] = xx[21] - (xx[827] + xx[832]) * xx[19];
  xx[897] = xx[249];
  xx[898] = xx[271];
  xx[899] = xx[140];
  pm_math_cross3(xx + 838, xx + 897, xx + 900);
  pm_math_quatXform(xx + 893, xx + 900, xx + 838);
  pm_math_quatXform(xx + 889, xx + 69, xx + 893);
  xx[833] = xx[894] * xx[688] - xx[681] * xx[893];
  xx[834] = 6.924287580811761e-12;
  xx[856] = 1.024070757638107e-11;
  xx[860] = xx[834] * xx[688] - xx[856] * xx[681];
  xx[867] = xx[19] * xx[860] * xx[688];
  xx[870] = xx[19] * xx[688] * xx[833] - (xx[894] + xx[867]) + xx[834];
  xx[896] = - xx[689];
  xx[900] = - xx[706];
  xx[901] = xx[896];
  xx[902] = xx[703];
  xx[903] = xx[900];
  xx[904] = xx[19] * xx[860] * xx[681];
  xx[860] = xx[893] + xx[19] * xx[681] * xx[833] - xx[904] - xx[856];
  xx[833] = xx[860] * xx[706];
  xx[905] = xx[870] * xx[706];
  xx[906] = xx[860] * xx[689] + xx[703] * xx[870];
  xx[907] = xx[833];
  xx[908] = - xx[905];
  xx[909] = - xx[906];
  pm_math_cross3(xx + 901, xx + 907, xx + 910);
  xx[907] = xx[838] + xx[870] + xx[19] * (xx[910] + xx[705] * xx[833]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_11/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 913, xx + 91, 9 * sizeof(double));
  xx[833] = xx[661] + xx[702];
  xx[922] = - xx[833];
  xx[923] = xx[700];
  xx[924] = xx[701];
  xx[925] = xx[704];
  pm_math_quatCompose(xx + 922, xx + 889, xx + 926);
  pm_math_quatXform(xx + 926, xx + 141, xx + 930);
  pm_math_quatXform(xx + 889, xx + 111, xx + 933);
  pm_math_quatXform(xx + 922, xx + 933, xx + 936);
  xx[661] = xx[930] + xx[936];
  xx[933] = xx[140];
  xx[934] = xx[139];
  xx[935] = 5.855191459023036e-14;
  pm_math_quatXform(xx + 926, xx + 933, xx + 939);
  pm_math_quatXform(xx + 889, xx + 753, xx + 942);
  pm_math_quatXform(xx + 922, xx + 942, xx + 945);
  xx[139] = xx[939] + xx[945];
  xx[140] = xx[249] * xx[929];
  xx[700] = xx[249] * xx[927] + xx[271] * xx[928];
  xx[942] = - xx[140];
  xx[943] = - (xx[271] * xx[929]);
  xx[944] = xx[700];
  pm_math_cross3(xx + 927, xx + 942, xx + 948);
  xx[942] = xx[713];
  xx[943] = xx[731];
  xx[944] = xx[806];
  xx[702] = xx[67] * xx[772];
  xx[713] = xx[68] * xx[772];
  xx[731] = xx[67] * xx[712] + xx[716] * xx[68];
  xx[951] = xx[702];
  xx[952] = xx[713];
  xx[953] = - xx[731];
  pm_math_cross3(xx + 942, xx + 951, xx + 954);
  xx[951] = xx[19] * (xx[954] + xx[702] * xx[711]) - xx[68];
  xx[952] = xx[67] + (xx[713] * xx[711] + xx[955]) * xx[19];
  xx[953] = (xx[956] - xx[731] * xx[711]) * xx[19];
  pm_math_quatXform(xx + 922, xx + 951, xx + 954);
  xx[702] = xx[19] * (xx[948] - xx[926] * xx[140]) + xx[954] - xx[271];
  xx[951] = - xx[661];
  xx[952] = - xx[139];
  xx[953] = - xx[702];
  solveSymmetricPosDef(xx + 913, xx + 951, 3, 1, xx + 957, xx + 960);
  xx[140] = 1.202264150185557e-11;
  xx[713] = 1.680102937794429e-13;
  xx[951] = xx[78] * xx[957] + xx[140] * xx[958];
  xx[952] = xx[79] * xx[958] - xx[713] * xx[957];
  xx[953] = xx[80] * xx[959];
  pm_math_quatXform(xx + 889, xx + 951, xx + 960);
  xx[731] = 3.170111100876369e-15;
  xx[806] = 3.982300164624803e-9;
  xx[870] = 6.2264981441351e-4;
  xx[908] = 4.955561487076875e-10;
  xx[909] = 6.226498144137072e-4;
  xx[927] = 1.044009829080716e-13;
  xx[951] = xx[731] * xx[957] - xx[806] * xx[958] - xx[870] * xx[959];
  xx[952] = xx[806] * xx[957] + xx[731] * xx[958] + xx[908] * xx[959];
  xx[953] = xx[909] * xx[957] + xx[927] * xx[958];
  pm_math_quatXform(xx + 889, xx + 951, xx + 963);
  pm_math_cross3(xx + 893, xx + 963, xx + 951);
  xx[928] = xx[711] * xx[711];
  xx[951] = (xx[928] + xx[827]) * xx[19] - xx[21];
  xx[827] = xx[716] * xx[712];
  xx[952] = xx[772] * xx[711];
  xx[960] = (xx[827] + xx[952]) * xx[19];
  xx[961] = xx[19] * (xx[708] - xx[707]);
  xx[965] = xx[19] * (xx[827] - xx[952]);
  xx[827] = (xx[928] + xx[832]) * xx[19] - xx[21];
  xx[832] = (xx[709] + xx[710]) * xx[19];
  xx[709] = (xx[708] + xx[707]) * xx[19];
  xx[707] = (xx[928] + xx[772] * xx[772]) * xx[19] - xx[21];
  xx[966] = xx[951];
  xx[967] = xx[960];
  xx[968] = xx[961];
  xx[969] = xx[965];
  xx[970] = xx[827];
  xx[971] = xx[832];
  xx[972] = xx[709];
  xx[973] = xx[826];
  xx[974] = xx[707];
  xx[708] = 0.0;
  xx[975] = xx[78];
  xx[976] = xx[140];
  xx[977] = xx[708];
  xx[978] = - xx[713];
  xx[979] = xx[79];
  xx[980] = xx[708];
  xx[981] = xx[708];
  xx[982] = xx[708];
  xx[983] = xx[80];
  xx[984] = xx[731];
  xx[985] = - xx[806];
  xx[986] = - xx[870];
  xx[987] = xx[806];
  xx[988] = xx[731];
  xx[989] = xx[908];
  xx[990] = xx[909];
  xx[991] = xx[927];
  xx[992] = xx[708];
  solveSymmetricPosDef(xx + 913, xx + 975, 3, 6, xx + 993, xx + 1011);
  xx[708] = - (xx[79] * xx[994] - xx[713] * xx[993]);
  xx[710] = - (xx[80] * xx[995]);
  xx[928] = - (xx[80] * xx[998]);
  xx[1011] = xx[78] - (xx[78] * xx[993] + xx[140] * xx[994]);
  xx[1012] = xx[708];
  xx[1013] = xx[710];
  xx[1014] = xx[708];
  xx[1015] = xx[79] - (xx[79] * xx[997] - xx[713] * xx[996]);
  xx[1016] = xx[928];
  xx[1017] = xx[710];
  xx[1018] = xx[928];
  xx[1019] = xx[80] - xx[80] * xx[1001];
  pm_math_matrix3x3ComposeTranspose(xx + 1011, xx + 966, xx + 1020);
  pm_math_matrix3x3Compose(xx + 966, xx + 1020, xx + 1011);
  xx[1020] = - (xx[78] * xx[1002] + xx[140] * xx[1003]);
  xx[1021] = - (xx[78] * xx[1005] + xx[140] * xx[1006]);
  xx[1022] = - (xx[78] * xx[1008] + xx[140] * xx[1009]);
  xx[1023] = - (xx[79] * xx[1003] - xx[713] * xx[1002]);
  xx[1024] = - (xx[79] * xx[1006] - xx[713] * xx[1005]);
  xx[1025] = - (xx[79] * xx[1009] - xx[713] * xx[1008]);
  xx[1026] = - (xx[80] * xx[1004]);
  xx[1027] = - (xx[80] * xx[1007]);
  xx[1028] = - (xx[80] * xx[1010]);
  pm_math_matrix3x3ComposeTranspose(xx + 1020, xx + 966, xx + 1029);
  pm_math_matrix3x3Compose(xx + 966, xx + 1029, xx + 1020);
  pm_math_matrix3x3PostCross(xx + 1020, xx + 893, xx + 1029);
  xx[708] = - (xx[806] * xx[1002] + xx[731] * xx[1003] + xx[908] * xx[1004]);
  xx[710] = - (xx[909] * xx[1002] + xx[927] * xx[1003]);
  xx[928] = - (xx[909] * xx[1005] + xx[927] * xx[1006]);
  xx[1038] = xx[73] - (xx[731] * xx[1002] - xx[806] * xx[1003] - xx[870] * xx
                       [1004]);
  xx[1039] = xx[708];
  xx[1040] = xx[710];
  xx[1041] = xx[708];
  xx[1042] = xx[73] - (xx[806] * xx[1005] + xx[731] * xx[1006] + xx[908] * xx
                       [1007]);
  xx[1043] = xx[928];
  xx[1044] = xx[710];
  xx[1045] = xx[928];
  xx[1046] = xx[73] - (xx[909] * xx[1008] + xx[927] * xx[1009]);
  pm_math_matrix3x3ComposeTranspose(xx + 1038, xx + 966, xx + 1047);
  pm_math_matrix3x3Compose(xx + 966, xx + 1047, xx + 1038);
  pm_math_matrix3x3PostCross(xx + 1038, xx + 893, xx + 966);
  pm_math_matrix3x3PreCross(xx + 966, xx + 893, xx + 1047);
  xx[708] = xx[1026] - xx[968];
  xx[710] = xx[1027] - xx[971];
  xx[928] = xx[1019] - xx[1037] - xx[1037] - xx[1055] + xx[834] * xx[708] - xx
    [856] * xx[710] + xx[52];
  xx[952] = xx[393] + xx[1038];
  xx[968] = xx[708] + xx[952] * xx[834] - xx[856] * xx[1039];
  xx[971] = xx[393] + xx[1042];
  xx[1026] = xx[710] + xx[834] * xx[1041] - xx[971] * xx[856];
  xx[1027] = xx[928] + xx[968] * xx[834] - xx[1026] * xx[856];
  ii[1] = factorSymmetricPosDef(xx + 1027, 1, xx + 1038);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1038] = (xx[962] + xx[953] + xx[834] * xx[963] - xx[856] * xx[964] + xx[907])
    / xx[1027];
  xx[962] = xx[993];
  xx[963] = xx[996];
  xx[964] = xx[999];
  xx[953] = xx[716] * xx[1038];
  xx[1042] = xx[1038] * xx[712];
  xx[1056] = - ((xx[953] * xx[711] + xx[1042] * xx[772]) * xx[19]);
  xx[1057] = xx[19] * (xx[1042] * xx[711] - xx[953] * xx[772]);
  xx[1058] = (xx[1042] * xx[712] + xx[716] * xx[953]) * xx[19] - xx[1038];
  xx[1059] = xx[1002];
  xx[1060] = xx[1005];
  xx[1061] = xx[1008];
  xx[953] = xx[1038] * xx[894] - xx[834] * xx[1038];
  xx[1042] = xx[1038] * xx[893] - xx[856] * xx[1038];
  xx[1062] = xx[1042] * xx[772];
  xx[1063] = xx[772] * xx[953];
  xx[1064] = xx[716] * xx[953] + xx[1042] * xx[712];
  xx[1065] = - xx[1062];
  xx[1066] = - xx[1063];
  xx[1067] = xx[1064];
  pm_math_cross3(xx + 942, xx + 1065, xx + 1068);
  xx[1065] = xx[953] + xx[19] * (xx[1068] + xx[1062] * xx[711]);
  xx[1066] = xx[19] * (xx[1069] + xx[1063] * xx[711]) - xx[1042];
  xx[1067] = xx[19] * (xx[1070] - xx[711] * xx[1064]);
  xx[1062] = xx[994];
  xx[1063] = xx[997];
  xx[1064] = xx[1000];
  xx[1068] = xx[1003];
  xx[1069] = xx[1006];
  xx[1070] = xx[1009];
  xx[1071] = xx[995];
  xx[1072] = xx[998];
  xx[1073] = xx[1001];
  xx[993] = xx[1004];
  xx[994] = xx[1007];
  xx[995] = xx[1010];
  xx[953] = xx[226] + xx[281] + (xx[288] * xx[163] + xx[294]) * xx[19];
  xx[281] = xx[323] + xx[319];
  xx[288] = (xx[155] * xx[330] + xx[335]) * xx[19] + xx[160] + (xx[308] * xx[236]
    + xx[332]) * xx[19] + xx[228];
  xx[236] = xx[288] / xx[326];
  xx[330] = xx[325] * xx[236];
  xx[996] = xx[330] * xx[205];
  xx[997] = xx[337] * xx[236];
  xx[998] = xx[997] * xx[205];
  xx[999] = xx[19] * (xx[996] * xx[205] - xx[193] * xx[998]) - xx[330];
  xx[330] = (xx[193] * xx[996] + xx[998] * xx[205]) * xx[19] - xx[997];
  xx[996] = xx[999] * xx[238] - xx[241] * xx[330] - xx[52] * xx[236];
  xx[997] = xx[243] * xx[330];
  xx[998] = (xx[281] + xx[996] * xx[201] + xx[195] * xx[997] + xx[291] * xx[330])
    / xx[456];
  xx[1000] = xx[998] * xx[409] + xx[997];
  xx[1001] = xx[513] * xx[998] - xx[999] * xx[243];
  xx[1002] = xx[996] - xx[354] * xx[998];
  pm_math_quatXform(xx + 214, xx + 1000, xx + 1003);
  xx[1000] = xx[999] + xx[392] * xx[998];
  xx[1001] = xx[330] + xx[437] * xx[998];
  xx[1002] = xx[998] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1000, xx + 1006);
  pm_math_cross3(xx + 551, xx + 1006, xx + 999);
  xx[330] = xx[1003] + xx[999];
  xx[996] = xx[563] + xx[632];
  xx[997] = xx[636] + xx[647];
  xx[1002] = xx[1004] + xx[1000];
  xx[1009] = xx[650] + xx[548];
  xx[999] = xx[1005] + xx[1001];
  xx[1003] = xx[996] - (xx[330] - (xx[230] * xx[1007] + xx[229] * xx[1008]));
  xx[1004] = xx[997] - (xx[1002] + xx[230] * xx[1006] - xx[228] * xx[1008]);
  xx[1005] = xx[1009] - (xx[999] + xx[229] * xx[1006] + xx[228] * xx[1007]);
  solveSymmetricPosDef(xx + 592, xx + 1003, 3, 1, xx + 1074, xx + 1077);
  xx[1003] = xx[330] + xx[421] * xx[1074] + xx[433] * xx[1075] + xx[454] * xx
    [1076];
  xx[1004] = xx[1002] + xx[500] * xx[1074] + xx[506] * xx[1075] + xx[515] * xx
    [1076];
  xx[1005] = xx[999] + xx[540] * xx[1074] + xx[443] * xx[1075] + xx[521] * xx
    [1076];
  pm_math_quatXform(xx + 188, xx + 1003, xx + 999);
  xx[1002] = xx[1006] + xx[248] * xx[1074] + xx[511] * xx[1075] + xx[509] * xx
    [1076];
  xx[1003] = xx[1007] + xx[423] * xx[1074] + xx[436] * xx[1075] + xx[498] * xx
    [1076];
  xx[1004] = xx[1008] + xx[427] * xx[1074] + xx[439] * xx[1075] + xx[504] * xx
    [1076];
  pm_math_quatXform(xx + 188, xx + 1002, xx + 1005);
  pm_math_cross3(xx + 444, xx + 1005, xx + 1002);
  xx[330] = xx[999] + xx[1002];
  xx[1008] = xx[751] + xx[786];
  xx[1010] = xx[1000] + xx[1003];
  xx[1042] = xx[789] + xx[795];
  xx[1077] = xx[803] + xx[809];
  xx[999] = xx[1001] + xx[1004];
  xx[1000] = xx[1008] - (xx[330] - xx[1010] * xx[89] + pm_math_dot3(xx + 111, xx
    + 1005));
  xx[1001] = xx[1042] - (xx[330] * xx[89] + xx[1010] + pm_math_dot3(xx + 753, xx
    + 1005));
  xx[1002] = xx[1077] - (xx[999] + xx[67] * xx[1006] - xx[68] * xx[1005]);
  solveSymmetricPosDef(xx + 773, xx + 1000, 3, 1, xx + 1078, xx + 1081);
  xx[1000] = xx[330] + xx[663] * xx[1078] + xx[692] * xx[1079] + xx[765] * xx
    [1080];
  xx[1001] = xx[1010] + xx[687] * xx[1078] + xx[695] * xx[1079] + xx[767] * xx
    [1080];
  xx[1002] = xx[999] + xx[273] * xx[1078] + xx[447] * xx[1079] + xx[715] * xx
    [1080];
  pm_math_quatXform(xx + 178, xx + 1000, xx + 1081);
  xx[999] = xx[1005] + xx[693] * xx[1078] + xx[723] * xx[1079] + xx[768] * xx
    [1080];
  xx[1000] = xx[1006] + xx[694] * xx[1078] + xx[727] * xx[1079] + xx[769] * xx
    [1080];
  xx[1001] = xx[1007] + xx[690] * xx[1078] + xx[759] * xx[1079] + xx[770] * xx
    [1080];
  pm_math_quatXform(xx + 178, xx + 999, xx + 1002);
  pm_math_cross3(xx + 277, xx + 1002, xx + 999);
  xx[330] = (xx[953] - (xx[1083] + xx[1001] - (xx[280] * xx[1002] + xx[276] *
    xx[1003]))) / xx[655];
  xx[999] = xx[174] * xx[330];
  xx[1000] = xx[330] * xx[172];
  xx[1001] = (xx[999] * xx[171] + xx[1000] * xx[176]) * xx[19];
  xx[1002] = xx[19] * (xx[999] * xx[176] - xx[1000] * xx[171]);
  xx[1003] = xx[330] - (xx[1000] * xx[172] + xx[174] * xx[999]) * xx[19];
  xx[999] = xx[330] * xx[277] - xx[276] * xx[330];
  xx[1000] = xx[999] * xx[176];
  xx[1004] = xx[280] * xx[330] + xx[330] * xx[278];
  xx[1005] = xx[176] * xx[1004];
  xx[1006] = xx[999] * xx[172] + xx[174] * xx[1004];
  xx[1081] = xx[1000];
  xx[1082] = xx[1005];
  xx[1083] = - xx[1006];
  pm_math_cross3(xx + 760, xx + 1081, xx + 1084);
  xx[1007] = (xx[1084] - xx[1000] * xx[171]) * xx[19] - xx[1004];
  xx[1000] = xx[999] + xx[19] * (xx[1085] - xx[1005] * xx[171]);
  xx[999] = xx[19] * (xx[1086] + xx[1006] * xx[171]);
  xx[1004] = xx[1007];
  xx[1005] = xx[1000];
  xx[1006] = xx[999];
  xx[1010] = xx[1078] - (pm_math_dot3(xx + 684, xx + 1001) + pm_math_dot3(xx +
    724, xx + 1004));
  xx[1078] = xx[1079] - (pm_math_dot3(xx + 756, xx + 1001) + pm_math_dot3(xx +
    883, xx + 1004));
  xx[1079] = xx[1080] - (pm_math_dot3(xx + 886, xx + 1001) + pm_math_dot3(xx +
    829, xx + 1004));
  xx[1004] = xx[1001] + xx[1010] + xx[89] * xx[1078];
  xx[1005] = xx[1002] - xx[89] * xx[1010] + xx[1078];
  xx[1006] = xx[1003] + xx[1079];
  pm_math_quatInverseXform(xx + 188, xx + 1004, xx + 1001);
  pm_math_cross3(xx + 1004, xx + 444, xx + 1080);
  xx[1004] = xx[1007] + xx[90] * xx[1010] - xx[109] * xx[1078] - xx[68] * xx
    [1079] + xx[1080];
  xx[1005] = xx[1000] + xx[109] * xx[1010] + xx[90] * xx[1078] + xx[67] * xx
    [1079] + xx[1081];
  xx[1006] = xx[999] + xx[110] * xx[1010] + xx[691] * xx[1078] + xx[1082];
  pm_math_quatInverseXform(xx + 188, xx + 1004, xx + 1080);
  xx[999] = xx[1074] - (pm_math_dot3(xx + 719, xx + 1001) + pm_math_dot3(xx +
    835, xx + 1080));
  xx[1000] = xx[1075] - (pm_math_dot3(xx + 728, xx + 1001) + pm_math_dot3(xx +
    841, xx + 1080));
  xx[1004] = xx[1076] - (pm_math_dot3(xx + 844, xx + 1001) + pm_math_dot3(xx +
    696, xx + 1080));
  xx[1005] = xx[1001] + xx[999];
  xx[1006] = xx[1002] + xx[1000];
  xx[1007] = xx[1003] + xx[1004];
  pm_math_quatInverseXform(xx + 214, xx + 1005, xx + 1001);
  pm_math_cross3(xx + 1005, xx + 551, xx + 1074);
  xx[1005] = xx[1080] + xx[230] * xx[1000] + xx[229] * xx[1004] + xx[1074];
  xx[1006] = xx[1081] - xx[230] * xx[999] + xx[228] * xx[1004] + xx[1075];
  xx[1007] = xx[1082] - xx[229] * xx[999] - xx[228] * xx[1000] + xx[1076];
  pm_math_quatInverseXform(xx + 214, xx + 1005, xx + 1074);
  xx[1005] = xx[998] - (pm_math_dot3(xx + 638, xx + 1001) + pm_math_dot3(xx +
    381, xx + 1074));
  xx[998] = xx[1003] - xx[201] * xx[1005];
  xx[1080] = xx[1001] - xx[195] * xx[1005];
  xx[1081] = xx[1002];
  xx[1082] = xx[998];
  pm_math_cross3(xx + 1080, xx + 244, xx + 1001);
  xx[1006] = xx[1074] + xx[1001];
  xx[1001] = xx[1075] - xx[291] * xx[1005] + xx[1002];
  xx[1002] = xx[1001] * xx[205];
  xx[1003] = xx[1006] * xx[205];
  xx[1007] = xx[236] + xx[998] * xx[668] + xx[534] * (xx[1006] - (xx[193] * xx
    [1002] + xx[1003] * xx[205]) * xx[19]) + (xx[1001] + xx[19] * (xx[193] * xx
    [1003] - xx[1002] * xx[205])) * xx[569];
  xx[236] = xx[931] + xx[937];
  xx[998] = xx[940] + xx[946];
  xx[1001] = (xx[949] - xx[271] * xx[926] * xx[929]) * xx[19] + xx[955] + xx[249];
  xx[1074] = - xx[236];
  xx[1075] = - xx[998];
  xx[1076] = - xx[1001];
  solveSymmetricPosDef(xx + 913, xx + 1074, 3, 1, xx + 1080, xx + 1083);
  xx[1074] = xx[78] * xx[1080] + xx[140] * xx[1081];
  xx[1075] = xx[79] * xx[1081] - xx[713] * xx[1080];
  xx[1076] = xx[80] * xx[1082];
  pm_math_quatXform(xx + 889, xx + 1074, xx + 1083);
  xx[1074] = xx[731] * xx[1080] - xx[806] * xx[1081] - xx[870] * xx[1082];
  xx[1075] = xx[806] * xx[1080] + xx[731] * xx[1081] + xx[908] * xx[1082];
  xx[1076] = xx[909] * xx[1080] + xx[927] * xx[1081];
  pm_math_quatXform(xx + 889, xx + 1074, xx + 1086);
  pm_math_cross3(xx + 893, xx + 1086, xx + 1074);
  xx[929] = xx[839] + xx[860] + (xx[911] - xx[705] * xx[905]) * xx[19];
  xx[860] = (xx[1085] + xx[1076] + xx[834] * xx[1086] - xx[856] * xx[1087] + xx
             [929]) / xx[1027];
  xx[905] = xx[716] * xx[860];
  xx[1002] = xx[860] * xx[712];
  xx[1074] = - ((xx[905] * xx[711] + xx[1002] * xx[772]) * xx[19]);
  xx[1075] = xx[19] * (xx[1002] * xx[711] - xx[905] * xx[772]);
  xx[1076] = (xx[1002] * xx[712] + xx[716] * xx[905]) * xx[19] - xx[860];
  xx[905] = xx[860] * xx[894] - xx[834] * xx[860];
  xx[1002] = xx[860] * xx[893] - xx[856] * xx[860];
  xx[1003] = xx[1002] * xx[772];
  xx[1006] = xx[905] * xx[772];
  xx[1083] = xx[716] * xx[905] + xx[1002] * xx[712];
  xx[1084] = - xx[1003];
  xx[1085] = - xx[1006];
  xx[1086] = xx[1083];
  pm_math_cross3(xx + 942, xx + 1084, xx + 1087);
  xx[1084] = xx[905] + xx[19] * (xx[1087] + xx[1003] * xx[711]);
  xx[1085] = xx[19] * (xx[1088] + xx[1006] * xx[711]) - xx[1002];
  xx[1086] = xx[19] * (xx[1089] - xx[1083] * xx[711]);
  xx[905] = xx[1080] - (pm_math_dot3(xx + 962, xx + 1074) + pm_math_dot3(xx +
    1059, xx + 1084));
  xx[1002] = xx[1081] - (pm_math_dot3(xx + 1062, xx + 1074) + pm_math_dot3(xx +
    1068, xx + 1084));
  xx[1003] = xx[1082] - (pm_math_dot3(xx + 1071, xx + 1074) + pm_math_dot3(xx +
    993, xx + 1084));
  xx[1006] = xx[290] * xx[330] + xx[771] * xx[1010] + xx[263] * xx[1078] + xx
    [173] * xx[1079] + xx[554] * xx[999] + xx[186] * xx[1000] + xx[250] * xx
    [1004] + xx[312] * xx[1005] + xx[242] * xx[1007] + xx[907] * xx[860] - xx
    [661] * xx[905] - xx[139] * xx[1002] - xx[702] * xx[1003];
  xx[225] = xx[227] + (xx[163] * xx[289] + xx[295]) * xx[19];
  xx[226] = xx[324] + xx[320];
  xx[227] = (xx[155] * xx[283] + xx[336]) * xx[19] + (xx[308] * xx[239] + xx[333])
    * xx[19];
  xx[155] = xx[227] / xx[326];
  xx[239] = xx[325] * xx[155];
  xx[283] = xx[239] * xx[205];
  xx[289] = xx[337] * xx[155];
  xx[293] = xx[289] * xx[205];
  xx[294] = xx[19] * (xx[283] * xx[205] - xx[193] * xx[293]) - xx[239];
  xx[239] = (xx[193] * xx[283] + xx[293] * xx[205]) * xx[19] - xx[289];
  xx[283] = xx[294] * xx[238] - xx[241] * xx[239] - xx[52] * xx[155];
  xx[289] = xx[243] * xx[239];
  xx[293] = (xx[226] + xx[283] * xx[201] + xx[195] * xx[289] + xx[291] * xx[239])
    / xx[456];
  xx[318] = xx[293] * xx[409] + xx[289];
  xx[319] = xx[513] * xx[293] - xx[294] * xx[243];
  xx[320] = xx[283] - xx[354] * xx[293];
  pm_math_quatXform(xx + 214, xx + 318, xx + 322);
  xx[318] = xx[294] + xx[392] * xx[293];
  xx[319] = xx[239] + xx[437] * xx[293];
  xx[320] = xx[293] * xx[424];
  pm_math_quatXform(xx + 214, xx + 318, xx + 331);
  pm_math_cross3(xx + 551, xx + 331, xx + 318);
  xx[239] = xx[322] + xx[318];
  xx[283] = xx[564] + xx[633];
  xx[289] = xx[637] + xx[648];
  xx[294] = xx[323] + xx[319];
  xx[295] = xx[651] + xx[549];
  xx[318] = xx[324] + xx[320];
  xx[322] = xx[283] - (xx[239] - (xx[230] * xx[332] + xx[229] * xx[333]));
  xx[323] = xx[289] - (xx[294] + xx[230] * xx[331] - xx[228] * xx[333]);
  xx[324] = xx[295] - (xx[318] + xx[229] * xx[331] + xx[228] * xx[332]);
  solveSymmetricPosDef(xx + 592, xx + 322, 3, 1, xx + 334, xx + 547);
  xx[322] = xx[239] + xx[421] * xx[334] + xx[433] * xx[335] + xx[454] * xx[336];
  xx[323] = xx[294] + xx[500] * xx[334] + xx[506] * xx[335] + xx[515] * xx[336];
  xx[324] = xx[318] + xx[540] * xx[334] + xx[443] * xx[335] + xx[521] * xx[336];
  pm_math_quatXform(xx + 188, xx + 322, xx + 318);
  xx[322] = xx[331] + xx[248] * xx[334] + xx[511] * xx[335] + xx[509] * xx[336];
  xx[323] = xx[332] + xx[423] * xx[334] + xx[436] * xx[335] + xx[498] * xx[336];
  xx[324] = xx[333] + xx[427] * xx[334] + xx[439] * xx[335] + xx[504] * xx[336];
  pm_math_quatXform(xx + 188, xx + 322, xx + 331);
  pm_math_cross3(xx + 444, xx + 331, xx + 322);
  xx[239] = xx[318] + xx[322];
  xx[294] = xx[752] + xx[787];
  xx[547] = xx[319] + xx[323];
  xx[548] = xx[790] + xx[796];
  xx[549] = xx[804] + xx[810];
  xx[318] = xx[320] + xx[324];
  xx[322] = xx[294] - (xx[239] - xx[547] * xx[89] + pm_math_dot3(xx + 111, xx +
    331));
  xx[323] = xx[548] - (xx[239] * xx[89] + xx[547] + pm_math_dot3(xx + 753, xx +
    331));
  xx[324] = xx[549] - (xx[318] + xx[67] * xx[332] - xx[68] * xx[331]);
  solveSymmetricPosDef(xx + 773, xx + 322, 3, 1, xx + 562, xx + 631);
  xx[322] = xx[239] + xx[663] * xx[562] + xx[692] * xx[563] + xx[765] * xx[564];
  xx[323] = xx[547] + xx[687] * xx[562] + xx[695] * xx[563] + xx[767] * xx[564];
  xx[324] = xx[318] + xx[273] * xx[562] + xx[447] * xx[563] + xx[715] * xx[564];
  pm_math_quatXform(xx + 178, xx + 322, xx + 318);
  xx[322] = xx[331] + xx[693] * xx[562] + xx[723] * xx[563] + xx[768] * xx[564];
  xx[323] = xx[332] + xx[694] * xx[562] + xx[727] * xx[563] + xx[769] * xx[564];
  xx[324] = xx[333] + xx[690] * xx[562] + xx[759] * xx[563] + xx[770] * xx[564];
  pm_math_quatXform(xx + 178, xx + 322, xx + 331);
  pm_math_cross3(xx + 277, xx + 331, xx + 322);
  xx[239] = (xx[225] - (xx[320] + xx[324] - (xx[280] * xx[331] + xx[276] * xx
    [332]))) / xx[655];
  xx[318] = xx[174] * xx[239];
  xx[319] = xx[239] * xx[172];
  xx[320] = (xx[318] * xx[171] + xx[319] * xx[176]) * xx[19];
  xx[322] = xx[19] * (xx[318] * xx[176] - xx[319] * xx[171]);
  xx[323] = xx[239] - (xx[319] * xx[172] + xx[174] * xx[318]) * xx[19];
  xx[331] = xx[320];
  xx[332] = xx[322];
  xx[333] = xx[323];
  xx[318] = xx[239] * xx[277] - xx[276] * xx[239];
  xx[319] = xx[318] * xx[176];
  xx[324] = xx[280] * xx[239] + xx[239] * xx[278];
  xx[547] = xx[176] * xx[324];
  xx[631] = xx[318] * xx[172] + xx[174] * xx[324];
  xx[635] = xx[319];
  xx[636] = xx[547];
  xx[637] = - xx[631];
  pm_math_cross3(xx + 760, xx + 635, xx + 646);
  xx[632] = (xx[646] - xx[319] * xx[171]) * xx[19] - xx[324];
  xx[319] = xx[318] + xx[19] * (xx[647] - xx[547] * xx[171]);
  xx[318] = xx[19] * (xx[648] + xx[631] * xx[171]);
  xx[635] = xx[632];
  xx[636] = xx[319];
  xx[637] = xx[318];
  xx[324] = xx[562] - (pm_math_dot3(xx + 684, xx + 331) + pm_math_dot3(xx + 724,
    xx + 635));
  xx[547] = xx[563] - (pm_math_dot3(xx + 756, xx + 331) + pm_math_dot3(xx + 883,
    xx + 635));
  xx[562] = xx[564] - (pm_math_dot3(xx + 886, xx + 331) + pm_math_dot3(xx + 829,
    xx + 635));
  xx[331] = xx[320] + xx[324] + xx[89] * xx[547];
  xx[332] = xx[322] - xx[89] * xx[324] + xx[547];
  xx[333] = xx[323] + xx[562];
  pm_math_quatInverseXform(xx + 188, xx + 331, xx + 635);
  pm_math_cross3(xx + 331, xx + 444, xx + 646);
  xx[331] = xx[632] + xx[90] * xx[324] - xx[109] * xx[547] - xx[68] * xx[562] +
    xx[646];
  xx[332] = xx[319] + xx[109] * xx[324] + xx[90] * xx[547] + xx[67] * xx[562] +
    xx[647];
  xx[333] = xx[318] + xx[110] * xx[324] + xx[691] * xx[547] + xx[648];
  pm_math_quatInverseXform(xx + 188, xx + 331, xx + 318);
  xx[322] = xx[334] - (pm_math_dot3(xx + 719, xx + 635) + pm_math_dot3(xx + 835,
    xx + 318));
  xx[323] = xx[335] - (pm_math_dot3(xx + 728, xx + 635) + pm_math_dot3(xx + 841,
    xx + 318));
  xx[331] = xx[336] - (pm_math_dot3(xx + 844, xx + 635) + pm_math_dot3(xx + 696,
    xx + 318));
  xx[332] = xx[635] + xx[322];
  xx[333] = xx[636] + xx[323];
  xx[334] = xx[637] + xx[331];
  pm_math_quatInverseXform(xx + 214, xx + 332, xx + 631);
  pm_math_cross3(xx + 332, xx + 551, xx + 635);
  xx[332] = xx[318] + xx[230] * xx[323] + xx[229] * xx[331] + xx[635];
  xx[333] = xx[319] - xx[230] * xx[322] + xx[228] * xx[331] + xx[636];
  xx[334] = xx[320] - xx[229] * xx[322] - xx[228] * xx[323] + xx[637];
  pm_math_quatInverseXform(xx + 214, xx + 332, xx + 318);
  xx[332] = xx[293] - (pm_math_dot3(xx + 638, xx + 631) + pm_math_dot3(xx + 381,
    xx + 318));
  xx[293] = xx[633] - xx[201] * xx[332];
  xx[333] = xx[631] - xx[195] * xx[332];
  xx[334] = xx[632];
  xx[335] = xx[293];
  pm_math_cross3(xx + 333, xx + 244, xx + 631);
  xx[320] = xx[318] + xx[631];
  xx[318] = xx[319] - xx[291] * xx[332] + xx[632];
  xx[319] = xx[318] * xx[205];
  xx[333] = xx[320] * xx[205];
  xx[334] = xx[155] + xx[293] * xx[668] + xx[534] * (xx[320] - (xx[193] * xx[319]
    + xx[333] * xx[205]) * xx[19]) + (xx[318] + xx[19] * (xx[193] * xx[333] -
    xx[319] * xx[205])) * xx[569];
  xx[155] = xx[932] + xx[938];
  xx[293] = xx[941] + xx[947];
  xx[318] = (xx[926] * xx[700] + xx[950]) * xx[19] + xx[956];
  xx[631] = - xx[155];
  xx[632] = - xx[293];
  xx[633] = - xx[318];
  solveSymmetricPosDef(xx + 913, xx + 631, 3, 1, xx + 635, xx + 646);
  xx[631] = xx[78] * xx[635] + xx[140] * xx[636];
  xx[632] = xx[79] * xx[636] - xx[713] * xx[635];
  xx[633] = xx[80] * xx[637];
  pm_math_quatXform(xx + 889, xx + 631, xx + 646);
  xx[631] = xx[731] * xx[635] - xx[806] * xx[636] - xx[870] * xx[637];
  xx[632] = xx[806] * xx[635] + xx[731] * xx[636] + xx[908] * xx[637];
  xx[633] = xx[909] * xx[635] + xx[927] * xx[636];
  pm_math_quatXform(xx + 889, xx + 631, xx + 649);
  pm_math_cross3(xx + 893, xx + 649, xx + 631);
  xx[319] = xx[840] + (xx[912] - xx[705] * xx[906]) * xx[19];
  xx[320] = (xx[648] + xx[633] + xx[834] * xx[649] - xx[856] * xx[650] + xx[319])
    / xx[1027];
  xx[333] = xx[716] * xx[320];
  xx[335] = xx[320] * xx[712];
  xx[631] = - ((xx[333] * xx[711] + xx[335] * xx[772]) * xx[19]);
  xx[632] = xx[19] * (xx[335] * xx[711] - xx[333] * xx[772]);
  xx[633] = (xx[335] * xx[712] + xx[716] * xx[333]) * xx[19] - xx[320];
  xx[333] = xx[320] * xx[894] - xx[834] * xx[320];
  xx[335] = xx[320] * xx[893] - xx[856] * xx[320];
  xx[336] = xx[335] * xx[772];
  xx[563] = xx[333] * xx[772];
  xx[564] = xx[716] * xx[333] + xx[335] * xx[712];
  xx[646] = - xx[336];
  xx[647] = - xx[563];
  xx[648] = xx[564];
  pm_math_cross3(xx + 942, xx + 646, xx + 649);
  xx[646] = xx[333] + xx[19] * (xx[649] + xx[336] * xx[711]);
  xx[647] = xx[19] * (xx[650] + xx[563] * xx[711]) - xx[335];
  xx[648] = xx[19] * (xx[651] - xx[564] * xx[711]);
  xx[333] = xx[635] - (pm_math_dot3(xx + 962, xx + 631) + pm_math_dot3(xx + 1059,
    xx + 646));
  xx[335] = xx[636] - (pm_math_dot3(xx + 1062, xx + 631) + pm_math_dot3(xx +
    1068, xx + 646));
  xx[336] = xx[637] - (pm_math_dot3(xx + 1071, xx + 631) + pm_math_dot3(xx + 993,
    xx + 646));
  xx[563] = xx[290] * xx[239] + xx[771] * xx[324] + xx[263] * xx[547] + xx[173] *
    xx[562] + xx[554] * xx[322] + xx[186] * xx[323] + xx[250] * xx[331] + xx[312]
    * xx[332] + xx[242] * xx[334] + xx[907] * xx[320] - xx[661] * xx[333] - xx
    [139] * xx[335] - xx[702] * xx[336];
  pm_math_quatCompose(xx + 214, xx + 615, xx + 646);
  pm_math_quatCompose(xx + 188, xx + 646, xx + 785);
  pm_math_quatCompose(xx + 178, xx + 785, xx + 936);
  pm_math_quatCompose(xx + 167, xx + 936, xx + 940);
  xx[564] = xx[937] * xx[939];
  xx[631] = xx[936] * xx[938];
  xx[632] = xx[19] * (xx[564] - xx[631]);
  xx[633] = xx[936] * xx[937];
  xx[635] = xx[938] * xx[939];
  xx[636] = xx[937] * xx[937];
  xx[637] = xx[938] * xx[938];
  xx[750] = xx[632];
  xx[751] = (xx[633] + xx[635]) * xx[19];
  xx[752] = xx[21] - (xx[636] + xx[637]) * xx[19];
  pm_math_cross3(xx + 750, xx + 231, xx + 794);
  pm_math_quatXform(xx + 940, xx + 794, xx + 750);
  pm_math_quatXform(xx + 214, xx + 626, xx + 794);
  xx[650] = xx[794] - xx[258];
  xx[651] = xx[795] + xx[252];
  xx[700] = xx[796] - xx[247];
  xx[794] = xx[650];
  xx[795] = xx[651];
  xx[796] = xx[700];
  pm_math_quatXform(xx + 188, xx + 794, xx + 802);
  xx[789] = xx[802] + xx[251];
  xx[790] = xx[803] + xx[272];
  xx[802] = xx[804] + xx[262];
  xx[808] = xx[789];
  xx[809] = xx[790];
  xx[810] = xx[802];
  pm_math_quatXform(xx + 178, xx + 808, xx + 838);
  xx[803] = xx[839] + xx[278];
  xx[804] = xx[838] + xx[277];
  xx[838] = xx[803] * xx[159] - xx[804] * xx[157];
  xx[839] = xx[19] * xx[159] * xx[838] - (xx[803] - xx[282]) - xx[280];
  xx[840] = xx[804] + xx[19] * xx[157] * xx[838] + xx[287] - xx[276];
  xx[838] = xx[164] * xx[840];
  xx[906] = xx[164] * xx[839];
  xx[910] = xx[149] * xx[840] - xx[839] * xx[156];
  xx[930] = - xx[838];
  xx[931] = xx[906];
  xx[932] = xx[910];
  pm_math_cross3(xx + 284, xx + 930, xx + 940);
  xx[911] = xx[750] + xx[839] + xx[19] * (xx[940] - xx[838] * xx[163]);
  pm_math_quatCompose(xx + 308, xx + 615, xx + 943);
  xx[838] = xx[228] * xx[946];
  xx[839] = xx[229] * xx[945] - xx[228] * xx[944];
  xx[930] = xx[838];
  xx[931] = - (xx[229] * xx[946]);
  xx[932] = xx[839];
  pm_math_cross3(xx + 944, xx + 930, xx + 947);
  xx[930] = xx[601];
  xx[931] = xx[475];
  xx[932] = xx[614];
  xx[601] = xx[481] * xx[619];
  xx[614] = xx[481] * xx[620];
  xx[912] = xx[620] * xx[475] - xx[194] * xx[619];
  xx[954] = xx[601];
  xx[955] = xx[614];
  xx[956] = xx[912];
  pm_math_cross3(xx + 930, xx + 954, xx + 1074);
  xx[926] = xx[601] * xx[200];
  xx[950] = xx[19] * (xx[1074] + xx[926]) - xx[620];
  xx[954] = xx[614] * xx[200];
  xx[955] = xx[619] + (xx[954] + xx[1075]) * xx[19];
  xx[956] = xx[200] * xx[912] + xx[1076];
  xx[1074] = xx[950];
  xx[1075] = xx[955];
  xx[1076] = xx[956] * xx[19];
  pm_math_quatXform(xx + 308, xx + 1074, xx + 1080);
  xx[912] = xx[19] * (xx[947] + xx[943] * xx[838]) + xx[1080] - xx[229];
  xx[838] = xx[912] / xx[235];
  xx[1074] = xx[52] * xx[838];
  xx[1075] = xx[1074] * xx[475];
  xx[1076] = xx[194] * xx[1074];
  xx[1083] = xx[582] * xx[838];
  xx[1084] = xx[481] * xx[1083];
  xx[1085] = xx[585] * xx[838];
  xx[1086] = xx[481] * xx[1085];
  xx[1087] = xx[1085] * xx[475] - xx[194] * xx[1083];
  xx[1088] = xx[1084];
  xx[1089] = xx[1086];
  xx[1090] = xx[1087];
  pm_math_cross3(xx + 930, xx + 1088, xx + 1091);
  xx[1088] = xx[19] * (xx[1091] + xx[1084] * xx[200]) - xx[1085];
  xx[1084] = xx[1083] + (xx[1086] * xx[200] + xx[1092]) * xx[19];
  xx[1083] = (xx[200] * xx[1087] + xx[1093]) * xx[19];
  xx[1085] = xx[1088];
  xx[1086] = xx[1084];
  xx[1087] = xx[1083];
  pm_math_cross3(xx + 626, xx + 1085, xx + 1089);
  xx[1085] = (xx[1075] * xx[200] + xx[481] * xx[1076]) * xx[19] + xx[1089];
  xx[1086] = xx[201] * xx[475];
  xx[1087] = xx[481] * xx[195] - xx[194] * xx[201];
  xx[1092] = xx[195] * xx[475];
  xx[1093] = - xx[1086];
  xx[1094] = xx[1087];
  xx[1095] = xx[1092];
  pm_math_cross3(xx + 930, xx + 1093, xx + 1096);
  xx[1093] = xx[19] * (xx[1096] + xx[1086] * xx[200]) - xx[195];
  xx[1094] = xx[19] * (xx[1097] - xx[200] * xx[1087]);
  xx[1095] = (xx[1098] - xx[1092] * xx[200]) * xx[19] - xx[201];
  pm_math_cross3(xx + 1093, xx + 231, xx + 1096);
  pm_math_quatXform(xx + 943, xx + 1096, xx + 1092);
  xx[1095] = - (xx[201] * xx[625]);
  xx[1096] = xx[195] * xx[622] - xx[201] * xx[621];
  xx[1097] = xx[195] * xx[625];
  pm_math_quatXform(xx + 214, xx + 1095, xx + 1098);
  xx[1095] = xx[1098] + xx[314];
  xx[1096] = xx[1099] + xx[315] - xx[291];
  xx[1097] = xx[1100] - xx[292];
  pm_math_quatXform(xx + 304, xx + 1095, xx + 1098);
  xx[944] = xx[1092] + xx[1098];
  xx[945] = xx[1074] - (xx[194] * xx[1076] + xx[1075] * xx[475]) * xx[19] + xx
    [1091];
  xx[1074] = (xx[944] + xx[1085] * xx[195] + xx[945] * xx[201] + xx[1084] * xx
              [291]) / xx[456];
  xx[1095] = xx[1085] + xx[1074] * xx[409];
  xx[1096] = xx[19] * (xx[1076] * xx[200] - xx[481] * xx[1075]) + xx[1090] + xx
    [513] * xx[1074];
  xx[1097] = xx[945] - xx[354] * xx[1074];
  pm_math_quatXform(xx + 214, xx + 1095, xx + 1085);
  xx[1089] = xx[1088] + xx[392] * xx[1074];
  xx[1090] = xx[1084] + xx[437] * xx[1074];
  xx[1091] = xx[1083] + xx[1074] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1089, xx + 1095);
  pm_math_cross3(xx + 551, xx + 1095, xx + 1088);
  xx[945] = xx[1085] + xx[1088];
  pm_math_quatCompose(xx + 304, xx + 646, xx + 1101);
  xx[1075] = xx[648] * xx[648];
  xx[1076] = xx[649] * xx[649];
  xx[1083] = xx[647] * xx[648];
  xx[1084] = xx[646] * xx[649];
  xx[1091] = xx[19] * (xx[1083] - xx[1084]);
  xx[1105] = xx[646] * xx[648];
  xx[1106] = xx[647] * xx[649];
  xx[1107] = xx[21] - (xx[1075] + xx[1076]) * xx[19];
  xx[1108] = xx[1091];
  xx[1109] = (xx[1105] + xx[1106]) * xx[19];
  pm_math_cross3(xx + 1107, xx + 231, xx + 1110);
  pm_math_quatXform(xx + 1101, xx + 1110, xx + 1107);
  xx[1110] = xx[185] * xx[651];
  xx[1111] = xx[187] * xx[700];
  xx[1112] = xx[1110] + xx[1111];
  xx[1113] = xx[651] * xx[184];
  xx[1114] = xx[700] * xx[184];
  xx[1115] = - xx[1112];
  xx[1116] = - xx[1113];
  xx[1117] = - xx[1114];
  pm_math_cross3(xx + 611, xx + 1115, xx + 1118);
  xx[1115] = xx[19] * (xx[1118] - xx[1112] * xx[183]) + xx[630];
  xx[1116] = xx[19] * (xx[1119] - xx[1113] * xx[183]) + xx[623] - xx[700] - xx
    [230];
  xx[1117] = xx[651] + xx[19] * (xx[1120] - xx[1114] * xx[183]) + xx[624] - xx
    [229];
  pm_math_quatXform(xx + 300, xx + 1115, xx + 1112);
  xx[1115] = xx[1107] + xx[1112];
  xx[1116] = xx[647] * xx[647];
  xx[1117] = xx[648] * xx[649];
  xx[1118] = xx[646] * xx[647];
  xx[1119] = xx[19] * (xx[1117] - xx[1118]);
  xx[1120] = (xx[1084] + xx[1083]) * xx[19];
  xx[1121] = xx[21] - (xx[1076] + xx[1116]) * xx[19];
  xx[1122] = xx[1119];
  pm_math_cross3(xx + 1120, xx + 231, xx + 1123);
  pm_math_quatXform(xx + 1101, xx + 1123, xx + 1120);
  xx[1123] = xx[185] * xx[650];
  xx[1124] = xx[650] * xx[184];
  xx[1125] = xx[1124] - xx[1111];
  xx[1111] = xx[185] * xx[700];
  xx[1126] = xx[1123];
  xx[1127] = xx[1125];
  xx[1128] = xx[1111];
  pm_math_cross3(xx + 611, xx + 1126, xx + 1129);
  xx[1126] = xx[700] + (xx[1123] * xx[183] + xx[1129]) * xx[19] + xx[645] + xx
    [230];
  xx[1127] = (xx[183] * xx[1125] + xx[1130]) * xx[19] + xx[641];
  xx[1128] = (xx[1111] * xx[183] + xx[1131]) * xx[19] + xx[644] - xx[650] - xx
    [228];
  pm_math_quatXform(xx + 300, xx + 1126, xx + 1129);
  xx[700] = xx[1120] + xx[1129];
  xx[1111] = xx[1086] + xx[1089];
  xx[1123] = xx[19] * (xx[1106] - xx[1105]);
  xx[1125] = xx[1123];
  xx[1126] = (xx[1118] + xx[1117]) * xx[19];
  xx[1127] = xx[21] - (xx[1116] + xx[1075]) * xx[19];
  pm_math_cross3(xx + 1125, xx + 231, xx + 1132);
  pm_math_quatXform(xx + 1101, xx + 1132, xx + 1125);
  xx[1101] = xx[187] * xx[650];
  xx[1102] = xx[187] * xx[651];
  xx[1103] = xx[1124] - xx[1110];
  pm_math_cross3(xx + 611, xx + 1101, xx + 1132);
  xx[1135] = (xx[1101] * xx[183] + xx[1132]) * xx[19] + xx[570] - xx[651] + xx
    [229];
  xx[1136] = xx[650] + (xx[1102] * xx[183] + xx[1133]) * xx[19] + xx[182] + xx
    [228];
  xx[1137] = (xx[183] * xx[1103] + xx[1134]) * xx[19] + xx[550];
  pm_math_quatXform(xx + 300, xx + 1135, xx + 1101);
  xx[650] = xx[1125] + xx[1101];
  xx[651] = xx[1087] + xx[1090];
  xx[1085] = xx[1115] - (xx[945] - (xx[230] * xx[1096] + xx[229] * xx[1097]));
  xx[1086] = xx[700] - (xx[1111] + xx[230] * xx[1095] - xx[228] * xx[1097]);
  xx[1087] = xx[650] - (xx[651] + xx[229] * xx[1095] + xx[228] * xx[1096]);
  solveSymmetricPosDef(xx + 592, xx + 1085, 3, 1, xx + 1088, xx + 1132);
  xx[1085] = xx[945] + xx[421] * xx[1088] + xx[433] * xx[1089] + xx[454] * xx
    [1090];
  xx[1086] = xx[1111] + xx[500] * xx[1088] + xx[506] * xx[1089] + xx[515] * xx
    [1090];
  xx[1087] = xx[651] + xx[540] * xx[1088] + xx[443] * xx[1089] + xx[521] * xx
    [1090];
  pm_math_quatXform(xx + 188, xx + 1085, xx + 1132);
  xx[1085] = xx[1095] + xx[248] * xx[1088] + xx[511] * xx[1089] + xx[509] * xx
    [1090];
  xx[1086] = xx[1096] + xx[423] * xx[1088] + xx[436] * xx[1089] + xx[498] * xx
    [1090];
  xx[1087] = xx[1097] + xx[427] * xx[1088] + xx[439] * xx[1089] + xx[504] * xx
    [1090];
  pm_math_quatXform(xx + 188, xx + 1085, xx + 1095);
  pm_math_cross3(xx + 444, xx + 1095, xx + 1085);
  xx[651] = xx[1132] + xx[1085];
  pm_math_quatCompose(xx + 300, xx + 785, xx + 1135);
  xx[945] = xx[89] * xx[788];
  xx[1104] = xx[89] * xx[786] + xx[787];
  xx[1139] = xx[945];
  xx[1140] = xx[788];
  xx[1141] = - xx[1104];
  pm_math_cross3(xx + 786, xx + 1139, xx + 1142);
  xx[1110] = xx[785] * xx[788];
  xx[1139] = xx[21] + (xx[1142] - xx[785] * xx[945]) * xx[19];
  xx[1140] = xx[19] * (xx[1143] - xx[1110]) - xx[89];
  xx[1141] = xx[19] * (xx[1144] + xx[785] * xx[1104]);
  pm_math_cross3(xx + 1139, xx + 231, xx + 1142);
  pm_math_quatXform(xx + 1135, xx + 1142, xx + 1139);
  xx[1104] = - (xx[802] * xx[89]);
  xx[1142] = xx[1104];
  xx[1143] = - xx[802];
  xx[1144] = xx[790] + xx[789] * xx[89];
  pm_math_quatXform(xx + 178, xx + 1142, xx + 1145);
  xx[1142] = xx[1145] + xx[782];
  xx[1143] = xx[1146] + xx[783];
  xx[1144] = xx[1147] + xx[784];
  pm_math_quatXform(xx + 296, xx + 1142, xx + 1145);
  xx[1111] = xx[1139] + xx[1145];
  xx[1124] = xx[1133] + xx[1086];
  xx[1128] = xx[786] - xx[89] * xx[787];
  xx[1142] = - xx[788];
  xx[1143] = xx[945];
  xx[1144] = xx[1128];
  pm_math_cross3(xx + 786, xx + 1142, xx + 1148);
  xx[1142] = xx[89] + (xx[1110] + xx[1148]) * xx[19];
  xx[1143] = xx[21] + xx[19] * (xx[1149] - xx[89] * xx[1110]);
  xx[1144] = xx[19] * (xx[1150] - xx[785] * xx[1128]);
  pm_math_cross3(xx + 1142, xx + 231, xx + 1148);
  pm_math_quatXform(xx + 1135, xx + 1148, xx + 1142);
  xx[1148] = xx[802];
  xx[1149] = xx[1104];
  xx[1150] = xx[790] * xx[89] - xx[789];
  pm_math_quatXform(xx + 178, xx + 1148, xx + 1151);
  xx[1148] = xx[1151] + xx[791];
  xx[1149] = xx[1152] + xx[792];
  xx[1150] = xx[1153] + xx[793];
  pm_math_quatXform(xx + 296, xx + 1148, xx + 1151);
  xx[802] = xx[1142] + xx[1151];
  xx[945] = xx[786] * xx[788];
  xx[1104] = xx[785] * xx[787];
  xx[1128] = xx[19] * (xx[945] - xx[1104]);
  xx[1148] = xx[785] * xx[786];
  xx[1149] = xx[787] * xx[788];
  xx[1150] = xx[786] * xx[786];
  xx[1154] = xx[787] * xx[787];
  xx[1155] = xx[1128];
  xx[1156] = (xx[1148] + xx[1149]) * xx[19];
  xx[1157] = xx[21] - (xx[1150] + xx[1154]) * xx[19];
  pm_math_cross3(xx + 1155, xx + 231, xx + 1158);
  pm_math_quatXform(xx + 1135, xx + 1158, xx + 1155);
  xx[1135] = xx[789] * xx[176];
  xx[1136] = xx[790] * xx[176];
  xx[1137] = xx[789] * xx[172] + xx[174] * xx[790];
  xx[1158] = xx[1135];
  xx[1159] = xx[1136];
  xx[1160] = - xx[1137];
  pm_math_cross3(xx + 760, xx + 1158, xx + 1161);
  xx[1158] = xx[19] * (xx[1161] + xx[1135] * xx[171]) + xx[807] - xx[790] - xx
    [68];
  xx[1159] = xx[789] + xx[19] * (xx[1162] + xx[1136] * xx[171]) + xx[763] + xx
    [67];
  xx[1160] = (xx[1163] - xx[1137] * xx[171]) * xx[19] + xx[805];
  pm_math_quatXform(xx + 296, xx + 1158, xx + 1135);
  xx[789] = xx[1155] + xx[1135];
  xx[790] = xx[1134] + xx[1087];
  xx[1085] = xx[1111] - (xx[651] - xx[1124] * xx[89] + pm_math_dot3(xx + 111, xx
    + 1095));
  xx[1086] = xx[802] - (xx[651] * xx[89] + xx[1124] + pm_math_dot3(xx + 753, xx
    + 1095));
  xx[1087] = xx[789] - (xx[790] + xx[67] * xx[1096] - xx[68] * xx[1095]);
  solveSymmetricPosDef(xx + 773, xx + 1085, 3, 1, xx + 1132, xx + 1158);
  xx[1085] = xx[651] + xx[663] * xx[1132] + xx[692] * xx[1133] + xx[765] * xx
    [1134];
  xx[1086] = xx[1124] + xx[687] * xx[1132] + xx[695] * xx[1133] + xx[767] * xx
    [1134];
  xx[1087] = xx[790] + xx[273] * xx[1132] + xx[447] * xx[1133] + xx[715] * xx
    [1134];
  pm_math_quatXform(xx + 178, xx + 1085, xx + 1158);
  xx[1085] = xx[1095] + xx[693] * xx[1132] + xx[723] * xx[1133] + xx[768] * xx
    [1134];
  xx[1086] = xx[1096] + xx[694] * xx[1132] + xx[727] * xx[1133] + xx[769] * xx
    [1134];
  xx[1087] = xx[1097] + xx[690] * xx[1132] + xx[759] * xx[1133] + xx[770] * xx
    [1134];
  pm_math_quatXform(xx + 178, xx + 1085, xx + 1095);
  pm_math_cross3(xx + 277, xx + 1095, xx + 1085);
  xx[651] = (xx[911] - (xx[1160] + xx[1087] - (xx[280] * xx[1095] + xx[276] *
    xx[1096]))) / xx[655];
  xx[790] = xx[174] * xx[651];
  xx[1085] = xx[651] * xx[172];
  xx[1086] = (xx[790] * xx[171] + xx[1085] * xx[176]) * xx[19];
  xx[1087] = xx[19] * (xx[790] * xx[176] - xx[1085] * xx[171]);
  xx[1095] = xx[651] - (xx[1085] * xx[172] + xx[174] * xx[790]) * xx[19];
  xx[1158] = xx[1086];
  xx[1159] = xx[1087];
  xx[1160] = xx[1095];
  xx[790] = xx[651] * xx[277] - xx[276] * xx[651];
  xx[1085] = xx[790] * xx[176];
  xx[1096] = xx[280] * xx[651] + xx[651] * xx[278];
  xx[1097] = xx[1096] * xx[176];
  xx[1124] = xx[790] * xx[172] + xx[174] * xx[1096];
  xx[1161] = xx[1085];
  xx[1162] = xx[1097];
  xx[1163] = - xx[1124];
  pm_math_cross3(xx + 760, xx + 1161, xx + 1164);
  xx[1138] = (xx[1164] - xx[1085] * xx[171]) * xx[19] - xx[1096];
  xx[1085] = xx[790] + xx[19] * (xx[1165] - xx[1097] * xx[171]);
  xx[790] = xx[19] * (xx[1166] + xx[1124] * xx[171]);
  xx[1161] = xx[1138];
  xx[1162] = xx[1085];
  xx[1163] = xx[790];
  xx[1096] = xx[1132] - (pm_math_dot3(xx + 684, xx + 1158) + pm_math_dot3(xx +
    724, xx + 1161));
  xx[1097] = xx[1133] - (pm_math_dot3(xx + 756, xx + 1158) + pm_math_dot3(xx +
    883, xx + 1161));
  xx[1124] = xx[1134] - (pm_math_dot3(xx + 886, xx + 1158) + pm_math_dot3(xx +
    829, xx + 1161));
  xx[1132] = xx[1086] + xx[1096] + xx[89] * xx[1097];
  xx[1133] = xx[1087] - xx[89] * xx[1096] + xx[1097];
  xx[1134] = xx[1095] + xx[1124];
  pm_math_quatInverseXform(xx + 188, xx + 1132, xx + 1158);
  pm_math_cross3(xx + 1132, xx + 444, xx + 1161);
  xx[1132] = xx[1138] + xx[90] * xx[1096] - xx[109] * xx[1097] - xx[68] * xx
    [1124] + xx[1161];
  xx[1133] = xx[1085] + xx[109] * xx[1096] + xx[90] * xx[1097] + xx[67] * xx
    [1124] + xx[1162];
  xx[1134] = xx[790] + xx[110] * xx[1096] + xx[691] * xx[1097] + xx[1163];
  pm_math_quatInverseXform(xx + 188, xx + 1132, xx + 1085);
  xx[790] = xx[1088] - (pm_math_dot3(xx + 719, xx + 1158) + pm_math_dot3(xx +
    835, xx + 1085));
  xx[1088] = xx[1089] - (pm_math_dot3(xx + 728, xx + 1158) + pm_math_dot3(xx +
    841, xx + 1085));
  xx[1089] = xx[1090] - (pm_math_dot3(xx + 844, xx + 1158) + pm_math_dot3(xx +
    696, xx + 1085));
  xx[1132] = xx[1158] + xx[790];
  xx[1133] = xx[1159] + xx[1088];
  xx[1134] = xx[1160] + xx[1089];
  pm_math_quatInverseXform(xx + 214, xx + 1132, xx + 1158);
  pm_math_cross3(xx + 1132, xx + 551, xx + 1161);
  xx[1132] = xx[1085] + xx[230] * xx[1088] + xx[229] * xx[1089] + xx[1161];
  xx[1133] = xx[1086] - xx[230] * xx[790] + xx[228] * xx[1089] + xx[1162];
  xx[1134] = xx[1087] - xx[229] * xx[790] - xx[228] * xx[1088] + xx[1163];
  pm_math_quatInverseXform(xx + 214, xx + 1132, xx + 1085);
  xx[1090] = xx[1074] - (pm_math_dot3(xx + 638, xx + 1158) + pm_math_dot3(xx +
    381, xx + 1085));
  xx[1074] = xx[1160] - xx[201] * xx[1090];
  xx[1132] = xx[1158] - xx[195] * xx[1090];
  xx[1133] = xx[1159];
  xx[1134] = xx[1074];
  pm_math_cross3(xx + 1132, xx + 244, xx + 1158);
  xx[1095] = xx[1085] + xx[1158];
  xx[1138] = xx[1086] - xx[291] * xx[1090];
  xx[1086] = xx[1138] + xx[1159];
  xx[1158] = xx[1086] * xx[205];
  xx[1159] = xx[1095] * xx[205];
  xx[1160] = xx[1074] * xx[668] + xx[534] * (xx[1095] - (xx[193] * xx[1158] +
    xx[1159] * xx[205]) * xx[19]) + (xx[1086] + xx[19] * (xx[193] * xx[1159] -
    xx[1158] * xx[205])) * xx[569];
  xx[1074] = xx[290] * xx[651] + xx[771] * xx[1096] + xx[263] * xx[1097] + xx
    [173] * xx[1124] + xx[554] * xx[790] + xx[186] * xx[1088] + xx[250] * xx
    [1089] + xx[312] * xx[1090] + xx[1160] * xx[242];
  xx[1086] = xx[751] + xx[840] + (xx[906] * xx[163] + xx[941]) * xx[19];
  xx[840] = (xx[948] - xx[229] * xx[943] * xx[946]) * xx[19] + xx[1081] - xx[228];
  xx[906] = xx[840] / xx[235];
  xx[946] = xx[52] * xx[906];
  xx[1095] = xx[946] * xx[475];
  xx[1158] = xx[194] * xx[946];
  xx[1159] = xx[582] * xx[906];
  xx[1161] = xx[481] * xx[1159];
  xx[1162] = xx[585] * xx[906];
  xx[1163] = xx[481] * xx[1162];
  xx[1164] = xx[1162] * xx[475] - xx[194] * xx[1159];
  xx[1165] = xx[1161];
  xx[1166] = xx[1163];
  xx[1167] = xx[1164];
  pm_math_cross3(xx + 930, xx + 1165, xx + 1168);
  xx[1165] = xx[19] * (xx[1168] + xx[1161] * xx[200]) - xx[1162];
  xx[1161] = xx[1159] + (xx[1163] * xx[200] + xx[1169]) * xx[19];
  xx[1159] = (xx[1164] * xx[200] + xx[1170]) * xx[19];
  xx[1162] = xx[1165];
  xx[1163] = xx[1161];
  xx[1164] = xx[1159];
  pm_math_cross3(xx + 626, xx + 1162, xx + 1166);
  xx[1162] = (xx[1095] * xx[200] + xx[481] * xx[1158]) * xx[19] + xx[1166];
  xx[1163] = xx[1093] + xx[1099];
  xx[1164] = xx[946] - (xx[194] * xx[1158] + xx[1095] * xx[475]) * xx[19] + xx
    [1168];
  xx[946] = (xx[1163] + xx[1162] * xx[195] + xx[1164] * xx[201] + xx[1161] * xx
             [291]) / xx[456];
  xx[1168] = xx[1162] + xx[946] * xx[409];
  xx[1169] = xx[19] * (xx[1158] * xx[200] - xx[481] * xx[1095]) + xx[1167] + xx
    [513] * xx[946];
  xx[1170] = xx[1164] - xx[354] * xx[946];
  pm_math_quatXform(xx + 214, xx + 1168, xx + 1171);
  xx[1166] = xx[1165] + xx[392] * xx[946];
  xx[1167] = xx[1161] + xx[437] * xx[946];
  xx[1168] = xx[1159] + xx[946] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1166, xx + 1174);
  pm_math_cross3(xx + 551, xx + 1174, xx + 1164);
  xx[1095] = xx[1171] + xx[1164];
  xx[1158] = xx[1108] + xx[1113];
  xx[1159] = xx[1121] + xx[1130];
  xx[1161] = xx[1172] + xx[1165];
  xx[1162] = xx[1126] + xx[1102];
  xx[1164] = xx[1173] + xx[1166];
  xx[1165] = xx[1158] - (xx[1095] - (xx[230] * xx[1175] + xx[229] * xx[1176]));
  xx[1166] = xx[1159] - (xx[1161] + xx[230] * xx[1174] - xx[228] * xx[1176]);
  xx[1167] = xx[1162] - (xx[1164] + xx[229] * xx[1174] + xx[228] * xx[1175]);
  solveSymmetricPosDef(xx + 592, xx + 1165, 3, 1, xx + 1168, xx + 1171);
  xx[1165] = xx[1095] + xx[421] * xx[1168] + xx[433] * xx[1169] + xx[454] * xx
    [1170];
  xx[1166] = xx[1161] + xx[500] * xx[1168] + xx[506] * xx[1169] + xx[515] * xx
    [1170];
  xx[1167] = xx[1164] + xx[540] * xx[1168] + xx[443] * xx[1169] + xx[521] * xx
    [1170];
  pm_math_quatXform(xx + 188, xx + 1165, xx + 1171);
  xx[1164] = xx[1174] + xx[248] * xx[1168] + xx[511] * xx[1169] + xx[509] * xx
    [1170];
  xx[1165] = xx[1175] + xx[423] * xx[1168] + xx[436] * xx[1169] + xx[498] * xx
    [1170];
  xx[1166] = xx[1176] + xx[427] * xx[1168] + xx[439] * xx[1169] + xx[504] * xx
    [1170];
  pm_math_quatXform(xx + 188, xx + 1164, xx + 1174);
  pm_math_cross3(xx + 444, xx + 1174, xx + 1164);
  xx[1095] = xx[1171] + xx[1164];
  xx[1161] = xx[1140] + xx[1146];
  xx[1167] = xx[1172] + xx[1165];
  xx[1177] = xx[1143] + xx[1152];
  xx[1178] = xx[1156] + xx[1136];
  xx[1164] = xx[1173] + xx[1166];
  xx[1171] = xx[1161] - (xx[1095] - xx[1167] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1174));
  xx[1172] = xx[1177] - (xx[1095] * xx[89] + xx[1167] + pm_math_dot3(xx + 753,
    xx + 1174));
  xx[1173] = xx[1178] - (xx[1164] + xx[67] * xx[1175] - xx[68] * xx[1174]);
  solveSymmetricPosDef(xx + 773, xx + 1171, 3, 1, xx + 1179, xx + 1182);
  xx[1171] = xx[1095] + xx[663] * xx[1179] + xx[692] * xx[1180] + xx[765] * xx
    [1181];
  xx[1172] = xx[1167] + xx[687] * xx[1179] + xx[695] * xx[1180] + xx[767] * xx
    [1181];
  xx[1173] = xx[1164] + xx[273] * xx[1179] + xx[447] * xx[1180] + xx[715] * xx
    [1181];
  pm_math_quatXform(xx + 178, xx + 1171, xx + 1164);
  xx[1171] = xx[1174] + xx[693] * xx[1179] + xx[723] * xx[1180] + xx[768] * xx
    [1181];
  xx[1172] = xx[1175] + xx[694] * xx[1179] + xx[727] * xx[1180] + xx[769] * xx
    [1181];
  xx[1173] = xx[1176] + xx[690] * xx[1179] + xx[759] * xx[1180] + xx[770] * xx
    [1181];
  pm_math_quatXform(xx + 178, xx + 1171, xx + 1174);
  pm_math_cross3(xx + 277, xx + 1174, xx + 1171);
  xx[1095] = (xx[1086] - (xx[1166] + xx[1173] - (xx[280] * xx[1174] + xx[276] *
    xx[1175]))) / xx[655];
  xx[1164] = xx[174] * xx[1095];
  xx[1165] = xx[1095] * xx[172];
  xx[1166] = (xx[1164] * xx[171] + xx[1165] * xx[176]) * xx[19];
  xx[1167] = xx[19] * (xx[1164] * xx[176] - xx[1165] * xx[171]);
  xx[1171] = xx[1095] - (xx[1165] * xx[172] + xx[174] * xx[1164]) * xx[19];
  xx[1172] = xx[1166];
  xx[1173] = xx[1167];
  xx[1174] = xx[1171];
  xx[1164] = xx[1095] * xx[277] - xx[276] * xx[1095];
  xx[1165] = xx[1164] * xx[176];
  xx[1175] = xx[280] * xx[1095] + xx[1095] * xx[278];
  xx[1176] = xx[1175] * xx[176];
  xx[1182] = xx[1164] * xx[172] + xx[174] * xx[1175];
  xx[1183] = xx[1165];
  xx[1184] = xx[1176];
  xx[1185] = - xx[1182];
  pm_math_cross3(xx + 760, xx + 1183, xx + 1186);
  xx[1183] = (xx[1186] - xx[1165] * xx[171]) * xx[19] - xx[1175];
  xx[1165] = xx[1164] + xx[19] * (xx[1187] - xx[1176] * xx[171]);
  xx[1164] = xx[19] * (xx[1188] + xx[1182] * xx[171]);
  xx[1184] = xx[1183];
  xx[1185] = xx[1165];
  xx[1186] = xx[1164];
  xx[1175] = xx[1179] - (pm_math_dot3(xx + 684, xx + 1172) + pm_math_dot3(xx +
    724, xx + 1184));
  xx[1176] = xx[1180] - (pm_math_dot3(xx + 756, xx + 1172) + pm_math_dot3(xx +
    883, xx + 1184));
  xx[1179] = xx[1181] - (pm_math_dot3(xx + 886, xx + 1172) + pm_math_dot3(xx +
    829, xx + 1184));
  xx[1172] = xx[1166] + xx[1175] + xx[89] * xx[1176];
  xx[1173] = xx[1167] - xx[89] * xx[1175] + xx[1176];
  xx[1174] = xx[1171] + xx[1179];
  pm_math_quatInverseXform(xx + 188, xx + 1172, xx + 1180);
  pm_math_cross3(xx + 1172, xx + 444, xx + 1184);
  xx[1171] = xx[1183] + xx[90] * xx[1175] - xx[109] * xx[1176] - xx[68] * xx
    [1179] + xx[1184];
  xx[1172] = xx[1165] + xx[109] * xx[1175] + xx[90] * xx[1176] + xx[67] * xx
    [1179] + xx[1185];
  xx[1173] = xx[1164] + xx[110] * xx[1175] + xx[691] * xx[1176] + xx[1186];
  pm_math_quatInverseXform(xx + 188, xx + 1171, xx + 1164);
  xx[1167] = xx[1168] - (pm_math_dot3(xx + 719, xx + 1180) + pm_math_dot3(xx +
    835, xx + 1164));
  xx[1168] = xx[1169] - (pm_math_dot3(xx + 728, xx + 1180) + pm_math_dot3(xx +
    841, xx + 1164));
  xx[1169] = xx[1170] - (pm_math_dot3(xx + 844, xx + 1180) + pm_math_dot3(xx +
    696, xx + 1164));
  xx[1170] = xx[1180] + xx[1167];
  xx[1171] = xx[1181] + xx[1168];
  xx[1172] = xx[1182] + xx[1169];
  pm_math_quatInverseXform(xx + 214, xx + 1170, xx + 1180);
  pm_math_cross3(xx + 1170, xx + 551, xx + 1183);
  xx[1170] = xx[1164] + xx[230] * xx[1168] + xx[229] * xx[1169] + xx[1183];
  xx[1171] = xx[1165] - xx[230] * xx[1167] + xx[228] * xx[1169] + xx[1184];
  xx[1172] = xx[1166] - xx[229] * xx[1167] - xx[228] * xx[1168] + xx[1185];
  pm_math_quatInverseXform(xx + 214, xx + 1170, xx + 1164);
  xx[1170] = xx[946] - (pm_math_dot3(xx + 638, xx + 1180) + pm_math_dot3(xx +
    381, xx + 1164));
  xx[946] = xx[1182] - xx[201] * xx[1170];
  xx[1171] = xx[1180] - xx[195] * xx[1170];
  xx[1172] = xx[1181];
  xx[1173] = xx[946];
  pm_math_cross3(xx + 1171, xx + 244, xx + 1180);
  xx[1174] = xx[1164] + xx[1180];
  xx[1183] = xx[1165] - xx[291] * xx[1170];
  xx[1165] = xx[1183] + xx[1181];
  xx[1180] = xx[1165] * xx[205];
  xx[1181] = xx[1174] * xx[205];
  xx[1182] = xx[946] * xx[668] + xx[534] * (xx[1174] - (xx[193] * xx[1180] + xx
    [1181] * xx[205]) * xx[19]) + (xx[1165] + xx[19] * (xx[193] * xx[1181] - xx
    [1180] * xx[205])) * xx[569];
  xx[946] = xx[290] * xx[1095] + xx[771] * xx[1175] + xx[263] * xx[1176] + xx
    [173] * xx[1179] + xx[554] * xx[1167] + xx[186] * xx[1168] + xx[250] * xx
    [1169] + xx[312] * xx[1170] + xx[1182] * xx[242];
  xx[750] = xx[752] + (xx[163] * xx[910] + xx[942]) * xx[19];
  xx[751] = (xx[943] * xx[839] + xx[949]) * xx[19] + xx[1082];
  xx[752] = xx[751] / xx[235];
  xx[839] = xx[52] * xx[752];
  xx[910] = xx[839] * xx[475];
  xx[940] = xx[194] * xx[839];
  xx[941] = xx[582] * xx[752];
  xx[942] = xx[481] * xx[941];
  xx[943] = xx[585] * xx[752];
  xx[947] = xx[481] * xx[943];
  xx[948] = xx[943] * xx[475] - xx[194] * xx[941];
  xx[1080] = xx[942];
  xx[1081] = xx[947];
  xx[1082] = xx[948];
  pm_math_cross3(xx + 930, xx + 1080, xx + 1184);
  xx[949] = xx[19] * (xx[1184] + xx[942] * xx[200]) - xx[943];
  xx[942] = xx[941] + (xx[947] * xx[200] + xx[1185]) * xx[19];
  xx[941] = (xx[948] * xx[200] + xx[1186]) * xx[19];
  xx[1080] = xx[949];
  xx[1081] = xx[942];
  xx[1082] = xx[941];
  pm_math_cross3(xx + 626, xx + 1080, xx + 1184);
  xx[943] = (xx[910] * xx[200] + xx[481] * xx[940]) * xx[19] + xx[1184];
  xx[947] = xx[1094] + xx[1100];
  xx[948] = xx[839] - (xx[194] * xx[940] + xx[910] * xx[475]) * xx[19] + xx[1186];
  xx[839] = (xx[947] + xx[943] * xx[195] + xx[948] * xx[201] + xx[942] * xx[291])
    / xx[456];
  xx[1080] = xx[943] + xx[839] * xx[409];
  xx[1081] = xx[19] * (xx[940] * xx[200] - xx[481] * xx[910]) + xx[1185] + xx
    [513] * xx[839];
  xx[1082] = xx[948] - xx[354] * xx[839];
  pm_math_quatXform(xx + 214, xx + 1080, xx + 1092);
  xx[1080] = xx[949] + xx[392] * xx[839];
  xx[1081] = xx[942] + xx[437] * xx[839];
  xx[1082] = xx[941] + xx[839] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1080, xx + 940);
  pm_math_cross3(xx + 551, xx + 940, xx + 1080);
  xx[910] = xx[1092] + xx[1080];
  xx[943] = xx[1109] + xx[1114];
  xx[948] = xx[1122] + xx[1131];
  xx[949] = xx[1093] + xx[1081];
  xx[1098] = xx[1127] + xx[1103];
  xx[1080] = xx[1094] + xx[1082];
  xx[1092] = xx[943] - (xx[910] - (xx[230] * xx[941] + xx[229] * xx[942]));
  xx[1093] = xx[948] - (xx[949] + xx[230] * xx[940] - xx[228] * xx[942]);
  xx[1094] = xx[1098] - (xx[1080] + xx[229] * xx[940] + xx[228] * xx[941]);
  solveSymmetricPosDef(xx + 592, xx + 1092, 3, 1, xx + 1099, xx + 1107);
  xx[1092] = xx[910] + xx[421] * xx[1099] + xx[433] * xx[1100] + xx[454] * xx
    [1101];
  xx[1093] = xx[949] + xx[500] * xx[1099] + xx[506] * xx[1100] + xx[515] * xx
    [1101];
  xx[1094] = xx[1080] + xx[540] * xx[1099] + xx[443] * xx[1100] + xx[521] * xx
    [1101];
  pm_math_quatXform(xx + 188, xx + 1092, xx + 1080);
  xx[1092] = xx[940] + xx[248] * xx[1099] + xx[511] * xx[1100] + xx[509] * xx
    [1101];
  xx[1093] = xx[941] + xx[423] * xx[1099] + xx[436] * xx[1100] + xx[498] * xx
    [1101];
  xx[1094] = xx[942] + xx[427] * xx[1099] + xx[439] * xx[1100] + xx[504] * xx
    [1101];
  pm_math_quatXform(xx + 188, xx + 1092, xx + 940);
  pm_math_cross3(xx + 444, xx + 940, xx + 1092);
  xx[910] = xx[1080] + xx[1092];
  xx[949] = xx[1141] + xx[1147];
  xx[1102] = xx[1081] + xx[1093];
  xx[1103] = xx[1144] + xx[1153];
  xx[1107] = xx[1157] + xx[1137];
  xx[1080] = xx[1082] + xx[1094];
  xx[1092] = xx[949] - (xx[910] - xx[1102] * xx[89] + pm_math_dot3(xx + 111, xx
    + 940));
  xx[1093] = xx[1103] - (xx[910] * xx[89] + xx[1102] + pm_math_dot3(xx + 753, xx
    + 940));
  xx[1094] = xx[1107] - (xx[1080] + xx[67] * xx[941] - xx[68] * xx[940]);
  solveSymmetricPosDef(xx + 773, xx + 1092, 3, 1, xx + 1112, xx + 1120);
  xx[1092] = xx[910] + xx[663] * xx[1112] + xx[692] * xx[1113] + xx[765] * xx
    [1114];
  xx[1093] = xx[1102] + xx[687] * xx[1112] + xx[695] * xx[1113] + xx[767] * xx
    [1114];
  xx[1094] = xx[1080] + xx[273] * xx[1112] + xx[447] * xx[1113] + xx[715] * xx
    [1114];
  pm_math_quatXform(xx + 178, xx + 1092, xx + 1080);
  xx[1092] = xx[940] + xx[693] * xx[1112] + xx[723] * xx[1113] + xx[768] * xx
    [1114];
  xx[1093] = xx[941] + xx[694] * xx[1112] + xx[727] * xx[1113] + xx[769] * xx
    [1114];
  xx[1094] = xx[942] + xx[690] * xx[1112] + xx[759] * xx[1113] + xx[770] * xx
    [1114];
  pm_math_quatXform(xx + 178, xx + 1092, xx + 940);
  pm_math_cross3(xx + 277, xx + 940, xx + 1092);
  xx[910] = (xx[750] - (xx[1082] + xx[1094] - (xx[280] * xx[940] + xx[276] * xx
    [941]))) / xx[655];
  xx[940] = xx[174] * xx[910];
  xx[941] = xx[910] * xx[172];
  xx[942] = (xx[940] * xx[171] + xx[941] * xx[176]) * xx[19];
  xx[1080] = xx[19] * (xx[940] * xx[176] - xx[941] * xx[171]);
  xx[1081] = xx[910] - (xx[941] * xx[172] + xx[174] * xx[940]) * xx[19];
  xx[1092] = xx[942];
  xx[1093] = xx[1080];
  xx[1094] = xx[1081];
  xx[940] = xx[910] * xx[277] - xx[276] * xx[910];
  xx[941] = xx[940] * xx[176];
  xx[1082] = xx[280] * xx[910] + xx[910] * xx[278];
  xx[1102] = xx[1082] * xx[176];
  xx[1108] = xx[940] * xx[172] + xx[174] * xx[1082];
  xx[1120] = xx[941];
  xx[1121] = xx[1102];
  xx[1122] = - xx[1108];
  pm_math_cross3(xx + 760, xx + 1120, xx + 1125);
  xx[1109] = (xx[1125] - xx[941] * xx[171]) * xx[19] - xx[1082];
  xx[941] = xx[940] + xx[19] * (xx[1126] - xx[1102] * xx[171]);
  xx[940] = xx[19] * (xx[1127] + xx[1108] * xx[171]);
  xx[1120] = xx[1109];
  xx[1121] = xx[941];
  xx[1122] = xx[940];
  xx[1082] = xx[1112] - (pm_math_dot3(xx + 684, xx + 1092) + pm_math_dot3(xx +
    724, xx + 1120));
  xx[1102] = xx[1113] - (pm_math_dot3(xx + 756, xx + 1092) + pm_math_dot3(xx +
    883, xx + 1120));
  xx[1108] = xx[1114] - (pm_math_dot3(xx + 886, xx + 1092) + pm_math_dot3(xx +
    829, xx + 1120));
  xx[1092] = xx[942] + xx[1082] + xx[89] * xx[1102];
  xx[1093] = xx[1080] - xx[89] * xx[1082] + xx[1102];
  xx[1094] = xx[1081] + xx[1108];
  pm_math_quatInverseXform(xx + 188, xx + 1092, xx + 1112);
  pm_math_cross3(xx + 1092, xx + 444, xx + 1120);
  xx[1092] = xx[1109] + xx[90] * xx[1082] - xx[109] * xx[1102] - xx[68] * xx
    [1108] + xx[1120];
  xx[1093] = xx[941] + xx[109] * xx[1082] + xx[90] * xx[1102] + xx[67] * xx[1108]
    + xx[1121];
  xx[1094] = xx[940] + xx[110] * xx[1082] + xx[691] * xx[1102] + xx[1122];
  pm_math_quatInverseXform(xx + 188, xx + 1092, xx + 940);
  xx[1080] = xx[1099] - (pm_math_dot3(xx + 719, xx + 1112) + pm_math_dot3(xx +
    835, xx + 940));
  xx[1081] = xx[1100] - (pm_math_dot3(xx + 728, xx + 1112) + pm_math_dot3(xx +
    841, xx + 940));
  xx[1092] = xx[1101] - (pm_math_dot3(xx + 844, xx + 1112) + pm_math_dot3(xx +
    696, xx + 940));
  xx[1099] = xx[1112] + xx[1080];
  xx[1100] = xx[1113] + xx[1081];
  xx[1101] = xx[1114] + xx[1092];
  pm_math_quatInverseXform(xx + 214, xx + 1099, xx + 1112);
  pm_math_cross3(xx + 1099, xx + 551, xx + 1120);
  xx[1099] = xx[940] + xx[230] * xx[1081] + xx[229] * xx[1092] + xx[1120];
  xx[1100] = xx[941] - xx[230] * xx[1080] + xx[228] * xx[1092] + xx[1121];
  xx[1101] = xx[942] - xx[229] * xx[1080] - xx[228] * xx[1081] + xx[1122];
  pm_math_quatInverseXform(xx + 214, xx + 1099, xx + 940);
  xx[1093] = xx[839] - (pm_math_dot3(xx + 638, xx + 1112) + pm_math_dot3(xx +
    381, xx + 940));
  xx[839] = xx[1114] - xx[201] * xx[1093];
  xx[1099] = xx[1112] - xx[195] * xx[1093];
  xx[1100] = xx[1113];
  xx[1101] = xx[839];
  pm_math_cross3(xx + 1099, xx + 244, xx + 1112);
  xx[1094] = xx[940] + xx[1112];
  xx[1109] = xx[941] - xx[291] * xx[1093];
  xx[941] = xx[1109] + xx[1113];
  xx[1112] = xx[941] * xx[205];
  xx[1113] = xx[1094] * xx[205];
  xx[1114] = xx[839] * xx[668] + xx[534] * (xx[1094] - (xx[193] * xx[1112] + xx
    [1113] * xx[205]) * xx[19]) + (xx[941] + xx[19] * (xx[193] * xx[1113] - xx
    [1112] * xx[205])) * xx[569];
  xx[839] = xx[290] * xx[910] + xx[771] * xx[1082] + xx[263] * xx[1102] + xx[173]
    * xx[1108] + xx[554] * xx[1080] + xx[186] * xx[1081] + xx[250] * xx[1092] +
    xx[312] * xx[1093] + xx[1114] * xx[242];
  pm_math_quatCompose(xx + 214, xx + 525, xx + 1139);
  pm_math_quatCompose(xx + 188, xx + 1139, xx + 1143);
  pm_math_quatCompose(xx + 178, xx + 1143, xx + 1184);
  pm_math_quatCompose(xx + 167, xx + 1184, xx + 1188);
  xx[941] = xx[1185] * xx[1187];
  xx[1094] = xx[1184] * xx[1186];
  xx[1112] = xx[19] * (xx[941] - xx[1094]);
  xx[1113] = xx[1184] * xx[1185];
  xx[1120] = xx[1186] * xx[1187];
  xx[1121] = xx[1185] * xx[1185];
  xx[1122] = xx[1186] * xx[1186];
  xx[1125] = xx[1112];
  xx[1126] = (xx[1113] + xx[1120]) * xx[19];
  xx[1127] = xx[21] - (xx[1121] + xx[1122]) * xx[19];
  pm_math_cross3(xx + 1125, xx + 231, xx + 1129);
  pm_math_quatXform(xx + 1188, xx + 1129, xx + 1125);
  pm_math_quatXform(xx + 214, xx + 536, xx + 1129);
  xx[1135] = xx[1129] - xx[258];
  xx[1136] = xx[1130] + xx[252];
  xx[1129] = xx[1131] - xx[247];
  xx[1151] = xx[1135];
  xx[1152] = xx[1136];
  xx[1153] = xx[1129];
  pm_math_quatXform(xx + 188, xx + 1151, xx + 1155);
  xx[1130] = xx[1155] + xx[251];
  xx[1131] = xx[1156] + xx[272];
  xx[1137] = xx[1157] + xx[262];
  xx[1155] = xx[1130];
  xx[1156] = xx[1131];
  xx[1157] = xx[1137];
  pm_math_quatXform(xx + 178, xx + 1155, xx + 1188);
  xx[1147] = xx[1189] + xx[278];
  xx[1165] = xx[1188] + xx[277];
  xx[1174] = xx[1147] * xx[159] - xx[1165] * xx[157];
  xx[1180] = xx[19] * xx[159] * xx[1174] - (xx[1147] - xx[282]) - xx[280];
  xx[1181] = xx[1165] + xx[19] * xx[157] * xx[1174] + xx[287] - xx[276];
  xx[1174] = xx[1181] * xx[164];
  xx[1188] = xx[1180] * xx[164];
  xx[1189] = xx[1181] * xx[149] - xx[1180] * xx[156];
  xx[1190] = - xx[1174];
  xx[1191] = xx[1188];
  xx[1192] = xx[1189];
  pm_math_cross3(xx + 284, xx + 1190, xx + 1193);
  xx[1190] = xx[1125] + xx[1180] + xx[19] * (xx[1193] - xx[1174] * xx[163]);
  pm_math_quatCompose(xx + 308, xx + 525, xx + 1196);
  xx[1174] = xx[228] * xx[1199];
  xx[1180] = xx[228] * xx[1197] - xx[229] * xx[1198];
  xx[1200] = - xx[1174];
  xx[1201] = xx[229] * xx[1199];
  xx[1202] = xx[1180];
  pm_math_cross3(xx + 1197, xx + 1200, xx + 1203);
  xx[1200] = xx[347];
  xx[1201] = xx[512];
  xx[1202] = xx[473];
  xx[512] = xx[529] * xx[473];
  xx[1191] = xx[530] * xx[473];
  xx[1192] = xx[529] * xx[347] + xx[469] * xx[530];
  xx[1206] = - xx[512];
  xx[1207] = xx[1191];
  xx[1208] = xx[1192];
  pm_math_cross3(xx + 1200, xx + 1206, xx + 1209);
  xx[1206] = xx[339] * xx[512];
  xx[1207] = xx[530] + xx[19] * (xx[1209] + xx[1206]);
  xx[1208] = xx[339] * xx[1191];
  xx[1212] = xx[529] + (xx[1210] - xx[1208]) * xx[19];
  xx[1209] = xx[1211] - xx[339] * xx[1192];
  xx[1213] = xx[1207];
  xx[1214] = xx[1212];
  xx[1215] = xx[1209] * xx[19];
  pm_math_quatXform(xx + 308, xx + 1213, xx + 1216);
  xx[1192] = xx[19] * (xx[1203] - xx[1196] * xx[1174]) + xx[1216] + xx[229];
  xx[1174] = xx[1192] / xx[471];
  xx[1210] = xx[493] * xx[1174];
  xx[1211] = xx[496] * xx[1174];
  xx[1213] = xx[1211] * xx[473];
  xx[1214] = xx[1210] * xx[473];
  xx[1215] = xx[1211] * xx[347] + xx[469] * xx[1210];
  xx[1219] = - xx[1213];
  xx[1220] = xx[1214];
  xx[1221] = xx[1215];
  pm_math_cross3(xx + 1200, xx + 1219, xx + 1222);
  xx[1219] = xx[1210] + xx[19] * (xx[1222] + xx[339] * xx[1213]);
  xx[1210] = xx[1211] + (xx[1223] - xx[339] * xx[1214]) * xx[19];
  xx[1211] = (xx[1224] - xx[339] * xx[1215]) * xx[19];
  xx[1213] = xx[1219];
  xx[1214] = xx[1210];
  xx[1215] = xx[1211];
  pm_math_cross3(xx + 536, xx + 1213, xx + 1220);
  xx[1213] = xx[52] * xx[1174];
  xx[1214] = xx[469] * xx[1213];
  xx[1215] = xx[1213] * xx[347];
  xx[1223] = xx[1220] - (xx[339] * xx[1214] + xx[1215] * xx[473]) * xx[19];
  xx[1224] = xx[469] * xx[201];
  xx[1225] = xx[201] * xx[347] - xx[195] * xx[473];
  xx[1226] = xx[469] * xx[195];
  xx[1227] = xx[1224];
  xx[1228] = xx[1225];
  xx[1229] = - xx[1226];
  pm_math_cross3(xx + 1200, xx + 1227, xx + 1230);
  xx[1227] = xx[19] * (xx[1230] + xx[339] * xx[1224]) - xx[195];
  xx[1228] = xx[19] * (xx[1231] + xx[339] * xx[1225]);
  xx[1229] = (xx[1232] - xx[339] * xx[1226]) * xx[19] - xx[201];
  pm_math_cross3(xx + 1227, xx + 231, xx + 1224);
  pm_math_quatXform(xx + 1196, xx + 1224, xx + 1227);
  xx[1224] = - (xx[201] * xx[535]);
  xx[1225] = xx[201] * xx[531] + xx[195] * xx[532];
  xx[1226] = xx[195] * xx[535];
  pm_math_quatXform(xx + 214, xx + 1224, xx + 1230);
  xx[1224] = xx[1230] + xx[314];
  xx[1225] = xx[1231] + xx[315] - xx[291];
  xx[1226] = xx[1232] - xx[292];
  pm_math_quatXform(xx + 304, xx + 1224, xx + 1230);
  xx[1197] = xx[1227] + xx[1230];
  xx[1198] = (xx[1215] * xx[347] + xx[469] * xx[1214]) * xx[19] - xx[1213] + xx
    [1222];
  xx[1213] = (xx[1197] + xx[1223] * xx[195] + xx[1198] * xx[201] + xx[1210] *
              xx[291]) / xx[456];
  xx[1224] = xx[1223] + xx[1213] * xx[409];
  xx[1225] = xx[19] * (xx[1214] * xx[473] - xx[339] * xx[1215]) + xx[1221] + xx
    [513] * xx[1213];
  xx[1226] = xx[1198] - xx[354] * xx[1213];
  pm_math_quatXform(xx + 214, xx + 1224, xx + 1220);
  xx[1223] = xx[1219] + xx[392] * xx[1213];
  xx[1224] = xx[1210] + xx[437] * xx[1213];
  xx[1225] = xx[1211] + xx[1213] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1223, xx + 1233);
  pm_math_cross3(xx + 551, xx + 1233, xx + 1223);
  xx[1198] = xx[1220] + xx[1223];
  pm_math_quatCompose(xx + 304, xx + 1139, xx + 1236);
  xx[1210] = xx[1141] * xx[1141];
  xx[1211] = xx[1142] * xx[1142];
  xx[1214] = xx[1140] * xx[1141];
  xx[1215] = xx[1139] * xx[1142];
  xx[1219] = xx[19] * (xx[1214] - xx[1215]);
  xx[1226] = xx[1139] * xx[1141];
  xx[1240] = xx[1140] * xx[1142];
  xx[1241] = xx[21] - (xx[1210] + xx[1211]) * xx[19];
  xx[1242] = xx[1219];
  xx[1243] = (xx[1226] + xx[1240]) * xx[19];
  pm_math_cross3(xx + 1241, xx + 231, xx + 1244);
  pm_math_quatXform(xx + 1236, xx + 1244, xx + 1241);
  xx[1244] = xx[1136] * xx[185];
  xx[1245] = xx[1129] * xx[187];
  xx[1246] = xx[1244] + xx[1245];
  xx[1247] = xx[1136] * xx[184];
  xx[1248] = xx[1129] * xx[184];
  xx[1249] = - xx[1246];
  xx[1250] = - xx[1247];
  xx[1251] = - xx[1248];
  pm_math_cross3(xx + 611, xx + 1249, xx + 1252);
  xx[1249] = xx[19] * (xx[1252] - xx[1246] * xx[183]) + xx[630];
  xx[1250] = xx[19] * (xx[1253] - xx[1247] * xx[183]) + xx[623] - xx[1129] - xx
    [230];
  xx[1251] = xx[1136] + xx[19] * (xx[1254] - xx[1248] * xx[183]) + xx[624] - xx
    [229];
  pm_math_quatXform(xx + 300, xx + 1249, xx + 1246);
  xx[1249] = xx[1241] + xx[1246];
  xx[1250] = xx[1140] * xx[1140];
  xx[1251] = xx[1141] * xx[1142];
  xx[1252] = xx[1139] * xx[1140];
  xx[1253] = xx[19] * (xx[1251] - xx[1252]);
  xx[1254] = (xx[1215] + xx[1214]) * xx[19];
  xx[1255] = xx[21] - (xx[1211] + xx[1250]) * xx[19];
  xx[1256] = xx[1253];
  pm_math_cross3(xx + 1254, xx + 231, xx + 1257);
  pm_math_quatXform(xx + 1236, xx + 1257, xx + 1254);
  xx[1257] = xx[1135] * xx[185];
  xx[1258] = xx[1135] * xx[184];
  xx[1259] = xx[1258] - xx[1245];
  xx[1245] = xx[1129] * xx[185];
  xx[1260] = xx[1257];
  xx[1261] = xx[1259];
  xx[1262] = xx[1245];
  pm_math_cross3(xx + 611, xx + 1260, xx + 1263);
  xx[1260] = xx[1129] + (xx[1257] * xx[183] + xx[1263]) * xx[19] + xx[645] + xx
    [230];
  xx[1261] = (xx[1259] * xx[183] + xx[1264]) * xx[19] + xx[641];
  xx[1262] = (xx[1245] * xx[183] + xx[1265]) * xx[19] + xx[644] - xx[1135] - xx
    [228];
  pm_math_quatXform(xx + 300, xx + 1260, xx + 1263);
  xx[1129] = xx[1254] + xx[1263];
  xx[1245] = xx[1221] + xx[1224];
  xx[1257] = xx[19] * (xx[1240] - xx[1226]);
  xx[1259] = xx[1257];
  xx[1260] = (xx[1252] + xx[1251]) * xx[19];
  xx[1261] = xx[21] - (xx[1250] + xx[1210]) * xx[19];
  pm_math_cross3(xx + 1259, xx + 231, xx + 1266);
  pm_math_quatXform(xx + 1236, xx + 1266, xx + 1259);
  xx[1236] = xx[1135] * xx[187];
  xx[1237] = xx[1136] * xx[187];
  xx[1238] = xx[1258] - xx[1244];
  pm_math_cross3(xx + 611, xx + 1236, xx + 1266);
  xx[1269] = (xx[1236] * xx[183] + xx[1266]) * xx[19] + xx[570] - xx[1136] + xx
    [229];
  xx[1270] = xx[1135] + (xx[1237] * xx[183] + xx[1267]) * xx[19] + xx[182] + xx
    [228];
  xx[1271] = (xx[1238] * xx[183] + xx[1268]) * xx[19] + xx[550];
  pm_math_quatXform(xx + 300, xx + 1269, xx + 1236);
  xx[1135] = xx[1259] + xx[1236];
  xx[1136] = xx[1222] + xx[1225];
  xx[1220] = xx[1249] - (xx[1198] - (xx[230] * xx[1234] + xx[229] * xx[1235]));
  xx[1221] = xx[1129] - (xx[1245] + xx[230] * xx[1233] - xx[228] * xx[1235]);
  xx[1222] = xx[1135] - (xx[1136] + xx[229] * xx[1233] + xx[228] * xx[1234]);
  solveSymmetricPosDef(xx + 592, xx + 1220, 3, 1, xx + 1223, xx + 1266);
  xx[1220] = xx[1198] + xx[421] * xx[1223] + xx[433] * xx[1224] + xx[454] * xx
    [1225];
  xx[1221] = xx[1245] + xx[500] * xx[1223] + xx[506] * xx[1224] + xx[515] * xx
    [1225];
  xx[1222] = xx[1136] + xx[540] * xx[1223] + xx[443] * xx[1224] + xx[521] * xx
    [1225];
  pm_math_quatXform(xx + 188, xx + 1220, xx + 1266);
  xx[1220] = xx[1233] + xx[248] * xx[1223] + xx[511] * xx[1224] + xx[509] * xx
    [1225];
  xx[1221] = xx[1234] + xx[423] * xx[1223] + xx[436] * xx[1224] + xx[498] * xx
    [1225];
  xx[1222] = xx[1235] + xx[427] * xx[1223] + xx[439] * xx[1224] + xx[504] * xx
    [1225];
  pm_math_quatXform(xx + 188, xx + 1220, xx + 1233);
  pm_math_cross3(xx + 444, xx + 1233, xx + 1220);
  xx[1136] = xx[1266] + xx[1220];
  pm_math_quatCompose(xx + 300, xx + 1143, xx + 1269);
  xx[1198] = xx[89] * xx[1146];
  xx[1239] = xx[89] * xx[1144] + xx[1145];
  xx[1273] = xx[1198];
  xx[1274] = xx[1146];
  xx[1275] = - xx[1239];
  pm_math_cross3(xx + 1144, xx + 1273, xx + 1276);
  xx[1244] = xx[1143] * xx[1146];
  xx[1273] = xx[21] + (xx[1276] - xx[1143] * xx[1198]) * xx[19];
  xx[1274] = xx[19] * (xx[1277] - xx[1244]) - xx[89];
  xx[1275] = xx[19] * (xx[1278] + xx[1143] * xx[1239]);
  pm_math_cross3(xx + 1273, xx + 231, xx + 1276);
  pm_math_quatXform(xx + 1269, xx + 1276, xx + 1273);
  xx[1239] = - (xx[1137] * xx[89]);
  xx[1276] = xx[1239];
  xx[1277] = - xx[1137];
  xx[1278] = xx[1131] + xx[1130] * xx[89];
  pm_math_quatXform(xx + 178, xx + 1276, xx + 1279);
  xx[1276] = xx[1279] + xx[782];
  xx[1277] = xx[1280] + xx[783];
  xx[1278] = xx[1281] + xx[784];
  pm_math_quatXform(xx + 296, xx + 1276, xx + 1279);
  xx[1245] = xx[1273] + xx[1279];
  xx[1258] = xx[1267] + xx[1221];
  xx[1262] = xx[1144] - xx[89] * xx[1145];
  xx[1276] = - xx[1146];
  xx[1277] = xx[1198];
  xx[1278] = xx[1262];
  pm_math_cross3(xx + 1144, xx + 1276, xx + 1282);
  xx[1276] = xx[89] + (xx[1244] + xx[1282]) * xx[19];
  xx[1277] = xx[21] + xx[19] * (xx[1283] - xx[89] * xx[1244]);
  xx[1278] = xx[19] * (xx[1284] - xx[1143] * xx[1262]);
  pm_math_cross3(xx + 1276, xx + 231, xx + 1282);
  pm_math_quatXform(xx + 1269, xx + 1282, xx + 1276);
  xx[1282] = xx[1137];
  xx[1283] = xx[1239];
  xx[1284] = xx[1131] * xx[89] - xx[1130];
  pm_math_quatXform(xx + 178, xx + 1282, xx + 1285);
  xx[1282] = xx[1285] + xx[791];
  xx[1283] = xx[1286] + xx[792];
  xx[1284] = xx[1287] + xx[793];
  pm_math_quatXform(xx + 296, xx + 1282, xx + 1285);
  xx[1137] = xx[1276] + xx[1285];
  xx[1198] = xx[1144] * xx[1146];
  xx[1239] = xx[1143] * xx[1145];
  xx[1262] = xx[19] * (xx[1198] - xx[1239]);
  xx[1282] = xx[1143] * xx[1144];
  xx[1283] = xx[1145] * xx[1146];
  xx[1284] = xx[1144] * xx[1144];
  xx[1288] = xx[1145] * xx[1145];
  xx[1289] = xx[1262];
  xx[1290] = (xx[1282] + xx[1283]) * xx[19];
  xx[1291] = xx[21] - (xx[1284] + xx[1288]) * xx[19];
  pm_math_cross3(xx + 1289, xx + 231, xx + 1292);
  pm_math_quatXform(xx + 1269, xx + 1292, xx + 1289);
  xx[1269] = xx[1130] * xx[176];
  xx[1270] = xx[1131] * xx[176];
  xx[1271] = xx[1130] * xx[172] + xx[1131] * xx[174];
  xx[1292] = xx[1269];
  xx[1293] = xx[1270];
  xx[1294] = - xx[1271];
  pm_math_cross3(xx + 760, xx + 1292, xx + 1295);
  xx[1292] = xx[19] * (xx[1295] + xx[1269] * xx[171]) + xx[807] - xx[1131] - xx
    [68];
  xx[1293] = xx[1130] + xx[19] * (xx[1296] + xx[1270] * xx[171]) + xx[763] + xx
    [67];
  xx[1294] = (xx[1297] - xx[1271] * xx[171]) * xx[19] + xx[805];
  pm_math_quatXform(xx + 296, xx + 1292, xx + 1269);
  xx[1130] = xx[1289] + xx[1269];
  xx[1131] = xx[1268] + xx[1222];
  xx[1220] = xx[1245] - (xx[1136] - xx[1258] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1233));
  xx[1221] = xx[1137] - (xx[1136] * xx[89] + xx[1258] + pm_math_dot3(xx + 753,
    xx + 1233));
  xx[1222] = xx[1130] - (xx[1131] + xx[67] * xx[1234] - xx[68] * xx[1233]);
  solveSymmetricPosDef(xx + 773, xx + 1220, 3, 1, xx + 1266, xx + 1292);
  xx[1220] = xx[1136] + xx[663] * xx[1266] + xx[692] * xx[1267] + xx[765] * xx
    [1268];
  xx[1221] = xx[1258] + xx[687] * xx[1266] + xx[695] * xx[1267] + xx[767] * xx
    [1268];
  xx[1222] = xx[1131] + xx[273] * xx[1266] + xx[447] * xx[1267] + xx[715] * xx
    [1268];
  pm_math_quatXform(xx + 178, xx + 1220, xx + 1292);
  xx[1220] = xx[1233] + xx[693] * xx[1266] + xx[723] * xx[1267] + xx[768] * xx
    [1268];
  xx[1221] = xx[1234] + xx[694] * xx[1266] + xx[727] * xx[1267] + xx[769] * xx
    [1268];
  xx[1222] = xx[1235] + xx[690] * xx[1266] + xx[759] * xx[1267] + xx[770] * xx
    [1268];
  pm_math_quatXform(xx + 178, xx + 1220, xx + 1233);
  pm_math_cross3(xx + 277, xx + 1233, xx + 1220);
  xx[1131] = (xx[1190] - (xx[1294] + xx[1222] - (xx[280] * xx[1233] + xx[276] *
    xx[1234]))) / xx[655];
  xx[1136] = xx[174] * xx[1131];
  xx[1220] = xx[1131] * xx[172];
  xx[1221] = (xx[1136] * xx[171] + xx[1220] * xx[176]) * xx[19];
  xx[1222] = xx[19] * (xx[1136] * xx[176] - xx[1220] * xx[171]);
  xx[1233] = xx[1131] - (xx[1220] * xx[172] + xx[174] * xx[1136]) * xx[19];
  xx[1292] = xx[1221];
  xx[1293] = xx[1222];
  xx[1294] = xx[1233];
  xx[1136] = xx[1131] * xx[277] - xx[276] * xx[1131];
  xx[1220] = xx[1136] * xx[176];
  xx[1234] = xx[280] * xx[1131] + xx[1131] * xx[278];
  xx[1235] = xx[1234] * xx[176];
  xx[1258] = xx[1136] * xx[172] + xx[174] * xx[1234];
  xx[1295] = xx[1220];
  xx[1296] = xx[1235];
  xx[1297] = - xx[1258];
  pm_math_cross3(xx + 760, xx + 1295, xx + 1298);
  xx[1272] = (xx[1298] - xx[1220] * xx[171]) * xx[19] - xx[1234];
  xx[1220] = xx[1136] + xx[19] * (xx[1299] - xx[1235] * xx[171]);
  xx[1136] = xx[19] * (xx[1300] + xx[1258] * xx[171]);
  xx[1295] = xx[1272];
  xx[1296] = xx[1220];
  xx[1297] = xx[1136];
  xx[1234] = xx[1266] - (pm_math_dot3(xx + 684, xx + 1292) + pm_math_dot3(xx +
    724, xx + 1295));
  xx[1235] = xx[1267] - (pm_math_dot3(xx + 756, xx + 1292) + pm_math_dot3(xx +
    883, xx + 1295));
  xx[1258] = xx[1268] - (pm_math_dot3(xx + 886, xx + 1292) + pm_math_dot3(xx +
    829, xx + 1295));
  xx[1266] = xx[1221] + xx[1234] + xx[89] * xx[1235];
  xx[1267] = xx[1222] - xx[89] * xx[1234] + xx[1235];
  xx[1268] = xx[1233] + xx[1258];
  pm_math_quatInverseXform(xx + 188, xx + 1266, xx + 1292);
  pm_math_cross3(xx + 1266, xx + 444, xx + 1295);
  xx[1266] = xx[1272] + xx[90] * xx[1234] - xx[109] * xx[1235] - xx[68] * xx
    [1258] + xx[1295];
  xx[1267] = xx[1220] + xx[109] * xx[1234] + xx[90] * xx[1235] + xx[67] * xx
    [1258] + xx[1296];
  xx[1268] = xx[1136] + xx[110] * xx[1234] + xx[691] * xx[1235] + xx[1297];
  pm_math_quatInverseXform(xx + 188, xx + 1266, xx + 1220);
  xx[1136] = xx[1223] - (pm_math_dot3(xx + 719, xx + 1292) + pm_math_dot3(xx +
    835, xx + 1220));
  xx[1223] = xx[1224] - (pm_math_dot3(xx + 728, xx + 1292) + pm_math_dot3(xx +
    841, xx + 1220));
  xx[1224] = xx[1225] - (pm_math_dot3(xx + 844, xx + 1292) + pm_math_dot3(xx +
    696, xx + 1220));
  xx[1266] = xx[1292] + xx[1136];
  xx[1267] = xx[1293] + xx[1223];
  xx[1268] = xx[1294] + xx[1224];
  pm_math_quatInverseXform(xx + 214, xx + 1266, xx + 1292);
  pm_math_cross3(xx + 1266, xx + 551, xx + 1295);
  xx[1266] = xx[1220] + xx[230] * xx[1223] + xx[229] * xx[1224] + xx[1295];
  xx[1267] = xx[1221] - xx[230] * xx[1136] + xx[228] * xx[1224] + xx[1296];
  xx[1268] = xx[1222] - xx[229] * xx[1136] - xx[228] * xx[1223] + xx[1297];
  pm_math_quatInverseXform(xx + 214, xx + 1266, xx + 1220);
  xx[1225] = xx[1213] - (pm_math_dot3(xx + 638, xx + 1292) + pm_math_dot3(xx +
    381, xx + 1220));
  xx[1213] = xx[1294] - xx[201] * xx[1225];
  xx[1266] = xx[1292] - xx[195] * xx[1225];
  xx[1267] = xx[1293];
  xx[1268] = xx[1213];
  pm_math_cross3(xx + 1266, xx + 244, xx + 1292);
  xx[1233] = xx[1220] + xx[1292];
  xx[1272] = xx[1221] - xx[291] * xx[1225];
  xx[1221] = xx[1272] + xx[1293];
  xx[1292] = xx[1221] * xx[205];
  xx[1293] = xx[1233] * xx[205];
  xx[1294] = xx[1213] * xx[668] + xx[534] * (xx[1233] - (xx[193] * xx[1292] +
    xx[1293] * xx[205]) * xx[19]) + (xx[1221] + xx[19] * (xx[193] * xx[1293] -
    xx[1292] * xx[205])) * xx[569];
  xx[1213] = xx[290] * xx[1131] + xx[771] * xx[1234] + xx[263] * xx[1235] + xx
    [173] * xx[1258] + xx[554] * xx[1136] + xx[186] * xx[1223] + xx[250] * xx
    [1224] + xx[312] * xx[1225] + xx[1294] * xx[242];
  xx[1221] = xx[1126] + xx[1181] + (xx[1188] * xx[163] + xx[1194]) * xx[19];
  xx[1181] = (xx[229] * xx[1196] * xx[1199] + xx[1204]) * xx[19] + xx[1217] +
    xx[228];
  xx[1188] = xx[1181] / xx[471];
  xx[1199] = xx[493] * xx[1188];
  xx[1233] = xx[496] * xx[1188];
  xx[1292] = xx[1233] * xx[473];
  xx[1293] = xx[1199] * xx[473];
  xx[1295] = xx[1233] * xx[347] + xx[469] * xx[1199];
  xx[1296] = - xx[1292];
  xx[1297] = xx[1293];
  xx[1298] = xx[1295];
  pm_math_cross3(xx + 1200, xx + 1296, xx + 1299);
  xx[1296] = xx[1199] + xx[19] * (xx[1299] + xx[339] * xx[1292]);
  xx[1199] = xx[1233] + (xx[1300] - xx[339] * xx[1293]) * xx[19];
  xx[1233] = (xx[1301] - xx[339] * xx[1295]) * xx[19];
  xx[1297] = xx[1296];
  xx[1298] = xx[1199];
  xx[1299] = xx[1233];
  pm_math_cross3(xx + 536, xx + 1297, xx + 1300);
  xx[1292] = xx[52] * xx[1188];
  xx[1293] = xx[469] * xx[1292];
  xx[1295] = xx[1292] * xx[347];
  xx[1297] = xx[1300] - (xx[339] * xx[1293] + xx[1295] * xx[473]) * xx[19];
  xx[1298] = xx[1228] + xx[1231];
  xx[1299] = (xx[1295] * xx[347] + xx[469] * xx[1293]) * xx[19] - xx[1292] + xx
    [1302];
  xx[1292] = (xx[1298] + xx[1297] * xx[195] + xx[1299] * xx[201] + xx[1199] *
              xx[291]) / xx[456];
  xx[1302] = xx[1297] + xx[1292] * xx[409];
  xx[1303] = xx[19] * (xx[1293] * xx[473] - xx[339] * xx[1295]) + xx[1301] + xx
    [513] * xx[1292];
  xx[1304] = xx[1299] - xx[354] * xx[1292];
  pm_math_quatXform(xx + 214, xx + 1302, xx + 1299);
  xx[1302] = xx[1296] + xx[392] * xx[1292];
  xx[1303] = xx[1199] + xx[437] * xx[1292];
  xx[1304] = xx[1233] + xx[1292] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1302, xx + 1295);
  pm_math_cross3(xx + 551, xx + 1295, xx + 1302);
  xx[1199] = xx[1299] + xx[1302];
  xx[1233] = xx[1242] + xx[1247];
  xx[1293] = xx[1255] + xx[1264];
  xx[1305] = xx[1300] + xx[1303];
  xx[1306] = xx[1260] + xx[1237];
  xx[1299] = xx[1301] + xx[1304];
  xx[1300] = xx[1233] - (xx[1199] - (xx[230] * xx[1296] + xx[229] * xx[1297]));
  xx[1301] = xx[1293] - (xx[1305] + xx[230] * xx[1295] - xx[228] * xx[1297]);
  xx[1302] = xx[1306] - (xx[1299] + xx[229] * xx[1295] + xx[228] * xx[1296]);
  solveSymmetricPosDef(xx + 592, xx + 1300, 3, 1, xx + 1307, xx + 1310);
  xx[1300] = xx[1199] + xx[421] * xx[1307] + xx[433] * xx[1308] + xx[454] * xx
    [1309];
  xx[1301] = xx[1305] + xx[500] * xx[1307] + xx[506] * xx[1308] + xx[515] * xx
    [1309];
  xx[1302] = xx[1299] + xx[540] * xx[1307] + xx[443] * xx[1308] + xx[521] * xx
    [1309];
  pm_math_quatXform(xx + 188, xx + 1300, xx + 1303);
  xx[1299] = xx[1295] + xx[248] * xx[1307] + xx[511] * xx[1308] + xx[509] * xx
    [1309];
  xx[1300] = xx[1296] + xx[423] * xx[1307] + xx[436] * xx[1308] + xx[498] * xx
    [1309];
  xx[1301] = xx[1297] + xx[427] * xx[1307] + xx[439] * xx[1308] + xx[504] * xx
    [1309];
  pm_math_quatXform(xx + 188, xx + 1299, xx + 1295);
  pm_math_cross3(xx + 444, xx + 1295, xx + 1299);
  xx[1199] = xx[1303] + xx[1299];
  xx[1302] = xx[1274] + xx[1280];
  xx[1310] = xx[1304] + xx[1300];
  xx[1311] = xx[1277] + xx[1286];
  xx[1312] = xx[1290] + xx[1270];
  xx[1299] = xx[1305] + xx[1301];
  xx[1303] = xx[1302] - (xx[1199] - xx[1310] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1295));
  xx[1304] = xx[1311] - (xx[1199] * xx[89] + xx[1310] + pm_math_dot3(xx + 753,
    xx + 1295));
  xx[1305] = xx[1312] - (xx[1299] + xx[67] * xx[1296] - xx[68] * xx[1295]);
  solveSymmetricPosDef(xx + 773, xx + 1303, 3, 1, xx + 1313, xx + 1316);
  xx[1303] = xx[1199] + xx[663] * xx[1313] + xx[692] * xx[1314] + xx[765] * xx
    [1315];
  xx[1304] = xx[1310] + xx[687] * xx[1313] + xx[695] * xx[1314] + xx[767] * xx
    [1315];
  xx[1305] = xx[1299] + xx[273] * xx[1313] + xx[447] * xx[1314] + xx[715] * xx
    [1315];
  pm_math_quatXform(xx + 178, xx + 1303, xx + 1299);
  xx[1303] = xx[1295] + xx[693] * xx[1313] + xx[723] * xx[1314] + xx[768] * xx
    [1315];
  xx[1304] = xx[1296] + xx[694] * xx[1313] + xx[727] * xx[1314] + xx[769] * xx
    [1315];
  xx[1305] = xx[1297] + xx[690] * xx[1313] + xx[759] * xx[1314] + xx[770] * xx
    [1315];
  pm_math_quatXform(xx + 178, xx + 1303, xx + 1295);
  pm_math_cross3(xx + 277, xx + 1295, xx + 1303);
  xx[1199] = (xx[1221] - (xx[1301] + xx[1305] - (xx[280] * xx[1295] + xx[276] *
    xx[1296]))) / xx[655];
  xx[1295] = xx[174] * xx[1199];
  xx[1296] = xx[1199] * xx[172];
  xx[1297] = (xx[1295] * xx[171] + xx[1296] * xx[176]) * xx[19];
  xx[1299] = xx[19] * (xx[1295] * xx[176] - xx[1296] * xx[171]);
  xx[1300] = xx[1199] - (xx[1296] * xx[172] + xx[174] * xx[1295]) * xx[19];
  xx[1303] = xx[1297];
  xx[1304] = xx[1299];
  xx[1305] = xx[1300];
  xx[1295] = xx[1199] * xx[277] - xx[276] * xx[1199];
  xx[1296] = xx[1295] * xx[176];
  xx[1301] = xx[280] * xx[1199] + xx[1199] * xx[278];
  xx[1310] = xx[176] * xx[1301];
  xx[1316] = xx[1295] * xx[172] + xx[174] * xx[1301];
  xx[1317] = xx[1296];
  xx[1318] = xx[1310];
  xx[1319] = - xx[1316];
  pm_math_cross3(xx + 760, xx + 1317, xx + 1320);
  xx[1317] = (xx[1320] - xx[1296] * xx[171]) * xx[19] - xx[1301];
  xx[1296] = xx[1295] + xx[19] * (xx[1321] - xx[1310] * xx[171]);
  xx[1295] = xx[19] * (xx[1322] + xx[1316] * xx[171]);
  xx[1318] = xx[1317];
  xx[1319] = xx[1296];
  xx[1320] = xx[1295];
  xx[1301] = xx[1313] - (pm_math_dot3(xx + 684, xx + 1303) + pm_math_dot3(xx +
    724, xx + 1318));
  xx[1310] = xx[1314] - (pm_math_dot3(xx + 756, xx + 1303) + pm_math_dot3(xx +
    883, xx + 1318));
  xx[1313] = xx[1315] - (pm_math_dot3(xx + 886, xx + 1303) + pm_math_dot3(xx +
    829, xx + 1318));
  xx[1303] = xx[1297] + xx[1301] + xx[89] * xx[1310];
  xx[1304] = xx[1299] - xx[89] * xx[1301] + xx[1310];
  xx[1305] = xx[1300] + xx[1313];
  pm_math_quatInverseXform(xx + 188, xx + 1303, xx + 1314);
  pm_math_cross3(xx + 1303, xx + 444, xx + 1318);
  xx[1303] = xx[1317] + xx[90] * xx[1301] - xx[109] * xx[1310] - xx[68] * xx
    [1313] + xx[1318];
  xx[1304] = xx[1296] + xx[109] * xx[1301] + xx[90] * xx[1310] + xx[67] * xx
    [1313] + xx[1319];
  xx[1305] = xx[1295] + xx[110] * xx[1301] + xx[691] * xx[1310] + xx[1320];
  pm_math_quatInverseXform(xx + 188, xx + 1303, xx + 1295);
  xx[1299] = xx[1307] - (pm_math_dot3(xx + 719, xx + 1314) + pm_math_dot3(xx +
    835, xx + 1295));
  xx[1300] = xx[1308] - (pm_math_dot3(xx + 728, xx + 1314) + pm_math_dot3(xx +
    841, xx + 1295));
  xx[1303] = xx[1309] - (pm_math_dot3(xx + 844, xx + 1314) + pm_math_dot3(xx +
    696, xx + 1295));
  xx[1307] = xx[1314] + xx[1299];
  xx[1308] = xx[1315] + xx[1300];
  xx[1309] = xx[1316] + xx[1303];
  pm_math_quatInverseXform(xx + 214, xx + 1307, xx + 1314);
  pm_math_cross3(xx + 1307, xx + 551, xx + 1317);
  xx[1307] = xx[1295] + xx[230] * xx[1300] + xx[229] * xx[1303] + xx[1317];
  xx[1308] = xx[1296] - xx[230] * xx[1299] + xx[228] * xx[1303] + xx[1318];
  xx[1309] = xx[1297] - xx[229] * xx[1299] - xx[228] * xx[1300] + xx[1319];
  pm_math_quatInverseXform(xx + 214, xx + 1307, xx + 1295);
  xx[1304] = xx[1292] - (pm_math_dot3(xx + 638, xx + 1314) + pm_math_dot3(xx +
    381, xx + 1295));
  xx[1292] = xx[1316] - xx[201] * xx[1304];
  xx[1307] = xx[1314] - xx[195] * xx[1304];
  xx[1308] = xx[1315];
  xx[1309] = xx[1292];
  pm_math_cross3(xx + 1307, xx + 244, xx + 1314);
  xx[1305] = xx[1295] + xx[1314];
  xx[1317] = xx[1296] - xx[291] * xx[1304];
  xx[1296] = xx[1317] + xx[1315];
  xx[1314] = xx[1296] * xx[205];
  xx[1315] = xx[1305] * xx[205];
  xx[1316] = xx[1292] * xx[668] + xx[534] * (xx[1305] - (xx[193] * xx[1314] +
    xx[1315] * xx[205]) * xx[19]) + (xx[1296] + xx[19] * (xx[193] * xx[1315] -
    xx[1314] * xx[205])) * xx[569];
  xx[1292] = xx[290] * xx[1199] + xx[771] * xx[1301] + xx[263] * xx[1310] + xx
    [173] * xx[1313] + xx[554] * xx[1299] + xx[186] * xx[1300] + xx[250] * xx
    [1303] + xx[312] * xx[1304] + xx[242] * xx[1316];
  xx[1125] = xx[1127] + (xx[1189] * xx[163] + xx[1195]) * xx[19];
  xx[1126] = (xx[1196] * xx[1180] + xx[1205]) * xx[19] + xx[1218];
  xx[1127] = xx[1126] / xx[471];
  xx[1180] = xx[493] * xx[1127];
  xx[1189] = xx[496] * xx[1127];
  xx[1193] = xx[1189] * xx[473];
  xx[1194] = xx[1180] * xx[473];
  xx[1195] = xx[1189] * xx[347] + xx[469] * xx[1180];
  xx[1203] = - xx[1193];
  xx[1204] = xx[1194];
  xx[1205] = xx[1195];
  pm_math_cross3(xx + 1200, xx + 1203, xx + 1216);
  xx[1196] = xx[1180] + xx[19] * (xx[1216] + xx[339] * xx[1193]);
  xx[1180] = xx[1189] + (xx[1217] - xx[339] * xx[1194]) * xx[19];
  xx[1189] = (xx[1218] - xx[339] * xx[1195]) * xx[19];
  xx[1193] = xx[1196];
  xx[1194] = xx[1180];
  xx[1195] = xx[1189];
  pm_math_cross3(xx + 536, xx + 1193, xx + 1203);
  xx[1193] = xx[52] * xx[1127];
  xx[1194] = xx[469] * xx[1193];
  xx[1195] = xx[1193] * xx[347];
  xx[1216] = xx[1203] - (xx[339] * xx[1194] + xx[1195] * xx[473]) * xx[19];
  xx[1217] = xx[1229] + xx[1232];
  xx[1218] = (xx[1195] * xx[347] + xx[469] * xx[1194]) * xx[19] - xx[1193] + xx
    [1205];
  xx[1193] = (xx[1217] + xx[1216] * xx[195] + xx[1218] * xx[201] + xx[1180] *
              xx[291]) / xx[456];
  xx[1227] = xx[1216] + xx[1193] * xx[409];
  xx[1228] = xx[19] * (xx[1194] * xx[473] - xx[339] * xx[1195]) + xx[1204] + xx
    [513] * xx[1193];
  xx[1229] = xx[1218] - xx[354] * xx[1193];
  pm_math_quatXform(xx + 214, xx + 1227, xx + 1203);
  xx[1227] = xx[1196] + xx[392] * xx[1193];
  xx[1228] = xx[1180] + xx[437] * xx[1193];
  xx[1229] = xx[1189] + xx[1193] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1227, xx + 1194);
  pm_math_cross3(xx + 551, xx + 1194, xx + 1227);
  xx[1180] = xx[1203] + xx[1227];
  xx[1189] = xx[1243] + xx[1248];
  xx[1216] = xx[1256] + xx[1265];
  xx[1218] = xx[1204] + xx[1228];
  xx[1230] = xx[1261] + xx[1238];
  xx[1203] = xx[1205] + xx[1229];
  xx[1227] = xx[1189] - (xx[1180] - (xx[230] * xx[1195] + xx[229] * xx[1196]));
  xx[1228] = xx[1216] - (xx[1218] + xx[230] * xx[1194] - xx[228] * xx[1196]);
  xx[1229] = xx[1230] - (xx[1203] + xx[229] * xx[1194] + xx[228] * xx[1195]);
  solveSymmetricPosDef(xx + 592, xx + 1227, 3, 1, xx + 1236, xx + 1241);
  xx[1227] = xx[1180] + xx[421] * xx[1236] + xx[433] * xx[1237] + xx[454] * xx
    [1238];
  xx[1228] = xx[1218] + xx[500] * xx[1236] + xx[506] * xx[1237] + xx[515] * xx
    [1238];
  xx[1229] = xx[1203] + xx[540] * xx[1236] + xx[443] * xx[1237] + xx[521] * xx
    [1238];
  pm_math_quatXform(xx + 188, xx + 1227, xx + 1203);
  xx[1227] = xx[1194] + xx[248] * xx[1236] + xx[511] * xx[1237] + xx[509] * xx
    [1238];
  xx[1228] = xx[1195] + xx[423] * xx[1236] + xx[436] * xx[1237] + xx[498] * xx
    [1238];
  xx[1229] = xx[1196] + xx[427] * xx[1236] + xx[439] * xx[1237] + xx[504] * xx
    [1238];
  pm_math_quatXform(xx + 188, xx + 1227, xx + 1194);
  pm_math_cross3(xx + 444, xx + 1194, xx + 1227);
  xx[1180] = xx[1203] + xx[1227];
  xx[1218] = xx[1275] + xx[1281];
  xx[1231] = xx[1204] + xx[1228];
  xx[1232] = xx[1278] + xx[1287];
  xx[1241] = xx[1291] + xx[1271];
  xx[1203] = xx[1205] + xx[1229];
  xx[1227] = xx[1218] - (xx[1180] - xx[1231] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1194));
  xx[1228] = xx[1232] - (xx[1180] * xx[89] + xx[1231] + pm_math_dot3(xx + 753,
    xx + 1194));
  xx[1229] = xx[1241] - (xx[1203] + xx[67] * xx[1195] - xx[68] * xx[1194]);
  solveSymmetricPosDef(xx + 773, xx + 1227, 3, 1, xx + 1246, xx + 1254);
  xx[1227] = xx[1180] + xx[663] * xx[1246] + xx[692] * xx[1247] + xx[765] * xx
    [1248];
  xx[1228] = xx[1231] + xx[687] * xx[1246] + xx[695] * xx[1247] + xx[767] * xx
    [1248];
  xx[1229] = xx[1203] + xx[273] * xx[1246] + xx[447] * xx[1247] + xx[715] * xx
    [1248];
  pm_math_quatXform(xx + 178, xx + 1227, xx + 1203);
  xx[1227] = xx[1194] + xx[693] * xx[1246] + xx[723] * xx[1247] + xx[768] * xx
    [1248];
  xx[1228] = xx[1195] + xx[694] * xx[1246] + xx[727] * xx[1247] + xx[769] * xx
    [1248];
  xx[1229] = xx[1196] + xx[690] * xx[1246] + xx[759] * xx[1247] + xx[770] * xx
    [1248];
  pm_math_quatXform(xx + 178, xx + 1227, xx + 1194);
  pm_math_cross3(xx + 277, xx + 1194, xx + 1227);
  xx[1180] = (xx[1125] - (xx[1205] + xx[1229] - (xx[280] * xx[1194] + xx[276] *
    xx[1195]))) / xx[655];
  xx[1194] = xx[174] * xx[1180];
  xx[1195] = xx[1180] * xx[172];
  xx[1196] = (xx[1194] * xx[171] + xx[1195] * xx[176]) * xx[19];
  xx[1203] = xx[19] * (xx[1194] * xx[176] - xx[1195] * xx[171]);
  xx[1204] = xx[1180] - (xx[1195] * xx[172] + xx[174] * xx[1194]) * xx[19];
  xx[1227] = xx[1196];
  xx[1228] = xx[1203];
  xx[1229] = xx[1204];
  xx[1194] = xx[1180] * xx[277] - xx[276] * xx[1180];
  xx[1195] = xx[1194] * xx[176];
  xx[1205] = xx[280] * xx[1180] + xx[1180] * xx[278];
  xx[1231] = xx[176] * xx[1205];
  xx[1242] = xx[1194] * xx[172] + xx[174] * xx[1205];
  xx[1254] = xx[1195];
  xx[1255] = xx[1231];
  xx[1256] = - xx[1242];
  pm_math_cross3(xx + 760, xx + 1254, xx + 1259);
  xx[1243] = (xx[1259] - xx[1195] * xx[171]) * xx[19] - xx[1205];
  xx[1195] = xx[1194] + xx[19] * (xx[1260] - xx[1231] * xx[171]);
  xx[1194] = xx[19] * (xx[1261] + xx[1242] * xx[171]);
  xx[1254] = xx[1243];
  xx[1255] = xx[1195];
  xx[1256] = xx[1194];
  xx[1205] = xx[1246] - (pm_math_dot3(xx + 684, xx + 1227) + pm_math_dot3(xx +
    724, xx + 1254));
  xx[1231] = xx[1247] - (pm_math_dot3(xx + 756, xx + 1227) + pm_math_dot3(xx +
    883, xx + 1254));
  xx[1242] = xx[1248] - (pm_math_dot3(xx + 886, xx + 1227) + pm_math_dot3(xx +
    829, xx + 1254));
  xx[1227] = xx[1196] + xx[1205] + xx[89] * xx[1231];
  xx[1228] = xx[1203] - xx[89] * xx[1205] + xx[1231];
  xx[1229] = xx[1204] + xx[1242];
  pm_math_quatInverseXform(xx + 188, xx + 1227, xx + 1246);
  pm_math_cross3(xx + 1227, xx + 444, xx + 1254);
  xx[1227] = xx[1243] + xx[90] * xx[1205] - xx[109] * xx[1231] - xx[68] * xx
    [1242] + xx[1254];
  xx[1228] = xx[1195] + xx[109] * xx[1205] + xx[90] * xx[1231] + xx[67] * xx
    [1242] + xx[1255];
  xx[1229] = xx[1194] + xx[110] * xx[1205] + xx[691] * xx[1231] + xx[1256];
  pm_math_quatInverseXform(xx + 188, xx + 1227, xx + 1194);
  xx[1203] = xx[1236] - (pm_math_dot3(xx + 719, xx + 1246) + pm_math_dot3(xx +
    835, xx + 1194));
  xx[1204] = xx[1237] - (pm_math_dot3(xx + 728, xx + 1246) + pm_math_dot3(xx +
    841, xx + 1194));
  xx[1227] = xx[1238] - (pm_math_dot3(xx + 844, xx + 1246) + pm_math_dot3(xx +
    696, xx + 1194));
  xx[1236] = xx[1246] + xx[1203];
  xx[1237] = xx[1247] + xx[1204];
  xx[1238] = xx[1248] + xx[1227];
  pm_math_quatInverseXform(xx + 214, xx + 1236, xx + 1246);
  pm_math_cross3(xx + 1236, xx + 551, xx + 1254);
  xx[1236] = xx[1194] + xx[230] * xx[1204] + xx[229] * xx[1227] + xx[1254];
  xx[1237] = xx[1195] - xx[230] * xx[1203] + xx[228] * xx[1227] + xx[1255];
  xx[1238] = xx[1196] - xx[229] * xx[1203] - xx[228] * xx[1204] + xx[1256];
  pm_math_quatInverseXform(xx + 214, xx + 1236, xx + 1194);
  xx[1228] = xx[1193] - (pm_math_dot3(xx + 638, xx + 1246) + pm_math_dot3(xx +
    381, xx + 1194));
  xx[1193] = xx[1248] - xx[201] * xx[1228];
  xx[1236] = xx[1246] - xx[195] * xx[1228];
  xx[1237] = xx[1247];
  xx[1238] = xx[1193];
  pm_math_cross3(xx + 1236, xx + 244, xx + 1246);
  xx[1229] = xx[1194] + xx[1246];
  xx[1243] = xx[1195] - xx[291] * xx[1228];
  xx[1195] = xx[1243] + xx[1247];
  xx[1246] = xx[1195] * xx[205];
  xx[1247] = xx[1229] * xx[205];
  xx[1248] = xx[1193] * xx[668] + xx[534] * (xx[1229] - (xx[193] * xx[1246] +
    xx[1247] * xx[205]) * xx[19]) + (xx[1195] + xx[19] * (xx[193] * xx[1247] -
    xx[1246] * xx[205])) * xx[569];
  xx[1193] = xx[290] * xx[1180] + xx[771] * xx[1205] + xx[263] * xx[1231] + xx
    [173] * xx[1242] + xx[554] * xx[1203] + xx[186] * xx[1204] + xx[250] * xx
    [1227] + xx[312] * xx[1228] + xx[242] * xx[1248];
  pm_math_quatCompose(xx + 214, xx + 402, xx + 1273);
  pm_math_quatCompose(xx + 188, xx + 1273, xx + 1277);
  pm_math_quatCompose(xx + 178, xx + 1277, xx + 1318);
  pm_math_quatCompose(xx + 167, xx + 1318, xx + 1322);
  xx[1195] = xx[1319] * xx[1321];
  xx[1229] = xx[1318] * xx[1320];
  xx[1246] = xx[19] * (xx[1195] - xx[1229]);
  xx[1247] = xx[1318] * xx[1319];
  xx[1254] = xx[1320] * xx[1321];
  xx[1255] = xx[1319] * xx[1319];
  xx[1256] = xx[1320] * xx[1320];
  xx[1259] = xx[1246];
  xx[1260] = (xx[1247] + xx[1254]) * xx[19];
  xx[1261] = xx[21] - (xx[1255] + xx[1256]) * xx[19];
  pm_math_cross3(xx + 1259, xx + 231, xx + 1263);
  pm_math_quatXform(xx + 1322, xx + 1263, xx + 1259);
  pm_math_quatXform(xx + 214, xx + 412, xx + 1263);
  xx[1269] = xx[1263] - xx[258];
  xx[1270] = xx[1264] + xx[252];
  xx[1263] = xx[1265] - xx[247];
  xx[1285] = xx[1269];
  xx[1286] = xx[1270];
  xx[1287] = xx[1263];
  pm_math_quatXform(xx + 188, xx + 1285, xx + 1289);
  xx[1264] = xx[1289] + xx[251];
  xx[1265] = xx[1290] + xx[272];
  xx[1271] = xx[1291] + xx[262];
  xx[1289] = xx[1264];
  xx[1290] = xx[1265];
  xx[1291] = xx[1271];
  pm_math_quatXform(xx + 178, xx + 1289, xx + 1322);
  xx[1281] = xx[1323] + xx[278];
  xx[1296] = xx[1322] + xx[277];
  xx[1305] = xx[1281] * xx[159] - xx[1296] * xx[157];
  xx[1314] = xx[19] * xx[159] * xx[1305] - (xx[1281] - xx[282]) - xx[280];
  xx[1315] = xx[1296] + xx[19] * xx[157] * xx[1305] + xx[287] - xx[276];
  xx[1305] = xx[164] * xx[1315];
  xx[1322] = xx[164] * xx[1314];
  xx[1323] = xx[149] * xx[1315] - xx[1314] * xx[156];
  xx[1324] = - xx[1305];
  xx[1325] = xx[1322];
  xx[1326] = xx[1323];
  pm_math_cross3(xx + 284, xx + 1324, xx + 1327);
  xx[1324] = xx[1259] + xx[1314] + xx[19] * (xx[1327] - xx[1305] * xx[163]);
  pm_math_quatCompose(xx + 308, xx + 402, xx + 1330);
  xx[1305] = xx[228] * xx[1333];
  xx[1314] = xx[228] * xx[1331] - xx[229] * xx[1332];
  xx[1334] = - xx[1305];
  xx[1335] = xx[229] * xx[1333];
  xx[1336] = xx[1314];
  pm_math_cross3(xx + 1331, xx + 1334, xx + 1337);
  xx[1334] = xx[344];
  xx[1335] = xx[350];
  xx[1336] = xx[348];
  xx[1325] = xx[389] * xx[348];
  xx[1326] = xx[406] * xx[348];
  xx[1340] = xx[389] * xx[344] + xx[350] * xx[406];
  xx[1341] = xx[1325];
  xx[1342] = xx[1326];
  xx[1343] = - xx[1340];
  pm_math_cross3(xx + 1334, xx + 1341, xx + 1344);
  xx[1341] = xx[345] * xx[1325];
  xx[1342] = xx[406] + xx[19] * (xx[1344] + xx[1341]);
  xx[1343] = xx[345] * xx[1326];
  xx[1347] = (xx[1343] + xx[1345]) * xx[19] - xx[389];
  xx[1344] = xx[1346] - xx[345] * xx[1340];
  xx[1348] = xx[1342];
  xx[1349] = xx[1347];
  xx[1350] = xx[1344] * xx[19];
  pm_math_quatXform(xx + 308, xx + 1348, xx + 1351);
  xx[1340] = xx[19] * (xx[1337] - xx[1330] * xx[1305]) + xx[1351] + xx[229];
  xx[1305] = xx[1340] / xx[346];
  xx[1345] = xx[373] * xx[1305];
  xx[1346] = xx[370] * xx[1305];
  xx[1348] = xx[1346] * xx[348];
  xx[1349] = xx[1345] * xx[348];
  xx[1350] = xx[1346] * xx[344] + xx[350] * xx[1345];
  xx[1354] = xx[1348];
  xx[1355] = xx[1349];
  xx[1356] = - xx[1350];
  pm_math_cross3(xx + 1334, xx + 1354, xx + 1357);
  xx[1354] = xx[1345] + xx[19] * (xx[1357] + xx[345] * xx[1348]);
  xx[1345] = (xx[345] * xx[1349] + xx[1358]) * xx[19] - xx[1346];
  xx[1346] = (xx[1359] - xx[345] * xx[1350]) * xx[19];
  xx[1348] = xx[1354];
  xx[1349] = xx[1345];
  xx[1350] = xx[1346];
  pm_math_cross3(xx + 412, xx + 1348, xx + 1355);
  xx[1348] = xx[52] * xx[1305];
  xx[1349] = xx[350] * xx[1348];
  xx[1350] = xx[1348] * xx[344];
  xx[1358] = xx[1355] - (xx[345] * xx[1349] + xx[1350] * xx[348]) * xx[19];
  xx[1359] = xx[350] * xx[201];
  xx[1360] = xx[201] * xx[344] - xx[195] * xx[348];
  xx[1361] = xx[350] * xx[195];
  xx[1362] = - xx[1359];
  xx[1363] = xx[1360];
  xx[1364] = xx[1361];
  pm_math_cross3(xx + 1334, xx + 1362, xx + 1365);
  xx[1362] = xx[19] * (xx[1365] + xx[345] * xx[1359]) - xx[195];
  xx[1363] = xx[19] * (xx[1366] - xx[345] * xx[1360]);
  xx[1364] = (xx[1367] - xx[345] * xx[1361]) * xx[19] - xx[201];
  pm_math_cross3(xx + 1362, xx + 231, xx + 1359);
  pm_math_quatXform(xx + 1330, xx + 1359, xx + 1362);
  xx[1359] = - (xx[201] * xx[411]);
  xx[1360] = xx[201] * xx[407] + xx[195] * xx[408];
  xx[1361] = xx[195] * xx[411];
  pm_math_quatXform(xx + 214, xx + 1359, xx + 1365);
  xx[1359] = xx[1365] + xx[314];
  xx[1360] = xx[1366] + xx[315] - xx[291];
  xx[1361] = xx[1367] - xx[292];
  pm_math_quatXform(xx + 304, xx + 1359, xx + 1365);
  xx[1331] = xx[1362] + xx[1365];
  xx[1332] = (xx[1350] * xx[344] + xx[350] * xx[1349]) * xx[19] - xx[1348] + xx
    [1357];
  xx[1348] = (xx[1331] + xx[1358] * xx[195] + xx[1332] * xx[201] + xx[1345] *
              xx[291]) / xx[456];
  xx[1359] = xx[1358] + xx[1348] * xx[409];
  xx[1360] = xx[19] * (xx[345] * xx[1350] - xx[1349] * xx[348]) + xx[1356] + xx
    [513] * xx[1348];
  xx[1361] = xx[1332] - xx[354] * xx[1348];
  pm_math_quatXform(xx + 214, xx + 1359, xx + 1355);
  xx[1358] = xx[1354] + xx[392] * xx[1348];
  xx[1359] = xx[1345] + xx[437] * xx[1348];
  xx[1360] = xx[1346] + xx[1348] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1358, xx + 1368);
  pm_math_cross3(xx + 551, xx + 1368, xx + 1358);
  xx[1332] = xx[1355] + xx[1358];
  pm_math_quatCompose(xx + 304, xx + 1273, xx + 1371);
  xx[1345] = xx[1275] * xx[1275];
  xx[1346] = xx[1276] * xx[1276];
  xx[1349] = xx[1274] * xx[1275];
  xx[1350] = xx[1273] * xx[1276];
  xx[1354] = xx[19] * (xx[1349] - xx[1350]);
  xx[1361] = xx[1273] * xx[1275];
  xx[1375] = xx[1274] * xx[1276];
  xx[1376] = xx[21] - (xx[1345] + xx[1346]) * xx[19];
  xx[1377] = xx[1354];
  xx[1378] = (xx[1361] + xx[1375]) * xx[19];
  pm_math_cross3(xx + 1376, xx + 231, xx + 1379);
  pm_math_quatXform(xx + 1371, xx + 1379, xx + 1376);
  xx[1379] = xx[185] * xx[1270];
  xx[1380] = xx[187] * xx[1263];
  xx[1381] = xx[1379] + xx[1380];
  xx[1382] = xx[1270] * xx[184];
  xx[1383] = xx[1263] * xx[184];
  xx[1384] = - xx[1381];
  xx[1385] = - xx[1382];
  xx[1386] = - xx[1383];
  pm_math_cross3(xx + 611, xx + 1384, xx + 1387);
  xx[1384] = xx[19] * (xx[1387] - xx[1381] * xx[183]) + xx[630];
  xx[1385] = xx[19] * (xx[1388] - xx[1382] * xx[183]) + xx[623] - xx[1263] - xx
    [230];
  xx[1386] = xx[1270] + xx[19] * (xx[1389] - xx[1383] * xx[183]) + xx[624] - xx
    [229];
  pm_math_quatXform(xx + 300, xx + 1384, xx + 1381);
  xx[1384] = xx[1376] + xx[1381];
  xx[1385] = xx[1274] * xx[1274];
  xx[1386] = xx[1275] * xx[1276];
  xx[1387] = xx[1273] * xx[1274];
  xx[1388] = xx[19] * (xx[1386] - xx[1387]);
  xx[1389] = (xx[1350] + xx[1349]) * xx[19];
  xx[1390] = xx[21] - (xx[1346] + xx[1385]) * xx[19];
  xx[1391] = xx[1388];
  pm_math_cross3(xx + 1389, xx + 231, xx + 1392);
  pm_math_quatXform(xx + 1371, xx + 1392, xx + 1389);
  xx[1392] = xx[185] * xx[1269];
  xx[1393] = xx[1269] * xx[184];
  xx[1394] = xx[1393] - xx[1380];
  xx[1380] = xx[185] * xx[1263];
  xx[1395] = xx[1392];
  xx[1396] = xx[1394];
  xx[1397] = xx[1380];
  pm_math_cross3(xx + 611, xx + 1395, xx + 1398);
  xx[1395] = xx[1263] + (xx[1392] * xx[183] + xx[1398]) * xx[19] + xx[645] + xx
    [230];
  xx[1396] = (xx[183] * xx[1394] + xx[1399]) * xx[19] + xx[641];
  xx[1397] = (xx[1380] * xx[183] + xx[1400]) * xx[19] + xx[644] - xx[1269] - xx
    [228];
  pm_math_quatXform(xx + 300, xx + 1395, xx + 1398);
  xx[1263] = xx[1389] + xx[1398];
  xx[1380] = xx[1356] + xx[1359];
  xx[1392] = xx[19] * (xx[1375] - xx[1361]);
  xx[1394] = xx[1392];
  xx[1395] = (xx[1387] + xx[1386]) * xx[19];
  xx[1396] = xx[21] - (xx[1385] + xx[1345]) * xx[19];
  pm_math_cross3(xx + 1394, xx + 231, xx + 1401);
  pm_math_quatXform(xx + 1371, xx + 1401, xx + 1394);
  xx[1371] = xx[187] * xx[1269];
  xx[1372] = xx[187] * xx[1270];
  xx[1373] = xx[1393] - xx[1379];
  pm_math_cross3(xx + 611, xx + 1371, xx + 1401);
  xx[1404] = (xx[1371] * xx[183] + xx[1401]) * xx[19] + xx[570] - xx[1270] + xx
    [229];
  xx[1405] = xx[1269] + (xx[1372] * xx[183] + xx[1402]) * xx[19] + xx[182] + xx
    [228];
  xx[1406] = (xx[183] * xx[1373] + xx[1403]) * xx[19] + xx[550];
  pm_math_quatXform(xx + 300, xx + 1404, xx + 1371);
  xx[1269] = xx[1394] + xx[1371];
  xx[1270] = xx[1357] + xx[1360];
  xx[1355] = xx[1384] - (xx[1332] - (xx[230] * xx[1369] + xx[229] * xx[1370]));
  xx[1356] = xx[1263] - (xx[1380] + xx[230] * xx[1368] - xx[228] * xx[1370]);
  xx[1357] = xx[1269] - (xx[1270] + xx[229] * xx[1368] + xx[228] * xx[1369]);
  solveSymmetricPosDef(xx + 592, xx + 1355, 3, 1, xx + 1358, xx + 1401);
  xx[1355] = xx[1332] + xx[421] * xx[1358] + xx[433] * xx[1359] + xx[454] * xx
    [1360];
  xx[1356] = xx[1380] + xx[500] * xx[1358] + xx[506] * xx[1359] + xx[515] * xx
    [1360];
  xx[1357] = xx[1270] + xx[540] * xx[1358] + xx[443] * xx[1359] + xx[521] * xx
    [1360];
  pm_math_quatXform(xx + 188, xx + 1355, xx + 1401);
  xx[1355] = xx[1368] + xx[248] * xx[1358] + xx[511] * xx[1359] + xx[509] * xx
    [1360];
  xx[1356] = xx[1369] + xx[423] * xx[1358] + xx[436] * xx[1359] + xx[498] * xx
    [1360];
  xx[1357] = xx[1370] + xx[427] * xx[1358] + xx[439] * xx[1359] + xx[504] * xx
    [1360];
  pm_math_quatXform(xx + 188, xx + 1355, xx + 1368);
  pm_math_cross3(xx + 444, xx + 1368, xx + 1355);
  xx[1270] = xx[1401] + xx[1355];
  pm_math_quatCompose(xx + 300, xx + 1277, xx + 1404);
  xx[1332] = xx[89] * xx[1280];
  xx[1374] = xx[89] * xx[1278] + xx[1279];
  xx[1408] = xx[1332];
  xx[1409] = xx[1280];
  xx[1410] = - xx[1374];
  pm_math_cross3(xx + 1278, xx + 1408, xx + 1411);
  xx[1379] = xx[1277] * xx[1280];
  xx[1408] = xx[21] + (xx[1411] - xx[1277] * xx[1332]) * xx[19];
  xx[1409] = xx[19] * (xx[1412] - xx[1379]) - xx[89];
  xx[1410] = xx[19] * (xx[1413] + xx[1277] * xx[1374]);
  pm_math_cross3(xx + 1408, xx + 231, xx + 1411);
  pm_math_quatXform(xx + 1404, xx + 1411, xx + 1408);
  xx[1374] = - (xx[1271] * xx[89]);
  xx[1411] = xx[1374];
  xx[1412] = - xx[1271];
  xx[1413] = xx[1265] + xx[1264] * xx[89];
  pm_math_quatXform(xx + 178, xx + 1411, xx + 1414);
  xx[1411] = xx[1414] + xx[782];
  xx[1412] = xx[1415] + xx[783];
  xx[1413] = xx[1416] + xx[784];
  pm_math_quatXform(xx + 296, xx + 1411, xx + 1414);
  xx[1380] = xx[1408] + xx[1414];
  xx[1393] = xx[1402] + xx[1356];
  xx[1397] = xx[1278] - xx[89] * xx[1279];
  xx[1411] = - xx[1280];
  xx[1412] = xx[1332];
  xx[1413] = xx[1397];
  pm_math_cross3(xx + 1278, xx + 1411, xx + 1417);
  xx[1411] = xx[89] + (xx[1379] + xx[1417]) * xx[19];
  xx[1412] = xx[21] + xx[19] * (xx[1418] - xx[89] * xx[1379]);
  xx[1413] = xx[19] * (xx[1419] - xx[1277] * xx[1397]);
  pm_math_cross3(xx + 1411, xx + 231, xx + 1417);
  pm_math_quatXform(xx + 1404, xx + 1417, xx + 1411);
  xx[1417] = xx[1271];
  xx[1418] = xx[1374];
  xx[1419] = xx[1265] * xx[89] - xx[1264];
  pm_math_quatXform(xx + 178, xx + 1417, xx + 1420);
  xx[1417] = xx[1420] + xx[791];
  xx[1418] = xx[1421] + xx[792];
  xx[1419] = xx[1422] + xx[793];
  pm_math_quatXform(xx + 296, xx + 1417, xx + 1420);
  xx[1271] = xx[1411] + xx[1420];
  xx[1332] = xx[1278] * xx[1280];
  xx[1374] = xx[1277] * xx[1279];
  xx[1397] = xx[19] * (xx[1332] - xx[1374]);
  xx[1417] = xx[1277] * xx[1278];
  xx[1418] = xx[1279] * xx[1280];
  xx[1419] = xx[1278] * xx[1278];
  xx[1423] = xx[1279] * xx[1279];
  xx[1424] = xx[1397];
  xx[1425] = (xx[1417] + xx[1418]) * xx[19];
  xx[1426] = xx[21] - (xx[1419] + xx[1423]) * xx[19];
  pm_math_cross3(xx + 1424, xx + 231, xx + 1427);
  pm_math_quatXform(xx + 1404, xx + 1427, xx + 1424);
  xx[1404] = xx[1264] * xx[176];
  xx[1405] = xx[1265] * xx[176];
  xx[1406] = xx[1264] * xx[172] + xx[174] * xx[1265];
  xx[1427] = xx[1404];
  xx[1428] = xx[1405];
  xx[1429] = - xx[1406];
  pm_math_cross3(xx + 760, xx + 1427, xx + 1430);
  xx[1427] = xx[19] * (xx[1430] + xx[1404] * xx[171]) + xx[807] - xx[1265] - xx
    [68];
  xx[1428] = xx[1264] + xx[19] * (xx[1431] + xx[1405] * xx[171]) + xx[763] + xx
    [67];
  xx[1429] = (xx[1432] - xx[171] * xx[1406]) * xx[19] + xx[805];
  pm_math_quatXform(xx + 296, xx + 1427, xx + 1404);
  xx[1264] = xx[1424] + xx[1404];
  xx[1265] = xx[1403] + xx[1357];
  xx[1355] = xx[1380] - (xx[1270] - xx[1393] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1368));
  xx[1356] = xx[1271] - (xx[1270] * xx[89] + xx[1393] + pm_math_dot3(xx + 753,
    xx + 1368));
  xx[1357] = xx[1264] - (xx[1265] + xx[67] * xx[1369] - xx[68] * xx[1368]);
  solveSymmetricPosDef(xx + 773, xx + 1355, 3, 1, xx + 1401, xx + 1427);
  xx[1355] = xx[1270] + xx[663] * xx[1401] + xx[692] * xx[1402] + xx[765] * xx
    [1403];
  xx[1356] = xx[1393] + xx[687] * xx[1401] + xx[695] * xx[1402] + xx[767] * xx
    [1403];
  xx[1357] = xx[1265] + xx[273] * xx[1401] + xx[447] * xx[1402] + xx[715] * xx
    [1403];
  pm_math_quatXform(xx + 178, xx + 1355, xx + 1427);
  xx[1355] = xx[1368] + xx[693] * xx[1401] + xx[723] * xx[1402] + xx[768] * xx
    [1403];
  xx[1356] = xx[1369] + xx[694] * xx[1401] + xx[727] * xx[1402] + xx[769] * xx
    [1403];
  xx[1357] = xx[1370] + xx[690] * xx[1401] + xx[759] * xx[1402] + xx[770] * xx
    [1403];
  pm_math_quatXform(xx + 178, xx + 1355, xx + 1368);
  pm_math_cross3(xx + 277, xx + 1368, xx + 1355);
  xx[1265] = (xx[1324] - (xx[1429] + xx[1357] - (xx[280] * xx[1368] + xx[276] *
    xx[1369]))) / xx[655];
  xx[1270] = xx[174] * xx[1265];
  xx[1355] = xx[1265] * xx[172];
  xx[1356] = (xx[1270] * xx[171] + xx[1355] * xx[176]) * xx[19];
  xx[1357] = xx[19] * (xx[1270] * xx[176] - xx[1355] * xx[171]);
  xx[1368] = xx[1265] - (xx[1355] * xx[172] + xx[174] * xx[1270]) * xx[19];
  xx[1427] = xx[1356];
  xx[1428] = xx[1357];
  xx[1429] = xx[1368];
  xx[1270] = xx[1265] * xx[277] - xx[276] * xx[1265];
  xx[1355] = xx[1270] * xx[176];
  xx[1369] = xx[280] * xx[1265] + xx[1265] * xx[278];
  xx[1370] = xx[176] * xx[1369];
  xx[1393] = xx[1270] * xx[172] + xx[174] * xx[1369];
  xx[1430] = xx[1355];
  xx[1431] = xx[1370];
  xx[1432] = - xx[1393];
  pm_math_cross3(xx + 760, xx + 1430, xx + 1433);
  xx[1407] = (xx[1433] - xx[1355] * xx[171]) * xx[19] - xx[1369];
  xx[1355] = xx[1270] + xx[19] * (xx[1434] - xx[1370] * xx[171]);
  xx[1270] = xx[19] * (xx[1435] + xx[1393] * xx[171]);
  xx[1430] = xx[1407];
  xx[1431] = xx[1355];
  xx[1432] = xx[1270];
  xx[1369] = xx[1401] - (pm_math_dot3(xx + 684, xx + 1427) + pm_math_dot3(xx +
    724, xx + 1430));
  xx[1370] = xx[1402] - (pm_math_dot3(xx + 756, xx + 1427) + pm_math_dot3(xx +
    883, xx + 1430));
  xx[1393] = xx[1403] - (pm_math_dot3(xx + 886, xx + 1427) + pm_math_dot3(xx +
    829, xx + 1430));
  xx[1401] = xx[1356] + xx[1369] + xx[89] * xx[1370];
  xx[1402] = xx[1357] - xx[89] * xx[1369] + xx[1370];
  xx[1403] = xx[1368] + xx[1393];
  pm_math_quatInverseXform(xx + 188, xx + 1401, xx + 1427);
  pm_math_cross3(xx + 1401, xx + 444, xx + 1430);
  xx[1401] = xx[1407] + xx[90] * xx[1369] - xx[109] * xx[1370] - xx[68] * xx
    [1393] + xx[1430];
  xx[1402] = xx[1355] + xx[109] * xx[1369] + xx[90] * xx[1370] + xx[67] * xx
    [1393] + xx[1431];
  xx[1403] = xx[1270] + xx[110] * xx[1369] + xx[691] * xx[1370] + xx[1432];
  pm_math_quatInverseXform(xx + 188, xx + 1401, xx + 1355);
  xx[1270] = xx[1358] - (pm_math_dot3(xx + 719, xx + 1427) + pm_math_dot3(xx +
    835, xx + 1355));
  xx[1358] = xx[1359] - (pm_math_dot3(xx + 728, xx + 1427) + pm_math_dot3(xx +
    841, xx + 1355));
  xx[1359] = xx[1360] - (pm_math_dot3(xx + 844, xx + 1427) + pm_math_dot3(xx +
    696, xx + 1355));
  xx[1401] = xx[1427] + xx[1270];
  xx[1402] = xx[1428] + xx[1358];
  xx[1403] = xx[1429] + xx[1359];
  pm_math_quatInverseXform(xx + 214, xx + 1401, xx + 1427);
  pm_math_cross3(xx + 1401, xx + 551, xx + 1430);
  xx[1401] = xx[1355] + xx[230] * xx[1358] + xx[229] * xx[1359] + xx[1430];
  xx[1402] = xx[1356] - xx[230] * xx[1270] + xx[228] * xx[1359] + xx[1431];
  xx[1403] = xx[1357] - xx[229] * xx[1270] - xx[228] * xx[1358] + xx[1432];
  pm_math_quatInverseXform(xx + 214, xx + 1401, xx + 1355);
  xx[1360] = xx[1348] - (pm_math_dot3(xx + 638, xx + 1427) + pm_math_dot3(xx +
    381, xx + 1355));
  xx[1348] = xx[1429] - xx[201] * xx[1360];
  xx[1401] = xx[1427] - xx[195] * xx[1360];
  xx[1402] = xx[1428];
  xx[1403] = xx[1348];
  pm_math_cross3(xx + 1401, xx + 244, xx + 1427);
  xx[1368] = xx[1355] + xx[1427];
  xx[1407] = xx[1356] - xx[291] * xx[1360];
  xx[1356] = xx[1407] + xx[1428];
  xx[1427] = xx[1356] * xx[205];
  xx[1428] = xx[1368] * xx[205];
  xx[1429] = xx[1348] * xx[668] + xx[534] * (xx[1368] - (xx[193] * xx[1427] +
    xx[1428] * xx[205]) * xx[19]) + (xx[1356] + xx[19] * (xx[193] * xx[1428] -
    xx[1427] * xx[205])) * xx[569];
  xx[1348] = xx[290] * xx[1265] + xx[771] * xx[1369] + xx[263] * xx[1370] + xx
    [173] * xx[1393] + xx[554] * xx[1270] + xx[186] * xx[1358] + xx[250] * xx
    [1359] + xx[312] * xx[1360] + xx[242] * xx[1429];
  xx[1356] = xx[1260] + xx[1315] + (xx[1322] * xx[163] + xx[1328]) * xx[19];
  xx[1315] = (xx[229] * xx[1330] * xx[1333] + xx[1338]) * xx[19] + xx[1352] +
    xx[228];
  xx[1322] = xx[1315] / xx[346];
  xx[1333] = xx[373] * xx[1322];
  xx[1368] = xx[370] * xx[1322];
  xx[1427] = xx[1368] * xx[348];
  xx[1428] = xx[1333] * xx[348];
  xx[1430] = xx[1368] * xx[344] + xx[350] * xx[1333];
  xx[1431] = xx[1427];
  xx[1432] = xx[1428];
  xx[1433] = - xx[1430];
  pm_math_cross3(xx + 1334, xx + 1431, xx + 1434);
  xx[1431] = xx[1333] + xx[19] * (xx[1434] + xx[345] * xx[1427]);
  xx[1333] = (xx[345] * xx[1428] + xx[1435]) * xx[19] - xx[1368];
  xx[1368] = (xx[1436] - xx[345] * xx[1430]) * xx[19];
  xx[1432] = xx[1431];
  xx[1433] = xx[1333];
  xx[1434] = xx[1368];
  pm_math_cross3(xx + 412, xx + 1432, xx + 1435);
  xx[1427] = xx[52] * xx[1322];
  xx[1428] = xx[350] * xx[1427];
  xx[1430] = xx[1427] * xx[344];
  xx[1432] = xx[1435] - (xx[345] * xx[1428] + xx[1430] * xx[348]) * xx[19];
  xx[1433] = xx[1363] + xx[1366];
  xx[1434] = (xx[1430] * xx[344] + xx[350] * xx[1428]) * xx[19] - xx[1427] + xx
    [1437];
  xx[1427] = (xx[1433] + xx[1432] * xx[195] + xx[1434] * xx[201] + xx[1333] *
              xx[291]) / xx[456];
  xx[1437] = xx[1432] + xx[1427] * xx[409];
  xx[1438] = xx[19] * (xx[345] * xx[1430] - xx[1428] * xx[348]) + xx[1436] + xx
    [513] * xx[1427];
  xx[1439] = xx[1434] - xx[354] * xx[1427];
  pm_math_quatXform(xx + 214, xx + 1437, xx + 1434);
  xx[1437] = xx[1431] + xx[392] * xx[1427];
  xx[1438] = xx[1333] + xx[437] * xx[1427];
  xx[1439] = xx[1368] + xx[1427] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1437, xx + 1430);
  pm_math_cross3(xx + 551, xx + 1430, xx + 1437);
  xx[1333] = xx[1434] + xx[1437];
  xx[1368] = xx[1377] + xx[1382];
  xx[1428] = xx[1390] + xx[1399];
  xx[1440] = xx[1435] + xx[1438];
  xx[1441] = xx[1395] + xx[1372];
  xx[1434] = xx[1436] + xx[1439];
  xx[1435] = xx[1368] - (xx[1333] - (xx[230] * xx[1431] + xx[229] * xx[1432]));
  xx[1436] = xx[1428] - (xx[1440] + xx[230] * xx[1430] - xx[228] * xx[1432]);
  xx[1437] = xx[1441] - (xx[1434] + xx[229] * xx[1430] + xx[228] * xx[1431]);
  solveSymmetricPosDef(xx + 592, xx + 1435, 3, 1, xx + 1442, xx + 1445);
  xx[1435] = xx[1333] + xx[421] * xx[1442] + xx[433] * xx[1443] + xx[454] * xx
    [1444];
  xx[1436] = xx[1440] + xx[500] * xx[1442] + xx[506] * xx[1443] + xx[515] * xx
    [1444];
  xx[1437] = xx[1434] + xx[540] * xx[1442] + xx[443] * xx[1443] + xx[521] * xx
    [1444];
  pm_math_quatXform(xx + 188, xx + 1435, xx + 1438);
  xx[1434] = xx[1430] + xx[248] * xx[1442] + xx[511] * xx[1443] + xx[509] * xx
    [1444];
  xx[1435] = xx[1431] + xx[423] * xx[1442] + xx[436] * xx[1443] + xx[498] * xx
    [1444];
  xx[1436] = xx[1432] + xx[427] * xx[1442] + xx[439] * xx[1443] + xx[504] * xx
    [1444];
  pm_math_quatXform(xx + 188, xx + 1434, xx + 1430);
  pm_math_cross3(xx + 444, xx + 1430, xx + 1434);
  xx[1333] = xx[1438] + xx[1434];
  xx[1437] = xx[1409] + xx[1415];
  xx[1445] = xx[1439] + xx[1435];
  xx[1446] = xx[1412] + xx[1421];
  xx[1447] = xx[1425] + xx[1405];
  xx[1434] = xx[1440] + xx[1436];
  xx[1438] = xx[1437] - (xx[1333] - xx[1445] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1430));
  xx[1439] = xx[1446] - (xx[1333] * xx[89] + xx[1445] + pm_math_dot3(xx + 753,
    xx + 1430));
  xx[1440] = xx[1447] - (xx[1434] + xx[67] * xx[1431] - xx[68] * xx[1430]);
  solveSymmetricPosDef(xx + 773, xx + 1438, 3, 1, xx + 1448, xx + 1451);
  xx[1438] = xx[1333] + xx[663] * xx[1448] + xx[692] * xx[1449] + xx[765] * xx
    [1450];
  xx[1439] = xx[1445] + xx[687] * xx[1448] + xx[695] * xx[1449] + xx[767] * xx
    [1450];
  xx[1440] = xx[1434] + xx[273] * xx[1448] + xx[447] * xx[1449] + xx[715] * xx
    [1450];
  pm_math_quatXform(xx + 178, xx + 1438, xx + 1434);
  xx[1438] = xx[1430] + xx[693] * xx[1448] + xx[723] * xx[1449] + xx[768] * xx
    [1450];
  xx[1439] = xx[1431] + xx[694] * xx[1448] + xx[727] * xx[1449] + xx[769] * xx
    [1450];
  xx[1440] = xx[1432] + xx[690] * xx[1448] + xx[759] * xx[1449] + xx[770] * xx
    [1450];
  pm_math_quatXform(xx + 178, xx + 1438, xx + 1430);
  pm_math_cross3(xx + 277, xx + 1430, xx + 1438);
  xx[1333] = (xx[1356] - (xx[1436] + xx[1440] - (xx[280] * xx[1430] + xx[276] *
    xx[1431]))) / xx[655];
  xx[1430] = xx[174] * xx[1333];
  xx[1431] = xx[1333] * xx[172];
  xx[1432] = (xx[1430] * xx[171] + xx[1431] * xx[176]) * xx[19];
  xx[1434] = xx[19] * (xx[1430] * xx[176] - xx[1431] * xx[171]);
  xx[1435] = xx[1333] - (xx[1431] * xx[172] + xx[174] * xx[1430]) * xx[19];
  xx[1438] = xx[1432];
  xx[1439] = xx[1434];
  xx[1440] = xx[1435];
  xx[1430] = xx[1333] * xx[277] - xx[276] * xx[1333];
  xx[1431] = xx[1430] * xx[176];
  xx[1436] = xx[280] * xx[1333] + xx[1333] * xx[278];
  xx[1445] = xx[176] * xx[1436];
  xx[1451] = xx[1430] * xx[172] + xx[174] * xx[1436];
  xx[1452] = xx[1431];
  xx[1453] = xx[1445];
  xx[1454] = - xx[1451];
  pm_math_cross3(xx + 760, xx + 1452, xx + 1455);
  xx[1452] = (xx[1455] - xx[1431] * xx[171]) * xx[19] - xx[1436];
  xx[1431] = xx[1430] + xx[19] * (xx[1456] - xx[1445] * xx[171]);
  xx[1430] = xx[19] * (xx[1457] + xx[1451] * xx[171]);
  xx[1453] = xx[1452];
  xx[1454] = xx[1431];
  xx[1455] = xx[1430];
  xx[1436] = xx[1448] - (pm_math_dot3(xx + 684, xx + 1438) + pm_math_dot3(xx +
    724, xx + 1453));
  xx[1445] = xx[1449] - (pm_math_dot3(xx + 756, xx + 1438) + pm_math_dot3(xx +
    883, xx + 1453));
  xx[1448] = xx[1450] - (pm_math_dot3(xx + 886, xx + 1438) + pm_math_dot3(xx +
    829, xx + 1453));
  xx[1438] = xx[1432] + xx[1436] + xx[89] * xx[1445];
  xx[1439] = xx[1434] - xx[89] * xx[1436] + xx[1445];
  xx[1440] = xx[1435] + xx[1448];
  pm_math_quatInverseXform(xx + 188, xx + 1438, xx + 1449);
  pm_math_cross3(xx + 1438, xx + 444, xx + 1453);
  xx[1438] = xx[1452] + xx[90] * xx[1436] - xx[109] * xx[1445] - xx[68] * xx
    [1448] + xx[1453];
  xx[1439] = xx[1431] + xx[109] * xx[1436] + xx[90] * xx[1445] + xx[67] * xx
    [1448] + xx[1454];
  xx[1440] = xx[1430] + xx[110] * xx[1436] + xx[691] * xx[1445] + xx[1455];
  pm_math_quatInverseXform(xx + 188, xx + 1438, xx + 1430);
  xx[1434] = xx[1442] - (pm_math_dot3(xx + 719, xx + 1449) + pm_math_dot3(xx +
    835, xx + 1430));
  xx[1435] = xx[1443] - (pm_math_dot3(xx + 728, xx + 1449) + pm_math_dot3(xx +
    841, xx + 1430));
  xx[1438] = xx[1444] - (pm_math_dot3(xx + 844, xx + 1449) + pm_math_dot3(xx +
    696, xx + 1430));
  xx[1442] = xx[1449] + xx[1434];
  xx[1443] = xx[1450] + xx[1435];
  xx[1444] = xx[1451] + xx[1438];
  pm_math_quatInverseXform(xx + 214, xx + 1442, xx + 1449);
  pm_math_cross3(xx + 1442, xx + 551, xx + 1452);
  xx[1442] = xx[1430] + xx[230] * xx[1435] + xx[229] * xx[1438] + xx[1452];
  xx[1443] = xx[1431] - xx[230] * xx[1434] + xx[228] * xx[1438] + xx[1453];
  xx[1444] = xx[1432] - xx[229] * xx[1434] - xx[228] * xx[1435] + xx[1454];
  pm_math_quatInverseXform(xx + 214, xx + 1442, xx + 1430);
  xx[1439] = xx[1427] - (pm_math_dot3(xx + 638, xx + 1449) + pm_math_dot3(xx +
    381, xx + 1430));
  xx[1427] = xx[1451] - xx[201] * xx[1439];
  xx[1442] = xx[1449] - xx[195] * xx[1439];
  xx[1443] = xx[1450];
  xx[1444] = xx[1427];
  pm_math_cross3(xx + 1442, xx + 244, xx + 1449);
  xx[1440] = xx[1430] + xx[1449];
  xx[1452] = xx[1431] - xx[291] * xx[1439];
  xx[1431] = xx[1452] + xx[1450];
  xx[1449] = xx[1431] * xx[205];
  xx[1450] = xx[1440] * xx[205];
  xx[1451] = xx[1427] * xx[668] + xx[534] * (xx[1440] - (xx[193] * xx[1449] +
    xx[1450] * xx[205]) * xx[19]) + (xx[1431] + xx[19] * (xx[193] * xx[1450] -
    xx[1449] * xx[205])) * xx[569];
  xx[1427] = xx[290] * xx[1333] + xx[771] * xx[1436] + xx[263] * xx[1445] + xx
    [173] * xx[1448] + xx[554] * xx[1434] + xx[186] * xx[1435] + xx[250] * xx
    [1438] + xx[312] * xx[1439] + xx[242] * xx[1451];
  xx[1259] = xx[1261] + (xx[163] * xx[1323] + xx[1329]) * xx[19];
  xx[1260] = (xx[1330] * xx[1314] + xx[1339]) * xx[19] + xx[1353];
  xx[1261] = xx[1260] / xx[346];
  xx[1314] = xx[373] * xx[1261];
  xx[1323] = xx[370] * xx[1261];
  xx[1327] = xx[1323] * xx[348];
  xx[1328] = xx[1314] * xx[348];
  xx[1329] = xx[1323] * xx[344] + xx[350] * xx[1314];
  xx[1337] = xx[1327];
  xx[1338] = xx[1328];
  xx[1339] = - xx[1329];
  pm_math_cross3(xx + 1334, xx + 1337, xx + 1351);
  xx[1330] = xx[1314] + xx[19] * (xx[1351] + xx[345] * xx[1327]);
  xx[1314] = (xx[345] * xx[1328] + xx[1352]) * xx[19] - xx[1323];
  xx[1323] = (xx[1353] - xx[345] * xx[1329]) * xx[19];
  xx[1327] = xx[1330];
  xx[1328] = xx[1314];
  xx[1329] = xx[1323];
  pm_math_cross3(xx + 412, xx + 1327, xx + 1337);
  xx[1327] = xx[52] * xx[1261];
  xx[1328] = xx[350] * xx[1327];
  xx[1329] = xx[1327] * xx[344];
  xx[1351] = xx[1337] - (xx[345] * xx[1328] + xx[1329] * xx[348]) * xx[19];
  xx[1352] = xx[1364] + xx[1367];
  xx[1353] = (xx[1329] * xx[344] + xx[350] * xx[1328]) * xx[19] - xx[1327] + xx
    [1339];
  xx[1327] = (xx[1352] + xx[1351] * xx[195] + xx[1353] * xx[201] + xx[1314] *
              xx[291]) / xx[456];
  xx[1362] = xx[1351] + xx[1327] * xx[409];
  xx[1363] = xx[19] * (xx[345] * xx[1329] - xx[1328] * xx[348]) + xx[1338] + xx
    [513] * xx[1327];
  xx[1364] = xx[1353] - xx[354] * xx[1327];
  pm_math_quatXform(xx + 214, xx + 1362, xx + 1337);
  xx[1362] = xx[1330] + xx[392] * xx[1327];
  xx[1363] = xx[1314] + xx[437] * xx[1327];
  xx[1364] = xx[1323] + xx[1327] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1362, xx + 1328);
  pm_math_cross3(xx + 551, xx + 1328, xx + 1362);
  xx[1314] = xx[1337] + xx[1362];
  xx[1323] = xx[1378] + xx[1383];
  xx[1351] = xx[1391] + xx[1400];
  xx[1353] = xx[1338] + xx[1363];
  xx[1365] = xx[1396] + xx[1373];
  xx[1337] = xx[1339] + xx[1364];
  xx[1362] = xx[1323] - (xx[1314] - (xx[230] * xx[1329] + xx[229] * xx[1330]));
  xx[1363] = xx[1351] - (xx[1353] + xx[230] * xx[1328] - xx[228] * xx[1330]);
  xx[1364] = xx[1365] - (xx[1337] + xx[229] * xx[1328] + xx[228] * xx[1329]);
  solveSymmetricPosDef(xx + 592, xx + 1362, 3, 1, xx + 1371, xx + 1376);
  xx[1362] = xx[1314] + xx[421] * xx[1371] + xx[433] * xx[1372] + xx[454] * xx
    [1373];
  xx[1363] = xx[1353] + xx[500] * xx[1371] + xx[506] * xx[1372] + xx[515] * xx
    [1373];
  xx[1364] = xx[1337] + xx[540] * xx[1371] + xx[443] * xx[1372] + xx[521] * xx
    [1373];
  pm_math_quatXform(xx + 188, xx + 1362, xx + 1337);
  xx[1362] = xx[1328] + xx[248] * xx[1371] + xx[511] * xx[1372] + xx[509] * xx
    [1373];
  xx[1363] = xx[1329] + xx[423] * xx[1371] + xx[436] * xx[1372] + xx[498] * xx
    [1373];
  xx[1364] = xx[1330] + xx[427] * xx[1371] + xx[439] * xx[1372] + xx[504] * xx
    [1373];
  pm_math_quatXform(xx + 188, xx + 1362, xx + 1328);
  pm_math_cross3(xx + 444, xx + 1328, xx + 1362);
  xx[1314] = xx[1337] + xx[1362];
  xx[1353] = xx[1410] + xx[1416];
  xx[1366] = xx[1338] + xx[1363];
  xx[1367] = xx[1413] + xx[1422];
  xx[1376] = xx[1426] + xx[1406];
  xx[1337] = xx[1339] + xx[1364];
  xx[1362] = xx[1353] - (xx[1314] - xx[1366] * xx[89] + pm_math_dot3(xx + 111,
    xx + 1328));
  xx[1363] = xx[1367] - (xx[1314] * xx[89] + xx[1366] + pm_math_dot3(xx + 753,
    xx + 1328));
  xx[1364] = xx[1376] - (xx[1337] + xx[67] * xx[1329] - xx[68] * xx[1328]);
  solveSymmetricPosDef(xx + 773, xx + 1362, 3, 1, xx + 1381, xx + 1389);
  xx[1362] = xx[1314] + xx[663] * xx[1381] + xx[692] * xx[1382] + xx[765] * xx
    [1383];
  xx[1363] = xx[1366] + xx[687] * xx[1381] + xx[695] * xx[1382] + xx[767] * xx
    [1383];
  xx[1364] = xx[1337] + xx[273] * xx[1381] + xx[447] * xx[1382] + xx[715] * xx
    [1383];
  pm_math_quatXform(xx + 178, xx + 1362, xx + 1337);
  xx[1362] = xx[1328] + xx[693] * xx[1381] + xx[723] * xx[1382] + xx[768] * xx
    [1383];
  xx[1363] = xx[1329] + xx[694] * xx[1381] + xx[727] * xx[1382] + xx[769] * xx
    [1383];
  xx[1364] = xx[1330] + xx[690] * xx[1381] + xx[759] * xx[1382] + xx[770] * xx
    [1383];
  pm_math_quatXform(xx + 178, xx + 1362, xx + 1328);
  pm_math_cross3(xx + 277, xx + 1328, xx + 1362);
  xx[1314] = (xx[1259] - (xx[1339] + xx[1364] - (xx[280] * xx[1328] + xx[276] *
    xx[1329]))) / xx[655];
  xx[1328] = xx[174] * xx[1314];
  xx[1329] = xx[1314] * xx[172];
  xx[1330] = (xx[1328] * xx[171] + xx[1329] * xx[176]) * xx[19];
  xx[1337] = xx[19] * (xx[1328] * xx[176] - xx[1329] * xx[171]);
  xx[1338] = xx[1314] - (xx[1329] * xx[172] + xx[174] * xx[1328]) * xx[19];
  xx[1362] = xx[1330];
  xx[1363] = xx[1337];
  xx[1364] = xx[1338];
  xx[1328] = xx[1314] * xx[277] - xx[276] * xx[1314];
  xx[1329] = xx[1328] * xx[176];
  xx[1339] = xx[280] * xx[1314] + xx[1314] * xx[278];
  xx[1366] = xx[176] * xx[1339];
  xx[1377] = xx[1328] * xx[172] + xx[174] * xx[1339];
  xx[1389] = xx[1329];
  xx[1390] = xx[1366];
  xx[1391] = - xx[1377];
  pm_math_cross3(xx + 760, xx + 1389, xx + 1394);
  xx[1378] = (xx[1394] - xx[1329] * xx[171]) * xx[19] - xx[1339];
  xx[1329] = xx[1328] + xx[19] * (xx[1395] - xx[1366] * xx[171]);
  xx[1328] = xx[19] * (xx[1396] + xx[1377] * xx[171]);
  xx[1389] = xx[1378];
  xx[1390] = xx[1329];
  xx[1391] = xx[1328];
  xx[1339] = xx[1381] - (pm_math_dot3(xx + 684, xx + 1362) + pm_math_dot3(xx +
    724, xx + 1389));
  xx[1366] = xx[1382] - (pm_math_dot3(xx + 756, xx + 1362) + pm_math_dot3(xx +
    883, xx + 1389));
  xx[1377] = xx[1383] - (pm_math_dot3(xx + 886, xx + 1362) + pm_math_dot3(xx +
    829, xx + 1389));
  xx[1362] = xx[1330] + xx[1339] + xx[89] * xx[1366];
  xx[1363] = xx[1337] - xx[89] * xx[1339] + xx[1366];
  xx[1364] = xx[1338] + xx[1377];
  pm_math_quatInverseXform(xx + 188, xx + 1362, xx + 1381);
  pm_math_cross3(xx + 1362, xx + 444, xx + 1389);
  xx[1362] = xx[1378] + xx[90] * xx[1339] - xx[109] * xx[1366] - xx[68] * xx
    [1377] + xx[1389];
  xx[1363] = xx[1329] + xx[109] * xx[1339] + xx[90] * xx[1366] + xx[67] * xx
    [1377] + xx[1390];
  xx[1364] = xx[1328] + xx[110] * xx[1339] + xx[691] * xx[1366] + xx[1391];
  pm_math_quatInverseXform(xx + 188, xx + 1362, xx + 1328);
  xx[1337] = xx[1371] - (pm_math_dot3(xx + 719, xx + 1381) + pm_math_dot3(xx +
    835, xx + 1328));
  xx[1338] = xx[1372] - (pm_math_dot3(xx + 728, xx + 1381) + pm_math_dot3(xx +
    841, xx + 1328));
  xx[1362] = xx[1373] - (pm_math_dot3(xx + 844, xx + 1381) + pm_math_dot3(xx +
    696, xx + 1328));
  xx[1371] = xx[1381] + xx[1337];
  xx[1372] = xx[1382] + xx[1338];
  xx[1373] = xx[1383] + xx[1362];
  pm_math_quatInverseXform(xx + 214, xx + 1371, xx + 1381);
  pm_math_cross3(xx + 1371, xx + 551, xx + 1389);
  xx[1371] = xx[1328] + xx[230] * xx[1338] + xx[229] * xx[1362] + xx[1389];
  xx[1372] = xx[1329] - xx[230] * xx[1337] + xx[228] * xx[1362] + xx[1390];
  xx[1373] = xx[1330] - xx[229] * xx[1337] - xx[228] * xx[1338] + xx[1391];
  pm_math_quatInverseXform(xx + 214, xx + 1371, xx + 1328);
  xx[1363] = xx[1327] - (pm_math_dot3(xx + 638, xx + 1381) + pm_math_dot3(xx +
    381, xx + 1328));
  xx[1327] = xx[1383] - xx[201] * xx[1363];
  xx[1371] = xx[1381] - xx[195] * xx[1363];
  xx[1372] = xx[1382];
  xx[1373] = xx[1327];
  pm_math_cross3(xx + 1371, xx + 244, xx + 1381);
  xx[1364] = xx[1328] + xx[1381];
  xx[1378] = xx[1329] - xx[291] * xx[1363];
  xx[1329] = xx[1378] + xx[1382];
  xx[1381] = xx[1329] * xx[205];
  xx[1382] = xx[1364] * xx[205];
  xx[1383] = xx[1327] * xx[668] + xx[534] * (xx[1364] - (xx[193] * xx[1381] +
    xx[1382] * xx[205]) * xx[19]) + (xx[1329] + xx[19] * (xx[193] * xx[1382] -
    xx[1381] * xx[205])) * xx[569];
  xx[1327] = xx[290] * xx[1314] + xx[771] * xx[1339] + xx[263] * xx[1366] + xx
    [173] * xx[1377] + xx[554] * xx[1337] + xx[186] * xx[1338] + xx[250] * xx
    [1362] + xx[312] * xx[1363] + xx[242] * xx[1383];
  xx[1329] = xx[352] * xx[204] + xx[356] * xx[192];
  xx[1364] = xx[202] * xx[352] - xx[356] * xx[203];
  xx[1381] = xx[352] * xx[203] + xx[202] * xx[356];
  xx[1382] = xx[352] * xx[192] - xx[356] * xx[204];
  xx[1408] = xx[1329];
  xx[1409] = xx[1364];
  xx[1410] = xx[1381];
  xx[1411] = xx[1382];
  pm_math_quatCompose(xx + 188, xx + 1408, xx + 1412);
  pm_math_quatCompose(xx + 178, xx + 1412, xx + 1453);
  pm_math_quatCompose(xx + 167, xx + 1453, xx + 1457);
  xx[167] = xx[1454] * xx[1456];
  xx[168] = xx[1453] * xx[1455];
  xx[169] = xx[19] * (xx[167] - xx[168]);
  xx[170] = xx[1453] * xx[1454];
  xx[1389] = xx[1455] * xx[1456];
  xx[1390] = xx[1454] * xx[1454];
  xx[1391] = xx[1455] * xx[1455];
  xx[1394] = xx[169];
  xx[1395] = (xx[170] + xx[1389]) * xx[19];
  xx[1396] = xx[21] - (xx[1390] + xx[1391]) * xx[19];
  pm_math_cross3(xx + 1394, xx + 231, xx + 1398);
  pm_math_quatXform(xx + 1457, xx + 1398, xx + 1394);
  xx[1398] = xx[465];
  xx[1399] = - xx[462];
  xx[1400] = - xx[341];
  pm_math_quatXform(xx + 214, xx + 1398, xx + 1404);
  xx[1416] = xx[1404] - xx[258];
  xx[258] = xx[1405] + xx[252];
  xx[252] = xx[1406] - xx[247];
  xx[1404] = xx[1416];
  xx[1405] = xx[258];
  xx[1406] = xx[252];
  pm_math_quatXform(xx + 188, xx + 1404, xx + 1420);
  xx[247] = xx[1420] + xx[251];
  xx[251] = xx[1421] + xx[272];
  xx[272] = xx[1422] + xx[262];
  xx[1420] = xx[247];
  xx[1421] = xx[251];
  xx[1422] = xx[272];
  pm_math_quatXform(xx + 178, xx + 1420, xx + 1424);
  xx[262] = xx[1425] + xx[278];
  xx[1425] = xx[1424] + xx[277];
  xx[1424] = xx[262] * xx[159] - xx[1425] * xx[157];
  xx[1426] = xx[19] * xx[159] * xx[1424] - (xx[262] - xx[282]) - xx[280];
  xx[1431] = xx[1425] + xx[19] * xx[157] * xx[1424] + xx[287] - xx[276];
  xx[1424] = xx[164] * xx[1431];
  xx[1440] = xx[164] * xx[1426];
  xx[1449] = xx[149] * xx[1431] - xx[1426] * xx[156];
  xx[1457] = - xx[1424];
  xx[1458] = xx[1440];
  xx[1459] = xx[1449];
  pm_math_cross3(xx + 284, xx + 1457, xx + 1460);
  xx[1450] = xx[1394] + xx[1426] + xx[19] * (xx[1460] - xx[1424] * xx[163]);
  xx[1424] = xx[352] * xx[308] + xx[311] * xx[356];
  xx[1426] = xx[352] * xx[309] - xx[310] * xx[356];
  xx[1457] = xx[352] * xx[310] + xx[309] * xx[356];
  xx[1458] = xx[352] * xx[311] - xx[308] * xx[356];
  xx[1463] = xx[1424];
  xx[1464] = xx[1426];
  xx[1465] = xx[1457];
  xx[1466] = xx[1458];
  xx[1459] = xx[195] * xx[356];
  xx[1467] = xx[19] * xx[352] * xx[1459];
  xx[1468] = xx[19] * xx[1459] * xx[356] - xx[195];
  xx[1469] = xx[230] * xx[1467] + xx[316];
  xx[1470] = xx[317] + xx[230] * xx[1468];
  xx[1471] = xx[229] * xx[1468] - xx[228] * xx[1467];
  pm_math_quatXform(xx + 1463, xx + 1469, xx + 1472);
  xx[1463] = - (xx[201] * xx[462]);
  xx[1464] = - (xx[201] * xx[465] + 0.1320051346089697);
  xx[1465] = xx[195] * xx[462];
  pm_math_quatXform(xx + 214, xx + 1463, xx + 1466);
  xx[1463] = xx[1466] + xx[314];
  xx[1464] = xx[1467] + xx[315] - xx[291];
  xx[1465] = xx[1468] - xx[292];
  pm_math_quatXform(xx + 304, xx + 1463, xx + 1466);
  xx[292] = xx[1472] + xx[1466];
  xx[1463] = xx[1426];
  xx[1464] = xx[1457];
  xx[1465] = xx[1458];
  xx[314] = xx[228] * xx[1458];
  xx[316] = xx[229] * xx[1458];
  xx[317] = xx[228] * xx[1426] - xx[1457] * xx[229];
  xx[1457] = - xx[314];
  xx[1458] = xx[316];
  xx[1459] = xx[317];
  pm_math_cross3(xx + 1463, xx + 1457, xx + 1469);
  xx[1426] = xx[461] - xx[19] * (xx[453] + xx[459]);
  xx[453] = xx[458] + (xx[463] - xx[460]) * xx[19];
  xx[459] = xx[311] * xx[453];
  xx[460] = xx[1426] * xx[311];
  xx[463] = xx[309] * xx[453] + xx[1426] * xx[310];
  xx[1457] = xx[459];
  xx[1458] = xx[460];
  xx[1459] = - xx[463];
  pm_math_cross3(xx + 309, xx + 1457, xx + 1463);
  xx[1457] = xx[19] * (xx[1469] - xx[1424] * xx[314]) + xx[1426] + xx[19] * (xx
    [1463] + xx[308] * xx[459]) + xx[229];
  xx[314] = xx[1457] / xx[358];
  xx[459] = xx[398] * xx[314];
  xx[1458] = xx[357] * xx[314];
  xx[1459] = xx[1458] * xx[356];
  xx[1475] = xx[459] * xx[356];
  xx[1476] = xx[459] + (xx[352] * xx[1459] - xx[1475] * xx[356]) * xx[19];
  xx[459] = xx[341] * xx[1476];
  xx[1477] = xx[1458] - xx[19] * (xx[352] * xx[1475] + xx[1459] * xx[356]);
  xx[1458] = xx[1477] * xx[462] - xx[465] * xx[1476] - xx[52] * xx[314];
  xx[1459] = (xx[292] - (xx[195] * xx[459] - xx[1458] * xx[201] + xx[291] * xx
    [1476])) / xx[456];
  xx[1478] = xx[1459] * xx[409] - xx[459];
  xx[1479] = xx[513] * xx[1459] - xx[1477] * xx[341];
  xx[1480] = xx[1458] - xx[354] * xx[1459];
  pm_math_quatXform(xx + 214, xx + 1478, xx + 1481);
  xx[1478] = xx[1477] + xx[392] * xx[1459];
  xx[1479] = xx[437] * xx[1459] - xx[1476];
  xx[1480] = xx[1459] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1478, xx + 1475);
  pm_math_cross3(xx + 551, xx + 1475, xx + 1478);
  xx[459] = xx[1481] + xx[1478];
  pm_math_quatCompose(xx + 304, xx + 1408, xx + 1484);
  xx[1458] = xx[1381] * xx[1381];
  xx[1488] = xx[1382] * xx[1382];
  xx[1489] = xx[1381] * xx[1364];
  xx[1490] = xx[1329] * xx[1382];
  xx[1491] = xx[19] * (xx[1489] - xx[1490]);
  xx[1492] = xx[1381] * xx[1329];
  xx[1493] = xx[1382] * xx[1364];
  xx[1494] = xx[21] - (xx[1458] + xx[1488]) * xx[19];
  xx[1495] = xx[1491];
  xx[1496] = (xx[1492] + xx[1493]) * xx[19];
  pm_math_cross3(xx + 1494, xx + 231, xx + 1497);
  pm_math_quatXform(xx + 1484, xx + 1497, xx + 1494);
  xx[1497] = xx[185] * xx[258];
  xx[1498] = xx[187] * xx[252];
  xx[1499] = xx[1497] + xx[1498];
  xx[1500] = xx[258] * xx[184];
  xx[1501] = xx[252] * xx[184];
  xx[1502] = - xx[1499];
  xx[1503] = - xx[1500];
  xx[1504] = - xx[1501];
  pm_math_cross3(xx + 611, xx + 1502, xx + 1505);
  xx[1502] = xx[19] * (xx[1505] - xx[1499] * xx[183]) + xx[630];
  xx[1503] = xx[19] * (xx[1506] - xx[1500] * xx[183]) + xx[623] - xx[252] - xx
    [230];
  xx[1504] = xx[258] + xx[19] * (xx[1507] - xx[1501] * xx[183]) + xx[624] - xx
    [229];
  pm_math_quatXform(xx + 300, xx + 1502, xx + 1499);
  xx[623] = xx[1494] + xx[1499];
  xx[624] = xx[1364] * xx[1364];
  xx[630] = xx[1381] * xx[1382];
  xx[1381] = xx[1329] * xx[1364];
  xx[1364] = xx[19] * (xx[630] - xx[1381]);
  xx[1502] = (xx[1490] + xx[1489]) * xx[19];
  xx[1503] = xx[21] - (xx[1488] + xx[624]) * xx[19];
  xx[1504] = xx[1364];
  pm_math_cross3(xx + 1502, xx + 231, xx + 1505);
  pm_math_quatXform(xx + 1484, xx + 1505, xx + 1502);
  xx[1382] = xx[185] * xx[1416];
  xx[1505] = xx[1416] * xx[184];
  xx[184] = xx[1505] - xx[1498];
  xx[1498] = xx[185] * xx[252];
  xx[1506] = xx[1382];
  xx[1507] = xx[184];
  xx[1508] = xx[1498];
  pm_math_cross3(xx + 611, xx + 1506, xx + 1509);
  xx[1506] = xx[252] + (xx[1382] * xx[183] + xx[1509]) * xx[19] + xx[645] + xx
    [230];
  xx[1507] = (xx[183] * xx[184] + xx[1510]) * xx[19] + xx[641];
  xx[1508] = (xx[1498] * xx[183] + xx[1511]) * xx[19] + xx[644] - xx[1416] - xx
    [228];
  pm_math_quatXform(xx + 300, xx + 1506, xx + 1509);
  xx[184] = xx[1502] + xx[1509];
  xx[185] = xx[1482] + xx[1479];
  xx[252] = xx[19] * (xx[1493] - xx[1492]);
  xx[1506] = xx[252];
  xx[1507] = (xx[1381] + xx[630]) * xx[19];
  xx[1508] = xx[21] - (xx[624] + xx[1458]) * xx[19];
  pm_math_cross3(xx + 1506, xx + 231, xx + 1512);
  pm_math_quatXform(xx + 1484, xx + 1512, xx + 1506);
  xx[641] = xx[187] * xx[1416];
  xx[644] = xx[187] * xx[258];
  xx[187] = xx[1505] - xx[1497];
  xx[1484] = xx[641];
  xx[1485] = xx[644];
  xx[1486] = xx[187];
  pm_math_cross3(xx + 611, xx + 1484, xx + 1512);
  xx[611] = (xx[641] * xx[183] + xx[1512]) * xx[19] + xx[570] - xx[258] + xx[229];
  xx[612] = xx[1416] + (xx[644] * xx[183] + xx[1513]) * xx[19] + xx[182] + xx
    [228];
  xx[613] = (xx[183] * xx[187] + xx[1514]) * xx[19] + xx[550];
  pm_math_quatXform(xx + 300, xx + 611, xx + 1484);
  xx[182] = xx[1506] + xx[1484];
  xx[183] = xx[1483] + xx[1480];
  xx[611] = xx[623] - (xx[459] - (xx[230] * xx[1476] + xx[229] * xx[1477]));
  xx[612] = xx[184] - (xx[185] + xx[230] * xx[1475] - xx[228] * xx[1477]);
  xx[613] = xx[182] - (xx[183] + xx[229] * xx[1475] + xx[228] * xx[1476]);
  solveSymmetricPosDef(xx + 592, xx + 611, 3, 1, xx + 1478, xx + 1481);
  xx[611] = xx[459] + xx[421] * xx[1478] + xx[433] * xx[1479] + xx[454] * xx
    [1480];
  xx[612] = xx[185] + xx[500] * xx[1478] + xx[506] * xx[1479] + xx[515] * xx
    [1480];
  xx[613] = xx[183] + xx[540] * xx[1478] + xx[443] * xx[1479] + xx[521] * xx
    [1480];
  pm_math_quatXform(xx + 188, xx + 611, xx + 1481);
  xx[611] = xx[1475] + xx[248] * xx[1478] + xx[511] * xx[1479] + xx[509] * xx
    [1480];
  xx[612] = xx[1476] + xx[423] * xx[1478] + xx[436] * xx[1479] + xx[498] * xx
    [1480];
  xx[613] = xx[1477] + xx[427] * xx[1478] + xx[439] * xx[1479] + xx[504] * xx
    [1480];
  pm_math_quatXform(xx + 188, xx + 611, xx + 1475);
  pm_math_cross3(xx + 444, xx + 1475, xx + 611);
  xx[183] = xx[1481] + xx[611];
  pm_math_quatCompose(xx + 300, xx + 1412, xx + 1512);
  xx[185] = xx[89] * xx[1415];
  xx[187] = xx[89] * xx[1413] + xx[1414];
  xx[1516] = xx[185];
  xx[1517] = xx[1415];
  xx[1518] = - xx[187];
  pm_math_cross3(xx + 1413, xx + 1516, xx + 1519);
  xx[258] = xx[1412] * xx[1415];
  xx[1516] = xx[21] + (xx[1519] - xx[1412] * xx[185]) * xx[19];
  xx[1517] = xx[19] * (xx[1520] - xx[258]) - xx[89];
  xx[1518] = xx[19] * (xx[1521] + xx[1412] * xx[187]);
  pm_math_cross3(xx + 1516, xx + 231, xx + 1519);
  pm_math_quatXform(xx + 1512, xx + 1519, xx + 1516);
  xx[187] = - (xx[272] * xx[89]);
  xx[1519] = xx[187];
  xx[1520] = - xx[272];
  xx[1521] = xx[251] + xx[247] * xx[89];
  pm_math_quatXform(xx + 178, xx + 1519, xx + 1522);
  xx[1519] = xx[1522] + xx[782];
  xx[1520] = xx[1523] + xx[783];
  xx[1521] = xx[1524] + xx[784];
  pm_math_quatXform(xx + 296, xx + 1519, xx + 782);
  xx[459] = xx[1516] + xx[782];
  xx[550] = xx[1482] + xx[612];
  xx[570] = xx[1413] - xx[89] * xx[1414];
  xx[1519] = - xx[1415];
  xx[1520] = xx[185];
  xx[1521] = xx[570];
  pm_math_cross3(xx + 1413, xx + 1519, xx + 1522);
  xx[1519] = xx[89] + (xx[258] + xx[1522]) * xx[19];
  xx[1520] = xx[21] + xx[19] * (xx[1523] - xx[89] * xx[258]);
  xx[1521] = xx[19] * (xx[1524] - xx[1412] * xx[570]);
  pm_math_cross3(xx + 1519, xx + 231, xx + 1522);
  pm_math_quatXform(xx + 1512, xx + 1522, xx + 1519);
  xx[1522] = xx[272];
  xx[1523] = xx[187];
  xx[1524] = xx[251] * xx[89] - xx[247];
  pm_math_quatXform(xx + 178, xx + 1522, xx + 1525);
  xx[1522] = xx[1525] + xx[791];
  xx[1523] = xx[1526] + xx[792];
  xx[1524] = xx[1527] + xx[793];
  pm_math_quatXform(xx + 296, xx + 1522, xx + 791);
  xx[185] = xx[1519] + xx[791];
  xx[187] = xx[1413] * xx[1415];
  xx[272] = xx[1412] * xx[1414];
  xx[570] = xx[19] * (xx[187] - xx[272]);
  xx[641] = xx[1412] * xx[1413];
  xx[644] = xx[1414] * xx[1415];
  xx[645] = xx[1413] * xx[1413];
  xx[1382] = xx[1414] * xx[1414];
  xx[1522] = xx[570];
  xx[1523] = (xx[641] + xx[644]) * xx[19];
  xx[1524] = xx[21] - (xx[645] + xx[1382]) * xx[19];
  pm_math_cross3(xx + 1522, xx + 231, xx + 1525);
  pm_math_quatXform(xx + 1512, xx + 1525, xx + 1522);
  xx[1416] = xx[247] * xx[176];
  xx[1487] = xx[251] * xx[176];
  xx[1497] = xx[247] * xx[172] + xx[174] * xx[251];
  xx[1512] = xx[1416];
  xx[1513] = xx[1487];
  xx[1514] = - xx[1497];
  pm_math_cross3(xx + 760, xx + 1512, xx + 1525);
  xx[1512] = xx[19] * (xx[1525] + xx[1416] * xx[171]) + xx[807] - xx[251] - xx
    [68];
  xx[1513] = xx[247] + xx[19] * (xx[1526] + xx[1487] * xx[171]) + xx[763] + xx
    [67];
  xx[1514] = (xx[1527] - xx[171] * xx[1497]) * xx[19] + xx[805];
  pm_math_quatXform(xx + 296, xx + 1512, xx + 1525);
  xx[247] = xx[1522] + xx[1525];
  xx[251] = xx[1483] + xx[613];
  xx[611] = xx[459] - (xx[183] - xx[550] * xx[89] + pm_math_dot3(xx + 111, xx +
    1475));
  xx[612] = xx[185] - (xx[183] * xx[89] + xx[550] + pm_math_dot3(xx + 753, xx +
    1475));
  xx[613] = xx[247] - (xx[251] + xx[67] * xx[1476] - xx[68] * xx[1475]);
  solveSymmetricPosDef(xx + 773, xx + 611, 3, 1, xx + 1481, xx + 1512);
  xx[611] = xx[183] + xx[663] * xx[1481] + xx[692] * xx[1482] + xx[765] * xx
    [1483];
  xx[612] = xx[550] + xx[687] * xx[1481] + xx[695] * xx[1482] + xx[767] * xx
    [1483];
  xx[613] = xx[251] + xx[273] * xx[1481] + xx[447] * xx[1482] + xx[715] * xx
    [1483];
  pm_math_quatXform(xx + 178, xx + 611, xx + 1512);
  xx[611] = xx[1475] + xx[693] * xx[1481] + xx[723] * xx[1482] + xx[768] * xx
    [1483];
  xx[612] = xx[1476] + xx[694] * xx[1481] + xx[727] * xx[1482] + xx[769] * xx
    [1483];
  xx[613] = xx[1477] + xx[690] * xx[1481] + xx[759] * xx[1482] + xx[770] * xx
    [1483];
  pm_math_quatXform(xx + 178, xx + 611, xx + 1475);
  pm_math_cross3(xx + 277, xx + 1475, xx + 611);
  xx[183] = (xx[1450] - (xx[1514] + xx[613] - (xx[280] * xx[1475] + xx[276] *
    xx[1476]))) / xx[655];
  xx[251] = xx[174] * xx[183];
  xx[550] = xx[183] * xx[172];
  xx[611] = (xx[251] * xx[171] + xx[550] * xx[176]) * xx[19];
  xx[612] = xx[19] * (xx[251] * xx[176] - xx[550] * xx[171]);
  xx[613] = xx[183] - (xx[550] * xx[172] + xx[174] * xx[251]) * xx[19];
  xx[251] = xx[183] * xx[277] - xx[276] * xx[183];
  xx[550] = xx[251] * xx[176];
  xx[763] = xx[280] * xx[183] + xx[183] * xx[278];
  xx[805] = xx[763] * xx[176];
  xx[807] = xx[251] * xx[172] + xx[174] * xx[763];
  xx[1475] = xx[550];
  xx[1476] = xx[805];
  xx[1477] = - xx[807];
  pm_math_cross3(xx + 760, xx + 1475, xx + 1512);
  xx[1416] = (xx[1512] - xx[550] * xx[171]) * xx[19] - xx[763];
  xx[550] = xx[251] + xx[19] * (xx[1513] - xx[805] * xx[171]);
  xx[251] = xx[19] * (xx[1514] + xx[807] * xx[171]);
  xx[1475] = xx[1416];
  xx[1476] = xx[550];
  xx[1477] = xx[251];
  xx[763] = xx[1481] - (pm_math_dot3(xx + 684, xx + 611) + pm_math_dot3(xx + 724,
    xx + 1475));
  xx[805] = xx[1482] - (pm_math_dot3(xx + 756, xx + 611) + pm_math_dot3(xx + 883,
    xx + 1475));
  xx[807] = xx[1483] - (pm_math_dot3(xx + 886, xx + 611) + pm_math_dot3(xx + 829,
    xx + 1475));
  xx[1475] = xx[611] + xx[763] + xx[89] * xx[805];
  xx[1476] = xx[612] - xx[89] * xx[763] + xx[805];
  xx[1477] = xx[613] + xx[807];
  pm_math_quatInverseXform(xx + 188, xx + 1475, xx + 611);
  pm_math_cross3(xx + 1475, xx + 444, xx + 1481);
  xx[1475] = xx[1416] + xx[90] * xx[763] - xx[109] * xx[805] - xx[68] * xx[807]
    + xx[1481];
  xx[1476] = xx[550] + xx[109] * xx[763] + xx[90] * xx[805] + xx[67] * xx[807] +
    xx[1482];
  xx[1477] = xx[251] + xx[110] * xx[763] + xx[691] * xx[805] + xx[1483];
  pm_math_quatInverseXform(xx + 188, xx + 1475, xx + 1481);
  xx[251] = xx[1478] - (pm_math_dot3(xx + 719, xx + 611) + pm_math_dot3(xx + 835,
    xx + 1481));
  xx[550] = xx[1479] - (pm_math_dot3(xx + 728, xx + 611) + pm_math_dot3(xx + 841,
    xx + 1481));
  xx[1416] = xx[1480] - (pm_math_dot3(xx + 844, xx + 611) + pm_math_dot3(xx +
    696, xx + 1481));
  xx[1475] = xx[611] + xx[251];
  xx[1476] = xx[612] + xx[550];
  xx[1477] = xx[613] + xx[1416];
  pm_math_quatInverseXform(xx + 214, xx + 1475, xx + 611);
  pm_math_cross3(xx + 1475, xx + 551, xx + 1478);
  xx[1475] = xx[1481] + xx[230] * xx[550] + xx[229] * xx[1416] + xx[1478];
  xx[1476] = xx[1482] - xx[230] * xx[251] + xx[228] * xx[1416] + xx[1479];
  xx[1477] = xx[1483] - xx[229] * xx[251] - xx[228] * xx[550] + xx[1480];
  pm_math_quatInverseXform(xx + 214, xx + 1475, xx + 1478);
  xx[1475] = xx[1459] - (pm_math_dot3(xx + 638, xx + 611) + pm_math_dot3(xx +
    381, xx + 1478));
  xx[1459] = xx[613] - xx[201] * xx[1475];
  xx[1481] = xx[611] - xx[195] * xx[1475];
  xx[1482] = xx[612];
  xx[1483] = xx[1459];
  pm_math_cross3(xx + 1481, xx + 244, xx + 611);
  xx[1476] = xx[1478] + xx[611];
  xx[1477] = xx[1479] - xx[291] * xx[1475];
  xx[611] = xx[1477] + xx[612];
  xx[612] = xx[611] * xx[205];
  xx[613] = xx[1476] * xx[205];
  xx[1479] = xx[1459] * xx[668] + xx[534] * (xx[1476] - (xx[193] * xx[612] + xx
    [613] * xx[205]) * xx[19]) + (xx[611] + xx[19] * (xx[193] * xx[613] - xx[612]
    * xx[205])) * xx[569];
  xx[611] = xx[290] * xx[183] + xx[771] * xx[763] + xx[263] * xx[805] + xx[173] *
    xx[807] + xx[554] * xx[251] + xx[186] * xx[550] + xx[250] * xx[1416] + xx
    [312] * xx[1475] + xx[1479] * xx[242];
  xx[612] = xx[1395] + xx[1431] + (xx[1440] * xx[163] + xx[1461]) * xx[19];
  xx[613] = xx[1473] + xx[1467];
  xx[1431] = (xx[1424] * xx[316] + xx[1470]) * xx[19] - xx[453] + (xx[308] * xx
    [460] + xx[1464]) * xx[19] + xx[228];
  xx[316] = xx[1431] / xx[358];
  xx[460] = xx[398] * xx[316];
  xx[1440] = xx[357] * xx[316];
  xx[1476] = xx[1440] * xx[356];
  xx[1487] = xx[460] * xx[356];
  xx[1497] = xx[460] + (xx[352] * xx[1476] - xx[1487] * xx[356]) * xx[19];
  xx[460] = xx[341] * xx[1497];
  xx[1498] = xx[1440] - xx[19] * (xx[352] * xx[1487] + xx[1476] * xx[356]);
  xx[1440] = xx[1498] * xx[462] - xx[1497] * xx[465] - xx[52] * xx[316];
  xx[1476] = (xx[613] - (xx[195] * xx[460] - xx[1440] * xx[201] + xx[291] * xx
    [1497])) / xx[456];
  xx[1512] = xx[1476] * xx[409] - xx[460];
  xx[1513] = xx[513] * xx[1476] - xx[1498] * xx[341];
  xx[1514] = xx[1440] - xx[354] * xx[1476];
  pm_math_quatXform(xx + 214, xx + 1512, xx + 1528);
  xx[1512] = xx[1498] + xx[392] * xx[1476];
  xx[1513] = xx[437] * xx[1476] - xx[1497];
  xx[1514] = xx[1476] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1512, xx + 1531);
  pm_math_cross3(xx + 551, xx + 1531, xx + 1512);
  xx[460] = xx[1528] + xx[1512];
  xx[1440] = xx[1495] + xx[1500];
  xx[1487] = xx[1503] + xx[1510];
  xx[1497] = xx[1529] + xx[1513];
  xx[1498] = xx[1507] + xx[1485];
  xx[1505] = xx[1530] + xx[1514];
  xx[1512] = xx[1440] - (xx[460] - (xx[230] * xx[1532] + xx[229] * xx[1533]));
  xx[1513] = xx[1487] - (xx[1497] + xx[230] * xx[1531] - xx[228] * xx[1533]);
  xx[1514] = xx[1498] - (xx[1505] + xx[229] * xx[1531] + xx[228] * xx[1532]);
  solveSymmetricPosDef(xx + 592, xx + 1512, 3, 1, xx + 1528, xx + 1534);
  xx[1512] = xx[460] + xx[421] * xx[1528] + xx[433] * xx[1529] + xx[454] * xx
    [1530];
  xx[1513] = xx[1497] + xx[500] * xx[1528] + xx[506] * xx[1529] + xx[515] * xx
    [1530];
  xx[1514] = xx[1505] + xx[540] * xx[1528] + xx[443] * xx[1529] + xx[521] * xx
    [1530];
  pm_math_quatXform(xx + 188, xx + 1512, xx + 1534);
  xx[1512] = xx[1531] + xx[248] * xx[1528] + xx[511] * xx[1529] + xx[509] * xx
    [1530];
  xx[1513] = xx[1532] + xx[423] * xx[1528] + xx[436] * xx[1529] + xx[498] * xx
    [1530];
  xx[1514] = xx[1533] + xx[427] * xx[1528] + xx[439] * xx[1529] + xx[504] * xx
    [1530];
  pm_math_quatXform(xx + 188, xx + 1512, xx + 1531);
  pm_math_cross3(xx + 444, xx + 1531, xx + 1512);
  xx[460] = xx[1534] + xx[1512];
  xx[1497] = xx[1517] + xx[783];
  xx[1505] = xx[1535] + xx[1513];
  xx[1515] = xx[1520] + xx[792];
  xx[1537] = xx[1523] + xx[1526];
  xx[1512] = xx[1536] + xx[1514];
  xx[1534] = xx[1497] - (xx[460] - xx[1505] * xx[89] + pm_math_dot3(xx + 111, xx
    + 1531));
  xx[1535] = xx[1515] - (xx[460] * xx[89] + xx[1505] + pm_math_dot3(xx + 753, xx
    + 1531));
  xx[1536] = xx[1537] - (xx[1512] + xx[67] * xx[1532] - xx[68] * xx[1531]);
  solveSymmetricPosDef(xx + 773, xx + 1534, 3, 1, xx + 1538, xx + 1541);
  xx[1534] = xx[460] + xx[663] * xx[1538] + xx[692] * xx[1539] + xx[765] * xx
    [1540];
  xx[1535] = xx[1505] + xx[687] * xx[1538] + xx[695] * xx[1539] + xx[767] * xx
    [1540];
  xx[1536] = xx[1512] + xx[273] * xx[1538] + xx[447] * xx[1539] + xx[715] * xx
    [1540];
  pm_math_quatXform(xx + 178, xx + 1534, xx + 1512);
  xx[1534] = xx[1531] + xx[693] * xx[1538] + xx[723] * xx[1539] + xx[768] * xx
    [1540];
  xx[1535] = xx[1532] + xx[694] * xx[1538] + xx[727] * xx[1539] + xx[769] * xx
    [1540];
  xx[1536] = xx[1533] + xx[690] * xx[1538] + xx[759] * xx[1539] + xx[770] * xx
    [1540];
  pm_math_quatXform(xx + 178, xx + 1534, xx + 1531);
  pm_math_cross3(xx + 277, xx + 1531, xx + 1534);
  xx[460] = (xx[612] - (xx[1514] + xx[1536] - (xx[280] * xx[1531] + xx[276] *
    xx[1532]))) / xx[655];
  xx[1505] = xx[174] * xx[460];
  xx[1512] = xx[460] * xx[172];
  xx[1513] = (xx[1505] * xx[171] + xx[1512] * xx[176]) * xx[19];
  xx[1514] = xx[19] * (xx[1505] * xx[176] - xx[1512] * xx[171]);
  xx[1531] = xx[460] - (xx[1512] * xx[172] + xx[174] * xx[1505]) * xx[19];
  xx[1532] = xx[1513];
  xx[1533] = xx[1514];
  xx[1534] = xx[1531];
  xx[1505] = xx[460] * xx[277] - xx[276] * xx[460];
  xx[1512] = xx[1505] * xx[176];
  xx[1535] = xx[280] * xx[460] + xx[460] * xx[278];
  xx[1536] = xx[1535] * xx[176];
  xx[1541] = xx[1505] * xx[172] + xx[174] * xx[1535];
  xx[1542] = xx[1512];
  xx[1543] = xx[1536];
  xx[1544] = - xx[1541];
  pm_math_cross3(xx + 760, xx + 1542, xx + 1545);
  xx[1542] = (xx[1545] - xx[1512] * xx[171]) * xx[19] - xx[1535];
  xx[1512] = xx[1505] + xx[19] * (xx[1546] - xx[1536] * xx[171]);
  xx[1505] = xx[19] * (xx[1547] + xx[1541] * xx[171]);
  xx[1543] = xx[1542];
  xx[1544] = xx[1512];
  xx[1545] = xx[1505];
  xx[1535] = xx[1538] - (pm_math_dot3(xx + 684, xx + 1532) + pm_math_dot3(xx +
    724, xx + 1543));
  xx[1536] = xx[1539] - (pm_math_dot3(xx + 756, xx + 1532) + pm_math_dot3(xx +
    883, xx + 1543));
  xx[1538] = xx[1540] - (pm_math_dot3(xx + 886, xx + 1532) + pm_math_dot3(xx +
    829, xx + 1543));
  xx[1532] = xx[1513] + xx[1535] + xx[89] * xx[1536];
  xx[1533] = xx[1514] - xx[89] * xx[1535] + xx[1536];
  xx[1534] = xx[1531] + xx[1538];
  pm_math_quatInverseXform(xx + 188, xx + 1532, xx + 1539);
  pm_math_cross3(xx + 1532, xx + 444, xx + 1543);
  xx[1531] = xx[1542] + xx[90] * xx[1535] - xx[109] * xx[1536] - xx[68] * xx
    [1538] + xx[1543];
  xx[1532] = xx[1512] + xx[109] * xx[1535] + xx[90] * xx[1536] + xx[67] * xx
    [1538] + xx[1544];
  xx[1533] = xx[1505] + xx[110] * xx[1535] + xx[691] * xx[1536] + xx[1545];
  pm_math_quatInverseXform(xx + 188, xx + 1531, xx + 1512);
  xx[1505] = xx[1528] - (pm_math_dot3(xx + 719, xx + 1539) + pm_math_dot3(xx +
    835, xx + 1512));
  xx[1528] = xx[1529] - (pm_math_dot3(xx + 728, xx + 1539) + pm_math_dot3(xx +
    841, xx + 1512));
  xx[1529] = xx[1530] - (pm_math_dot3(xx + 844, xx + 1539) + pm_math_dot3(xx +
    696, xx + 1512));
  xx[1530] = xx[1539] + xx[1505];
  xx[1531] = xx[1540] + xx[1528];
  xx[1532] = xx[1541] + xx[1529];
  pm_math_quatInverseXform(xx + 214, xx + 1530, xx + 1539);
  pm_math_cross3(xx + 1530, xx + 551, xx + 1542);
  xx[1530] = xx[1512] + xx[230] * xx[1528] + xx[229] * xx[1529] + xx[1542];
  xx[1531] = xx[1513] - xx[230] * xx[1505] + xx[228] * xx[1529] + xx[1543];
  xx[1532] = xx[1514] - xx[229] * xx[1505] - xx[228] * xx[1528] + xx[1544];
  pm_math_quatInverseXform(xx + 214, xx + 1530, xx + 1512);
  xx[1530] = xx[1476] - (pm_math_dot3(xx + 638, xx + 1539) + pm_math_dot3(xx +
    381, xx + 1512));
  xx[1476] = xx[1541] - xx[201] * xx[1530];
  xx[1531] = xx[1539] - xx[195] * xx[1530];
  xx[1532] = xx[1540];
  xx[1533] = xx[1476];
  pm_math_cross3(xx + 1531, xx + 244, xx + 1539);
  xx[1534] = xx[1512] + xx[1539];
  xx[1542] = xx[1513] - xx[291] * xx[1530];
  xx[1513] = xx[1542] + xx[1540];
  xx[1539] = xx[1513] * xx[205];
  xx[1540] = xx[1534] * xx[205];
  xx[1541] = xx[1476] * xx[668] + xx[534] * (xx[1534] - (xx[193] * xx[1539] +
    xx[1540] * xx[205]) * xx[19]) + (xx[1513] + xx[19] * (xx[193] * xx[1540] -
    xx[1539] * xx[205])) * xx[569];
  xx[1513] = xx[290] * xx[460] + xx[771] * xx[1535] + xx[263] * xx[1536] + xx
    [173] * xx[1538] + xx[554] * xx[1505] + xx[186] * xx[1528] + xx[250] * xx
    [1529] + xx[312] * xx[1530] + xx[1541] * xx[242];
  xx[1394] = xx[1396] + (xx[163] * xx[1449] + xx[1462]) * xx[19];
  xx[1395] = xx[1474] + xx[1468];
  xx[1396] = (xx[1424] * xx[317] + xx[1471]) * xx[19] + (xx[1465] - xx[308] *
    xx[463]) * xx[19];
  xx[317] = xx[1396] / xx[358];
  xx[463] = xx[398] * xx[317];
  xx[1424] = xx[357] * xx[317];
  xx[1449] = xx[1424] * xx[356];
  xx[1460] = xx[463] * xx[356];
  xx[1461] = xx[463] + (xx[352] * xx[1449] - xx[1460] * xx[356]) * xx[19];
  xx[463] = xx[341] * xx[1461];
  xx[1462] = xx[1424] - xx[19] * (xx[352] * xx[1460] + xx[1449] * xx[356]);
  xx[1424] = xx[1462] * xx[462] - xx[1461] * xx[465] - xx[52] * xx[317];
  xx[1449] = (xx[1395] - (xx[195] * xx[463] - xx[1424] * xx[201] + xx[291] * xx
    [1461])) / xx[456];
  xx[1463] = xx[1449] * xx[409] - xx[463];
  xx[1464] = xx[513] * xx[1449] - xx[1462] * xx[341];
  xx[1465] = xx[1424] - xx[354] * xx[1449];
  pm_math_quatXform(xx + 214, xx + 1463, xx + 1466);
  xx[1463] = xx[1462] + xx[392] * xx[1449];
  xx[1464] = xx[437] * xx[1449] - xx[1461];
  xx[1465] = xx[1449] * xx[424];
  pm_math_quatXform(xx + 214, xx + 1463, xx + 1460);
  pm_math_cross3(xx + 551, xx + 1460, xx + 1463);
  xx[463] = xx[1466] + xx[1463];
  xx[1424] = xx[1496] + xx[1501];
  xx[1469] = xx[1504] + xx[1511];
  xx[1470] = xx[1467] + xx[1464];
  xx[1471] = xx[1508] + xx[1486];
  xx[1463] = xx[1468] + xx[1465];
  xx[1464] = xx[1424] - (xx[463] - (xx[230] * xx[1461] + xx[229] * xx[1462]));
  xx[1465] = xx[1469] - (xx[1470] + xx[230] * xx[1460] - xx[228] * xx[1462]);
  xx[1466] = xx[1471] - (xx[1463] + xx[229] * xx[1460] + xx[228] * xx[1461]);
  solveSymmetricPosDef(xx + 592, xx + 1464, 3, 1, xx + 1472, xx + 1484);
  xx[1464] = xx[463] + xx[421] * xx[1472] + xx[433] * xx[1473] + xx[454] * xx
    [1474];
  xx[1465] = xx[1470] + xx[500] * xx[1472] + xx[506] * xx[1473] + xx[515] * xx
    [1474];
  xx[1466] = xx[1463] + xx[540] * xx[1472] + xx[443] * xx[1473] + xx[521] * xx
    [1474];
  pm_math_quatXform(xx + 188, xx + 1464, xx + 1484);
  xx[1463] = xx[1460] + xx[248] * xx[1472] + xx[511] * xx[1473] + xx[509] * xx
    [1474];
  xx[1464] = xx[1461] + xx[423] * xx[1472] + xx[436] * xx[1473] + xx[498] * xx
    [1474];
  xx[1465] = xx[1462] + xx[427] * xx[1472] + xx[439] * xx[1473] + xx[504] * xx
    [1474];
  pm_math_quatXform(xx + 188, xx + 1463, xx + 1460);
  pm_math_cross3(xx + 444, xx + 1460, xx + 1463);
  xx[463] = xx[1484] + xx[1463];
  xx[782] = xx[1518] + xx[784];
  xx[783] = xx[1485] + xx[1464];
  xx[784] = xx[1521] + xx[793];
  xx[791] = xx[1524] + xx[1527];
  xx[792] = xx[1486] + xx[1465];
  xx[1463] = xx[782] - (xx[463] - xx[783] * xx[89] + pm_math_dot3(xx + 111, xx +
    1460));
  xx[1464] = xx[784] - (xx[463] * xx[89] + xx[783] + pm_math_dot3(xx + 753, xx +
    1460));
  xx[1465] = xx[791] - (xx[792] + xx[67] * xx[1461] - xx[68] * xx[1460]);
  solveSymmetricPosDef(xx + 773, xx + 1463, 3, 1, xx + 1466, xx + 1484);
  xx[1463] = xx[463] + xx[663] * xx[1466] + xx[692] * xx[1467] + xx[765] * xx
    [1468];
  xx[1464] = xx[783] + xx[687] * xx[1466] + xx[695] * xx[1467] + xx[767] * xx
    [1468];
  xx[1465] = xx[792] + xx[273] * xx[1466] + xx[447] * xx[1467] + xx[715] * xx
    [1468];
  pm_math_quatXform(xx + 178, xx + 1463, xx + 1484);
  xx[1463] = xx[1460] + xx[693] * xx[1466] + xx[723] * xx[1467] + xx[768] * xx
    [1468];
  xx[1464] = xx[1461] + xx[694] * xx[1466] + xx[727] * xx[1467] + xx[769] * xx
    [1468];
  xx[1465] = xx[1462] + xx[690] * xx[1466] + xx[759] * xx[1467] + xx[770] * xx
    [1468];
  pm_math_quatXform(xx + 178, xx + 1463, xx + 1460);
  pm_math_cross3(xx + 277, xx + 1460, xx + 1463);
  xx[463] = (xx[1394] - (xx[1486] + xx[1465] - (xx[280] * xx[1460] + xx[276] *
    xx[1461]))) / xx[655];
  xx[783] = xx[174] * xx[463];
  xx[792] = xx[463] * xx[172];
  xx[793] = (xx[783] * xx[171] + xx[792] * xx[176]) * xx[19];
  xx[1460] = xx[19] * (xx[783] * xx[176] - xx[792] * xx[171]);
  xx[1461] = xx[463] - (xx[792] * xx[172] + xx[174] * xx[783]) * xx[19];
  xx[1462] = xx[793];
  xx[1463] = xx[1460];
  xx[1464] = xx[1461];
  xx[783] = xx[463] * xx[277] - xx[276] * xx[463];
  xx[792] = xx[783] * xx[176];
  xx[1465] = xx[280] * xx[463] + xx[463] * xx[278];
  xx[1470] = xx[1465] * xx[176];
  xx[176] = xx[783] * xx[172] + xx[174] * xx[1465];
  xx[1484] = xx[792];
  xx[1485] = xx[1470];
  xx[1486] = - xx[176];
  pm_math_cross3(xx + 760, xx + 1484, xx + 1494);
  xx[172] = (xx[1494] - xx[792] * xx[171]) * xx[19] - xx[1465];
  xx[174] = xx[783] + xx[19] * (xx[1495] - xx[1470] * xx[171]);
  xx[760] = xx[19] * (xx[1496] + xx[176] * xx[171]);
  xx[1484] = xx[172];
  xx[1485] = xx[174];
  xx[1486] = xx[760];
  xx[171] = xx[1466] - (pm_math_dot3(xx + 684, xx + 1462) + pm_math_dot3(xx +
    724, xx + 1484));
  xx[176] = xx[1467] - (pm_math_dot3(xx + 756, xx + 1462) + pm_math_dot3(xx +
    883, xx + 1484));
  xx[761] = xx[1468] - (pm_math_dot3(xx + 886, xx + 1462) + pm_math_dot3(xx +
    829, xx + 1484));
  xx[1462] = xx[793] + xx[171] + xx[89] * xx[176];
  xx[1463] = xx[1460] - xx[89] * xx[171] + xx[176];
  xx[1464] = xx[1461] + xx[761];
  pm_math_quatInverseXform(xx + 188, xx + 1462, xx + 1465);
  pm_math_cross3(xx + 1462, xx + 444, xx + 1484);
  xx[1460] = xx[172] + xx[90] * xx[171] - xx[109] * xx[176] - xx[68] * xx[761] +
    xx[1484];
  xx[1461] = xx[174] + xx[109] * xx[171] + xx[90] * xx[176] + xx[67] * xx[761] +
    xx[1485];
  xx[1462] = xx[760] + xx[110] * xx[171] + xx[691] * xx[176] + xx[1486];
  pm_math_quatInverseXform(xx + 188, xx + 1460, xx + 1484);
  xx[172] = xx[1472] - (pm_math_dot3(xx + 719, xx + 1465) + pm_math_dot3(xx +
    835, xx + 1484));
  xx[174] = xx[1473] - (pm_math_dot3(xx + 728, xx + 1465) + pm_math_dot3(xx +
    841, xx + 1484));
  xx[760] = xx[1474] - (pm_math_dot3(xx + 844, xx + 1465) + pm_math_dot3(xx +
    696, xx + 1484));
  xx[1460] = xx[1465] + xx[172];
  xx[1461] = xx[1466] + xx[174];
  xx[1462] = xx[1467] + xx[760];
  pm_math_quatInverseXform(xx + 214, xx + 1460, xx + 1463);
  pm_math_cross3(xx + 1460, xx + 551, xx + 1466);
  xx[1460] = xx[1484] + xx[230] * xx[174] + xx[229] * xx[760] + xx[1466];
  xx[1461] = xx[1485] - xx[230] * xx[172] + xx[228] * xx[760] + xx[1467];
  xx[1462] = xx[1486] - xx[229] * xx[172] - xx[228] * xx[174] + xx[1468];
  pm_math_quatInverseXform(xx + 214, xx + 1460, xx + 1466);
  xx[762] = xx[1449] - (pm_math_dot3(xx + 638, xx + 1463) + pm_math_dot3(xx +
    381, xx + 1466));
  xx[783] = xx[1465] - xx[201] * xx[762];
  xx[1460] = xx[1463] - xx[195] * xx[762];
  xx[1461] = xx[1464];
  xx[1462] = xx[783];
  pm_math_cross3(xx + 1460, xx + 244, xx + 1463);
  xx[792] = xx[1466] + xx[1463];
  xx[793] = xx[1467] - xx[291] * xx[762];
  xx[1449] = xx[793] + xx[1464];
  xx[1463] = xx[1449] * xx[205];
  xx[1464] = xx[792] * xx[205];
  xx[1465] = xx[783] * xx[668] + xx[534] * (xx[792] - (xx[193] * xx[1463] + xx
    [1464] * xx[205]) * xx[19]) + (xx[1449] + xx[19] * (xx[193] * xx[1464] - xx
    [1463] * xx[205])) * xx[569];
  xx[792] = xx[290] * xx[463] + xx[771] * xx[171] + xx[263] * xx[176] + xx[173] *
    xx[761] + xx[554] * xx[172] + xx[186] * xx[174] + xx[250] * xx[760] + xx[312]
    * xx[762] + xx[1465] * xx[242];
  xx[1449] = xx[953] * xx[239] + xx[1008] * xx[324] + xx[1042] * xx[547] + xx
    [1077] * xx[562] + xx[996] * xx[322] + xx[997] * xx[323] + xx[1009] * xx[331]
    + xx[281] * xx[332] + xx[288] * xx[334] + xx[929] * xx[320] - xx[236] * xx
    [333] - xx[998] * xx[335] - xx[1001] * xx[336];
  xx[1463] = xx[953] * xx[651] + xx[1008] * xx[1096] + xx[1042] * xx[1097] + xx
    [1077] * xx[1124] + xx[996] * xx[790] + xx[997] * xx[1088] + xx[1009] * xx
    [1089] + xx[281] * xx[1090] + xx[1160] * xx[288];
  xx[1464] = xx[953] * xx[1095] + xx[1008] * xx[1175] + xx[1042] * xx[1176] +
    xx[1077] * xx[1179] + xx[996] * xx[1167] + xx[997] * xx[1168] + xx[1009] *
    xx[1169] + xx[281] * xx[1170] + xx[1182] * xx[288];
  xx[1467] = xx[953] * xx[910] + xx[1008] * xx[1082] + xx[1042] * xx[1102] + xx
    [1077] * xx[1108] + xx[996] * xx[1080] + xx[997] * xx[1081] + xx[1009] * xx
    [1092] + xx[281] * xx[1093] + xx[1114] * xx[288];
  xx[1470] = xx[953] * xx[1131] + xx[1008] * xx[1234] + xx[1042] * xx[1235] +
    xx[1077] * xx[1258] + xx[996] * xx[1136] + xx[997] * xx[1223] + xx[1009] *
    xx[1224] + xx[281] * xx[1225] + xx[1294] * xx[288];
  xx[1472] = xx[953] * xx[1199] + xx[1008] * xx[1301] + xx[1042] * xx[1310] +
    xx[1077] * xx[1313] + xx[996] * xx[1299] + xx[997] * xx[1300] + xx[1009] *
    xx[1303] + xx[281] * xx[1304] + xx[1316] * xx[288];
  xx[1473] = xx[953] * xx[1180] + xx[1008] * xx[1205] + xx[1042] * xx[1231] +
    xx[1077] * xx[1242] + xx[996] * xx[1203] + xx[997] * xx[1204] + xx[1009] *
    xx[1227] + xx[281] * xx[1228] + xx[1248] * xx[288];
  xx[1474] = xx[953] * xx[1265] + xx[1008] * xx[1369] + xx[1042] * xx[1370] +
    xx[1077] * xx[1393] + xx[996] * xx[1270] + xx[997] * xx[1358] + xx[1009] *
    xx[1359] + xx[281] * xx[1360] + xx[1429] * xx[288];
  xx[1484] = xx[953] * xx[1333] + xx[1008] * xx[1436] + xx[1042] * xx[1445] +
    xx[1077] * xx[1448] + xx[996] * xx[1434] + xx[997] * xx[1435] + xx[1009] *
    xx[1438] + xx[281] * xx[1439] + xx[1451] * xx[288];
  xx[1485] = xx[953] * xx[1314] + xx[1008] * xx[1339] + xx[1042] * xx[1366] +
    xx[1077] * xx[1377] + xx[996] * xx[1337] + xx[997] * xx[1338] + xx[1009] *
    xx[1362] + xx[281] * xx[1363] + xx[1383] * xx[288];
  xx[1486] = xx[953] * xx[183] + xx[1008] * xx[763] + xx[1042] * xx[805] + xx
    [1077] * xx[807] + xx[996] * xx[251] + xx[997] * xx[550] + xx[1009] * xx
    [1416] + xx[281] * xx[1475] + xx[1479] * xx[288];
  xx[1494] = xx[953] * xx[460] + xx[1008] * xx[1535] + xx[1042] * xx[1536] + xx
    [1077] * xx[1538] + xx[996] * xx[1505] + xx[997] * xx[1528] + xx[1009] * xx
    [1529] + xx[281] * xx[1530] + xx[1541] * xx[288];
  xx[1495] = xx[953] * xx[463] + xx[1008] * xx[171] + xx[1042] * xx[176] + xx
    [1077] * xx[761] + xx[996] * xx[172] + xx[997] * xx[174] + xx[1009] * xx[760]
    + xx[281] * xx[762] + xx[1465] * xx[288];
  xx[1496] = xx[225] * xx[651] + xx[294] * xx[1096] + xx[548] * xx[1097] + xx
    [549] * xx[1124] + xx[283] * xx[790] + xx[289] * xx[1088] + xx[295] * xx
    [1089] + xx[226] * xx[1090] + xx[1160] * xx[227];
  xx[1160] = xx[225] * xx[1095] + xx[294] * xx[1175] + xx[548] * xx[1176] + xx
    [549] * xx[1179] + xx[283] * xx[1167] + xx[289] * xx[1168] + xx[295] * xx
    [1169] + xx[226] * xx[1170] + xx[1182] * xx[227];
  xx[1182] = xx[225] * xx[910] + xx[294] * xx[1082] + xx[548] * xx[1102] + xx
    [549] * xx[1108] + xx[283] * xx[1080] + xx[289] * xx[1081] + xx[295] * xx
    [1092] + xx[226] * xx[1093] + xx[1114] * xx[227];
  xx[1114] = xx[225] * xx[1131] + xx[294] * xx[1234] + xx[548] * xx[1235] + xx
    [549] * xx[1258] + xx[283] * xx[1136] + xx[289] * xx[1223] + xx[295] * xx
    [1224] + xx[226] * xx[1225] + xx[1294] * xx[227];
  xx[1294] = xx[225] * xx[1199] + xx[294] * xx[1301] + xx[548] * xx[1310] + xx
    [549] * xx[1313] + xx[283] * xx[1299] + xx[289] * xx[1300] + xx[295] * xx
    [1303] + xx[226] * xx[1304] + xx[227] * xx[1316];
  xx[1316] = xx[225] * xx[1180] + xx[294] * xx[1205] + xx[548] * xx[1231] + xx
    [549] * xx[1242] + xx[283] * xx[1203] + xx[289] * xx[1204] + xx[295] * xx
    [1227] + xx[226] * xx[1228] + xx[227] * xx[1248];
  xx[1248] = xx[225] * xx[1265] + xx[294] * xx[1369] + xx[548] * xx[1370] + xx
    [549] * xx[1393] + xx[283] * xx[1270] + xx[289] * xx[1358] + xx[295] * xx
    [1359] + xx[226] * xx[1360] + xx[1429] * xx[227];
  xx[1429] = xx[225] * xx[1333] + xx[294] * xx[1436] + xx[548] * xx[1445] + xx
    [549] * xx[1448] + xx[283] * xx[1434] + xx[289] * xx[1435] + xx[295] * xx
    [1438] + xx[226] * xx[1439] + xx[227] * xx[1451];
  xx[1451] = xx[225] * xx[1314] + xx[294] * xx[1339] + xx[548] * xx[1366] + xx
    [549] * xx[1377] + xx[283] * xx[1337] + xx[289] * xx[1338] + xx[295] * xx
    [1362] + xx[226] * xx[1363] + xx[227] * xx[1383];
  xx[1383] = xx[225] * xx[183] + xx[294] * xx[763] + xx[548] * xx[805] + xx[549]
    * xx[807] + xx[283] * xx[251] + xx[289] * xx[550] + xx[295] * xx[1416] + xx
    [226] * xx[1475] + xx[1479] * xx[227];
  xx[1479] = xx[225] * xx[460] + xx[294] * xx[1535] + xx[548] * xx[1536] + xx
    [549] * xx[1538] + xx[283] * xx[1505] + xx[289] * xx[1528] + xx[295] * xx
    [1529] + xx[226] * xx[1530] + xx[1541] * xx[227];
  xx[1499] = xx[225] * xx[463] + xx[294] * xx[171] + xx[548] * xx[176] + xx[549]
    * xx[761] + xx[283] * xx[172] + xx[289] * xx[174] + xx[295] * xx[760] + xx
    [226] * xx[762] + xx[1465] * xx[227];
  pm_math_quatInverseXform(xx + 615, xx + 1132, xx + 1500);
  pm_math_cross3(xx + 1132, xx + 626, xx + 1506);
  xx[1132] = xx[1085] + xx[1506];
  xx[1133] = xx[1138] + xx[1507];
  xx[1134] = xx[1087] + xx[1508];
  pm_math_quatInverseXform(xx + 615, xx + 1132, xx + 1506);
  xx[1085] = xx[1] * input[11];
  xx[1087] = sin(xx[1085]);
  xx[1132] = cos(xx[1085]);
  xx[1085] = xx[148] * xx[1087] - xx[154] * xx[1132];
  xx[1133] = xx[1] * state[37];
  xx[1134] = cos(xx[1133]);
  xx[1138] = xx[1085] * xx[1134];
  xx[1465] = sin(xx[1133]);
  xx[1133] = xx[148] * xx[1132] + xx[154] * xx[1087];
  xx[148] = xx[1465] * xx[1133];
  xx[154] = xx[161] * xx[1132] + xx[162] * xx[1087];
  xx[1500] = xx[161] * xx[1087] - xx[162] * xx[1132];
  xx[161] = xx[1134] * xx[154] + xx[1500] * xx[1465];
  xx[162] = - xx[161];
  xx[1087] = xx[1465] * xx[154] - xx[1500] * xx[1134];
  xx[1132] = xx[1085] * xx[1465] + xx[1134] * xx[1133];
  xx[1508] = xx[1138] - xx[148];
  xx[1509] = xx[162];
  xx[1510] = xx[1087];
  xx[1511] = xx[1132];
  xx[1501] = xx[53] * state[42] - xx[54] * state[39];
  xx[1503] = xx[53] * state[41] + xx[54] * state[40];
  xx[1504] = - xx[1503];
  xx[1516] = xx[54] * state[41] - xx[53] * state[40];
  xx[1517] = - xx[1516];
  xx[1518] = xx[53] * state[39] + xx[54] * state[42];
  xx[1519] = - xx[1518];
  xx[1520] = xx[1501];
  xx[1521] = xx[1504];
  xx[1522] = xx[1517];
  xx[1523] = xx[1519];
  pm_math_quatCompose(xx + 1508, xx + 1520, xx + 1524);
  xx[1508] = xx[1516] * xx[1501];
  xx[1509] = xx[1518] * xx[1503];
  xx[1510] = xx[1516] * xx[1518];
  xx[1511] = xx[1501] * xx[1503];
  xx[1534] = xx[19] * (xx[1510] - xx[1511]);
  xx[1539] = xx[1503] * xx[1503];
  xx[1540] = xx[1516] * xx[1516];
  xx[1543] = (xx[1508] + xx[1509]) * xx[19];
  xx[1544] = xx[1534];
  xx[1545] = xx[21] - (xx[1539] + xx[1540]) * xx[19];
  pm_math_cross3(xx + 1543, xx + 897, xx + 1546);
  pm_math_quatXform(xx + 1524, xx + 1546, xx + 1543);
  pm_math_quatXform(xx + 1520, xx + 69, xx + 1524);
  xx[1527] = xx[1525] * xx[1465] - xx[1134] * xx[1524];
  xx[1541] = 9.27756931389703e-12;
  xx[1546] = 5.443558296964576e-12;
  xx[1547] = xx[1541] * xx[1134] + xx[1546] * xx[1465];
  xx[1548] = xx[19] * xx[1547] * xx[1465];
  xx[1549] = xx[19] * xx[1465] * xx[1527] - (xx[1525] + xx[1548]) + xx[1546];
  xx[1550] = xx[1085];
  xx[1551] = xx[1133];
  xx[1552] = xx[1500];
  xx[1553] = xx[19] * xx[1547] * xx[1134];
  xx[1547] = xx[1524] + xx[19] * xx[1134] * xx[1527] - xx[1553] + xx[1541];
  xx[1527] = xx[1500] * xx[1547];
  xx[1554] = xx[1500] * xx[1549];
  xx[1555] = xx[1547] * xx[1085] - xx[1549] * xx[1133];
  xx[1556] = - xx[1527];
  xx[1557] = xx[1554];
  xx[1558] = xx[1555];
  pm_math_cross3(xx + 1550, xx + 1556, xx + 1559);
  xx[1556] = xx[1543] + xx[1549] + xx[19] * (xx[1559] - xx[1527] * xx[154]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_12/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 1562, xx + 91, 9 * sizeof(double));
  xx[1527] = xx[148] - xx[1138];
  xx[1571] = - xx[1527];
  xx[1572] = xx[162];
  xx[1573] = xx[1087];
  xx[1574] = xx[1132];
  pm_math_quatCompose(xx + 1571, xx + 1520, xx + 1575);
  pm_math_quatXform(xx + 1575, xx + 141, xx + 1579);
  pm_math_quatXform(xx + 1520, xx + 111, xx + 1582);
  pm_math_quatXform(xx + 1571, xx + 1582, xx + 1585);
  xx[148] = xx[1579] + xx[1585];
  pm_math_quatXform(xx + 1575, xx + 933, xx + 1582);
  pm_math_quatXform(xx + 1520, xx + 753, xx + 1588);
  pm_math_quatXform(xx + 1571, xx + 1588, xx + 1591);
  xx[162] = xx[1582] + xx[1591];
  xx[1138] = xx[249] * xx[1578];
  xx[1549] = xx[249] * xx[1576] + xx[271] * xx[1577];
  xx[1588] = - xx[1138];
  xx[1589] = - (xx[271] * xx[1578]);
  xx[1590] = xx[1549];
  pm_math_cross3(xx + 1576, xx + 1588, xx + 1594);
  xx[1588] = xx[1504];
  xx[1589] = xx[1517];
  xx[1590] = xx[1519];
  xx[1504] = xx[67] * xx[1518];
  xx[1517] = xx[68] * xx[1518];
  xx[1519] = xx[67] * xx[1503] + xx[1516] * xx[68];
  xx[1597] = xx[1504];
  xx[1598] = xx[1517];
  xx[1599] = - xx[1519];
  pm_math_cross3(xx + 1588, xx + 1597, xx + 1600);
  xx[1597] = xx[19] * (xx[1600] + xx[1504] * xx[1501]) - xx[68];
  xx[1598] = xx[67] + (xx[1517] * xx[1501] + xx[1601]) * xx[19];
  xx[1599] = (xx[1602] - xx[1519] * xx[1501]) * xx[19];
  pm_math_quatXform(xx + 1571, xx + 1597, xx + 1600);
  xx[1504] = xx[19] * (xx[1594] - xx[1575] * xx[1138]) + xx[1600] - xx[271];
  xx[1597] = - xx[148];
  xx[1598] = - xx[162];
  xx[1599] = - xx[1504];
  solveSymmetricPosDef(xx + 1562, xx + 1597, 3, 1, xx + 1603, xx + 1606);
  xx[1597] = xx[78] * xx[1603] + xx[140] * xx[1604];
  xx[1598] = xx[79] * xx[1604] - xx[713] * xx[1603];
  xx[1599] = xx[80] * xx[1605];
  pm_math_quatXform(xx + 1520, xx + 1597, xx + 1606);
  xx[1597] = xx[731] * xx[1603] - xx[806] * xx[1604] - xx[870] * xx[1605];
  xx[1598] = xx[806] * xx[1603] + xx[731] * xx[1604] + xx[908] * xx[1605];
  xx[1599] = xx[909] * xx[1603] + xx[927] * xx[1604];
  pm_math_quatXform(xx + 1520, xx + 1597, xx + 1609);
  pm_math_cross3(xx + 1524, xx + 1609, xx + 1597);
  xx[1138] = xx[1501] * xx[1501];
  xx[1517] = (xx[1138] + xx[1539]) * xx[19] - xx[21];
  xx[1519] = xx[1516] * xx[1503];
  xx[1539] = xx[1518] * xx[1501];
  xx[1557] = (xx[1519] + xx[1539]) * xx[19];
  xx[1558] = xx[19] * (xx[1509] - xx[1508]);
  xx[1576] = xx[19] * (xx[1519] - xx[1539]);
  xx[1519] = (xx[1138] + xx[1540]) * xx[19] - xx[21];
  xx[1539] = (xx[1510] + xx[1511]) * xx[19];
  xx[1510] = (xx[1509] + xx[1508]) * xx[19];
  xx[1508] = (xx[1138] + xx[1518] * xx[1518]) * xx[19] - xx[21];
  xx[1611] = xx[1517];
  xx[1612] = xx[1557];
  xx[1613] = xx[1558];
  xx[1614] = xx[1576];
  xx[1615] = xx[1519];
  xx[1616] = xx[1539];
  xx[1617] = xx[1510];
  xx[1618] = xx[1534];
  xx[1619] = xx[1508];
  solveSymmetricPosDef(xx + 1562, xx + 975, 3, 6, xx + 1620, xx + 1638);
  xx[1138] = - (xx[79] * xx[1621] - xx[713] * xx[1620]);
  xx[1509] = - (xx[80] * xx[1622]);
  xx[1511] = - (xx[80] * xx[1625]);
  xx[1638] = xx[78] - (xx[78] * xx[1620] + xx[140] * xx[1621]);
  xx[1639] = xx[1138];
  xx[1640] = xx[1509];
  xx[1641] = xx[1138];
  xx[1642] = xx[79] - (xx[79] * xx[1624] - xx[713] * xx[1623]);
  xx[1643] = xx[1511];
  xx[1644] = xx[1509];
  xx[1645] = xx[1511];
  xx[1646] = xx[80] - xx[80] * xx[1628];
  pm_math_matrix3x3ComposeTranspose(xx + 1638, xx + 1611, xx + 1647);
  pm_math_matrix3x3Compose(xx + 1611, xx + 1647, xx + 1638);
  xx[1647] = - (xx[78] * xx[1629] + xx[140] * xx[1630]);
  xx[1648] = - (xx[78] * xx[1632] + xx[140] * xx[1633]);
  xx[1649] = - (xx[78] * xx[1635] + xx[140] * xx[1636]);
  xx[1650] = - (xx[79] * xx[1630] - xx[713] * xx[1629]);
  xx[1651] = - (xx[79] * xx[1633] - xx[713] * xx[1632]);
  xx[1652] = - (xx[79] * xx[1636] - xx[713] * xx[1635]);
  xx[1653] = - (xx[80] * xx[1631]);
  xx[1654] = - (xx[80] * xx[1634]);
  xx[1655] = - (xx[80] * xx[1637]);
  pm_math_matrix3x3ComposeTranspose(xx + 1647, xx + 1611, xx + 1656);
  pm_math_matrix3x3Compose(xx + 1611, xx + 1656, xx + 1647);
  pm_math_matrix3x3PostCross(xx + 1647, xx + 1524, xx + 1656);
  xx[1138] = - (xx[806] * xx[1629] + xx[731] * xx[1630] + xx[908] * xx[1631]);
  xx[1509] = - (xx[909] * xx[1629] + xx[927] * xx[1630]);
  xx[1511] = - (xx[909] * xx[1632] + xx[927] * xx[1633]);
  xx[1665] = xx[73] - (xx[731] * xx[1629] - xx[806] * xx[1630] - xx[870] * xx
                       [1631]);
  xx[1666] = xx[1138];
  xx[1667] = xx[1509];
  xx[1668] = xx[1138];
  xx[1669] = xx[73] - (xx[806] * xx[1632] + xx[731] * xx[1633] + xx[908] * xx
                       [1634]);
  xx[1670] = xx[1511];
  xx[1671] = xx[1509];
  xx[1672] = xx[1511];
  xx[1673] = xx[73] - (xx[909] * xx[1635] + xx[927] * xx[1636]);
  pm_math_matrix3x3ComposeTranspose(xx + 1665, xx + 1611, xx + 1674);
  pm_math_matrix3x3Compose(xx + 1611, xx + 1674, xx + 1665);
  pm_math_matrix3x3PostCross(xx + 1665, xx + 1524, xx + 1611);
  pm_math_matrix3x3PreCross(xx + 1611, xx + 1524, xx + 1674);
  xx[1138] = xx[1653] - xx[1613];
  xx[1509] = xx[1654] - xx[1616];
  xx[1511] = xx[1646] - xx[1664] - xx[1664] - xx[1682] + xx[1546] * xx[1138] +
    xx[1541] * xx[1509] + xx[52];
  xx[1540] = xx[393] + xx[1665];
  xx[1577] = xx[1138] + xx[1540] * xx[1546] + xx[1541] * xx[1666];
  xx[1597] = xx[393] + xx[1669];
  xx[1598] = xx[1509] + xx[1546] * xx[1668] + xx[1597] * xx[1541];
  xx[1606] = xx[1511] + xx[1577] * xx[1546] + xx[1598] * xx[1541];
  ii[1] = factorSymmetricPosDef(xx + 1606, 1, xx + 1607);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1607] = (xx[1608] + xx[1599] + xx[1546] * xx[1609] + xx[1541] * xx[1610] +
              xx[1556]) / xx[1606];
  xx[1608] = xx[1620];
  xx[1609] = xx[1623];
  xx[1610] = xx[1626];
  xx[1599] = xx[1516] * xx[1607];
  xx[1613] = xx[1607] * xx[1503];
  xx[1683] = - ((xx[1599] * xx[1501] + xx[1613] * xx[1518]) * xx[19]);
  xx[1684] = xx[19] * (xx[1613] * xx[1501] - xx[1599] * xx[1518]);
  xx[1685] = (xx[1613] * xx[1503] + xx[1516] * xx[1599]) * xx[19] - xx[1607];
  xx[1686] = xx[1629];
  xx[1687] = xx[1632];
  xx[1688] = xx[1635];
  xx[1599] = xx[1607] * xx[1525] - xx[1546] * xx[1607];
  xx[1613] = xx[1541] * xx[1607] + xx[1607] * xx[1524];
  xx[1616] = xx[1613] * xx[1518];
  xx[1653] = xx[1518] * xx[1599];
  xx[1654] = xx[1516] * xx[1599] + xx[1613] * xx[1503];
  xx[1689] = - xx[1616];
  xx[1690] = - xx[1653];
  xx[1691] = xx[1654];
  pm_math_cross3(xx + 1588, xx + 1689, xx + 1692);
  xx[1689] = xx[1599] + xx[19] * (xx[1692] + xx[1616] * xx[1501]);
  xx[1690] = xx[19] * (xx[1693] + xx[1653] * xx[1501]) - xx[1613];
  xx[1691] = xx[19] * (xx[1694] - xx[1501] * xx[1654]);
  xx[1692] = xx[1621];
  xx[1693] = xx[1624];
  xx[1694] = xx[1627];
  xx[1695] = xx[1630];
  xx[1696] = xx[1633];
  xx[1697] = xx[1636];
  xx[1698] = xx[1622];
  xx[1699] = xx[1625];
  xx[1700] = xx[1628];
  xx[1620] = xx[1631];
  xx[1621] = xx[1634];
  xx[1622] = xx[1637];
  pm_math_quatInverseXform(xx + 615, xx + 1171, xx + 1623);
  pm_math_cross3(xx + 1171, xx + 626, xx + 1626);
  xx[1171] = xx[1164] + xx[1626];
  xx[1172] = xx[1183] + xx[1627];
  xx[1173] = xx[1166] + xx[1628];
  pm_math_quatInverseXform(xx + 615, xx + 1171, xx + 1626);
  xx[1164] = xx[906] - (xx[479] * xx[1625] + xx[583] * xx[1627] - xx[586] * xx
                        [1626]);
  xx[906] = xx[1580] + xx[1586];
  xx[1166] = xx[1583] + xx[1592];
  xx[1171] = (xx[1595] - xx[271] * xx[1575] * xx[1578]) * xx[19] + xx[1601] +
    xx[249];
  xx[1623] = - xx[906];
  xx[1624] = - xx[1166];
  xx[1625] = - xx[1171];
  solveSymmetricPosDef(xx + 1562, xx + 1623, 3, 1, xx + 1626, xx + 1629);
  xx[1623] = xx[78] * xx[1626] + xx[140] * xx[1627];
  xx[1624] = xx[79] * xx[1627] - xx[713] * xx[1626];
  xx[1625] = xx[80] * xx[1628];
  pm_math_quatXform(xx + 1520, xx + 1623, xx + 1629);
  xx[1623] = xx[731] * xx[1626] - xx[806] * xx[1627] - xx[870] * xx[1628];
  xx[1624] = xx[806] * xx[1626] + xx[731] * xx[1627] + xx[908] * xx[1628];
  xx[1625] = xx[909] * xx[1626] + xx[927] * xx[1627];
  pm_math_quatXform(xx + 1520, xx + 1623, xx + 1632);
  pm_math_cross3(xx + 1524, xx + 1632, xx + 1623);
  xx[1172] = xx[1544] + xx[1547] + (xx[1554] * xx[154] + xx[1560]) * xx[19];
  xx[1173] = (xx[1631] + xx[1625] + xx[1546] * xx[1632] + xx[1541] * xx[1633] +
              xx[1172]) / xx[1606];
  xx[1183] = xx[1516] * xx[1173];
  xx[1547] = xx[1173] * xx[1503];
  xx[1623] = - ((xx[1183] * xx[1501] + xx[1547] * xx[1518]) * xx[19]);
  xx[1624] = xx[19] * (xx[1547] * xx[1501] - xx[1183] * xx[1518]);
  xx[1625] = (xx[1547] * xx[1503] + xx[1516] * xx[1183]) * xx[19] - xx[1173];
  xx[1183] = xx[1173] * xx[1525] - xx[1546] * xx[1173];
  xx[1547] = xx[1541] * xx[1173] + xx[1173] * xx[1524];
  xx[1554] = xx[1547] * xx[1518];
  xx[1578] = xx[1518] * xx[1183];
  xx[1599] = xx[1516] * xx[1183] + xx[1547] * xx[1503];
  xx[1629] = - xx[1554];
  xx[1630] = - xx[1578];
  xx[1631] = xx[1599];
  pm_math_cross3(xx + 1588, xx + 1629, xx + 1632);
  xx[1629] = xx[1183] + xx[19] * (xx[1632] + xx[1554] * xx[1501]);
  xx[1630] = xx[19] * (xx[1633] + xx[1578] * xx[1501]) - xx[1547];
  xx[1631] = xx[19] * (xx[1634] - xx[1501] * xx[1599]);
  xx[1183] = xx[1626] - (pm_math_dot3(xx + 1608, xx + 1623) + pm_math_dot3(xx +
    1686, xx + 1629));
  xx[1547] = xx[1627] - (pm_math_dot3(xx + 1692, xx + 1623) + pm_math_dot3(xx +
    1695, xx + 1629));
  xx[1554] = xx[1628] - (pm_math_dot3(xx + 1698, xx + 1623) + pm_math_dot3(xx +
    1620, xx + 1629));
  xx[1578] = xx[911] * xx[1095] + xx[1111] * xx[1175] + xx[802] * xx[1176] + xx
    [789] * xx[1179] + xx[1115] * xx[1167] + xx[700] * xx[1168] + xx[650] * xx
    [1169] + xx[944] * xx[1170] + xx[912] * xx[1164] + xx[1556] * xx[1173] - xx
    [148] * xx[1183] - xx[162] * xx[1547] - xx[1504] * xx[1554];
  pm_math_quatInverseXform(xx + 615, xx + 1099, xx + 1623);
  pm_math_cross3(xx + 1099, xx + 626, xx + 1626);
  xx[1099] = xx[940] + xx[1626];
  xx[1100] = xx[1109] + xx[1627];
  xx[1101] = xx[942] + xx[1628];
  pm_math_quatInverseXform(xx + 615, xx + 1099, xx + 1626);
  xx[940] = xx[752] - (xx[479] * xx[1625] + xx[583] * xx[1627] - xx[586] * xx
                       [1626]);
  xx[752] = xx[1581] + xx[1587];
  xx[942] = xx[1584] + xx[1593];
  xx[1099] = (xx[1575] * xx[1549] + xx[1596]) * xx[19] + xx[1602];
  xx[1579] = - xx[752];
  xx[1580] = - xx[942];
  xx[1581] = - xx[1099];
  solveSymmetricPosDef(xx + 1562, xx + 1579, 3, 1, xx + 1582, xx + 1585);
  xx[1579] = xx[78] * xx[1582] + xx[140] * xx[1583];
  xx[1580] = xx[79] * xx[1583] - xx[713] * xx[1582];
  xx[1581] = xx[80] * xx[1584];
  pm_math_quatXform(xx + 1520, xx + 1579, xx + 1585);
  xx[1579] = xx[731] * xx[1582] - xx[806] * xx[1583] - xx[870] * xx[1584];
  xx[1580] = xx[806] * xx[1582] + xx[731] * xx[1583] + xx[908] * xx[1584];
  xx[1581] = xx[909] * xx[1582] + xx[927] * xx[1583];
  pm_math_quatXform(xx + 1520, xx + 1579, xx + 1591);
  pm_math_cross3(xx + 1524, xx + 1591, xx + 1579);
  xx[1100] = xx[1545] + (xx[154] * xx[1555] + xx[1561]) * xx[19];
  xx[1101] = (xx[1587] + xx[1581] + xx[1546] * xx[1591] + xx[1541] * xx[1592] +
              xx[1100]) / xx[1606];
  xx[1109] = xx[1516] * xx[1101];
  xx[1543] = xx[1101] * xx[1503];
  xx[1559] = - ((xx[1109] * xx[1501] + xx[1543] * xx[1518]) * xx[19]);
  xx[1560] = xx[19] * (xx[1543] * xx[1501] - xx[1109] * xx[1518]);
  xx[1561] = (xx[1543] * xx[1503] + xx[1516] * xx[1109]) * xx[19] - xx[1101];
  xx[1109] = xx[1101] * xx[1525] - xx[1546] * xx[1101];
  xx[1543] = xx[1541] * xx[1101] + xx[1101] * xx[1524];
  xx[1544] = xx[1543] * xx[1518];
  xx[1545] = xx[1518] * xx[1109];
  xx[1549] = xx[1516] * xx[1109] + xx[1543] * xx[1503];
  xx[1579] = - xx[1544];
  xx[1580] = - xx[1545];
  xx[1581] = xx[1549];
  pm_math_cross3(xx + 1588, xx + 1579, xx + 1585);
  xx[1579] = xx[1109] + xx[19] * (xx[1585] + xx[1544] * xx[1501]);
  xx[1580] = xx[19] * (xx[1586] + xx[1545] * xx[1501]) - xx[1543];
  xx[1581] = xx[19] * (xx[1587] - xx[1501] * xx[1549]);
  xx[1109] = xx[1582] - (pm_math_dot3(xx + 1608, xx + 1559) + pm_math_dot3(xx +
    1686, xx + 1579));
  xx[1543] = xx[1583] - (pm_math_dot3(xx + 1692, xx + 1559) + pm_math_dot3(xx +
    1695, xx + 1579));
  xx[1544] = xx[1584] - (pm_math_dot3(xx + 1698, xx + 1559) + pm_math_dot3(xx +
    1620, xx + 1579));
  xx[1545] = xx[911] * xx[910] + xx[1111] * xx[1082] + xx[802] * xx[1102] + xx
    [789] * xx[1108] + xx[1115] * xx[1080] + xx[700] * xx[1081] + xx[650] * xx
    [1092] + xx[944] * xx[1093] + xx[912] * xx[940] + xx[1556] * xx[1101] - xx
    [148] * xx[1109] - xx[162] * xx[1543] - xx[1504] * xx[1544];
  pm_math_quatInverseXform(xx + 615, xx + 1266, xx + 1559);
  pm_math_cross3(xx + 1266, xx + 626, xx + 1579);
  xx[1582] = xx[1220] + xx[1579];
  xx[1583] = xx[1272] + xx[1580];
  xx[1584] = xx[1222] + xx[1581];
  pm_math_quatInverseXform(xx + 615, xx + 1582, xx + 1579);
  xx[1549] = xx[479] * xx[1561] + xx[583] * xx[1580] - xx[586] * xx[1579];
  xx[1555] = xx[911] * xx[1131] + xx[1111] * xx[1234] + xx[802] * xx[1235] + xx
    [789] * xx[1258] + xx[1115] * xx[1136] + xx[700] * xx[1223] + xx[650] * xx
    [1224] + xx[944] * xx[1225] - xx[912] * xx[1549];
  pm_math_quatInverseXform(xx + 615, xx + 1307, xx + 1559);
  pm_math_cross3(xx + 1307, xx + 626, xx + 1579);
  xx[1582] = xx[1295] + xx[1579];
  xx[1583] = xx[1317] + xx[1580];
  xx[1584] = xx[1297] + xx[1581];
  pm_math_quatInverseXform(xx + 615, xx + 1582, xx + 1579);
  xx[1559] = xx[479] * xx[1561] + xx[583] * xx[1580] - xx[586] * xx[1579];
  xx[1560] = xx[911] * xx[1199] + xx[1111] * xx[1301] + xx[802] * xx[1310] + xx
    [789] * xx[1313] + xx[1115] * xx[1299] + xx[700] * xx[1300] + xx[650] * xx
    [1303] + xx[944] * xx[1304] - xx[912] * xx[1559];
  pm_math_quatInverseXform(xx + 615, xx + 1236, xx + 1579);
  pm_math_cross3(xx + 1236, xx + 626, xx + 1582);
  xx[1585] = xx[1194] + xx[1582];
  xx[1586] = xx[1243] + xx[1583];
  xx[1587] = xx[1196] + xx[1584];
  pm_math_quatInverseXform(xx + 615, xx + 1585, xx + 1582);
  xx[1561] = xx[479] * xx[1581] + xx[583] * xx[1583] - xx[586] * xx[1582];
  xx[1575] = xx[911] * xx[1180] + xx[1111] * xx[1205] + xx[802] * xx[1231] + xx
    [789] * xx[1242] + xx[1115] * xx[1203] + xx[700] * xx[1204] + xx[650] * xx
    [1227] + xx[944] * xx[1228] - xx[912] * xx[1561];
  pm_math_quatInverseXform(xx + 615, xx + 1401, xx + 1579);
  pm_math_cross3(xx + 1401, xx + 626, xx + 1582);
  xx[1585] = xx[1355] + xx[1582];
  xx[1586] = xx[1407] + xx[1583];
  xx[1587] = xx[1357] + xx[1584];
  pm_math_quatInverseXform(xx + 615, xx + 1585, xx + 1582);
  xx[1579] = xx[479] * xx[1581] + xx[583] * xx[1583] - xx[586] * xx[1582];
  xx[1580] = xx[911] * xx[1265] + xx[1111] * xx[1369] + xx[802] * xx[1370] + xx
    [789] * xx[1393] + xx[1115] * xx[1270] + xx[700] * xx[1358] + xx[650] * xx
    [1359] + xx[944] * xx[1360] - xx[912] * xx[1579];
  pm_math_quatInverseXform(xx + 615, xx + 1442, xx + 1581);
  pm_math_cross3(xx + 1442, xx + 626, xx + 1584);
  xx[1587] = xx[1430] + xx[1584];
  xx[1588] = xx[1452] + xx[1585];
  xx[1589] = xx[1432] + xx[1586];
  pm_math_quatInverseXform(xx + 615, xx + 1587, xx + 1584);
  xx[1581] = xx[479] * xx[1583] + xx[583] * xx[1585] - xx[586] * xx[1584];
  xx[1582] = xx[911] * xx[1333] + xx[1111] * xx[1436] + xx[802] * xx[1445] + xx
    [789] * xx[1448] + xx[1115] * xx[1434] + xx[700] * xx[1435] + xx[650] * xx
    [1438] + xx[944] * xx[1439] - xx[912] * xx[1581];
  pm_math_quatInverseXform(xx + 615, xx + 1371, xx + 1583);
  pm_math_cross3(xx + 1371, xx + 626, xx + 1586);
  xx[1589] = xx[1328] + xx[1586];
  xx[1590] = xx[1378] + xx[1587];
  xx[1591] = xx[1330] + xx[1588];
  pm_math_quatInverseXform(xx + 615, xx + 1589, xx + 1586);
  xx[1583] = xx[479] * xx[1585] + xx[583] * xx[1587] - xx[586] * xx[1586];
  xx[1584] = xx[911] * xx[1314] + xx[1111] * xx[1339] + xx[802] * xx[1366] + xx
    [789] * xx[1377] + xx[1115] * xx[1337] + xx[700] * xx[1338] + xx[650] * xx
    [1362] + xx[944] * xx[1363] - xx[912] * xx[1583];
  pm_math_quatInverseXform(xx + 615, xx + 1481, xx + 1585);
  pm_math_cross3(xx + 1481, xx + 626, xx + 1588);
  xx[1591] = xx[1478] + xx[1588];
  xx[1592] = xx[1477] + xx[1589];
  xx[1593] = xx[1480] + xx[1590];
  pm_math_quatInverseXform(xx + 615, xx + 1591, xx + 1588);
  xx[1585] = xx[479] * xx[1587] + xx[583] * xx[1589] - xx[586] * xx[1588];
  xx[1586] = xx[911] * xx[183] + xx[1111] * xx[763] + xx[802] * xx[805] + xx[789]
    * xx[807] + xx[1115] * xx[251] + xx[700] * xx[550] + xx[650] * xx[1416] +
    xx[944] * xx[1475] - xx[912] * xx[1585];
  pm_math_quatInverseXform(xx + 615, xx + 1531, xx + 1587);
  pm_math_cross3(xx + 1531, xx + 626, xx + 1590);
  xx[1593] = xx[1512] + xx[1590];
  xx[1594] = xx[1542] + xx[1591];
  xx[1595] = xx[1514] + xx[1592];
  pm_math_quatInverseXform(xx + 615, xx + 1593, xx + 1590);
  xx[1587] = xx[479] * xx[1589] + xx[583] * xx[1591] - xx[586] * xx[1590];
  xx[1588] = xx[911] * xx[460] + xx[1111] * xx[1535] + xx[802] * xx[1536] + xx
    [789] * xx[1538] + xx[1115] * xx[1505] + xx[700] * xx[1528] + xx[650] * xx
    [1529] + xx[944] * xx[1530] - xx[912] * xx[1587];
  pm_math_quatInverseXform(xx + 615, xx + 1460, xx + 1589);
  pm_math_cross3(xx + 1460, xx + 626, xx + 1592);
  xx[1599] = xx[1466] + xx[1592];
  xx[1600] = xx[793] + xx[1593];
  xx[1601] = xx[1468] + xx[1594];
  pm_math_quatInverseXform(xx + 615, xx + 1599, xx + 1592);
  xx[1589] = xx[479] * xx[1591] + xx[583] * xx[1593] - xx[586] * xx[1592];
  xx[1590] = xx[911] * xx[463] + xx[1111] * xx[171] + xx[802] * xx[176] + xx[789]
    * xx[761] + xx[1115] * xx[172] + xx[700] * xx[174] + xx[650] * xx[760] + xx
    [944] * xx[762] - xx[912] * xx[1589];
  xx[1591] = xx[1086] * xx[910] + xx[1161] * xx[1082] + xx[1177] * xx[1102] +
    xx[1178] * xx[1108] + xx[1158] * xx[1080] + xx[1159] * xx[1081] + xx[1162] *
    xx[1092] + xx[1163] * xx[1093] + xx[840] * xx[940] + xx[1172] * xx[1101] -
    xx[906] * xx[1109] - xx[1166] * xx[1543] - xx[1171] * xx[1544];
  xx[1592] = xx[1086] * xx[1131] + xx[1161] * xx[1234] + xx[1177] * xx[1235] +
    xx[1178] * xx[1258] + xx[1158] * xx[1136] + xx[1159] * xx[1223] + xx[1162] *
    xx[1224] + xx[1163] * xx[1225] - xx[840] * xx[1549];
  xx[1593] = xx[1086] * xx[1199] + xx[1161] * xx[1301] + xx[1177] * xx[1310] +
    xx[1178] * xx[1313] + xx[1158] * xx[1299] + xx[1159] * xx[1300] + xx[1162] *
    xx[1303] + xx[1163] * xx[1304] - xx[840] * xx[1559];
  xx[1594] = xx[1086] * xx[1180] + xx[1161] * xx[1205] + xx[1177] * xx[1231] +
    xx[1178] * xx[1242] + xx[1158] * xx[1203] + xx[1159] * xx[1204] + xx[1162] *
    xx[1227] + xx[1163] * xx[1228] - xx[840] * xx[1561];
  xx[1595] = xx[1086] * xx[1265] + xx[1161] * xx[1369] + xx[1177] * xx[1370] +
    xx[1178] * xx[1393] + xx[1158] * xx[1270] + xx[1159] * xx[1358] + xx[1162] *
    xx[1359] + xx[1163] * xx[1360] - xx[840] * xx[1579];
  xx[1596] = xx[1086] * xx[1333] + xx[1161] * xx[1436] + xx[1177] * xx[1445] +
    xx[1178] * xx[1448] + xx[1158] * xx[1434] + xx[1159] * xx[1435] + xx[1162] *
    xx[1438] + xx[1163] * xx[1439] - xx[840] * xx[1581];
  xx[1599] = xx[1086] * xx[1314] + xx[1161] * xx[1339] + xx[1177] * xx[1366] +
    xx[1178] * xx[1377] + xx[1158] * xx[1337] + xx[1159] * xx[1338] + xx[1162] *
    xx[1362] + xx[1163] * xx[1363] - xx[840] * xx[1583];
  xx[1600] = xx[1086] * xx[183] + xx[1161] * xx[763] + xx[1177] * xx[805] + xx
    [1178] * xx[807] + xx[1158] * xx[251] + xx[1159] * xx[550] + xx[1162] * xx
    [1416] + xx[1163] * xx[1475] - xx[840] * xx[1585];
  xx[1601] = xx[1086] * xx[460] + xx[1161] * xx[1535] + xx[1177] * xx[1536] +
    xx[1178] * xx[1538] + xx[1158] * xx[1505] + xx[1159] * xx[1528] + xx[1162] *
    xx[1529] + xx[1163] * xx[1530] - xx[840] * xx[1587];
  xx[1602] = xx[1086] * xx[463] + xx[1161] * xx[171] + xx[1177] * xx[176] + xx
    [1178] * xx[761] + xx[1158] * xx[172] + xx[1159] * xx[174] + xx[1162] * xx
    [760] + xx[1163] * xx[762] - xx[840] * xx[1589];
  xx[1613] = xx[750] * xx[1131] + xx[949] * xx[1234] + xx[1103] * xx[1235] + xx
    [1107] * xx[1258] + xx[943] * xx[1136] + xx[948] * xx[1223] + xx[1098] * xx
    [1224] + xx[947] * xx[1225] - xx[751] * xx[1549];
  xx[1549] = xx[750] * xx[1199] + xx[949] * xx[1301] + xx[1103] * xx[1310] + xx
    [1107] * xx[1313] + xx[943] * xx[1299] + xx[948] * xx[1300] + xx[1098] * xx
    [1303] + xx[947] * xx[1304] - xx[751] * xx[1559];
  xx[1559] = xx[750] * xx[1180] + xx[949] * xx[1205] + xx[1103] * xx[1231] + xx
    [1107] * xx[1242] + xx[943] * xx[1203] + xx[948] * xx[1204] + xx[1098] * xx
    [1227] + xx[947] * xx[1228] - xx[751] * xx[1561];
  xx[1561] = xx[750] * xx[1265] + xx[949] * xx[1369] + xx[1103] * xx[1370] + xx
    [1107] * xx[1393] + xx[943] * xx[1270] + xx[948] * xx[1358] + xx[1098] * xx
    [1359] + xx[947] * xx[1360] - xx[751] * xx[1579];
  xx[1579] = xx[750] * xx[1333] + xx[949] * xx[1436] + xx[1103] * xx[1445] + xx
    [1107] * xx[1448] + xx[943] * xx[1434] + xx[948] * xx[1435] + xx[1098] * xx
    [1438] + xx[947] * xx[1439] - xx[751] * xx[1581];
  xx[1581] = xx[750] * xx[1314] + xx[949] * xx[1339] + xx[1103] * xx[1366] + xx
    [1107] * xx[1377] + xx[943] * xx[1337] + xx[948] * xx[1338] + xx[1098] * xx
    [1362] + xx[947] * xx[1363] - xx[751] * xx[1583];
  xx[1583] = xx[750] * xx[183] + xx[949] * xx[763] + xx[1103] * xx[805] + xx
    [1107] * xx[807] + xx[943] * xx[251] + xx[948] * xx[550] + xx[1098] * xx
    [1416] + xx[947] * xx[1475] - xx[751] * xx[1585];
  xx[1585] = xx[750] * xx[460] + xx[949] * xx[1535] + xx[1103] * xx[1536] + xx
    [1107] * xx[1538] + xx[943] * xx[1505] + xx[948] * xx[1528] + xx[1098] * xx
    [1529] + xx[947] * xx[1530] - xx[751] * xx[1587];
  xx[1587] = xx[750] * xx[463] + xx[949] * xx[171] + xx[1103] * xx[176] + xx
    [1107] * xx[761] + xx[943] * xx[172] + xx[948] * xx[174] + xx[1098] * xx[760]
    + xx[947] * xx[762] - xx[751] * xx[1589];
  pm_math_cross3(xx + 1266, xx + 536, xx + 1623);
  xx[1626] = xx[1220] + xx[1623];
  xx[1627] = xx[1272] + xx[1624];
  xx[1628] = xx[1222] + xx[1625];
  pm_math_quatInverseXform(xx + 525, xx + 1626, xx + 1623);
  pm_math_quatInverseXform(xx + 525, xx + 1266, xx + 1625);
  xx[1220] = xx[1] * state[55];
  xx[1222] = cos(xx[1220]);
  xx[1266] = 0.6324445710612965;
  xx[1267] = xx[1] * input[9];
  xx[1268] = cos(xx[1267]);
  xx[1272] = 0.6324396579890005;
  xx[1589] = sin(xx[1267]);
  xx[1267] = xx[1266] * xx[1268] + xx[1272] * xx[1589];
  xx[1616] = xx[1222] * xx[1267];
  xx[1625] = xx[1266] * xx[1589] - xx[1272] * xx[1268];
  xx[1266] = sin(xx[1220]);
  xx[1220] = xx[1625] * xx[1266];
  xx[1272] = 0.3162553791961485;
  xx[1626] = 0.3162538200043588;
  xx[1628] = xx[1272] * xx[1268] - xx[1626] * xx[1589];
  xx[1629] = xx[1626] * xx[1268] + xx[1272] * xx[1589];
  xx[1268] = xx[1628] * xx[1222] - xx[1266] * xx[1629];
  xx[1272] = - xx[1268];
  xx[1589] = xx[1628] * xx[1266] + xx[1222] * xx[1629];
  xx[1626] = xx[1266] * xx[1267] + xx[1625] * xx[1222];
  xx[1630] = xx[1616] - xx[1220];
  xx[1631] = xx[1272];
  xx[1632] = xx[1589];
  xx[1633] = xx[1626];
  xx[1634] = xx[53] * state[60] - xx[54] * state[57];
  xx[1635] = xx[53] * state[59] + xx[54] * state[58];
  xx[1636] = - xx[1635];
  xx[1637] = xx[54] * state[59] - xx[53] * state[58];
  xx[1653] = - xx[1637];
  xx[1654] = xx[53] * state[57] + xx[54] * state[60];
  xx[1665] = - xx[1654];
  xx[1701] = xx[1634];
  xx[1702] = xx[1636];
  xx[1703] = xx[1653];
  xx[1704] = xx[1665];
  pm_math_quatCompose(xx + 1630, xx + 1701, xx + 1705);
  xx[1630] = xx[1637] * xx[1634];
  xx[1631] = xx[1635] * xx[1654];
  xx[1632] = xx[1637] * xx[1654];
  xx[1633] = xx[1635] * xx[1634];
  xx[1669] = xx[19] * (xx[1632] - xx[1633]);
  xx[1709] = xx[1635] * xx[1635];
  xx[1710] = xx[1637] * xx[1637];
  xx[1711] = (xx[1630] + xx[1631]) * xx[19];
  xx[1712] = xx[1669];
  xx[1713] = xx[21] - (xx[1709] + xx[1710]) * xx[19];
  pm_math_cross3(xx + 1711, xx + 897, xx + 1714);
  pm_math_quatXform(xx + 1705, xx + 1714, xx + 1711);
  pm_math_quatXform(xx + 1701, xx + 69, xx + 1705);
  xx[1708] = xx[1706] * xx[1266] - xx[1222] * xx[1705];
  xx[1714] = 5.157931604049537e-12;
  xx[1715] = 9.862118968695376e-13;
  xx[1716] = xx[1714] * xx[1222] + xx[1715] * xx[1266];
  xx[1717] = xx[19] * xx[1716] * xx[1266];
  xx[1718] = xx[19] * xx[1266] * xx[1708] - (xx[1706] - xx[1717]) - xx[1715];
  xx[1719] = - xx[1629];
  xx[1720] = xx[1267];
  xx[1721] = xx[1625];
  xx[1722] = xx[1719];
  xx[1723] = xx[19] * xx[1716] * xx[1222];
  xx[1716] = xx[1705] + xx[19] * xx[1222] * xx[1708] + xx[1723] - xx[1714];
  xx[1708] = xx[1716] * xx[1629];
  xx[1724] = xx[1718] * xx[1629];
  xx[1725] = xx[1716] * xx[1267] - xx[1625] * xx[1718];
  xx[1726] = xx[1708];
  xx[1727] = - xx[1724];
  xx[1728] = xx[1725];
  pm_math_cross3(xx + 1720, xx + 1726, xx + 1729);
  xx[1726] = xx[1711] + xx[1718] + xx[19] * (xx[1729] + xx[1628] * xx[1708]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_13/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 1732, xx + 91, 9 * sizeof(double));
  xx[1708] = xx[1220] - xx[1616];
  xx[1741] = - xx[1708];
  xx[1742] = xx[1272];
  xx[1743] = xx[1589];
  xx[1744] = xx[1626];
  pm_math_quatCompose(xx + 1741, xx + 1701, xx + 1745);
  pm_math_quatXform(xx + 1745, xx + 141, xx + 1749);
  pm_math_quatXform(xx + 1701, xx + 111, xx + 1752);
  pm_math_quatXform(xx + 1741, xx + 1752, xx + 1755);
  xx[1220] = xx[1749] + xx[1755];
  pm_math_quatXform(xx + 1745, xx + 933, xx + 1752);
  pm_math_quatXform(xx + 1701, xx + 753, xx + 1758);
  pm_math_quatXform(xx + 1741, xx + 1758, xx + 1761);
  xx[1272] = xx[1752] + xx[1761];
  xx[1616] = xx[249] * xx[1748];
  xx[1718] = xx[249] * xx[1746] + xx[271] * xx[1747];
  xx[1758] = - xx[1616];
  xx[1759] = - (xx[271] * xx[1748]);
  xx[1760] = xx[1718];
  pm_math_cross3(xx + 1746, xx + 1758, xx + 1764);
  xx[1758] = xx[1636];
  xx[1759] = xx[1653];
  xx[1760] = xx[1665];
  xx[1636] = xx[67] * xx[1654];
  xx[1653] = xx[68] * xx[1654];
  xx[1665] = xx[67] * xx[1635] + xx[1637] * xx[68];
  xx[1767] = xx[1636];
  xx[1768] = xx[1653];
  xx[1769] = - xx[1665];
  pm_math_cross3(xx + 1758, xx + 1767, xx + 1770);
  xx[1767] = xx[19] * (xx[1770] + xx[1636] * xx[1634]) - xx[68];
  xx[1768] = xx[67] + (xx[1653] * xx[1634] + xx[1771]) * xx[19];
  xx[1769] = (xx[1772] - xx[1665] * xx[1634]) * xx[19];
  pm_math_quatXform(xx + 1741, xx + 1767, xx + 1770);
  xx[1636] = xx[19] * (xx[1764] - xx[1745] * xx[1616]) + xx[1770] - xx[271];
  xx[1767] = - xx[1220];
  xx[1768] = - xx[1272];
  xx[1769] = - xx[1636];
  solveSymmetricPosDef(xx + 1732, xx + 1767, 3, 1, xx + 1773, xx + 1776);
  xx[1767] = xx[78] * xx[1773] + xx[140] * xx[1774];
  xx[1768] = xx[79] * xx[1774] - xx[713] * xx[1773];
  xx[1769] = xx[80] * xx[1775];
  pm_math_quatXform(xx + 1701, xx + 1767, xx + 1776);
  xx[1767] = xx[731] * xx[1773] - xx[806] * xx[1774] - xx[870] * xx[1775];
  xx[1768] = xx[806] * xx[1773] + xx[731] * xx[1774] + xx[908] * xx[1775];
  xx[1769] = xx[909] * xx[1773] + xx[927] * xx[1774];
  pm_math_quatXform(xx + 1701, xx + 1767, xx + 1779);
  pm_math_cross3(xx + 1705, xx + 1779, xx + 1767);
  xx[1616] = xx[1634] * xx[1634];
  xx[1653] = (xx[1616] + xx[1709]) * xx[19] - xx[21];
  xx[1665] = xx[1637] * xx[1635];
  xx[1709] = xx[1654] * xx[1634];
  xx[1727] = (xx[1665] + xx[1709]) * xx[19];
  xx[1728] = xx[19] * (xx[1631] - xx[1630]);
  xx[1746] = xx[19] * (xx[1665] - xx[1709]);
  xx[1665] = (xx[1616] + xx[1710]) * xx[19] - xx[21];
  xx[1709] = (xx[1632] + xx[1633]) * xx[19];
  xx[1632] = (xx[1631] + xx[1630]) * xx[19];
  xx[1630] = (xx[1616] + xx[1654] * xx[1654]) * xx[19] - xx[21];
  xx[1781] = xx[1653];
  xx[1782] = xx[1727];
  xx[1783] = xx[1728];
  xx[1784] = xx[1746];
  xx[1785] = xx[1665];
  xx[1786] = xx[1709];
  xx[1787] = xx[1632];
  xx[1788] = xx[1669];
  xx[1789] = xx[1630];
  solveSymmetricPosDef(xx + 1732, xx + 975, 3, 6, xx + 1790, xx + 1808);
  xx[1616] = - (xx[79] * xx[1791] - xx[713] * xx[1790]);
  xx[1631] = - (xx[80] * xx[1792]);
  xx[1633] = - (xx[80] * xx[1795]);
  xx[1808] = xx[78] - (xx[78] * xx[1790] + xx[140] * xx[1791]);
  xx[1809] = xx[1616];
  xx[1810] = xx[1631];
  xx[1811] = xx[1616];
  xx[1812] = xx[79] - (xx[79] * xx[1794] - xx[713] * xx[1793]);
  xx[1813] = xx[1633];
  xx[1814] = xx[1631];
  xx[1815] = xx[1633];
  xx[1816] = xx[80] - xx[80] * xx[1798];
  pm_math_matrix3x3ComposeTranspose(xx + 1808, xx + 1781, xx + 1817);
  pm_math_matrix3x3Compose(xx + 1781, xx + 1817, xx + 1808);
  xx[1817] = - (xx[78] * xx[1799] + xx[140] * xx[1800]);
  xx[1818] = - (xx[78] * xx[1802] + xx[140] * xx[1803]);
  xx[1819] = - (xx[78] * xx[1805] + xx[140] * xx[1806]);
  xx[1820] = - (xx[79] * xx[1800] - xx[713] * xx[1799]);
  xx[1821] = - (xx[79] * xx[1803] - xx[713] * xx[1802]);
  xx[1822] = - (xx[79] * xx[1806] - xx[713] * xx[1805]);
  xx[1823] = - (xx[80] * xx[1801]);
  xx[1824] = - (xx[80] * xx[1804]);
  xx[1825] = - (xx[80] * xx[1807]);
  pm_math_matrix3x3ComposeTranspose(xx + 1817, xx + 1781, xx + 1826);
  pm_math_matrix3x3Compose(xx + 1781, xx + 1826, xx + 1817);
  pm_math_matrix3x3PostCross(xx + 1817, xx + 1705, xx + 1826);
  xx[1616] = - (xx[806] * xx[1799] + xx[731] * xx[1800] + xx[908] * xx[1801]);
  xx[1631] = - (xx[909] * xx[1799] + xx[927] * xx[1800]);
  xx[1633] = - (xx[909] * xx[1802] + xx[927] * xx[1803]);
  xx[1835] = xx[73] - (xx[731] * xx[1799] - xx[806] * xx[1800] - xx[870] * xx
                       [1801]);
  xx[1836] = xx[1616];
  xx[1837] = xx[1631];
  xx[1838] = xx[1616];
  xx[1839] = xx[73] - (xx[806] * xx[1802] + xx[731] * xx[1803] + xx[908] * xx
                       [1804]);
  xx[1840] = xx[1633];
  xx[1841] = xx[1631];
  xx[1842] = xx[1633];
  xx[1843] = xx[73] - (xx[909] * xx[1805] + xx[927] * xx[1806]);
  pm_math_matrix3x3ComposeTranspose(xx + 1835, xx + 1781, xx + 1844);
  pm_math_matrix3x3Compose(xx + 1781, xx + 1844, xx + 1835);
  pm_math_matrix3x3PostCross(xx + 1835, xx + 1705, xx + 1781);
  pm_math_matrix3x3PreCross(xx + 1781, xx + 1705, xx + 1844);
  xx[1616] = xx[1823] - xx[1783];
  xx[1631] = xx[1824] - xx[1786];
  xx[1633] = xx[1816] - xx[1834] - xx[1834] - xx[1852] - xx[1715] * xx[1616] -
    xx[1714] * xx[1631] + xx[52];
  xx[1710] = xx[393] + xx[1835];
  xx[1747] = xx[1616] - (xx[1710] * xx[1715] + xx[1714] * xx[1836]);
  xx[1767] = xx[393] + xx[1839];
  xx[1768] = xx[1631] - (xx[1715] * xx[1838] + xx[1767] * xx[1714]);
  xx[1776] = xx[1633] - (xx[1747] * xx[1715] + xx[1768] * xx[1714]);
  ii[1] = factorSymmetricPosDef(xx + 1776, 1, xx + 1777);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute5' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1777] = (xx[1778] + xx[1769] - (xx[1715] * xx[1779] + xx[1714] * xx[1780])
              + xx[1726]) / xx[1776];
  xx[1778] = xx[1790];
  xx[1779] = xx[1793];
  xx[1780] = xx[1796];
  xx[1769] = xx[1637] * xx[1777];
  xx[1783] = xx[1777] * xx[1635];
  xx[1853] = - ((xx[1769] * xx[1634] + xx[1783] * xx[1654]) * xx[19]);
  xx[1854] = xx[19] * (xx[1783] * xx[1634] - xx[1769] * xx[1654]);
  xx[1855] = (xx[1783] * xx[1635] + xx[1637] * xx[1769]) * xx[19] - xx[1777];
  xx[1856] = xx[1799];
  xx[1857] = xx[1802];
  xx[1858] = xx[1805];
  xx[1769] = xx[1777] * xx[1706] + xx[1715] * xx[1777];
  xx[1783] = xx[1777] * xx[1705] - xx[1714] * xx[1777];
  xx[1786] = xx[1783] * xx[1654];
  xx[1823] = xx[1654] * xx[1769];
  xx[1824] = xx[1637] * xx[1769] + xx[1783] * xx[1635];
  xx[1859] = - xx[1786];
  xx[1860] = - xx[1823];
  xx[1861] = xx[1824];
  pm_math_cross3(xx + 1758, xx + 1859, xx + 1862);
  xx[1859] = xx[1769] + xx[19] * (xx[1862] + xx[1786] * xx[1634]);
  xx[1860] = xx[19] * (xx[1863] + xx[1823] * xx[1634]) - xx[1783];
  xx[1861] = xx[19] * (xx[1864] - xx[1634] * xx[1824]);
  xx[1862] = xx[1791];
  xx[1863] = xx[1794];
  xx[1864] = xx[1797];
  xx[1865] = xx[1800];
  xx[1866] = xx[1803];
  xx[1867] = xx[1806];
  xx[1868] = xx[1792];
  xx[1869] = xx[1795];
  xx[1870] = xx[1798];
  xx[1790] = xx[1801];
  xx[1791] = xx[1804];
  xx[1792] = xx[1807];
  pm_math_cross3(xx + 1307, xx + 536, xx + 1793);
  xx[1796] = xx[1295] + xx[1793];
  xx[1797] = xx[1317] + xx[1794];
  xx[1798] = xx[1297] + xx[1795];
  pm_math_quatInverseXform(xx + 525, xx + 1796, xx + 1793);
  pm_math_quatInverseXform(xx + 525, xx + 1307, xx + 1795);
  xx[1295] = xx[1188] - (xx[494] * xx[1793] + xx[497] * xx[1794] - xx[492] * xx
    [1797]);
  xx[1188] = xx[1750] + xx[1756];
  xx[1297] = xx[1753] + xx[1762];
  xx[1307] = (xx[1765] - xx[271] * xx[1745] * xx[1748]) * xx[19] + xx[1771] +
    xx[249];
  xx[1793] = - xx[1188];
  xx[1794] = - xx[1297];
  xx[1795] = - xx[1307];
  solveSymmetricPosDef(xx + 1732, xx + 1793, 3, 1, xx + 1796, xx + 1799);
  xx[1793] = xx[78] * xx[1796] + xx[140] * xx[1797];
  xx[1794] = xx[79] * xx[1797] - xx[713] * xx[1796];
  xx[1795] = xx[80] * xx[1798];
  pm_math_quatXform(xx + 1701, xx + 1793, xx + 1799);
  xx[1793] = xx[731] * xx[1796] - xx[806] * xx[1797] - xx[870] * xx[1798];
  xx[1794] = xx[806] * xx[1796] + xx[731] * xx[1797] + xx[908] * xx[1798];
  xx[1795] = xx[909] * xx[1796] + xx[927] * xx[1797];
  pm_math_quatXform(xx + 1701, xx + 1793, xx + 1802);
  pm_math_cross3(xx + 1705, xx + 1802, xx + 1793);
  xx[1308] = xx[1712] + xx[1716] + (xx[1730] - xx[1628] * xx[1724]) * xx[19];
  xx[1309] = (xx[1801] + xx[1795] - (xx[1715] * xx[1802] + xx[1714] * xx[1803])
              + xx[1308]) / xx[1776];
  xx[1317] = xx[1637] * xx[1309];
  xx[1716] = xx[1309] * xx[1635];
  xx[1793] = - ((xx[1317] * xx[1634] + xx[1716] * xx[1654]) * xx[19]);
  xx[1794] = xx[19] * (xx[1716] * xx[1634] - xx[1317] * xx[1654]);
  xx[1795] = (xx[1716] * xx[1635] + xx[1637] * xx[1317]) * xx[19] - xx[1309];
  xx[1317] = xx[1309] * xx[1706] + xx[1715] * xx[1309];
  xx[1716] = xx[1309] * xx[1705] - xx[1714] * xx[1309];
  xx[1724] = xx[1716] * xx[1654];
  xx[1748] = xx[1654] * xx[1317];
  xx[1769] = xx[1637] * xx[1317] + xx[1716] * xx[1635];
  xx[1799] = - xx[1724];
  xx[1800] = - xx[1748];
  xx[1801] = xx[1769];
  pm_math_cross3(xx + 1758, xx + 1799, xx + 1802);
  xx[1799] = xx[1317] + xx[19] * (xx[1802] + xx[1724] * xx[1634]);
  xx[1800] = xx[19] * (xx[1803] + xx[1748] * xx[1634]) - xx[1716];
  xx[1801] = xx[19] * (xx[1804] - xx[1634] * xx[1769]);
  xx[1317] = xx[1796] - (pm_math_dot3(xx + 1778, xx + 1793) + pm_math_dot3(xx +
    1856, xx + 1799));
  xx[1716] = xx[1797] - (pm_math_dot3(xx + 1862, xx + 1793) + pm_math_dot3(xx +
    1865, xx + 1799));
  xx[1724] = xx[1798] - (pm_math_dot3(xx + 1868, xx + 1793) + pm_math_dot3(xx +
    1790, xx + 1799));
  xx[1748] = xx[1190] * xx[1199] + xx[1245] * xx[1301] + xx[1137] * xx[1310] +
    xx[1130] * xx[1313] + xx[1249] * xx[1299] + xx[1129] * xx[1300] + xx[1135] *
    xx[1303] + xx[1197] * xx[1304] + xx[1192] * xx[1295] + xx[1726] * xx[1309] -
    xx[1220] * xx[1317] - xx[1272] * xx[1716] - xx[1636] * xx[1724];
  pm_math_cross3(xx + 1236, xx + 536, xx + 1793);
  xx[1796] = xx[1194] + xx[1793];
  xx[1797] = xx[1243] + xx[1794];
  xx[1798] = xx[1196] + xx[1795];
  pm_math_quatInverseXform(xx + 525, xx + 1796, xx + 1793);
  pm_math_quatInverseXform(xx + 525, xx + 1236, xx + 1795);
  xx[1194] = xx[1127] - (xx[494] * xx[1793] + xx[497] * xx[1794] - xx[492] * xx
    [1797]);
  xx[1127] = xx[1751] + xx[1757];
  xx[1196] = xx[1754] + xx[1763];
  xx[1236] = (xx[1745] * xx[1718] + xx[1766]) * xx[19] + xx[1772];
  xx[1749] = - xx[1127];
  xx[1750] = - xx[1196];
  xx[1751] = - xx[1236];
  solveSymmetricPosDef(xx + 1732, xx + 1749, 3, 1, xx + 1752, xx + 1755);
  xx[1749] = xx[78] * xx[1752] + xx[140] * xx[1753];
  xx[1750] = xx[79] * xx[1753] - xx[713] * xx[1752];
  xx[1751] = xx[80] * xx[1754];
  pm_math_quatXform(xx + 1701, xx + 1749, xx + 1755);
  xx[1749] = xx[731] * xx[1752] - xx[806] * xx[1753] - xx[870] * xx[1754];
  xx[1750] = xx[806] * xx[1752] + xx[731] * xx[1753] + xx[908] * xx[1754];
  xx[1751] = xx[909] * xx[1752] + xx[927] * xx[1753];
  pm_math_quatXform(xx + 1701, xx + 1749, xx + 1761);
  pm_math_cross3(xx + 1705, xx + 1761, xx + 1749);
  xx[1237] = xx[1713] + (xx[1628] * xx[1725] + xx[1731]) * xx[19];
  xx[1238] = (xx[1757] + xx[1751] - (xx[1715] * xx[1761] + xx[1714] * xx[1762])
              + xx[1237]) / xx[1776];
  xx[1243] = xx[1637] * xx[1238];
  xx[1711] = xx[1238] * xx[1635];
  xx[1729] = - ((xx[1243] * xx[1634] + xx[1711] * xx[1654]) * xx[19]);
  xx[1730] = xx[19] * (xx[1711] * xx[1634] - xx[1243] * xx[1654]);
  xx[1731] = (xx[1711] * xx[1635] + xx[1637] * xx[1243]) * xx[19] - xx[1238];
  xx[1243] = xx[1238] * xx[1706] + xx[1715] * xx[1238];
  xx[1711] = xx[1238] * xx[1705] - xx[1714] * xx[1238];
  xx[1712] = xx[1711] * xx[1654];
  xx[1713] = xx[1654] * xx[1243];
  xx[1718] = xx[1637] * xx[1243] + xx[1711] * xx[1635];
  xx[1749] = - xx[1712];
  xx[1750] = - xx[1713];
  xx[1751] = xx[1718];
  pm_math_cross3(xx + 1758, xx + 1749, xx + 1755);
  xx[1749] = xx[1243] + xx[19] * (xx[1755] + xx[1712] * xx[1634]);
  xx[1750] = xx[19] * (xx[1756] + xx[1713] * xx[1634]) - xx[1711];
  xx[1751] = xx[19] * (xx[1757] - xx[1634] * xx[1718]);
  xx[1243] = xx[1752] - (pm_math_dot3(xx + 1778, xx + 1729) + pm_math_dot3(xx +
    1856, xx + 1749));
  xx[1711] = xx[1753] - (pm_math_dot3(xx + 1862, xx + 1729) + pm_math_dot3(xx +
    1865, xx + 1749));
  xx[1712] = xx[1754] - (pm_math_dot3(xx + 1868, xx + 1729) + pm_math_dot3(xx +
    1790, xx + 1749));
  xx[1713] = xx[1190] * xx[1180] + xx[1245] * xx[1205] + xx[1137] * xx[1231] +
    xx[1130] * xx[1242] + xx[1249] * xx[1203] + xx[1129] * xx[1204] + xx[1135] *
    xx[1227] + xx[1197] * xx[1228] + xx[1192] * xx[1194] + xx[1726] * xx[1238] -
    xx[1220] * xx[1243] - xx[1272] * xx[1711] - xx[1636] * xx[1712];
  pm_math_cross3(xx + 1401, xx + 536, xx + 1729);
  xx[1749] = xx[1355] + xx[1729];
  xx[1750] = xx[1407] + xx[1730];
  xx[1751] = xx[1357] + xx[1731];
  pm_math_quatInverseXform(xx + 525, xx + 1749, xx + 1729);
  pm_math_quatInverseXform(xx + 525, xx + 1401, xx + 1749);
  xx[1718] = xx[494] * xx[1729] + xx[497] * xx[1730] - xx[492] * xx[1751];
  xx[1725] = xx[1190] * xx[1265] + xx[1245] * xx[1369] + xx[1137] * xx[1370] +
    xx[1130] * xx[1393] + xx[1249] * xx[1270] + xx[1129] * xx[1358] + xx[1135] *
    xx[1359] + xx[1197] * xx[1360] - xx[1192] * xx[1718];
  pm_math_cross3(xx + 1442, xx + 536, xx + 1729);
  xx[1749] = xx[1430] + xx[1729];
  xx[1750] = xx[1452] + xx[1730];
  xx[1751] = xx[1432] + xx[1731];
  pm_math_quatInverseXform(xx + 525, xx + 1749, xx + 1729);
  pm_math_quatInverseXform(xx + 525, xx + 1442, xx + 1749);
  xx[1731] = xx[494] * xx[1729] + xx[497] * xx[1730] - xx[492] * xx[1751];
  xx[1729] = xx[1190] * xx[1333] + xx[1245] * xx[1436] + xx[1137] * xx[1445] +
    xx[1130] * xx[1448] + xx[1249] * xx[1434] + xx[1129] * xx[1435] + xx[1135] *
    xx[1438] + xx[1197] * xx[1439] - xx[1192] * xx[1731];
  pm_math_cross3(xx + 1371, xx + 536, xx + 1749);
  xx[1752] = xx[1328] + xx[1749];
  xx[1753] = xx[1378] + xx[1750];
  xx[1754] = xx[1330] + xx[1751];
  pm_math_quatInverseXform(xx + 525, xx + 1752, xx + 1749);
  pm_math_quatInverseXform(xx + 525, xx + 1371, xx + 1751);
  xx[1730] = xx[494] * xx[1749] + xx[497] * xx[1750] - xx[492] * xx[1753];
  xx[1745] = xx[1190] * xx[1314] + xx[1245] * xx[1339] + xx[1137] * xx[1366] +
    xx[1130] * xx[1377] + xx[1249] * xx[1337] + xx[1129] * xx[1338] + xx[1135] *
    xx[1362] + xx[1197] * xx[1363] - xx[1192] * xx[1730];
  pm_math_cross3(xx + 1481, xx + 536, xx + 1749);
  xx[1752] = xx[1478] + xx[1749];
  xx[1753] = xx[1477] + xx[1750];
  xx[1754] = xx[1480] + xx[1751];
  pm_math_quatInverseXform(xx + 525, xx + 1752, xx + 1749);
  pm_math_quatInverseXform(xx + 525, xx + 1481, xx + 1751);
  xx[1751] = xx[494] * xx[1749] + xx[497] * xx[1750] - xx[492] * xx[1753];
  xx[1749] = xx[1190] * xx[183] + xx[1245] * xx[763] + xx[1137] * xx[805] + xx
    [1130] * xx[807] + xx[1249] * xx[251] + xx[1129] * xx[550] + xx[1135] * xx
    [1416] + xx[1197] * xx[1475] - xx[1192] * xx[1751];
  pm_math_cross3(xx + 1531, xx + 536, xx + 1752);
  xx[1755] = xx[1512] + xx[1752];
  xx[1756] = xx[1542] + xx[1753];
  xx[1757] = xx[1514] + xx[1754];
  pm_math_quatInverseXform(xx + 525, xx + 1755, xx + 1752);
  pm_math_quatInverseXform(xx + 525, xx + 1531, xx + 1754);
  xx[1750] = xx[494] * xx[1752] + xx[497] * xx[1753] - xx[492] * xx[1756];
  xx[1752] = xx[1190] * xx[460] + xx[1245] * xx[1535] + xx[1137] * xx[1536] +
    xx[1130] * xx[1538] + xx[1249] * xx[1505] + xx[1129] * xx[1528] + xx[1135] *
    xx[1529] + xx[1197] * xx[1530] - xx[1192] * xx[1750];
  pm_math_cross3(xx + 1460, xx + 536, xx + 1753);
  xx[1756] = xx[1466] + xx[1753];
  xx[1757] = xx[793] + xx[1754];
  xx[1758] = xx[1468] + xx[1755];
  pm_math_quatInverseXform(xx + 525, xx + 1756, xx + 1753);
  pm_math_quatInverseXform(xx + 525, xx + 1460, xx + 1755);
  xx[1755] = xx[494] * xx[1753] + xx[497] * xx[1754] - xx[492] * xx[1757];
  xx[1753] = xx[1190] * xx[463] + xx[1245] * xx[171] + xx[1137] * xx[176] + xx
    [1130] * xx[761] + xx[1249] * xx[172] + xx[1129] * xx[174] + xx[1135] * xx
    [760] + xx[1197] * xx[762] - xx[1192] * xx[1755];
  xx[1754] = xx[1221] * xx[1180] + xx[1302] * xx[1205] + xx[1311] * xx[1231] +
    xx[1312] * xx[1242] + xx[1233] * xx[1203] + xx[1293] * xx[1204] + xx[1306] *
    xx[1227] + xx[1298] * xx[1228] + xx[1181] * xx[1194] + xx[1308] * xx[1238] -
    xx[1188] * xx[1243] - xx[1297] * xx[1711] - xx[1307] * xx[1712];
  xx[1756] = xx[1221] * xx[1265] + xx[1302] * xx[1369] + xx[1311] * xx[1370] +
    xx[1312] * xx[1393] + xx[1233] * xx[1270] + xx[1293] * xx[1358] + xx[1306] *
    xx[1359] + xx[1298] * xx[1360] - xx[1181] * xx[1718];
  xx[1757] = xx[1221] * xx[1333] + xx[1302] * xx[1436] + xx[1311] * xx[1445] +
    xx[1312] * xx[1448] + xx[1233] * xx[1434] + xx[1293] * xx[1435] + xx[1306] *
    xx[1438] + xx[1298] * xx[1439] - xx[1181] * xx[1731];
  xx[1758] = xx[1221] * xx[1314] + xx[1302] * xx[1339] + xx[1311] * xx[1366] +
    xx[1312] * xx[1377] + xx[1233] * xx[1337] + xx[1293] * xx[1338] + xx[1306] *
    xx[1362] + xx[1298] * xx[1363] - xx[1181] * xx[1730];
  xx[1759] = xx[1221] * xx[183] + xx[1302] * xx[763] + xx[1311] * xx[805] + xx
    [1312] * xx[807] + xx[1233] * xx[251] + xx[1293] * xx[550] + xx[1306] * xx
    [1416] + xx[1298] * xx[1475] - xx[1181] * xx[1751];
  xx[1760] = xx[1221] * xx[460] + xx[1302] * xx[1535] + xx[1311] * xx[1536] +
    xx[1312] * xx[1538] + xx[1233] * xx[1505] + xx[1293] * xx[1528] + xx[1306] *
    xx[1529] + xx[1298] * xx[1530] - xx[1181] * xx[1750];
  xx[1761] = xx[1221] * xx[463] + xx[1302] * xx[171] + xx[1311] * xx[176] + xx
    [1312] * xx[761] + xx[1233] * xx[172] + xx[1293] * xx[174] + xx[1306] * xx
    [760] + xx[1298] * xx[762] - xx[1181] * xx[1755];
  xx[1762] = xx[1125] * xx[1265] + xx[1218] * xx[1369] + xx[1232] * xx[1370] +
    xx[1241] * xx[1393] + xx[1189] * xx[1270] + xx[1216] * xx[1358] + xx[1230] *
    xx[1359] + xx[1217] * xx[1360] - xx[1126] * xx[1718];
  xx[1718] = xx[1125] * xx[1333] + xx[1218] * xx[1436] + xx[1232] * xx[1445] +
    xx[1241] * xx[1448] + xx[1189] * xx[1434] + xx[1216] * xx[1435] + xx[1230] *
    xx[1438] + xx[1217] * xx[1439] - xx[1126] * xx[1731];
  xx[1731] = xx[1125] * xx[1314] + xx[1218] * xx[1339] + xx[1232] * xx[1366] +
    xx[1241] * xx[1377] + xx[1189] * xx[1337] + xx[1216] * xx[1338] + xx[1230] *
    xx[1362] + xx[1217] * xx[1363] - xx[1126] * xx[1730];
  xx[1730] = xx[1125] * xx[183] + xx[1218] * xx[763] + xx[1232] * xx[805] + xx
    [1241] * xx[807] + xx[1189] * xx[251] + xx[1216] * xx[550] + xx[1230] * xx
    [1416] + xx[1217] * xx[1475] - xx[1126] * xx[1751];
  xx[1751] = xx[1125] * xx[460] + xx[1218] * xx[1535] + xx[1232] * xx[1536] +
    xx[1241] * xx[1538] + xx[1189] * xx[1505] + xx[1216] * xx[1528] + xx[1230] *
    xx[1529] + xx[1217] * xx[1530] - xx[1126] * xx[1750];
  xx[1750] = xx[1125] * xx[463] + xx[1218] * xx[171] + xx[1232] * xx[176] + xx
    [1241] * xx[761] + xx[1189] * xx[172] + xx[1216] * xx[174] + xx[1230] * xx
    [760] + xx[1217] * xx[762] - xx[1126] * xx[1755];
  pm_math_cross3(xx + 1401, xx + 412, xx + 1763);
  xx[1769] = xx[1355] + xx[1763];
  xx[1770] = xx[1407] + xx[1764];
  xx[1771] = xx[1357] + xx[1765];
  pm_math_quatInverseXform(xx + 402, xx + 1769, xx + 1763);
  pm_math_quatInverseXform(xx + 402, xx + 1401, xx + 1769);
  xx[1355] = xx[1] * state[64];
  xx[1357] = cos(xx[1355]);
  xx[1401] = 0.6324445710612973;
  xx[1402] = xx[1] * input[10];
  xx[1] = cos(xx[1402]);
  xx[1403] = 0.6324396579890008;
  xx[1407] = sin(xx[1402]);
  xx[1402] = xx[1401] * xx[1] + xx[1403] * xx[1407];
  xx[1755] = xx[1357] * xx[1402];
  xx[1765] = xx[1403] * xx[1] - xx[1401] * xx[1407];
  xx[1401] = sin(xx[1355]);
  xx[1355] = xx[1765] * xx[1401];
  xx[1403] = 0.3162538200043575;
  xx[1766] = 0.3162553791961478;
  xx[1769] = xx[1403] * xx[1407] - xx[1766] * xx[1];
  xx[1770] = xx[1403] * xx[1] + xx[1766] * xx[1407];
  xx[1] = xx[1769] * xx[1357] + xx[1401] * xx[1770];
  xx[1403] = - xx[1];
  xx[1407] = xx[1769] * xx[1401] - xx[1357] * xx[1770];
  xx[1766] = xx[1765] * xx[1357] - xx[1401] * xx[1402];
  xx[1793] = - (xx[1755] + xx[1355]);
  xx[1794] = xx[1403];
  xx[1795] = xx[1407];
  xx[1796] = xx[1766];
  xx[1772] = xx[53] * state[69] - xx[54] * state[66];
  xx[1783] = xx[53] * state[68] + xx[54] * state[67];
  xx[1786] = - xx[1783];
  xx[1797] = xx[54] * state[68] - xx[53] * state[67];
  xx[1798] = - xx[1797];
  xx[1799] = xx[53] * state[66] + xx[54] * state[69];
  xx[1800] = - xx[1799];
  xx[1801] = xx[1772];
  xx[1802] = xx[1786];
  xx[1803] = xx[1798];
  xx[1804] = xx[1800];
  pm_math_quatCompose(xx + 1793, xx + 1801, xx + 1871);
  xx[1793] = xx[1797] * xx[1772];
  xx[1794] = xx[1783] * xx[1799];
  xx[1795] = xx[1797] * xx[1799];
  xx[1796] = xx[1772] * xx[1783];
  xx[1805] = xx[19] * (xx[1795] - xx[1796]);
  xx[1806] = xx[1783] * xx[1783];
  xx[1807] = xx[1797] * xx[1797];
  xx[1875] = (xx[1793] + xx[1794]) * xx[19];
  xx[1876] = xx[1805];
  xx[1877] = xx[21] - (xx[1806] + xx[1807]) * xx[19];
  pm_math_cross3(xx + 1875, xx + 897, xx + 1878);
  pm_math_quatXform(xx + 1871, xx + 1878, xx + 1875);
  pm_math_quatXform(xx + 1801, xx + 69, xx + 1871);
  xx[1823] = xx[1872] * xx[1401] - xx[1357] * xx[1871];
  xx[1824] = 1.600627075326599e-13;
  xx[1835] = 8.497959654019115e-12;
  xx[1839] = xx[1824] * xx[1357] + xx[1835] * xx[1401];
  xx[1874] = xx[19] * xx[1839] * xx[1401];
  xx[1878] = xx[19] * xx[1401] * xx[1823] - (xx[1872] - xx[1874]) - xx[1835];
  xx[1879] = - xx[1402];
  xx[1880] = xx[1879];
  xx[1881] = xx[1765];
  xx[1882] = xx[1770];
  xx[1883] = xx[19] * xx[1839] * xx[1357];
  xx[1839] = xx[1871] + xx[19] * xx[1357] * xx[1823] + xx[1883] - xx[1824];
  xx[1823] = xx[1839] * xx[1770];
  xx[1884] = xx[1878] * xx[1770];
  xx[1885] = xx[1839] * xx[1402] + xx[1765] * xx[1878];
  xx[1886] = - xx[1823];
  xx[1887] = xx[1884];
  xx[1888] = - xx[1885];
  pm_math_cross3(xx + 1880, xx + 1886, xx + 1889);
  xx[1886] = xx[1875] + xx[1878] + xx[19] * (xx[1889] - xx[1769] * xx[1823]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_14/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1823] = xx[1355] + xx[1755];
  xx[1892] = - xx[1823];
  xx[1893] = xx[1403];
  xx[1894] = xx[1407];
  xx[1895] = xx[1766];
  pm_math_quatCompose(xx + 1892, xx + 1801, xx + 1896);
  pm_math_quatXform(xx + 1896, xx + 141, xx + 1900);
  pm_math_quatXform(xx + 1801, xx + 111, xx + 141);
  pm_math_quatXform(xx + 1892, xx + 141, xx + 1903);
  xx[141] = xx[1900] + xx[1903];
  pm_math_quatXform(xx + 1896, xx + 933, xx + 1906);
  pm_math_quatXform(xx + 1801, xx + 753, xx + 1909);
  pm_math_quatXform(xx + 1892, xx + 1909, xx + 1912);
  xx[142] = xx[1906] + xx[1912];
  xx[143] = xx[249] * xx[1899];
  xx[1355] = xx[249] * xx[1897] + xx[271] * xx[1898];
  xx[1909] = - xx[143];
  xx[1910] = - (xx[271] * xx[1899]);
  xx[1911] = xx[1355];
  pm_math_cross3(xx + 1897, xx + 1909, xx + 1915);
  xx[1909] = xx[1786];
  xx[1910] = xx[1798];
  xx[1911] = xx[1800];
  xx[1403] = xx[67] * xx[1799];
  xx[1755] = xx[68] * xx[1799];
  xx[1786] = xx[67] * xx[1783] + xx[1797] * xx[68];
  xx[1918] = xx[1403];
  xx[1919] = xx[1755];
  xx[1920] = - xx[1786];
  pm_math_cross3(xx + 1909, xx + 1918, xx + 1921);
  xx[1918] = xx[19] * (xx[1921] + xx[1403] * xx[1772]) - xx[68];
  xx[1919] = xx[67] + (xx[1755] * xx[1772] + xx[1922]) * xx[19];
  xx[1920] = (xx[1923] - xx[1786] * xx[1772]) * xx[19];
  pm_math_quatXform(xx + 1892, xx + 1918, xx + 1921);
  xx[1403] = xx[19] * (xx[1915] - xx[1896] * xx[143]) + xx[1921] - xx[271];
  xx[1918] = - xx[141];
  xx[1919] = - xx[142];
  xx[1920] = - xx[1403];
  solveSymmetricPosDef(xx + 91, xx + 1918, 3, 1, xx + 1924, xx + 1927);
  xx[1918] = xx[78] * xx[1924] + xx[140] * xx[1925];
  xx[1919] = xx[79] * xx[1925] - xx[713] * xx[1924];
  xx[1920] = xx[80] * xx[1926];
  pm_math_quatXform(xx + 1801, xx + 1918, xx + 1927);
  xx[1918] = xx[731] * xx[1924] - xx[806] * xx[1925] - xx[870] * xx[1926];
  xx[1919] = xx[806] * xx[1924] + xx[731] * xx[1925] + xx[908] * xx[1926];
  xx[1920] = xx[909] * xx[1924] + xx[927] * xx[1925];
  pm_math_quatXform(xx + 1801, xx + 1918, xx + 1930);
  pm_math_cross3(xx + 1871, xx + 1930, xx + 1918);
  xx[143] = xx[1772] * xx[1772];
  xx[1755] = (xx[143] + xx[1806]) * xx[19] - xx[21];
  xx[1786] = xx[1797] * xx[1783];
  xx[1798] = xx[1772] * xx[1799];
  xx[1800] = (xx[1786] + xx[1798]) * xx[19];
  xx[1806] = xx[19] * (xx[1794] - xx[1793]);
  xx[1878] = xx[19] * (xx[1786] - xx[1798]);
  xx[1786] = (xx[143] + xx[1807]) * xx[19] - xx[21];
  xx[1798] = (xx[1795] + xx[1796]) * xx[19];
  xx[1795] = (xx[1794] + xx[1793]) * xx[19];
  xx[1793] = (xx[143] + xx[1799] * xx[1799]) * xx[19] - xx[21];
  xx[1932] = xx[1755];
  xx[1933] = xx[1800];
  xx[1934] = xx[1806];
  xx[1935] = xx[1878];
  xx[1936] = xx[1786];
  xx[1937] = xx[1798];
  xx[1938] = xx[1795];
  xx[1939] = xx[1805];
  xx[1940] = xx[1793];
  solveSymmetricPosDef(xx + 91, xx + 975, 3, 6, xx + 1941, xx + 1959);
  xx[143] = - (xx[79] * xx[1942] - xx[713] * xx[1941]);
  xx[1794] = - (xx[80] * xx[1943]);
  xx[1796] = - (xx[80] * xx[1946]);
  xx[1959] = xx[78] - (xx[78] * xx[1941] + xx[140] * xx[1942]);
  xx[1960] = xx[143];
  xx[1961] = xx[1794];
  xx[1962] = xx[143];
  xx[1963] = xx[79] - (xx[79] * xx[1945] - xx[713] * xx[1944]);
  xx[1964] = xx[1796];
  xx[1965] = xx[1794];
  xx[1966] = xx[1796];
  xx[1967] = xx[80] - xx[80] * xx[1949];
  pm_math_matrix3x3ComposeTranspose(xx + 1959, xx + 1932, xx + 1968);
  pm_math_matrix3x3Compose(xx + 1932, xx + 1968, xx + 1959);
  xx[1968] = - (xx[78] * xx[1950] + xx[140] * xx[1951]);
  xx[1969] = - (xx[78] * xx[1953] + xx[140] * xx[1954]);
  xx[1970] = - (xx[78] * xx[1956] + xx[140] * xx[1957]);
  xx[1971] = - (xx[79] * xx[1951] - xx[713] * xx[1950]);
  xx[1972] = - (xx[79] * xx[1954] - xx[713] * xx[1953]);
  xx[1973] = - (xx[79] * xx[1957] - xx[713] * xx[1956]);
  xx[1974] = - (xx[80] * xx[1952]);
  xx[1975] = - (xx[80] * xx[1955]);
  xx[1976] = - (xx[80] * xx[1958]);
  pm_math_matrix3x3ComposeTranspose(xx + 1968, xx + 1932, xx + 1977);
  pm_math_matrix3x3Compose(xx + 1932, xx + 1977, xx + 1968);
  pm_math_matrix3x3PostCross(xx + 1968, xx + 1871, xx + 1977);
  xx[143] = - (xx[806] * xx[1950] + xx[731] * xx[1951] + xx[908] * xx[1952]);
  xx[1794] = - (xx[909] * xx[1950] + xx[927] * xx[1951]);
  xx[1796] = - (xx[909] * xx[1953] + xx[927] * xx[1954]);
  xx[1986] = xx[73] - (xx[731] * xx[1950] - xx[806] * xx[1951] - xx[870] * xx
                       [1952]);
  xx[1987] = xx[143];
  xx[1988] = xx[1794];
  xx[1989] = xx[143];
  xx[1990] = xx[73] - (xx[806] * xx[1953] + xx[731] * xx[1954] + xx[908] * xx
                       [1955]);
  xx[1991] = xx[1796];
  xx[1992] = xx[1794];
  xx[1993] = xx[1796];
  xx[1994] = xx[73] - (xx[909] * xx[1956] + xx[927] * xx[1957]);
  pm_math_matrix3x3ComposeTranspose(xx + 1986, xx + 1932, xx + 1995);
  pm_math_matrix3x3Compose(xx + 1932, xx + 1995, xx + 1986);
  pm_math_matrix3x3PostCross(xx + 1986, xx + 1871, xx + 1932);
  pm_math_matrix3x3PreCross(xx + 1932, xx + 1871, xx + 1995);
  xx[143] = xx[1974] - xx[1934];
  xx[1794] = xx[1975] - xx[1937];
  xx[1796] = xx[1967] - xx[1985] - xx[1985] - xx[2003] - xx[1835] * xx[143] -
    xx[1824] * xx[1794] + xx[52];
  xx[1807] = xx[393] + xx[1986];
  xx[1887] = xx[143] - (xx[1807] * xx[1835] + xx[1824] * xx[1987]);
  xx[1888] = xx[393] + xx[1990];
  xx[1897] = xx[1794] - (xx[1835] * xx[1989] + xx[1888] * xx[1824]);
  xx[1898] = xx[1796] - (xx[1887] * xx[1835] + xx[1897] * xx[1824]);
  ii[0] = factorSymmetricPosDef(xx + 1898, 1, xx + 1918);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute7' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1918] = (xx[1929] + xx[1920] - (xx[1835] * xx[1930] + xx[1824] * xx[1931])
              + xx[1886]) / xx[1898];
  xx[1927] = xx[1941];
  xx[1928] = xx[1944];
  xx[1929] = xx[1947];
  xx[1919] = xx[1797] * xx[1918];
  xx[1920] = xx[1918] * xx[1783];
  xx[2004] = - ((xx[1919] * xx[1772] + xx[1920] * xx[1799]) * xx[19]);
  xx[2005] = xx[19] * (xx[1920] * xx[1772] - xx[1919] * xx[1799]);
  xx[2006] = (xx[1920] * xx[1783] + xx[1797] * xx[1919]) * xx[19] - xx[1918];
  xx[2007] = xx[1950];
  xx[2008] = xx[1953];
  xx[2009] = xx[1956];
  xx[1919] = xx[1918] * xx[1872] + xx[1835] * xx[1918];
  xx[1920] = xx[1918] * xx[1871] - xx[1824] * xx[1918];
  xx[1930] = xx[1920] * xx[1799];
  xx[1931] = xx[1799] * xx[1919];
  xx[1934] = xx[1797] * xx[1919] + xx[1920] * xx[1783];
  xx[2010] = - xx[1930];
  xx[2011] = - xx[1931];
  xx[2012] = xx[1934];
  pm_math_cross3(xx + 1909, xx + 2010, xx + 2013);
  xx[2010] = xx[1919] + xx[19] * (xx[2013] + xx[1930] * xx[1772]);
  xx[2011] = xx[19] * (xx[2014] + xx[1931] * xx[1772]) - xx[1920];
  xx[2012] = xx[19] * (xx[2015] - xx[1772] * xx[1934]);
  xx[2013] = xx[1942];
  xx[2014] = xx[1945];
  xx[2015] = xx[1948];
  xx[2016] = xx[1951];
  xx[2017] = xx[1954];
  xx[2018] = xx[1957];
  xx[2019] = xx[1943];
  xx[2020] = xx[1946];
  xx[2021] = xx[1949];
  xx[1941] = xx[1952];
  xx[1942] = xx[1955];
  xx[1943] = xx[1958];
  pm_math_cross3(xx + 1442, xx + 412, xx + 1944);
  xx[1947] = xx[1430] + xx[1944];
  xx[1948] = xx[1452] + xx[1945];
  xx[1949] = xx[1432] + xx[1946];
  pm_math_quatInverseXform(xx + 402, xx + 1947, xx + 1944);
  pm_math_quatInverseXform(xx + 402, xx + 1442, xx + 1946);
  xx[1430] = xx[1322] - (xx[374] * xx[1944] - xx[371] * xx[1945] - xx[369] * xx
    [1948]);
  xx[1322] = xx[1901] + xx[1904];
  xx[1432] = xx[1907] + xx[1913];
  xx[1442] = (xx[1916] - xx[271] * xx[1896] * xx[1899]) * xx[19] + xx[1922] +
    xx[249];
  xx[1944] = - xx[1322];
  xx[1945] = - xx[1432];
  xx[1946] = - xx[1442];
  solveSymmetricPosDef(xx + 91, xx + 1944, 3, 1, xx + 1947, xx + 1950);
  xx[1944] = xx[78] * xx[1947] + xx[140] * xx[1948];
  xx[1945] = xx[79] * xx[1948] - xx[713] * xx[1947];
  xx[1946] = xx[80] * xx[1949];
  pm_math_quatXform(xx + 1801, xx + 1944, xx + 1950);
  xx[1944] = xx[731] * xx[1947] - xx[806] * xx[1948] - xx[870] * xx[1949];
  xx[1945] = xx[806] * xx[1947] + xx[731] * xx[1948] + xx[908] * xx[1949];
  xx[1946] = xx[909] * xx[1947] + xx[927] * xx[1948];
  pm_math_quatXform(xx + 1801, xx + 1944, xx + 1953);
  pm_math_cross3(xx + 1871, xx + 1953, xx + 1944);
  xx[1443] = xx[1876] + xx[1839] + (xx[1769] * xx[1884] + xx[1890]) * xx[19];
  xx[1444] = (xx[1952] + xx[1946] - (xx[1835] * xx[1953] + xx[1824] * xx[1954])
              + xx[1443]) / xx[1898];
  xx[1452] = xx[1797] * xx[1444];
  xx[1839] = xx[1444] * xx[1783];
  xx[1944] = - ((xx[1452] * xx[1772] + xx[1839] * xx[1799]) * xx[19]);
  xx[1945] = xx[19] * (xx[1839] * xx[1772] - xx[1452] * xx[1799]);
  xx[1946] = (xx[1839] * xx[1783] + xx[1797] * xx[1452]) * xx[19] - xx[1444];
  xx[1452] = xx[1444] * xx[1872] + xx[1835] * xx[1444];
  xx[1839] = xx[1444] * xx[1871] - xx[1824] * xx[1444];
  xx[1884] = xx[1839] * xx[1799];
  xx[1899] = xx[1452] * xx[1799];
  xx[1919] = xx[1797] * xx[1452] + xx[1839] * xx[1783];
  xx[1950] = - xx[1884];
  xx[1951] = - xx[1899];
  xx[1952] = xx[1919];
  pm_math_cross3(xx + 1909, xx + 1950, xx + 1953);
  xx[1950] = xx[1452] + xx[19] * (xx[1953] + xx[1884] * xx[1772]);
  xx[1951] = xx[19] * (xx[1954] + xx[1899] * xx[1772]) - xx[1839];
  xx[1952] = xx[19] * (xx[1955] - xx[1919] * xx[1772]);
  xx[1452] = xx[1947] - (pm_math_dot3(xx + 1927, xx + 1944) + pm_math_dot3(xx +
    2007, xx + 1950));
  xx[1839] = xx[1948] - (pm_math_dot3(xx + 2013, xx + 1944) + pm_math_dot3(xx +
    2016, xx + 1950));
  xx[1884] = xx[1949] - (pm_math_dot3(xx + 2019, xx + 1944) + pm_math_dot3(xx +
    1941, xx + 1950));
  xx[1899] = xx[1324] * xx[1333] + xx[1380] * xx[1436] + xx[1271] * xx[1445] +
    xx[1264] * xx[1448] + xx[1384] * xx[1434] + xx[1263] * xx[1435] + xx[1269] *
    xx[1438] + xx[1331] * xx[1439] + xx[1340] * xx[1430] + xx[1886] * xx[1444] -
    xx[141] * xx[1452] - xx[142] * xx[1839] - xx[1403] * xx[1884];
  pm_math_cross3(xx + 1371, xx + 412, xx + 1944);
  xx[1947] = xx[1328] + xx[1944];
  xx[1948] = xx[1378] + xx[1945];
  xx[1949] = xx[1330] + xx[1946];
  pm_math_quatInverseXform(xx + 402, xx + 1947, xx + 1944);
  pm_math_quatInverseXform(xx + 402, xx + 1371, xx + 1946);
  xx[1328] = xx[1261] - (xx[374] * xx[1944] - xx[371] * xx[1945] - xx[369] * xx
    [1948]);
  xx[1261] = xx[1902] + xx[1905];
  xx[1330] = xx[1908] + xx[1914];
  xx[1371] = (xx[1896] * xx[1355] + xx[1917]) * xx[19] + xx[1923];
  xx[1900] = - xx[1261];
  xx[1901] = - xx[1330];
  xx[1902] = - xx[1371];
  solveSymmetricPosDef(xx + 91, xx + 1900, 3, 1, xx + 1903, xx + 1906);
  xx[1900] = xx[78] * xx[1903] + xx[140] * xx[1904];
  xx[1901] = xx[79] * xx[1904] - xx[713] * xx[1903];
  xx[1902] = xx[80] * xx[1905];
  pm_math_quatXform(xx + 1801, xx + 1900, xx + 1906);
  xx[1900] = xx[731] * xx[1903] - xx[806] * xx[1904] - xx[870] * xx[1905];
  xx[1901] = xx[806] * xx[1903] + xx[731] * xx[1904] + xx[908] * xx[1905];
  xx[1902] = xx[909] * xx[1903] + xx[927] * xx[1904];
  pm_math_quatXform(xx + 1801, xx + 1900, xx + 1912);
  pm_math_cross3(xx + 1871, xx + 1912, xx + 1900);
  xx[1355] = xx[1877] + (xx[1891] - xx[1769] * xx[1885]) * xx[19];
  xx[1372] = (xx[1908] + xx[1902] - (xx[1835] * xx[1912] + xx[1824] * xx[1913])
              + xx[1355]) / xx[1898];
  xx[1373] = xx[1797] * xx[1372];
  xx[1378] = xx[1372] * xx[1783];
  xx[1875] = - ((xx[1373] * xx[1772] + xx[1378] * xx[1799]) * xx[19]);
  xx[1876] = xx[19] * (xx[1378] * xx[1772] - xx[1373] * xx[1799]);
  xx[1877] = (xx[1378] * xx[1783] + xx[1797] * xx[1373]) * xx[19] - xx[1372];
  xx[1373] = xx[1372] * xx[1872] + xx[1835] * xx[1372];
  xx[1378] = xx[1372] * xx[1871] - xx[1824] * xx[1372];
  xx[1885] = xx[1378] * xx[1799];
  xx[1889] = xx[1373] * xx[1799];
  xx[1890] = xx[1797] * xx[1373] + xx[1378] * xx[1783];
  xx[1900] = - xx[1885];
  xx[1901] = - xx[1889];
  xx[1902] = xx[1890];
  pm_math_cross3(xx + 1909, xx + 1900, xx + 1906);
  xx[1900] = xx[1373] + xx[19] * (xx[1906] + xx[1885] * xx[1772]);
  xx[1901] = xx[19] * (xx[1907] + xx[1889] * xx[1772]) - xx[1378];
  xx[1902] = xx[19] * (xx[1908] - xx[1890] * xx[1772]);
  xx[1373] = xx[1903] - (pm_math_dot3(xx + 1927, xx + 1875) + pm_math_dot3(xx +
    2007, xx + 1900));
  xx[1378] = xx[1904] - (pm_math_dot3(xx + 2013, xx + 1875) + pm_math_dot3(xx +
    2016, xx + 1900));
  xx[1885] = xx[1905] - (pm_math_dot3(xx + 2019, xx + 1875) + pm_math_dot3(xx +
    1941, xx + 1900));
  xx[1875] = xx[1324] * xx[1314] + xx[1380] * xx[1339] + xx[1271] * xx[1366] +
    xx[1264] * xx[1377] + xx[1384] * xx[1337] + xx[1263] * xx[1338] + xx[1269] *
    xx[1362] + xx[1331] * xx[1363] + xx[1340] * xx[1328] + xx[1886] * xx[1372] -
    xx[141] * xx[1373] - xx[142] * xx[1378] - xx[1403] * xx[1885];
  pm_math_cross3(xx + 1481, xx + 412, xx + 1889);
  xx[1900] = xx[1478] + xx[1889];
  xx[1901] = xx[1477] + xx[1890];
  xx[1902] = xx[1480] + xx[1891];
  pm_math_quatInverseXform(xx + 402, xx + 1900, xx + 1889);
  pm_math_quatInverseXform(xx + 402, xx + 1481, xx + 1900);
  xx[1480] = xx[374] * xx[1889] - xx[371] * xx[1890] - xx[369] * xx[1902];
  xx[1876] = xx[1324] * xx[183] + xx[1380] * xx[763] + xx[1271] * xx[805] + xx
    [1264] * xx[807] + xx[1384] * xx[251] + xx[1263] * xx[550] + xx[1269] * xx
    [1416] + xx[1331] * xx[1475] - xx[1480] * xx[1340];
  pm_math_cross3(xx + 1531, xx + 412, xx + 1889);
  xx[1900] = xx[1512] + xx[1889];
  xx[1901] = xx[1542] + xx[1890];
  xx[1902] = xx[1514] + xx[1891];
  pm_math_quatInverseXform(xx + 402, xx + 1900, xx + 1889);
  pm_math_quatInverseXform(xx + 402, xx + 1531, xx + 1900);
  xx[1514] = xx[374] * xx[1889] - xx[371] * xx[1890] - xx[369] * xx[1902];
  xx[1877] = xx[1324] * xx[460] + xx[1380] * xx[1535] + xx[1271] * xx[1536] +
    xx[1264] * xx[1538] + xx[1384] * xx[1505] + xx[1263] * xx[1528] + xx[1269] *
    xx[1529] + xx[1331] * xx[1530] - xx[1514] * xx[1340];
  pm_math_cross3(xx + 1460, xx + 412, xx + 1889);
  xx[1900] = xx[1466] + xx[1889];
  xx[1901] = xx[793] + xx[1890];
  xx[1902] = xx[1468] + xx[1891];
  pm_math_quatInverseXform(xx + 402, xx + 1900, xx + 1889);
  pm_math_quatInverseXform(xx + 402, xx + 1460, xx + 1900);
  xx[1468] = xx[374] * xx[1889] - xx[371] * xx[1890] - xx[369] * xx[1902];
  xx[1889] = xx[1324] * xx[463] + xx[1380] * xx[171] + xx[1271] * xx[176] + xx
    [1264] * xx[761] + xx[1384] * xx[172] + xx[1263] * xx[174] + xx[1269] * xx
    [760] + xx[1331] * xx[762] - xx[1468] * xx[1340];
  xx[1890] = xx[1356] * xx[1314] + xx[1437] * xx[1339] + xx[1446] * xx[1366] +
    xx[1447] * xx[1377] + xx[1368] * xx[1337] + xx[1428] * xx[1338] + xx[1441] *
    xx[1362] + xx[1433] * xx[1363] + xx[1315] * xx[1328] + xx[1443] * xx[1372] -
    xx[1322] * xx[1373] - xx[1432] * xx[1378] - xx[1442] * xx[1885];
  xx[1891] = xx[1356] * xx[183] + xx[1437] * xx[763] + xx[1446] * xx[805] + xx
    [1447] * xx[807] + xx[1368] * xx[251] + xx[1428] * xx[550] + xx[1441] * xx
    [1416] + xx[1433] * xx[1475] - xx[1480] * xx[1315];
  xx[1896] = xx[1356] * xx[460] + xx[1437] * xx[1535] + xx[1446] * xx[1536] +
    xx[1447] * xx[1538] + xx[1368] * xx[1505] + xx[1428] * xx[1528] + xx[1441] *
    xx[1529] + xx[1433] * xx[1530] - xx[1514] * xx[1315];
  xx[1900] = xx[1356] * xx[463] + xx[1437] * xx[171] + xx[1446] * xx[176] + xx
    [1447] * xx[761] + xx[1368] * xx[172] + xx[1428] * xx[174] + xx[1441] * xx
    [760] + xx[1433] * xx[762] - xx[1468] * xx[1315];
  xx[1901] = xx[1259] * xx[183] + xx[1353] * xx[763] + xx[1367] * xx[805] + xx
    [1376] * xx[807] + xx[1323] * xx[251] + xx[1351] * xx[550] + xx[1365] * xx
    [1416] + xx[1352] * xx[1475] - xx[1480] * xx[1260];
  xx[1480] = xx[1259] * xx[460] + xx[1353] * xx[1535] + xx[1367] * xx[1536] +
    xx[1376] * xx[1538] + xx[1323] * xx[1505] + xx[1351] * xx[1528] + xx[1365] *
    xx[1529] + xx[1352] * xx[1530] - xx[1514] * xx[1260];
  xx[1514] = xx[1259] * xx[463] + xx[1353] * xx[171] + xx[1367] * xx[176] + xx
    [1376] * xx[761] + xx[1323] * xx[172] + xx[1351] * xx[174] + xx[1365] * xx
    [760] + xx[1352] * xx[762] - xx[1468] * xx[1260];
  xx[1902] = - (xx[125] + xx[49]);
  xx[1903] = xx[128];
  xx[1904] = xx[129];
  xx[1905] = xx[130];
  pm_math_quatCompose(xx + 1902, xx + 63, xx + 1906);
  xx[49] = xx[59] * xx[55];
  xx[125] = xx[61] * xx[56];
  xx[128] = xx[59] * xx[61];
  xx[1468] = xx[55] * xx[56];
  xx[1902] = xx[19] * (xx[128] - xx[1468]);
  xx[1903] = xx[56] * xx[56];
  xx[1904] = xx[59] * xx[59];
  xx[1910] = (xx[49] + xx[125]) * xx[19];
  xx[1911] = xx[1902];
  xx[1912] = xx[21] - (xx[1903] + xx[1904]) * xx[19];
  pm_math_cross3(xx + 1910, xx + 897, xx + 1913);
  pm_math_quatXform(xx + 1906, xx + 1913, xx + 1910);
  xx[1905] = xx[115] * xx[42] - xx[41] * xx[114];
  xx[1906] = 7.748428954013064e-12;
  xx[1907] = 5.376764528053357e-12;
  xx[1908] = xx[1906] * xx[41] - xx[1907] * xx[42];
  xx[1909] = xx[19] * xx[1908] * xx[42];
  xx[1913] = xx[19] * xx[42] * xx[1905] - (xx[115] + xx[1909]) - xx[1907];
  xx[1914] = xx[9];
  xx[1915] = xx[10];
  xx[1916] = xx[0];
  xx[0] = xx[19] * xx[1908] * xx[41];
  xx[9] = xx[114] + xx[19] * xx[41] * xx[1905] - xx[0] + xx[1906];
  xx[1905] = xx[9] * xx[6];
  xx[1908] = xx[1913] * xx[6];
  xx[1917] = xx[9] * xx[8] + xx[1913] * xx[10];
  xx[1919] = xx[1905];
  xx[1920] = - xx[1908];
  xx[1921] = - xx[1917];
  pm_math_cross3(xx + 1914, xx + 1919, xx + 1944);
  xx[1919] = xx[1910] + xx[1913] + xx[19] * (xx[1944] + xx[2] * xx[1905]);
  pm_math_quatXform(xx + 135, xx + 933, xx + 1920);
  pm_math_quatXform(xx + 63, xx + 753, xx + 933);
  pm_math_quatXform(xx + 131, xx + 933, xx + 1947);
  xx[933] = xx[1920] + xx[1947];
  xx[934] = xx[249] * xx[138];
  xx[935] = xx[249] * xx[136] + xx[271] * xx[137];
  xx[1950] = - xx[934];
  xx[1951] = - (xx[271] * xx[138]);
  xx[1952] = xx[935];
  pm_math_cross3(xx + 136, xx + 1950, xx + 1953);
  xx[1950] = xx[57];
  xx[1951] = xx[60];
  xx[1952] = xx[62];
  xx[57] = xx[67] * xx[61];
  xx[60] = xx[68] * xx[61];
  xx[62] = xx[67] * xx[56] + xx[59] * xx[68];
  xx[1956] = xx[57];
  xx[1957] = xx[60];
  xx[1958] = - xx[62];
  pm_math_cross3(xx + 1950, xx + 1956, xx + 2022);
  xx[1956] = xx[19] * (xx[2022] + xx[57] * xx[55]) - xx[68];
  xx[1957] = xx[67] + (xx[60] * xx[55] + xx[2023]) * xx[19];
  xx[1958] = (xx[2024] - xx[62] * xx[55]) * xx[19];
  pm_math_quatXform(xx + 131, xx + 1956, xx + 2022);
  xx[57] = xx[19] * (xx[1953] - xx[135] * xx[934]) + xx[2022] - xx[271];
  xx[1956] = - xx[147];
  xx[1957] = - xx[933];
  xx[1958] = - xx[57];
  solveSymmetricPosDef(xx + 100, xx + 1956, 3, 1, xx + 2025, xx + 2028);
  xx[1956] = xx[78] * xx[2025] + xx[140] * xx[2026];
  xx[1957] = xx[79] * xx[2026] - xx[713] * xx[2025];
  xx[1958] = xx[80] * xx[2027];
  pm_math_quatXform(xx + 63, xx + 1956, xx + 2028);
  xx[1956] = xx[731] * xx[2025] - xx[806] * xx[2026] - xx[870] * xx[2027];
  xx[1957] = xx[806] * xx[2025] + xx[731] * xx[2026] + xx[908] * xx[2027];
  xx[1958] = xx[909] * xx[2025] + xx[927] * xx[2026];
  pm_math_quatXform(xx + 63, xx + 1956, xx + 2031);
  pm_math_cross3(xx + 114, xx + 2031, xx + 1956);
  xx[60] = xx[55] * xx[55];
  xx[62] = (xx[60] + xx[1903]) * xx[19] - xx[21];
  xx[136] = xx[59] * xx[56];
  xx[137] = xx[55] * xx[61];
  xx[934] = (xx[136] + xx[137]) * xx[19];
  xx[1903] = xx[19] * (xx[125] - xx[49]);
  xx[1905] = xx[19] * (xx[136] - xx[137]);
  xx[136] = (xx[60] + xx[1904]) * xx[19] - xx[21];
  xx[137] = (xx[128] + xx[1468]) * xx[19];
  xx[128] = (xx[125] + xx[49]) * xx[19];
  xx[49] = (xx[60] + xx[61] * xx[61]) * xx[19] - xx[21];
  xx[2033] = xx[62];
  xx[2034] = xx[934];
  xx[2035] = xx[1903];
  xx[2036] = xx[1905];
  xx[2037] = xx[136];
  xx[2038] = xx[137];
  xx[2039] = xx[128];
  xx[2040] = xx[1902];
  xx[2041] = xx[49];
  solveSymmetricPosDef(xx + 100, xx + 975, 3, 6, xx + 2042, xx + 2060);
  xx[60] = - (xx[79] * xx[2043] - xx[713] * xx[2042]);
  xx[125] = - (xx[80] * xx[2044]);
  xx[975] = - (xx[80] * xx[2047]);
  xx[976] = xx[78] - (xx[78] * xx[2042] + xx[140] * xx[2043]);
  xx[977] = xx[60];
  xx[978] = xx[125];
  xx[979] = xx[60];
  xx[980] = xx[79] - (xx[79] * xx[2046] - xx[713] * xx[2045]);
  xx[981] = xx[975];
  xx[982] = xx[125];
  xx[983] = xx[975];
  xx[984] = xx[80] - xx[80] * xx[2050];
  pm_math_matrix3x3ComposeTranspose(xx + 976, xx + 2033, xx + 2060);
  pm_math_matrix3x3Compose(xx + 2033, xx + 2060, xx + 975);
  xx[984] = - (xx[78] * xx[2051] + xx[140] * xx[2052]);
  xx[985] = - (xx[78] * xx[2054] + xx[140] * xx[2055]);
  xx[986] = - (xx[78] * xx[2057] + xx[140] * xx[2058]);
  xx[987] = - (xx[79] * xx[2052] - xx[713] * xx[2051]);
  xx[988] = - (xx[79] * xx[2055] - xx[713] * xx[2054]);
  xx[989] = - (xx[79] * xx[2058] - xx[713] * xx[2057]);
  xx[990] = - (xx[80] * xx[2053]);
  xx[991] = - (xx[80] * xx[2056]);
  xx[992] = - (xx[80] * xx[2059]);
  pm_math_matrix3x3ComposeTranspose(xx + 984, xx + 2033, xx + 2060);
  pm_math_matrix3x3Compose(xx + 2033, xx + 2060, xx + 984);
  pm_math_matrix3x3PostCross(xx + 984, xx + 114, xx + 2060);
  xx[60] = - (xx[806] * xx[2051] + xx[731] * xx[2052] + xx[908] * xx[2053]);
  xx[125] = - (xx[909] * xx[2051] + xx[927] * xx[2052]);
  xx[1468] = - (xx[909] * xx[2054] + xx[927] * xx[2055]);
  xx[2069] = xx[73] - (xx[731] * xx[2051] - xx[806] * xx[2052] - xx[870] * xx
                       [2053]);
  xx[2070] = xx[60];
  xx[2071] = xx[125];
  xx[2072] = xx[60];
  xx[2073] = xx[73] - (xx[806] * xx[2054] + xx[731] * xx[2055] + xx[908] * xx
                       [2056]);
  xx[2074] = xx[1468];
  xx[2075] = xx[125];
  xx[2076] = xx[1468];
  xx[2077] = xx[73] - (xx[909] * xx[2057] + xx[927] * xx[2058]);
  pm_math_matrix3x3ComposeTranspose(xx + 2069, xx + 2033, xx + 2078);
  pm_math_matrix3x3Compose(xx + 2033, xx + 2078, xx + 2069);
  pm_math_matrix3x3PostCross(xx + 2069, xx + 114, xx + 2033);
  pm_math_matrix3x3PreCross(xx + 2033, xx + 114, xx + 2078);
  xx[60] = xx[990] - xx[2035];
  xx[125] = xx[991] - xx[2038];
  xx[990] = xx[983] - xx[2068] - xx[2068] - xx[2086] - xx[1907] * xx[60] + xx
    [1906] * xx[125] + xx[52];
  xx[991] = xx[393] + xx[2073];
  xx[1468] = xx[125] + xx[991] * xx[1906] - xx[1907] * xx[2072];
  xx[1904] = xx[393] + xx[2069];
  xx[1913] = xx[60] + xx[1906] * xx[2070] - xx[1904] * xx[1907];
  xx[1923] = xx[990] + xx[1468] * xx[1906] - xx[1913] * xx[1907];
  ii[0] = factorSymmetricPosDef(xx + 1923, 1, xx + 1930);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute13' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1930] = (xx[2030] + xx[1958] + xx[1906] * xx[2032] - xx[1907] * xx[2031] +
              xx[1919]) / xx[1923];
  xx[1956] = xx[2042];
  xx[1957] = xx[2045];
  xx[1958] = xx[2048];
  xx[1931] = xx[59] * xx[1930];
  xx[1934] = xx[1930] * xx[56];
  xx[2028] = - ((xx[1931] * xx[55] + xx[1934] * xx[61]) * xx[19]);
  xx[2029] = xx[19] * (xx[1934] * xx[55] - xx[1931] * xx[61]);
  xx[2030] = (xx[1934] * xx[56] + xx[59] * xx[1931]) * xx[19] - xx[1930];
  xx[2087] = xx[2051];
  xx[2088] = xx[2054];
  xx[2089] = xx[2057];
  xx[1931] = xx[1930] * xx[115] + xx[1907] * xx[1930];
  xx[1934] = xx[1906] * xx[1930] + xx[1930] * xx[114];
  xx[1937] = xx[1934] * xx[61];
  xx[1974] = xx[61] * xx[1931];
  xx[1975] = xx[59] * xx[1931] + xx[1934] * xx[56];
  xx[2090] = - xx[1937];
  xx[2091] = - xx[1974];
  xx[2092] = xx[1975];
  pm_math_cross3(xx + 1950, xx + 2090, xx + 2093);
  xx[2090] = xx[1931] + xx[19] * (xx[2093] + xx[1937] * xx[55]);
  xx[2091] = xx[19] * (xx[2094] + xx[1974] * xx[55]) - xx[1934];
  xx[2092] = xx[19] * (xx[2095] - xx[55] * xx[1975]);
  xx[2093] = xx[2043];
  xx[2094] = xx[2046];
  xx[2095] = xx[2049];
  xx[2096] = xx[2052];
  xx[2097] = xx[2055];
  xx[2098] = xx[2058];
  xx[2099] = xx[2044];
  xx[2100] = xx[2047];
  xx[2101] = xx[2050];
  xx[2042] = xx[2053];
  xx[2043] = xx[2056];
  xx[2044] = xx[2059];
  pm_math_cross3(xx + 1481, xx + 1398, xx + 2045);
  xx[1481] = xx[1478] + xx[2045];
  xx[1478] = xx[1477] + xx[2046];
  xx[1477] = xx[1478] * xx[356];
  xx[1482] = xx[1481] * xx[356];
  xx[1483] = xx[145] + xx[151];
  xx[1931] = xx[1921] + xx[1948];
  xx[1934] = (xx[1954] - xx[271] * xx[135] * xx[138]) * xx[19] + xx[2023] + xx
    [249];
  xx[2045] = - xx[1483];
  xx[2046] = - xx[1931];
  xx[2047] = - xx[1934];
  solveSymmetricPosDef(xx + 100, xx + 2045, 3, 1, xx + 2048, xx + 2051);
  xx[2045] = xx[78] * xx[2048] + xx[140] * xx[2049];
  xx[2046] = xx[79] * xx[2049] - xx[713] * xx[2048];
  xx[2047] = xx[80] * xx[2050];
  pm_math_quatXform(xx + 63, xx + 2045, xx + 2051);
  xx[2045] = xx[731] * xx[2048] - xx[806] * xx[2049] - xx[870] * xx[2050];
  xx[2046] = xx[806] * xx[2048] + xx[731] * xx[2049] + xx[908] * xx[2050];
  xx[2047] = xx[909] * xx[2048] + xx[927] * xx[2049];
  pm_math_quatXform(xx + 63, xx + 2045, xx + 2054);
  pm_math_cross3(xx + 114, xx + 2054, xx + 2045);
  xx[138] = xx[1911] + xx[9] + (xx[1945] - xx[2] * xx[1908]) * xx[19];
  xx[9] = (xx[2053] + xx[2047] + xx[1906] * xx[2055] - xx[1907] * xx[2054] + xx
           [138]) / xx[1923];
  xx[249] = xx[59] * xx[9];
  xx[271] = xx[9] * xx[56];
  xx[2045] = - ((xx[249] * xx[55] + xx[271] * xx[61]) * xx[19]);
  xx[2046] = xx[19] * (xx[271] * xx[55] - xx[249] * xx[61]);
  xx[2047] = (xx[271] * xx[56] + xx[59] * xx[249]) * xx[19] - xx[9];
  xx[249] = xx[9] * xx[115] + xx[1907] * xx[9];
  xx[271] = xx[1906] * xx[9] + xx[9] * xx[114];
  xx[1908] = xx[271] * xx[61];
  xx[1937] = xx[61] * xx[249];
  xx[1974] = xx[59] * xx[249] + xx[271] * xx[56];
  xx[2051] = - xx[1908];
  xx[2052] = - xx[1937];
  xx[2053] = xx[1974];
  pm_math_cross3(xx + 1950, xx + 2051, xx + 2054);
  xx[2051] = xx[249] + xx[19] * (xx[2054] + xx[1908] * xx[55]);
  xx[2052] = xx[19] * (xx[2055] + xx[1937] * xx[55]) - xx[271];
  xx[2053] = xx[19] * (xx[2056] - xx[55] * xx[1974]);
  xx[249] = xx[2048] - (pm_math_dot3(xx + 1956, xx + 2045) + pm_math_dot3(xx +
    2087, xx + 2051));
  xx[271] = xx[2049] - (pm_math_dot3(xx + 2093, xx + 2045) + pm_math_dot3(xx +
    2096, xx + 2051));
  xx[1908] = xx[2050] - (pm_math_dot3(xx + 2099, xx + 2045) + pm_math_dot3(xx +
    2042, xx + 2051));
  pm_math_cross3(xx + 1531, xx + 1398, xx + 2045);
  xx[1531] = xx[1512] + xx[2045];
  xx[1512] = xx[1542] + xx[2046];
  xx[1532] = xx[1512] * xx[356];
  xx[1533] = xx[1531] * xx[356];
  xx[1542] = xx[316] - (xx[394] * (xx[1531] - (xx[352] * xx[1532] + xx[1533] *
    xx[356]) * xx[19]) - (xx[1512] + xx[19] * (xx[352] * xx[1533] - xx[1532] *
    xx[356])) * xx[399] - xx[1476] * xx[666]);
  xx[316] = xx[1919] * xx[9] - xx[147] * xx[249] - xx[933] * xx[271] - xx[57] *
    xx[1908] + xx[1450] * xx[460] + xx[459] * xx[1535] + xx[185] * xx[1536] +
    xx[247] * xx[1538] + xx[623] * xx[1505] + xx[184] * xx[1528] + xx[182] * xx
    [1529] + xx[292] * xx[1530] + xx[1457] * xx[1542];
  xx[144] = xx[146] + xx[152];
  xx[145] = xx[1922] + xx[1949];
  xx[146] = (xx[135] * xx[935] + xx[1955]) * xx[19] + xx[2024];
  xx[150] = - xx[144];
  xx[151] = - xx[145];
  xx[152] = - xx[146];
  solveSymmetricPosDef(xx + 100, xx + 150, 3, 1, xx + 1531, xx + 1920);
  xx[150] = xx[78] * xx[1531] + xx[140] * xx[1532];
  xx[151] = xx[79] * xx[1532] - xx[713] * xx[1531];
  xx[152] = xx[80] * xx[1533];
  pm_math_quatXform(xx + 63, xx + 150, xx + 1920);
  xx[150] = xx[731] * xx[1531] - xx[806] * xx[1532] - xx[870] * xx[1533];
  xx[151] = xx[806] * xx[1531] + xx[731] * xx[1532] + xx[908] * xx[1533];
  xx[152] = xx[909] * xx[1531] + xx[927] * xx[1532];
  pm_math_quatXform(xx + 63, xx + 150, xx + 1947);
  pm_math_cross3(xx + 114, xx + 1947, xx + 150);
  xx[135] = xx[1912] + (xx[1946] - xx[2] * xx[1917]) * xx[19];
  xx[150] = (xx[1922] + xx[152] + xx[1906] * xx[1948] - xx[1907] * xx[1947] +
             xx[135]) / xx[1923];
  xx[151] = xx[59] * xx[150];
  xx[152] = xx[150] * xx[56];
  xx[1910] = - ((xx[151] * xx[55] + xx[152] * xx[61]) * xx[19]);
  xx[1911] = xx[19] * (xx[152] * xx[55] - xx[151] * xx[61]);
  xx[1912] = (xx[152] * xx[56] + xx[59] * xx[151]) * xx[19] - xx[150];
  xx[151] = xx[150] * xx[115] + xx[1907] * xx[150];
  xx[152] = xx[1906] * xx[150] + xx[150] * xx[114];
  xx[935] = xx[152] * xx[61];
  xx[1476] = xx[61] * xx[151];
  xx[1512] = xx[59] * xx[151] + xx[152] * xx[56];
  xx[1920] = - xx[935];
  xx[1921] = - xx[1476];
  xx[1922] = xx[1512];
  pm_math_cross3(xx + 1950, xx + 1920, xx + 1944);
  xx[1920] = xx[151] + xx[19] * (xx[1944] + xx[935] * xx[55]);
  xx[1921] = xx[19] * (xx[1945] + xx[1476] * xx[55]) - xx[152];
  xx[1922] = xx[19] * (xx[1946] - xx[55] * xx[1512]);
  xx[151] = xx[1531] - (pm_math_dot3(xx + 1956, xx + 1910) + pm_math_dot3(xx +
    2087, xx + 1920));
  xx[152] = xx[1532] - (pm_math_dot3(xx + 2093, xx + 1910) + pm_math_dot3(xx +
    2096, xx + 1920));
  xx[935] = xx[1533] - (pm_math_dot3(xx + 2099, xx + 1910) + pm_math_dot3(xx +
    2042, xx + 1920));
  pm_math_cross3(xx + 1460, xx + 1398, xx + 1531);
  xx[1460] = xx[1466] + xx[1531];
  xx[1461] = xx[793] + xx[1532];
  xx[793] = xx[1461] * xx[356];
  xx[1462] = xx[1460] * xx[356];
  xx[1466] = xx[317] - (xx[394] * (xx[1460] - (xx[352] * xx[793] + xx[1462] *
    xx[356]) * xx[19]) - (xx[1461] + xx[19] * (xx[352] * xx[1462] - xx[793] *
    xx[356])) * xx[399] - xx[783] * xx[666]);
  xx[317] = xx[1919] * xx[150] - xx[147] * xx[151] - xx[933] * xx[152] - xx[57] *
    xx[935] + xx[1450] * xx[463] + xx[459] * xx[171] + xx[185] * xx[176] + xx
    [247] * xx[761] + xx[623] * xx[172] + xx[184] * xx[174] + xx[182] * xx[760]
    + xx[292] * xx[762] + xx[1457] * xx[1466];
  xx[783] = xx[138] * xx[150] - xx[1483] * xx[151] - xx[1931] * xx[152] - xx
    [1934] * xx[935] + xx[612] * xx[463] + xx[1497] * xx[171] + xx[1515] * xx
    [176] + xx[1537] * xx[761] + xx[1440] * xx[172] + xx[1487] * xx[174] + xx
    [1498] * xx[760] + xx[613] * xx[762] + xx[1431] * xx[1466];
  xx[2102] = xx[290] * xx[656] + xx[771] * xx[680] + xx[263] * xx[544] + xx[173]
    * xx[545] + xx[554] * xx[546] + xx[186] * xx[588] + xx[250] * xx[589] + xx
    [312] * xx[340] + xx[242] * (xx[327] + xx[379] * xx[668] + xx[534] * (xx[418]
    - (xx[193] * xx[657] + xx[660] * xx[205]) * xx[19]) + (xx[520] + xx[19] *
    (xx[193] * xx[660] - xx[657] * xx[205])) * xx[569]) + xx[907] * xx[1038] -
    xx[661] * (xx[957] - (pm_math_dot3(xx + 962, xx + 1056) + pm_math_dot3(xx +
    1059, xx + 1065))) - xx[139] * (xx[958] - (pm_math_dot3(xx + 1062, xx + 1056)
    + pm_math_dot3(xx + 1068, xx + 1065))) - xx[702] * (xx[959] - (pm_math_dot3
    (xx + 1071, xx + 1056) + pm_math_dot3(xx + 993, xx + 1065)));
  xx[2103] = xx[1006];
  xx[2104] = xx[563];
  xx[2105] = xx[1074];
  xx[2106] = xx[946];
  xx[2107] = xx[839];
  xx[2108] = xx[1213];
  xx[2109] = xx[1292];
  xx[2110] = xx[1193];
  xx[2111] = xx[1348];
  xx[2112] = xx[1427];
  xx[2113] = xx[1327];
  xx[2114] = xx[611];
  xx[2115] = xx[1513];
  xx[2116] = xx[792];
  xx[2117] = xx[1006];
  xx[2118] = xx[953] * xx[330] + xx[1008] * xx[1010] + xx[1042] * xx[1078] + xx
    [1077] * xx[1079] + xx[996] * xx[999] + xx[997] * xx[1000] + xx[1009] * xx
    [1004] + xx[281] * xx[1005] + xx[288] * xx[1007] + xx[929] * xx[860] - xx
    [236] * xx[905] - xx[998] * xx[1002] - xx[1001] * xx[1003];
  xx[2119] = xx[1449];
  xx[2120] = xx[1463];
  xx[2121] = xx[1464];
  xx[2122] = xx[1467];
  xx[2123] = xx[1470];
  xx[2124] = xx[1472];
  xx[2125] = xx[1473];
  xx[2126] = xx[1474];
  xx[2127] = xx[1484];
  xx[2128] = xx[1485];
  xx[2129] = xx[1486];
  xx[2130] = xx[1494];
  xx[2131] = xx[1495];
  xx[2132] = xx[563];
  xx[2133] = xx[1449];
  xx[2134] = xx[225] * xx[239] + xx[294] * xx[324] + xx[548] * xx[547] + xx[549]
    * xx[562] + xx[283] * xx[322] + xx[289] * xx[323] + xx[295] * xx[331] + xx
    [226] * xx[332] + xx[227] * xx[334] + xx[319] * xx[320] - xx[155] * xx[333]
    - xx[293] * xx[335] - xx[318] * xx[336];
  xx[2135] = xx[1496];
  xx[2136] = xx[1160];
  xx[2137] = xx[1182];
  xx[2138] = xx[1114];
  xx[2139] = xx[1294];
  xx[2140] = xx[1316];
  xx[2141] = xx[1248];
  xx[2142] = xx[1429];
  xx[2143] = xx[1451];
  xx[2144] = xx[1383];
  xx[2145] = xx[1479];
  xx[2146] = xx[1499];
  xx[2147] = xx[1074];
  xx[2148] = xx[1463];
  xx[2149] = xx[1496];
  xx[2150] = xx[911] * xx[651] + xx[1111] * xx[1096] + xx[802] * xx[1097] + xx
    [789] * xx[1124] + xx[1115] * xx[790] + xx[700] * xx[1088] + xx[650] * xx
    [1089] + xx[944] * xx[1090] + xx[912] * (xx[838] - (xx[479] * xx[1502] + xx
    [583] * xx[1507] - xx[586] * xx[1506])) + xx[1556] * xx[1607] - xx[148] *
    (xx[1603] - (pm_math_dot3(xx + 1608, xx + 1683) + pm_math_dot3(xx + 1686, xx
       + 1689))) - xx[162] * (xx[1604] - (pm_math_dot3(xx + 1692, xx + 1683) +
    pm_math_dot3(xx + 1695, xx + 1689))) - xx[1504] * (xx[1605] - (pm_math_dot3
    (xx + 1698, xx + 1683) + pm_math_dot3(xx + 1620, xx + 1689)));
  xx[2151] = xx[1578];
  xx[2152] = xx[1545];
  xx[2153] = xx[1555];
  xx[2154] = xx[1560];
  xx[2155] = xx[1575];
  xx[2156] = xx[1580];
  xx[2157] = xx[1582];
  xx[2158] = xx[1584];
  xx[2159] = xx[1586];
  xx[2160] = xx[1588];
  xx[2161] = xx[1590];
  xx[2162] = xx[946];
  xx[2163] = xx[1464];
  xx[2164] = xx[1160];
  xx[2165] = xx[1578];
  xx[2166] = xx[1086] * xx[1095] + xx[1161] * xx[1175] + xx[1177] * xx[1176] +
    xx[1178] * xx[1179] + xx[1158] * xx[1167] + xx[1159] * xx[1168] + xx[1162] *
    xx[1169] + xx[1163] * xx[1170] + xx[840] * xx[1164] + xx[1172] * xx[1173] -
    xx[906] * xx[1183] - xx[1166] * xx[1547] - xx[1171] * xx[1554];
  xx[2167] = xx[1591];
  xx[2168] = xx[1592];
  xx[2169] = xx[1593];
  xx[2170] = xx[1594];
  xx[2171] = xx[1595];
  xx[2172] = xx[1596];
  xx[2173] = xx[1599];
  xx[2174] = xx[1600];
  xx[2175] = xx[1601];
  xx[2176] = xx[1602];
  xx[2177] = xx[839];
  xx[2178] = xx[1467];
  xx[2179] = xx[1182];
  xx[2180] = xx[1545];
  xx[2181] = xx[1591];
  xx[2182] = xx[750] * xx[910] + xx[949] * xx[1082] + xx[1103] * xx[1102] + xx
    [1107] * xx[1108] + xx[943] * xx[1080] + xx[948] * xx[1081] + xx[1098] * xx
    [1092] + xx[947] * xx[1093] + xx[751] * xx[940] + xx[1100] * xx[1101] - xx
    [752] * xx[1109] - xx[942] * xx[1543] - xx[1099] * xx[1544];
  xx[2183] = xx[1613];
  xx[2184] = xx[1549];
  xx[2185] = xx[1559];
  xx[2186] = xx[1561];
  xx[2187] = xx[1579];
  xx[2188] = xx[1581];
  xx[2189] = xx[1583];
  xx[2190] = xx[1585];
  xx[2191] = xx[1587];
  xx[2192] = xx[1213];
  xx[2193] = xx[1470];
  xx[2194] = xx[1114];
  xx[2195] = xx[1555];
  xx[2196] = xx[1592];
  xx[2197] = xx[1613];
  xx[2198] = xx[1190] * xx[1131] + xx[1245] * xx[1234] + xx[1137] * xx[1235] +
    xx[1130] * xx[1258] + xx[1249] * xx[1136] + xx[1129] * xx[1223] + xx[1135] *
    xx[1224] + xx[1197] * xx[1225] + xx[1192] * (xx[1174] - (xx[494] * xx[1623]
    + xx[497] * xx[1624] - xx[492] * xx[1627])) + xx[1726] * xx[1777] - xx[1220]
    * (xx[1773] - (pm_math_dot3(xx + 1778, xx + 1853) + pm_math_dot3(xx + 1856,
         xx + 1859))) - xx[1272] * (xx[1774] - (pm_math_dot3(xx + 1862, xx +
    1853) + pm_math_dot3(xx + 1865, xx + 1859))) - xx[1636] * (xx[1775] -
    (pm_math_dot3(xx + 1868, xx + 1853) + pm_math_dot3(xx + 1790, xx + 1859)));
  xx[2199] = xx[1748];
  xx[2200] = xx[1713];
  xx[2201] = xx[1725];
  xx[2202] = xx[1729];
  xx[2203] = xx[1745];
  xx[2204] = xx[1749];
  xx[2205] = xx[1752];
  xx[2206] = xx[1753];
  xx[2207] = xx[1292];
  xx[2208] = xx[1472];
  xx[2209] = xx[1294];
  xx[2210] = xx[1560];
  xx[2211] = xx[1593];
  xx[2212] = xx[1549];
  xx[2213] = xx[1748];
  xx[2214] = xx[1221] * xx[1199] + xx[1302] * xx[1301] + xx[1311] * xx[1310] +
    xx[1312] * xx[1313] + xx[1233] * xx[1299] + xx[1293] * xx[1300] + xx[1306] *
    xx[1303] + xx[1298] * xx[1304] + xx[1181] * xx[1295] + xx[1308] * xx[1309] -
    xx[1188] * xx[1317] - xx[1297] * xx[1716] - xx[1307] * xx[1724];
  xx[2215] = xx[1754];
  xx[2216] = xx[1756];
  xx[2217] = xx[1757];
  xx[2218] = xx[1758];
  xx[2219] = xx[1759];
  xx[2220] = xx[1760];
  xx[2221] = xx[1761];
  xx[2222] = xx[1193];
  xx[2223] = xx[1473];
  xx[2224] = xx[1316];
  xx[2225] = xx[1575];
  xx[2226] = xx[1594];
  xx[2227] = xx[1559];
  xx[2228] = xx[1713];
  xx[2229] = xx[1754];
  xx[2230] = xx[1125] * xx[1180] + xx[1218] * xx[1205] + xx[1232] * xx[1231] +
    xx[1241] * xx[1242] + xx[1189] * xx[1203] + xx[1216] * xx[1204] + xx[1230] *
    xx[1227] + xx[1217] * xx[1228] + xx[1126] * xx[1194] + xx[1237] * xx[1238] -
    xx[1127] * xx[1243] - xx[1196] * xx[1711] - xx[1236] * xx[1712];
  xx[2231] = xx[1762];
  xx[2232] = xx[1718];
  xx[2233] = xx[1731];
  xx[2234] = xx[1730];
  xx[2235] = xx[1751];
  xx[2236] = xx[1750];
  xx[2237] = xx[1348];
  xx[2238] = xx[1474];
  xx[2239] = xx[1248];
  xx[2240] = xx[1580];
  xx[2241] = xx[1595];
  xx[2242] = xx[1561];
  xx[2243] = xx[1725];
  xx[2244] = xx[1756];
  xx[2245] = xx[1762];
  xx[2246] = xx[1324] * xx[1265] + xx[1380] * xx[1369] + xx[1271] * xx[1370] +
    xx[1264] * xx[1393] + xx[1384] * xx[1270] + xx[1263] * xx[1358] + xx[1269] *
    xx[1359] + xx[1331] * xx[1360] + xx[1340] * (xx[1305] - (xx[374] * xx[1763]
    - xx[371] * xx[1764] - xx[369] * xx[1771])) + xx[1886] * xx[1918] - xx[141] *
    (xx[1924] - (pm_math_dot3(xx + 1927, xx + 2004) + pm_math_dot3(xx + 2007, xx
       + 2010))) - xx[142] * (xx[1925] - (pm_math_dot3(xx + 2013, xx + 2004) +
    pm_math_dot3(xx + 2016, xx + 2010))) - xx[1403] * (xx[1926] - (pm_math_dot3
    (xx + 2019, xx + 2004) + pm_math_dot3(xx + 1941, xx + 2010)));
  xx[2247] = xx[1899];
  xx[2248] = xx[1875];
  xx[2249] = xx[1876];
  xx[2250] = xx[1877];
  xx[2251] = xx[1889];
  xx[2252] = xx[1427];
  xx[2253] = xx[1484];
  xx[2254] = xx[1429];
  xx[2255] = xx[1582];
  xx[2256] = xx[1596];
  xx[2257] = xx[1579];
  xx[2258] = xx[1729];
  xx[2259] = xx[1757];
  xx[2260] = xx[1718];
  xx[2261] = xx[1899];
  xx[2262] = xx[1356] * xx[1333] + xx[1437] * xx[1436] + xx[1446] * xx[1445] +
    xx[1447] * xx[1448] + xx[1368] * xx[1434] + xx[1428] * xx[1435] + xx[1441] *
    xx[1438] + xx[1433] * xx[1439] + xx[1315] * xx[1430] + xx[1443] * xx[1444] -
    xx[1322] * xx[1452] - xx[1432] * xx[1839] - xx[1442] * xx[1884];
  xx[2263] = xx[1890];
  xx[2264] = xx[1891];
  xx[2265] = xx[1896];
  xx[2266] = xx[1900];
  xx[2267] = xx[1327];
  xx[2268] = xx[1485];
  xx[2269] = xx[1451];
  xx[2270] = xx[1584];
  xx[2271] = xx[1599];
  xx[2272] = xx[1581];
  xx[2273] = xx[1745];
  xx[2274] = xx[1758];
  xx[2275] = xx[1731];
  xx[2276] = xx[1875];
  xx[2277] = xx[1890];
  xx[2278] = xx[1259] * xx[1314] + xx[1353] * xx[1339] + xx[1367] * xx[1366] +
    xx[1376] * xx[1377] + xx[1323] * xx[1337] + xx[1351] * xx[1338] + xx[1365] *
    xx[1362] + xx[1352] * xx[1363] + xx[1260] * xx[1328] + xx[1355] * xx[1372] -
    xx[1261] * xx[1373] - xx[1330] * xx[1378] - xx[1371] * xx[1885];
  xx[2279] = xx[1901];
  xx[2280] = xx[1480];
  xx[2281] = xx[1514];
  xx[2282] = xx[611];
  xx[2283] = xx[1486];
  xx[2284] = xx[1383];
  xx[2285] = xx[1586];
  xx[2286] = xx[1600];
  xx[2287] = xx[1583];
  xx[2288] = xx[1749];
  xx[2289] = xx[1759];
  xx[2290] = xx[1730];
  xx[2291] = xx[1876];
  xx[2292] = xx[1891];
  xx[2293] = xx[1901];
  xx[2294] = xx[1919] * xx[1930] - xx[147] * (xx[2025] - (pm_math_dot3(xx + 1956,
    xx + 2028) + pm_math_dot3(xx + 2087, xx + 2090))) - xx[933] * (xx[2026] -
    (pm_math_dot3(xx + 2093, xx + 2028) + pm_math_dot3(xx + 2096, xx + 2090))) -
    xx[57] * (xx[2027] - (pm_math_dot3(xx + 2099, xx + 2028) + pm_math_dot3(xx +
    2042, xx + 2090))) + xx[1450] * xx[183] + xx[459] * xx[763] + xx[185] * xx
    [805] + xx[247] * xx[807] + xx[623] * xx[251] + xx[184] * xx[550] + xx[182] *
    xx[1416] + xx[292] * xx[1475] + xx[1457] * (xx[314] - (xx[394] * (xx[1481] -
    (xx[352] * xx[1477] + xx[1482] * xx[356]) * xx[19]) - (xx[1478] + xx[19] *
    (xx[352] * xx[1482] - xx[1477] * xx[356])) * xx[399] - xx[1459] * xx[666]));
  xx[2295] = xx[316];
  xx[2296] = xx[317];
  xx[2297] = xx[1513];
  xx[2298] = xx[1494];
  xx[2299] = xx[1479];
  xx[2300] = xx[1588];
  xx[2301] = xx[1601];
  xx[2302] = xx[1585];
  xx[2303] = xx[1752];
  xx[2304] = xx[1760];
  xx[2305] = xx[1751];
  xx[2306] = xx[1877];
  xx[2307] = xx[1896];
  xx[2308] = xx[1480];
  xx[2309] = xx[316];
  xx[2310] = xx[138] * xx[9] - xx[1483] * xx[249] - xx[1931] * xx[271] - xx[1934]
    * xx[1908] + xx[612] * xx[460] + xx[1497] * xx[1535] + xx[1515] * xx[1536] +
    xx[1537] * xx[1538] + xx[1440] * xx[1505] + xx[1487] * xx[1528] + xx[1498] *
    xx[1529] + xx[613] * xx[1530] + xx[1431] * xx[1542];
  xx[2311] = xx[783];
  xx[2312] = xx[792];
  xx[2313] = xx[1495];
  xx[2314] = xx[1499];
  xx[2315] = xx[1590];
  xx[2316] = xx[1602];
  xx[2317] = xx[1587];
  xx[2318] = xx[1753];
  xx[2319] = xx[1761];
  xx[2320] = xx[1750];
  xx[2321] = xx[1889];
  xx[2322] = xx[1900];
  xx[2323] = xx[1514];
  xx[2324] = xx[317];
  xx[2325] = xx[783];
  xx[2326] = xx[135] * xx[150] - xx[144] * xx[151] - xx[145] * xx[152] - xx[146]
    * xx[935] + xx[1394] * xx[463] + xx[782] * xx[171] + xx[784] * xx[176] + xx
    [791] * xx[761] + xx[1424] * xx[172] + xx[1469] * xx[174] + xx[1471] * xx
    [760] + xx[1395] * xx[762] + xx[1396] * xx[1466];
  xx[330] = xx[163];
  xx[331] = xx[149];
  xx[332] = xx[156];
  xx[333] = xx[164];
  pm_math_quatInverseXform(xx + 330, xx + 35, xx + 150);
  xx[9] = xx[157] * xx[151] + xx[150] * xx[159];
  xx[171] = xx[150] - xx[19] * xx[9] * xx[159];
  xx[172] = xx[151] - xx[19] * xx[9] * xx[157];
  xx[9] = xx[152] + inputDot[6];
  xx[174] = xx[9] - (xx[157] * xx[9] * xx[157] + xx[9] * xx[159] * xx[159]) *
    xx[19];
  xx[176] = xx[174] + state[10];
  xx[322] = xx[171];
  xx[323] = xx[172];
  xx[324] = xx[176];
  xx[334] = xx[50] * xx[171];
  xx[335] = xx[51] * xx[172];
  xx[336] = xx[176] * xx[52];
  pm_math_cross3(xx + 322, xx + 334, xx + 544);
  pm_math_quatInverseXform(xx + 178, xx + 322, xx + 334);
  xx[183] = xx[53] * state[15];
  xx[239] = xx[53] * state[16];
  xx[249] = state[15] - (xx[53] * xx[183] - xx[54] * xx[239]) * xx[19];
  xx[251] = xx[334] + xx[249];
  xx[271] = state[16] - xx[19] * (xx[54] * xx[183] + xx[53] * xx[239]);
  xx[183] = xx[335] + xx[271];
  xx[239] = xx[336] + state[17];
  xx[760] = xx[251];
  xx[761] = xx[183];
  xx[762] = xx[239];
  xx[957] = xx[251] * xx[78];
  xx[958] = xx[183] * xx[79];
  xx[959] = xx[239] * xx[80];
  pm_math_cross3(xx + 760, xx + 957, xx + 1002);
  pm_math_quatInverseXform(xx + 188, xx + 760, xx + 957);
  xx[314] = xx[957] + state[22];
  xx[316] = xx[958] + state[23];
  xx[317] = xx[959] + state[24];
  xx[1005] = xx[314];
  xx[1006] = xx[316];
  xx[1007] = xx[317];
  xx[1056] = xx[314] * xx[50];
  xx[1057] = xx[316] * xx[51];
  xx[1058] = xx[317] * xx[52];
  pm_math_cross3(xx + 1005, xx + 1056, xx + 1065);
  pm_math_quatInverseXform(xx + 214, xx + 1005, xx + 1056);
  xx[320] = xx[195] * state[26];
  xx[327] = xx[1056] - xx[320];
  xx[340] = xx[201] * state[26];
  xx[379] = xx[1058] - xx[340];
  xx[1078] = xx[327];
  xx[1079] = xx[1057];
  xx[1080] = xx[379];
  xx[1088] = xx[327] * xx[502];
  xx[1089] = xx[415] * xx[1057];
  xx[1090] = xx[379] * xx[452];
  pm_math_cross3(xx + 1078, xx + 1088, xx + 1095);
  xx[415] = xx[1057] * xx[356];
  xx[418] = xx[327] * xx[356];
  xx[452] = xx[327] - (xx[352] * xx[415] + xx[418] * xx[356]) * xx[19];
  xx[460] = xx[1057] + xx[19] * (xx[352] * xx[418] - xx[415] * xx[356]);
  xx[415] = xx[379] - state[36];
  xx[1088] = xx[452];
  xx[1089] = xx[460];
  xx[1090] = xx[415];
  xx[1167] = xx[50] * xx[452];
  xx[1168] = xx[460] * xx[51];
  xx[1169] = xx[52] * xx[415];
  pm_math_cross3(xx + 1088, xx + 1167, xx + 1173);
  xx[418] = xx[1173] - xx[50] * xx[460] * state[36];
  xx[463] = xx[1174] + xx[51] * xx[452] * state[36];
  xx[502] = xx[463] * xx[356];
  xx[520] = xx[356] * xx[418];
  xx[544] = xx[418] + xx[19] * (xx[352] * xx[502] - xx[520] * xx[356]);
  pm_math_cross3(xx + 1078, xx + 1398, xx + 1088);
  pm_math_cross3(xx + 1078, xx + 1088, xx + 1167);
  xx[418] = xx[1168] * xx[356];
  xx[545] = xx[1167] * xx[356];
  xx[547] = xx[379] + xx[415];
  xx[415] = xx[458] * state[36];
  xx[550] = xx[393] * (xx[1167] - (xx[352] * xx[418] + xx[545] * xx[356]) * xx
                       [19] + xx[547] * xx[415]);
  xx[562] = xx[461] * state[36];
  xx[563] = (xx[547] * xx[562] + xx[1168] + xx[19] * (xx[352] * xx[545] - xx[418]
              * xx[356])) * xx[393];
  xx[418] = xx[461] * xx[550] - xx[458] * xx[563] - xx[1175];
  xx[458] = xx[418] / xx[358];
  xx[461] = xx[550] - xx[357] * xx[458];
  xx[545] = xx[563] + xx[398] * xx[458];
  xx[547] = xx[356] * xx[545];
  xx[588] = xx[356] * xx[461];
  xx[589] = xx[461] + xx[19] * (xx[352] * xx[547] - xx[588] * xx[356]);
  xx[461] = xx[545] - (xx[352] * xx[588] + xx[547] * xx[356]) * xx[19];
  xx[545] = (xx[1169] - ((xx[452] + xx[452]) * xx[415] + (xx[460] + xx[460]) *
              xx[562])) * xx[393];
  xx[1088] = xx[589];
  xx[1089] = xx[461];
  xx[1090] = xx[545];
  pm_math_cross3(xx + 1398, xx + 1088, xx + 1167);
  pm_math_quatInverseXform(xx + 402, xx + 1078, xx + 1088);
  xx[415] = xx[1090] - state[34];
  xx[1203] = xx[1088];
  xx[1204] = xx[1089];
  xx[1205] = xx[415];
  xx[1223] = xx[50] * xx[1088];
  xx[1224] = xx[51] * xx[1089];
  xx[1225] = xx[52] * xx[415];
  pm_math_cross3(xx + 1203, xx + 1223, xx + 1299);
  xx[452] = xx[1299] - xx[50] * xx[1089] * state[34];
  xx[460] = xx[1300] + xx[51] * xx[1088] * state[34];
  pm_math_cross3(xx + 1078, xx + 412, xx + 1203);
  pm_math_cross3(xx + 1078, xx + 1203, xx + 1223);
  pm_math_quatInverseXform(xx + 402, xx + 1223, xx + 1203);
  xx[547] = xx[1090] + xx[415];
  xx[415] = xx[389] * state[34];
  xx[562] = xx[393] * (xx[1203] + xx[547] * xx[415]);
  xx[588] = xx[406] * state[34];
  xx[611] = (xx[547] * xx[588] + xx[1204]) * xx[393];
  xx[547] = xx[406] * xx[562] - xx[389] * xx[611] - xx[1301];
  xx[651] = xx[547] / xx[346];
  xx[1223] = xx[452];
  xx[1224] = xx[460];
  xx[1225] = xx[1301] + xx[52] * xx[651];
  pm_math_quatXform(xx + 402, xx + 1223, xx + 1303);
  xx[656] = (xx[1205] - ((xx[1088] + xx[1088]) * xx[415] + (xx[1089] + xx[1089])
              * xx[588])) * xx[393];
  xx[1088] = xx[562] - xx[373] * xx[651];
  xx[1089] = xx[611] + xx[370] * xx[651];
  xx[1090] = xx[656];
  pm_math_quatXform(xx + 402, xx + 1088, xx + 1203);
  pm_math_cross3(xx + 412, xx + 1203, xx + 1088);
  pm_math_quatInverseXform(xx + 525, xx + 1078, xx + 1223);
  xx[415] = xx[1225] - state[32];
  xx[1337] = xx[1223];
  xx[1338] = xx[1224];
  xx[1339] = xx[415];
  xx[1358] = xx[50] * xx[1223];
  xx[1359] = xx[51] * xx[1224];
  xx[1360] = xx[52] * xx[415];
  pm_math_cross3(xx + 1337, xx + 1358, xx + 1434);
  xx[588] = xx[1434] - xx[50] * xx[1224] * state[32];
  xx[657] = xx[1435] + xx[51] * xx[1223] * state[32];
  pm_math_cross3(xx + 1078, xx + 536, xx + 1337);
  pm_math_cross3(xx + 1078, xx + 1337, xx + 1358);
  pm_math_quatInverseXform(xx + 525, xx + 1358, xx + 1337);
  xx[660] = xx[1225] + xx[415];
  xx[415] = xx[529] * state[32];
  xx[680] = xx[393] * (xx[1337] - xx[660] * xx[415]);
  xx[763] = xx[530] * state[32];
  xx[783] = (xx[660] * xx[763] + xx[1338]) * xx[393];
  xx[660] = xx[530] * xx[680] + xx[529] * xx[783] - xx[1436];
  xx[790] = xx[660] / xx[471];
  xx[1358] = xx[588];
  xx[1359] = xx[657];
  xx[1360] = xx[1436] + xx[52] * xx[790];
  pm_math_quatXform(xx + 525, xx + 1358, xx + 1459);
  xx[792] = ((xx[1223] + xx[1223]) * xx[415] - (xx[1224] + xx[1224]) * xx[763] +
             xx[1339]) * xx[393];
  xx[1223] = xx[680] - xx[493] * xx[790];
  xx[1224] = xx[783] - xx[496] * xx[790];
  xx[1225] = xx[792];
  pm_math_quatXform(xx + 525, xx + 1223, xx + 1337);
  pm_math_cross3(xx + 536, xx + 1337, xx + 1223);
  pm_math_quatInverseXform(xx + 615, xx + 1078, xx + 1358);
  xx[415] = xx[1360] + state[30];
  xx[1462] = xx[1358];
  xx[1463] = xx[1359];
  xx[1464] = xx[415];
  xx[1472] = xx[50] * xx[1358];
  xx[1473] = xx[51] * xx[1359];
  xx[1474] = xx[415] * xx[52];
  pm_math_cross3(xx + 1462, xx + 1472, xx + 1475);
  xx[763] = xx[1475] + xx[50] * xx[1359] * state[30];
  xx[793] = xx[1476] - xx[51] * xx[1358] * state[30];
  pm_math_cross3(xx + 1078, xx + 626, xx + 1462);
  pm_math_cross3(xx + 1078, xx + 1462, xx + 1472);
  pm_math_quatInverseXform(xx + 615, xx + 1472, xx + 1462);
  xx[805] = xx[1360] + xx[415];
  xx[415] = xx[620] * state[30];
  xx[807] = (xx[1463] - xx[805] * xx[415]) * xx[393];
  xx[838] = xx[619] * state[30];
  xx[839] = xx[393] * (xx[1462] - xx[805] * xx[838]);
  xx[805] = xx[1477] + xx[619] * xx[807] - xx[620] * xx[839];
  xx[860] = xx[805] / xx[235];
  xx[1472] = xx[763];
  xx[1473] = xx[793];
  xx[1474] = xx[1477] - xx[52] * xx[860];
  pm_math_quatXform(xx + 615, xx + 1472, xx + 1478);
  xx[905] = ((xx[1358] + xx[1358]) * xx[838] + (xx[1359] + xx[1359]) * xx[415] +
             xx[1464]) * xx[393];
  xx[1358] = xx[839] + xx[585] * xx[860];
  xx[1359] = xx[807] - xx[582] * xx[860];
  xx[1360] = xx[905];
  pm_math_quatXform(xx + 615, xx + 1358, xx + 1462);
  pm_math_cross3(xx + 626, xx + 1462, xx + 1358);
  xx[415] = xx[1057] * xx[205];
  xx[838] = xx[327] * xx[205];
  xx[910] = xx[327] - (xx[193] * xx[415] + xx[838] * xx[205]) * xx[19];
  xx[935] = xx[1057] + xx[19] * (xx[193] * xx[838] - xx[415] * xx[205]);
  xx[415] = xx[379] - state[28];
  xx[1472] = xx[910];
  xx[1473] = xx[935];
  xx[1474] = xx[415];
  xx[1484] = xx[50] * xx[910];
  xx[1485] = xx[935] * xx[51];
  xx[1486] = xx[52] * xx[415];
  pm_math_cross3(xx + 1472, xx + 1484, xx + 1494);
  xx[838] = xx[1494] - xx[50] * xx[935] * state[28];
  xx[940] = xx[1495] + xx[51] * xx[910] * state[28];
  xx[946] = xx[940] * xx[205];
  xx[999] = xx[205] * xx[838];
  xx[1000] = xx[838] + xx[19] * (xx[193] * xx[946] - xx[999] * xx[205]);
  pm_math_cross3(xx + 1078, xx + 244, xx + 1472);
  pm_math_cross3(xx + 1078, xx + 1472, xx + 1484);
  xx[838] = xx[1485] * xx[205];
  xx[1010] = xx[1484] * xx[205];
  xx[1038] = xx[379] + xx[415];
  xx[415] = xx[237] * state[28];
  xx[1074] = xx[393] * (xx[1484] - (xx[193] * xx[838] + xx[1010] * xx[205]) *
                        xx[19] + xx[1038] * xx[415]);
  xx[1078] = xx[234] * state[28];
  xx[1079] = (xx[1485] + xx[19] * (xx[193] * xx[1010] - xx[838] * xx[205]) - xx
              [1038] * xx[1078]) * xx[393];
  xx[838] = xx[234] * xx[1074] + xx[237] * xx[1079] + xx[1496];
  xx[234] = xx[838] / xx[326];
  xx[237] = xx[1074] - xx[325] * xx[234];
  xx[1010] = xx[1079] - xx[337] * xx[234];
  xx[1038] = xx[205] * xx[1010];
  xx[1080] = xx[205] * xx[237];
  xx[1081] = xx[237] + xx[19] * (xx[193] * xx[1038] - xx[1080] * xx[205]);
  xx[237] = xx[1010] - (xx[193] * xx[1080] + xx[1038] * xx[205]) * xx[19];
  xx[1010] = ((xx[935] + xx[935]) * xx[1078] - (xx[910] + xx[910]) * xx[415] +
              xx[1486]) * xx[393];
  xx[1472] = xx[1081];
  xx[1473] = xx[237];
  xx[1474] = xx[1010];
  pm_math_cross3(xx + 244, xx + 1472, xx + 1484);
  xx[1578] = xx[591];
  xx[1579] = xx[584];
  xx[1580] = xx[457];
  xx[1581] = xx[390];
  xx[1582] = xx[417];
  xx[1583] = xx[428];
  xx[1584] = xx[665];
  xx[1585] = xx[380];
  xx[1586] = xx[662];
  xx[380] = xx[1057] * xx[340];
  xx[390] = xx[1056] * xx[340] - xx[1058] * xx[320];
  xx[415] = xx[1057] * xx[320];
  xx[1472] = - xx[380];
  xx[1473] = xx[390];
  xx[1474] = xx[415];
  pm_math_matrix3x3Xform(xx + 1578, xx + 1472, xx + 1505);
  xx[1578] = - xx[329];
  xx[1579] = - xx[376];
  xx[1580] = - xx[400];
  xx[1581] = - xx[384];
  xx[1582] = - xx[643];
  xx[1583] = - xx[375];
  xx[1584] = xx[338];
  xx[1585] = xx[395];
  xx[1586] = - xx[372];
  pm_math_cross3(xx + 1005, xx + 551, xx + 1512);
  pm_math_cross3(xx + 1005, xx + 1512, xx + 1528);
  pm_math_quatInverseXform(xx + 214, xx + 1528, xx + 1005);
  xx[329] = xx[291] * state[26];
  xx[338] = xx[1005] + (xx[1058] + xx[379]) * xx[329];
  xx[372] = xx[1007] - (xx[1056] + xx[327]) * xx[329];
  xx[1056] = xx[338];
  xx[1057] = xx[1006];
  xx[1058] = xx[372];
  pm_math_matrix3x3Xform(xx + 1578, xx + 1056, xx + 1512);
  xx[327] = xx[1505] + xx[1512];
  xx[329] = xx[1095] + xx[544] + xx[1167] + xx[1303] + xx[1088] + xx[1459] + xx
    [1223] + xx[1478] + xx[1358] + xx[1000] + xx[1484] + xx[327];
  xx[375] = xx[1507] + xx[1514];
  xx[376] = xx[1097] + xx[1175] + xx[52] * xx[458] + xx[1169] + xx[1305] + xx
    [1090] + xx[1461] + xx[1225] + xx[1480] + xx[1360] + xx[1496] - xx[52] * xx
    [234] + xx[1486] + xx[375];
  pm_math_matrix3x3TransposeXform(xx + 1578, xx + 1472, xx + 1528);
  xx[1578] = xx[385];
  xx[1579] = xx[377];
  xx[1580] = xx[387];
  xx[1581] = xx[391];
  xx[1582] = xx[567];
  xx[1583] = xx[410];
  xx[1584] = xx[419];
  xx[1585] = xx[378];
  xx[1586] = xx[420];
  pm_math_matrix3x3Xform(xx + 1578, xx + 1056, xx + 377);
  xx[384] = xx[1529] + xx[378];
  xx[385] = xx[461] + xx[1204] + xx[1338] + xx[1463] + xx[237] + xx[384];
  xx[237] = (xx[329] * xx[195] + xx[376] * xx[201] + xx[385] * xx[291]) / xx[456];
  xx[387] = xx[463] - (xx[352] * xx[520] + xx[502] * xx[356]) * xx[19];
  xx[391] = xx[940] - (xx[193] * xx[999] + xx[946] * xx[205]) * xx[19];
  xx[395] = xx[1506] + xx[1513];
  xx[1056] = xx[329] + xx[237] * xx[409];
  xx[1057] = xx[1096] + xx[387] + xx[1168] + xx[1304] + xx[1089] + xx[1460] +
    xx[1224] + xx[1479] + xx[1359] + xx[391] + xx[1485] + xx[395] + xx[513] *
    xx[237];
  xx[1058] = xx[376] - xx[354] * xx[237];
  pm_math_quatXform(xx + 214, xx + 1056, xx + 1088);
  xx[329] = xx[1528] + xx[377];
  xx[376] = xx[1530] + xx[379];
  xx[377] = xx[589] + xx[1203] + xx[1337] + xx[1462] + xx[1081] + xx[329] + xx
    [392] * xx[237];
  xx[378] = xx[385] + xx[437] * xx[237];
  xx[379] = xx[545] + xx[1205] + xx[1339] + xx[1464] + xx[1010] + xx[376] + xx
    [237] * xx[424];
  pm_math_quatXform(xx + 214, xx + 377, xx + 1056);
  pm_math_cross3(xx + 551, xx + 1056, xx + 377);
  xx[1578] = xx[386];
  xx[1579] = xx[429];
  xx[1580] = xx[451];
  xx[1581] = xx[499];
  xx[1582] = xx[507];
  xx[1583] = xx[514];
  xx[1584] = xx[501];
  xx[1585] = xx[442];
  xx[1586] = xx[519];
  xx[1080] = state[22];
  xx[1081] = state[23];
  xx[1082] = state[24];
  pm_math_cross3(xx + 957, xx + 1080, xx + 1167);
  pm_math_matrix3x3Xform(xx + 1578, xx + 1167, xx + 1203);
  xx[1578] = xx[431];
  xx[1579] = xx[388];
  xx[1580] = xx[416];
  xx[1581] = xx[508];
  xx[1582] = xx[435];
  xx[1583] = xx[438];
  xx[1584] = xx[516];
  xx[1585] = xx[455];
  xx[1586] = xx[503];
  xx[501] = xx[957] + xx[314];
  xx[502] = xx[958] + xx[316];
  xx[503] = xx[959] + xx[317];
  pm_math_cross3(xx + 1080, xx + 265, xx + 957);
  pm_math_cross3(xx + 501, xx + 957, xx + 1223);
  pm_math_cross3(xx + 760, xx + 444, xx + 501);
  pm_math_cross3(xx + 760, xx + 501, xx + 1303);
  pm_math_quatInverseXform(xx + 188, xx + 1303, xx + 501);
  xx[314] = xx[1223] + xx[501];
  xx[316] = xx[1224] + xx[502];
  xx[317] = xx[1225] + xx[503];
  xx[501] = xx[314];
  xx[502] = xx[316];
  xx[503] = xx[317];
  pm_math_matrix3x3Xform(xx + 1578, xx + 501, xx + 760);
  xx[385] = xx[1203] + xx[760];
  xx[386] = xx[1065] + xx[1088] + xx[377] + xx[385];
  pm_math_matrix3x3TransposeXform(xx + 1578, xx + 1167, xx + 1223);
  xx[1578] = xx[510];
  xx[1579] = xx[555];
  xx[1580] = xx[556];
  xx[1581] = xx[557];
  xx[1582] = xx[422];
  xx[1583] = xx[559];
  xx[1584] = xx[560];
  xx[1585] = xx[561];
  xx[1586] = xx[425];
  pm_math_matrix3x3Xform(xx + 1578, xx + 501, xx + 555);
  xx[388] = xx[1224] + xx[556];
  xx[400] = xx[1057] + xx[388];
  xx[410] = xx[1225] + xx[557];
  xx[416] = xx[1058] + xx[410];
  xx[417] = xx[1204] + xx[761];
  xx[419] = xx[1066] + xx[1089] + xx[378] + xx[417];
  xx[420] = xx[1223] + xx[555];
  xx[422] = xx[1056] + xx[420];
  xx[377] = xx[1205] + xx[762];
  xx[378] = xx[1067] + xx[1090] + xx[379] + xx[377];
  xx[501] = - (xx[386] - (xx[400] * xx[230] + xx[416] * xx[229]));
  xx[502] = - (xx[419] + xx[422] * xx[230] - xx[416] * xx[228]);
  xx[503] = - (xx[378] + xx[422] * xx[229] + xx[400] * xx[228]);
  solveSymmetricPosDef(xx + 592, xx + 501, 3, 1, xx + 555, xx + 559);
  xx[501] = xx[386] + xx[421] * xx[555] + xx[433] * xx[556] + xx[454] * xx[557];
  xx[502] = xx[419] + xx[500] * xx[555] + xx[506] * xx[556] + xx[515] * xx[557];
  xx[503] = xx[378] + xx[540] * xx[555] + xx[443] * xx[556] + xx[521] * xx[557];
  pm_math_quatXform(xx + 188, xx + 501, xx + 559);
  xx[501] = xx[422] + xx[248] * xx[555] + xx[511] * xx[556] + xx[509] * xx[557];
  xx[502] = xx[400] + xx[423] * xx[555] + xx[436] * xx[556] + xx[498] * xx[557];
  xx[503] = xx[416] + xx[427] * xx[555] + xx[439] * xx[556] + xx[504] * xx[557];
  pm_math_quatXform(xx + 188, xx + 501, xx + 760);
  pm_math_cross3(xx + 444, xx + 760, xx + 501);
  xx[1578] = xx[328];
  xx[1579] = xx[604];
  xx[1580] = xx[764];
  xx[1581] = xx[664];
  xx[1582] = xx[667];
  xx[1583] = xx[766];
  xx[1584] = xx[177];
  xx[1585] = xx[257];
  xx[1586] = xx[714];
  xx[1056] = xx[249];
  xx[1057] = xx[271];
  xx[1058] = state[17];
  pm_math_cross3(xx + 334, xx + 1056, xx + 1088);
  pm_math_matrix3x3Xform(xx + 1578, xx + 1088, xx + 1203);
  xx[1223] = xx[334] + xx[251];
  xx[1224] = xx[335] + xx[183];
  xx[1225] = xx[336] + xx[239];
  pm_math_cross3(xx + 1056, xx + 69, xx + 334);
  pm_math_cross3(xx + 1223, xx + 334, xx + 1303);
  pm_math_cross3(xx + 322, xx + 277, xx + 1223);
  pm_math_cross3(xx + 322, xx + 1223, xx + 1337);
  pm_math_quatInverseXform(xx + 178, xx + 1337, xx + 322);
  xx[177] = xx[1303] + xx[322];
  xx[183] = xx[1304] + xx[323];
  xx[239] = xx[1305] + xx[324];
  xx[322] = xx[177];
  xx[323] = xx[183];
  xx[324] = xx[239];
  pm_math_matrix3x3Xform(xx + 669, xx + 322, xx + 1223);
  xx[251] = xx[1203] + xx[1223];
  xx[257] = xx[1002] + xx[559] + xx[501] + xx[251];
  xx[328] = xx[1204] + xx[1224];
  xx[378] = xx[1003] + xx[560] + xx[502] + xx[328];
  pm_math_matrix3x3TransposeXform(xx + 669, xx + 1088, xx + 1303);
  pm_math_matrix3x3Xform(xx + 741, xx + 322, xx + 669);
  xx[322] = xx[1303] + xx[669];
  xx[323] = xx[760] + xx[322];
  xx[324] = xx[1304] + xx[670];
  xx[379] = xx[761] + xx[324];
  xx[386] = xx[1305] + xx[671];
  xx[400] = xx[762] + xx[386];
  xx[669] = xx[323];
  xx[670] = xx[379];
  xx[671] = xx[400];
  xx[416] = xx[1205] + xx[1225];
  xx[419] = xx[1004] + xx[561] + xx[503] + xx[416];
  xx[501] = - (xx[257] - xx[378] * xx[89] + pm_math_dot3(xx + 111, xx + 669));
  xx[502] = - (xx[257] * xx[89] + xx[378] + pm_math_dot3(xx + 753, xx + 669));
  xx[503] = - (xx[419] + xx[379] * xx[67] - xx[323] * xx[68]);
  solveSymmetricPosDef(xx + 773, xx + 501, 3, 1, xx + 559, xx + 669);
  xx[501] = xx[257] + xx[663] * xx[559] + xx[692] * xx[560] + xx[765] * xx[561];
  xx[502] = xx[378] + xx[687] * xx[559] + xx[695] * xx[560] + xx[767] * xx[561];
  xx[503] = xx[419] + xx[273] * xx[559] + xx[447] * xx[560] + xx[715] * xx[561];
  pm_math_quatXform(xx + 178, xx + 501, xx + 669);
  xx[501] = xx[323] + xx[693] * xx[559] + xx[723] * xx[560] + xx[768] * xx[561];
  xx[502] = xx[379] + xx[694] * xx[559] + xx[727] * xx[560] + xx[769] * xx[561];
  xx[503] = xx[400] + xx[690] * xx[559] + xx[759] * xx[560] + xx[770] * xx[561];
  pm_math_quatXform(xx + 178, xx + 501, xx + 672);
  pm_math_cross3(xx + 277, xx + 672, xx + 501);
  xx[257] = xx[172] * state[10];
  xx[323] = xx[171] * state[10];
  xx[378] = xx[820] - xx[865];
  xx[379] = xx[821] - xx[868];
  xx[400] = xx[823] - xx[866];
  xx[419] = xx[824] - xx[869];
  xx[422] = xx[828] - xx[873];
  xx[741] = xx[378];
  xx[742] = xx[379];
  xx[743] = xx[822] - xx[871];
  xx[744] = xx[400];
  xx[745] = xx[419];
  xx[746] = xx[825] - xx[872];
  xx[747] = xx[175];
  xx[748] = xx[607];
  xx[749] = xx[422];
  xx[674] = xx[150];
  xx[675] = xx[151];
  xx[676] = xx[9];
  xx[175] = xx[276] * xx[159] - xx[280] * xx[157];
  xx[425] = xx[276] - xx[19] * xx[175] * xx[159];
  xx[428] = 0.0319404536709563 - xx[425];
  xx[429] = xx[280] + xx[19] * xx[175] * xx[157];
  xx[175] = 1.587500000000011e-3;
  xx[431] = 7.175000002356807e-3;
  xx[760] = xx[428];
  xx[761] = xx[429];
  xx[762] = xx[175] - ((xx[157] * xx[431] * xx[157] + xx[431] * xx[159] * xx[159])
                       * xx[19] - xx[431]);
  pm_math_cross3(xx + 674, xx + 760, xx + 820);
  pm_math_cross3(xx + 674, xx + 820, xx + 823);
  xx[431] = xx[157] * xx[824] + xx[823] * xx[159];
  xx[435] = xx[174] + xx[176];
  xx[174] = xx[276] * state[10];
  xx[176] = xx[823] - xx[19] * xx[431] * xx[159] + xx[435] * xx[174];
  xx[438] = xx[280] * state[10];
  xx[442] = xx[824] - xx[19] * xx[431] * xx[157] - xx[435] * xx[438];
  xx[431] = (xx[172] + xx[172]) * xx[438] - (xx[171] + xx[171]) * xx[174] + xx
    [825] - (xx[157] * xx[157] * xx[825] + xx[825] * xx[159] * xx[159]) * xx[19];
  xx[674] = xx[176];
  xx[675] = xx[442];
  xx[676] = xx[431];
  pm_math_matrix3x3Xform(xx + 741, xx + 674, xx + 820);
  xx[171] = xx[257] * (xx[817] - xx[853] - xx[849] - xx[880]) - xx[323] * (xx
    [818] - xx[854] - xx[852] - xx[881]) + xx[822];
  xx[741] = xx[642];
  xx[742] = xx[857];
  xx[743] = xx[858];
  xx[744] = xx[859];
  xx[745] = xx[653];
  xx[746] = xx[861];
  xx[747] = xx[862];
  xx[748] = xx[863];
  xx[749] = xx[393] + xx[864];
  pm_math_matrix3x3Xform(xx + 741, xx + 674, xx + 820);
  xx[172] = xx[257] * xx[378] - xx[323] * xx[400] + xx[820];
  xx[174] = xx[257] * xx[379] - xx[323] * xx[419] + xx[821];
  xx[674] = (xx[813] - xx[849] - xx[853] - xx[876] - (xx[280] * xx[378] + xx[276]
              * xx[379])) / xx[655];
  xx[675] = (xx[816] - xx[852] - xx[854] - xx[879] - (xx[280] * xx[400] + xx[276]
              * xx[419])) / xx[655];
  xx[676] = xx[610] / xx[655];
  xx[741] = xx[26];
  xx[742] = - xx[7];
  xx[743] = xx[23];
  pm_math_cross3(xx + 32, xx + 741, xx + 744);
  xx[741] = xx[30] * inputDot[5] - xx[744] + xx[25] * inputDdot[3] + xx[19] *
    xx[27] * inputDdot[4];
  xx[742] = xx[29] * inputDdot[4] - (xx[745] + xx[28] * inputDot[5] + xx[3] *
    inputDdot[3]);
  xx[743] = xx[22] * inputDdot[3] - xx[746] + inputDdot[5];
  pm_math_quatInverseXform(xx + 15, xx + 741, xx + 25);
  pm_math_quatInverseXform(xx + 330, xx + 25, xx + 28);
  xx[3] = xx[28] + xx[151] * inputDot[6];
  xx[7] = xx[29] - xx[150] * inputDot[6];
  xx[22] = xx[157] * xx[7] + xx[3] * xx[159];
  xx[23] = xx[3] - xx[19] * xx[22] * xx[159];
  xx[151] = xx[7] - xx[19] * xx[22] * xx[157];
  xx[22] = xx[30] + inputDdot[6];
  xx[28] = xx[22] - (xx[157] * xx[22] * xx[157] + xx[22] * xx[159] * xx[159]) *
    xx[19];
  xx[744] = xx[23];
  xx[745] = xx[151];
  xx[746] = xx[28];
  xx[747] = xx[652] / xx[655];
  xx[748] = xx[654] / xx[655];
  xx[749] = (xx[422] - (xx[280] * xx[862] + xx[276] * xx[863])) / xx[655];
  xx[652] = input[0] - 2.685373431330874e-6;
  xx[653] = 0.01576192362572053 + input[1];
  xx[654] = input[2] - 1.07539038444778e-6;
  pm_math_cross3(xx + 741, xx + 652, xx + 811);
  xx[29] = 9.806649999999999;
  xx[30] = xx[29] * xx[5];
  xx[378] = xx[29] * xx[4];
  xx[741] = xx[811] - xx[19] * (xx[20] * xx[30] + xx[31] * xx[378]);
  xx[742] = xx[812] - (xx[378] * xx[4] + xx[30] * xx[5]) * xx[19] + xx[29];
  xx[743] = (xx[20] * xx[378] - xx[31] * xx[30]) * xx[19] + xx[813];
  pm_math_quatInverseXform(xx + 15, xx + 741, xx + 29);
  xx[4] = 0.9928304695165694;
  xx[5] = 7.200670813652432e-6;
  xx[20] = 0.1195309949245745;
  xx[378] = 7.013333919209806e-6;
  xx[379] = 0.9999999999734306;
  xx[400] = 1.987929622149476e-6;
  xx[419] = 0.119530994935713;
  xx[422] = 1.135366319023148e-6;
  xx[435] = 0.9928304695406913;
  xx[741] = xx[4] * inputDot[0] - xx[5] * inputDot[1] - xx[20] * inputDot[2];
  xx[742] = xx[378] * inputDot[0] + xx[379] * inputDot[1] - xx[400] * inputDot[2];
  xx[743] = xx[419] * inputDot[0] + xx[422] * inputDot[1] + xx[435] * inputDot[2];
  pm_math_cross3(xx + 35, xx + 741, xx + 811);
  pm_math_cross3(xx + 32, xx + 652, xx + 741);
  pm_math_cross3(xx + 32, xx + 741, xx + 652);
  pm_math_quatInverseXform(xx + 15, xx + 652, xx + 32);
  xx[15] = xx[29] + xx[19] * xx[811] + xx[32] + xx[4] * inputDdot[0] - xx[5] *
    inputDdot[1] - xx[20] * inputDdot[2];
  xx[4] = 1.5875e-3;
  xx[5] = xx[4] * xx[156];
  xx[16] = 0.02520954632904373;
  xx[17] = xx[164] * xx[16];
  xx[18] = xx[149] * xx[4] - xx[17];
  xx[20] = xx[16] * xx[156];
  xx[652] = - xx[5];
  xx[653] = xx[18];
  xx[654] = xx[20];
  pm_math_cross3(xx + 284, xx + 652, xx + 741);
  xx[438] = xx[20] * xx[163];
  xx[652] = - (0.06820673750794114 + (xx[741] - xx[5] * xx[163]) * xx[19] - xx
               [16]);
  xx[653] = 0.02992188481855372 - (xx[163] * xx[18] + xx[742]) * xx[19];
  xx[654] = 0.1412955924490354 - (xx[19] * (xx[743] + xx[438]) - xx[4]);
  pm_math_cross3(xx + 25, xx + 652, xx + 741);
  xx[5] = xx[30] + xx[19] * xx[812] + xx[33] + xx[378] * inputDdot[0] + xx[379] *
    inputDdot[1] - xx[400] * inputDdot[2];
  xx[18] = xx[31] + xx[19] * xx[813] + xx[34] + xx[419] * inputDdot[0] + xx[422]
    * inputDdot[1] + xx[435] * inputDdot[2];
  xx[29] = xx[15] + xx[741];
  xx[30] = xx[5] + xx[742];
  xx[31] = xx[18] + xx[743];
  pm_math_quatInverseXform(xx + 330, xx + 29, xx + 32);
  pm_math_cross3(xx + 35, xx + 652, xx + 29);
  pm_math_cross3(xx + 35, xx + 29, xx + 652);
  pm_math_quatInverseXform(xx + 330, xx + 652, xx + 29);
  xx[378] = xx[16] * inputDot[6];
  xx[652] = xx[3];
  xx[653] = xx[7];
  xx[654] = xx[22];
  pm_math_cross3(xx + 652, xx + 760, xx + 741);
  xx[3] = xx[32] + xx[29] - (xx[152] + xx[9]) * xx[378] + xx[741];
  xx[7] = xx[33] + xx[30] + xx[16] * inputDdot[6] + xx[742];
  xx[9] = xx[7] * xx[157] + xx[3] * xx[159];
  xx[22] = xx[3] - xx[19] * xx[9] * xx[159];
  xx[3] = xx[7] - xx[19] * xx[9] * xx[157];
  xx[7] = xx[34] + (xx[150] + xx[150]) * xx[378] + xx[31] + xx[743];
  xx[9] = xx[7] - (xx[157] * xx[7] * xx[157] + xx[7] * xx[159] * xx[159]) * xx
    [19];
  xx[29] = xx[22];
  xx[30] = xx[3];
  xx[31] = xx[9];
  xx[7] = pm_math_dot3(xx + 674, xx + 744) + pm_math_dot3(xx + 747, xx + 29);
  xx[29] = (xx[546] + xx[671] + xx[503] + xx[171] - ((xx[672] + xx[172]) * xx
             [280] + (xx[673] + xx[174]) * xx[276])) / xx[655] + xx[7];
  xx[30] = xx[19] * xx[467] * state[28] * state[28];
  xx[31] = xx[309] * xx[310];
  xx[32] = xx[308] * xx[311];
  xx[33] = xx[19] * (xx[31] - xx[32]);
  xx[34] = xx[571] * state[28] * state[28];
  xx[150] = xx[308] * xx[308];
  xx[152] = (xx[150] + xx[309] * xx[309]) * xx[19] - xx[21];
  xx[378] = xx[304] * xx[304];
  xx[379] = xx[305] * xx[306];
  xx[400] = xx[304] * xx[307];
  xx[419] = xx[305] * xx[307];
  xx[422] = xx[304] * xx[306];
  xx[435] = xx[306] * xx[307];
  xx[451] = xx[304] * xx[305];
  xx[669] = (xx[378] + xx[305] * xx[305]) * xx[19] - xx[21];
  xx[670] = xx[19] * (xx[379] - xx[400]);
  xx[671] = (xx[419] + xx[422]) * xx[19];
  xx[672] = (xx[379] + xx[400]) * xx[19];
  xx[673] = (xx[378] + xx[306] * xx[306]) * xx[19] - xx[21];
  xx[674] = xx[19] * (xx[435] - xx[451]);
  xx[675] = xx[19] * (xx[419] - xx[422]);
  xx[676] = (xx[435] + xx[451]) * xx[19];
  xx[677] = (xx[378] + xx[307] * xx[307]) * xx[19] - xx[21];
  xx[378] = xx[340] * xx[426] - xx[320] * xx[466];
  xx[379] = xx[340] * xx[495] - xx[320] * xx[517];
  xx[400] = xx[340] * xx[523] - xx[320] * xx[432];
  xx[741] = - (xx[340] * xx[378]);
  xx[742] = - (xx[340] * xx[340] * xx[434] + xx[320] * xx[320] * xx[434]);
  xx[743] = xx[320] * xx[378];
  xx[744] = - (xx[340] * xx[379]);
  xx[745] = - (xx[340] * xx[340] * xx[430] + xx[320] * xx[320] * xx[430]);
  xx[746] = xx[320] * xx[379];
  xx[747] = - (xx[340] * xx[400]);
  xx[748] = - (xx[340] * xx[340] * xx[440] + xx[320] * xx[320] * xx[440]);
  xx[749] = xx[320] * xx[400];
  pm_math_matrix3x3Compose(xx + 669, xx + 741, xx + 811);
  xx[378] = xx[300] * xx[300];
  xx[379] = xx[301] * xx[302];
  xx[400] = xx[300] * xx[303];
  xx[419] = xx[301] * xx[303];
  xx[422] = xx[300] * xx[302];
  xx[426] = xx[302] * xx[303];
  xx[430] = xx[300] * xx[301];
  xx[669] = (xx[378] + xx[301] * xx[301]) * xx[19] - xx[21];
  xx[670] = xx[19] * (xx[379] - xx[400]);
  xx[671] = (xx[419] + xx[422]) * xx[19];
  xx[672] = (xx[379] + xx[400]) * xx[19];
  xx[673] = (xx[378] + xx[302] * xx[302]) * xx[19] - xx[21];
  xx[674] = xx[19] * (xx[426] - xx[430]);
  xx[675] = xx[19] * (xx[419] - xx[422]);
  xx[676] = (xx[426] + xx[430]) * xx[19];
  xx[677] = (xx[378] + xx[303] * xx[303]) * xx[19] - xx[21];
  xx[378] = xx[450] * state[24] + xx[605] * state[22];
  xx[379] = xx[450] * state[23] - xx[602] * state[22];
  xx[400] = xx[602] * state[24] + xx[605] * state[23];
  xx[419] = xx[606] * state[24] + xx[608] * state[22];
  xx[422] = xx[606] * state[23] + xx[541] * state[22];
  xx[426] = xx[541] * state[24] - xx[608] * state[23];
  xx[430] = xx[542] * state[22] - xx[609] * state[24];
  xx[432] = xx[609] * state[23] - xx[603] * state[22];
  xx[434] = xx[603] * state[24] - xx[542] * state[23];
  xx[847] = - (xx[378] * state[24] + xx[379] * state[23]);
  xx[848] = xx[379] * state[22] - xx[400] * state[24];
  xx[849] = xx[400] * state[23] + xx[378] * state[22];
  xx[850] = xx[419] * state[24] + xx[422] * state[23];
  xx[851] = - (xx[426] * state[24] + xx[422] * state[22]);
  xx[852] = xx[426] * state[23] - xx[419] * state[22];
  xx[853] = xx[430] * state[24] - xx[432] * state[23];
  xx[854] = xx[432] * state[22] - xx[434] * state[24];
  xx[855] = xx[434] * state[23] - xx[430] * state[22];
  pm_math_matrix3x3Compose(xx + 669, xx + 847, xx + 871);
  xx[378] = xx[196] * xx[196];
  xx[669] = (xx[378] + xx[558]) * xx[19] - xx[21];
  xx[670] = xx[524];
  xx[671] = (xx[543] + xx[539]) * xx[19];
  xx[672] = (xx[518] + xx[522]) * xx[19];
  xx[673] = (xx[378] + xx[441]) * xx[19] - xx[21];
  xx[674] = xx[634];
  xx[675] = xx[587];
  xx[676] = (xx[565] + xx[629]) * xx[19];
  xx[677] = (xx[378] + xx[505]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 871, xx + 669, xx + 1578);
  xx[378] = xx[274] * xx[274];
  xx[379] = xx[166] * xx[274];
  xx[400] = xx[153] * xx[165];
  xx[419] = xx[153] * xx[166];
  xx[422] = xx[274] * xx[165];
  xx[426] = xx[166] * xx[165];
  xx[430] = xx[153] * xx[274];
  xx[1756] = (xx[378] + xx[153] * xx[153]) * xx[19] - xx[21];
  xx[1757] = xx[19] * (xx[379] - xx[400]);
  xx[1758] = - ((xx[419] + xx[422]) * xx[19]);
  xx[1759] = - ((xx[400] + xx[379]) * xx[19]);
  xx[1760] = (xx[378] + xx[165] * xx[165]) * xx[19] - xx[21];
  xx[1761] = xx[19] * (xx[426] - xx[430]);
  xx[1762] = xx[19] * (xx[422] - xx[419]);
  xx[1763] = (xx[426] + xx[430]) * xx[19];
  xx[1764] = (xx[378] + xx[166] * xx[166]) * xx[19] - xx[21];
  xx[153] = xx[678] * xx[249] - xx[256] * state[17];
  xx[165] = xx[271] * xx[256] - xx[590] * xx[249];
  xx[166] = xx[271] * xx[678] - xx[590] * state[17];
  xx[256] = xx[679] * state[17] - xx[682] * xx[249];
  xx[274] = xx[271] * xx[679] - xx[448] * xx[249];
  xx[378] = xx[448] * state[17] - xx[271] * xx[682];
  xx[379] = xx[449] * xx[249] - xx[683] * state[17];
  xx[400] = xx[271] * xx[683] - xx[659] * xx[249];
  xx[419] = xx[659] * state[17] - xx[271] * xx[449];
  xx[1944] = xx[153] * state[17] - xx[165] * xx[271];
  xx[1945] = xx[166] * state[17] + xx[165] * xx[249];
  xx[1946] = - (xx[166] * xx[271] + xx[153] * xx[249]);
  xx[1947] = - (xx[256] * state[17] + xx[271] * xx[274]);
  xx[1948] = xx[274] * xx[249] - xx[378] * state[17];
  xx[1949] = xx[378] * xx[271] + xx[256] * xx[249];
  xx[1950] = xx[379] * state[17] - xx[271] * xx[400];
  xx[1951] = xx[400] * xx[249] - xx[419] * state[17];
  xx[1952] = xx[271] * xx[419] - xx[379] * xx[249];
  pm_math_matrix3x3Compose(xx + 1756, xx + 1944, xx + 2022);
  xx[153] = xx[206] * xx[206];
  xx[165] = xx[207] * xx[208];
  xx[1756] = (xx[153] + xx[800]) * xx[19] - xx[21];
  xx[1757] = xx[19] * (xx[165] - xx[722]);
  xx[1758] = (xx[717] + xx[718]) * xx[19];
  xx[1759] = (xx[165] + xx[722]) * xx[19];
  xx[1760] = (xx[153] + xx[801]) * xx[19] - xx[21];
  xx[1761] = xx[19] * (xx[799] - xx[798]);
  xx[1762] = xx[797];
  xx[1763] = (xx[799] + xx[798]) * xx[19];
  xx[1764] = (xx[153] + xx[209] * xx[209]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 2022, xx + 1756, xx + 2045);
  xx[153] = xx[210] * xx[210];
  xx[165] = (xx[153] + xx[223]) * xx[19] - xx[21];
  xx[166] = xx[149] * xx[156];
  xx[223] = xx[164] * xx[163];
  xx[249] = xx[166] - xx[223];
  xx[256] = xx[19] * xx[249];
  xx[271] = xx[157] * xx[159];
  xx[274] = xx[19] * xx[271] * state[10] * state[10];
  xx[378] = xx[19] * xx[157] * xx[157] - xx[21];
  xx[379] = xx[378] * state[10] * state[10];
  xx[400] = xx[163] * xx[163];
  xx[419] = (xx[400] + xx[149] * xx[149]) * xx[19] - xx[21];
  xx[422] = xx[256] * xx[274] - xx[379] * xx[419];
  xx[426] = xx[211] * xx[212];
  xx[430] = xx[210] * xx[213];
  xx[432] = (xx[426] + xx[430]) * xx[19];
  xx[434] = xx[19] * xx[159] * xx[159] - xx[21];
  xx[435] = xx[434] * state[10] * state[10];
  xx[440] = xx[274] * xx[419] - xx[435] * xx[256];
  xx[441] = xx[419] * inputDot[6] * inputDot[6];
  xx[448] = xx[212] * xx[159] - xx[157] * xx[211];
  xx[449] = xx[448] * xx[448];
  xx[451] = xx[213] * xx[159] - xx[157] * xx[210];
  xx[455] = xx[451] * xx[451];
  xx[457] = (xx[449] + xx[455]) * xx[19] - xx[21];
  xx[461] = xx[210] * xx[159] + xx[157] * xx[213];
  xx[463] = xx[461] * xx[451];
  xx[466] = xx[157] * xx[212] + xx[211] * xx[159];
  xx[467] = xx[466] * xx[448];
  xx[495] = (xx[463] + xx[467]) * xx[19];
  xx[499] = xx[19] * xx[249] * inputDot[6] * inputDot[6];
  xx[516] = - xx[448];
  xx[517] = xx[451];
  xx[518] = xx[461];
  xx[519] = - xx[466];
  pm_math_quatCompose(xx + 330, xx + 516, xx + 797);
  xx[249] = xx[797] * xx[797];
  xx[501] = xx[798] * xx[799];
  xx[502] = xx[797] * xx[800];
  xx[503] = xx[798] * xx[800];
  xx[505] = xx[797] * xx[799];
  xx[507] = xx[799] * xx[800];
  xx[508] = xx[797] * xx[798];
  xx[2327] = (xx[249] + xx[798] * xx[798]) * xx[19] - xx[21];
  xx[2328] = xx[19] * (xx[501] - xx[502]);
  xx[2329] = (xx[503] + xx[505]) * xx[19];
  xx[2330] = (xx[501] + xx[502]) * xx[19];
  xx[2331] = (xx[249] + xx[799] * xx[799]) * xx[19] - xx[21];
  xx[2332] = xx[19] * (xx[507] - xx[508]);
  xx[2333] = xx[19] * (xx[503] - xx[505]);
  xx[2334] = (xx[507] + xx[508]) * xx[19];
  xx[2335] = (xx[249] + xx[800] * xx[800]) * xx[19] - xx[21];
  xx[249] = xx[461] * inputDot[6];
  xx[501] = xx[451] * inputDot[6];
  xx[516] = xx[19] * (xx[249] * xx[448] - xx[466] * xx[501]);
  xx[517] = - ((xx[501] * xx[448] + xx[466] * xx[249]) * xx[19]);
  xx[518] = inputDot[6] - (xx[501] * xx[451] + xx[461] * xx[249]) * xx[19];
  pm_math_matrix3x3PostCross(xx + 2327, xx + 516, xx + 2336);
  xx[249] = xx[211] * state[10];
  xx[501] = xx[212] * state[10];
  xx[502] = xx[19] * (xx[213] * xx[249] - xx[210] * xx[501]);
  pm_math_quatInverseXform(xx + 206, xx + 1056, xx + 516);
  pm_math_quatInverseXform(xx + 196, xx + 1080, xx + 206);
  xx[196] = xx[320] * xx[205];
  xx[197] = xx[19] * xx[196] * xx[205] - xx[320];
  xx[198] = xx[206] + xx[197];
  xx[199] = xx[516] + xx[198];
  xx[209] = (xx[210] * xx[249] + xx[213] * xx[501]) * xx[19];
  xx[210] = xx[19] * xx[193] * xx[196];
  xx[196] = xx[207] - xx[210];
  xx[503] = xx[517] + xx[196];
  xx[505] = state[10] - (xx[211] * xx[249] + xx[212] * xx[501]) * xx[19];
  xx[211] = xx[340] + state[28];
  xx[212] = xx[208] - xx[211];
  xx[249] = xx[518] + xx[212];
  xx[522] = xx[502] + xx[199];
  xx[523] = xx[209] + xx[503];
  xx[524] = xx[505] + xx[249];
  pm_math_matrix3x3PostCross(xx + 2336, xx + 522, xx + 2327);
  xx[501] = xx[164] * xx[149];
  xx[507] = xx[163] * xx[156];
  xx[508] = xx[166] + xx[223];
  xx[166] = xx[508] * xx[19];
  xx[223] = (xx[400] + xx[156] * xx[156]) * xx[19] - xx[21];
  xx[510] = xx[164] * xx[156];
  xx[514] = xx[149] * xx[163];
  xx[519] = xx[501] - xx[507];
  xx[520] = xx[19] * xx[519];
  xx[522] = xx[510] + xx[514];
  xx[523] = xx[522] * xx[19];
  xx[2336] = xx[419];
  xx[2337] = xx[256];
  xx[2338] = (xx[501] + xx[507]) * xx[19];
  xx[2339] = xx[166];
  xx[2340] = xx[223];
  xx[2341] = xx[19] * (xx[510] - xx[514]);
  xx[2342] = xx[520];
  xx[2343] = xx[523];
  xx[2344] = (xx[400] + xx[164] * xx[164]) * xx[19] - xx[21];
  xx[256] = xx[19] * (xx[463] - xx[467]);
  xx[400] = xx[466] * xx[451];
  xx[419] = xx[461] * xx[448];
  xx[463] = (xx[400] + xx[419]) * xx[19];
  xx[467] = xx[461] * xx[461];
  xx[501] = (xx[449] + xx[467]) * xx[19] - xx[21];
  xx[507] = xx[448] * xx[451];
  xx[448] = xx[466] * xx[461];
  xx[451] = xx[19] * (xx[507] - xx[448]);
  xx[461] = xx[19] * (xx[419] - xx[400]);
  xx[2345] = xx[457];
  xx[2346] = xx[256];
  xx[2347] = - xx[463];
  xx[2348] = xx[495];
  xx[2349] = xx[501];
  xx[2350] = xx[451];
  xx[2351] = xx[461];
  xx[2352] = - ((xx[448] + xx[507]) * xx[19]);
  xx[2353] = (xx[449] + xx[466] * xx[466]) * xx[19] - xx[21];
  xx[589] = xx[502];
  xx[590] = xx[209];
  xx[591] = xx[505];
  pm_math_matrix3x3PostCross(xx + 2345, xx + 589, xx + 2354);
  xx[589] = xx[199];
  xx[590] = xx[503];
  xx[591] = xx[249];
  pm_math_matrix3x3PostCross(xx + 2354, xx + 589, xx + 2345);
  xx[199] = xx[19] * (xx[426] - xx[430]);
  xx[209] = (xx[218] + xx[219]) * xx[19];
  xx[218] = (xx[153] + xx[224]) * xx[19] - xx[21];
  xx[219] = xx[19] * (xx[222] - xx[221]);
  xx[2354] = xx[165];
  xx[2355] = xx[199];
  xx[2356] = xx[209];
  xx[2357] = xx[432];
  xx[2358] = xx[218];
  xx[2359] = xx[219];
  xx[2360] = xx[220];
  xx[2361] = (xx[222] + xx[221]) * xx[19];
  xx[2362] = (xx[153] + xx[213] * xx[213]) * xx[19] - xx[21];
  pm_math_matrix3x3PostCross(xx + 2354, xx + 516, xx + 2363);
  xx[220] = xx[198];
  xx[221] = xx[196];
  xx[222] = xx[212];
  pm_math_matrix3x3PostCross(xx + 2363, xx + 220, xx + 2354);
  pm_math_matrix3x3PostCross(xx + 1756, xx + 206, xx + 2363);
  xx[153] = - xx[210];
  xx[206] = xx[197];
  xx[207] = xx[153];
  xx[208] = - xx[211];
  pm_math_matrix3x3PostCross(xx + 2363, xx + 206, xx + 1756);
  xx[196] = - xx[340];
  xx[206] = xx[197];
  xx[207] = xx[153];
  xx[208] = xx[196];
  pm_math_matrix3x3PostCross(xx + 669, xx + 206, xx + 2363);
  xx[153] = xx[2370] * state[28];
  xx[197] = xx[2364] * state[28];
  xx[198] = xx[2367] * state[28];
  xx[206] = xx[2363] * state[28];
  xx[207] = xx[2366] * state[28];
  xx[208] = xx[2369] * state[28];
  xx[669] = xx[1756] + xx[605] * xx[153] - (xx[197] * xx[450] + xx[198] * xx[602]);
  xx[670] = xx[1757] + xx[206] * xx[450] + xx[207] * xx[602] - xx[605] * xx[208];
  xx[671] = xx[1758];
  xx[672] = xx[1759] + xx[606] * xx[197] - xx[198] * xx[541] - xx[153] * xx[608];
  xx[673] = xx[1760] + xx[207] * xx[541] - xx[606] * xx[206] + xx[208] * xx[608];
  xx[674] = xx[1761];
  xx[675] = xx[1762] - (xx[197] * xx[609] + xx[603] * xx[198] + xx[153] * xx[542]);
  xx[676] = xx[1763] + xx[206] * xx[609] + xx[603] * xx[207] + xx[208] * xx[542];
  xx[677] = xx[1764];
  pm_math_matrix3x3Compose(xx + 732, xx + 669, xx + 1756);
  xx[153] = xx[2354] + xx[1756];
  xx[197] = xx[2357] + xx[1759];
  xx[198] = xx[19] * xx[271];
  xx[206] = xx[2355] + xx[1757];
  xx[207] = xx[2358] + xx[1760];
  xx[208] = xx[2356] + xx[1758];
  xx[210] = xx[2359] + xx[1761];
  xx[669] = xx[2345] + xx[153] * xx[378] - xx[197] * xx[198];
  xx[670] = xx[2346] + xx[206] * xx[378] - xx[207] * xx[198];
  xx[671] = xx[2347] + xx[208] * xx[378] - xx[210] * xx[198];
  xx[672] = xx[2348] + xx[197] * xx[434] - xx[153] * xx[198];
  xx[673] = xx[2349] + xx[207] * xx[434] - xx[206] * xx[198];
  xx[674] = xx[2350] + xx[210] * xx[434] - xx[208] * xx[198];
  xx[675] = xx[2351] - (xx[2360] + xx[1762]);
  xx[676] = xx[2352] - (xx[2361] + xx[1763]);
  xx[677] = xx[2353] - (xx[2362] + xx[1764]);
  pm_math_matrix3x3Compose(xx + 2336, xx + 669, xx + 1756);
  xx[153] = (xx[150] + xx[310] * xx[310]) * xx[19] - xx[21];
  xx[197] = (xx[31] + xx[32]) * xx[19];
  xx[31] = xx[274] * xx[223] - xx[379] * xx[166];
  xx[32] = xx[166] * xx[274] - xx[435] * xx[223];
  xx[166] = xx[19] * xx[508] * inputDot[6] * inputDot[6];
  xx[206] = xx[223] * inputDot[6] * inputDot[6];
  xx[207] = xx[310] * xx[311];
  xx[208] = xx[308] * xx[309];
  xx[210] = (xx[207] + xx[208]) * xx[19];
  xx[211] = xx[309] * xx[311];
  xx[212] = xx[308] * xx[310];
  xx[213] = xx[19] * (xx[211] - xx[212]);
  xx[220] = xx[523] * xx[274] - xx[379] * xx[520];
  xx[221] = xx[274] * xx[520] - xx[435] * xx[523];
  xx[222] = xx[19] * xx[519] * inputDot[6] * inputDot[6];
  xx[223] = xx[19] * xx[522] * inputDot[6] * inputDot[6];
  xx[669] = xx[30] * xx[33] - xx[34] * xx[152] + xx[811] * xx[571] - xx[812] *
    xx[533] + xx[1578] + xx[2045] + xx[165] * xx[422] + xx[432] * xx[440] - (xx
    [441] * xx[457] + xx[495] * xx[499]) + (xx[2327] + xx[1756]) * xx[19];
  xx[670] = xx[811] * xx[533] + xx[812] * xx[571] - (xx[30] * xx[152] + xx[34] *
    xx[33]) + xx[1579] + xx[2046] + xx[199] * xx[422] + xx[440] * xx[218] - (xx
    [441] * xx[256] + xx[499] * xx[501]) + (xx[2328] + xx[1757]) * xx[19];
  xx[671] = xx[813] * xx[658] + xx[1580] + xx[2047] + xx[209] * xx[422] + xx[219]
    * xx[440] + xx[441] * xx[463] - xx[499] * xx[451] + (xx[2329] + xx[1758]) *
    xx[19];
  xx[672] = xx[30] * xx[153] - xx[34] * xx[197] + xx[814] * xx[571] - xx[815] *
    xx[533] + xx[1581] + xx[2048] + xx[165] * xx[31] + xx[432] * xx[32] - (xx
    [166] * xx[457] + xx[495] * xx[206]) + (xx[2330] + xx[1759]) * xx[19];
  xx[673] = xx[814] * xx[533] + xx[815] * xx[571] - (xx[197] * xx[30] + xx[34] *
    xx[153]) + xx[1582] + xx[2049] + xx[199] * xx[31] + xx[218] * xx[32] - (xx
    [256] * xx[166] + xx[206] * xx[501]) + (xx[2331] + xx[1760]) * xx[19];
  xx[674] = xx[816] * xx[658] + xx[1583] + xx[2050] + xx[209] * xx[31] + xx[219]
    * xx[32] + xx[463] * xx[166] - xx[206] * xx[451] + (xx[2332] + xx[1761]) *
    xx[19];
  xx[675] = xx[210] * xx[30] - xx[34] * xx[213] + xx[817] * xx[571] - xx[818] *
    xx[533] + xx[1584] + xx[2051] + xx[220] * xx[165] + xx[432] * xx[221] - (xx
    [222] * xx[457] + xx[495] * xx[223]) + (xx[2333] + xx[1762]) * xx[19];
  xx[676] = xx[817] * xx[533] + xx[818] * xx[571] - (xx[213] * xx[30] + xx[210] *
    xx[34]) + xx[1585] + xx[2052] + xx[199] * xx[220] + xx[221] * xx[218] - (xx
    [222] * xx[256] + xx[223] * xx[501]) + (xx[2334] + xx[1763]) * xx[19];
  xx[677] = xx[819] * xx[658] + xx[1586] + xx[2053] + xx[209] * xx[220] + xx[219]
    * xx[221] + xx[463] * xx[222] - xx[223] * xx[451] + (xx[2335] + xx[1764]) *
    xx[19];
  pm_math_matrix3x3Xform(xx + 669, xx + 231, xx + 501);
  xx[30] = state[28] * state[28];
  xx[34] = xx[240] * xx[30];
  xx[165] = xx[30] * xx[238];
  xx[30] = xx[311] * xx[165];
  xx[199] = xx[311] * xx[34];
  xx[209] = xx[309] * xx[165] - xx[310] * xx[34];
  xx[516] = - xx[30];
  xx[517] = xx[199];
  xx[518] = xx[209];
  pm_math_cross3(xx + 309, xx + 516, xx + 522);
  pm_math_matrix3x3Xform(xx + 741, xx + 244, xx + 516);
  xx[218] = 0.02199704525612493;
  xx[219] = xx[218] * xx[203];
  xx[224] = 0.01270000000000017;
  xx[240] = xx[224] * xx[192] + xx[202] * xx[218];
  xx[192] = xx[224] * xx[203];
  xx[589] = xx[219];
  xx[590] = - xx[240];
  xx[591] = xx[192];
  pm_math_cross3(xx + 253, xx + 589, xx + 652);
  xx[202] = state[26] * state[26];
  xx[203] = ((xx[219] * xx[204] + xx[652]) * xx[19] - xx[224]) * xx[202];
  xx[219] = (xx[653] - xx[204] * xx[240]) * xx[19] * xx[202];
  xx[224] = (xx[218] + xx[19] * (xx[654] + xx[192] * xx[204])) * xx[202];
  xx[253] = xx[516] + xx[203];
  xx[254] = xx[517] + xx[219];
  xx[255] = xx[518] + xx[224];
  pm_math_quatXform(xx + 304, xx + 253, xx + 516);
  pm_math_matrix3x3Xform(xx + 847, xx + 259, xx + 253);
  pm_math_matrix3x3Xform(xx + 847, xx + 265, xx + 589);
  xx[265] = xx[253] + xx[589];
  xx[266] = xx[254] + xx[590];
  xx[267] = xx[255] + xx[591];
  pm_math_quatXform(xx + 300, xx + 265, xx + 253);
  pm_math_matrix3x3Xform(xx + 1944, xx + 268, xx + 265);
  pm_math_matrix3x3Xform(xx + 1944, xx + 69, xx + 652);
  xx[669] = xx[265] + xx[652];
  xx[670] = xx[266] + xx[653];
  xx[671] = xx[267] + xx[654];
  pm_math_quatXform(xx + 296, xx + 669, xx + 265);
  xx[192] = state[10] * state[10];
  xx[202] = xx[192] * xx[425];
  xx[204] = xx[264] * xx[274] - xx[275] * xx[379] + xx[202];
  xx[218] = xx[192] * xx[429];
  xx[192] = xx[275] * xx[274] - xx[264] * xx[435] - xx[218];
  xx[240] = xx[164] * xx[192];
  xx[249] = xx[164] * xx[204];
  xx[256] = xx[149] * xx[192] - xx[204] * xx[156];
  xx[669] = - xx[240];
  xx[670] = xx[249];
  xx[671] = xx[256];
  pm_math_cross3(xx + 284, xx + 669, xx + 672);
  xx[271] = inputDot[6] * inputDot[6];
  xx[400] = xx[164] * xx[17];
  xx[419] = xx[271] * ((xx[20] * xx[156] + xx[400]) * xx[19] - xx[16]);
  xx[425] = xx[264] * xx[157] + xx[275] * xx[159];
  xx[426] = xx[275] - xx[19] * xx[425] * xx[159] + xx[428];
  xx[430] = xx[264] - xx[19] * xx[425] * xx[157] + xx[429];
  xx[425] = (xx[282] - xx[280]) * state[10];
  pm_math_quatXform(xx + 178, xx + 334, xx + 669);
  pm_math_quatXform(xx + 188, xx + 957, xx + 334);
  xx[282] = xx[19] * xx[313] * state[26];
  xx[313] = xx[158] * state[28];
  xx[158] = xx[160] * state[28];
  xx[675] = xx[313] - xx[340] * xx[238];
  xx[676] = xx[158] + xx[340] * xx[241] - xx[243] * xx[320];
  xx[677] = xx[320] * xx[238];
  pm_math_quatXform(xx + 214, xx + 675, xx + 760);
  xx[160] = xx[282] + xx[760];
  pm_math_cross3(xx + 1080, xx + 259, xx + 675);
  xx[238] = (xx[315] - xx[291]) * state[26];
  xx[241] = xx[238] + xx[761];
  xx[243] = xx[19] * xx[321] * state[26];
  xx[259] = xx[762] - xx[243];
  xx[760] = xx[160] + xx[675];
  xx[761] = xx[241] + xx[676];
  xx[762] = xx[259] + xx[677];
  pm_math_quatXform(xx + 188, xx + 760, xx + 675);
  xx[260] = xx[334] + xx[675];
  pm_math_cross3(xx + 1056, xx + 268, xx + 760);
  xx[261] = xx[335] + xx[676];
  xx[268] = xx[336] + xx[677];
  xx[675] = xx[260] + xx[760];
  xx[676] = xx[261] + xx[761];
  xx[677] = xx[268] + xx[762];
  pm_math_quatXform(xx + 178, xx + 675, xx + 760);
  xx[269] = xx[669] + xx[760];
  xx[270] = xx[269] - xx[264] * state[10];
  xx[264] = xx[670] + xx[761];
  xx[315] = xx[264] + xx[275] * state[10];
  xx[275] = xx[315] * xx[157] + xx[159] * xx[270];
  xx[321] = (xx[425] + xx[270] - xx[19] * xx[275] * xx[159]) * inputDot[6];
  xx[270] = xx[164] * xx[321];
  xx[432] = (xx[287] - xx[276]) * state[10];
  xx[287] = (xx[432] + xx[315] - xx[19] * xx[275] * xx[157]) * inputDot[6];
  xx[275] = xx[164] * xx[287];
  xx[315] = xx[149] * xx[321] + xx[287] * xx[156];
  xx[675] = - xx[270];
  xx[676] = - xx[275];
  xx[677] = xx[315];
  pm_math_cross3(xx + 284, xx + 675, xx + 760);
  xx[449] = xx[264] * state[10];
  xx[264] = xx[269] * state[10];
  xx[269] = xx[449] * xx[159] - xx[157] * xx[264];
  xx[675] = xx[260];
  xx[676] = xx[261];
  xx[677] = xx[268];
  pm_math_cross3(xx + 1056, xx + 675, xx + 820);
  pm_math_quatXform(xx + 178, xx + 820, xx + 675);
  xx[820] = xx[160];
  xx[821] = xx[241];
  xx[822] = xx[259];
  pm_math_cross3(xx + 1080, xx + 820, xx + 259);
  pm_math_quatXform(xx + 188, xx + 259, xx + 820);
  xx[259] = xx[340] * xx[158];
  xx[260] = - (xx[340] * xx[313]);
  xx[261] = - (xx[320] * xx[158]);
  pm_math_quatXform(xx + 214, xx + 259, xx + 823);
  pm_math_quatXform(xx + 188, xx + 823, xx + 259);
  xx[823] = xx[820] + xx[259];
  xx[824] = xx[821] + xx[260];
  xx[825] = xx[822] + xx[261];
  pm_math_quatXform(xx + 178, xx + 823, xx + 259);
  xx[158] = xx[675] + xx[259];
  xx[160] = xx[676] + xx[260];
  xx[241] = xx[160] * xx[157] + xx[158] * xx[159];
  xx[259] = xx[677] + xx[261];
  xx[675] = xx[19] * xx[159] * xx[269] - xx[449] + xx[158] - xx[19] * xx[241] *
    xx[159];
  xx[676] = xx[264] + xx[19] * xx[157] * xx[269] + xx[160] - xx[19] * xx[241] *
    xx[157];
  xx[677] = xx[259] - (xx[157] * xx[259] * xx[157] + xx[259] * xx[159] * xx[159])
    * xx[19];
  pm_math_quatXform(xx + 330, xx + 675, xx + 259);
  xx[158] = xx[833] * xx[833];
  xx[160] = xx[704] * xx[833];
  xx[241] = xx[699] * xx[701];
  xx[264] = xx[704] * xx[699];
  xx[268] = xx[833] * xx[701];
  xx[269] = xx[704] * xx[701];
  xx[313] = xx[699] * xx[833];
  xx[1578] = (xx[158] + xx[699] * xx[699]) * xx[19] - xx[21];
  xx[1579] = xx[19] * (xx[160] - xx[241]);
  xx[1580] = - ((xx[264] + xx[268]) * xx[19]);
  xx[1581] = - ((xx[241] + xx[160]) * xx[19]);
  xx[1582] = (xx[158] + xx[701] * xx[701]) * xx[19] - xx[21];
  xx[1583] = xx[19] * (xx[269] - xx[313]);
  xx[1584] = xx[19] * (xx[268] - xx[264]);
  xx[1585] = (xx[269] + xx[313]) * xx[19];
  xx[1586] = (xx[158] + xx[704] * xx[704]) * xx[19] - xx[21];
  xx[158] = xx[53] * state[52];
  xx[160] = xx[53] * state[53];
  xx[241] = state[52] - (xx[53] * xx[158] - xx[54] * xx[160]) * xx[19];
  xx[264] = xx[961] * xx[241] - xx[951] * state[54];
  xx[268] = state[53] - xx[19] * (xx[54] * xx[158] + xx[53] * xx[160]);
  xx[158] = xx[268] * xx[951] - xx[960] * xx[241];
  xx[160] = xx[268] * xx[961] - xx[960] * state[54];
  xx[269] = xx[965] * state[54] - xx[832] * xx[241];
  xx[313] = xx[268] * xx[965] - xx[827] * xx[241];
  xx[449] = xx[827] * state[54] - xx[268] * xx[832];
  xx[451] = xx[707] * xx[241] - xx[709] * state[54];
  xx[457] = xx[268] * xx[709] - xx[826] * xx[241];
  xx[463] = xx[826] * state[54] - xx[268] * xx[707];
  xx[1756] = xx[264] * state[54] - xx[158] * xx[268];
  xx[1757] = xx[160] * state[54] + xx[158] * xx[241];
  xx[1758] = - (xx[160] * xx[268] + xx[264] * xx[241]);
  xx[1759] = - (xx[269] * state[54] + xx[268] * xx[313]);
  xx[1760] = xx[313] * xx[241] - xx[449] * state[54];
  xx[1761] = xx[449] * xx[268] + xx[269] * xx[241];
  xx[1762] = xx[451] * state[54] - xx[268] * xx[457];
  xx[1763] = xx[457] * xx[241] - xx[463] * state[54];
  xx[1764] = xx[268] * xx[463] - xx[451] * xx[241];
  pm_math_matrix3x3Compose(xx + 1578, xx + 1756, xx + 2045);
  xx[158] = xx[705] * xx[706];
  xx[160] = xx[703] * xx[689];
  xx[264] = xx[158] - xx[160];
  xx[269] = xx[19] * xx[264];
  xx[313] = xx[19] * xx[681] * xx[688] * state[47] * state[47];
  xx[449] = (xx[19] * xx[681] * xx[681] - xx[21]) * state[47] * state[47];
  xx[451] = xx[705] * xx[705];
  xx[457] = (xx[451] + xx[689] * xx[689]) * xx[19] - xx[21];
  xx[463] = xx[269] * xx[313] - xx[449] * xx[457];
  xx[466] = (xx[19] * xx[688] * xx[688] - xx[21]) * state[47] * state[47];
  xx[495] = xx[313] * xx[457] - xx[466] * xx[269];
  xx[505] = xx[457] * inputDot[8] * inputDot[8];
  xx[508] = xx[716] * xx[688] - xx[681] * xx[712];
  xx[510] = xx[508] * xx[508];
  xx[514] = xx[688] * xx[772] + xx[681] * xx[711];
  xx[519] = xx[514] * xx[514];
  xx[520] = (xx[510] + xx[519]) * xx[19] - xx[21];
  xx[533] = xx[716] * xx[681] + xx[688] * xx[712];
  xx[539] = xx[508] * xx[533];
  xx[543] = xx[688] * xx[711] - xx[681] * xx[772];
  xx[558] = xx[543] * xx[514];
  xx[565] = (xx[539] - xx[558]) * xx[19];
  xx[567] = xx[19] * xx[264] * inputDot[8] * inputDot[8];
  xx[675] = xx[705];
  xx[676] = xx[896];
  xx[677] = xx[703];
  xx[678] = xx[900];
  xx[820] = xx[508];
  xx[821] = - xx[514];
  xx[822] = xx[543];
  xx[823] = xx[533];
  pm_math_quatCompose(xx + 675, xx + 820, xx + 861);
  xx[264] = xx[861] * xx[861];
  xx[571] = xx[862] * xx[863];
  xx[584] = xx[861] * xx[864];
  xx[587] = xx[862] * xx[864];
  xx[604] = xx[861] * xx[863];
  xx[607] = xx[863] * xx[864];
  xx[610] = xx[861] * xx[862];
  xx[1578] = (xx[264] + xx[862] * xx[862]) * xx[19] - xx[21];
  xx[1579] = xx[19] * (xx[571] - xx[584]);
  xx[1580] = (xx[587] + xx[604]) * xx[19];
  xx[1581] = (xx[571] + xx[584]) * xx[19];
  xx[1582] = (xx[264] + xx[863] * xx[863]) * xx[19] - xx[21];
  xx[1583] = xx[19] * (xx[607] - xx[610]);
  xx[1584] = xx[19] * (xx[587] - xx[604]);
  xx[1585] = (xx[607] + xx[610]) * xx[19];
  xx[1586] = (xx[264] + xx[864] * xx[864]) * xx[19] - xx[21];
  xx[264] = xx[543] * inputDot[8];
  xx[571] = xx[514] * inputDot[8];
  xx[820] = xx[19] * (xx[508] * xx[264] + xx[571] * xx[533]);
  xx[821] = - ((xx[264] * xx[533] - xx[508] * xx[571]) * xx[19]);
  xx[822] = (xx[571] * xx[514] + xx[543] * xx[264]) * xx[19] - inputDot[8];
  pm_math_matrix3x3PostCross(xx + 1578, xx + 820, xx + 2327);
  xx[264] = xx[716] * state[47];
  xx[571] = xx[712] * state[47];
  xx[584] = (xx[264] * xx[711] + xx[571] * xx[772]) * xx[19];
  xx[587] = xx[19] * (xx[264] * xx[772] - xx[571] * xx[711]);
  xx[604] = state[47] - (xx[571] * xx[712] + xx[716] * xx[264]) * xx[19];
  xx[716] = xx[584] + xx[241];
  xx[717] = xx[587] + xx[268];
  xx[718] = xx[604] + state[54];
  pm_math_matrix3x3PostCross(xx + 2327, xx + 716, xx + 1578);
  xx[264] = xx[689] * xx[706];
  xx[571] = xx[703] * xx[705];
  xx[607] = xx[160] + xx[158];
  xx[158] = xx[607] * xx[19];
  xx[160] = (xx[451] + xx[703] * xx[703]) * xx[19] - xx[21];
  xx[610] = xx[705] * xx[689];
  xx[629] = xx[703] * xx[706];
  xx[634] = xx[264] - xx[571];
  xx[642] = xx[19] * xx[634];
  xx[643] = xx[629] + xx[610];
  xx[658] = xx[643] * xx[19];
  xx[2327] = xx[457];
  xx[2328] = xx[269];
  xx[2329] = (xx[264] + xx[571]) * xx[19];
  xx[2330] = - xx[158];
  xx[2331] = xx[160];
  xx[2332] = xx[19] * (xx[610] - xx[629]);
  xx[2333] = xx[642];
  xx[2334] = - xx[658];
  xx[2335] = (xx[451] + xx[706] * xx[706]) * xx[19] - xx[21];
  xx[264] = xx[19] * (xx[558] + xx[539]);
  xx[269] = xx[543] * xx[508];
  xx[451] = xx[514] * xx[533];
  xx[457] = (xx[269] - xx[451]) * xx[19];
  xx[539] = xx[543] * xx[543];
  xx[558] = (xx[510] + xx[539]) * xx[19] - xx[21];
  xx[571] = xx[543] * xx[533];
  xx[543] = xx[508] * xx[514];
  xx[508] = xx[19] * (xx[571] + xx[543]);
  xx[2345] = xx[520];
  xx[2346] = - xx[264];
  xx[2347] = xx[457];
  xx[2348] = xx[565];
  xx[2349] = xx[558];
  xx[2350] = xx[508];
  xx[2351] = - (xx[19] * (xx[451] + xx[269]));
  xx[2352] = (xx[571] - xx[543]) * xx[19];
  xx[2353] = (xx[510] + xx[533] * xx[533]) * xx[19] - xx[21];
  xx[716] = xx[584];
  xx[717] = xx[587];
  xx[718] = xx[604];
  pm_math_matrix3x3PostCross(xx + 2345, xx + 716, xx + 2354);
  xx[716] = xx[241];
  xx[717] = xx[268];
  xx[718] = state[54];
  pm_math_matrix3x3PostCross(xx + 2354, xx + 716, xx + 2345);
  pm_math_matrix3x3Compose(xx + 2327, xx + 2345, xx + 2354);
  xx[510] = xx[313] * xx[160] + xx[449] * xx[158];
  xx[514] = xx[158] * xx[313] + xx[466] * xx[160];
  xx[158] = xx[160] * inputDot[8] * inputDot[8];
  xx[160] = xx[19] * xx[607] * inputDot[8] * inputDot[8];
  xx[533] = xx[313] * xx[642] + xx[466] * xx[658];
  xx[584] = xx[658] * xx[313] + xx[449] * xx[642];
  xx[587] = xx[19] * xx[634] * inputDot[8] * inputDot[8];
  xx[604] = xx[19] * xx[643] * inputDot[8] * inputDot[8];
  xx[2327] = xx[2045] + xx[463] * xx[951] + xx[965] * xx[495] - (xx[505] * xx
    [520] + xx[565] * xx[567]) + (xx[1578] + xx[2354]) * xx[19];
  xx[2328] = xx[2046] + xx[495] * xx[827] + xx[960] * xx[463] - (xx[567] * xx
    [558] - xx[505] * xx[264]) + (xx[1579] + xx[2355]) * xx[19];
  xx[2329] = xx[2047] + xx[961] * xx[463] + xx[832] * xx[495] - (xx[505] * xx
    [457] + xx[567] * xx[508]) + (xx[1580] + xx[2356]) * xx[19];
  xx[2330] = xx[2048] + xx[510] * xx[951] - xx[965] * xx[514] - (xx[158] * xx
    [565] - xx[160] * xx[520]) + (xx[1581] + xx[2357]) * xx[19];
  xx[2331] = xx[2049] + xx[960] * xx[510] - xx[514] * xx[827] - (xx[160] * xx
    [264] + xx[158] * xx[558]) + (xx[1582] + xx[2358]) * xx[19];
  xx[2332] = xx[2050] + xx[961] * xx[510] - xx[832] * xx[514] - (xx[158] * xx
    [508] - xx[457] * xx[160]) + (xx[1583] + xx[2359]) * xx[19];
  xx[2333] = xx[2051] + xx[965] * xx[533] - xx[951] * xx[584] - (xx[587] * xx
    [520] - xx[565] * xx[604]) + (xx[1584] + xx[2360]) * xx[19];
  xx[2334] = xx[2052] + xx[827] * xx[533] - xx[960] * xx[584] + xx[264] * xx[587]
    + xx[604] * xx[558] + (xx[1585] + xx[2361]) * xx[19];
  xx[2335] = xx[2053] + xx[832] * xx[533] - xx[961] * xx[584] - (xx[457] * xx
    [587] - xx[508] * xx[604]) + (xx[1586] + xx[2362]) * xx[19];
  pm_math_matrix3x3Xform(xx + 2327, xx + 897, xx + 820);
  pm_math_matrix3x3Xform(xx + 1756, xx + 69, xx + 823);
  pm_math_quatXform(xx + 922, xx + 823, xx + 826);
  xx[264] = state[47] * state[47];
  xx[457] = xx[834] * xx[681] + xx[856] * xx[688];
  xx[463] = xx[856] - xx[19] * xx[457] * xx[688];
  xx[495] = xx[894] * xx[313] - xx[893] * xx[449] + xx[264] * xx[463];
  xx[449] = xx[834] - xx[19] * xx[457] * xx[681];
  xx[457] = xx[893] * xx[313] - xx[894] * xx[466] + xx[264] * xx[449];
  xx[264] = xx[457] * xx[706];
  xx[313] = xx[495] * xx[706];
  xx[466] = xx[457] * xx[689] + xx[703] * xx[495];
  xx[823] = xx[264];
  xx[824] = - xx[313];
  xx[825] = - xx[466];
  pm_math_cross3(xx + 901, xx + 823, xx + 857);
  xx[508] = inputDot[8] * inputDot[8];
  xx[510] = xx[703] * xx[16];
  xx[514] = xx[16] * xx[706];
  xx[520] = xx[514] * xx[706];
  xx[533] = xx[681] * xx[894] + xx[893] * xx[688];
  xx[558] = 0.03194045367095626;
  xx[565] = xx[893] - (xx[19] * xx[533] * xx[688] + xx[463]) + xx[558];
  xx[584] = xx[894] - xx[19] * xx[533] * xx[681] - xx[449];
  pm_math_cross3(xx + 716, xx + 69, xx + 823);
  pm_math_quatXform(xx + 889, xx + 823, xx + 880);
  xx[533] = xx[881] + xx[893] * state[47];
  xx[607] = xx[880] - xx[894] * state[47];
  xx[610] = xx[533] * xx[681] + xx[688] * xx[607];
  xx[629] = (xx[533] - xx[19] * xx[610] * xx[681] - (xx[856] + xx[904]) * state
             [47]) * inputDot[8];
  xx[533] = ((xx[834] - xx[867]) * state[47] + xx[607] - xx[19] * xx[610] * xx
             [688]) * inputDot[8];
  xx[607] = xx[533] * xx[706];
  xx[610] = xx[629] * xx[706];
  xx[634] = xx[703] * xx[629] - xx[533] * xx[689];
  xx[865] = - xx[607];
  xx[866] = - xx[610];
  xx[867] = - xx[634];
  pm_math_cross3(xx + 901, xx + 865, xx + 922);
  xx[642] = xx[881] * state[47];
  xx[643] = xx[880] * state[47];
  xx[658] = xx[642] * xx[688] - xx[681] * xx[643];
  xx[659] = xx[19] * xx[688] * xx[658] - xx[642];
  xx[642] = xx[643] + xx[19] * xx[681] * xx[658];
  xx[643] = xx[642] * xx[706];
  xx[658] = xx[706] * xx[659];
  xx[662] = xx[642] * xx[689] + xx[703] * xx[659];
  xx[865] = xx[643];
  xx[866] = - xx[658];
  xx[867] = - xx[662];
  pm_math_cross3(xx + 901, xx + 865, xx + 880);
  xx[865] = xx[461];
  xx[866] = - ((xx[507] + xx[448]) * xx[19]);
  xx[867] = xx[21] - (xx[455] + xx[467]) * xx[19];
  pm_math_cross3(xx + 865, xx + 231, xx + 957);
  pm_math_quatXform(xx + 797, xx + 957, xx + 865);
  xx[448] = xx[426] * xx[164];
  xx[455] = xx[164] * xx[430];
  xx[461] = xx[426] * xx[149] + xx[430] * xx[156];
  xx[797] = - xx[448];
  xx[798] = - xx[455];
  xx[799] = xx[461];
  pm_math_cross3(xx + 284, xx + 797, xx + 957);
  xx[467] = xx[149] * xx[16];
  xx[507] = xx[17] * xx[163];
  xx[664] = xx[19] * (xx[467] * xx[156] - xx[507]);
  xx[665] = xx[23] + xx[257];
  xx[23] = xx[151] - xx[323];
  xx[797] = xx[665];
  xx[798] = xx[23];
  xx[799] = xx[28] - xx[29];
  pm_math_quatInverseXform(xx + 178, xx + 797, xx + 1203);
  pm_math_cross3(xx + 797, xx + 277, xx + 1223);
  xx[151] = xx[9] + xx[431];
  xx[797] = xx[22] + xx[29] * xx[280] + xx[176] + xx[1223];
  xx[798] = xx[3] + xx[29] * xx[276] + xx[442] + xx[1224];
  xx[799] = xx[151] + xx[1225];
  pm_math_quatInverseXform(xx + 178, xx + 797, xx + 1223);
  xx[9] = xx[559] - (pm_math_dot3(xx + 684, xx + 1203) + pm_math_dot3(xx + 724,
    xx + 1223));
  xx[257] = xx[560] - (pm_math_dot3(xx + 756, xx + 1203) + pm_math_dot3(xx + 883,
    xx + 1223));
  xx[323] = xx[561] - (pm_math_dot3(xx + 886, xx + 1203) + pm_math_dot3(xx + 829,
    xx + 1223));
  xx[559] = xx[1203] + xx[9] + xx[89] * xx[257] + xx[1088];
  xx[560] = xx[1204] - xx[89] * xx[9] + xx[257] + xx[1089];
  xx[561] = xx[1205] + xx[323] + xx[1090];
  pm_math_quatInverseXform(xx + 188, xx + 559, xx + 797);
  pm_math_cross3(xx + 559, xx + 444, xx + 1203);
  xx[559] = xx[1223] + xx[90] * xx[9] - xx[109] * xx[257] - xx[68] * xx[323] +
    xx[177] + xx[1203];
  xx[560] = xx[1224] + xx[109] * xx[9] + xx[90] * xx[257] + xx[67] * xx[323] +
    xx[183] + xx[1204];
  xx[561] = xx[1225] + xx[110] * xx[9] + xx[691] * xx[257] + xx[239] + xx[1205];
  pm_math_quatInverseXform(xx + 188, xx + 559, xx + 1203);
  xx[431] = xx[555] - (pm_math_dot3(xx + 719, xx + 797) + pm_math_dot3(xx + 835,
    xx + 1203));
  xx[555] = xx[556] - (pm_math_dot3(xx + 728, xx + 797) + pm_math_dot3(xx + 841,
    xx + 1203));
  xx[556] = xx[557] - (pm_math_dot3(xx + 844, xx + 797) + pm_math_dot3(xx + 696,
    xx + 1203));
  xx[559] = xx[797] + xx[431] + xx[1167];
  xx[560] = xx[798] + xx[555] + xx[1168];
  xx[561] = xx[799] + xx[556] + xx[1169];
  pm_math_quatInverseXform(xx + 214, xx + 559, xx + 797);
  pm_math_cross3(xx + 559, xx + 551, xx + 1223);
  xx[559] = xx[1203] + xx[230] * xx[555] + xx[229] * xx[556] + xx[314] + xx[1223];
  xx[560] = xx[1204] - xx[230] * xx[431] + xx[228] * xx[556] + xx[316] + xx[1224];
  xx[561] = xx[1205] - xx[229] * xx[431] - xx[228] * xx[555] + xx[317] + xx[1225];
  pm_math_quatInverseXform(xx + 214, xx + 559, xx + 1203);
  xx[557] = pm_math_dot3(xx + 638, xx + 797) + pm_math_dot3(xx + 381, xx + 1203)
    - xx[237];
  xx[237] = xx[799] + xx[557] * xx[201] + xx[415];
  xx[559] = xx[1203] + xx[338];
  xx[799] = xx[797] + xx[557] * xx[195] - xx[380];
  xx[800] = xx[798] + xx[390];
  xx[801] = xx[237];
  pm_math_cross3(xx + 799, xx + 244, xx + 1223);
  xx[560] = xx[559] + xx[1223];
  xx[561] = xx[1204] + xx[557] * xx[291] + xx[1006];
  xx[667] = xx[561] + xx[1224];
  xx[671] = xx[667] * xx[205];
  xx[679] = xx[560] * xx[205];
  xx[682] = xx[234] + xx[668] * xx[237] + xx[534] * (xx[560] - (xx[193] * xx[671]
    + xx[679] * xx[205]) * xx[19]) + (xx[667] + xx[19] * (xx[193] * xx[679] -
    xx[671] * xx[205])) * xx[569];
  xx[1223] = xx[19] * (xx[269] + xx[451]);
  xx[1224] = - ((xx[571] - xx[543]) * xx[19]);
  xx[1225] = (xx[519] + xx[539]) * xx[19] - xx[21];
  pm_math_cross3(xx + 1223, xx + 897, xx + 1303);
  pm_math_quatXform(xx + 861, xx + 1303, xx + 1223);
  xx[234] = xx[565] * xx[706];
  xx[269] = xx[706] * xx[584];
  xx[451] = xx[703] * xx[584] - xx[565] * xx[689];
  xx[861] = - xx[234];
  xx[862] = - xx[269];
  xx[863] = - xx[451];
  pm_math_cross3(xx + 901, xx + 861, xx + 1303);
  xx[519] = xx[16] * xx[689];
  xx[539] = xx[705] * xx[514];
  pm_math_quatInverseXform(xx + 675, xx + 35, xx + 861);
  xx[543] = xx[681] * xx[862] + xx[861] * xx[688];
  xx[560] = xx[861] - xx[19] * xx[543] * xx[688];
  xx[571] = xx[862] - xx[19] * xx[543] * xx[681];
  xx[543] = xx[863] - inputDot[8];
  xx[667] = xx[543] - (xx[681] * xx[681] * xx[543] + xx[688] * xx[543] * xx[688])
    * xx[19];
  xx[671] = xx[667] + state[47];
  xx[1337] = xx[560];
  xx[1338] = xx[571];
  xx[1339] = xx[671];
  xx[1358] = xx[50] * xx[560];
  xx[1359] = xx[51] * xx[571];
  xx[1360] = xx[671] * xx[52];
  pm_math_cross3(xx + 1337, xx + 1358, xx + 1459);
  pm_math_quatInverseXform(xx + 889, xx + 1337, xx + 1358);
  xx[679] = xx[1358] + xx[241];
  xx[241] = xx[1359] + xx[268];
  xx[268] = xx[1360] + state[54];
  xx[1462] = xx[679];
  xx[1463] = xx[241];
  xx[1464] = xx[268];
  xx[1472] = xx[679] * xx[78];
  xx[1473] = xx[241] * xx[79];
  xx[1474] = xx[268] * xx[80];
  pm_math_cross3(xx + 1462, xx + 1472, xx + 1478);
  pm_math_cross3(xx + 1358, xx + 716, xx + 1462);
  xx[683] = xx[1478] + xx[78] * xx[1462];
  xx[699] = xx[1479] + xx[79] * xx[1463];
  xx[716] = xx[1358] + xx[679];
  xx[717] = xx[1359] + xx[241];
  xx[718] = xx[1360] + xx[268];
  pm_math_cross3(xx + 716, xx + 823, xx + 1358);
  pm_math_cross3(xx + 1337, xx + 893, xx + 716);
  pm_math_cross3(xx + 1337, xx + 716, xx + 823);
  pm_math_quatInverseXform(xx + 889, xx + 823, xx + 716);
  xx[241] = (xx[1358] + xx[716]) * xx[73];
  xx[268] = (xx[1359] + xx[717]) * xx[73];
  xx[679] = (xx[1360] + xx[718]) * xx[73];
  xx[716] = xx[241];
  xx[717] = xx[268];
  xx[718] = xx[679];
  xx[701] = xx[683] - xx[699] * xx[89] + pm_math_dot3(xx + 111, xx + 716);
  xx[704] = xx[683] * xx[89] + xx[699] + pm_math_dot3(xx + 753, xx + 716);
  xx[706] = xx[1480] + xx[80] * xx[1464];
  xx[707] = xx[706] + xx[67] * xx[268] - xx[68] * xx[241];
  xx[716] = - xx[701];
  xx[717] = - xx[704];
  xx[718] = - xx[707];
  solveSymmetricPosDef(xx + 913, xx + 716, 3, 1, xx + 823, xx + 1337);
  xx[716] = xx[683] + xx[78] * xx[823] + xx[140] * xx[824];
  xx[717] = xx[699] - xx[713] * xx[823] + xx[79] * xx[824];
  xx[718] = xx[706] + xx[80] * xx[825];
  pm_math_quatXform(xx + 889, xx + 716, xx + 1337);
  xx[716] = xx[241] + xx[731] * xx[823] - xx[806] * xx[824] - xx[870] * xx[825];
  xx[717] = xx[268] + xx[806] * xx[823] + xx[731] * xx[824] + xx[908] * xx[825];
  xx[718] = xx[679] + xx[909] * xx[823] + xx[927] * xx[824];
  pm_math_quatXform(xx + 889, xx + 716, xx + 1358);
  pm_math_cross3(xx + 893, xx + 1358, xx + 716);
  xx[709] = xx[571] * state[47];
  xx[711] = xx[560] * state[47];
  xx[712] = xx[1020] - xx[966];
  xx[714] = xx[1021] - xx[969];
  xx[716] = xx[1023] - xx[967];
  xx[717] = xx[1024] - xx[970];
  xx[722] = xx[1028] - xx[974];
  xx[1578] = xx[712];
  xx[1579] = xx[714];
  xx[1580] = xx[1022] - xx[972];
  xx[1581] = xx[716];
  xx[1582] = xx[717];
  xx[1583] = xx[1025] - xx[973];
  xx[1584] = xx[708];
  xx[1585] = xx[710];
  xx[1586] = xx[722];
  xx[965] = xx[861];
  xx[966] = xx[862];
  xx[967] = xx[543];
  xx[708] = 4.000000007367204e-3;
  xx[972] = xx[558] - xx[463];
  xx[973] = - xx[449];
  xx[974] = xx[175] - (xx[708] - (xx[681] * xx[708] * xx[681] + xx[708] * xx[688]
    * xx[688]) * xx[19]);
  pm_math_cross3(xx + 965, xx + 972, xx + 1020);
  pm_math_cross3(xx + 965, xx + 1020, xx + 1023);
  xx[449] = xx[681] * xx[1024] + xx[1023] * xx[688];
  xx[463] = xx[667] + xx[671];
  xx[667] = xx[856] * state[47];
  xx[671] = xx[1023] - xx[19] * xx[449] * xx[688] + xx[463] * xx[667];
  xx[708] = xx[834] * state[47];
  xx[710] = xx[463] * xx[708] + xx[1024] - xx[19] * xx[449] * xx[681];
  xx[449] = xx[1025] - (xx[681] * xx[681] * xx[1025] + xx[1025] * xx[688] * xx
                        [688]) * xx[19] - ((xx[560] + xx[560]) * xx[667] + (xx
    [571] + xx[571]) * xx[708]);
  xx[965] = xx[671];
  xx[966] = xx[710];
  xx[967] = xx[449];
  pm_math_matrix3x3Xform(xx + 1578, xx + 965, xx + 1020);
  xx[463] = xx[709] * (xx[1017] - xx[1035] - xx[1031] - xx[1053]) - xx[711] *
    (xx[1018] - xx[1036] - xx[1034] - xx[1054]) + xx[1022];
  xx[1578] = xx[952];
  xx[1579] = xx[1039];
  xx[1580] = xx[1040];
  xx[1581] = xx[1041];
  xx[1582] = xx[971];
  xx[1583] = xx[1043];
  xx[1584] = xx[1044];
  xx[1585] = xx[1045];
  xx[1586] = xx[393] + xx[1046];
  pm_math_matrix3x3Xform(xx + 1578, xx + 965, xx + 969);
  xx[560] = xx[709] * xx[712] - xx[711] * xx[716] + xx[969];
  xx[571] = xx[709] * xx[714] - xx[711] * xx[717] + xx[970];
  xx[965] = (xx[1013] - xx[1031] - xx[1035] - xx[1049] + xx[834] * xx[712] - xx
             [856] * xx[714]) / xx[1027];
  xx[966] = (xx[1016] - xx[1034] - xx[1036] - xx[1052] + xx[834] * xx[716] - xx
             [856] * xx[717]) / xx[1027];
  xx[967] = xx[928] / xx[1027];
  pm_math_quatInverseXform(xx + 675, xx + 25, xx + 969);
  xx[667] = xx[969] - xx[862] * inputDot[8];
  xx[708] = xx[970] + xx[861] * inputDot[8];
  xx[712] = xx[708] * xx[681] + xx[688] * xx[667];
  xx[714] = xx[667] - xx[19] * xx[712] * xx[688];
  xx[716] = xx[708] - xx[19] * xx[712] * xx[681];
  xx[712] = xx[971] - inputDdot[8];
  xx[717] = xx[712] - (xx[681] * xx[681] * xx[712] + xx[688] * xx[712] * xx[688])
    * xx[19];
  xx[969] = xx[714];
  xx[970] = xx[716];
  xx[971] = xx[717];
  xx[1011] = xx[968] / xx[1027];
  xx[1012] = xx[1026] / xx[1027];
  xx[1013] = (xx[722] + xx[834] * xx[1044] - xx[856] * xx[1045]) / xx[1027];
  xx[722] = xx[703] * xx[175];
  xx[764] = xx[514] + xx[175] * xx[689];
  xx[1014] = xx[722];
  xx[1015] = xx[764];
  xx[1016] = xx[510];
  pm_math_cross3(xx + 901, xx + 1014, xx + 1017);
  xx[766] = xx[705] * xx[510];
  xx[900] = 0.1165527193553521 - ((xx[705] * xx[722] + xx[1017]) * xx[19] - xx
    [16]);
  xx[901] = 0.02992349485130436 - (xx[705] * xx[764] + xx[1018]) * xx[19];
  xx[902] = - (0.1050044054848736 + xx[175] + xx[19] * (xx[1019] + xx[766]));
  pm_math_cross3(xx + 25, xx + 900, xx + 1014);
  xx[1017] = xx[15] + xx[1014];
  xx[1018] = xx[5] + xx[1015];
  xx[1019] = xx[18] + xx[1016];
  pm_math_quatInverseXform(xx + 675, xx + 1017, xx + 1014);
  pm_math_cross3(xx + 35, xx + 900, xx + 1017);
  pm_math_cross3(xx + 35, xx + 1017, xx + 900);
  pm_math_quatInverseXform(xx + 675, xx + 900, xx + 1017);
  xx[675] = xx[16] * inputDot[8];
  xx[676] = xx[667];
  xx[677] = xx[708];
  xx[678] = xx[712];
  pm_math_cross3(xx + 676, xx + 972, xx + 900);
  xx[667] = xx[1014] + xx[1017] + (xx[863] + xx[543]) * xx[675] + xx[900];
  xx[543] = xx[1015] + xx[1018] - xx[16] * inputDdot[8] + xx[901];
  xx[676] = xx[543] * xx[681] + xx[667] * xx[688];
  xx[677] = xx[667] - xx[19] * xx[676] * xx[688];
  xx[667] = xx[543] - xx[19] * xx[676] * xx[681];
  xx[543] = xx[1016] + xx[1019] - (xx[861] + xx[861]) * xx[675] + xx[902];
  xx[675] = xx[543] - (xx[681] * xx[543] * xx[681] + xx[543] * xx[688] * xx[688])
    * xx[19];
  xx[861] = xx[677];
  xx[862] = xx[667];
  xx[863] = xx[675];
  xx[543] = pm_math_dot3(xx + 965, xx + 969) + pm_math_dot3(xx + 1011, xx + 861);
  xx[676] = (xx[1461] + xx[1339] + xx[718] + xx[463] + (xx[1358] + xx[560]) *
             xx[834] - (xx[1359] + xx[571]) * xx[856]) / xx[1027] + xx[543];
  xx[678] = xx[714] + xx[709];
  xx[681] = xx[716] - xx[711];
  xx[861] = xx[678];
  xx[862] = xx[681];
  xx[863] = xx[717] - xx[676];
  pm_math_quatInverseXform(xx + 889, xx + 861, xx + 900);
  pm_math_cross3(xx + 861, xx + 893, xx + 965);
  xx[688] = xx[675] + xx[449];
  xx[861] = xx[677] - xx[676] * xx[834] + xx[671] + xx[965];
  xx[862] = xx[667] + xx[676] * xx[856] + xx[710] + xx[966];
  xx[863] = xx[688] + xx[967];
  pm_math_quatInverseXform(xx + 889, xx + 861, xx + 965);
  xx[449] = xx[823] - (pm_math_dot3(xx + 962, xx + 900) + pm_math_dot3(xx + 1059,
    xx + 965));
  xx[675] = xx[824] - (pm_math_dot3(xx + 1062, xx + 900) + pm_math_dot3(xx +
    1068, xx + 965));
  xx[708] = xx[825] - (pm_math_dot3(xx + 1071, xx + 900) + pm_math_dot3(xx + 993,
    xx + 965));
  xx[709] = xx[271] * (xx[507] + xx[149] * xx[20]) * xx[19];
  xx[20] = (xx[400] + xx[149] * xx[467]) * xx[19];
  xx[400] = xx[19] * (xx[438] - xx[149] * xx[17]) * xx[271];
  xx[271] = (xx[467] * xx[163] + xx[17] * xx[156]) * xx[19];
  pm_math_matrix3x3Compose(xx + 811, xx + 573, xx + 965);
  xx[17] = xx[474] * state[30] * state[30];
  xx[438] = xx[19] * xx[568] * state[30] * state[30];
  xx[467] = xx[19] * xx[572] * state[30] * state[30];
  xx[474] = (xx[211] + xx[212]) * xx[19];
  xx[211] = xx[646] * xx[646];
  xx[572] = (xx[211] + xx[1116]) * xx[19] - xx[21];
  xx[573] = xx[1091];
  xx[574] = (xx[1106] + xx[1105]) * xx[19];
  xx[575] = (xx[1083] + xx[1084]) * xx[19];
  xx[576] = (xx[211] + xx[1075]) * xx[19] - xx[21];
  xx[577] = xx[1119];
  xx[578] = xx[1123];
  xx[579] = (xx[1117] + xx[1118]) * xx[19];
  xx[580] = (xx[211] + xx[1076]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 871, xx + 572, xx + 1011);
  xx[211] = xx[785] * xx[785];
  xx[212] = xx[786] * xx[787];
  xx[1028] = (xx[211] + xx[1150]) * xx[19] - xx[21];
  xx[1029] = xx[19] * (xx[212] - xx[1110]);
  xx[1030] = (xx[945] + xx[1104]) * xx[19];
  xx[1031] = (xx[212] + xx[1110]) * xx[19];
  xx[1032] = (xx[211] + xx[1154]) * xx[19] - xx[21];
  xx[1033] = xx[19] * (xx[1149] - xx[1148]);
  xx[1034] = xx[1128];
  xx[1035] = (xx[1149] + xx[1148]) * xx[19];
  xx[1036] = (xx[211] + xx[788] * xx[788]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 2022, xx + 1028, xx + 1043);
  xx[211] = xx[936] * xx[936];
  xx[212] = (xx[211] + xx[636]) * xx[19] - xx[21];
  xx[507] = xx[937] * xx[938];
  xx[568] = xx[936] * xx[939];
  xx[581] = (xx[507] + xx[568]) * xx[19];
  xx[636] = xx[938] * xx[159] - xx[157] * xx[937];
  xx[711] = xx[636] * xx[636];
  xx[712] = xx[939] * xx[159] - xx[157] * xx[936];
  xx[714] = xx[712] * xx[712];
  xx[716] = (xx[711] + xx[714]) * xx[19] - xx[21];
  xx[718] = xx[936] * xx[159] + xx[157] * xx[939];
  xx[722] = xx[718] * xx[712];
  xx[764] = xx[157] * xx[938] + xx[937] * xx[159];
  xx[772] = xx[764] * xx[636];
  xx[797] = (xx[722] + xx[772]) * xx[19];
  xx[861] = - xx[636];
  xx[862] = xx[712];
  xx[863] = xx[718];
  xx[864] = - xx[764];
  pm_math_quatCompose(xx + 330, xx + 861, xx + 900);
  xx[798] = xx[900] * xx[900];
  xx[823] = xx[901] * xx[902];
  xx[824] = xx[900] * xx[903];
  xx[825] = xx[901] * xx[903];
  xx[832] = xx[900] * xx[902];
  xx[833] = xx[902] * xx[903];
  xx[861] = xx[900] * xx[901];
  xx[1578] = (xx[798] + xx[901] * xx[901]) * xx[19] - xx[21];
  xx[1579] = xx[19] * (xx[823] - xx[824]);
  xx[1580] = (xx[825] + xx[832]) * xx[19];
  xx[1581] = (xx[823] + xx[824]) * xx[19];
  xx[1582] = (xx[798] + xx[902] * xx[902]) * xx[19] - xx[21];
  xx[1583] = xx[19] * (xx[833] - xx[861]);
  xx[1584] = xx[19] * (xx[825] - xx[832]);
  xx[1585] = (xx[833] + xx[861]) * xx[19];
  xx[1586] = (xx[798] + xx[903] * xx[903]) * xx[19] - xx[21];
  xx[798] = xx[718] * inputDot[6];
  xx[823] = xx[712] * inputDot[6];
  xx[861] = xx[19] * (xx[798] * xx[636] - xx[764] * xx[823]);
  xx[862] = - ((xx[823] * xx[636] + xx[764] * xx[798]) * xx[19]);
  xx[863] = inputDot[6] - (xx[823] * xx[712] + xx[718] * xx[798]) * xx[19];
  pm_math_matrix3x3PostCross(xx + 1578, xx + 861, xx + 1756);
  xx[798] = xx[937] * state[10];
  xx[823] = xx[938] * state[10];
  xx[824] = xx[19] * (xx[939] * xx[798] - xx[936] * xx[823]);
  pm_math_quatInverseXform(xx + 785, xx + 1056, xx + 861);
  pm_math_quatInverseXform(xx + 646, xx + 1080, xx + 785);
  xx[646] = xx[340] * xx[475];
  xx[647] = xx[481] * xx[320] - xx[194] * xx[340];
  xx[481] = xx[320] * xx[475];
  xx[1020] = - xx[646];
  xx[1021] = xx[647];
  xx[1022] = xx[481];
  pm_math_cross3(xx + 930, xx + 1020, xx + 1023);
  xx[648] = xx[19] * (xx[1023] + xx[646] * xx[200]) - xx[320];
  xx[646] = xx[785] + xx[648];
  xx[649] = xx[861] + xx[646];
  xx[788] = (xx[936] * xx[798] + xx[939] * xx[823]) * xx[19];
  xx[825] = xx[19] * (xx[1024] - xx[200] * xx[647]);
  xx[647] = xx[786] + xx[825];
  xx[832] = xx[862] + xx[647];
  xx[833] = state[10] - (xx[937] * xx[798] + xx[938] * xx[823]) * xx[19];
  xx[798] = (xx[1025] - xx[481] * xx[200]) * xx[19] - xx[340];
  xx[481] = xx[798] + state[30];
  xx[823] = xx[787] + xx[481];
  xx[864] = xx[863] + xx[823];
  xx[935] = xx[824] + xx[649];
  xx[936] = xx[788] + xx[832];
  xx[937] = xx[833] + xx[864];
  pm_math_matrix3x3PostCross(xx + 1756, xx + 935, xx + 1578);
  xx[868] = xx[19] * (xx[722] - xx[772]);
  xx[722] = xx[764] * xx[712];
  xx[772] = xx[718] * xx[636];
  xx[869] = (xx[722] + xx[772]) * xx[19];
  xx[896] = xx[718] * xx[718];
  xx[904] = (xx[711] + xx[896]) * xx[19] - xx[21];
  xx[910] = xx[636] * xx[712];
  xx[636] = xx[764] * xx[718];
  xx[712] = xx[19] * (xx[910] - xx[636]);
  xx[718] = xx[19] * (xx[772] - xx[722]);
  xx[1756] = xx[716];
  xx[1757] = xx[868];
  xx[1758] = - xx[869];
  xx[1759] = xx[797];
  xx[1760] = xx[904];
  xx[1761] = xx[712];
  xx[1762] = xx[718];
  xx[1763] = - ((xx[636] + xx[910]) * xx[19]);
  xx[1764] = (xx[711] + xx[764] * xx[764]) * xx[19] - xx[21];
  xx[935] = xx[824];
  xx[936] = xx[788];
  xx[937] = xx[833];
  pm_math_matrix3x3PostCross(xx + 1756, xx + 935, xx + 2045);
  xx[935] = xx[649];
  xx[936] = xx[832];
  xx[937] = xx[864];
  pm_math_matrix3x3PostCross(xx + 2045, xx + 935, xx + 1756);
  xx[649] = xx[19] * (xx[507] - xx[568]);
  xx[507] = (xx[564] + xx[631]) * xx[19];
  xx[564] = (xx[211] + xx[637]) * xx[19] - xx[21];
  xx[568] = xx[19] * (xx[635] - xx[633]);
  xx[2045] = xx[212];
  xx[2046] = xx[649];
  xx[2047] = xx[507];
  xx[2048] = xx[581];
  xx[2049] = xx[564];
  xx[2050] = xx[568];
  xx[2051] = xx[632];
  xx[2052] = (xx[635] + xx[633]) * xx[19];
  xx[2053] = (xx[211] + xx[939] * xx[939]) * xx[19] - xx[21];
  pm_math_matrix3x3PostCross(xx + 2045, xx + 861, xx + 2327);
  xx[631] = xx[646];
  xx[632] = xx[647];
  xx[633] = xx[823];
  pm_math_matrix3x3PostCross(xx + 2327, xx + 631, xx + 2045);
  pm_math_matrix3x3PostCross(xx + 1028, xx + 785, xx + 2327);
  xx[631] = xx[648];
  xx[632] = xx[825];
  xx[633] = xx[481];
  pm_math_matrix3x3PostCross(xx + 2327, xx + 631, xx + 1028);
  xx[631] = xx[648];
  xx[632] = xx[825];
  xx[633] = xx[798];
  pm_math_matrix3x3PostCross(xx + 572, xx + 631, xx + 2327);
  xx[211] = xx[2328] * state[30];
  xx[481] = xx[2331] * state[30];
  xx[572] = xx[2334] * state[30];
  xx[573] = xx[2333] * state[30];
  xx[574] = xx[2327] * state[30];
  xx[575] = xx[2330] * state[30];
  xx[2327] = xx[1028] + xx[211] * xx[450] + xx[481] * xx[602] - xx[605] * xx[572];
  xx[2328] = xx[1029] + xx[605] * xx[573] - (xx[574] * xx[450] + xx[575] * xx
    [602]);
  xx[2329] = xx[1030];
  xx[2330] = xx[1031] + xx[481] * xx[541] - xx[606] * xx[211] + xx[572] * xx[608];
  xx[2331] = xx[1032] + xx[606] * xx[574] - xx[575] * xx[541] - xx[573] * xx[608];
  xx[2332] = xx[1033];
  xx[2333] = xx[1034] + xx[211] * xx[609] + xx[603] * xx[481] + xx[572] * xx[542];
  xx[2334] = xx[1035] - (xx[574] * xx[609] + xx[603] * xx[575] + xx[573] * xx
    [542]);
  xx[2335] = xx[1036];
  pm_math_matrix3x3Compose(xx + 732, xx + 2327, xx + 572);
  xx[211] = xx[2045] + xx[572];
  xx[481] = xx[2048] + xx[575];
  xx[631] = xx[2046] + xx[573];
  xx[632] = xx[2049] + xx[576];
  xx[633] = xx[2047] + xx[574];
  xx[635] = xx[2050] + xx[577];
  xx[1028] = xx[1756] + xx[211] * xx[378] - xx[481] * xx[198];
  xx[1029] = xx[1757] + xx[631] * xx[378] - xx[632] * xx[198];
  xx[1030] = xx[1758] + xx[633] * xx[378] - xx[635] * xx[198];
  xx[1031] = xx[1759] + xx[481] * xx[434] - xx[211] * xx[198];
  xx[1032] = xx[1760] + xx[632] * xx[434] - xx[631] * xx[198];
  xx[1033] = xx[1761] + xx[635] * xx[434] - xx[633] * xx[198];
  xx[1034] = xx[1762] - (xx[2051] + xx[578]);
  xx[1035] = xx[1763] - (xx[2052] + xx[579]);
  xx[1036] = xx[1764] - (xx[2053] + xx[580]);
  pm_math_matrix3x3Compose(xx + 2336, xx + 1028, xx + 572);
  xx[211] = xx[19] * xx[480] * state[30] * state[30];
  xx[480] = xx[477] * state[30] * state[30];
  xx[477] = xx[19] * xx[566] * state[30] * state[30];
  xx[481] = xx[19] * (xx[207] - xx[208]);
  xx[207] = (xx[150] + xx[311] * xx[311]) * xx[19] - xx[21];
  xx[1028] = xx[965] - (xx[17] * xx[152] - xx[33] * xx[438] + xx[467] * xx[474])
    + xx[1011] + xx[1043] + xx[422] * xx[212] + xx[581] * xx[440] - (xx[441] *
    xx[716] + xx[499] * xx[797]) + (xx[1578] + xx[572]) * xx[19];
  xx[1029] = xx[966] - (xx[211] * xx[152] + xx[480] * xx[33] - xx[477] * xx[474])
    + xx[1012] + xx[1044] + xx[649] * xx[422] + xx[440] * xx[564] - (xx[441] *
    xx[868] + xx[499] * xx[904]) + (xx[1579] + xx[573]) * xx[19];
  xx[1030] = xx[967] + xx[1013] + xx[1045] + xx[507] * xx[422] + xx[568] * xx
    [440] + xx[441] * xx[869] - xx[499] * xx[712] + (xx[1580] + xx[574]) * xx[19];
  xx[1031] = xx[968] - (xx[197] * xx[17] - xx[438] * xx[153] + xx[481] * xx[467])
    + xx[1014] + xx[1046] + xx[31] * xx[212] + xx[581] * xx[32] - (xx[166] * xx
    [716] + xx[206] * xx[797]) + (xx[1581] + xx[575]) * xx[19];
  xx[1032] = xx[969] - (xx[197] * xx[211] + xx[480] * xx[153] - xx[481] * xx[477])
    + xx[1015] + xx[1047] + xx[649] * xx[31] + xx[32] * xx[564] - (xx[166] * xx
    [868] + xx[206] * xx[904]) + (xx[1582] + xx[576]) * xx[19];
  xx[1033] = xx[970] + xx[1016] + xx[1048] + xx[507] * xx[31] + xx[568] * xx[32]
    + xx[869] * xx[166] - xx[206] * xx[712] + (xx[1583] + xx[577]) * xx[19];
  xx[1034] = xx[971] - (xx[213] * xx[17] - xx[210] * xx[438] + xx[467] * xx[207])
    + xx[1017] + xx[1049] + xx[220] * xx[212] + xx[581] * xx[221] - (xx[222] *
    xx[716] + xx[223] * xx[797]) + (xx[1584] + xx[578]) * xx[19];
  xx[1035] = xx[972] - (xx[213] * xx[211] + xx[210] * xx[480] - xx[477] * xx[207])
    + xx[1018] + xx[1050] + xx[649] * xx[220] + xx[221] * xx[564] - (xx[222] *
    xx[868] + xx[223] * xx[904]) + (xx[1585] + xx[579]) * xx[19];
  xx[1036] = xx[973] + xx[1019] + xx[1051] + xx[507] * xx[220] + xx[568] * xx
    [221] + xx[869] * xx[222] - xx[223] * xx[712] + (xx[1586] + xx[580]) * xx[19];
  pm_math_matrix3x3Xform(xx + 1028, xx + 231, xx + 572);
  xx[17] = xx[194] * xx[620] + xx[619] * xx[475];
  xx[575] = - xx[614];
  xx[576] = xx[601];
  xx[577] = xx[17];
  pm_math_cross3(xx + 930, xx + 575, xx + 578);
  xx[150] = state[30] * state[30];
  xx[575] = (xx[19] * (xx[578] - xx[954]) - xx[619]) * xx[150];
  xx[576] = ((xx[926] + xx[579]) * xx[19] - xx[620]) * xx[150];
  xx[577] = (xx[200] * xx[17] + xx[580]) * xx[19] * xx[150];
  pm_math_quatXform(xx + 308, xx + 575, xx + 578);
  pm_math_matrix3x3Xform(xx + 741, xx + 626, xx + 575);
  xx[631] = xx[575] + xx[203];
  xx[632] = xx[576] + xx[219];
  xx[633] = xx[577] + xx[224];
  pm_math_quatXform(xx + 304, xx + 631, xx + 575);
  pm_math_matrix3x3Xform(xx + 847, xx + 794, xx + 631);
  xx[646] = xx[631] + xx[589];
  xx[647] = xx[632] + xx[590];
  xx[648] = xx[633] + xx[591];
  pm_math_quatXform(xx + 300, xx + 646, xx + 631);
  pm_math_matrix3x3Xform(xx + 1944, xx + 808, xx + 646);
  xx[785] = xx[646] + xx[652];
  xx[786] = xx[647] + xx[653];
  xx[787] = xx[648] + xx[654];
  pm_math_quatXform(xx + 296, xx + 785, xx + 646);
  xx[17] = xx[803] * xx[274] - xx[804] * xx[379] + xx[202];
  xx[150] = xx[804] * xx[274] - xx[803] * xx[435] - xx[218];
  xx[194] = xx[164] * xx[150];
  xx[200] = xx[164] * xx[17];
  xx[208] = xx[149] * xx[150] - xx[17] * xx[156];
  xx[785] = - xx[194];
  xx[786] = xx[200];
  xx[787] = xx[208];
  pm_math_cross3(xx + 284, xx + 785, xx + 823);
  xx[211] = xx[803] * xx[157] + xx[804] * xx[159];
  xx[212] = xx[804] - xx[19] * xx[211] * xx[159] + xx[428];
  xx[438] = xx[803] - xx[19] * xx[211] * xx[157] + xx[429];
  xx[211] = xx[950] * state[30];
  xx[467] = xx[955] * state[30];
  xx[475] = xx[19] * xx[956] * state[30];
  xx[785] = xx[211] - xx[625] * xx[340];
  xx[786] = xx[467] + xx[320] * xx[622] - xx[340] * xx[621];
  xx[787] = xx[475] + xx[625] * xx[320];
  pm_math_quatXform(xx + 214, xx + 785, xx + 619);
  xx[477] = xx[282] + xx[619];
  pm_math_cross3(xx + 1080, xx + 794, xx + 785);
  xx[480] = xx[238] + xx[620];
  xx[507] = xx[621] - xx[243];
  xx[619] = xx[477] + xx[785];
  xx[620] = xx[480] + xx[786];
  xx[621] = xx[507] + xx[787];
  pm_math_quatXform(xx + 188, xx + 619, xx + 785);
  xx[564] = xx[334] + xx[785];
  pm_math_cross3(xx + 1056, xx + 808, xx + 619);
  xx[566] = xx[335] + xx[786];
  xx[568] = xx[336] + xx[787];
  xx[785] = xx[564] + xx[619];
  xx[786] = xx[566] + xx[620];
  xx[787] = xx[568] + xx[621];
  pm_math_quatXform(xx + 178, xx + 785, xx + 619);
  xx[581] = xx[669] + xx[619];
  xx[601] = xx[581] - xx[803] * state[10];
  xx[614] = xx[670] + xx[620];
  xx[619] = xx[614] + xx[804] * state[10];
  xx[620] = xx[619] * xx[157] + xx[159] * xx[601];
  xx[621] = (xx[425] + xx[601] - xx[19] * xx[620] * xx[159]) * inputDot[6];
  xx[601] = xx[164] * xx[621];
  xx[622] = (xx[432] + xx[619] - xx[19] * xx[620] * xx[157]) * inputDot[6];
  xx[619] = xx[164] * xx[622];
  xx[620] = xx[149] * xx[621] + xx[622] * xx[156];
  xx[785] = - xx[601];
  xx[786] = - xx[619];
  xx[787] = xx[620];
  pm_math_cross3(xx + 284, xx + 785, xx + 794);
  xx[625] = xx[614] * state[10];
  xx[614] = xx[581] * state[10];
  xx[581] = xx[625] * xx[159] - xx[157] * xx[614];
  xx[785] = xx[564];
  xx[786] = xx[566];
  xx[787] = xx[568];
  pm_math_cross3(xx + 1056, xx + 785, xx + 808);
  pm_math_quatXform(xx + 178, xx + 808, xx + 785);
  xx[808] = xx[477];
  xx[809] = xx[480];
  xx[810] = xx[507];
  pm_math_cross3(xx + 1080, xx + 808, xx + 861);
  pm_math_quatXform(xx + 188, xx + 861, xx + 808);
  xx[861] = xx[340] * xx[467];
  xx[862] = xx[320] * xx[475] - xx[340] * xx[211];
  xx[863] = - (xx[320] * xx[467]);
  pm_math_quatXform(xx + 214, xx + 861, xx + 930);
  pm_math_quatXform(xx + 188, xx + 930, xx + 861);
  xx[930] = xx[808] + xx[861];
  xx[931] = xx[809] + xx[862];
  xx[932] = xx[810] + xx[863];
  pm_math_quatXform(xx + 178, xx + 930, xx + 808);
  xx[211] = xx[785] + xx[808];
  xx[467] = xx[786] + xx[809];
  xx[475] = xx[467] * xx[157] + xx[211] * xx[159];
  xx[477] = xx[787] + xx[810];
  xx[785] = xx[19] * xx[159] * xx[581] - xx[625] + xx[211] - xx[19] * xx[475] *
    xx[159];
  xx[786] = xx[614] + xx[19] * xx[157] * xx[581] + xx[467] - xx[19] * xx[475] *
    xx[157];
  xx[787] = xx[477] - (xx[157] * xx[477] * xx[157] + xx[477] * xx[159] * xx[159])
    * xx[19];
  pm_math_quatXform(xx + 330, xx + 785, xx + 808);
  xx[211] = xx[1527] * xx[1527];
  xx[467] = xx[1132] * xx[1527];
  xx[475] = xx[161] * xx[1087];
  xx[477] = xx[1132] * xx[161];
  xx[480] = xx[1087] * xx[1527];
  xx[507] = xx[1132] * xx[1087];
  xx[564] = xx[161] * xx[1527];
  xx[965] = (xx[211] + xx[161] * xx[161]) * xx[19] - xx[21];
  xx[966] = xx[19] * (xx[467] - xx[475]);
  xx[967] = - ((xx[477] + xx[480]) * xx[19]);
  xx[968] = - ((xx[475] + xx[467]) * xx[19]);
  xx[969] = (xx[211] + xx[1087] * xx[1087]) * xx[19] - xx[21];
  xx[970] = xx[19] * (xx[507] - xx[564]);
  xx[971] = xx[19] * (xx[480] - xx[477]);
  xx[972] = (xx[507] + xx[564]) * xx[19];
  xx[973] = (xx[211] + xx[1132] * xx[1132]) * xx[19] - xx[21];
  xx[161] = xx[53] * state[43];
  xx[211] = xx[53] * state[44];
  xx[467] = state[43] - (xx[53] * xx[161] - xx[54] * xx[211]) * xx[19];
  xx[475] = xx[1558] * xx[467] - xx[1517] * state[45];
  xx[477] = state[44] - xx[19] * (xx[54] * xx[161] + xx[53] * xx[211]);
  xx[161] = xx[477] * xx[1517] - xx[1557] * xx[467];
  xx[211] = xx[477] * xx[1558] - xx[1557] * state[45];
  xx[480] = xx[1576] * state[45] - xx[1539] * xx[467];
  xx[507] = xx[477] * xx[1576] - xx[1519] * xx[467];
  xx[564] = xx[1519] * state[45] - xx[477] * xx[1539];
  xx[566] = xx[1508] * xx[467] - xx[1510] * state[45];
  xx[568] = xx[477] * xx[1510] - xx[1534] * xx[467];
  xx[581] = xx[1534] * state[45] - xx[477] * xx[1508];
  xx[1011] = xx[475] * state[45] - xx[161] * xx[477];
  xx[1012] = xx[211] * state[45] + xx[161] * xx[467];
  xx[1013] = - (xx[211] * xx[477] + xx[475] * xx[467]);
  xx[1014] = - (xx[480] * state[45] + xx[477] * xx[507]);
  xx[1015] = xx[507] * xx[467] - xx[564] * state[45];
  xx[1016] = xx[564] * xx[477] + xx[480] * xx[467];
  xx[1017] = xx[566] * state[45] - xx[477] * xx[568];
  xx[1018] = xx[568] * xx[467] - xx[581] * state[45];
  xx[1019] = xx[477] * xx[581] - xx[566] * xx[467];
  pm_math_matrix3x3Compose(xx + 965, xx + 1011, xx + 1028);
  xx[161] = xx[19] * xx[1134] * xx[1465] * state[38] * state[38];
  xx[211] = xx[1085] * xx[1133];
  xx[475] = xx[1500] * xx[154];
  xx[480] = xx[211] - xx[475];
  xx[507] = xx[19] * xx[480];
  xx[564] = (xx[19] * xx[1134] * xx[1134] - xx[21]) * state[38] * state[38];
  xx[566] = xx[154] * xx[154];
  xx[568] = (xx[566] + xx[1085] * xx[1085]) * xx[19] - xx[21];
  xx[581] = xx[161] * xx[507] - xx[564] * xx[568];
  xx[614] = (xx[19] * xx[1465] * xx[1465] - xx[21]) * state[38] * state[38];
  xx[625] = xx[161] * xx[568] - xx[614] * xx[507];
  xx[635] = xx[568] * inputDot[11] * inputDot[11];
  xx[637] = xx[1516] * xx[1465] - xx[1134] * xx[1503];
  xx[649] = xx[637] * xx[637];
  xx[711] = xx[1465] * xx[1518] + xx[1134] * xx[1501];
  xx[712] = xx[711] * xx[711];
  xx[716] = (xx[649] + xx[712]) * xx[19] - xx[21];
  xx[722] = xx[1516] * xx[1134] + xx[1465] * xx[1503];
  xx[764] = xx[637] * xx[722];
  xx[772] = xx[1465] * xx[1501] - xx[1134] * xx[1518];
  xx[785] = xx[772] * xx[711];
  xx[786] = (xx[764] - xx[785]) * xx[19];
  xx[787] = xx[19] * xx[480] * inputDot[11] * inputDot[11];
  xx[861] = xx[154];
  xx[862] = xx[1085];
  xx[863] = xx[1133];
  xx[864] = xx[1500];
  xx[935] = xx[637];
  xx[936] = - xx[711];
  xx[937] = xx[772];
  xx[938] = xx[722];
  pm_math_quatCompose(xx + 861, xx + 935, xx + 965);
  xx[480] = xx[965] * xx[965];
  xx[788] = xx[966] * xx[967];
  xx[797] = xx[965] * xx[968];
  xx[798] = xx[966] * xx[968];
  xx[803] = xx[965] * xx[967];
  xx[804] = xx[967] * xx[968];
  xx[832] = xx[965] * xx[966];
  xx[1043] = (xx[480] + xx[966] * xx[966]) * xx[19] - xx[21];
  xx[1044] = xx[19] * (xx[788] - xx[797]);
  xx[1045] = (xx[798] + xx[803]) * xx[19];
  xx[1046] = (xx[788] + xx[797]) * xx[19];
  xx[1047] = (xx[480] + xx[967] * xx[967]) * xx[19] - xx[21];
  xx[1048] = xx[19] * (xx[804] - xx[832]);
  xx[1049] = xx[19] * (xx[798] - xx[803]);
  xx[1050] = (xx[804] + xx[832]) * xx[19];
  xx[1051] = (xx[480] + xx[968] * xx[968]) * xx[19] - xx[21];
  xx[480] = xx[711] * inputDot[11];
  xx[788] = xx[772] * inputDot[11];
  xx[930] = - (xx[19] * (xx[480] * xx[722] + xx[637] * xx[788]));
  xx[931] = (xx[788] * xx[722] - xx[637] * xx[480]) * xx[19];
  xx[932] = inputDot[11] - (xx[480] * xx[711] + xx[772] * xx[788]) * xx[19];
  pm_math_matrix3x3PostCross(xx + 1043, xx + 930, xx + 1527);
  xx[480] = xx[1516] * state[38];
  xx[788] = xx[1503] * state[38];
  xx[797] = (xx[480] * xx[1501] + xx[788] * xx[1518]) * xx[19];
  xx[798] = xx[19] * (xx[480] * xx[1518] - xx[788] * xx[1501]);
  xx[803] = state[38] - (xx[788] * xx[1503] + xx[1516] * xx[480]) * xx[19];
  xx[930] = xx[797] + xx[467];
  xx[931] = xx[798] + xx[477];
  xx[932] = xx[803] + state[45];
  pm_math_matrix3x3PostCross(xx + 1527, xx + 930, xx + 1043);
  xx[480] = xx[1500] * xx[1085];
  xx[788] = xx[154] * xx[1133];
  xx[804] = xx[211] + xx[475];
  xx[211] = xx[804] * xx[19];
  xx[475] = (xx[566] + xx[1133] * xx[1133]) * xx[19] - xx[21];
  xx[832] = xx[1500] * xx[1133];
  xx[833] = xx[1085] * xx[154];
  xx[868] = xx[480] - xx[788];
  xx[869] = xx[19] * xx[868];
  xx[904] = xx[832] + xx[833];
  xx[925] = xx[904] * xx[19];
  xx[1527] = xx[568];
  xx[1528] = xx[507];
  xx[1529] = (xx[480] + xx[788]) * xx[19];
  xx[1530] = xx[211];
  xx[1531] = xx[475];
  xx[1532] = xx[19] * (xx[832] - xx[833]);
  xx[1533] = xx[869];
  xx[1534] = xx[925];
  xx[1535] = (xx[566] + xx[1500] * xx[1500]) * xx[19] - xx[21];
  xx[480] = xx[19] * (xx[785] + xx[764]);
  xx[507] = xx[637] * xx[772];
  xx[566] = xx[711] * xx[722];
  xx[568] = (xx[507] - xx[566]) * xx[19];
  xx[764] = xx[772] * xx[772];
  xx[785] = (xx[649] + xx[764]) * xx[19] - xx[21];
  xx[788] = xx[772] * xx[722];
  xx[772] = xx[637] * xx[711];
  xx[637] = xx[19] * (xx[788] + xx[772]);
  xx[711] = - (xx[19] * (xx[566] + xx[507]));
  xx[1578] = xx[716];
  xx[1579] = - xx[480];
  xx[1580] = xx[568];
  xx[1581] = xx[786];
  xx[1582] = xx[785];
  xx[1583] = xx[637];
  xx[1584] = xx[711];
  xx[1585] = (xx[788] - xx[772]) * xx[19];
  xx[1586] = (xx[649] + xx[722] * xx[722]) * xx[19] - xx[21];
  xx[930] = xx[797];
  xx[931] = xx[798];
  xx[932] = xx[803];
  pm_math_matrix3x3PostCross(xx + 1578, xx + 930, xx + 1756);
  xx[930] = xx[467];
  xx[931] = xx[477];
  xx[932] = state[45];
  pm_math_matrix3x3PostCross(xx + 1756, xx + 930, xx + 1578);
  pm_math_matrix3x3Compose(xx + 1527, xx + 1578, xx + 1756);
  xx[507] = xx[161] * xx[475] - xx[564] * xx[211];
  xx[566] = xx[211] * xx[161] - xx[614] * xx[475];
  xx[211] = xx[19] * xx[804] * inputDot[11] * inputDot[11];
  xx[649] = xx[475] * inputDot[11] * inputDot[11];
  xx[475] = xx[925] * xx[161] - xx[564] * xx[869];
  xx[722] = xx[161] * xx[869] - xx[614] * xx[925];
  xx[797] = xx[19] * xx[868] * inputDot[11] * inputDot[11];
  xx[798] = xx[19] * xx[904] * inputDot[11] * inputDot[11];
  xx[1527] = xx[1028] + xx[581] * xx[1517] + xx[1576] * xx[625] - (xx[635] * xx
    [716] + xx[786] * xx[787]) + (xx[1043] + xx[1756]) * xx[19];
  xx[1528] = xx[1029] + xx[625] * xx[1519] + xx[1557] * xx[581] - (xx[787] * xx
    [785] - xx[635] * xx[480]) + (xx[1044] + xx[1757]) * xx[19];
  xx[1529] = xx[1030] + xx[1558] * xx[581] + xx[1539] * xx[625] - (xx[635] * xx
    [568] + xx[787] * xx[637]) + (xx[1045] + xx[1758]) * xx[19];
  xx[1530] = xx[1031] + xx[507] * xx[1517] + xx[1576] * xx[566] - (xx[211] * xx
    [716] + xx[786] * xx[649]) + (xx[1046] + xx[1759]) * xx[19];
  xx[1531] = xx[1032] + xx[566] * xx[1519] + xx[1557] * xx[507] - (xx[649] * xx
    [785] - xx[480] * xx[211]) + (xx[1047] + xx[1760]) * xx[19];
  xx[1532] = xx[1033] + xx[1558] * xx[507] + xx[1539] * xx[566] - (xx[568] * xx
    [211] + xx[649] * xx[637]) + (xx[1048] + xx[1761]) * xx[19];
  xx[1533] = xx[1034] + xx[475] * xx[1517] + xx[1576] * xx[722] - (xx[797] * xx
    [716] + xx[786] * xx[798]) + (xx[1049] + xx[1762]) * xx[19];
  xx[1534] = xx[1035] + xx[722] * xx[1519] + xx[1557] * xx[475] - (xx[798] * xx
    [785] - xx[480] * xx[797]) + (xx[1050] + xx[1763]) * xx[19];
  xx[1535] = xx[1036] + xx[1558] * xx[475] + xx[1539] * xx[722] - (xx[568] * xx
    [797] + xx[637] * xx[798]) + (xx[1051] + xx[1764]) * xx[19];
  pm_math_matrix3x3Xform(xx + 1527, xx + 897, xx + 935);
  pm_math_matrix3x3Xform(xx + 1011, xx + 69, xx + 938);
  pm_math_quatXform(xx + 1571, xx + 938, xx + 950);
  xx[475] = state[38] * state[38];
  xx[480] = xx[1546] * xx[1134] - xx[1541] * xx[1465];
  xx[507] = xx[1541] + xx[19] * xx[480] * xx[1465];
  xx[566] = xx[1525] * xx[161] - xx[1524] * xx[564] - xx[475] * xx[507];
  xx[564] = xx[1546] - xx[19] * xx[480] * xx[1134];
  xx[480] = xx[1524] * xx[161] - xx[1525] * xx[614] + xx[475] * xx[564];
  xx[161] = xx[480] * xx[1500];
  xx[475] = xx[566] * xx[1500];
  xx[568] = xx[480] * xx[1085] - xx[566] * xx[1133];
  xx[938] = - xx[161];
  xx[939] = xx[475];
  xx[940] = xx[568];
  pm_math_cross3(xx + 1550, xx + 938, xx + 954);
  xx[581] = inputDot[11] * inputDot[11];
  xx[614] = 0.02520954632904374;
  xx[625] = xx[614] * xx[1133];
  xx[637] = xx[1500] * xx[614];
  xx[716] = xx[1500] * xx[637];
  xx[722] = xx[1134] * xx[1525] + xx[1524] * xx[1465];
  xx[785] = 0.03194045367095631;
  xx[786] = xx[1524] - (xx[19] * xx[722] * xx[1465] - xx[507]) + xx[785];
  xx[803] = xx[1525] - xx[19] * xx[722] * xx[1134] - xx[564];
  pm_math_cross3(xx + 930, xx + 69, xx + 938);
  pm_math_quatXform(xx + 1520, xx + 938, xx + 969);
  xx[722] = xx[969] - xx[1525] * state[38];
  xx[804] = xx[970] + xx[1524] * state[38];
  xx[832] = xx[804] * xx[1134] + xx[1465] * xx[722];
  xx[833] = ((xx[1546] - xx[1548]) * state[38] + xx[722] - xx[19] * xx[832] *
             xx[1465]) * inputDot[11];
  xx[722] = xx[1500] * xx[833];
  xx[868] = ((xx[1541] - xx[1553]) * state[38] + xx[804] - xx[19] * xx[832] *
             xx[1134]) * inputDot[11];
  xx[804] = xx[1500] * xx[868];
  xx[832] = xx[1085] * xx[833] + xx[868] * xx[1133];
  xx[971] = - xx[722];
  xx[972] = - xx[804];
  xx[973] = xx[832];
  pm_math_cross3(xx + 1550, xx + 971, xx + 1011);
  xx[869] = xx[970] * state[38];
  xx[904] = xx[969] * state[38];
  xx[925] = xx[869] * xx[1465] - xx[1134] * xx[904];
  xx[926] = xx[19] * xx[1465] * xx[925] - xx[869];
  xx[869] = xx[904] + xx[19] * xx[1134] * xx[925];
  xx[904] = xx[869] * xx[1500];
  xx[925] = xx[1500] * xx[926];
  xx[928] = xx[869] * xx[1085] - xx[926] * xx[1133];
  xx[969] = - xx[904];
  xx[970] = xx[925];
  xx[971] = xx[928];
  pm_math_cross3(xx + 1550, xx + 969, xx + 972);
  xx[969] = xx[718];
  xx[970] = - ((xx[910] + xx[636]) * xx[19]);
  xx[971] = xx[21] - (xx[714] + xx[896]) * xx[19];
  pm_math_cross3(xx + 969, xx + 231, xx + 1014);
  pm_math_quatXform(xx + 900, xx + 1014, xx + 969);
  xx[636] = xx[164] * xx[212];
  xx[714] = xx[164] * xx[438];
  xx[718] = xx[149] * xx[212] + xx[156] * xx[438];
  xx[900] = - xx[636];
  xx[901] = - xx[714];
  xx[902] = xx[718];
  pm_math_cross3(xx + 284, xx + 900, xx + 1014);
  pm_math_quatInverseXform(xx + 615, xx + 799, xx + 900);
  pm_math_cross3(xx + 799, xx + 626, xx + 1017);
  xx[896] = xx[1205] + xx[372];
  xx[1020] = xx[559] + xx[1017];
  xx[1021] = xx[561] + xx[1018];
  xx[1022] = xx[896] + xx[1019];
  pm_math_quatInverseXform(xx + 615, xx + 1020, xx + 1017);
  xx[900] = xx[860] + xx[479] * xx[902] + xx[583] * xx[1018] - xx[586] * xx[1017];
  xx[901] = xx[711];
  xx[902] = (xx[788] - xx[772]) * xx[19];
  xx[903] = xx[21] - (xx[712] + xx[764]) * xx[19];
  pm_math_cross3(xx + 901, xx + 897, xx + 1017);
  pm_math_quatXform(xx + 965, xx + 1017, xx + 901);
  xx[711] = xx[786] * xx[1500];
  xx[712] = xx[1500] * xx[803];
  xx[764] = xx[786] * xx[1085] + xx[803] * xx[1133];
  xx[965] = - xx[711];
  xx[966] = - xx[712];
  xx[967] = xx[764];
  pm_math_cross3(xx + 1550, xx + 965, xx + 1017);
  xx[772] = xx[1085] * xx[614];
  xx[788] = xx[637] * xx[154];
  pm_math_quatInverseXform(xx + 861, xx + 35, xx + 965);
  xx[860] = xx[1134] * xx[966] + xx[965] * xx[1465];
  xx[910] = xx[965] - xx[19] * xx[860] * xx[1465];
  xx[945] = xx[966] - xx[19] * xx[860] * xx[1134];
  xx[860] = xx[967] + inputDot[11];
  xx[946] = xx[860] - (xx[1134] * xx[860] * xx[1134] + xx[860] * xx[1465] * xx
                       [1465]) * xx[19];
  xx[960] = xx[946] + state[38];
  xx[1020] = xx[910];
  xx[1021] = xx[945];
  xx[1022] = xx[960];
  xx[1023] = xx[50] * xx[910];
  xx[1024] = xx[51] * xx[945];
  xx[1025] = xx[960] * xx[52];
  pm_math_cross3(xx + 1020, xx + 1023, xx + 1028);
  pm_math_quatInverseXform(xx + 1520, xx + 1020, xx + 1023);
  xx[961] = xx[1023] + xx[467];
  xx[467] = xx[1024] + xx[477];
  xx[477] = xx[1025] + state[45];
  xx[1031] = xx[961];
  xx[1032] = xx[467];
  xx[1033] = xx[477];
  xx[1034] = xx[961] * xx[78];
  xx[1035] = xx[467] * xx[79];
  xx[1036] = xx[477] * xx[80];
  pm_math_cross3(xx + 1031, xx + 1034, xx + 1037);
  pm_math_cross3(xx + 1023, xx + 930, xx + 1031);
  xx[930] = xx[1037] + xx[78] * xx[1031];
  xx[931] = xx[1038] + xx[79] * xx[1032];
  xx[1034] = xx[1023] + xx[961];
  xx[1035] = xx[1024] + xx[467];
  xx[1036] = xx[1025] + xx[477];
  pm_math_cross3(xx + 1034, xx + 938, xx + 1023);
  pm_math_cross3(xx + 1020, xx + 1524, xx + 938);
  pm_math_cross3(xx + 1020, xx + 938, xx + 1034);
  pm_math_quatInverseXform(xx + 1520, xx + 1034, xx + 938);
  xx[467] = (xx[1023] + xx[938]) * xx[73];
  xx[477] = (xx[1024] + xx[939]) * xx[73];
  xx[932] = (xx[1025] + xx[940]) * xx[73];
  xx[938] = xx[467];
  xx[939] = xx[477];
  xx[940] = xx[932];
  xx[961] = xx[930] - xx[931] * xx[89] + pm_math_dot3(xx + 111, xx + 938);
  xx[968] = xx[930] * xx[89] + xx[931] + pm_math_dot3(xx + 753, xx + 938);
  xx[938] = xx[1039] + xx[80] * xx[1033];
  xx[939] = xx[938] + xx[67] * xx[477] - xx[68] * xx[467];
  xx[1020] = - xx[961];
  xx[1021] = - xx[968];
  xx[1022] = - xx[939];
  solveSymmetricPosDef(xx + 1562, xx + 1020, 3, 1, xx + 1023, xx + 1031);
  xx[1020] = xx[930] + xx[78] * xx[1023] + xx[140] * xx[1024];
  xx[1021] = xx[931] - xx[713] * xx[1023] + xx[79] * xx[1024];
  xx[1022] = xx[938] + xx[80] * xx[1025];
  pm_math_quatXform(xx + 1520, xx + 1020, xx + 1031);
  xx[1020] = xx[467] + xx[731] * xx[1023] - xx[806] * xx[1024] - xx[870] * xx
    [1025];
  xx[1021] = xx[477] + xx[806] * xx[1023] + xx[731] * xx[1024] + xx[908] * xx
    [1025];
  xx[1022] = xx[932] + xx[909] * xx[1023] + xx[927] * xx[1024];
  pm_math_quatXform(xx + 1520, xx + 1020, xx + 1034);
  pm_math_cross3(xx + 1524, xx + 1034, xx + 1020);
  xx[940] = xx[945] * state[38];
  xx[999] = xx[910] * state[38];
  xx[1005] = xx[1647] - xx[1611];
  xx[1007] = xx[1648] - xx[1614];
  xx[1020] = xx[1650] - xx[1612];
  xx[1021] = xx[1651] - xx[1615];
  xx[1026] = xx[1655] - xx[1619];
  xx[1043] = xx[1005];
  xx[1044] = xx[1007];
  xx[1045] = xx[1649] - xx[1617];
  xx[1046] = xx[1020];
  xx[1047] = xx[1021];
  xx[1048] = xx[1652] - xx[1618];
  xx[1049] = xx[1138];
  xx[1050] = xx[1509];
  xx[1051] = xx[1026];
  xx[1036] = xx[965];
  xx[1037] = xx[966];
  xx[1038] = xx[860];
  xx[1028] = 7.174999998974562e-3;
  xx[1039] = xx[785] + xx[507];
  xx[1040] = - xx[564];
  xx[1041] = xx[175] - ((xx[1134] * xx[1028] * xx[1134] + xx[1028] * xx[1465] *
    xx[1465]) * xx[19] - xx[1028]);
  pm_math_cross3(xx + 1036, xx + 1039, xx + 1052);
  pm_math_cross3(xx + 1036, xx + 1052, xx + 1091);
  xx[507] = xx[1134] * xx[1092] + xx[1091] * xx[1465];
  xx[564] = xx[946] + xx[960];
  xx[785] = xx[1541] * state[38];
  xx[946] = xx[1091] - xx[19] * xx[507] * xx[1465] - xx[564] * xx[785];
  xx[960] = xx[1546] * state[38];
  xx[1028] = xx[564] * xx[960] + xx[1092] - xx[19] * xx[507] * xx[1134];
  xx[507] = (xx[910] + xx[910]) * xx[785] - (xx[945] + xx[945]) * xx[960] + xx
    [1093] - (xx[1134] * xx[1134] * xx[1093] + xx[1093] * xx[1465] * xx[1465]) *
    xx[19];
  xx[1036] = xx[946];
  xx[1037] = xx[1028];
  xx[1038] = xx[507];
  pm_math_matrix3x3Xform(xx + 1043, xx + 1036, xx + 1052);
  xx[564] = xx[940] * (xx[1644] - xx[1662] - xx[1658] - xx[1680]) - xx[999] *
    (xx[1645] - xx[1663] - xx[1661] - xx[1681]) + xx[1054];
  xx[1043] = xx[1540];
  xx[1044] = xx[1666];
  xx[1045] = xx[1667];
  xx[1046] = xx[1668];
  xx[1047] = xx[1597];
  xx[1048] = xx[1670];
  xx[1049] = xx[1671];
  xx[1050] = xx[1672];
  xx[1051] = xx[393] + xx[1673];
  pm_math_matrix3x3Xform(xx + 1043, xx + 1036, xx + 1052);
  xx[785] = xx[940] * xx[1005] - xx[999] * xx[1020] + xx[1052];
  xx[910] = xx[940] * xx[1007] - xx[999] * xx[1021] + xx[1053];
  xx[1036] = (xx[1640] - xx[1658] - xx[1662] - xx[1676] + xx[1546] * xx[1005] +
              xx[1541] * xx[1007]) / xx[1606];
  xx[1037] = (xx[1643] - xx[1661] - xx[1663] - xx[1679] + xx[1546] * xx[1020] +
              xx[1541] * xx[1021]) / xx[1606];
  xx[1038] = xx[1511] / xx[1606];
  pm_math_quatInverseXform(xx + 861, xx + 25, xx + 1043);
  xx[945] = xx[1043] + xx[966] * inputDot[11];
  xx[960] = xx[1044] - xx[965] * inputDot[11];
  xx[966] = xx[1134] * xx[960] + xx[945] * xx[1465];
  xx[1005] = xx[945] - xx[19] * xx[966] * xx[1465];
  xx[1007] = xx[960] - xx[19] * xx[966] * xx[1134];
  xx[966] = xx[1045] + inputDdot[11];
  xx[1020] = xx[966] - (xx[1134] * xx[966] * xx[1134] + xx[966] * xx[1465] * xx
                        [1465]) * xx[19];
  xx[1043] = xx[1005];
  xx[1044] = xx[1007];
  xx[1045] = xx[1020];
  xx[1046] = xx[1577] / xx[1606];
  xx[1047] = xx[1598] / xx[1606];
  xx[1048] = (xx[1026] + xx[1546] * xx[1671] + xx[1541] * xx[1672]) / xx[1606];
  xx[1021] = xx[4] * xx[1133];
  xx[1026] = xx[1085] * xx[4] - xx[637];
  xx[1049] = - xx[1021];
  xx[1050] = xx[1026];
  xx[1051] = xx[625];
  pm_math_cross3(xx + 1550, xx + 1049, xx + 1052);
  xx[1029] = xx[625] * xx[154];
  xx[1049] = 0.03266483819494233 - ((xx[1052] - xx[1021] * xx[154]) * xx[19] -
    xx[614]);
  xx[1050] = 0.02992259737327991 - (xx[1026] * xx[154] + xx[1053]) * xx[19];
  xx[1051] = 0.1534399415345039 - (xx[19] * (xx[1054] + xx[1029]) - xx[4]);
  pm_math_cross3(xx + 25, xx + 1049, xx + 1052);
  xx[1091] = xx[15] + xx[1052];
  xx[1092] = xx[5] + xx[1053];
  xx[1093] = xx[18] + xx[1054];
  pm_math_quatInverseXform(xx + 861, xx + 1091, xx + 1052);
  pm_math_cross3(xx + 35, xx + 1049, xx + 1091);
  pm_math_cross3(xx + 35, xx + 1091, xx + 1049);
  pm_math_quatInverseXform(xx + 861, xx + 1049, xx + 1091);
  xx[4] = xx[614] * inputDot[11];
  xx[861] = xx[945];
  xx[862] = xx[960];
  xx[863] = xx[966];
  pm_math_cross3(xx + 861, xx + 1039, xx + 1049);
  xx[861] = xx[1052] + xx[1091] - (xx[967] + xx[860]) * xx[4] + xx[1049];
  xx[860] = xx[1053] + xx[1092] + xx[614] * inputDdot[11] + xx[1050];
  xx[862] = xx[860] * xx[1134] + xx[861] * xx[1465];
  xx[863] = xx[861] - xx[19] * xx[862] * xx[1465];
  xx[861] = xx[860] - xx[19] * xx[862] * xx[1134];
  xx[860] = xx[1054] + (xx[965] + xx[965]) * xx[4] + xx[1093] + xx[1051];
  xx[4] = xx[860] - (xx[1134] * xx[860] * xx[1134] + xx[860] * xx[1465] * xx
                     [1465]) * xx[19];
  xx[965] = xx[863];
  xx[966] = xx[861];
  xx[967] = xx[4];
  xx[860] = pm_math_dot3(xx + 1036, xx + 1043) + pm_math_dot3(xx + 1046, xx +
    965);
  xx[862] = (xx[1030] + xx[1033] + xx[1022] + xx[564] + (xx[1034] + xx[785]) *
             xx[1546] + (xx[1035] + xx[910]) * xx[1541]) / xx[1606] + xx[860];
  xx[864] = xx[1005] + xx[940];
  xx[940] = xx[1007] - xx[999];
  xx[965] = xx[864];
  xx[966] = xx[940];
  xx[967] = xx[1020] - xx[862];
  pm_math_quatInverseXform(xx + 1520, xx + 965, xx + 1031);
  pm_math_cross3(xx + 965, xx + 1524, xx + 1034);
  xx[945] = xx[4] + xx[507];
  xx[965] = xx[863] - xx[862] * xx[1546] + xx[946] + xx[1034];
  xx[966] = xx[861] - xx[862] * xx[1541] + xx[1028] + xx[1035];
  xx[967] = xx[945] + xx[1036];
  pm_math_quatInverseXform(xx + 1520, xx + 965, xx + 1034);
  xx[4] = xx[1023] - (pm_math_dot3(xx + 1608, xx + 1031) + pm_math_dot3(xx +
    1686, xx + 1034));
  xx[507] = xx[1024] - (pm_math_dot3(xx + 1692, xx + 1031) + pm_math_dot3(xx +
    1695, xx + 1034));
  xx[960] = xx[1025] - (pm_math_dot3(xx + 1698, xx + 1031) + pm_math_dot3(xx +
    1620, xx + 1034));
  pm_math_matrix3x3Compose(xx + 811, xx + 483, xx + 1031);
  xx[483] = xx[468] * state[32] * state[32];
  xx[468] = xx[19] * xx[478] * state[32] * state[32];
  xx[478] = xx[19] * xx[482] * state[32] * state[32];
  xx[482] = xx[1139] * xx[1139];
  xx[1043] = (xx[482] + xx[1250]) * xx[19] - xx[21];
  xx[1044] = xx[1219];
  xx[1045] = (xx[1240] + xx[1226]) * xx[19];
  xx[1046] = (xx[1214] + xx[1215]) * xx[19];
  xx[1047] = (xx[482] + xx[1210]) * xx[19] - xx[21];
  xx[1048] = xx[1253];
  xx[1049] = xx[1257];
  xx[1050] = (xx[1251] + xx[1252]) * xx[19];
  xx[1051] = (xx[482] + xx[1211]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 871, xx + 1043, xx + 1505);
  xx[482] = xx[1143] * xx[1143];
  xx[484] = xx[1144] * xx[1145];
  xx[1527] = (xx[482] + xx[1284]) * xx[19] - xx[21];
  xx[1528] = xx[19] * (xx[484] - xx[1244]);
  xx[1529] = (xx[1198] + xx[1239]) * xx[19];
  xx[1530] = (xx[484] + xx[1244]) * xx[19];
  xx[1531] = (xx[482] + xx[1288]) * xx[19] - xx[21];
  xx[1532] = xx[19] * (xx[1283] - xx[1282]);
  xx[1533] = xx[1262];
  xx[1534] = (xx[1283] + xx[1282]) * xx[19];
  xx[1535] = (xx[482] + xx[1146] * xx[1146]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 2022, xx + 1527, xx + 1547);
  xx[482] = xx[1184] * xx[1184];
  xx[484] = (xx[482] + xx[1121]) * xx[19] - xx[21];
  xx[485] = xx[1185] * xx[1186];
  xx[486] = xx[1184] * xx[1187];
  xx[487] = (xx[485] + xx[486]) * xx[19];
  xx[488] = xx[1186] * xx[159] - xx[157] * xx[1185];
  xx[489] = xx[488] * xx[488];
  xx[490] = xx[1187] * xx[159] - xx[157] * xx[1184];
  xx[491] = xx[490] * xx[490];
  xx[965] = (xx[489] + xx[491]) * xx[19] - xx[21];
  xx[966] = xx[1184] * xx[159] + xx[157] * xx[1187];
  xx[967] = xx[966] * xx[490];
  xx[999] = xx[157] * xx[1186] + xx[1185] * xx[159];
  xx[1005] = xx[999] * xx[488];
  xx[1007] = (xx[967] + xx[1005]) * xx[19];
  xx[1021] = - xx[488];
  xx[1022] = xx[490];
  xx[1023] = xx[966];
  xx[1024] = - xx[999];
  pm_math_quatCompose(xx + 330, xx + 1021, xx + 1052);
  xx[1021] = xx[1052] * xx[1052];
  xx[1022] = xx[1053] * xx[1054];
  xx[1023] = xx[1052] * xx[1055];
  xx[1024] = xx[1053] * xx[1055];
  xx[1025] = xx[1052] * xx[1054];
  xx[1026] = xx[1054] * xx[1055];
  xx[1040] = xx[1052] * xx[1053];
  xx[1571] = (xx[1021] + xx[1053] * xx[1053]) * xx[19] - xx[21];
  xx[1572] = xx[19] * (xx[1022] - xx[1023]);
  xx[1573] = (xx[1024] + xx[1025]) * xx[19];
  xx[1574] = (xx[1022] + xx[1023]) * xx[19];
  xx[1575] = (xx[1021] + xx[1054] * xx[1054]) * xx[19] - xx[21];
  xx[1576] = xx[19] * (xx[1026] - xx[1040]);
  xx[1577] = xx[19] * (xx[1024] - xx[1025]);
  xx[1578] = (xx[1026] + xx[1040]) * xx[19];
  xx[1579] = (xx[1021] + xx[1055] * xx[1055]) * xx[19] - xx[21];
  xx[1021] = xx[966] * inputDot[6];
  xx[1022] = xx[490] * inputDot[6];
  xx[1023] = xx[19] * (xx[1021] * xx[488] - xx[999] * xx[1022]);
  xx[1024] = - ((xx[1022] * xx[488] + xx[999] * xx[1021]) * xx[19]);
  xx[1025] = inputDot[6] - (xx[1022] * xx[490] + xx[966] * xx[1021]) * xx[19];
  pm_math_matrix3x3PostCross(xx + 1571, xx + 1023, xx + 1580);
  xx[1021] = xx[1185] * state[10];
  xx[1022] = xx[1186] * state[10];
  xx[1023] = xx[19] * (xx[1187] * xx[1021] - xx[1184] * xx[1022]);
  pm_math_quatInverseXform(xx + 1143, xx + 1056, xx + 1024);
  pm_math_quatInverseXform(xx + 1139, xx + 1080, xx + 1091);
  xx[1040] = xx[469] * xx[340];
  xx[1041] = xx[340] * xx[347] - xx[320] * xx[473];
  xx[473] = xx[469] * xx[320];
  xx[1104] = xx[1040];
  xx[1105] = xx[1041];
  xx[1106] = - xx[473];
  pm_math_cross3(xx + 1200, xx + 1104, xx + 1108);
  xx[1075] = xx[19] * (xx[1108] + xx[339] * xx[1040]) - xx[320];
  xx[1040] = xx[1091] + xx[1075];
  xx[1076] = xx[1024] + xx[1040];
  xx[1078] = (xx[1184] * xx[1021] + xx[1187] * xx[1022]) * xx[19];
  xx[1083] = xx[19] * (xx[1109] + xx[339] * xx[1041]);
  xx[1041] = xx[1092] + xx[1083];
  xx[1084] = xx[1025] + xx[1041];
  xx[1087] = state[10] - (xx[1185] * xx[1021] + xx[1186] * xx[1022]) * xx[19];
  xx[1021] = (xx[1110] - xx[339] * xx[473]) * xx[19] - xx[340];
  xx[473] = xx[1021] - state[32];
  xx[1022] = xx[1093] + xx[473];
  xx[1101] = xx[1026] + xx[1022];
  xx[1104] = xx[1023] + xx[1076];
  xx[1105] = xx[1078] + xx[1084];
  xx[1106] = xx[1087] + xx[1101];
  pm_math_matrix3x3PostCross(xx + 1580, xx + 1104, xx + 1138);
  xx[1102] = xx[19] * (xx[967] - xx[1005]);
  xx[967] = xx[999] * xx[490];
  xx[1005] = xx[966] * xx[488];
  xx[1104] = (xx[967] + xx[1005]) * xx[19];
  xx[1105] = xx[966] * xx[966];
  xx[1106] = (xx[489] + xx[1105]) * xx[19] - xx[21];
  xx[1108] = xx[490] * xx[488];
  xx[488] = xx[999] * xx[966];
  xx[490] = xx[19] * (xx[1108] - xx[488]);
  xx[966] = xx[19] * (xx[1005] - xx[967]);
  xx[1571] = xx[965];
  xx[1572] = xx[1102];
  xx[1573] = - xx[1104];
  xx[1574] = xx[1007];
  xx[1575] = xx[1106];
  xx[1576] = xx[490];
  xx[1577] = xx[966];
  xx[1578] = - ((xx[488] + xx[1108]) * xx[19]);
  xx[1579] = (xx[489] + xx[999] * xx[999]) * xx[19] - xx[21];
  xx[1116] = xx[1023];
  xx[1117] = xx[1078];
  xx[1118] = xx[1087];
  pm_math_matrix3x3PostCross(xx + 1571, xx + 1116, xx + 1580);
  xx[1116] = xx[1076];
  xx[1117] = xx[1084];
  xx[1118] = xx[1101];
  pm_math_matrix3x3PostCross(xx + 1580, xx + 1116, xx + 1571);
  xx[489] = xx[19] * (xx[485] - xx[486]);
  xx[485] = (xx[941] + xx[1094]) * xx[19];
  xx[486] = (xx[482] + xx[1122]) * xx[19] - xx[21];
  xx[941] = xx[19] * (xx[1120] - xx[1113]);
  xx[1580] = xx[484];
  xx[1581] = xx[489];
  xx[1582] = xx[485];
  xx[1583] = xx[487];
  xx[1584] = xx[486];
  xx[1585] = xx[941];
  xx[1586] = xx[1112];
  xx[1587] = (xx[1120] + xx[1113]) * xx[19];
  xx[1588] = (xx[482] + xx[1187] * xx[1187]) * xx[19] - xx[21];
  pm_math_matrix3x3PostCross(xx + 1580, xx + 1024, xx + 1116);
  xx[1023] = xx[1040];
  xx[1024] = xx[1041];
  xx[1025] = xx[1022];
  pm_math_matrix3x3PostCross(xx + 1116, xx + 1023, xx + 1580);
  pm_math_matrix3x3PostCross(xx + 1527, xx + 1091, xx + 1116);
  xx[1022] = xx[1075];
  xx[1023] = xx[1083];
  xx[1024] = xx[473];
  pm_math_matrix3x3PostCross(xx + 1116, xx + 1022, xx + 1527);
  xx[1022] = xx[1075];
  xx[1023] = xx[1083];
  xx[1024] = xx[1021];
  pm_math_matrix3x3PostCross(xx + 1043, xx + 1022, xx + 1116);
  xx[473] = xx[1123] * state[32];
  xx[482] = xx[1117] * state[32];
  xx[967] = xx[1120] * state[32];
  xx[999] = xx[1116] * state[32];
  xx[1005] = xx[1119] * state[32];
  xx[1021] = xx[1122] * state[32];
  xx[1043] = xx[1527] + xx[605] * xx[473] - (xx[482] * xx[450] + xx[602] * xx
    [967]);
  xx[1044] = xx[1528] + xx[999] * xx[450] + xx[602] * xx[1005] - xx[605] * xx
    [1021];
  xx[1045] = xx[1529];
  xx[1046] = xx[1530] + xx[606] * xx[482] - xx[967] * xx[541] - xx[608] * xx[473];
  xx[1047] = xx[1531] + xx[1005] * xx[541] - xx[606] * xx[999] + xx[608] * xx
    [1021];
  xx[1048] = xx[1532];
  xx[1049] = xx[1533] - (xx[609] * xx[482] + xx[603] * xx[967] + xx[473] * xx
    [542]);
  xx[1050] = xx[1534] + xx[609] * xx[999] + xx[603] * xx[1005] + xx[1021] * xx
    [542];
  xx[1051] = xx[1535];
  pm_math_matrix3x3Compose(xx + 732, xx + 1043, xx + 1116);
  xx[473] = xx[1580] + xx[1116];
  xx[482] = xx[1583] + xx[1119];
  xx[967] = xx[1581] + xx[1117];
  xx[999] = xx[1584] + xx[1120];
  xx[1005] = xx[1582] + xx[1118];
  xx[1021] = xx[1585] + xx[1121];
  xx[1043] = xx[1571] + xx[473] * xx[378] - xx[482] * xx[198];
  xx[1044] = xx[1572] + xx[967] * xx[378] - xx[999] * xx[198];
  xx[1045] = xx[1573] + xx[1005] * xx[378] - xx[1021] * xx[198];
  xx[1046] = xx[1574] + xx[482] * xx[434] - xx[473] * xx[198];
  xx[1047] = xx[1575] + xx[999] * xx[434] - xx[967] * xx[198];
  xx[1048] = xx[1576] + xx[1021] * xx[434] - xx[1005] * xx[198];
  xx[1049] = xx[1577] - (xx[1586] + xx[1122]);
  xx[1050] = xx[1578] - (xx[1587] + xx[1123]);
  xx[1051] = xx[1579] - (xx[1588] + xx[1124]);
  pm_math_matrix3x3Compose(xx + 2336, xx + 1043, xx + 1116);
  xx[473] = xx[19] * xx[472] * state[32] * state[32];
  xx[472] = xx[470] * state[32] * state[32];
  xx[470] = xx[19] * xx[476] * state[32] * state[32];
  xx[1043] = xx[1031] - (xx[483] * xx[152] - xx[468] * xx[33] + xx[478] * xx[474])
    + xx[1505] + xx[1547] + xx[484] * xx[422] + xx[487] * xx[440] - (xx[441] *
    xx[965] + xx[1007] * xx[499]) + (xx[1138] + xx[1116]) * xx[19];
  xx[1044] = xx[1032] - (xx[473] * xx[152] + xx[33] * xx[472] - xx[470] * xx[474])
    + xx[1506] + xx[1548] + xx[489] * xx[422] + xx[440] * xx[486] - (xx[441] *
    xx[1102] + xx[499] * xx[1106]) + (xx[1139] + xx[1117]) * xx[19];
  xx[1045] = xx[1033] + xx[1507] + xx[1549] + xx[485] * xx[422] + xx[941] * xx
    [440] + xx[441] * xx[1104] - xx[499] * xx[490] + (xx[1140] + xx[1118]) * xx
    [19];
  xx[1046] = xx[1034] - (xx[483] * xx[197] - xx[468] * xx[153] + xx[478] * xx
    [481]) + xx[1508] + xx[1550] + xx[484] * xx[31] + xx[487] * xx[32] - (xx[166]
    * xx[965] + xx[1007] * xx[206]) + (xx[1141] + xx[1119]) * xx[19];
  xx[1047] = xx[1035] - (xx[197] * xx[473] + xx[472] * xx[153] - xx[481] * xx
    [470]) + xx[1509] + xx[1551] + xx[489] * xx[31] + xx[32] * xx[486] - (xx[166]
    * xx[1102] + xx[206] * xx[1106]) + (xx[1142] + xx[1120]) * xx[19];
  xx[1048] = xx[1036] + xx[1510] + xx[1552] + xx[485] * xx[31] + xx[941] * xx[32]
    + xx[166] * xx[1104] - xx[206] * xx[490] + (xx[1143] + xx[1121]) * xx[19];
  xx[1049] = xx[1037] - (xx[483] * xx[213] - xx[210] * xx[468] + xx[478] * xx
    [207]) + xx[1511] + xx[1553] + xx[484] * xx[220] + xx[487] * xx[221] - (xx
    [222] * xx[965] + xx[1007] * xx[223]) + (xx[1144] + xx[1122]) * xx[19];
  xx[1050] = xx[1038] - (xx[213] * xx[473] + xx[210] * xx[472] - xx[470] * xx
    [207]) + xx[1512] + xx[1554] + xx[489] * xx[220] + xx[221] * xx[486] - (xx
    [222] * xx[1102] + xx[223] * xx[1106]) + (xx[1145] + xx[1123]) * xx[19];
  xx[1051] = xx[1039] + xx[1513] + xx[1555] + xx[485] * xx[220] + xx[941] * xx
    [221] + xx[222] * xx[1104] - xx[223] * xx[490] + (xx[1146] + xx[1124]) * xx
    [19];
  pm_math_matrix3x3Xform(xx + 1043, xx + 231, xx + 482);
  xx[468] = xx[469] * xx[529] - xx[530] * xx[347];
  xx[485] = xx[1191];
  xx[486] = xx[512];
  xx[487] = xx[468];
  pm_math_cross3(xx + 1200, xx + 485, xx + 1021);
  xx[347] = state[32] * state[32];
  xx[485] = (xx[529] + xx[19] * (xx[1021] - xx[1208])) * xx[347];
  xx[486] = ((xx[1022] - xx[1206]) * xx[19] - xx[530]) * xx[347];
  xx[487] = xx[347] * (xx[1023] - xx[339] * xx[468]) * xx[19];
  pm_math_quatXform(xx + 308, xx + 485, xx + 468);
  pm_math_matrix3x3Xform(xx + 741, xx + 536, xx + 485);
  xx[1021] = xx[485] + xx[203];
  xx[1022] = xx[486] + xx[219];
  xx[1023] = xx[487] + xx[224];
  pm_math_quatXform(xx + 304, xx + 1021, xx + 485);
  pm_math_matrix3x3Xform(xx + 847, xx + 1151, xx + 1021);
  xx[1024] = xx[1021] + xx[589];
  xx[1025] = xx[1022] + xx[590];
  xx[1026] = xx[1023] + xx[591];
  pm_math_quatXform(xx + 300, xx + 1024, xx + 1021);
  pm_math_matrix3x3Xform(xx + 1944, xx + 1155, xx + 1024);
  xx[1031] = xx[1024] + xx[652];
  xx[1032] = xx[1025] + xx[653];
  xx[1033] = xx[1026] + xx[654];
  pm_math_quatXform(xx + 296, xx + 1031, xx + 1024);
  xx[339] = xx[1147] * xx[274] - xx[1165] * xx[379] + xx[202];
  xx[347] = xx[1165] * xx[274] - xx[1147] * xx[435] - xx[218];
  xx[472] = xx[164] * xx[347];
  xx[473] = xx[164] * xx[339];
  xx[476] = xx[149] * xx[347] - xx[339] * xx[156];
  xx[1031] = - xx[472];
  xx[1032] = xx[473];
  xx[1033] = xx[476];
  pm_math_cross3(xx + 284, xx + 1031, xx + 1034);
  xx[478] = xx[1147] * xx[157] + xx[1165] * xx[159];
  xx[489] = xx[1165] - xx[19] * xx[478] * xx[159] + xx[428];
  xx[490] = xx[1147] - xx[19] * xx[478] * xx[157] + xx[429];
  xx[478] = xx[1207] * state[32];
  xx[512] = xx[1212] * state[32];
  xx[529] = xx[19] * xx[1209] * state[32];
  xx[1031] = xx[478] - xx[535] * xx[340];
  xx[1032] = xx[512] + xx[340] * xx[531] + xx[320] * xx[532];
  xx[1033] = xx[529] + xx[535] * xx[320];
  pm_math_quatXform(xx + 214, xx + 1031, xx + 530);
  xx[535] = xx[282] + xx[530];
  pm_math_cross3(xx + 1080, xx + 1151, xx + 1031);
  xx[941] = xx[238] + xx[531];
  xx[530] = xx[532] - xx[243];
  xx[1037] = xx[535] + xx[1031];
  xx[1038] = xx[941] + xx[1032];
  xx[1039] = xx[530] + xx[1033];
  pm_math_quatXform(xx + 188, xx + 1037, xx + 1031);
  xx[531] = xx[334] + xx[1031];
  pm_math_cross3(xx + 1056, xx + 1155, xx + 1037);
  xx[532] = xx[335] + xx[1032];
  xx[965] = xx[336] + xx[1033];
  xx[1031] = xx[531] + xx[1037];
  xx[1032] = xx[532] + xx[1038];
  xx[1033] = xx[965] + xx[1039];
  pm_math_quatXform(xx + 178, xx + 1031, xx + 1037);
  xx[967] = xx[669] + xx[1037];
  xx[999] = xx[967] - xx[1147] * state[10];
  xx[1005] = xx[670] + xx[1038];
  xx[1007] = xx[1005] + xx[1165] * state[10];
  xx[1031] = xx[1007] * xx[157] + xx[159] * xx[999];
  xx[1032] = (xx[425] + xx[999] - xx[19] * xx[1031] * xx[159]) * inputDot[6];
  xx[999] = xx[164] * xx[1032];
  xx[1033] = (xx[432] + xx[1007] - xx[19] * xx[1031] * xx[157]) * inputDot[6];
  xx[1007] = xx[164] * xx[1033];
  xx[1031] = xx[149] * xx[1032] + xx[1033] * xx[156];
  xx[1037] = - xx[999];
  xx[1038] = - xx[1007];
  xx[1039] = xx[1031];
  pm_math_cross3(xx + 284, xx + 1037, xx + 1043);
  xx[1037] = xx[1005] * state[10];
  xx[1005] = xx[967] * state[10];
  xx[967] = xx[1037] * xx[159] - xx[157] * xx[1005];
  xx[1038] = xx[531];
  xx[1039] = xx[532];
  xx[1040] = xx[965];
  pm_math_cross3(xx + 1056, xx + 1038, xx + 1046);
  pm_math_quatXform(xx + 178, xx + 1046, xx + 1038);
  xx[1046] = xx[535];
  xx[1047] = xx[941];
  xx[1048] = xx[530];
  pm_math_cross3(xx + 1080, xx + 1046, xx + 530);
  pm_math_quatXform(xx + 188, xx + 530, xx + 1046);
  xx[530] = xx[340] * xx[512];
  xx[531] = xx[320] * xx[529] - xx[340] * xx[478];
  xx[532] = - (xx[320] * xx[512]);
  pm_math_quatXform(xx + 214, xx + 530, xx + 1049);
  pm_math_quatXform(xx + 188, xx + 1049, xx + 529);
  xx[1049] = xx[1046] + xx[529];
  xx[1050] = xx[1047] + xx[530];
  xx[1051] = xx[1048] + xx[531];
  pm_math_quatXform(xx + 178, xx + 1049, xx + 529);
  xx[478] = xx[1038] + xx[529];
  xx[512] = xx[1039] + xx[530];
  xx[532] = xx[512] * xx[157] + xx[478] * xx[159];
  xx[529] = xx[1040] + xx[531];
  xx[1038] = xx[19] * xx[159] * xx[967] - xx[1037] + xx[478] - xx[19] * xx[532] *
    xx[159];
  xx[1039] = xx[1005] + xx[19] * xx[157] * xx[967] + xx[512] - xx[19] * xx[532] *
    xx[157];
  xx[1040] = xx[529] - (xx[157] * xx[529] * xx[157] + xx[529] * xx[159] * xx[159])
    * xx[19];
  pm_math_quatXform(xx + 330, xx + 1038, xx + 529);
  xx[478] = xx[1708] * xx[1708];
  xx[512] = xx[1626] * xx[1708];
  xx[532] = xx[1268] * xx[1589];
  xx[535] = xx[1268] * xx[1626];
  xx[941] = xx[1708] * xx[1589];
  xx[965] = xx[1626] * xx[1589];
  xx[967] = xx[1268] * xx[1708];
  xx[1116] = (xx[478] + xx[1268] * xx[1268]) * xx[19] - xx[21];
  xx[1117] = xx[19] * (xx[512] - xx[532]);
  xx[1118] = - ((xx[535] + xx[941]) * xx[19]);
  xx[1119] = - ((xx[532] + xx[512]) * xx[19]);
  xx[1120] = (xx[478] + xx[1589] * xx[1589]) * xx[19] - xx[21];
  xx[1121] = xx[19] * (xx[965] - xx[967]);
  xx[1122] = xx[19] * (xx[941] - xx[535]);
  xx[1123] = (xx[965] + xx[967]) * xx[19];
  xx[1124] = (xx[478] + xx[1626] * xx[1626]) * xx[19] - xx[21];
  xx[478] = xx[53] * state[61];
  xx[512] = xx[53] * state[62];
  xx[532] = state[61] - (xx[53] * xx[478] - xx[54] * xx[512]) * xx[19];
  xx[535] = xx[1728] * xx[532] - xx[1653] * state[63];
  xx[941] = state[62] - xx[19] * (xx[54] * xx[478] + xx[53] * xx[512]);
  xx[478] = xx[941] * xx[1653] - xx[1727] * xx[532];
  xx[512] = xx[941] * xx[1728] - xx[1727] * state[63];
  xx[965] = xx[1746] * state[63] - xx[1709] * xx[532];
  xx[967] = xx[941] * xx[1746] - xx[1665] * xx[532];
  xx[1005] = xx[1665] * state[63] - xx[941] * xx[1709];
  xx[1037] = xx[1630] * xx[532] - xx[1632] * state[63];
  xx[1038] = xx[941] * xx[1632] - xx[1669] * xx[532];
  xx[1039] = xx[1669] * state[63] - xx[941] * xx[1630];
  xx[1138] = xx[535] * state[63] - xx[941] * xx[478];
  xx[1139] = xx[512] * state[63] + xx[478] * xx[532];
  xx[1140] = - (xx[941] * xx[512] + xx[532] * xx[535]);
  xx[1141] = - (xx[965] * state[63] + xx[941] * xx[967]);
  xx[1142] = xx[532] * xx[967] - xx[1005] * state[63];
  xx[1143] = xx[941] * xx[1005] + xx[965] * xx[532];
  xx[1144] = xx[1037] * state[63] - xx[941] * xx[1038];
  xx[1145] = xx[532] * xx[1038] - xx[1039] * state[63];
  xx[1146] = xx[941] * xx[1039] - xx[532] * xx[1037];
  pm_math_matrix3x3Compose(xx + 1116, xx + 1138, xx + 1147);
  xx[478] = xx[1625] * xx[1267];
  xx[512] = xx[1628] * xx[1629];
  xx[535] = xx[478] + xx[512];
  xx[965] = xx[19] * xx[535];
  xx[967] = xx[19] * xx[1222] * xx[1266] * state[56] * state[56];
  xx[1005] = (xx[19] * xx[1222] * xx[1222] - xx[21]) * state[56] * state[56];
  xx[1037] = xx[1628] * xx[1628];
  xx[1038] = (xx[1037] + xx[1267] * xx[1267]) * xx[19] - xx[21];
  xx[1039] = xx[965] * xx[967] - xx[1005] * xx[1038];
  xx[1040] = (xx[19] * xx[1266] * xx[1266] - xx[21]) * state[56] * state[56];
  xx[1041] = xx[967] * xx[1038] - xx[965] * xx[1040];
  xx[1046] = xx[1038] * inputDot[9] * inputDot[9];
  xx[1047] = xx[1637] * xx[1266] - xx[1222] * xx[1635];
  xx[1048] = xx[1047] * xx[1047];
  xx[1049] = xx[1266] * xx[1654] + xx[1222] * xx[1634];
  xx[1050] = xx[1049] * xx[1049];
  xx[1051] = (xx[1048] + xx[1050]) * xx[19] - xx[21];
  xx[1075] = xx[19] * xx[535] * inputDot[9] * inputDot[9];
  xx[535] = xx[1637] * xx[1222] + xx[1266] * xx[1635];
  xx[1076] = xx[1047] * xx[535];
  xx[1078] = xx[1266] * xx[1634] - xx[1222] * xx[1654];
  xx[1083] = xx[1078] * xx[1049];
  xx[1084] = (xx[1076] - xx[1083]) * xx[19];
  xx[1091] = xx[1628];
  xx[1092] = xx[1267];
  xx[1093] = xx[1625];
  xx[1094] = xx[1719];
  xx[1116] = xx[1047];
  xx[1117] = - xx[1049];
  xx[1118] = xx[1078];
  xx[1119] = xx[535];
  pm_math_quatCompose(xx + 1091, xx + 1116, xx + 1120);
  xx[1087] = xx[1120] * xx[1120];
  xx[1101] = xx[1121] * xx[1122];
  xx[1102] = xx[1120] * xx[1123];
  xx[1104] = xx[1121] * xx[1123];
  xx[1106] = xx[1120] * xx[1122];
  xx[1109] = xx[1122] * xx[1123];
  xx[1110] = xx[1120] * xx[1121];
  xx[1198] = (xx[1087] + xx[1121] * xx[1121]) * xx[19] - xx[21];
  xx[1199] = xx[19] * (xx[1101] - xx[1102]);
  xx[1200] = (xx[1104] + xx[1106]) * xx[19];
  xx[1201] = (xx[1101] + xx[1102]) * xx[19];
  xx[1202] = (xx[1087] + xx[1122] * xx[1122]) * xx[19] - xx[21];
  xx[1203] = xx[19] * (xx[1109] - xx[1110]);
  xx[1204] = xx[19] * (xx[1104] - xx[1106]);
  xx[1205] = (xx[1109] + xx[1110]) * xx[19];
  xx[1206] = (xx[1087] + xx[1123] * xx[1123]) * xx[19] - xx[21];
  xx[1087] = xx[1078] * inputDot[9];
  xx[1101] = xx[1049] * inputDot[9];
  xx[1112] = xx[19] * (xx[1047] * xx[1087] + xx[1101] * xx[535]);
  xx[1113] = - ((xx[1087] * xx[535] - xx[1047] * xx[1101]) * xx[19]);
  xx[1114] = (xx[1101] * xx[1049] + xx[1078] * xx[1087]) * xx[19] - inputDot[9];
  pm_math_matrix3x3PostCross(xx + 1198, xx + 1112, xx + 1207);
  xx[1087] = xx[1637] * state[56];
  xx[1101] = xx[1635] * state[56];
  xx[1102] = (xx[1087] * xx[1634] + xx[1101] * xx[1654]) * xx[19];
  xx[1104] = xx[19] * (xx[1087] * xx[1654] - xx[1101] * xx[1634]);
  xx[1106] = state[56] - (xx[1101] * xx[1635] + xx[1637] * xx[1087]) * xx[19];
  xx[1112] = xx[1102] + xx[532];
  xx[1113] = xx[1104] + xx[941];
  xx[1114] = xx[1106] + state[63];
  pm_math_matrix3x3PostCross(xx + 1207, xx + 1112, xx + 1198);
  xx[1087] = xx[1625] * xx[1628];
  xx[1101] = xx[1267] * xx[1629];
  xx[1109] = xx[478] - xx[512];
  xx[478] = xx[1109] * xx[19];
  xx[512] = (xx[1037] + xx[1625] * xx[1625]) * xx[19] - xx[21];
  xx[1110] = xx[1625] * xx[1629];
  xx[1112] = xx[1628] * xx[1267];
  xx[1113] = xx[1101] + xx[1087];
  xx[1114] = xx[19] * xx[1113];
  xx[1116] = xx[1112] - xx[1110];
  xx[1117] = xx[1116] * xx[19];
  xx[1207] = xx[1038];
  xx[1208] = xx[965];
  xx[1209] = (xx[1087] - xx[1101]) * xx[19];
  xx[1210] = xx[478];
  xx[1211] = xx[512];
  xx[1212] = - (xx[19] * (xx[1110] + xx[1112]));
  xx[1213] = - xx[1114];
  xx[1214] = xx[1117];
  xx[1215] = (xx[1037] + xx[1629] * xx[1629]) * xx[19] - xx[21];
  xx[965] = xx[19] * (xx[1083] + xx[1076]);
  xx[1037] = xx[1047] * xx[1078];
  xx[1038] = xx[535] * xx[1049];
  xx[1076] = (xx[1037] - xx[1038]) * xx[19];
  xx[1083] = xx[1078] * xx[1078];
  xx[1087] = (xx[1048] + xx[1083]) * xx[19] - xx[21];
  xx[1101] = xx[1078] * xx[535];
  xx[1078] = xx[1047] * xx[1049];
  xx[1047] = xx[19] * (xx[1101] + xx[1078]);
  xx[1505] = xx[1051];
  xx[1506] = - xx[965];
  xx[1507] = xx[1076];
  xx[1508] = xx[1084];
  xx[1509] = xx[1087];
  xx[1510] = xx[1047];
  xx[1511] = - (xx[19] * (xx[1038] + xx[1037]));
  xx[1512] = (xx[1101] - xx[1078]) * xx[19];
  xx[1513] = (xx[1048] + xx[535] * xx[535]) * xx[19] - xx[21];
  xx[1182] = xx[1102];
  xx[1183] = xx[1104];
  xx[1184] = xx[1106];
  pm_math_matrix3x3PostCross(xx + 1505, xx + 1182, xx + 1527);
  xx[1182] = xx[532];
  xx[1183] = xx[941];
  xx[1184] = state[63];
  pm_math_matrix3x3PostCross(xx + 1527, xx + 1182, xx + 1505);
  pm_math_matrix3x3Compose(xx + 1207, xx + 1505, xx + 1527);
  xx[535] = xx[967] * xx[512] - xx[478] * xx[1005];
  xx[1048] = xx[478] * xx[967] - xx[1040] * xx[512];
  xx[478] = xx[19] * xx[1109] * inputDot[9] * inputDot[9];
  xx[1049] = xx[512] * inputDot[9] * inputDot[9];
  xx[512] = xx[1117] * xx[967] + xx[1114] * xx[1005];
  xx[1102] = xx[1114] * xx[967] + xx[1117] * xx[1040];
  xx[1104] = xx[19] * xx[1116] * inputDot[9] * inputDot[9];
  xx[1106] = xx[19] * xx[1113] * inputDot[9] * inputDot[9];
  xx[1207] = xx[1147] + xx[1653] * xx[1039] + xx[1746] * xx[1041] - (xx[1046] *
    xx[1051] + xx[1075] * xx[1084]) + (xx[1198] + xx[1527]) * xx[19];
  xx[1208] = xx[1148] + xx[1665] * xx[1041] + xx[1727] * xx[1039] - (xx[1075] *
    xx[1087] - xx[965] * xx[1046]) + (xx[1199] + xx[1528]) * xx[19];
  xx[1209] = xx[1149] + xx[1728] * xx[1039] + xx[1709] * xx[1041] - (xx[1076] *
    xx[1046] + xx[1047] * xx[1075]) + (xx[1200] + xx[1529]) * xx[19];
  xx[1210] = xx[1150] + xx[1653] * xx[535] + xx[1746] * xx[1048] - (xx[478] *
    xx[1051] + xx[1049] * xx[1084]) + (xx[1201] + xx[1530]) * xx[19];
  xx[1211] = xx[1151] + xx[1665] * xx[1048] + xx[1727] * xx[535] - (xx[1049] *
    xx[1087] - xx[965] * xx[478]) + (xx[1202] + xx[1531]) * xx[19];
  xx[1212] = xx[1152] + xx[1728] * xx[535] + xx[1709] * xx[1048] - (xx[1076] *
    xx[478] + xx[1049] * xx[1047]) + (xx[1203] + xx[1532]) * xx[19];
  xx[1213] = xx[1153] + xx[1653] * xx[512] - xx[1746] * xx[1102] - (xx[1104] *
    xx[1084] - xx[1106] * xx[1051]) + (xx[1204] + xx[1533]) * xx[19];
  xx[1214] = xx[1154] + xx[1727] * xx[512] - xx[1665] * xx[1102] - (xx[965] *
    xx[1106] + xx[1104] * xx[1087]) + (xx[1205] + xx[1534]) * xx[19];
  xx[1215] = xx[1155] + xx[1728] * xx[512] - xx[1709] * xx[1102] - (xx[1047] *
    xx[1104] - xx[1076] * xx[1106]) + (xx[1206] + xx[1535]) * xx[19];
  pm_math_matrix3x3Xform(xx + 1207, xx + 897, xx + 1112);
  pm_math_matrix3x3Xform(xx + 1138, xx + 69, xx + 1116);
  pm_math_quatXform(xx + 1741, xx + 1116, xx + 1138);
  xx[512] = state[56] * state[56];
  xx[535] = xx[1714] * xx[1266] - xx[1715] * xx[1222];
  xx[965] = xx[1714] - xx[19] * xx[535] * xx[1266];
  xx[1039] = xx[1706] * xx[967] - xx[1705] * xx[1005] + xx[512] * xx[965];
  xx[1005] = xx[1715] + xx[19] * xx[535] * xx[1222];
  xx[535] = xx[1705] * xx[967] - xx[1706] * xx[1040] - xx[512] * xx[1005];
  xx[512] = xx[535] * xx[1629];
  xx[967] = xx[1039] * xx[1629];
  xx[1040] = xx[535] * xx[1267] - xx[1625] * xx[1039];
  xx[1116] = xx[512];
  xx[1117] = - xx[967];
  xx[1118] = xx[1040];
  pm_math_cross3(xx + 1720, xx + 1116, xx + 1141);
  xx[1041] = inputDot[9] * inputDot[9];
  xx[1047] = xx[1625] * xx[16];
  xx[1048] = xx[16] * xx[1629];
  xx[1051] = xx[1048] * xx[1629];
  xx[1076] = xx[1222] * xx[1706] + xx[1705] * xx[1266];
  xx[1084] = xx[1705] - (xx[19] * xx[1076] * xx[1266] + xx[965]) + xx[558];
  xx[1087] = xx[1706] - xx[19] * xx[1076] * xx[1222] + xx[1005];
  pm_math_cross3(xx + 1182, xx + 69, xx + 1116);
  pm_math_quatXform(xx + 1701, xx + 1116, xx + 1144);
  xx[1076] = xx[1145] + xx[1705] * state[56];
  xx[1102] = xx[1144] - xx[1706] * state[56];
  xx[1109] = xx[1076] * xx[1222] + xx[1266] * xx[1102];
  xx[1110] = ((xx[1723] - xx[1714]) * state[56] + xx[1076] - xx[19] * xx[1109] *
              xx[1222]) * inputDot[9];
  xx[1076] = ((xx[1717] - xx[1715]) * state[56] + xx[1102] - xx[19] * xx[1109] *
              xx[1266]) * inputDot[9];
  xx[1102] = xx[1076] * xx[1629];
  xx[1109] = xx[1110] * xx[1629];
  xx[1119] = xx[1076] * xx[1267] + xx[1625] * xx[1110];
  xx[1146] = - xx[1102];
  xx[1147] = - xx[1109];
  xx[1148] = - xx[1119];
  pm_math_cross3(xx + 1720, xx + 1146, xx + 1149);
  xx[1124] = xx[1145] * state[56];
  xx[1128] = xx[1144] * state[56];
  xx[1131] = xx[1124] * xx[1266] - xx[1222] * xx[1128];
  xx[1132] = xx[19] * xx[1266] * xx[1131] - xx[1124];
  xx[1124] = xx[1128] + xx[19] * xx[1222] * xx[1131];
  xx[1128] = xx[1124] * xx[1629];
  xx[1131] = xx[1629] * xx[1132];
  xx[1134] = xx[1124] * xx[1267] - xx[1625] * xx[1132];
  xx[1144] = xx[1128];
  xx[1145] = - xx[1131];
  xx[1146] = xx[1134];
  pm_math_cross3(xx + 1720, xx + 1144, xx + 1152);
  xx[1144] = xx[966];
  xx[1145] = - ((xx[1108] + xx[488]) * xx[19]);
  xx[1146] = xx[21] - (xx[491] + xx[1105]) * xx[19];
  pm_math_cross3(xx + 1144, xx + 231, xx + 1155);
  pm_math_quatXform(xx + 1052, xx + 1155, xx + 1144);
  xx[488] = xx[164] * xx[489];
  xx[491] = xx[164] * xx[490];
  xx[966] = xx[149] * xx[489] + xx[156] * xx[490];
  xx[1052] = - xx[488];
  xx[1053] = - xx[491];
  xx[1054] = xx[966];
  pm_math_cross3(xx + 284, xx + 1052, xx + 1155);
  pm_math_cross3(xx + 799, xx + 536, xx + 1052);
  xx[1185] = xx[559] + xx[1052];
  xx[1186] = xx[561] + xx[1053];
  xx[1187] = xx[896] + xx[1054];
  pm_math_quatInverseXform(xx + 525, xx + 1185, xx + 1052);
  pm_math_quatInverseXform(xx + 525, xx + 799, xx + 1185);
  xx[1054] = xx[790] + xx[494] * xx[1052] + xx[497] * xx[1053] - xx[492] * xx
    [1187];
  xx[1185] = xx[19] * (xx[1037] + xx[1038]);
  xx[1186] = - ((xx[1101] - xx[1078]) * xx[19]);
  xx[1187] = (xx[1050] + xx[1083]) * xx[19] - xx[21];
  pm_math_cross3(xx + 1185, xx + 897, xx + 1198);
  pm_math_quatXform(xx + 1120, xx + 1198, xx + 1185);
  xx[790] = xx[1084] * xx[1629];
  xx[1037] = xx[1629] * xx[1087];
  xx[1038] = xx[1084] * xx[1267] + xx[1625] * xx[1087];
  xx[1120] = - xx[790];
  xx[1121] = - xx[1037];
  xx[1122] = - xx[1038];
  pm_math_cross3(xx + 1720, xx + 1120, xx + 1198);
  xx[1050] = xx[16] * xx[1267];
  xx[1052] = xx[1628] * xx[1048];
  pm_math_quatInverseXform(xx + 1091, xx + 35, xx + 1120);
  xx[1053] = xx[1222] * xx[1121] + xx[1120] * xx[1266];
  xx[1055] = xx[1120] - xx[19] * xx[1053] * xx[1266];
  xx[1078] = xx[1121] - xx[19] * xx[1053] * xx[1222];
  xx[1053] = xx[1122] - inputDot[9];
  xx[1083] = xx[1053] - (xx[1222] * xx[1222] * xx[1053] + xx[1266] * xx[1053] *
    xx[1266]) * xx[19];
  xx[1101] = xx[1083] + state[56];
  xx[1201] = xx[1055];
  xx[1202] = xx[1078];
  xx[1203] = xx[1101];
  xx[1204] = xx[50] * xx[1055];
  xx[1205] = xx[51] * xx[1078];
  xx[1206] = xx[1101] * xx[52];
  pm_math_cross3(xx + 1201, xx + 1204, xx + 1207);
  pm_math_quatInverseXform(xx + 1701, xx + 1201, xx + 1204);
  xx[1105] = xx[1204] + xx[532];
  xx[532] = xx[1205] + xx[941];
  xx[941] = xx[1206] + state[63];
  xx[1210] = xx[1105];
  xx[1211] = xx[532];
  xx[1212] = xx[941];
  xx[1213] = xx[1105] * xx[78];
  xx[1214] = xx[532] * xx[79];
  xx[1215] = xx[941] * xx[80];
  pm_math_cross3(xx + 1210, xx + 1213, xx + 1226);
  pm_math_cross3(xx + 1204, xx + 1182, xx + 1210);
  xx[1108] = xx[1226] + xx[78] * xx[1210];
  xx[1123] = xx[1227] + xx[79] * xx[1211];
  xx[1182] = xx[1204] + xx[1105];
  xx[1183] = xx[1205] + xx[532];
  xx[1184] = xx[1206] + xx[941];
  pm_math_cross3(xx + 1182, xx + 1116, xx + 1204);
  pm_math_cross3(xx + 1201, xx + 1705, xx + 1116);
  pm_math_cross3(xx + 1201, xx + 1116, xx + 1182);
  pm_math_quatInverseXform(xx + 1701, xx + 1182, xx + 1116);
  xx[532] = (xx[1204] + xx[1116]) * xx[73];
  xx[941] = (xx[1205] + xx[1117]) * xx[73];
  xx[1105] = (xx[1206] + xx[1118]) * xx[73];
  xx[1116] = xx[532];
  xx[1117] = xx[941];
  xx[1118] = xx[1105];
  xx[1136] = xx[1108] - xx[1123] * xx[89] + pm_math_dot3(xx + 111, xx + 1116);
  xx[1147] = xx[1108] * xx[89] + xx[1123] + pm_math_dot3(xx + 753, xx + 1116);
  xx[1116] = xx[1228] + xx[80] * xx[1212];
  xx[1117] = xx[1116] + xx[67] * xx[941] - xx[68] * xx[532];
  xx[1182] = - xx[1136];
  xx[1183] = - xx[1147];
  xx[1184] = - xx[1117];
  solveSymmetricPosDef(xx + 1732, xx + 1182, 3, 1, xx + 1201, xx + 1204);
  xx[1182] = xx[1108] + xx[78] * xx[1201] + xx[140] * xx[1202];
  xx[1183] = xx[1123] - xx[713] * xx[1201] + xx[79] * xx[1202];
  xx[1184] = xx[1116] + xx[80] * xx[1203];
  pm_math_quatXform(xx + 1701, xx + 1182, xx + 1204);
  xx[1182] = xx[532] + xx[731] * xx[1201] - xx[806] * xx[1202] - xx[870] * xx
    [1203];
  xx[1183] = xx[941] + xx[806] * xx[1201] + xx[731] * xx[1202] + xx[908] * xx
    [1203];
  xx[1184] = xx[1105] + xx[909] * xx[1201] + xx[927] * xx[1202];
  pm_math_quatXform(xx + 1701, xx + 1182, xx + 1210);
  pm_math_cross3(xx + 1705, xx + 1210, xx + 1182);
  xx[1118] = xx[1078] * state[56];
  xx[1148] = xx[1055] * state[56];
  xx[1160] = xx[1817] - xx[1781];
  xx[1164] = xx[1818] - xx[1784];
  xx[1165] = xx[1820] - xx[1782];
  xx[1170] = xx[1821] - xx[1785];
  xx[1173] = xx[1825] - xx[1789];
  xx[1505] = xx[1160];
  xx[1506] = xx[1164];
  xx[1507] = xx[1819] - xx[1787];
  xx[1508] = xx[1165];
  xx[1509] = xx[1170];
  xx[1510] = xx[1822] - xx[1788];
  xx[1511] = xx[1616];
  xx[1512] = xx[1631];
  xx[1513] = xx[1173];
  xx[1212] = xx[1120];
  xx[1213] = xx[1121];
  xx[1214] = xx[1053];
  xx[1174] = 3.99999999470772e-3;
  xx[1226] = xx[558] - xx[965];
  xx[1227] = xx[1005];
  xx[1228] = xx[175] - (xx[1174] - (xx[1222] * xx[1174] * xx[1222] + xx[1174] *
    xx[1266] * xx[1266]) * xx[19]);
  pm_math_cross3(xx + 1212, xx + 1226, xx + 1238);
  pm_math_cross3(xx + 1212, xx + 1238, xx + 1242);
  xx[558] = xx[1222] * xx[1243] + xx[1242] * xx[1266];
  xx[965] = xx[1083] + xx[1101];
  xx[1005] = xx[1714] * state[56];
  xx[1083] = xx[1242] - xx[19] * xx[558] * xx[1266] + xx[965] * xx[1005];
  xx[1101] = xx[1715] * state[56];
  xx[1174] = xx[1243] - xx[19] * xx[558] * xx[1222] - xx[965] * xx[1101];
  xx[558] = (xx[1078] + xx[1078]) * xx[1101] - (xx[1055] + xx[1055]) * xx[1005]
    + xx[1244] - (xx[1222] * xx[1222] * xx[1244] + xx[1244] * xx[1266] * xx[1266])
    * xx[19];
  xx[1212] = xx[1083];
  xx[1213] = xx[1174];
  xx[1214] = xx[558];
  pm_math_matrix3x3Xform(xx + 1505, xx + 1212, xx + 1238);
  xx[965] = xx[1118] * (xx[1814] - xx[1832] - xx[1828] - xx[1850]) - xx[1148] *
    (xx[1815] - xx[1833] - xx[1831] - xx[1851]) + xx[1240];
  xx[1505] = xx[1710];
  xx[1506] = xx[1836];
  xx[1507] = xx[1837];
  xx[1508] = xx[1838];
  xx[1509] = xx[1767];
  xx[1510] = xx[1840];
  xx[1511] = xx[1841];
  xx[1512] = xx[1842];
  xx[1513] = xx[393] + xx[1843];
  pm_math_matrix3x3Xform(xx + 1505, xx + 1212, xx + 1238);
  xx[1005] = xx[1118] * xx[1160] - xx[1148] * xx[1165] + xx[1238];
  xx[1055] = xx[1118] * xx[1164] - xx[1148] * xx[1170] + xx[1239];
  xx[1212] = (xx[1810] - xx[1828] - xx[1832] - xx[1846] - (xx[1715] * xx[1160] +
    xx[1714] * xx[1164])) / xx[1776];
  xx[1213] = (xx[1813] - xx[1831] - xx[1833] - xx[1849] - (xx[1715] * xx[1165] +
    xx[1714] * xx[1170])) / xx[1776];
  xx[1214] = xx[1633] / xx[1776];
  pm_math_quatInverseXform(xx + 1091, xx + 25, xx + 1238);
  xx[1078] = xx[1238] - xx[1121] * inputDot[9];
  xx[1101] = xx[1239] + xx[1120] * inputDot[9];
  xx[1121] = xx[1101] * xx[1222] + xx[1266] * xx[1078];
  xx[1160] = xx[1078] - xx[19] * xx[1121] * xx[1266];
  xx[1164] = xx[1101] - xx[19] * xx[1121] * xx[1222];
  xx[1121] = xx[1240] - inputDdot[9];
  xx[1165] = xx[1121] - (xx[1222] * xx[1222] * xx[1121] + xx[1266] * xx[1121] *
    xx[1266]) * xx[19];
  xx[1238] = xx[1160];
  xx[1239] = xx[1164];
  xx[1240] = xx[1165];
  xx[1242] = xx[1747] / xx[1776];
  xx[1243] = xx[1768] / xx[1776];
  xx[1244] = (xx[1173] - (xx[1715] * xx[1841] + xx[1714] * xx[1842])) / xx[1776];
  xx[1170] = xx[1625] * xx[175];
  xx[1173] = xx[1048] - xx[175] * xx[1267];
  xx[1250] = xx[1170];
  xx[1251] = xx[1173];
  xx[1252] = xx[1047];
  pm_math_cross3(xx + 1720, xx + 1250, xx + 1282);
  xx[1176] = xx[1628] * xx[1047];
  xx[1250] = - (0.08825748853214695 + (xx[1628] * xx[1170] + xx[1282]) * xx[19]
                - xx[16]);
  xx[1251] = 0.02992204813763048 - (xx[1628] * xx[1173] + xx[1283]) * xx[19];
  xx[1252] = - (0.1297164406712666 + xx[175] + xx[19] * (xx[1284] + xx[1176]));
  pm_math_cross3(xx + 25, xx + 1250, xx + 1282);
  xx[1337] = xx[15] + xx[1282];
  xx[1338] = xx[5] + xx[1283];
  xx[1339] = xx[18] + xx[1284];
  pm_math_quatInverseXform(xx + 1091, xx + 1337, xx + 1282);
  pm_math_cross3(xx + 35, xx + 1250, xx + 1337);
  pm_math_cross3(xx + 35, xx + 1337, xx + 1250);
  pm_math_quatInverseXform(xx + 1091, xx + 1250, xx + 1337);
  xx[1091] = xx[16] * inputDot[9];
  xx[1092] = xx[1078];
  xx[1093] = xx[1101];
  xx[1094] = xx[1121];
  pm_math_cross3(xx + 1092, xx + 1226, xx + 1250);
  xx[1078] = xx[1282] + xx[1337] + (xx[1122] + xx[1053]) * xx[1091] + xx[1250];
  xx[1053] = xx[1283] + xx[1338] - xx[16] * inputDdot[9] + xx[1251];
  xx[1092] = xx[1053] * xx[1222] + xx[1078] * xx[1266];
  xx[1093] = xx[1078] - xx[19] * xx[1092] * xx[1266];
  xx[1078] = xx[1053] - xx[19] * xx[1092] * xx[1222];
  xx[1053] = xx[1284] + xx[1339] - (xx[1120] + xx[1120]) * xx[1091] + xx[1252];
  xx[1091] = xx[1053] - (xx[1222] * xx[1053] * xx[1222] + xx[1053] * xx[1266] *
    xx[1266]) * xx[19];
  xx[1120] = xx[1093];
  xx[1121] = xx[1078];
  xx[1122] = xx[1091];
  xx[1053] = pm_math_dot3(xx + 1212, xx + 1238) + pm_math_dot3(xx + 1242, xx +
    1120);
  xx[1092] = (xx[1209] + xx[1206] + xx[1184] + xx[965] - ((xx[1210] + xx[1005]) *
    xx[1715] + (xx[1211] + xx[1055]) * xx[1714])) / xx[1776] + xx[1053];
  xx[1094] = xx[1160] + xx[1118];
  xx[1101] = xx[1164] - xx[1148];
  xx[1120] = xx[1094];
  xx[1121] = xx[1101];
  xx[1122] = xx[1165] - xx[1092];
  pm_math_quatInverseXform(xx + 1701, xx + 1120, xx + 1182);
  pm_math_cross3(xx + 1120, xx + 1705, xx + 1204);
  xx[1118] = xx[1091] + xx[558];
  xx[1120] = xx[1093] + xx[1092] * xx[1715] + xx[1083] + xx[1204];
  xx[1121] = xx[1078] + xx[1092] * xx[1714] + xx[1174] + xx[1205];
  xx[1122] = xx[1118] + xx[1206];
  pm_math_quatInverseXform(xx + 1701, xx + 1120, xx + 1204);
  xx[558] = xx[1201] - (pm_math_dot3(xx + 1778, xx + 1182) + pm_math_dot3(xx +
    1856, xx + 1204));
  xx[1091] = xx[1202] - (pm_math_dot3(xx + 1862, xx + 1182) + pm_math_dot3(xx +
    1865, xx + 1204));
  xx[1120] = xx[1203] - (pm_math_dot3(xx + 1868, xx + 1182) + pm_math_dot3(xx +
    1790, xx + 1204));
  pm_math_matrix3x3Compose(xx + 811, xx + 360, xx + 1505);
  xx[360] = xx[349] * state[34] * state[34];
  xx[349] = xx[19] * xx[355] * state[34] * state[34];
  xx[355] = xx[19] * xx[359] * state[34] * state[34];
  xx[359] = xx[1273] * xx[1273];
  xx[1527] = (xx[359] + xx[1385]) * xx[19] - xx[21];
  xx[1528] = xx[1354];
  xx[1529] = (xx[1375] + xx[1361]) * xx[19];
  xx[1530] = (xx[1349] + xx[1350]) * xx[19];
  xx[1531] = (xx[359] + xx[1345]) * xx[19] - xx[21];
  xx[1532] = xx[1388];
  xx[1533] = xx[1392];
  xx[1534] = (xx[1386] + xx[1387]) * xx[19];
  xx[1535] = (xx[359] + xx[1346]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 871, xx + 1527, xx + 1547);
  xx[359] = xx[1277] * xx[1277];
  xx[361] = xx[1278] * xx[1279];
  xx[1571] = (xx[359] + xx[1419]) * xx[19] - xx[21];
  xx[1572] = xx[19] * (xx[361] - xx[1379]);
  xx[1573] = (xx[1332] + xx[1374]) * xx[19];
  xx[1574] = (xx[361] + xx[1379]) * xx[19];
  xx[1575] = (xx[359] + xx[1423]) * xx[19] - xx[21];
  xx[1576] = xx[19] * (xx[1418] - xx[1417]);
  xx[1577] = xx[1397];
  xx[1578] = (xx[1418] + xx[1417]) * xx[19];
  xx[1579] = (xx[359] + xx[1280] * xx[1280]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 2022, xx + 1571, xx + 1580);
  xx[359] = xx[1318] * xx[1318];
  xx[361] = (xx[359] + xx[1255]) * xx[19] - xx[21];
  xx[362] = xx[1319] * xx[1320];
  xx[363] = xx[1318] * xx[1321];
  xx[364] = (xx[362] + xx[363]) * xx[19];
  xx[365] = xx[1320] * xx[159] - xx[157] * xx[1319];
  xx[366] = xx[365] * xx[365];
  xx[367] = xx[1321] * xx[159] - xx[157] * xx[1318];
  xx[368] = xx[367] * xx[367];
  xx[1121] = (xx[366] + xx[368]) * xx[19] - xx[21];
  xx[1122] = xx[1318] * xx[159] + xx[157] * xx[1321];
  xx[1148] = xx[1122] * xx[367];
  xx[1160] = xx[157] * xx[1320] + xx[1319] * xx[159];
  xx[1164] = xx[1160] * xx[365];
  xx[1170] = (xx[1148] + xx[1164]) * xx[19];
  xx[1201] = - xx[365];
  xx[1202] = xx[367];
  xx[1203] = xx[1122];
  xx[1204] = - xx[1160];
  pm_math_quatCompose(xx + 330, xx + 1201, xx + 1205);
  xx[1173] = xx[1205] * xx[1205];
  xx[1179] = xx[1206] * xx[1207];
  xx[1180] = xx[1205] * xx[1208];
  xx[1182] = xx[1206] * xx[1208];
  xx[1183] = xx[1205] * xx[1207];
  xx[1184] = xx[1207] * xx[1208];
  xx[1191] = xx[1205] * xx[1206];
  xx[1589] = (xx[1173] + xx[1206] * xx[1206]) * xx[19] - xx[21];
  xx[1590] = xx[19] * (xx[1179] - xx[1180]);
  xx[1591] = (xx[1182] + xx[1183]) * xx[19];
  xx[1592] = (xx[1179] + xx[1180]) * xx[19];
  xx[1593] = (xx[1173] + xx[1207] * xx[1207]) * xx[19] - xx[21];
  xx[1594] = xx[19] * (xx[1184] - xx[1191]);
  xx[1595] = xx[19] * (xx[1182] - xx[1183]);
  xx[1596] = (xx[1184] + xx[1191]) * xx[19];
  xx[1597] = (xx[1173] + xx[1208] * xx[1208]) * xx[19] - xx[21];
  xx[1173] = xx[1122] * inputDot[6];
  xx[1179] = xx[367] * inputDot[6];
  xx[1182] = xx[19] * (xx[1173] * xx[365] - xx[1160] * xx[1179]);
  xx[1183] = - ((xx[1179] * xx[365] + xx[1160] * xx[1173]) * xx[19]);
  xx[1184] = inputDot[6] - (xx[1179] * xx[367] + xx[1122] * xx[1173]) * xx[19];
  pm_math_matrix3x3PostCross(xx + 1589, xx + 1182, xx + 1611);
  xx[1173] = xx[1319] * state[10];
  xx[1179] = xx[1320] * state[10];
  xx[1180] = xx[19] * (xx[1321] * xx[1173] - xx[1318] * xx[1179]);
  pm_math_quatInverseXform(xx + 1277, xx + 1056, xx + 1182);
  pm_math_quatInverseXform(xx + 1273, xx + 1080, xx + 1201);
  xx[1191] = xx[350] * xx[340];
  xx[1193] = xx[340] * xx[344] - xx[320] * xx[348];
  xx[348] = xx[350] * xx[320];
  xx[1210] = - xx[1191];
  xx[1211] = xx[1193];
  xx[1212] = xx[348];
  pm_math_cross3(xx + 1334, xx + 1210, xx + 1213);
  xx[1194] = xx[19] * (xx[1213] + xx[345] * xx[1191]) - xx[320];
  xx[1191] = xx[1201] + xx[1194];
  xx[1204] = xx[1182] + xx[1191];
  xx[1210] = (xx[1318] * xx[1173] + xx[1321] * xx[1179]) * xx[19];
  xx[1211] = xx[19] * (xx[1214] - xx[345] * xx[1193]);
  xx[1193] = xx[1202] + xx[1211];
  xx[1212] = xx[1183] + xx[1193];
  xx[1219] = state[10] - (xx[1319] * xx[1173] + xx[1320] * xx[1179]) * xx[19];
  xx[1173] = (xx[1215] - xx[345] * xx[348]) * xx[19] - xx[340];
  xx[348] = xx[1173] - state[34];
  xx[1179] = xx[1203] + xx[348];
  xx[1213] = xx[1184] + xx[1179];
  xx[1226] = xx[1180] + xx[1204];
  xx[1227] = xx[1210] + xx[1212];
  xx[1228] = xx[1219] + xx[1213];
  pm_math_matrix3x3PostCross(xx + 1611, xx + 1226, xx + 1589);
  xx[1214] = xx[19] * (xx[1148] - xx[1164]);
  xx[1148] = xx[1160] * xx[367];
  xx[1164] = xx[1122] * xx[365];
  xx[1215] = (xx[1148] + xx[1164]) * xx[19];
  xx[1222] = xx[1122] * xx[1122];
  xx[1226] = (xx[366] + xx[1222]) * xx[19] - xx[21];
  xx[1227] = xx[365] * xx[367];
  xx[365] = xx[1122] * xx[1160];
  xx[367] = xx[19] * (xx[1227] - xx[365]);
  xx[1122] = xx[19] * (xx[1164] - xx[1148]);
  xx[1611] = xx[1121];
  xx[1612] = xx[1214];
  xx[1613] = - xx[1215];
  xx[1614] = xx[1170];
  xx[1615] = xx[1226];
  xx[1616] = xx[367];
  xx[1617] = xx[1122];
  xx[1618] = - ((xx[365] + xx[1227]) * xx[19]);
  xx[1619] = (xx[366] + xx[1160] * xx[1160]) * xx[19] - xx[21];
  xx[1238] = xx[1180];
  xx[1239] = xx[1210];
  xx[1240] = xx[1219];
  pm_math_matrix3x3PostCross(xx + 1611, xx + 1238, xx + 1637);
  xx[1238] = xx[1204];
  xx[1239] = xx[1212];
  xx[1240] = xx[1213];
  pm_math_matrix3x3PostCross(xx + 1637, xx + 1238, xx + 1611);
  xx[366] = xx[19] * (xx[362] - xx[363]);
  xx[362] = (xx[1195] + xx[1229]) * xx[19];
  xx[363] = (xx[359] + xx[1256]) * xx[19] - xx[21];
  xx[1148] = xx[19] * (xx[1254] - xx[1247]);
  xx[1637] = xx[361];
  xx[1638] = xx[366];
  xx[1639] = xx[362];
  xx[1640] = xx[364];
  xx[1641] = xx[363];
  xx[1642] = xx[1148];
  xx[1643] = xx[1246];
  xx[1644] = (xx[1254] + xx[1247]) * xx[19];
  xx[1645] = (xx[359] + xx[1321] * xx[1321]) * xx[19] - xx[21];
  pm_math_matrix3x3PostCross(xx + 1637, xx + 1182, xx + 1250);
  xx[1182] = xx[1191];
  xx[1183] = xx[1193];
  xx[1184] = xx[1179];
  pm_math_matrix3x3PostCross(xx + 1250, xx + 1182, xx + 1637);
  pm_math_matrix3x3PostCross(xx + 1571, xx + 1201, xx + 1250);
  xx[1182] = xx[1194];
  xx[1183] = xx[1211];
  xx[1184] = xx[348];
  pm_math_matrix3x3PostCross(xx + 1250, xx + 1182, xx + 1571);
  xx[1182] = xx[1194];
  xx[1183] = xx[1211];
  xx[1184] = xx[1173];
  pm_math_matrix3x3PostCross(xx + 1527, xx + 1182, xx + 1250);
  xx[348] = xx[1257] * state[34];
  xx[359] = xx[1251] * state[34];
  xx[1160] = xx[1254] * state[34];
  xx[1164] = xx[1250] * state[34];
  xx[1173] = xx[1253] * state[34];
  xx[1179] = xx[1256] * state[34];
  xx[1250] = xx[1571] + xx[348] * xx[605] - (xx[359] * xx[450] + xx[1160] * xx
    [602]);
  xx[1251] = xx[1572] + xx[1164] * xx[450] + xx[1173] * xx[602] - xx[1179] * xx
    [605];
  xx[1252] = xx[1573];
  xx[1253] = xx[1574] + xx[359] * xx[606] - xx[1160] * xx[541] - xx[348] * xx
    [608];
  xx[1254] = xx[1575] + xx[1173] * xx[541] - xx[1164] * xx[606] + xx[1179] * xx
    [608];
  xx[1255] = xx[1576];
  xx[1256] = xx[1577] - (xx[359] * xx[609] + xx[1160] * xx[603] + xx[348] * xx
    [542]);
  xx[1257] = xx[1578] + xx[1164] * xx[609] + xx[1173] * xx[603] + xx[1179] * xx
    [542];
  xx[1258] = xx[1579];
  pm_math_matrix3x3Compose(xx + 732, xx + 1250, xx + 1527);
  xx[348] = xx[1637] + xx[1527];
  xx[359] = xx[1640] + xx[1530];
  xx[1160] = xx[1638] + xx[1528];
  xx[1164] = xx[1641] + xx[1531];
  xx[1173] = xx[1639] + xx[1529];
  xx[1179] = xx[1642] + xx[1532];
  xx[1250] = xx[1611] + xx[348] * xx[378] - xx[359] * xx[198];
  xx[1251] = xx[1612] + xx[1160] * xx[378] - xx[1164] * xx[198];
  xx[1252] = xx[1613] + xx[1173] * xx[378] - xx[1179] * xx[198];
  xx[1253] = xx[1614] + xx[359] * xx[434] - xx[348] * xx[198];
  xx[1254] = xx[1615] + xx[1164] * xx[434] - xx[1160] * xx[198];
  xx[1255] = xx[1616] + xx[1179] * xx[434] - xx[1173] * xx[198];
  xx[1256] = xx[1617] - (xx[1643] + xx[1533]);
  xx[1257] = xx[1618] - (xx[1644] + xx[1534]);
  xx[1258] = xx[1619] - (xx[1645] + xx[1535]);
  pm_math_matrix3x3Compose(xx + 2336, xx + 1250, xx + 1527);
  xx[348] = xx[19] * xx[343] * state[34] * state[34];
  xx[343] = xx[342] * state[34] * state[34];
  xx[342] = xx[19] * xx[353] * state[34] * state[34];
  xx[1250] = xx[1505] - (xx[360] * xx[152] + xx[33] * xx[349] + xx[355] * xx[474])
    + xx[1547] + xx[1580] + xx[361] * xx[422] + xx[364] * xx[440] - (xx[441] *
    xx[1121] + xx[1170] * xx[499]) + (xx[1589] + xx[1527]) * xx[19];
  xx[1251] = xx[1506] - (xx[348] * xx[152] + xx[343] * xx[33] + xx[342] * xx[474])
    + xx[1548] + xx[1581] + xx[366] * xx[422] + xx[363] * xx[440] - (xx[441] *
    xx[1214] + xx[499] * xx[1226]) + (xx[1590] + xx[1528]) * xx[19];
  xx[1252] = xx[1507] + xx[1549] + xx[1582] + xx[362] * xx[422] + xx[1148] * xx
    [440] + xx[1215] * xx[441] - xx[367] * xx[499] + (xx[1591] + xx[1529]) * xx
    [19];
  xx[1253] = xx[1508] - (xx[197] * xx[360] + xx[349] * xx[153] + xx[355] * xx
    [481]) + xx[1550] + xx[1583] + xx[361] * xx[31] + xx[364] * xx[32] - (xx[166]
    * xx[1121] + xx[1170] * xx[206]) + (xx[1592] + xx[1530]) * xx[19];
  xx[1254] = xx[1509] - (xx[197] * xx[348] + xx[343] * xx[153] + xx[342] * xx
    [481]) + xx[1551] + xx[1584] + xx[366] * xx[31] + xx[363] * xx[32] - (xx
    [1214] * xx[166] + xx[206] * xx[1226]) + (xx[1593] + xx[1531]) * xx[19];
  xx[1255] = xx[1510] + xx[1552] + xx[1585] + xx[362] * xx[31] + xx[1148] * xx
    [32] + xx[1215] * xx[166] - xx[206] * xx[367] + (xx[1594] + xx[1532]) * xx
    [19];
  xx[1256] = xx[1511] - (xx[360] * xx[213] + xx[210] * xx[349] + xx[355] * xx
    [207]) + xx[1553] + xx[1586] + xx[361] * xx[220] + xx[364] * xx[221] - (xx
    [222] * xx[1121] + xx[1170] * xx[223]) + (xx[1595] + xx[1533]) * xx[19];
  xx[1257] = xx[1512] - (xx[348] * xx[213] + xx[343] * xx[210] + xx[342] * xx
    [207]) + xx[1554] + xx[1587] + xx[366] * xx[220] + xx[363] * xx[221] - (xx
    [1214] * xx[222] + xx[223] * xx[1226]) + (xx[1596] + xx[1534]) * xx[19];
  xx[1258] = xx[1513] + xx[1555] + xx[1588] + xx[362] * xx[220] + xx[1148] * xx
    [221] + xx[1215] * xx[222] - xx[367] * xx[223] + (xx[1597] + xx[1535]) * xx
    [19];
  pm_math_matrix3x3Xform(xx + 1250, xx + 231, xx + 359);
  xx[207] = xx[350] * xx[389] - xx[406] * xx[344];
  xx[342] = xx[1326];
  xx[343] = - xx[1325];
  xx[344] = xx[207];
  pm_math_cross3(xx + 1334, xx + 342, xx + 348);
  xx[342] = state[34] * state[34];
  xx[362] = (xx[19] * (xx[348] + xx[1343]) - xx[389]) * xx[342];
  xx[363] = ((xx[349] - xx[1341]) * xx[19] - xx[406]) * xx[342];
  xx[364] = (xx[345] * xx[207] + xx[350]) * xx[19] * xx[342];
  pm_math_quatXform(xx + 308, xx + 362, xx + 342);
  pm_math_matrix3x3Xform(xx + 741, xx + 412, xx + 348);
  xx[362] = xx[348] + xx[203];
  xx[363] = xx[349] + xx[219];
  xx[364] = xx[350] + xx[224];
  pm_math_quatXform(xx + 304, xx + 362, xx + 348);
  pm_math_matrix3x3Xform(xx + 847, xx + 1285, xx + 362);
  xx[1182] = xx[362] + xx[589];
  xx[1183] = xx[363] + xx[590];
  xx[1184] = xx[364] + xx[591];
  pm_math_quatXform(xx + 300, xx + 1182, xx + 362);
  pm_math_matrix3x3Xform(xx + 1944, xx + 1289, xx + 1182);
  xx[1193] = xx[1182] + xx[652];
  xx[1194] = xx[1183] + xx[653];
  xx[1195] = xx[1184] + xx[654];
  pm_math_quatXform(xx + 296, xx + 1193, xx + 1182);
  xx[207] = xx[1281] * xx[274] - xx[1296] * xx[379] + xx[202];
  xx[345] = xx[1296] * xx[274] - xx[1281] * xx[435] - xx[218];
  xx[353] = xx[345] * xx[164];
  xx[355] = xx[207] * xx[164];
  xx[366] = xx[345] * xx[149] - xx[207] * xx[156];
  xx[1193] = - xx[353];
  xx[1194] = xx[355];
  xx[1195] = xx[366];
  pm_math_cross3(xx + 284, xx + 1193, xx + 1201);
  xx[367] = xx[1281] * xx[157] + xx[1296] * xx[159];
  xx[389] = xx[1296] - xx[19] * xx[367] * xx[159] + xx[428];
  xx[406] = xx[1281] - xx[19] * xx[367] * xx[157] + xx[429];
  xx[367] = xx[1342] * state[34];
  xx[474] = xx[1347] * state[34];
  xx[481] = xx[19] * xx[1344] * state[34];
  xx[1193] = xx[367] - xx[411] * xx[340];
  xx[1194] = xx[474] + xx[340] * xx[407] + xx[320] * xx[408];
  xx[1195] = xx[481] + xx[411] * xx[320];
  pm_math_quatXform(xx + 214, xx + 1193, xx + 1210);
  xx[407] = xx[282] + xx[1210];
  pm_math_cross3(xx + 1080, xx + 1285, xx + 1193);
  xx[408] = xx[238] + xx[1211];
  xx[411] = xx[1212] - xx[243];
  xx[1210] = xx[407] + xx[1193];
  xx[1211] = xx[408] + xx[1194];
  xx[1212] = xx[411] + xx[1195];
  pm_math_quatXform(xx + 188, xx + 1210, xx + 1193);
  xx[1121] = xx[334] + xx[1193];
  pm_math_cross3(xx + 1056, xx + 1289, xx + 1210);
  xx[1148] = xx[335] + xx[1194];
  xx[1160] = xx[336] + xx[1195];
  xx[1193] = xx[1121] + xx[1210];
  xx[1194] = xx[1148] + xx[1211];
  xx[1195] = xx[1160] + xx[1212];
  pm_math_quatXform(xx + 178, xx + 1193, xx + 1210);
  xx[1164] = xx[669] + xx[1210];
  xx[1170] = xx[1164] - xx[1281] * state[10];
  xx[1173] = xx[670] + xx[1211];
  xx[1179] = xx[1173] + xx[1296] * state[10];
  xx[1180] = xx[1179] * xx[157] + xx[159] * xx[1170];
  xx[1191] = (xx[425] + xx[1170] - xx[19] * xx[1180] * xx[159]) * inputDot[6];
  xx[1170] = xx[164] * xx[1191];
  xx[1193] = (xx[432] + xx[1179] - xx[19] * xx[1180] * xx[157]) * inputDot[6];
  xx[1179] = xx[164] * xx[1193];
  xx[1180] = xx[149] * xx[1191] + xx[1193] * xx[156];
  xx[1210] = - xx[1170];
  xx[1211] = - xx[1179];
  xx[1212] = xx[1180];
  pm_math_cross3(xx + 284, xx + 1210, xx + 1213);
  xx[1194] = xx[1173] * state[10];
  xx[1173] = xx[1164] * state[10];
  xx[1164] = xx[1194] * xx[159] - xx[157] * xx[1173];
  xx[1210] = xx[1121];
  xx[1211] = xx[1148];
  xx[1212] = xx[1160];
  pm_math_cross3(xx + 1056, xx + 1210, xx + 1238);
  pm_math_quatXform(xx + 178, xx + 1238, xx + 1210);
  xx[1238] = xx[407];
  xx[1239] = xx[408];
  xx[1240] = xx[411];
  pm_math_cross3(xx + 1080, xx + 1238, xx + 1242);
  pm_math_quatXform(xx + 188, xx + 1242, xx + 1238);
  xx[1242] = xx[340] * xx[474];
  xx[1243] = xx[320] * xx[481] - xx[340] * xx[367];
  xx[1244] = - (xx[320] * xx[474]);
  pm_math_quatXform(xx + 214, xx + 1242, xx + 1246);
  pm_math_quatXform(xx + 188, xx + 1246, xx + 1242);
  xx[1246] = xx[1238] + xx[1242];
  xx[1247] = xx[1239] + xx[1243];
  xx[1248] = xx[1240] + xx[1244];
  pm_math_quatXform(xx + 178, xx + 1246, xx + 1238);
  xx[367] = xx[1210] + xx[1238];
  xx[407] = xx[1211] + xx[1239];
  xx[408] = xx[407] * xx[157] + xx[367] * xx[159];
  xx[411] = xx[1212] + xx[1240];
  xx[1210] = xx[19] * xx[159] * xx[1164] - xx[1194] + xx[367] - xx[19] * xx[408]
    * xx[159];
  xx[1211] = xx[1173] + xx[19] * xx[157] * xx[1164] + xx[407] - xx[19] * xx[408]
    * xx[157];
  xx[1212] = xx[411] - (xx[157] * xx[411] * xx[157] + xx[411] * xx[159] * xx[159])
    * xx[19];
  pm_math_quatXform(xx + 330, xx + 1210, xx + 1238);
  xx[367] = xx[1823] * xx[1823];
  xx[407] = xx[1766] * xx[1823];
  xx[408] = xx[1] * xx[1407];
  xx[411] = xx[1766] * xx[1];
  xx[474] = xx[1823] * xx[1407];
  xx[481] = xx[1766] * xx[1407];
  xx[1121] = xx[1] * xx[1823];
  xx[1250] = (xx[367] + xx[1] * xx[1]) * xx[19] - xx[21];
  xx[1251] = xx[19] * (xx[407] - xx[408]);
  xx[1252] = - ((xx[411] + xx[474]) * xx[19]);
  xx[1253] = - ((xx[408] + xx[407]) * xx[19]);
  xx[1254] = (xx[367] + xx[1407] * xx[1407]) * xx[19] - xx[21];
  xx[1255] = xx[19] * (xx[481] - xx[1121]);
  xx[1256] = xx[19] * (xx[474] - xx[411]);
  xx[1257] = (xx[481] + xx[1121]) * xx[19];
  xx[1258] = (xx[367] + xx[1766] * xx[1766]) * xx[19] - xx[21];
  xx[1] = xx[53] * state[70];
  xx[367] = xx[53] * state[71];
  xx[407] = state[70] - (xx[53] * xx[1] - xx[54] * xx[367]) * xx[19];
  xx[408] = xx[1806] * xx[407] - xx[1755] * state[72];
  xx[411] = state[71] - xx[19] * (xx[54] * xx[1] + xx[53] * xx[367]);
  xx[1] = xx[411] * xx[1755] - xx[1800] * xx[407];
  xx[53] = xx[411] * xx[1806] - xx[1800] * state[72];
  xx[54] = xx[1878] * state[72] - xx[1798] * xx[407];
  xx[367] = xx[411] * xx[1878] - xx[1786] * xx[407];
  xx[474] = xx[1786] * state[72] - xx[411] * xx[1798];
  xx[481] = xx[1793] * xx[407] - xx[1795] * state[72];
  xx[1121] = xx[411] * xx[1795] - xx[1805] * xx[407];
  xx[1148] = xx[1805] * state[72] - xx[411] * xx[1793];
  xx[1273] = xx[408] * state[72] - xx[1] * xx[411];
  xx[1274] = xx[53] * state[72] + xx[1] * xx[407];
  xx[1275] = - (xx[53] * xx[411] + xx[408] * xx[407]);
  xx[1276] = - (xx[54] * state[72] + xx[411] * xx[367]);
  xx[1277] = xx[367] * xx[407] - xx[474] * state[72];
  xx[1278] = xx[474] * xx[411] + xx[54] * xx[407];
  xx[1279] = xx[481] * state[72] - xx[411] * xx[1121];
  xx[1280] = xx[1121] * xx[407] - xx[1148] * state[72];
  xx[1281] = xx[411] * xx[1148] - xx[481] * xx[407];
  pm_math_matrix3x3Compose(xx + 1250, xx + 1273, xx + 1282);
  xx[1] = xx[19] * xx[1357] * xx[1401] * state[65] * state[65];
  xx[53] = xx[1769] * xx[1769];
  xx[54] = (xx[53] + xx[1402] * xx[1402]) * xx[19] - xx[21];
  xx[367] = (xx[19] * xx[1401] * xx[1401] - xx[21]) * state[65] * state[65];
  xx[408] = xx[1765] * xx[1402];
  xx[474] = xx[1769] * xx[1770];
  xx[481] = xx[408] + xx[474];
  xx[1121] = xx[19] * xx[481];
  xx[1148] = xx[1] * xx[54] + xx[367] * xx[1121];
  xx[1160] = (xx[19] * xx[1357] * xx[1357] - xx[21]) * state[65] * state[65];
  xx[1164] = xx[1121] * xx[1] + xx[1160] * xx[54];
  xx[1173] = xx[54] * inputDot[10] * inputDot[10];
  xx[1194] = xx[1797] * xx[1401] - xx[1357] * xx[1783];
  xx[1195] = xx[1194] * xx[1194];
  xx[1204] = xx[1401] * xx[1799] + xx[1357] * xx[1772];
  xx[1210] = xx[1204] * xx[1204];
  xx[1211] = (xx[1195] + xx[1210]) * xx[19] - xx[21];
  xx[1212] = xx[1797] * xx[1357] + xx[1401] * xx[1783];
  xx[1219] = xx[1194] * xx[1212];
  xx[1226] = xx[1401] * xx[1772] - xx[1357] * xx[1799];
  xx[1228] = xx[1226] * xx[1204];
  xx[1229] = (xx[1219] - xx[1228]) * xx[19];
  xx[1231] = xx[19] * xx[481] * inputDot[10] * inputDot[10];
  xx[1250] = xx[1769];
  xx[1251] = xx[1879];
  xx[1252] = xx[1765];
  xx[1253] = xx[1770];
  xx[1254] = xx[1194];
  xx[1255] = - xx[1204];
  xx[1256] = xx[1226];
  xx[1257] = xx[1212];
  pm_math_quatCompose(xx + 1250, xx + 1254, xx + 1316);
  xx[481] = xx[1316] * xx[1316];
  xx[1234] = xx[1317] * xx[1318];
  xx[1235] = xx[1316] * xx[1319];
  xx[1242] = xx[1317] * xx[1319];
  xx[1243] = xx[1316] * xx[1318];
  xx[1244] = xx[1318] * xx[1319];
  xx[1246] = xx[1316] * xx[1317];
  xx[1341] = (xx[481] + xx[1317] * xx[1317]) * xx[19] - xx[21];
  xx[1342] = xx[19] * (xx[1234] - xx[1235]);
  xx[1343] = (xx[1242] + xx[1243]) * xx[19];
  xx[1344] = (xx[1234] + xx[1235]) * xx[19];
  xx[1345] = (xx[481] + xx[1318] * xx[1318]) * xx[19] - xx[21];
  xx[1346] = xx[19] * (xx[1244] - xx[1246]);
  xx[1347] = xx[19] * (xx[1242] - xx[1243]);
  xx[1348] = (xx[1244] + xx[1246]) * xx[19];
  xx[1349] = (xx[481] + xx[1319] * xx[1319]) * xx[19] - xx[21];
  xx[481] = xx[1226] * inputDot[10];
  xx[1234] = xx[1204] * inputDot[10];
  xx[1242] = xx[19] * (xx[1194] * xx[481] + xx[1234] * xx[1212]);
  xx[1243] = - ((xx[481] * xx[1212] - xx[1194] * xx[1234]) * xx[19]);
  xx[1244] = (xx[1234] * xx[1204] + xx[1226] * xx[481]) * xx[19] - inputDot[10];
  pm_math_matrix3x3PostCross(xx + 1341, xx + 1242, xx + 1505);
  xx[481] = xx[1797] * state[65];
  xx[1234] = xx[1783] * state[65];
  xx[1235] = (xx[481] * xx[1772] + xx[1234] * xx[1799]) * xx[19];
  xx[1242] = xx[19] * (xx[481] * xx[1799] - xx[1234] * xx[1772]);
  xx[1243] = state[65] - (xx[1234] * xx[1783] + xx[1797] * xx[481]) * xx[19];
  xx[1246] = xx[1235] + xx[407];
  xx[1247] = xx[1242] + xx[411];
  xx[1248] = xx[1243] + state[72];
  pm_math_matrix3x3PostCross(xx + 1505, xx + 1246, xx + 1341);
  xx[481] = xx[1765] * xx[1769];
  xx[1234] = xx[1770] * xx[1402];
  xx[1244] = xx[474] - xx[408];
  xx[408] = xx[1244] * xx[19];
  xx[474] = (xx[53] + xx[1765] * xx[1765]) * xx[19] - xx[21];
  xx[1246] = xx[1765] * xx[1770];
  xx[1247] = xx[1769] * xx[1402];
  xx[1248] = xx[1234] + xx[481];
  xx[1254] = xx[19] * xx[1248];
  xx[1255] = xx[1246] - xx[1247];
  xx[1256] = xx[1255] * xx[19];
  xx[1505] = xx[54];
  xx[1506] = - xx[1121];
  xx[1507] = (xx[481] - xx[1234]) * xx[19];
  xx[1508] = xx[408];
  xx[1509] = xx[474];
  xx[1510] = xx[19] * (xx[1246] + xx[1247]);
  xx[1511] = - xx[1254];
  xx[1512] = xx[1256];
  xx[1513] = (xx[53] + xx[1770] * xx[1770]) * xx[19] - xx[21];
  xx[53] = xx[19] * (xx[1228] + xx[1219]);
  xx[54] = xx[1194] * xx[1226];
  xx[481] = xx[1212] * xx[1204];
  xx[1121] = (xx[54] - xx[481]) * xx[19];
  xx[1219] = xx[1226] * xx[1226];
  xx[1228] = (xx[1195] + xx[1219]) * xx[19] - xx[21];
  xx[1234] = xx[1226] * xx[1212];
  xx[1226] = xx[1194] * xx[1204];
  xx[1194] = xx[19] * (xx[1234] + xx[1226]);
  xx[1527] = xx[1211];
  xx[1528] = - xx[53];
  xx[1529] = xx[1121];
  xx[1530] = xx[1229];
  xx[1531] = xx[1228];
  xx[1532] = xx[1194];
  xx[1533] = - (xx[19] * (xx[481] + xx[54]));
  xx[1534] = (xx[1234] - xx[1226]) * xx[19];
  xx[1535] = (xx[1195] + xx[1212] * xx[1212]) * xx[19] - xx[21];
  xx[1294] = xx[1235];
  xx[1295] = xx[1242];
  xx[1296] = xx[1243];
  pm_math_matrix3x3PostCross(xx + 1527, xx + 1294, xx + 1547);
  xx[1294] = xx[407];
  xx[1295] = xx[411];
  xx[1296] = state[72];
  pm_math_matrix3x3PostCross(xx + 1547, xx + 1294, xx + 1527);
  pm_math_matrix3x3Compose(xx + 1505, xx + 1527, xx + 1547);
  xx[1195] = xx[1] * xx[474] - xx[1160] * xx[408];
  xx[1204] = xx[408] * xx[1] - xx[367] * xx[474];
  xx[408] = xx[19] * xx[1244] * inputDot[10] * inputDot[10];
  xx[1212] = xx[474] * inputDot[10] * inputDot[10];
  xx[474] = xx[1256] * xx[1] + xx[1160] * xx[1254];
  xx[1235] = xx[1] * xx[1254] + xx[367] * xx[1256];
  xx[1242] = xx[19] * xx[1255] * inputDot[10] * inputDot[10];
  xx[1243] = xx[19] * xx[1248] * inputDot[10] * inputDot[10];
  xx[1505] = xx[1282] + xx[1878] * xx[1148] - xx[1164] * xx[1755] - (xx[1173] *
    xx[1211] - xx[1229] * xx[1231]) + (xx[1341] + xx[1547]) * xx[19];
  xx[1506] = xx[1283] + xx[1148] * xx[1786] - xx[1800] * xx[1164] + xx[1173] *
    xx[53] + xx[1231] * xx[1228] + (xx[1342] + xx[1548]) * xx[19];
  xx[1507] = xx[1284] + xx[1798] * xx[1148] - xx[1806] * xx[1164] - (xx[1173] *
    xx[1121] - xx[1231] * xx[1194]) + (xx[1343] + xx[1549]) * xx[19];
  xx[1508] = xx[1285] + xx[1195] * xx[1755] + xx[1878] * xx[1204] - (xx[408] *
    xx[1211] + xx[1229] * xx[1212]) + (xx[1344] + xx[1550]) * xx[19];
  xx[1509] = xx[1286] + xx[1204] * xx[1786] + xx[1800] * xx[1195] - (xx[1212] *
    xx[1228] - xx[53] * xx[408]) + (xx[1345] + xx[1551]) * xx[19];
  xx[1510] = xx[1287] + xx[1806] * xx[1195] + xx[1798] * xx[1204] - (xx[1121] *
    xx[408] + xx[1212] * xx[1194]) + (xx[1346] + xx[1552]) * xx[19];
  xx[1511] = xx[1288] + xx[474] * xx[1755] - xx[1878] * xx[1235] - (xx[1229] *
    xx[1242] - xx[1243] * xx[1211]) + (xx[1347] + xx[1553]) * xx[19];
  xx[1512] = xx[1289] + xx[1800] * xx[474] - xx[1235] * xx[1786] - (xx[53] * xx
    [1243] + xx[1242] * xx[1228]) + (xx[1348] + xx[1554]) * xx[19];
  xx[1513] = xx[1290] + xx[1806] * xx[474] - xx[1798] * xx[1235] - (xx[1194] *
    xx[1242] - xx[1121] * xx[1243]) + (xx[1349] + xx[1555]) * xx[19];
  pm_math_matrix3x3Xform(xx + 1505, xx + 897, xx + 1246);
  pm_math_matrix3x3Xform(xx + 1273, xx + 69, xx + 1254);
  pm_math_quatXform(xx + 1892, xx + 1254, xx + 1273);
  xx[53] = state[65] * state[65];
  xx[474] = xx[1824] * xx[1401] - xx[1835] * xx[1357];
  xx[1121] = xx[1824] - xx[19] * xx[474] * xx[1401];
  xx[1148] = xx[1872] * xx[1] - xx[1871] * xx[1160] + xx[53] * xx[1121];
  xx[1160] = xx[1835] + xx[19] * xx[474] * xx[1357];
  xx[474] = xx[1871] * xx[1] - xx[1872] * xx[367] - xx[53] * xx[1160];
  xx[1] = xx[474] * xx[1770];
  xx[53] = xx[1148] * xx[1770];
  xx[367] = xx[474] * xx[1402] + xx[1148] * xx[1765];
  xx[1254] = - xx[1];
  xx[1255] = xx[53];
  xx[1256] = - xx[367];
  pm_math_cross3(xx + 1880, xx + 1254, xx + 1276);
  xx[1164] = inputDot[10] * inputDot[10];
  xx[1194] = xx[1765] * xx[16];
  xx[1195] = xx[16] * xx[1770];
  xx[1204] = xx[1195] * xx[1770];
  xx[1211] = xx[1357] * xx[1872] + xx[1871] * xx[1401];
  xx[1228] = 0.03194045367095628;
  xx[1229] = xx[1871] - (xx[19] * xx[1211] * xx[1401] + xx[1121]) + xx[1228];
  xx[1235] = xx[1872] - xx[19] * xx[1211] * xx[1357] + xx[1160];
  pm_math_cross3(xx + 1294, xx + 69, xx + 1254);
  pm_math_quatXform(xx + 1801, xx + 1254, xx + 1279);
  xx[1211] = xx[1280] + xx[1871] * state[65];
  xx[1244] = xx[1279] - xx[1872] * state[65];
  xx[1257] = xx[1211] * xx[1357] + xx[1401] * xx[1244];
  xx[1258] = ((xx[1883] - xx[1824]) * state[65] + xx[1211] - xx[19] * xx[1257] *
              xx[1357]) * inputDot[10];
  xx[1211] = ((xx[1874] - xx[1835]) * state[65] + xx[1244] - xx[19] * xx[1257] *
              xx[1401]) * inputDot[10];
  xx[1244] = xx[1211] * xx[1770];
  xx[1257] = xx[1258] * xx[1770];
  xx[1262] = xx[1765] * xx[1258] - xx[1211] * xx[1402];
  xx[1281] = xx[1244];
  xx[1282] = xx[1257];
  xx[1283] = - xx[1262];
  pm_math_cross3(xx + 1880, xx + 1281, xx + 1284);
  xx[1265] = xx[1280] * state[65];
  xx[1266] = xx[1279] * state[65];
  xx[1268] = xx[1265] * xx[1401] - xx[1357] * xx[1266];
  xx[1270] = xx[19] * xx[1401] * xx[1268] - xx[1265];
  xx[1265] = xx[1266] + xx[19] * xx[1357] * xx[1268];
  xx[1266] = xx[1265] * xx[1770];
  xx[1268] = xx[1270] * xx[1770];
  xx[1279] = xx[1265] * xx[1402] + xx[1765] * xx[1270];
  xx[1280] = - xx[1266];
  xx[1281] = xx[1268];
  xx[1282] = - xx[1279];
  pm_math_cross3(xx + 1880, xx + 1280, xx + 1287);
  xx[1280] = xx[1122];
  xx[1281] = - ((xx[1227] + xx[365]) * xx[19]);
  xx[1282] = xx[21] - (xx[368] + xx[1222]) * xx[19];
  pm_math_cross3(xx + 1280, xx + 231, xx + 1290);
  pm_math_quatXform(xx + 1205, xx + 1290, xx + 1280);
  xx[365] = xx[389] * xx[164];
  xx[368] = xx[164] * xx[406];
  xx[1122] = xx[389] * xx[149] + xx[406] * xx[156];
  xx[1205] = - xx[365];
  xx[1206] = - xx[368];
  xx[1207] = xx[1122];
  pm_math_cross3(xx + 284, xx + 1205, xx + 1290);
  pm_math_cross3(xx + 799, xx + 412, xx + 1205);
  xx[1325] = xx[559] + xx[1205];
  xx[1326] = xx[561] + xx[1206];
  xx[1327] = xx[896] + xx[1207];
  pm_math_quatInverseXform(xx + 402, xx + 1325, xx + 1205);
  pm_math_quatInverseXform(xx + 402, xx + 799, xx + 1325);
  xx[896] = xx[651] + xx[374] * xx[1205] - xx[371] * xx[1206] - xx[369] * xx
    [1327];
  xx[1205] = xx[19] * (xx[54] + xx[481]);
  xx[1206] = - ((xx[1234] - xx[1226]) * xx[19]);
  xx[1207] = (xx[1210] + xx[1219]) * xx[19] - xx[21];
  pm_math_cross3(xx + 1205, xx + 897, xx + 1325);
  pm_math_quatXform(xx + 1316, xx + 1325, xx + 1205);
  xx[54] = xx[1229] * xx[1770];
  xx[481] = xx[1235] * xx[1770];
  xx[651] = xx[1765] * xx[1235] - xx[1229] * xx[1402];
  xx[1316] = xx[54];
  xx[1317] = xx[481];
  xx[1318] = - xx[651];
  pm_math_cross3(xx + 1880, xx + 1316, xx + 1319);
  xx[1208] = xx[16] * xx[1402];
  xx[1210] = xx[1769] * xx[1195];
  pm_math_quatInverseXform(xx + 1250, xx + 35, xx + 1316);
  xx[1219] = xx[1357] * xx[1317] + xx[1316] * xx[1401];
  xx[1222] = xx[1316] - xx[19] * xx[1219] * xx[1401];
  xx[1226] = xx[1317] - xx[19] * xx[1219] * xx[1357];
  xx[1219] = xx[1318] - inputDot[10];
  xx[1227] = xx[1219] - (xx[1357] * xx[1357] * xx[1219] + xx[1401] * xx[1219] *
    xx[1401]) * xx[19];
  xx[1234] = xx[1227] + state[65];
  xx[1325] = xx[1222];
  xx[1326] = xx[1226];
  xx[1327] = xx[1234];
  xx[1332] = xx[50] * xx[1222];
  xx[1333] = xx[51] * xx[1226];
  xx[1334] = xx[1234] * xx[52];
  pm_math_cross3(xx + 1325, xx + 1332, xx + 1335);
  pm_math_quatInverseXform(xx + 1801, xx + 1325, xx + 1332);
  xx[50] = xx[1332] + xx[407];
  xx[51] = xx[1333] + xx[411];
  xx[407] = xx[1334] + state[72];
  xx[1341] = xx[50];
  xx[1342] = xx[51];
  xx[1343] = xx[407];
  xx[1344] = xx[50] * xx[78];
  xx[1345] = xx[51] * xx[79];
  xx[1346] = xx[407] * xx[80];
  pm_math_cross3(xx + 1341, xx + 1344, xx + 1347);
  pm_math_cross3(xx + 1332, xx + 1294, xx + 1341);
  xx[411] = xx[1347] + xx[78] * xx[1341];
  xx[1283] = xx[1348] + xx[79] * xx[1342];
  xx[1294] = xx[1332] + xx[50];
  xx[1295] = xx[1333] + xx[51];
  xx[1296] = xx[1334] + xx[407];
  pm_math_cross3(xx + 1294, xx + 1254, xx + 1332);
  pm_math_cross3(xx + 1325, xx + 1871, xx + 1254);
  pm_math_cross3(xx + 1325, xx + 1254, xx + 1294);
  pm_math_quatInverseXform(xx + 1801, xx + 1294, xx + 1254);
  xx[50] = (xx[1332] + xx[1254]) * xx[73];
  xx[51] = (xx[1333] + xx[1255]) * xx[73];
  xx[407] = (xx[1334] + xx[1256]) * xx[73];
  xx[1254] = xx[50];
  xx[1255] = xx[51];
  xx[1256] = xx[407];
  xx[73] = xx[411] - xx[1283] * xx[89] + pm_math_dot3(xx + 111, xx + 1254);
  xx[1294] = xx[411] * xx[89] + xx[1283] + pm_math_dot3(xx + 753, xx + 1254);
  xx[1254] = xx[1349] + xx[80] * xx[1343];
  xx[1255] = xx[1254] + xx[67] * xx[51] - xx[68] * xx[50];
  xx[1325] = - xx[73];
  xx[1326] = - xx[1294];
  xx[1327] = - xx[1255];
  solveSymmetricPosDef(xx + 91, xx + 1325, 3, 1, xx + 1332, xx + 1341);
  xx[1325] = xx[411] + xx[78] * xx[1332] + xx[140] * xx[1333];
  xx[1326] = xx[1283] - xx[713] * xx[1332] + xx[79] * xx[1333];
  xx[1327] = xx[1254] + xx[80] * xx[1334];
  pm_math_quatXform(xx + 1801, xx + 1325, xx + 1341);
  xx[1325] = xx[50] + xx[731] * xx[1332] - xx[806] * xx[1333] - xx[870] * xx
    [1334];
  xx[1326] = xx[51] + xx[806] * xx[1332] + xx[731] * xx[1333] + xx[908] * xx
    [1334];
  xx[1327] = xx[407] + xx[909] * xx[1332] + xx[927] * xx[1333];
  pm_math_quatXform(xx + 1801, xx + 1325, xx + 1344);
  pm_math_cross3(xx + 1871, xx + 1344, xx + 1325);
  xx[1256] = xx[1226] * state[65];
  xx[1295] = xx[1222] * state[65];
  xx[1296] = xx[1968] - xx[1932];
  xx[1299] = xx[1969] - xx[1935];
  xx[1300] = xx[1971] - xx[1933];
  xx[1309] = xx[1972] - xx[1936];
  xx[1310] = xx[1976] - xx[1940];
  xx[1505] = xx[1296];
  xx[1506] = xx[1299];
  xx[1507] = xx[1970] - xx[1938];
  xx[1508] = xx[1300];
  xx[1509] = xx[1309];
  xx[1510] = xx[1973] - xx[1939];
  xx[1511] = xx[143];
  xx[1512] = xx[1794];
  xx[1513] = xx[1310];
  xx[1346] = xx[1316];
  xx[1347] = xx[1317];
  xx[1348] = xx[1219];
  xx[143] = 3.999999996613603e-3;
  xx[1358] = xx[1228] - xx[1121];
  xx[1359] = xx[1160];
  xx[1360] = 1.587500000000039e-3 - (xx[143] - (xx[1357] * xx[143] * xx[1357] +
    xx[143] * xx[1401] * xx[1401]) * xx[19]);
  pm_math_cross3(xx + 1346, xx + 1358, xx + 1361);
  pm_math_cross3(xx + 1346, xx + 1361, xx + 1372);
  xx[143] = xx[1357] * xx[1373] + xx[1372] * xx[1401];
  xx[1121] = xx[1227] + xx[1234];
  xx[1160] = xx[1824] * state[65];
  xx[1227] = xx[1372] - xx[19] * xx[143] * xx[1401] + xx[1121] * xx[1160];
  xx[1228] = xx[1835] * state[65];
  xx[1234] = xx[1373] - xx[19] * xx[143] * xx[1357] - xx[1121] * xx[1228];
  xx[143] = (xx[1226] + xx[1226]) * xx[1228] - (xx[1222] + xx[1222]) * xx[1160]
    + xx[1374] - (xx[1357] * xx[1357] * xx[1374] + xx[1374] * xx[1401] * xx[1401])
    * xx[19];
  xx[1346] = xx[1227];
  xx[1347] = xx[1234];
  xx[1348] = xx[143];
  pm_math_matrix3x3Xform(xx + 1505, xx + 1346, xx + 1361);
  xx[1121] = xx[1256] * (xx[1965] - xx[1983] - xx[1979] - xx[2001]) - xx[1295] *
    (xx[1966] - xx[1984] - xx[1982] - xx[2002]) + xx[1363];
  xx[1505] = xx[1807];
  xx[1506] = xx[1987];
  xx[1507] = xx[1988];
  xx[1508] = xx[1989];
  xx[1509] = xx[1888];
  xx[1510] = xx[1991];
  xx[1511] = xx[1992];
  xx[1512] = xx[1993];
  xx[1513] = xx[393] + xx[1994];
  pm_math_matrix3x3Xform(xx + 1505, xx + 1346, xx + 1361);
  xx[1160] = xx[1256] * xx[1296] - xx[1295] * xx[1300] + xx[1361];
  xx[1222] = xx[1256] * xx[1299] - xx[1295] * xx[1309] + xx[1362];
  xx[1346] = (xx[1961] - xx[1979] - xx[1983] - xx[1997] - (xx[1835] * xx[1296] +
    xx[1824] * xx[1299])) / xx[1898];
  xx[1347] = (xx[1964] - xx[1982] - xx[1984] - xx[2000] - (xx[1835] * xx[1300] +
    xx[1824] * xx[1309])) / xx[1898];
  xx[1348] = xx[1796] / xx[1898];
  pm_math_quatInverseXform(xx + 1250, xx + 25, xx + 1361);
  xx[1226] = xx[1361] - xx[1317] * inputDot[10];
  xx[1228] = xx[1362] + xx[1316] * inputDot[10];
  xx[1296] = xx[1228] * xx[1357] + xx[1401] * xx[1226];
  xx[1299] = xx[1226] - xx[19] * xx[1296] * xx[1401];
  xx[1300] = xx[1228] - xx[19] * xx[1296] * xx[1357];
  xx[1296] = xx[1363] - inputDdot[10];
  xx[1309] = xx[1296] - (xx[1357] * xx[1357] * xx[1296] + xx[1401] * xx[1296] *
    xx[1401]) * xx[19];
  xx[1361] = xx[1299];
  xx[1362] = xx[1300];
  xx[1363] = xx[1309];
  xx[1372] = xx[1887] / xx[1898];
  xx[1373] = xx[1897] / xx[1898];
  xx[1374] = (xx[1310] - (xx[1835] * xx[1992] + xx[1824] * xx[1993])) / xx[1898];
  xx[1310] = 1.587499999999983e-3;
  xx[1313] = xx[1765] * xx[1310];
  xx[1314] = xx[1310] * xx[1402] - xx[1195];
  xx[1377] = xx[1313];
  xx[1378] = xx[1314];
  xx[1379] = xx[1194];
  pm_math_cross3(xx + 1880, xx + 1377, xx + 1385);
  xx[1317] = xx[1769] * xx[1194];
  xx[1377] = - (0.1492477869940503 + (xx[1769] * xx[1313] + xx[1385]) * xx[19] -
                xx[16]);
  xx[1378] = 0.02992151662180351 - (xx[1769] * xx[1314] + xx[1386]) * xx[19];
  xx[1379] = - (0.04838166497694621 + xx[1310] + xx[19] * (xx[1387] + xx[1317]));
  pm_math_cross3(xx + 25, xx + 1377, xx + 1385);
  xx[1416] = xx[15] + xx[1385];
  xx[1417] = xx[5] + xx[1386];
  xx[1418] = xx[18] + xx[1387];
  pm_math_quatInverseXform(xx + 1250, xx + 1416, xx + 1385);
  pm_math_cross3(xx + 35, xx + 1377, xx + 1416);
  pm_math_cross3(xx + 35, xx + 1416, xx + 1377);
  pm_math_quatInverseXform(xx + 1250, xx + 1377, xx + 1416);
  xx[1250] = xx[16] * inputDot[10];
  xx[1251] = xx[1226];
  xx[1252] = xx[1228];
  xx[1253] = xx[1296];
  pm_math_cross3(xx + 1251, xx + 1358, xx + 1377);
  xx[1226] = xx[1385] + xx[1416] + (xx[1318] + xx[1219]) * xx[1250] + xx[1377];
  xx[1219] = xx[1386] + xx[1417] - xx[16] * inputDdot[10] + xx[1378];
  xx[1228] = xx[1219] * xx[1357] + xx[1226] * xx[1401];
  xx[1251] = xx[1226] - xx[19] * xx[1228] * xx[1401];
  xx[1226] = xx[1219] - xx[19] * xx[1228] * xx[1357];
  xx[1219] = xx[1387] + xx[1418] - (xx[1316] + xx[1316]) * xx[1250] + xx[1379];
  xx[1228] = xx[1219] - (xx[1357] * xx[1219] * xx[1357] + xx[1219] * xx[1401] *
    xx[1401]) * xx[19];
  xx[1357] = xx[1251];
  xx[1358] = xx[1226];
  xx[1359] = xx[1228];
  xx[1219] = pm_math_dot3(xx + 1346, xx + 1361) + pm_math_dot3(xx + 1372, xx +
    1357);
  xx[1250] = (xx[1337] + xx[1343] + xx[1327] + xx[1121] - ((xx[1344] + xx[1160])
    * xx[1835] + (xx[1345] + xx[1222]) * xx[1824])) / xx[1898] + xx[1219];
  xx[1252] = xx[1299] + xx[1256];
  xx[1253] = xx[1300] - xx[1295];
  xx[1325] = xx[1252];
  xx[1326] = xx[1253];
  xx[1327] = xx[1309] - xx[1250];
  pm_math_quatInverseXform(xx + 1801, xx + 1325, xx + 1341);
  pm_math_cross3(xx + 1325, xx + 1871, xx + 1344);
  xx[1256] = xx[1228] + xx[143];
  xx[1325] = xx[1251] + xx[1250] * xx[1835] + xx[1227] + xx[1344];
  xx[1326] = xx[1226] + xx[1250] * xx[1824] + xx[1234] + xx[1345];
  xx[1327] = xx[1256] + xx[1346];
  pm_math_quatInverseXform(xx + 1801, xx + 1325, xx + 1344);
  xx[143] = xx[1332] - (pm_math_dot3(xx + 1927, xx + 1341) + pm_math_dot3(xx +
    2007, xx + 1344));
  xx[1228] = xx[1333] - (pm_math_dot3(xx + 2013, xx + 1341) + pm_math_dot3(xx +
    2016, xx + 1344));
  xx[1295] = xx[1334] - (pm_math_dot3(xx + 2019, xx + 1341) + pm_math_dot3(xx +
    1941, xx + 1344));
  xx[1296] = xx[59] * xx[42] - xx[41] * xx[56];
  xx[1299] = xx[42] * xx[61] + xx[41] * xx[55];
  xx[1300] = xx[42] * xx[55] - xx[41] * xx[61];
  xx[1310] = xx[59] * xx[41] + xx[42] * xx[56];
  xx[1325] = xx[1296];
  xx[1326] = - xx[1299];
  xx[1327] = xx[1300];
  xx[1328] = xx[1310];
  pm_math_quatCompose(xx + 11, xx + 1325, xx + 1332);
  xx[1313] = xx[1296] * xx[1300];
  xx[1314] = xx[1299] * xx[1310];
  xx[1316] = xx[1300] * xx[1310];
  xx[1318] = xx[1296] * xx[1299];
  xx[1325] = xx[1299] * xx[1299];
  xx[1326] = xx[1300] * xx[1300];
  xx[1341] = xx[19] * (xx[1313] + xx[1314]);
  xx[1342] = - ((xx[1316] - xx[1318]) * xx[19]);
  xx[1343] = (xx[1325] + xx[1326]) * xx[19] - xx[21];
  pm_math_cross3(xx + 1341, xx + 897, xx + 1344);
  pm_math_quatXform(xx + 1332, xx + 1344, xx + 1341);
  xx[1327] = xx[41] * xx[115] + xx[114] * xx[42];
  xx[1328] = xx[1907] * xx[41] + xx[1906] * xx[42];
  xx[1336] = xx[19] * xx[1328] * xx[41] - xx[1907];
  xx[1338] = xx[115] - xx[19] * xx[1327] * xx[41] - xx[1336];
  xx[1339] = xx[19] * xx[1328] * xx[42] - xx[1906];
  xx[1328] = 0.03194045367095624;
  xx[1344] = xx[114] - (xx[19] * xx[1327] * xx[42] + xx[1339]) + xx[1328];
  xx[1327] = xx[1344] * xx[6];
  xx[1345] = xx[1338] * xx[6];
  xx[1346] = xx[10] * xx[1338] - xx[1344] * xx[8];
  xx[1347] = - xx[1327];
  xx[1348] = - xx[1345];
  xx[1349] = - xx[1346];
  pm_math_cross3(xx + 1914, xx + 1347, xx + 1357);
  xx[1347] = xx[16] * xx[8];
  xx[1348] = xx[16] * xx[6];
  xx[1349] = xx[2] * xx[1348];
  xx[1350] = xx[19] * xx[396] * state[36] * state[36];
  xx[396] = xx[401] * state[36] * state[36];
  xx[1354] = xx[1329] * xx[1329];
  xx[1505] = (xx[1354] + xx[624]) * xx[19] - xx[21];
  xx[1506] = xx[1491];
  xx[1507] = (xx[1493] + xx[1492]) * xx[19];
  xx[1508] = (xx[1489] + xx[1490]) * xx[19];
  xx[1509] = (xx[1354] + xx[1458]) * xx[19] - xx[21];
  xx[1510] = xx[1364];
  xx[1511] = xx[252];
  xx[1512] = (xx[630] + xx[1381]) * xx[19];
  xx[1513] = (xx[1354] + xx[1488]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 871, xx + 1505, xx + 1527);
  xx[252] = xx[1412] * xx[1412];
  xx[624] = xx[1413] * xx[1414];
  xx[871] = (xx[252] + xx[645]) * xx[19] - xx[21];
  xx[872] = xx[19] * (xx[624] - xx[258]);
  xx[873] = (xx[187] + xx[272]) * xx[19];
  xx[874] = (xx[624] + xx[258]) * xx[19];
  xx[875] = (xx[252] + xx[1382]) * xx[19] - xx[21];
  xx[876] = xx[19] * (xx[644] - xx[641]);
  xx[877] = xx[570];
  xx[878] = (xx[644] + xx[641]) * xx[19];
  xx[879] = (xx[252] + xx[1415] * xx[1415]) * xx[19] - xx[21];
  pm_math_matrix3x3Compose(xx + 2022, xx + 871, xx + 1547);
  xx[187] = xx[1453] * xx[1453];
  xx[252] = (xx[187] + xx[1390]) * xx[19] - xx[21];
  xx[258] = xx[1454] * xx[1455];
  xx[272] = xx[1453] * xx[1456];
  xx[570] = (xx[258] + xx[272]) * xx[19];
  xx[624] = xx[1455] * xx[159] - xx[157] * xx[1454];
  xx[630] = xx[624] * xx[624];
  xx[641] = xx[1456] * xx[159] - xx[157] * xx[1453];
  xx[644] = xx[641] * xx[641];
  xx[645] = (xx[630] + xx[644]) * xx[19] - xx[21];
  xx[1329] = xx[1453] * xx[159] + xx[157] * xx[1456];
  xx[1354] = xx[1329] * xx[641];
  xx[1360] = xx[157] * xx[1455] + xx[1454] * xx[159];
  xx[1361] = xx[1360] * xx[624];
  xx[1362] = (xx[1354] + xx[1361]) * xx[19];
  xx[1372] = - xx[624];
  xx[1373] = xx[641];
  xx[1374] = xx[1329];
  xx[1375] = - xx[1360];
  pm_math_quatCompose(xx + 330, xx + 1372, xx + 1385);
  xx[1363] = xx[1385] * xx[1385];
  xx[1364] = xx[1386] * xx[1387];
  xx[1366] = xx[1385] * xx[1388];
  xx[1369] = xx[1386] * xx[1388];
  xx[1370] = xx[1385] * xx[1387];
  xx[1372] = xx[1387] * xx[1388];
  xx[1373] = xx[1385] * xx[1386];
  xx[1571] = (xx[1363] + xx[1386] * xx[1386]) * xx[19] - xx[21];
  xx[1572] = xx[19] * (xx[1364] - xx[1366]);
  xx[1573] = (xx[1369] + xx[1370]) * xx[19];
  xx[1574] = (xx[1364] + xx[1366]) * xx[19];
  xx[1575] = (xx[1363] + xx[1387] * xx[1387]) * xx[19] - xx[21];
  xx[1576] = xx[19] * (xx[1372] - xx[1373]);
  xx[1577] = xx[19] * (xx[1369] - xx[1370]);
  xx[1578] = (xx[1372] + xx[1373]) * xx[19];
  xx[1579] = (xx[1363] + xx[1388] * xx[1388]) * xx[19] - xx[21];
  xx[1363] = xx[1329] * inputDot[6];
  xx[1364] = xx[641] * inputDot[6];
  xx[1372] = xx[19] * (xx[1363] * xx[624] - xx[1360] * xx[1364]);
  xx[1373] = - ((xx[1364] * xx[624] + xx[1360] * xx[1363]) * xx[19]);
  xx[1374] = inputDot[6] - (xx[1364] * xx[641] + xx[1329] * xx[1363]) * xx[19];
  pm_math_matrix3x3PostCross(xx + 1571, xx + 1372, xx + 1580);
  xx[1363] = xx[1454] * state[10];
  xx[1364] = xx[1455] * state[10];
  xx[1366] = xx[19] * (xx[1456] * xx[1363] - xx[1453] * xx[1364]);
  pm_math_quatInverseXform(xx + 1412, xx + 1056, xx + 1372);
  pm_math_quatInverseXform(xx + 1408, xx + 1080, xx + 1377);
  xx[1369] = xx[320] * xx[356];
  xx[1370] = xx[19] * xx[1369] * xx[356] - xx[320];
  xx[1375] = xx[1377] + xx[1370];
  xx[1381] = xx[1372] + xx[1375];
  xx[1382] = (xx[1453] * xx[1363] + xx[1456] * xx[1364]) * xx[19];
  xx[1383] = xx[19] * xx[352] * xx[1369];
  xx[1369] = xx[1378] - xx[1383];
  xx[1390] = xx[1373] + xx[1369];
  xx[1392] = state[10] - (xx[1454] * xx[1363] + xx[1455] * xx[1364]) * xx[19];
  xx[1363] = xx[340] + state[36];
  xx[1364] = xx[1379] - xx[1363];
  xx[1393] = xx[1374] + xx[1364];
  xx[1407] = xx[1366] + xx[1381];
  xx[1408] = xx[1382] + xx[1390];
  xx[1409] = xx[1392] + xx[1393];
  pm_math_matrix3x3PostCross(xx + 1580, xx + 1407, xx + 1410);
  xx[1397] = xx[19] * (xx[1354] - xx[1361]);
  xx[1354] = xx[1360] * xx[641];
  xx[1361] = xx[1329] * xx[624];
  xx[1401] = (xx[1354] + xx[1361]) * xx[19];
  xx[1407] = xx[1329] * xx[1329];
  xx[1408] = (xx[630] + xx[1407]) * xx[19] - xx[21];
  xx[1409] = xx[624] * xx[641];
  xx[624] = xx[1329] * xx[1360];
  xx[641] = xx[19] * (xx[1409] - xx[624]);
  xx[1329] = xx[19] * (xx[1361] - xx[1354]);
  xx[1571] = xx[645];
  xx[1572] = xx[1397];
  xx[1573] = - xx[1401];
  xx[1574] = xx[1362];
  xx[1575] = xx[1408];
  xx[1576] = xx[641];
  xx[1577] = xx[1329];
  xx[1578] = - ((xx[624] + xx[1409]) * xx[19]);
  xx[1579] = (xx[630] + xx[1360] * xx[1360]) * xx[19] - xx[21];
  xx[1451] = xx[1366];
  xx[1452] = xx[1382];
  xx[1453] = xx[1392];
  pm_math_matrix3x3PostCross(xx + 1571, xx + 1451, xx + 1580);
  xx[1451] = xx[1381];
  xx[1452] = xx[1390];
  xx[1453] = xx[1393];
  pm_math_matrix3x3PostCross(xx + 1580, xx + 1451, xx + 1571);
  xx[630] = xx[19] * (xx[258] - xx[272]);
  xx[258] = (xx[167] + xx[168]) * xx[19];
  xx[167] = (xx[187] + xx[1391]) * xx[19] - xx[21];
  xx[168] = xx[19] * (xx[1389] - xx[170]);
  xx[1580] = xx[252];
  xx[1581] = xx[630];
  xx[1582] = xx[258];
  xx[1583] = xx[570];
  xx[1584] = xx[167];
  xx[1585] = xx[168];
  xx[1586] = xx[169];
  xx[1587] = (xx[1389] + xx[170]) * xx[19];
  xx[1588] = (xx[187] + xx[1456] * xx[1456]) * xx[19] - xx[21];
  pm_math_matrix3x3PostCross(xx + 1580, xx + 1372, xx + 1589);
  xx[1372] = xx[1375];
  xx[1373] = xx[1369];
  xx[1374] = xx[1364];
  pm_math_matrix3x3PostCross(xx + 1589, xx + 1372, xx + 1580);
  pm_math_matrix3x3PostCross(xx + 871, xx + 1377, xx + 1589);
  xx[169] = - xx[1383];
  xx[871] = xx[1370];
  xx[872] = xx[169];
  xx[873] = - xx[1363];
  pm_math_matrix3x3PostCross(xx + 1589, xx + 871, xx + 1611);
  xx[871] = xx[1370];
  xx[872] = xx[169];
  xx[873] = xx[196];
  pm_math_matrix3x3PostCross(xx + 1505, xx + 871, xx + 1589);
  xx[169] = xx[1596] * state[36];
  xx[170] = xx[1590] * state[36];
  xx[187] = xx[1593] * state[36];
  xx[196] = xx[1589] * state[36];
  xx[272] = xx[1592] * state[36];
  xx[871] = xx[1595] * state[36];
  xx[1505] = xx[1611] + xx[605] * xx[169] - (xx[170] * xx[450] + xx[187] * xx
    [602]);
  xx[1506] = xx[1612] + xx[196] * xx[450] + xx[272] * xx[602] - xx[605] * xx[871];
  xx[1507] = xx[1613];
  xx[1508] = xx[1614] + xx[606] * xx[170] - xx[187] * xx[541] - xx[169] * xx[608];
  xx[1509] = xx[1615] + xx[272] * xx[541] - xx[606] * xx[196] + xx[871] * xx[608];
  xx[1510] = xx[1616];
  xx[1511] = xx[1617] - (xx[170] * xx[609] + xx[603] * xx[187] + xx[169] * xx
    [542]);
  xx[1512] = xx[1618] + xx[196] * xx[609] + xx[603] * xx[272] + xx[871] * xx[542];
  xx[1513] = xx[1619];
  pm_math_matrix3x3Compose(xx + 732, xx + 1505, xx + 871);
  xx[169] = xx[1580] + xx[871];
  xx[170] = xx[1583] + xx[874];
  xx[187] = xx[1581] + xx[872];
  xx[196] = xx[1584] + xx[875];
  xx[272] = xx[1582] + xx[873];
  xx[450] = xx[1585] + xx[876];
  xx[732] = xx[1571] + xx[169] * xx[378] - xx[170] * xx[198];
  xx[733] = xx[1572] + xx[187] * xx[378] - xx[196] * xx[198];
  xx[734] = xx[1573] + xx[272] * xx[378] - xx[450] * xx[198];
  xx[735] = xx[1574] + xx[170] * xx[434] - xx[169] * xx[198];
  xx[736] = xx[1575] + xx[196] * xx[434] - xx[187] * xx[198];
  xx[737] = xx[1576] + xx[450] * xx[434] - xx[272] * xx[198];
  xx[738] = xx[1577] - (xx[1586] + xx[877]);
  xx[739] = xx[1578] - (xx[1587] + xx[878]);
  xx[740] = xx[1579] - (xx[1588] + xx[879]);
  pm_math_matrix3x3Compose(xx + 2336, xx + 732, xx + 871);
  xx[732] = xx[1350] * xx[33] - xx[396] * xx[152] + xx[811] * xx[401] - xx[812] *
    xx[397] + xx[1527] + xx[1547] + xx[252] * xx[422] + xx[570] * xx[440] - (xx
    [441] * xx[645] + xx[1362] * xx[499]) + (xx[1410] + xx[871]) * xx[19];
  xx[733] = xx[811] * xx[397] + xx[812] * xx[401] - (xx[1350] * xx[152] + xx[396]
    * xx[33]) + xx[1528] + xx[1548] + xx[630] * xx[422] + xx[167] * xx[440] -
    (xx[441] * xx[1397] + xx[499] * xx[1408]) + (xx[1411] + xx[872]) * xx[19];
  xx[734] = xx[813] * xx[351] + xx[1529] + xx[1549] + xx[258] * xx[422] + xx[168]
    * xx[440] + xx[1401] * xx[441] - xx[641] * xx[499] + (xx[1412] + xx[873]) *
    xx[19];
  xx[735] = xx[1350] * xx[153] - xx[396] * xx[197] + xx[814] * xx[401] - xx[815]
    * xx[397] + xx[1530] + xx[1550] + xx[252] * xx[31] + xx[570] * xx[32] - (xx
    [166] * xx[645] + xx[1362] * xx[206]) + (xx[1413] + xx[874]) * xx[19];
  xx[736] = xx[814] * xx[397] + xx[815] * xx[401] - (xx[197] * xx[1350] + xx[396]
    * xx[153]) + xx[1531] + xx[1551] + xx[630] * xx[31] + xx[167] * xx[32] -
    (xx[1397] * xx[166] + xx[206] * xx[1408]) + (xx[1414] + xx[875]) * xx[19];
  xx[737] = xx[816] * xx[351] + xx[1532] + xx[1552] + xx[258] * xx[31] + xx[168]
    * xx[32] + xx[1401] * xx[166] - xx[206] * xx[641] + (xx[1415] + xx[876]) *
    xx[19];
  xx[738] = xx[210] * xx[1350] - xx[396] * xx[213] + xx[817] * xx[401] - xx[818]
    * xx[397] + xx[1533] + xx[1553] + xx[252] * xx[220] + xx[570] * xx[221] -
    (xx[222] * xx[645] + xx[1362] * xx[223]) + (xx[1416] + xx[877]) * xx[19];
  xx[739] = xx[817] * xx[397] + xx[818] * xx[401] - (xx[1350] * xx[213] + xx[396]
    * xx[210]) + xx[1534] + xx[1554] + xx[630] * xx[220] + xx[167] * xx[221] -
    (xx[1397] * xx[222] + xx[223] * xx[1408]) + (xx[1417] + xx[878]) * xx[19];
  xx[740] = xx[819] * xx[351] + xx[1535] + xx[1555] + xx[258] * xx[220] + xx[168]
    * xx[221] + xx[1401] * xx[222] - xx[641] * xx[223] + (xx[1418] + xx[879]) *
    xx[19];
  pm_math_matrix3x3Xform(xx + 732, xx + 231, xx + 31);
  xx[152] = state[36] * state[36];
  xx[153] = xx[464] * xx[152];
  xx[167] = xx[152] * xx[462];
  xx[152] = xx[311] * xx[167];
  xx[168] = xx[311] * xx[153];
  xx[169] = xx[309] * xx[167] - xx[310] * xx[153];
  xx[196] = - xx[152];
  xx[197] = xx[168];
  xx[198] = xx[169];
  pm_math_cross3(xx + 309, xx + 196, xx + 732);
  pm_math_matrix3x3Xform(xx + 741, xx + 1398, xx + 196);
  xx[309] = xx[196] + xx[203];
  xx[310] = xx[197] + xx[219];
  xx[311] = xx[198] + xx[224];
  pm_math_quatXform(xx + 304, xx + 309, xx + 196);
  pm_math_matrix3x3Xform(xx + 847, xx + 1404, xx + 219);
  xx[304] = xx[219] + xx[589];
  xx[305] = xx[220] + xx[590];
  xx[306] = xx[221] + xx[591];
  pm_math_quatXform(xx + 300, xx + 304, xx + 219);
  pm_math_matrix3x3Xform(xx + 1944, xx + 1420, xx + 300);
  xx[303] = xx[300] + xx[652];
  xx[304] = xx[301] + xx[653];
  xx[305] = xx[302] + xx[654];
  pm_math_quatXform(xx + 296, xx + 303, xx + 300);
  xx[170] = xx[262] * xx[274] - xx[1425] * xx[379] + xx[202];
  xx[187] = xx[1425] * xx[274] - xx[262] * xx[435] - xx[218];
  xx[202] = xx[164] * xx[187];
  xx[203] = xx[164] * xx[170];
  xx[210] = xx[149] * xx[187] - xx[170] * xx[156];
  xx[296] = - xx[202];
  xx[297] = xx[203];
  xx[298] = xx[210];
  pm_math_cross3(xx + 284, xx + 296, xx + 303);
  xx[213] = xx[262] * xx[157] + xx[1425] * xx[159];
  xx[218] = xx[1425] - xx[19] * xx[213] * xx[159] + xx[428];
  xx[224] = xx[262] - xx[19] * xx[213] * xx[157] + xx[429];
  xx[213] = xx[1426] * state[36];
  xx[252] = xx[453] * state[36];
  xx[296] = xx[213] - xx[340] * xx[462];
  xx[297] = - (xx[252] + xx[340] * xx[465] + xx[341] * xx[320]);
  xx[298] = xx[320] * xx[462];
  pm_math_quatXform(xx + 214, xx + 296, xx + 309);
  xx[258] = xx[282] + xx[309];
  pm_math_cross3(xx + 1080, xx + 1404, xx + 296);
  xx[272] = xx[238] + xx[310];
  xx[238] = xx[311] - xx[243];
  xx[309] = xx[258] + xx[296];
  xx[310] = xx[272] + xx[297];
  xx[311] = xx[238] + xx[298];
  pm_math_quatXform(xx + 188, xx + 309, xx + 296);
  xx[243] = xx[334] + xx[296];
  pm_math_cross3(xx + 1056, xx + 1420, xx + 309);
  xx[274] = xx[335] + xx[297];
  xx[282] = xx[336] + xx[298];
  xx[296] = xx[243] + xx[309];
  xx[297] = xx[274] + xx[310];
  xx[298] = xx[282] + xx[311];
  pm_math_quatXform(xx + 178, xx + 296, xx + 309);
  xx[296] = xx[669] + xx[309];
  xx[297] = xx[296] - xx[262] * state[10];
  xx[262] = xx[670] + xx[310];
  xx[298] = xx[262] + xx[1425] * state[10];
  xx[299] = xx[298] * xx[157] + xx[159] * xx[297];
  xx[306] = (xx[425] + xx[297] - xx[19] * xx[299] * xx[159]) * inputDot[6];
  xx[297] = xx[164] * xx[306];
  xx[307] = (xx[432] + xx[298] - xx[19] * xx[299] * xx[157]) * inputDot[6];
  xx[298] = xx[164] * xx[307];
  xx[299] = xx[149] * xx[306] + xx[307] * xx[156];
  xx[309] = - xx[297];
  xx[310] = - xx[298];
  xx[311] = xx[299];
  pm_math_cross3(xx + 284, xx + 309, xx + 334);
  xx[309] = xx[262] * state[10];
  xx[262] = xx[296] * state[10];
  xx[296] = xx[309] * xx[159] - xx[157] * xx[262];
  xx[589] = xx[243];
  xx[590] = xx[274];
  xx[591] = xx[282];
  pm_math_cross3(xx + 1056, xx + 589, xx + 652);
  pm_math_quatXform(xx + 178, xx + 652, xx + 589);
  xx[652] = xx[258];
  xx[653] = xx[272];
  xx[654] = xx[238];
  pm_math_cross3(xx + 1080, xx + 652, xx + 735);
  pm_math_quatXform(xx + 188, xx + 735, xx + 652);
  xx[735] = - (xx[340] * xx[252]);
  xx[736] = - (xx[340] * xx[213]);
  xx[737] = xx[320] * xx[252];
  pm_math_quatXform(xx + 214, xx + 735, xx + 738);
  pm_math_quatXform(xx + 188, xx + 738, xx + 735);
  xx[738] = xx[652] + xx[735];
  xx[739] = xx[653] + xx[736];
  xx[740] = xx[654] + xx[737];
  pm_math_quatXform(xx + 178, xx + 738, xx + 652);
  xx[213] = xx[589] + xx[652];
  xx[238] = xx[590] + xx[653];
  xx[243] = xx[238] * xx[157] + xx[213] * xx[159];
  xx[252] = xx[591] + xx[654];
  xx[589] = xx[19] * xx[159] * xx[296] - xx[309] + xx[213] - xx[19] * xx[243] *
    xx[159];
  xx[590] = xx[262] + xx[19] * xx[157] * xx[296] + xx[238] - xx[19] * xx[243] *
    xx[157];
  xx[591] = xx[252] - (xx[157] * xx[252] * xx[157] + xx[252] * xx[159] * xx[159])
    * xx[19];
  pm_math_quatXform(xx + 330, xx + 589, xx + 309);
  xx[157] = xx[126] * xx[126];
  xx[159] = xx[130] * xx[126];
  xx[213] = xx[127] * xx[129];
  xx[238] = xx[130] * xx[127];
  xx[243] = xx[126] * xx[129];
  xx[252] = xx[130] * xx[129];
  xx[258] = xx[127] * xx[126];
  xx[735] = (xx[157] + xx[127] * xx[127]) * xx[19] - xx[21];
  xx[736] = xx[19] * (xx[159] - xx[213]);
  xx[737] = - ((xx[238] + xx[243]) * xx[19]);
  xx[738] = - ((xx[213] + xx[159]) * xx[19]);
  xx[739] = (xx[157] + xx[129] * xx[129]) * xx[19] - xx[21];
  xx[740] = xx[19] * (xx[252] - xx[258]);
  xx[741] = xx[19] * (xx[243] - xx[238]);
  xx[742] = (xx[252] + xx[258]) * xx[19];
  xx[743] = (xx[157] + xx[130] * xx[130]) * xx[19] - xx[21];
  xx[126] = xx[1903] * xx[72] - xx[62] * state[8];
  xx[127] = xx[74] * xx[62] - xx[934] * xx[72];
  xx[129] = xx[74] * xx[1903] - xx[934] * state[8];
  xx[130] = xx[1905] * state[8] - xx[137] * xx[72];
  xx[157] = xx[74] * xx[1905] - xx[136] * xx[72];
  xx[159] = xx[136] * state[8] - xx[74] * xx[137];
  xx[213] = xx[49] * xx[72] - xx[128] * state[8];
  xx[238] = xx[74] * xx[128] - xx[1902] * xx[72];
  xx[128] = xx[1902] * state[8] - xx[74] * xx[49];
  xx[811] = xx[126] * state[8] - xx[127] * xx[74];
  xx[812] = xx[129] * state[8] + xx[127] * xx[72];
  xx[813] = - (xx[129] * xx[74] + xx[126] * xx[72]);
  xx[814] = - (xx[130] * state[8] + xx[74] * xx[157]);
  xx[815] = xx[157] * xx[72] - xx[159] * state[8];
  xx[816] = xx[159] * xx[74] + xx[130] * xx[72];
  xx[817] = xx[213] * state[8] - xx[74] * xx[238];
  xx[818] = xx[238] * xx[72] - xx[128] * state[8];
  xx[819] = xx[74] * xx[128] - xx[213] * xx[72];
  pm_math_matrix3x3Compose(xx + 735, xx + 811, xx + 847);
  xx[49] = xx[2] * xx[6];
  xx[126] = xx[10] * xx[8];
  xx[127] = xx[49] - xx[126];
  xx[128] = xx[19] * xx[127];
  xx[129] = xx[19] * xx[41] * xx[42] * state[1] * state[1];
  xx[130] = (xx[19] * xx[41] * xx[41] - xx[21]) * state[1] * state[1];
  xx[157] = xx[2] * xx[2];
  xx[159] = (xx[157] + xx[8] * xx[8]) * xx[19] - xx[21];
  xx[213] = xx[128] * xx[129] - xx[130] * xx[159];
  xx[238] = (xx[19] * xx[42] * xx[42] - xx[21]) * state[1] * state[1];
  xx[243] = xx[129] * xx[159] - xx[238] * xx[128];
  xx[252] = xx[159] * inputDot[7] * inputDot[7];
  xx[258] = xx[1296] * xx[1296];
  xx[262] = (xx[258] + xx[1325]) * xx[19] - xx[21];
  xx[272] = xx[1296] * xx[1310];
  xx[274] = xx[1300] * xx[1299];
  xx[282] = (xx[272] - xx[274]) * xx[19];
  xx[296] = xx[19] * xx[127] * inputDot[7] * inputDot[7];
  xx[127] = xx[1332] * xx[1332];
  xx[320] = xx[1333] * xx[1334];
  xx[330] = xx[1332] * xx[1335];
  xx[331] = xx[1333] * xx[1335];
  xx[332] = xx[1332] * xx[1334];
  xx[333] = xx[1334] * xx[1335];
  xx[340] = xx[1332] * xx[1333];
  xx[735] = (xx[127] + xx[1333] * xx[1333]) * xx[19] - xx[21];
  xx[736] = xx[19] * (xx[320] - xx[330]);
  xx[737] = (xx[331] + xx[332]) * xx[19];
  xx[738] = (xx[320] + xx[330]) * xx[19];
  xx[739] = (xx[127] + xx[1334] * xx[1334]) * xx[19] - xx[21];
  xx[740] = xx[19] * (xx[333] - xx[340]);
  xx[741] = xx[19] * (xx[331] - xx[332]);
  xx[742] = (xx[333] + xx[340]) * xx[19];
  xx[743] = (xx[127] + xx[1335] * xx[1335]) * xx[19] - xx[21];
  xx[127] = xx[1300] * inputDot[7];
  xx[320] = xx[1299] * inputDot[7];
  xx[330] = xx[19] * (xx[1296] * xx[127] + xx[320] * xx[1310]);
  xx[331] = - ((xx[127] * xx[1310] - xx[1296] * xx[320]) * xx[19]);
  xx[332] = (xx[320] * xx[1299] + xx[1300] * xx[127]) * xx[19] - inputDot[7];
  pm_math_matrix3x3PostCross(xx + 735, xx + 330, xx + 871);
  xx[127] = xx[59] * state[1];
  xx[320] = xx[56] * state[1];
  xx[330] = (xx[127] * xx[55] + xx[320] * xx[61]) * xx[19];
  xx[331] = xx[19] * (xx[127] * xx[61] - xx[320] * xx[55]);
  xx[55] = state[1] - (xx[320] * xx[56] + xx[59] * xx[127]) * xx[19];
  xx[589] = xx[330] + xx[72];
  xx[590] = xx[331] + xx[74];
  xx[591] = xx[55] + state[8];
  pm_math_matrix3x3PostCross(xx + 871, xx + 589, xx + 735);
  xx[56] = xx[6] * xx[8];
  xx[59] = xx[10] * xx[2];
  xx[61] = xx[126] + xx[49];
  xx[49] = xx[61] * xx[19];
  xx[72] = (xx[157] + xx[10] * xx[10]) * xx[19] - xx[21];
  xx[74] = xx[2] * xx[8];
  xx[126] = xx[10] * xx[6];
  xx[127] = xx[56] - xx[59];
  xx[320] = xx[19] * xx[127];
  xx[332] = xx[126] + xx[74];
  xx[333] = xx[332] * xx[19];
  xx[871] = xx[159];
  xx[872] = xx[128];
  xx[873] = (xx[56] + xx[59]) * xx[19];
  xx[874] = - xx[49];
  xx[875] = xx[72];
  xx[876] = xx[19] * (xx[74] - xx[126]);
  xx[877] = xx[320];
  xx[878] = - xx[333];
  xx[879] = (xx[157] + xx[6] * xx[6]) * xx[19] - xx[21];
  xx[56] = xx[19] * (xx[274] + xx[272]);
  xx[59] = (xx[1313] - xx[1314]) * xx[19];
  xx[74] = (xx[258] + xx[1326]) * xx[19] - xx[21];
  xx[126] = xx[19] * (xx[1316] + xx[1318]);
  xx[1410] = xx[262];
  xx[1411] = - xx[56];
  xx[1412] = xx[59];
  xx[1413] = xx[282];
  xx[1414] = xx[74];
  xx[1415] = xx[126];
  xx[1416] = - (xx[19] * (xx[1314] + xx[1313]));
  xx[1417] = (xx[1316] - xx[1318]) * xx[19];
  xx[1418] = (xx[258] + xx[1310] * xx[1310]) * xx[19] - xx[21];
  xx[589] = xx[330];
  xx[590] = xx[331];
  xx[591] = xx[55];
  pm_math_matrix3x3PostCross(xx + 1410, xx + 589, xx + 1505);
  pm_math_matrix3x3PostCross(xx + 1505, xx + 75, xx + 1410);
  pm_math_matrix3x3Compose(xx + 871, xx + 1410, xx + 1505);
  xx[55] = xx[129] * xx[72] + xx[130] * xx[49];
  xx[75] = xx[49] * xx[129] + xx[238] * xx[72];
  xx[49] = xx[72] * inputDot[7] * inputDot[7];
  xx[72] = xx[19] * xx[61] * inputDot[7] * inputDot[7];
  xx[61] = xx[129] * xx[320] + xx[238] * xx[333];
  xx[76] = xx[333] * xx[129] + xx[130] * xx[320];
  xx[77] = xx[19] * xx[127] * inputDot[7] * inputDot[7];
  xx[127] = xx[19] * xx[332] * inputDot[7] * inputDot[7];
  xx[871] = xx[847] + xx[62] * xx[213] + xx[1905] * xx[243] - (xx[252] * xx[262]
    + xx[282] * xx[296]) + (xx[735] + xx[1505]) * xx[19];
  xx[872] = xx[848] + xx[136] * xx[243] + xx[934] * xx[213] - (xx[296] * xx[74]
    - xx[252] * xx[56]) + (xx[736] + xx[1506]) * xx[19];
  xx[873] = xx[849] + xx[1903] * xx[213] + xx[137] * xx[243] - (xx[252] * xx[59]
    + xx[296] * xx[126]) + (xx[737] + xx[1507]) * xx[19];
  xx[874] = xx[850] + xx[62] * xx[55] - xx[1905] * xx[75] - (xx[282] * xx[49] -
    xx[72] * xx[262]) + (xx[738] + xx[1508]) * xx[19];
  xx[875] = xx[851] + xx[934] * xx[55] - xx[136] * xx[75] - (xx[56] * xx[72] +
    xx[49] * xx[74]) + (xx[739] + xx[1509]) * xx[19];
  xx[876] = xx[852] + xx[1903] * xx[55] - xx[137] * xx[75] - (xx[49] * xx[126] -
    xx[59] * xx[72]) + (xx[740] + xx[1510]) * xx[19];
  xx[877] = xx[853] + xx[1905] * xx[61] - xx[76] * xx[62] - (xx[77] * xx[262] -
    xx[282] * xx[127]) + (xx[741] + xx[1511]) * xx[19];
  xx[878] = xx[854] + xx[61] * xx[136] - xx[934] * xx[76] + xx[77] * xx[56] +
    xx[127] * xx[74] + (xx[742] + xx[1512]) * xx[19];
  xx[879] = xx[855] + xx[137] * xx[61] - xx[1903] * xx[76] - (xx[59] * xx[77] -
    xx[127] * xx[126]) + (xx[743] + xx[1513]) * xx[19];
  pm_math_matrix3x3Xform(xx + 871, xx + 897, xx + 74);
  pm_math_matrix3x3Xform(xx + 811, xx + 69, xx + 330);
  pm_math_quatXform(xx + 131, xx + 330, xx + 69);
  xx[55] = state[1] * state[1];
  xx[56] = xx[115] * xx[129] - xx[114] * xx[130] + xx[55] * xx[1339];
  xx[59] = xx[114] * xx[129] - xx[115] * xx[238] + xx[55] * xx[1336];
  xx[55] = xx[59] * xx[6];
  xx[61] = xx[56] * xx[6];
  xx[62] = xx[59] * xx[8] + xx[56] * xx[10];
  xx[128] = xx[55];
  xx[129] = - xx[61];
  xx[130] = - xx[62];
  pm_math_cross3(xx + 1914, xx + 128, xx + 131);
  xx[126] = inputDot[7] * inputDot[7];
  xx[128] = xx[10] * xx[16];
  xx[129] = xx[1348] * xx[6];
  pm_math_quatXform(xx + 63, xx + 117, xx + 330);
  xx[117] = xx[331] + xx[114] * state[1];
  xx[118] = xx[330] - xx[115] * state[1];
  xx[119] = xx[117] * xx[41] + xx[42] * xx[118];
  xx[130] = ((xx[1906] - xx[0]) * state[1] + xx[117] - xx[19] * xx[119] * xx[41])
    * inputDot[7];
  xx[0] = (xx[118] - xx[19] * xx[119] * xx[42] - (xx[1907] + xx[1909]) * state[1])
    * inputDot[7];
  xx[117] = xx[0] * xx[6];
  xx[118] = xx[130] * xx[6];
  xx[119] = xx[10] * xx[130] - xx[0] * xx[8];
  xx[589] = - xx[117];
  xx[590] = - xx[118];
  xx[591] = - xx[119];
  pm_math_cross3(xx + 1914, xx + 589, xx + 652);
  xx[134] = xx[331] * state[1];
  xx[136] = xx[330] * state[1];
  xx[137] = xx[134] * xx[42] - xx[41] * xx[136];
  xx[157] = xx[19] * xx[42] * xx[137] - xx[134];
  xx[134] = xx[136] + xx[19] * xx[41] * xx[137];
  xx[136] = xx[134] * xx[6];
  xx[137] = xx[157] * xx[6];
  xx[6] = xx[134] * xx[8] + xx[10] * xx[157];
  xx[330] = xx[136];
  xx[331] = - xx[137];
  xx[332] = - xx[6];
  pm_math_cross3(xx + 1914, xx + 330, xx + 589);
  xx[159] = xx[87] * xx[89] + xx[88] + pm_math_dot3(xx + 753, xx + 120);
  xx[81] = xx[86] + xx[80] * xx[83];
  xx[82] = xx[81] + xx[67] * xx[124] - xx[68] * xx[123];
  xx[83] = - xx[48];
  xx[84] = - xx[159];
  xx[85] = - xx[82];
  solveSymmetricPosDef(xx + 100, xx + 83, 3, 1, xx + 120, xx + 330);
  xx[83] = xx[87] + xx[78] * xx[120] + xx[140] * xx[121];
  xx[84] = xx[88] - xx[713] * xx[120] + xx[79] * xx[121];
  xx[85] = xx[81] + xx[80] * xx[122];
  pm_math_quatXform(xx + 63, xx + 83, xx + 330);
  xx[83] = xx[123] + xx[731] * xx[120] - xx[806] * xx[121] - xx[870] * xx[122];
  xx[84] = xx[124] + xx[806] * xx[120] + xx[731] * xx[121] + xx[908] * xx[122];
  xx[85] = xx[47] + xx[909] * xx[120] + xx[927] * xx[121];
  pm_math_quatXform(xx + 63, xx + 83, xx + 735);
  pm_math_cross3(xx + 114, xx + 735, xx + 83);
  xx[83] = xx[44] * state[1];
  xx[84] = xx[43] * state[1];
  xx[86] = xx[984] - xx[2033];
  xx[213] = xx[985] - xx[2036];
  xx[238] = xx[987] - xx[2034];
  xx[243] = xx[988] - xx[2037];
  xx[258] = xx[992] - xx[2041];
  xx[737] = xx[86];
  xx[738] = xx[213];
  xx[739] = xx[986] - xx[2039];
  xx[740] = xx[238];
  xx[741] = xx[243];
  xx[742] = xx[989] - xx[2040];
  xx[743] = xx[60];
  xx[744] = xx[125];
  xx[745] = xx[258];
  xx[746] = xx[38];
  xx[747] = xx[39];
  xx[748] = xx[24];
  xx[60] = 4.0000000045273e-3;
  xx[811] = xx[1328] - xx[1339];
  xx[812] = - xx[1336];
  xx[813] = xx[175] - (xx[60] - (xx[41] * xx[60] * xx[41] + xx[60] * xx[42] *
    xx[42]) * xx[19]);
  pm_math_cross3(xx + 746, xx + 811, xx + 814);
  pm_math_cross3(xx + 746, xx + 814, xx + 817);
  xx[60] = xx[41] * xx[818] + xx[817] * xx[42];
  xx[125] = xx[45] + xx[46];
  xx[45] = xx[1906] * state[1];
  xx[46] = xx[817] - xx[19] * xx[60] * xx[42] - xx[125] * xx[45];
  xx[262] = xx[1907] * state[1];
  xx[272] = xx[818] - xx[19] * xx[60] * xx[41] - xx[125] * xx[262];
  xx[60] = (xx[43] + xx[43]) * xx[45] + (xx[44] + xx[44]) * xx[262] + xx[819] -
    (xx[41] * xx[41] * xx[819] + xx[819] * xx[42] * xx[42]) * xx[19];
  xx[43] = xx[46];
  xx[44] = xx[272];
  xx[45] = xx[60];
  pm_math_matrix3x3Xform(xx + 737, xx + 43, xx + 746);
  xx[125] = xx[83] * (xx[981] - xx[2066] - xx[2062] - xx[2084]) - xx[84] * (xx
    [982] - xx[2067] - xx[2065] - xx[2085]) + xx[748];
  xx[737] = xx[1904];
  xx[738] = xx[2070];
  xx[739] = xx[2071];
  xx[740] = xx[2072];
  xx[741] = xx[991];
  xx[742] = xx[2074];
  xx[743] = xx[2075];
  xx[744] = xx[2076];
  xx[745] = xx[393] + xx[2077];
  pm_math_matrix3x3Xform(xx + 737, xx + 43, xx + 746);
  xx[43] = xx[83] * xx[213] - xx[84] * xx[243] + xx[747];
  xx[44] = xx[83] * xx[86] - xx[84] * xx[238] + xx[746];
  xx[737] = (xx[977] - xx[2062] - xx[2066] - xx[2080] + xx[1906] * xx[213] - xx
             [1907] * xx[86]) / xx[1923];
  xx[738] = (xx[980] - xx[2065] - xx[2067] - xx[2083] + xx[1906] * xx[243] - xx
             [1907] * xx[238]) / xx[1923];
  xx[739] = xx[990] / xx[1923];
  pm_math_quatInverseXform(xx + 11, xx + 25, xx + 740);
  xx[45] = xx[740] - xx[39] * inputDot[7];
  xx[39] = xx[741] + xx[38] * inputDot[7];
  xx[86] = xx[39] * xx[41] + xx[42] * xx[45];
  xx[213] = xx[45] - xx[19] * xx[86] * xx[42];
  xx[238] = xx[39] - xx[19] * xx[86] * xx[41];
  xx[86] = xx[742] - inputDdot[7];
  xx[243] = xx[86] - (xx[41] * xx[41] * xx[86] + xx[42] * xx[86] * xx[42]) * xx
    [19];
  xx[740] = xx[213];
  xx[741] = xx[238];
  xx[742] = xx[243];
  xx[743] = xx[1913] / xx[1923];
  xx[744] = xx[1468] / xx[1923];
  xx[745] = (xx[258] + xx[1906] * xx[2076] - xx[1907] * xx[2075]) / xx[1923];
  xx[258] = xx[10] * xx[175];
  xx[262] = xx[1348] + xx[175] * xx[8];
  xx[746] = xx[258];
  xx[747] = xx[262];
  xx[748] = xx[128];
  pm_math_cross3(xx + 1914, xx + 746, xx + 814);
  xx[274] = xx[2] * xx[128];
  xx[746] = 0.1564468326892218 - ((xx[2] * xx[258] + xx[814]) * xx[19] - xx[16]);
  xx[747] = 0.02992367610368172 - (xx[2] * xx[262] + xx[815]) * xx[19];
  xx[748] = - (0.01163189793971064 + xx[175] + xx[19] * (xx[816] + xx[274]));
  pm_math_cross3(xx + 25, xx + 746, xx + 814);
  xx[25] = xx[15] + xx[814];
  xx[26] = xx[5] + xx[815];
  xx[27] = xx[18] + xx[816];
  pm_math_quatInverseXform(xx + 11, xx + 25, xx + 814);
  pm_math_cross3(xx + 35, xx + 746, xx + 25);
  pm_math_cross3(xx + 35, xx + 25, xx + 746);
  pm_math_quatInverseXform(xx + 11, xx + 746, xx + 25);
  xx[5] = xx[16] * inputDot[7];
  xx[11] = xx[45];
  xx[12] = xx[39];
  xx[13] = xx[86];
  pm_math_cross3(xx + 11, xx + 811, xx + 35);
  xx[11] = xx[814] + xx[25] + (xx[40] + xx[24]) * xx[5] + xx[35];
  xx[12] = xx[815] + xx[26] - xx[16] * inputDdot[7] + xx[36];
  xx[13] = xx[12] * xx[41] + xx[11] * xx[42];
  xx[14] = xx[11] - xx[19] * xx[13] * xx[42];
  xx[11] = xx[12] - xx[19] * xx[13] * xx[41];
  xx[12] = xx[816] + xx[27] - (xx[38] + xx[38]) * xx[5] + xx[37];
  xx[5] = xx[12] - (xx[41] * xx[12] * xx[41] + xx[12] * xx[42] * xx[42]) * xx[19];
  xx[24] = xx[14];
  xx[25] = xx[11];
  xx[26] = xx[5];
  xx[12] = pm_math_dot3(xx + 737, xx + 740) + pm_math_dot3(xx + 743, xx + 24);
  xx[13] = (xx[58] + xx[332] + xx[85] + xx[125] + (xx[736] + xx[43]) * xx[1906]
            - (xx[735] + xx[44]) * xx[1907]) / xx[1923] + xx[12];
  xx[15] = xx[213] + xx[83];
  xx[18] = xx[238] - xx[84];
  xx[24] = xx[15];
  xx[25] = xx[18];
  xx[26] = xx[243] - xx[13];
  pm_math_quatInverseXform(xx + 63, xx + 24, xx + 35);
  pm_math_cross3(xx + 24, xx + 114, xx + 38);
  xx[24] = xx[5] + xx[60];
  xx[25] = xx[14] + xx[13] * xx[1907] + xx[46] + xx[38];
  xx[26] = xx[11] - xx[13] * xx[1906] + xx[272] + xx[39];
  xx[27] = xx[24] + xx[40];
  pm_math_quatInverseXform(xx + 63, xx + 25, xx + 38);
  xx[5] = xx[120] - (pm_math_dot3(xx + 1956, xx + 35) + pm_math_dot3(xx + 2087,
    xx + 38));
  xx[25] = xx[121] - (pm_math_dot3(xx + 2093, xx + 35) + pm_math_dot3(xx + 2096,
    xx + 38));
  xx[26] = xx[122] - (pm_math_dot3(xx + 2099, xx + 35) + pm_math_dot3(xx + 2042,
    xx + 38));
  xx[35] = xx[1329];
  xx[36] = - ((xx[1409] + xx[624]) * xx[19]);
  xx[37] = xx[21] - (xx[644] + xx[1407]) * xx[19];
  pm_math_cross3(xx + 35, xx + 231, xx + 38);
  pm_math_quatXform(xx + 1385, xx + 38, xx + 35);
  xx[21] = xx[164] * xx[218];
  xx[27] = xx[164] * xx[224];
  xx[38] = xx[149] * xx[218] + xx[156] * xx[224];
  xx[39] = - xx[21];
  xx[40] = - xx[27];
  xx[41] = xx[38];
  pm_math_cross3(xx + 284, xx + 39, xx + 83);
  pm_math_cross3(xx + 799, xx + 1398, xx + 39);
  xx[42] = xx[559] + xx[39];
  xx[39] = xx[561] + xx[40];
  xx[40] = xx[39] * xx[356];
  xx[41] = xx[42] * xx[356];
  xx[45] = xx[458] + xx[394] * (xx[42] - (xx[352] * xx[40] + xx[41] * xx[356]) *
    xx[19]) - (xx[39] + xx[19] * (xx[352] * xx[41] - xx[40] * xx[356])) * xx[399]
    - xx[666] * xx[237];
  xx[735] = xx[290] * xx[29] - (xx[501] + xx[34] + xx[19] * (xx[522] - xx[308] *
    xx[30]) + xx[516] + xx[253] + xx[265] + xx[204] + xx[19] * (xx[672] - xx[240]
    * xx[163]) + xx[419] - (xx[426] * xx[441] + xx[499] * xx[430]) + (xx[19] *
    (xx[760] - xx[270] * xx[163]) - xx[287] + xx[259]) * xx[19] - (xx[820] + xx
    [826] + xx[495] + xx[19] * (xx[857] + xx[705] * xx[264]) + xx[508] * ((xx
    [703] * xx[510] + xx[520]) * xx[19] - xx[16]) - (xx[565] * xx[505] + xx[567]
    * xx[584]) + (xx[629] + (xx[922] - xx[705] * xx[607]) * xx[19] + xx[659] +
                  xx[19] * (xx[880] + xx[705] * xx[643])) * xx[19]) + (xx[865] +
    xx[19] * (xx[957] - xx[448] * xx[163]) - xx[430] + xx[664]) * inputDdot[6])
    - xx[771] * xx[9] - xx[263] * xx[257] - xx[173] * xx[323] - xx[554] * xx[431]
    - xx[186] * xx[555] - xx[250] * xx[556] + xx[312] * xx[557] - xx[242] * xx
    [682] + (xx[1223] + xx[584] + (xx[1303] - xx[705] * xx[234]) * xx[19] + xx
             [19] * (xx[703] * xx[519] - xx[539])) * inputDdot[8] - xx[907] *
    xx[676] + xx[661] * xx[449] + xx[139] * xx[675] + xx[702] * xx[708];
  xx[736] = xx[29] * xx[953] - (xx[502] + xx[165] + (xx[308] * xx[199] + xx[523])
    * xx[19] + xx[517] + xx[254] + xx[266] + xx[192] + (xx[249] * xx[163] + xx
    [673]) * xx[19] - (xx[709] + xx[426] * xx[166] + xx[206] * xx[430]) + (xx
    [321] + xx[19] * (xx[761] - xx[275] * xx[163]) + xx[260]) * xx[19] - (xx[821]
    + xx[827] + xx[457] + (xx[858] - xx[705] * xx[313]) * xx[19] + xx[508] *
    (xx[539] + xx[510] * xx[689]) * xx[19] - (xx[158] * xx[584] - xx[565] * xx
    [160]) + ((xx[923] - xx[705] * xx[610]) * xx[19] - xx[533] + xx[642] + (xx
    [881] - xx[705] * xx[658]) * xx[19]) * xx[19]) + (xx[866] + xx[426] + xx[19]
    * (xx[958] - xx[455] * xx[163]) - xx[20] + xx[16]) * inputDdot[6]) - xx[1008]
    * xx[9] - xx[1042] * xx[257] - xx[1077] * xx[323] - xx[996] * xx[431] - xx
    [997] * xx[555] - xx[1009] * xx[556] + xx[281] * xx[557] - xx[288] * xx[682]
    + (xx[1224] + (xx[1304] - xx[705] * xx[269]) * xx[19] - (xx[565] - (xx[520]
         + xx[519] * xx[689]) * xx[19]) - xx[16]) * inputDdot[8] - xx[929] * xx
    [676] + xx[236] * xx[449] + xx[998] * xx[675] + xx[1001] * xx[708];
  xx[737] = xx[29] * xx[225] - (xx[503] + (xx[308] * xx[209] + xx[524]) * xx[19]
    + xx[518] + xx[255] + xx[267] + (xx[256] * xx[163] + xx[674]) * xx[19] + xx
    [400] - (xx[426] * xx[222] + xx[223] * xx[430]) + ((xx[315] * xx[163] + xx
    [762]) * xx[19] + xx[261]) * xx[19] - (xx[822] + xx[828] + (xx[859] - xx[705]
    * xx[466]) * xx[19] + xx[19] * (xx[766] - xx[514] * xx[689]) * xx[508] -
    (xx[565] * xx[587] - xx[604] * xx[584]) + (xx[19] * (xx[924] - xx[705] * xx
    [634]) + (xx[882] - xx[705] * xx[662]) * xx[19]) * xx[19]) + (xx[867] + (xx
    [461] * xx[163] + xx[959]) * xx[19] + xx[271]) * inputDdot[6]) - xx[294] *
    xx[9] - xx[548] * xx[257] - xx[549] * xx[323] - xx[283] * xx[431] - xx[289] *
    xx[555] - xx[295] * xx[556] + xx[226] * xx[557] - xx[227] * xx[682] + (xx
    [1225] + xx[19] * (xx[1305] - xx[705] * xx[451]) + (xx[705] * xx[519] + xx
    [703] * xx[514]) * xx[19]) * inputDdot[8] - xx[319] * xx[676] + xx[155] *
    xx[449] + xx[293] * xx[675] + xx[318] * xx[708];
  xx[738] = xx[29] * xx[911] - (xx[572] + xx[578] + xx[575] + xx[631] + xx[646]
    + xx[17] + xx[19] * (xx[823] - xx[194] * xx[163]) + xx[419] - (xx[212] * xx
    [441] + xx[499] * xx[438]) + (xx[19] * (xx[794] - xx[601] * xx[163]) - xx
    [622] + xx[808]) * xx[19] - (xx[935] + xx[950] + xx[566] + xx[19] * (xx[954]
    - xx[161] * xx[154]) + xx[581] * ((xx[625] * xx[1133] + xx[716]) * xx[19] -
    xx[614]) - (xx[786] * xx[635] + xx[787] * xx[803]) + (xx[19] * (xx[1011] -
    xx[722] * xx[154]) - xx[868] + xx[926] + xx[19] * (xx[972] - xx[904] * xx
    [154])) * xx[19]) + (xx[969] + xx[19] * (xx[1014] - xx[636] * xx[163]) - xx
    [438] + xx[664]) * inputDdot[6]) - xx[1111] * xx[9] - xx[802] * xx[257] -
    xx[789] * xx[323] - xx[1115] * xx[431] - xx[700] * xx[555] - xx[650] * xx
    [556] + xx[944] * xx[557] + xx[912] * xx[900] + (xx[901] + xx[19] * (xx[1017]
    - xx[711] * xx[154]) - xx[803] + xx[19] * (xx[772] * xx[1133] - xx[788])) *
    inputDdot[11] - xx[862] * xx[1556] + xx[148] * xx[4] + xx[162] * xx[507] +
    xx[1504] * xx[960];
  xx[739] = xx[1086] * xx[29] - (xx[573] + xx[579] + xx[576] + xx[632] + xx[647]
    + xx[150] + (xx[200] * xx[163] + xx[824]) * xx[19] - (xx[709] + xx[212] *
    xx[166] + xx[206] * xx[438]) + (xx[621] + xx[19] * (xx[795] - xx[619] * xx
    [163]) + xx[809]) * xx[19] - (xx[936] + xx[951] + xx[480] + (xx[475] * xx
    [154] + xx[955]) * xx[19] - ((xx[788] + xx[1085] * xx[625]) * xx[19] * xx
    [581] + xx[786] * xx[211] + xx[649] * xx[803]) + (xx[833] + xx[19] * (xx
    [1012] - xx[804] * xx[154]) + xx[869] + (xx[925] * xx[154] + xx[973]) * xx
    [19]) * xx[19]) + (xx[970] + xx[212] + xx[19] * (xx[1015] - xx[714] * xx[163])
                       - xx[20] + xx[16]) * inputDdot[6]) - xx[1161] * xx[9] -
    xx[1177] * xx[257] - xx[1178] * xx[323] - xx[1158] * xx[431] - xx[1159] *
    xx[555] - xx[1162] * xx[556] + xx[1163] * xx[557] + xx[840] * xx[900] + (xx
    [902] + xx[786] + xx[19] * (xx[1018] - xx[712] * xx[154]) - (xx[716] + xx
    [1085] * xx[772]) * xx[19] + xx[614]) * inputDdot[11] - xx[862] * xx[1172] +
    xx[906] * xx[4] + xx[1166] * xx[507] + xx[1171] * xx[960];
  xx[740] = xx[750] * xx[29] - (xx[574] + xx[580] + xx[577] + xx[633] + xx[648]
    + (xx[163] * xx[208] + xx[825]) * xx[19] + xx[400] - (xx[212] * xx[222] +
    xx[223] * xx[438]) + ((xx[620] * xx[163] + xx[796]) * xx[19] + xx[810]) *
    xx[19] - (xx[937] + xx[952] + (xx[568] * xx[154] + xx[956]) * xx[19] + xx[19]
              * (xx[1029] - xx[1085] * xx[637]) * xx[581] - (xx[786] * xx[797] +
    xx[798] * xx[803]) + ((xx[832] * xx[154] + xx[1013]) * xx[19] + (xx[928] *
    xx[154] + xx[974]) * xx[19]) * xx[19]) + (xx[971] + (xx[718] * xx[163] + xx
    [1016]) * xx[19] + xx[271]) * inputDdot[6]) - xx[949] * xx[9] - xx[1103] *
    xx[257] - xx[1107] * xx[323] - xx[943] * xx[431] - xx[948] * xx[555] - xx
    [1098] * xx[556] + xx[947] * xx[557] + xx[751] * xx[900] + (xx[903] + (xx
    [764] * xx[154] + xx[1019]) * xx[19] + (xx[772] * xx[154] + xx[637] * xx
    [1133]) * xx[19]) * inputDdot[11] - xx[862] * xx[1100] + xx[752] * xx[4] +
    xx[942] * xx[507] + xx[1099] * xx[960];
  xx[741] = xx[1190] * xx[29] - (xx[482] + xx[468] + xx[485] + xx[1021] + xx
    [1024] + xx[339] + xx[19] * (xx[1034] - xx[472] * xx[163]) + xx[419] - (xx
    [489] * xx[441] + xx[499] * xx[490]) + (xx[19] * (xx[1043] - xx[999] * xx
    [163]) - xx[1033] + xx[529]) * xx[19] - (xx[1112] + xx[1138] + xx[1039] +
    xx[19] * (xx[1141] + xx[1628] * xx[512]) + xx[1041] * ((xx[1625] * xx[1047]
    + xx[1051]) * xx[19] - xx[16]) - (xx[1084] * xx[1046] + xx[1075] * xx[1087])
    + (xx[1110] + (xx[1149] - xx[1628] * xx[1102]) * xx[19] + xx[1132] + xx[19] *
       (xx[1152] + xx[1628] * xx[1128])) * xx[19]) + (xx[1144] + xx[19] * (xx
    [1155] - xx[488] * xx[163]) - xx[490] + xx[664]) * inputDdot[6]) - xx[1245] *
    xx[9] - xx[1137] * xx[257] - xx[1130] * xx[323] - xx[1249] * xx[431] - xx
    [1129] * xx[555] - xx[1135] * xx[556] + xx[1197] * xx[557] + xx[1192] * xx
    [1054] + (xx[1185] + xx[1087] + (xx[1198] - xx[1628] * xx[790]) * xx[19] -
              xx[19] * (xx[1625] * xx[1050] + xx[1052])) * inputDdot[9] - xx
    [1726] * xx[1092] + xx[1220] * xx[558] + xx[1272] * xx[1091] + xx[1636] *
    xx[1120];
  xx[742] = xx[1221] * xx[29] - (xx[483] + xx[469] + xx[486] + xx[1022] + xx
    [1025] + xx[347] + (xx[473] * xx[163] + xx[1035]) * xx[19] - (xx[709] + xx
    [489] * xx[166] + xx[206] * xx[490]) + (xx[1032] + xx[19] * (xx[1044] - xx
    [1007] * xx[163]) + xx[530]) * xx[19] - (xx[1113] + xx[1139] + xx[535] +
    (xx[1142] - xx[1628] * xx[967]) * xx[19] + (xx[1052] - xx[1047] * xx[1267]) *
    xx[19] * xx[1041] - (xx[1084] * xx[478] + xx[1049] * xx[1087]) + ((xx[1150]
    - xx[1628] * xx[1109]) * xx[19] - xx[1076] + xx[1124] + (xx[1153] - xx[1628]
    * xx[1131]) * xx[19]) * xx[19]) + (xx[1145] + xx[489] + xx[19] * (xx[1156] -
    xx[491] * xx[163]) - xx[20] + xx[16]) * inputDdot[6]) - xx[1302] * xx[9] -
    xx[1311] * xx[257] - xx[1312] * xx[323] - xx[1233] * xx[431] - xx[1293] *
    xx[555] - xx[1306] * xx[556] + xx[1298] * xx[557] + xx[1181] * xx[1054] +
    (xx[1186] + (xx[1199] - xx[1628] * xx[1037]) * xx[19] - (xx[1084] - (xx[1051]
       + xx[1050] * xx[1267]) * xx[19]) - xx[16]) * inputDdot[9] - xx[1092] *
    xx[1308] + xx[1188] * xx[558] + xx[1297] * xx[1091] + xx[1307] * xx[1120];
  xx[743] = xx[29] * xx[1125] - (xx[484] + xx[470] + xx[487] + xx[1023] + xx
    [1026] + (xx[163] * xx[476] + xx[1036]) * xx[19] + xx[400] - (xx[489] * xx
    [222] + xx[223] * xx[490]) + ((xx[1031] * xx[163] + xx[1045]) * xx[19] + xx
    [531]) * xx[19] - (xx[1114] + xx[1140] + (xx[1628] * xx[1040] + xx[1143]) *
                       xx[19] + xx[19] * (xx[1048] * xx[1267] + xx[1176]) * xx
                       [1041] - (xx[1104] * xx[1087] - xx[1084] * xx[1106]) +
                       (xx[19] * (xx[1151] - xx[1628] * xx[1119]) + (xx[1628] *
    xx[1134] + xx[1154]) * xx[19]) * xx[19]) + (xx[1146] + (xx[966] * xx[163] +
    xx[1157]) * xx[19] + xx[271]) * inputDdot[6]) - xx[1218] * xx[9] - xx[1232] *
    xx[257] - xx[1241] * xx[323] - xx[1189] * xx[431] - xx[1216] * xx[555] - xx
    [1230] * xx[556] + xx[1217] * xx[557] + xx[1126] * xx[1054] + (xx[1187] +
    xx[19] * (xx[1200] - xx[1628] * xx[1038]) + (xx[1625] * xx[1048] - xx[1628] *
    xx[1050]) * xx[19]) * inputDdot[9] - xx[1092] * xx[1237] + xx[1127] * xx[558]
    + xx[1196] * xx[1091] + xx[1236] * xx[1120];
  xx[744] = xx[29] * xx[1324] - (xx[359] + xx[342] + xx[348] + xx[362] + xx[1182]
    + xx[207] + xx[19] * (xx[1201] - xx[353] * xx[163]) + xx[419] - (xx[389] *
    xx[441] + xx[499] * xx[406]) + (xx[19] * (xx[1213] - xx[1170] * xx[163]) -
    xx[1193] + xx[1238]) * xx[19] - (xx[1246] + xx[1273] + xx[1148] + xx[19] *
    (xx[1276] - xx[1769] * xx[1]) + xx[1164] * ((xx[1765] * xx[1194] + xx[1204])
    * xx[19] - xx[16]) - (xx[1229] * xx[1173] - xx[1231] * xx[1235]) + (xx[1258]
    + (xx[1769] * xx[1244] + xx[1284]) * xx[19] + xx[1270] + xx[19] * (xx[1287]
    - xx[1769] * xx[1266])) * xx[19]) + (xx[1280] + xx[19] * (xx[1290] - xx[365]
    * xx[163]) - xx[406] + xx[664]) * inputDdot[6]) - xx[1380] * xx[9] - xx[1271]
    * xx[257] - xx[1264] * xx[323] - xx[1384] * xx[431] - xx[1263] * xx[555] -
    xx[1269] * xx[556] + xx[1331] * xx[557] + xx[1340] * xx[896] + (xx[1205] +
    xx[1235] + (xx[1769] * xx[54] + xx[1319]) * xx[19] + xx[19] * (xx[1765] *
    xx[1208] + xx[1210])) * inputDdot[10] - xx[1250] * xx[1886] + xx[141] * xx
    [143] + xx[142] * xx[1228] + xx[1403] * xx[1295];
  xx[745] = xx[1356] * xx[29] - (xx[360] + xx[343] + xx[349] + xx[363] + xx[1183]
    + xx[345] + (xx[355] * xx[163] + xx[1202]) * xx[19] - (xx[709] + xx[389] *
    xx[166] + xx[206] * xx[406]) + (xx[1191] + xx[19] * (xx[1214] - xx[1179] *
    xx[163]) + xx[1239]) * xx[19] - (xx[1247] + xx[1274] + xx[474] + (xx[1769] *
    xx[53] + xx[1277]) * xx[19] + (xx[1194] * xx[1402] - xx[1210]) * xx[19] *
    xx[1164] - (xx[1229] * xx[408] + xx[1212] * xx[1235]) + ((xx[1769] * xx[1257]
    + xx[1285]) * xx[19] - xx[1211] + xx[1265] + (xx[1769] * xx[1268] + xx[1288])
    * xx[19]) * xx[19]) + (xx[1281] + xx[389] + xx[19] * (xx[1291] - xx[368] *
    xx[163]) - xx[20] + xx[16]) * inputDdot[6]) - xx[1437] * xx[9] - xx[1446] *
    xx[257] - xx[1447] * xx[323] - xx[1368] * xx[431] - xx[1428] * xx[555] - xx
    [1441] * xx[556] + xx[1433] * xx[557] + xx[1315] * xx[896] + (xx[1206] +
    (xx[1769] * xx[481] + xx[1320]) * xx[19] - (xx[1229] - (xx[1204] + xx[1208] *
    xx[1402]) * xx[19]) - xx[16]) * inputDdot[10] - xx[1250] * xx[1443] + xx
    [1322] * xx[143] + xx[1432] * xx[1228] + xx[1442] * xx[1295];
  xx[746] = xx[29] * xx[1259] - (xx[361] + xx[344] + xx[350] + xx[364] + xx[1184]
    + (xx[366] * xx[163] + xx[1203]) * xx[19] + xx[400] - (xx[389] * xx[222] +
    xx[223] * xx[406]) + ((xx[1180] * xx[163] + xx[1215]) * xx[19] + xx[1240]) *
    xx[19] - (xx[1248] + xx[1275] + (xx[1278] - xx[1769] * xx[367]) * xx[19] +
              xx[19] * (xx[1195] * xx[1402] + xx[1317]) * xx[1164] - (xx[1242] *
    xx[1235] - xx[1229] * xx[1243]) + (xx[19] * (xx[1286] - xx[1262] * xx[1769])
    + (xx[1289] - xx[1769] * xx[1279]) * xx[19]) * xx[19]) + (xx[1282] + (xx
    [1122] * xx[163] + xx[1292]) * xx[19] + xx[271]) * inputDdot[6]) - xx[1353] *
    xx[9] - xx[1367] * xx[257] - xx[1376] * xx[323] - xx[1323] * xx[431] - xx
    [1351] * xx[555] - xx[1365] * xx[556] + xx[1352] * xx[557] + xx[1260] * xx
    [896] + (xx[1207] + xx[19] * (xx[1321] - xx[651] * xx[1769]) + (xx[1769] *
              xx[1208] - xx[1765] * xx[1195]) * xx[19]) * inputDdot[10] - xx
    [1250] * xx[1355] + xx[1261] * xx[143] + xx[1330] * xx[1228] + xx[1371] *
    xx[1295];
  xx[747] = (xx[1341] + xx[1338] + (xx[1357] - xx[2] * xx[1327]) * xx[19] + xx
             [19] * (xx[10] * xx[1347] - xx[1349])) * inputDdot[7] - (xx[31] +
    xx[153] + xx[19] * (xx[732] - xx[308] * xx[152]) + xx[196] + xx[219] + xx
    [300] + xx[170] + xx[19] * (xx[303] - xx[202] * xx[163]) + xx[419] - (xx[218]
    * xx[441] + xx[499] * xx[224]) + (xx[19] * (xx[334] - xx[297] * xx[163]) -
    xx[307] + xx[309]) * xx[19] - (xx[74] + xx[69] + xx[56] + xx[19] * (xx[131]
    + xx[2] * xx[55]) + xx[126] * ((xx[10] * xx[128] + xx[129]) * xx[19] - xx[16])
    - (xx[1344] * xx[252] + xx[296] * xx[1338]) + (xx[130] + (xx[652] - xx[2] *
    xx[117]) * xx[19] + xx[157] + xx[19] * (xx[589] + xx[2] * xx[136])) * xx[19]))
    - xx[13] * xx[1919] + xx[147] * xx[5] + xx[933] * xx[25] + xx[57] * xx[26] -
    (xx[35] + xx[19] * (xx[83] - xx[21] * xx[163]) - xx[224] + xx[664]) *
    inputDdot[6] + xx[29] * xx[1450] - xx[459] * xx[9] - xx[185] * xx[257] - xx
    [247] * xx[323] - xx[623] * xx[431] - xx[184] * xx[555] - xx[182] * xx[556]
    + xx[292] * xx[557] + xx[1457] * xx[45];
  xx[748] = (xx[1342] + (xx[1358] - xx[2] * xx[1345]) * xx[19] - (xx[1344] -
              (xx[129] + xx[1347] * xx[8]) * xx[19]) - xx[16]) * inputDdot[7] -
    (xx[32] + xx[167] + (xx[308] * xx[168] + xx[733]) * xx[19] + xx[197] + xx
     [220] + xx[301] + xx[187] + (xx[203] * xx[163] + xx[304]) * xx[19] - (xx
      [709] + xx[218] * xx[166] + xx[206] * xx[224]) + (xx[306] + xx[19] * (xx
       [335] - xx[298] * xx[163]) + xx[310]) * xx[19] - (xx[75] + xx[70] + xx[59]
      + (xx[132] - xx[2] * xx[61]) * xx[19] + (xx[1349] + xx[128] * xx[8]) * xx
      [19] * xx[126] - (xx[49] * xx[1338] - xx[1344] * xx[72]) + ((xx[653] - xx
        [2] * xx[118]) * xx[19] - xx[0] + xx[134] + (xx[590] - xx[2] * xx[137]) *
       xx[19]) * xx[19])) - xx[13] * xx[138] + xx[1483] * xx[5] + xx[1931] * xx
    [25] + xx[1934] * xx[26] - (xx[36] + xx[218] + xx[19] * (xx[84] - xx[27] *
    xx[163]) - xx[20] + xx[16]) * inputDdot[6] + xx[612] * xx[29] - xx[1497] *
    xx[9] - xx[1515] * xx[257] - xx[1537] * xx[323] - xx[1440] * xx[431] - xx
    [1487] * xx[555] - xx[1498] * xx[556] + xx[613] * xx[557] + xx[1431] * xx[45];
  xx[749] = (xx[1343] + xx[19] * (xx[1359] - xx[1346] * xx[2]) + (xx[2] * xx
              [1347] + xx[10] * xx[1348]) * xx[19]) * inputDdot[7] - (xx[33] +
    (xx[308] * xx[169] + xx[734]) * xx[19] + xx[198] + xx[221] + xx[302] + (xx
    [163] * xx[210] + xx[305]) * xx[19] + xx[400] - (xx[218] * xx[222] + xx[223]
    * xx[224]) + ((xx[299] * xx[163] + xx[336]) * xx[19] + xx[311]) * xx[19] -
    (xx[76] + xx[71] + (xx[133] - xx[2] * xx[62]) * xx[19] + xx[19] * (xx[274] -
    xx[1348] * xx[8]) * xx[126] - (xx[1344] * xx[77] - xx[127] * xx[1338]) +
     (xx[19] * (xx[654] - xx[119] * xx[2]) + (xx[591] - xx[2] * xx[6]) * xx[19])
     * xx[19])) - xx[13] * xx[135] + xx[144] * xx[5] + xx[145] * xx[25] + xx[146]
    * xx[26] - (xx[37] + (xx[38] * xx[163] + xx[85]) * xx[19] + xx[271]) *
    inputDdot[6] + xx[1394] * xx[29] - xx[782] * xx[9] - xx[784] * xx[257] - xx
    [791] * xx[323] - xx[1424] * xx[431] - xx[1469] * xx[555] - xx[1471] * xx
    [556] + xx[1395] * xx[557] + xx[1396] * xx[45];
  memcpy(xx + 2327, xx + 2102, 225 * sizeof(double));
  factorAndSolveSymmetric(xx + 2327, 15, xx + 808, ii + 0, xx + 735, xx + 296,
    xx + 2552);
  xx[0] = - (xx[48] + xx[147] * xx[308] + xx[1483] * xx[309] + xx[144] * xx[310]);
  xx[1] = - (xx[159] + xx[933] * xx[308] + xx[1931] * xx[309] + xx[145] * xx[310]);
  xx[2] = - (xx[82] + xx[57] * xx[308] + xx[1934] * xx[309] + xx[146] * xx[310]);
  solveSymmetricPosDef(xx + 100, xx + 0, 3, 1, xx + 4, xx + 8);
  xx[0] = xx[87] + xx[78] * xx[4] + xx[140] * xx[5];
  xx[1] = xx[88] - xx[713] * xx[4] + xx[79] * xx[5];
  xx[2] = xx[81] + xx[80] * xx[6];
  pm_math_quatXform(xx + 63, xx + 0, xx + 8);
  xx[0] = xx[123] + xx[731] * xx[4] - xx[806] * xx[5] - xx[870] * xx[6];
  xx[1] = xx[124] + xx[806] * xx[4] + xx[731] * xx[5] + xx[908] * xx[6];
  xx[2] = xx[47] + xx[909] * xx[4] + xx[927] * xx[5];
  pm_math_quatXform(xx + 63, xx + 0, xx + 25);
  pm_math_cross3(xx + 114, xx + 25, xx + 0);
  xx[0] = (xx[58] + xx[10] + xx[2] + xx[125] + (xx[26] + xx[43]) * xx[1906] -
           (xx[25] + xx[44]) * xx[1907] + xx[1919] * xx[308] + xx[138] * xx[309]
           + xx[135] * xx[310]) / xx[1923] + xx[12];
  xx[29] = state[2];
  xx[30] = state[3];
  xx[31] = state[4];
  xx[32] = state[5];
  xx[8] = state[6];
  xx[9] = state[7];
  xx[10] = state[8];
  pm_math_quatDeriv(xx + 29, xx + 8, xx + 33);
  xx[8] = xx[15];
  xx[9] = xx[18];
  xx[10] = xx[243] - xx[0];
  pm_math_quatInverseXform(xx + 63, xx + 8, xx + 15);
  pm_math_cross3(xx + 8, xx + 114, xx + 25);
  xx[8] = xx[14] + xx[0] * xx[1907] + xx[46] + xx[25];
  xx[9] = xx[11] - xx[0] * xx[1906] + xx[272] + xx[26];
  xx[10] = xx[24] + xx[27];
  pm_math_quatInverseXform(xx + 63, xx + 8, xx + 11);
  xx[1] = (xx[1457] * xx[308] + xx[1431] * xx[309] + xx[1396] * xx[310] - xx[418])
    / xx[358];
  xx[2] = xx[550] + xx[357] * xx[1];
  xx[8] = xx[563] - xx[398] * xx[1];
  xx[9] = xx[8] * xx[356];
  xx[10] = xx[2] * xx[356];
  xx[14] = xx[2] + xx[19] * (xx[352] * xx[9] - xx[10] * xx[356]);
  xx[2] = xx[8] - (xx[352] * xx[10] + xx[9] * xx[356]) * xx[19];
  xx[8] = xx[14];
  xx[9] = xx[2];
  xx[10] = xx[545];
  pm_math_cross3(xx + 1398, xx + 8, xx + 24);
  xx[8] = (xx[1340] * xx[305] + xx[1315] * xx[306] + xx[1260] * xx[307] - xx[547])
    / xx[346];
  xx[29] = xx[452];
  xx[30] = xx[460];
  xx[31] = xx[1301] - xx[52] * xx[8];
  pm_math_quatXform(xx + 402, xx + 29, xx + 37);
  xx[29] = xx[562] + xx[373] * xx[8];
  xx[30] = xx[611] - xx[370] * xx[8];
  xx[31] = xx[656];
  pm_math_quatXform(xx + 402, xx + 29, xx + 40);
  pm_math_cross3(xx + 412, xx + 40, xx + 29);
  xx[9] = (xx[1192] * xx[302] + xx[1181] * xx[303] + xx[1126] * xx[304] - xx[660])
    / xx[471];
  xx[43] = xx[588];
  xx[44] = xx[657];
  xx[45] = xx[1436] - xx[52] * xx[9];
  pm_math_quatXform(xx + 525, xx + 43, xx + 46);
  xx[43] = xx[680] + xx[493] * xx[9];
  xx[44] = xx[783] + xx[496] * xx[9];
  xx[45] = xx[792];
  pm_math_quatXform(xx + 525, xx + 43, xx + 53);
  pm_math_cross3(xx + 536, xx + 53, xx + 43);
  xx[10] = (xx[912] * xx[299] + xx[840] * xx[300] + xx[751] * xx[301] - xx[805])
    / xx[235];
  xx[56] = xx[763];
  xx[57] = xx[793];
  xx[58] = xx[1477] + xx[52] * xx[10];
  pm_math_quatXform(xx + 615, xx + 56, xx + 59);
  xx[56] = xx[839] - xx[585] * xx[10];
  xx[57] = xx[807] + xx[582] * xx[10];
  xx[58] = xx[905];
  pm_math_quatXform(xx + 615, xx + 56, xx + 62);
  pm_math_cross3(xx + 626, xx + 62, xx + 56);
  xx[18] = (xx[242] * xx[296] + xx[288] * xx[297] + xx[227] * xx[298] + xx[838])
    / xx[326];
  xx[20] = xx[1074] - xx[325] * xx[18];
  xx[21] = xx[1079] - xx[337] * xx[18];
  xx[27] = xx[21] * xx[205];
  xx[32] = xx[20] * xx[205];
  xx[49] = xx[20] + xx[19] * (xx[193] * xx[27] - xx[32] * xx[205]);
  xx[20] = xx[21] - (xx[193] * xx[32] + xx[27] * xx[205]) * xx[19];
  xx[69] = xx[49];
  xx[70] = xx[20];
  xx[71] = xx[1010];
  pm_math_cross3(xx + 244, xx + 69, xx + 74);
  xx[21] = xx[1095] + xx[544] + xx[24] + xx[37] + xx[29] + xx[46] + xx[43] + xx
    [59] + xx[56] + xx[1000] + xx[74] + xx[327];
  xx[27] = xx[1097] + xx[1175] - xx[52] * xx[1] + xx[26] + xx[39] + xx[31] + xx
    [48] + xx[45] + xx[61] + xx[58] + xx[1496] - xx[52] * xx[18] + xx[76] + xx
    [375];
  xx[32] = xx[2] + xx[41] + xx[54] + xx[63] + xx[20] + xx[384];
  xx[2] = (xx[312] * xx[296] + xx[281] * xx[297] + xx[226] * xx[298] + xx[944] *
           xx[299] + xx[1163] * xx[300] + xx[947] * xx[301] + xx[1197] * xx[302]
           + xx[1298] * xx[303] + xx[1217] * xx[304] + xx[1331] * xx[305] + xx
           [1433] * xx[306] + xx[1352] * xx[307] + xx[292] * xx[308] + xx[613] *
           xx[309] + xx[1395] * xx[310] + xx[21] * xx[195] + xx[27] * xx[201] +
           xx[32] * xx[291]) / xx[456];
  xx[69] = xx[21] + xx[2] * xx[409];
  xx[70] = xx[1096] + xx[387] + xx[25] + xx[38] + xx[30] + xx[47] + xx[44] + xx
    [60] + xx[57] + xx[391] + xx[75] + xx[395] + xx[513] * xx[2];
  xx[71] = xx[27] - xx[354] * xx[2];
  pm_math_quatXform(xx + 214, xx + 69, xx + 24);
  xx[29] = xx[14] + xx[40] + xx[53] + xx[62] + xx[49] + xx[329] + xx[392] * xx[2];
  xx[30] = xx[32] + xx[437] * xx[2];
  xx[31] = xx[545] + xx[42] + xx[55] + xx[64] + xx[1010] + xx[376] + xx[2] * xx
    [424];
  pm_math_quatXform(xx + 214, xx + 29, xx + 37);
  pm_math_cross3(xx + 551, xx + 37, xx + 29);
  xx[14] = xx[1065] + xx[24] + xx[29] + xx[385];
  xx[20] = xx[38] + xx[388];
  xx[21] = xx[39] + xx[410];
  xx[27] = xx[1066] + xx[25] + xx[30] + xx[417];
  xx[32] = xx[37] + xx[420];
  xx[24] = xx[1067] + xx[26] + xx[31] + xx[377];
  xx[29] = xx[554] * xx[296] + xx[996] * xx[297] + xx[283] * xx[298] + xx[1115] *
    xx[299] + xx[1158] * xx[300] + xx[943] * xx[301] + xx[1249] * xx[302] + xx
    [1233] * xx[303] + xx[1189] * xx[304] + xx[1384] * xx[305] + xx[1368] * xx
    [306] + xx[1323] * xx[307] + xx[623] * xx[308] + xx[1440] * xx[309] + xx
    [1424] * xx[310] - (xx[14] - (xx[20] * xx[230] + xx[21] * xx[229]));
  xx[30] = xx[186] * xx[296] + xx[997] * xx[297] + xx[289] * xx[298] + xx[700] *
    xx[299] + xx[1159] * xx[300] + xx[948] * xx[301] + xx[1129] * xx[302] + xx
    [1293] * xx[303] + xx[1216] * xx[304] + xx[1263] * xx[305] + xx[1428] * xx
    [306] + xx[1351] * xx[307] + xx[184] * xx[308] + xx[1487] * xx[309] + xx
    [1469] * xx[310] - (xx[27] + xx[32] * xx[230] - xx[21] * xx[228]);
  xx[31] = xx[250] * xx[296] + xx[1009] * xx[297] + xx[295] * xx[298] + xx[650] *
    xx[299] + xx[1162] * xx[300] + xx[1098] * xx[301] + xx[1135] * xx[302] + xx
    [1306] * xx[303] + xx[1230] * xx[304] + xx[1269] * xx[305] + xx[1441] * xx
    [306] + xx[1365] * xx[307] + xx[182] * xx[308] + xx[1498] * xx[309] + xx
    [1471] * xx[310] - (xx[24] + xx[32] * xx[229] + xx[20] * xx[228]);
  solveSymmetricPosDef(xx + 592, xx + 29, 3, 1, xx + 37, xx + 40);
  xx[29] = xx[14] + xx[421] * xx[37] + xx[433] * xx[38] + xx[454] * xx[39];
  xx[30] = xx[27] + xx[500] * xx[37] + xx[506] * xx[38] + xx[515] * xx[39];
  xx[31] = xx[24] + xx[540] * xx[37] + xx[443] * xx[38] + xx[521] * xx[39];
  pm_math_quatXform(xx + 188, xx + 29, xx + 24);
  xx[29] = xx[32] + xx[248] * xx[37] + xx[511] * xx[38] + xx[509] * xx[39];
  xx[30] = xx[20] + xx[423] * xx[37] + xx[436] * xx[38] + xx[498] * xx[39];
  xx[31] = xx[21] + xx[427] * xx[37] + xx[439] * xx[38] + xx[504] * xx[39];
  pm_math_quatXform(xx + 188, xx + 29, xx + 40);
  pm_math_cross3(xx + 444, xx + 40, xx + 29);
  xx[14] = xx[1002] + xx[24] + xx[29] + xx[251];
  xx[20] = xx[1003] + xx[25] + xx[30] + xx[328];
  xx[21] = xx[40] + xx[322];
  xx[27] = xx[41] + xx[324];
  xx[32] = xx[42] + xx[386];
  xx[40] = xx[21];
  xx[41] = xx[27];
  xx[42] = xx[32];
  xx[24] = xx[1004] + xx[26] + xx[31] + xx[416];
  xx[29] = xx[771] * xx[296] + xx[1008] * xx[297] + xx[294] * xx[298] + xx[1111]
    * xx[299] + xx[1161] * xx[300] + xx[949] * xx[301] + xx[1245] * xx[302] +
    xx[1302] * xx[303] + xx[1218] * xx[304] + xx[1380] * xx[305] + xx[1437] *
    xx[306] + xx[1353] * xx[307] + xx[459] * xx[308] + xx[1497] * xx[309] + xx
    [782] * xx[310] - (xx[14] - xx[20] * xx[89] + pm_math_dot3(xx + 111, xx + 40));
  xx[30] = xx[263] * xx[296] + xx[1042] * xx[297] + xx[548] * xx[298] + xx[802] *
    xx[299] + xx[1177] * xx[300] + xx[1103] * xx[301] + xx[1137] * xx[302] + xx
    [1311] * xx[303] + xx[1232] * xx[304] + xx[1271] * xx[305] + xx[1446] * xx
    [306] + xx[1367] * xx[307] + xx[185] * xx[308] + xx[1515] * xx[309] + xx[784]
    * xx[310] - (xx[14] * xx[89] + xx[20] + pm_math_dot3(xx + 753, xx + 40));
  xx[31] = xx[173] * xx[296] + xx[1077] * xx[297] + xx[549] * xx[298] + xx[789] *
    xx[299] + xx[1178] * xx[300] + xx[1107] * xx[301] + xx[1130] * xx[302] + xx
    [1312] * xx[303] + xx[1241] * xx[304] + xx[1264] * xx[305] + xx[1447] * xx
    [306] + xx[1376] * xx[307] + xx[247] * xx[308] + xx[1537] * xx[309] + xx[791]
    * xx[310] - (xx[24] + xx[27] * xx[67] - xx[21] * xx[68]);
  solveSymmetricPosDef(xx + 773, xx + 29, 3, 1, xx + 40, xx + 43);
  xx[29] = xx[14] + xx[663] * xx[40] + xx[692] * xx[41] + xx[765] * xx[42];
  xx[30] = xx[20] + xx[687] * xx[40] + xx[695] * xx[41] + xx[767] * xx[42];
  xx[31] = xx[24] + xx[273] * xx[40] + xx[447] * xx[41] + xx[715] * xx[42];
  pm_math_quatXform(xx + 178, xx + 29, xx + 24);
  xx[29] = xx[21] + xx[693] * xx[40] + xx[723] * xx[41] + xx[768] * xx[42];
  xx[30] = xx[27] + xx[694] * xx[40] + xx[727] * xx[41] + xx[769] * xx[42];
  xx[31] = xx[32] + xx[690] * xx[40] + xx[759] * xx[41] + xx[770] * xx[42];
  pm_math_quatXform(xx + 178, xx + 29, xx + 43);
  pm_math_cross3(xx + 277, xx + 43, xx + 29);
  xx[14] = (xx[290] * xx[296] + xx[953] * xx[297] + xx[225] * xx[298] + xx[911] *
            xx[299] + xx[1086] * xx[300] + xx[750] * xx[301] + xx[1190] * xx[302]
            + xx[1221] * xx[303] + xx[1125] * xx[304] + xx[1324] * xx[305] + xx
            [1356] * xx[306] + xx[1259] * xx[307] + xx[1450] * xx[308] + xx[612]
            * xx[309] + xx[1394] * xx[310] - (xx[546] + xx[26] + xx[31] + xx[171]
             - ((xx[43] + xx[172]) * xx[280] + (xx[44] + xx[174]) * xx[276]))) /
    xx[655] - xx[7];
  xx[24] = state[11];
  xx[25] = state[12];
  xx[26] = state[13];
  xx[27] = state[14];
  xx[29] = state[15];
  xx[30] = state[16];
  xx[31] = state[17];
  pm_math_quatDeriv(xx + 24, xx + 29, xx + 43);
  xx[24] = xx[665];
  xx[25] = xx[23];
  xx[26] = xx[28] + xx[14];
  pm_math_quatInverseXform(xx + 178, xx + 24, xx + 27);
  pm_math_cross3(xx + 24, xx + 277, xx + 30);
  xx[23] = xx[22] - xx[280] * xx[14] + xx[176] + xx[30];
  xx[24] = xx[3] - xx[276] * xx[14] + xx[442] + xx[31];
  xx[25] = xx[151] + xx[32];
  pm_math_quatInverseXform(xx + 178, xx + 23, xx + 20);
  xx[3] = xx[40] - (pm_math_dot3(xx + 684, xx + 27) + pm_math_dot3(xx + 724, xx
    + 20));
  xx[7] = xx[41] - (pm_math_dot3(xx + 756, xx + 27) + pm_math_dot3(xx + 883, xx
    + 20));
  xx[23] = xx[42] - (pm_math_dot3(xx + 886, xx + 27) + pm_math_dot3(xx + 829, xx
    + 20));
  xx[52] = state[18];
  xx[53] = state[19];
  xx[54] = state[20];
  xx[55] = state[21];
  pm_math_quatDeriv(xx + 52, xx + 1080, xx + 56);
  xx[24] = xx[27] + xx[3] + xx[89] * xx[7] + xx[1088];
  xx[25] = xx[28] - xx[89] * xx[3] + xx[7] + xx[1089];
  xx[26] = xx[29] + xx[23] + xx[1090];
  pm_math_quatInverseXform(xx + 188, xx + 24, xx + 27);
  pm_math_cross3(xx + 24, xx + 444, xx + 30);
  xx[24] = xx[20] + xx[90] * xx[3] - xx[109] * xx[7] - xx[68] * xx[23] + xx[177]
    + xx[30];
  xx[25] = xx[21] + xx[109] * xx[3] + xx[90] * xx[7] + xx[67] * xx[23] + xx[183]
    + xx[31];
  xx[26] = xx[22] + xx[110] * xx[3] + xx[691] * xx[7] + xx[239] + xx[32];
  pm_math_quatInverseXform(xx + 188, xx + 24, xx + 20);
  xx[24] = xx[37] - (pm_math_dot3(xx + 719, xx + 27) + pm_math_dot3(xx + 835, xx
    + 20));
  xx[25] = xx[38] - (pm_math_dot3(xx + 728, xx + 27) + pm_math_dot3(xx + 841, xx
    + 20));
  xx[26] = xx[39] - (pm_math_dot3(xx + 844, xx + 27) + pm_math_dot3(xx + 696, xx
    + 20));
  xx[30] = xx[27] + xx[24] + xx[1167];
  xx[31] = xx[28] + xx[25] + xx[1168];
  xx[32] = xx[29] + xx[26] + xx[1169];
  pm_math_quatInverseXform(xx + 214, xx + 30, xx + 27);
  pm_math_cross3(xx + 30, xx + 551, xx + 37);
  xx[30] = xx[20] + xx[230] * xx[25] + xx[229] * xx[26] + xx[314] + xx[37];
  xx[31] = xx[21] - xx[230] * xx[24] + xx[228] * xx[26] + xx[316] + xx[38];
  xx[32] = xx[22] - xx[229] * xx[24] - xx[228] * xx[25] + xx[317] + xx[39];
  pm_math_quatInverseXform(xx + 214, xx + 30, xx + 20);
  xx[30] = xx[2] - (pm_math_dot3(xx + 638, xx + 27) + pm_math_dot3(xx + 381, xx
    + 20));
  xx[2] = xx[29] - xx[201] * xx[30] + xx[415];
  xx[29] = xx[20] + xx[338];
  xx[37] = xx[27] - xx[195] * xx[30] - xx[380];
  xx[38] = xx[28] + xx[390];
  xx[39] = xx[2];
  pm_math_cross3(xx + 37, xx + 244, xx + 40);
  xx[20] = xx[29] + xx[40];
  xx[27] = xx[21] - xx[291] * xx[30] + xx[1006];
  xx[21] = xx[27] + xx[41];
  xx[28] = xx[21] * xx[205];
  xx[31] = xx[20] * xx[205];
  pm_math_quatInverseXform(xx + 615, xx + 37, xx + 40);
  pm_math_cross3(xx + 37, xx + 626, xx + 47);
  xx[32] = xx[22] + xx[372];
  xx[52] = xx[29] + xx[47];
  xx[53] = xx[27] + xx[48];
  xx[54] = xx[32] + xx[49];
  pm_math_quatInverseXform(xx + 615, xx + 52, xx + 47);
  pm_math_cross3(xx + 37, xx + 536, xx + 52);
  xx[60] = xx[29] + xx[52];
  xx[61] = xx[27] + xx[53];
  xx[62] = xx[32] + xx[54];
  pm_math_quatInverseXform(xx + 525, xx + 60, xx + 52);
  pm_math_quatInverseXform(xx + 525, xx + 37, xx + 60);
  pm_math_cross3(xx + 37, xx + 412, xx + 63);
  xx[66] = xx[29] + xx[63];
  xx[67] = xx[27] + xx[64];
  xx[68] = xx[32] + xx[65];
  pm_math_quatInverseXform(xx + 402, xx + 66, xx + 63);
  pm_math_quatInverseXform(xx + 402, xx + 37, xx + 65);
  pm_math_cross3(xx + 37, xx + 1398, xx + 68);
  xx[22] = xx[29] + xx[68];
  xx[29] = xx[27] + xx[69];
  xx[27] = xx[29] * xx[356];
  xx[32] = xx[22] * xx[356];
  xx[37] = - (xx[961] + xx[148] * xx[299] + xx[906] * xx[300] + xx[752] * xx[301]);
  xx[38] = - (xx[968] + xx[162] * xx[299] + xx[1166] * xx[300] + xx[942] * xx
              [301]);
  xx[39] = - (xx[939] + xx[1504] * xx[299] + xx[1171] * xx[300] + xx[1099] * xx
              [301]);
  solveSymmetricPosDef(xx + 1562, xx + 37, 3, 1, xx + 68, xx + 74);
  xx[37] = xx[930] + xx[78] * xx[68] + xx[140] * xx[69];
  xx[38] = xx[931] - xx[713] * xx[68] + xx[79] * xx[69];
  xx[39] = xx[938] + xx[80] * xx[70];
  pm_math_quatXform(xx + 1520, xx + 37, xx + 74);
  xx[37] = xx[467] + xx[731] * xx[68] - xx[806] * xx[69] - xx[870] * xx[70];
  xx[38] = xx[477] + xx[806] * xx[68] + xx[731] * xx[69] + xx[908] * xx[70];
  xx[39] = xx[932] + xx[909] * xx[68] + xx[927] * xx[69];
  pm_math_quatXform(xx + 1520, xx + 37, xx + 81);
  pm_math_cross3(xx + 1524, xx + 81, xx + 37);
  xx[37] = (xx[1030] + xx[76] + xx[39] + xx[564] + (xx[81] + xx[785]) * xx[1546]
            + (xx[82] + xx[910]) * xx[1541] + xx[1556] * xx[299] + xx[1172] *
            xx[300] + xx[1100] * xx[301]) / xx[1606] + xx[860];
  xx[38] = state[39];
  xx[39] = state[40];
  xx[40] = state[41];
  xx[41] = state[42];
  xx[74] = state[43];
  xx[75] = state[44];
  xx[76] = state[45];
  pm_math_quatDeriv(xx + 38, xx + 74, xx + 81);
  xx[38] = xx[864];
  xx[39] = xx[940];
  xx[40] = xx[1020] - xx[37];
  pm_math_quatInverseXform(xx + 1520, xx + 38, xx + 74);
  pm_math_cross3(xx + 38, xx + 1524, xx + 85);
  xx[38] = xx[863] - xx[37] * xx[1546] + xx[946] + xx[85];
  xx[39] = xx[861] - xx[37] * xx[1541] + xx[1028] + xx[86];
  xx[40] = xx[945] + xx[87];
  pm_math_quatInverseXform(xx + 1520, xx + 38, xx + 85);
  xx[38] = - (xx[701] + xx[661] * xx[296] + xx[236] * xx[297] + xx[155] * xx[298]);
  xx[39] = - (xx[704] + xx[139] * xx[296] + xx[998] * xx[297] + xx[293] * xx[298]);
  xx[40] = - (xx[707] + xx[702] * xx[296] + xx[1001] * xx[297] + xx[318] * xx
              [298]);
  solveSymmetricPosDef(xx + 913, xx + 38, 3, 1, xx + 88, xx + 100);
  xx[38] = xx[683] + xx[78] * xx[88] + xx[140] * xx[89];
  xx[39] = xx[699] - xx[713] * xx[88] + xx[79] * xx[89];
  xx[40] = xx[706] + xx[80] * xx[90];
  pm_math_quatXform(xx + 889, xx + 38, xx + 100);
  xx[38] = xx[241] + xx[731] * xx[88] - xx[806] * xx[89] - xx[870] * xx[90];
  xx[39] = xx[268] + xx[806] * xx[88] + xx[731] * xx[89] + xx[908] * xx[90];
  xx[40] = xx[679] + xx[909] * xx[88] + xx[927] * xx[89];
  pm_math_quatXform(xx + 889, xx + 38, xx + 103);
  pm_math_cross3(xx + 893, xx + 103, xx + 38);
  xx[38] = (xx[1461] + xx[102] + xx[40] + xx[463] + (xx[103] + xx[560]) * xx[834]
            - (xx[104] + xx[571]) * xx[856] + xx[907] * xx[296] + xx[929] * xx
            [297] + xx[319] * xx[298]) / xx[1027] + xx[543];
  xx[100] = state[48];
  xx[101] = state[49];
  xx[102] = state[50];
  xx[103] = state[51];
  xx[39] = state[52];
  xx[40] = state[53];
  xx[41] = state[54];
  pm_math_quatDeriv(xx + 100, xx + 39, xx + 104);
  xx[39] = xx[678];
  xx[40] = xx[681];
  xx[41] = xx[717] - xx[38];
  pm_math_quatInverseXform(xx + 889, xx + 39, xx + 100);
  pm_math_cross3(xx + 39, xx + 893, xx + 108);
  xx[39] = xx[677] - xx[38] * xx[834] + xx[671] + xx[108];
  xx[40] = xx[667] + xx[38] * xx[856] + xx[710] + xx[109];
  xx[41] = xx[688] + xx[110];
  pm_math_quatInverseXform(xx + 889, xx + 39, xx + 108);
  xx[39] = - (xx[1136] + xx[1220] * xx[302] + xx[1188] * xx[303] + xx[1127] *
              xx[304]);
  xx[40] = - (xx[1147] + xx[1272] * xx[302] + xx[1297] * xx[303] + xx[1196] *
              xx[304]);
  xx[41] = - (xx[1117] + xx[1636] * xx[302] + xx[1307] * xx[303] + xx[1236] *
              xx[304]);
  solveSymmetricPosDef(xx + 1732, xx + 39, 3, 1, xx + 111, xx + 114);
  xx[39] = xx[1108] + xx[78] * xx[111] + xx[140] * xx[112];
  xx[40] = xx[1123] - xx[713] * xx[111] + xx[79] * xx[112];
  xx[41] = xx[1116] + xx[80] * xx[113];
  pm_math_quatXform(xx + 1701, xx + 39, xx + 114);
  xx[39] = xx[532] + xx[731] * xx[111] - xx[806] * xx[112] - xx[870] * xx[113];
  xx[40] = xx[941] + xx[806] * xx[111] + xx[731] * xx[112] + xx[908] * xx[113];
  xx[41] = xx[1105] + xx[909] * xx[111] + xx[927] * xx[112];
  pm_math_quatXform(xx + 1701, xx + 39, xx + 117);
  pm_math_cross3(xx + 1705, xx + 117, xx + 39);
  xx[39] = (xx[1209] + xx[116] + xx[41] + xx[965] - ((xx[117] + xx[1005]) * xx
             [1715] + (xx[118] + xx[1055]) * xx[1714]) + xx[1726] * xx[302] +
            xx[1308] * xx[303] + xx[1237] * xx[304]) / xx[1776] + xx[1053];
  xx[114] = state[57];
  xx[115] = state[58];
  xx[116] = state[59];
  xx[117] = state[60];
  xx[118] = state[61];
  xx[119] = state[62];
  xx[120] = state[63];
  pm_math_quatDeriv(xx + 114, xx + 118, xx + 121);
  xx[114] = xx[1094];
  xx[115] = xx[1101];
  xx[116] = xx[1165] - xx[39];
  pm_math_quatInverseXform(xx + 1701, xx + 114, xx + 117);
  pm_math_cross3(xx + 114, xx + 1705, xx + 125);
  xx[114] = xx[1093] + xx[39] * xx[1715] + xx[1083] + xx[125];
  xx[115] = xx[1078] + xx[39] * xx[1714] + xx[1174] + xx[126];
  xx[116] = xx[1118] + xx[127];
  pm_math_quatInverseXform(xx + 1701, xx + 114, xx + 125);
  xx[114] = - (xx[73] + xx[141] * xx[305] + xx[1322] * xx[306] + xx[1261] * xx
               [307]);
  xx[115] = - (xx[1294] + xx[142] * xx[305] + xx[1432] * xx[306] + xx[1330] *
               xx[307]);
  xx[116] = - (xx[1255] + xx[1403] * xx[305] + xx[1442] * xx[306] + xx[1371] *
               xx[307]);
  solveSymmetricPosDef(xx + 91, xx + 114, 3, 1, xx + 71, xx + 128);
  xx[91] = xx[411] + xx[78] * xx[71] + xx[140] * xx[72];
  xx[92] = xx[1283] - xx[713] * xx[71] + xx[79] * xx[72];
  xx[93] = xx[1254] + xx[80] * xx[73];
  pm_math_quatXform(xx + 1801, xx + 91, xx + 77);
  xx[91] = xx[50] + xx[731] * xx[71] - xx[806] * xx[72] - xx[870] * xx[73];
  xx[92] = xx[51] + xx[806] * xx[71] + xx[731] * xx[72] + xx[908] * xx[73];
  xx[93] = xx[407] + xx[909] * xx[71] + xx[927] * xx[72];
  pm_math_quatXform(xx + 1801, xx + 91, xx + 49);
  pm_math_cross3(xx + 1871, xx + 49, xx + 91);
  xx[40] = (xx[1337] + xx[79] + xx[93] + xx[1121] - ((xx[49] + xx[1160]) * xx
             [1835] + (xx[50] + xx[1222]) * xx[1824]) + xx[1886] * xx[305] + xx
            [1443] * xx[306] + xx[1355] * xx[307]) / xx[1898] + xx[1219];
  xx[77] = state[66];
  xx[78] = state[67];
  xx[79] = state[68];
  xx[80] = state[69];
  xx[49] = state[70];
  xx[50] = state[71];
  xx[51] = state[72];
  pm_math_quatDeriv(xx + 77, xx + 49, xx + 91);
  xx[49] = xx[1252];
  xx[50] = xx[1253];
  xx[51] = xx[1309] - xx[40];
  pm_math_quatInverseXform(xx + 1801, xx + 49, xx + 77);
  pm_math_cross3(xx + 49, xx + 1871, xx + 95);
  xx[49] = xx[1251] + xx[40] * xx[1835] + xx[1227] + xx[95];
  xx[50] = xx[1226] + xx[40] * xx[1824] + xx[1234] + xx[96];
  xx[51] = xx[1256] + xx[97];
  pm_math_quatInverseXform(xx + 1801, xx + 49, xx + 95);
  deriv[0] = state[1];
  deriv[1] = - xx[0];
  deriv[2] = xx[33];
  deriv[3] = xx[34];
  deriv[4] = xx[35];
  deriv[5] = xx[36];
  deriv[6] = xx[4] - (pm_math_dot3(xx + 1956, xx + 15) + pm_math_dot3(xx + 2087,
    xx + 11));
  deriv[7] = xx[5] - (pm_math_dot3(xx + 2093, xx + 15) + pm_math_dot3(xx + 2096,
    xx + 11));
  deriv[8] = xx[6] - (pm_math_dot3(xx + 2099, xx + 15) + pm_math_dot3(xx + 2042,
    xx + 11));
  deriv[9] = state[10];
  deriv[10] = xx[14];
  deriv[11] = xx[43];
  deriv[12] = xx[44];
  deriv[13] = xx[45];
  deriv[14] = xx[46];
  deriv[15] = xx[3];
  deriv[16] = xx[7];
  deriv[17] = xx[23];
  deriv[18] = xx[56];
  deriv[19] = xx[57];
  deriv[20] = xx[58];
  deriv[21] = xx[59];
  deriv[22] = xx[24];
  deriv[23] = xx[25];
  deriv[24] = xx[26];
  deriv[25] = state[26];
  deriv[26] = xx[30];
  deriv[27] = state[28];
  deriv[28] = xx[18] + xx[668] * xx[2] + xx[534] * (xx[20] - (xx[193] * xx[28] +
    xx[31] * xx[205]) * xx[19]) + (xx[21] + xx[19] * (xx[193] * xx[31] - xx[28] *
    xx[205])) * xx[569];
  deriv[29] = state[30];
  deriv[30] = xx[10] - (xx[479] * xx[42] + xx[583] * xx[48] - xx[586] * xx[47]);
  deriv[31] = state[32];
  deriv[32] = xx[9] - (xx[494] * xx[52] + xx[497] * xx[53] - xx[492] * xx[62]);
  deriv[33] = state[34];
  deriv[34] = xx[8] - (xx[374] * xx[63] - xx[371] * xx[64] - xx[369] * xx[67]);
  deriv[35] = state[36];
  deriv[36] = xx[1] - (xx[394] * (xx[22] - (xx[352] * xx[27] + xx[32] * xx[356])
    * xx[19]) - (xx[29] + xx[19] * (xx[352] * xx[32] - xx[27] * xx[356])) * xx
                       [399] - xx[666] * xx[2]);
  deriv[37] = state[38];
  deriv[38] = - xx[37];
  deriv[39] = xx[81];
  deriv[40] = xx[82];
  deriv[41] = xx[83];
  deriv[42] = xx[84];
  deriv[43] = xx[68] - (pm_math_dot3(xx + 1608, xx + 74) + pm_math_dot3(xx +
    1686, xx + 85));
  deriv[44] = xx[69] - (pm_math_dot3(xx + 1692, xx + 74) + pm_math_dot3(xx +
    1695, xx + 85));
  deriv[45] = xx[70] - (pm_math_dot3(xx + 1698, xx + 74) + pm_math_dot3(xx +
    1620, xx + 85));
  deriv[46] = state[47];
  deriv[47] = - xx[38];
  deriv[48] = xx[104];
  deriv[49] = xx[105];
  deriv[50] = xx[106];
  deriv[51] = xx[107];
  deriv[52] = xx[88] - (pm_math_dot3(xx + 962, xx + 100) + pm_math_dot3(xx +
    1059, xx + 108));
  deriv[53] = xx[89] - (pm_math_dot3(xx + 1062, xx + 100) + pm_math_dot3(xx +
    1068, xx + 108));
  deriv[54] = xx[90] - (pm_math_dot3(xx + 1071, xx + 100) + pm_math_dot3(xx +
    993, xx + 108));
  deriv[55] = state[56];
  deriv[56] = - xx[39];
  deriv[57] = xx[121];
  deriv[58] = xx[122];
  deriv[59] = xx[123];
  deriv[60] = xx[124];
  deriv[61] = xx[111] - (pm_math_dot3(xx + 1778, xx + 117) + pm_math_dot3(xx +
    1856, xx + 125));
  deriv[62] = xx[112] - (pm_math_dot3(xx + 1862, xx + 117) + pm_math_dot3(xx +
    1865, xx + 125));
  deriv[63] = xx[113] - (pm_math_dot3(xx + 1868, xx + 117) + pm_math_dot3(xx +
    1790, xx + 125));
  deriv[64] = state[65];
  deriv[65] = - xx[40];
  deriv[66] = xx[91];
  deriv[67] = xx[92];
  deriv[68] = xx[93];
  deriv[69] = xx[94];
  deriv[70] = xx[71] - (pm_math_dot3(xx + 1927, xx + 77) + pm_math_dot3(xx +
    2007, xx + 95));
  deriv[71] = xx[72] - (pm_math_dot3(xx + 2013, xx + 77) + pm_math_dot3(xx +
    2016, xx + 95));
  deriv[72] = xx[73] - (pm_math_dot3(xx + 2019, xx + 77) + pm_math_dot3(xx +
    1941, xx + 95));
  ii[0] = (0 != 0 && fabs(cos(input[4])) < 1.0e-6) ? 1 : 0;
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:GimbalLock",
      "'PlatformAssem/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes.",
      neDiagMgr);
  }

  errorResult[0] = (double) ii[0];
  return NULL;
}
