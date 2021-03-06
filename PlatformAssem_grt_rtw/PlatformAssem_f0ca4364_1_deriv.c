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
  double xx[2797];
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
  xx[3] = 1.0;
  xx[4] = 0.9982060081755033;
  xx[5] = xx[1] * input[3];
  xx[7] = cos(xx[5]);
  xx[15] = 7.822272946646824e-7;
  xx[16] = sin(xx[5]);
  xx[5] = 0.05987290897428056;
  xx[17] = 3.559887592452546e-6;
  xx[18] = - (xx[4] * xx[7] + xx[15] * xx[16]);
  xx[19] = xx[15] * xx[7] - xx[4] * xx[16];
  xx[20] = - (xx[5] * xx[7] + xx[17] * xx[16]);
  xx[21] = xx[17] * xx[7] - xx[5] * xx[16];
  xx[4] = xx[1] * input[4];
  xx[5] = 7.200670813652432e-6;
  xx[7] = sin(xx[4]);
  xx[15] = 0.9999999999734306;
  xx[16] = 1.135366319023148e-6;
  xx[22] = cos(xx[4]);
  xx[23] = - (xx[5] * xx[7]);
  xx[24] = xx[15] * xx[7];
  xx[25] = xx[16] * xx[7];
  pm_math_quatCompose(xx + 18, xx + 22, xx + 26);
  xx[4] = xx[1] * input[5];
  xx[7] = cos(xx[4]);
  xx[17] = 0.1195309949245745;
  xx[18] = sin(xx[4]);
  xx[4] = xx[17] * xx[18];
  xx[19] = 1.987929622149476e-6;
  xx[20] = xx[19] * xx[18];
  xx[21] = 0.9928304695406913;
  xx[22] = xx[21] * xx[18];
  xx[30] = xx[7];
  xx[31] = - xx[4];
  xx[32] = - xx[20];
  xx[33] = xx[22];
  pm_math_quatCompose(xx + 26, xx + 30, xx + 34);
  xx[18] = 2.0;
  xx[23] = xx[3] - (xx[36] * xx[36] + xx[37] * xx[37]) * xx[18];
  xx[24] = xx[23] * inputDot[3];
  xx[25] = - xx[5];
  xx[26] = xx[15];
  xx[27] = xx[16];
  pm_math_quatInverseXform(xx + 30, xx + 25, xx + 38);
  xx[5] = xx[38] * inputDot[4];
  xx[15] = xx[17] * inputDot[5];
  xx[16] = xx[18] * (xx[35] * xx[36] - xx[34] * xx[37]);
  xx[28] = xx[16] * inputDot[3];
  xx[29] = xx[39] * inputDot[4];
  xx[30] = xx[19] * inputDot[5];
  xx[31] = (xx[34] * xx[36] + xx[35] * xx[37]) * xx[18];
  xx[32] = xx[31] * inputDot[3];
  xx[33] = xx[40] * inputDot[4];
  xx[38] = xx[21] * inputDot[5];
  xx[39] = xx[24] + xx[5] - xx[15];
  xx[40] = xx[28] + xx[29] - xx[30];
  xx[41] = xx[32] + xx[33] + xx[38];
  pm_math_quatInverseXform(xx + 11, xx + 39, xx + 42);
  xx[45] = xx[1] * state[0];
  xx[46] = cos(xx[45]);
  xx[47] = sin(xx[45]);
  xx[45] = xx[46] * xx[43] + xx[42] * xx[47];
  xx[48] = xx[42] - xx[18] * xx[45] * xx[47];
  xx[49] = xx[43] - xx[18] * xx[45] * xx[46];
  xx[45] = xx[44] - inputDot[7];
  xx[50] = xx[45] - (xx[46] * xx[46] * xx[45] + xx[47] * xx[45] * xx[47]) * xx
    [18];
  xx[51] = xx[50] + state[1];
  xx[52] = xx[48];
  xx[53] = xx[49];
  xx[54] = xx[51];
  xx[55] = 5.752105223459939e-9;
  xx[56] = 5.752878286826099e-9;
  xx[57] = 7.631014080662714e-9;
  xx[58] = xx[55] * xx[48];
  xx[59] = xx[56] * xx[49];
  xx[60] = xx[51] * xx[57];
  pm_math_cross3(xx + 52, xx + 58, xx + 61);
  xx[58] = 3.980251324392935e-7;
  xx[59] = 0.999999999999921;
  xx[60] = xx[58] * state[5] - xx[59] * state[2];
  xx[61] = xx[58] * state[4] + xx[59] * state[3];
  xx[62] = - xx[61];
  xx[64] = xx[59] * state[4] - xx[58] * state[3];
  xx[65] = - xx[64];
  xx[66] = xx[58] * state[2] + xx[59] * state[5];
  xx[67] = - xx[66];
  xx[68] = xx[60];
  xx[69] = xx[62];
  xx[70] = xx[65];
  xx[71] = xx[67];
  pm_math_quatInverseXform(xx + 68, xx + 52, xx + 72);
  xx[75] = xx[58] * state[6];
  xx[76] = xx[58] * state[7];
  xx[77] = state[6] - (xx[58] * xx[75] - xx[59] * xx[76]) * xx[18];
  xx[78] = xx[72] + xx[77];
  xx[79] = state[7] - xx[18] * (xx[59] * xx[75] + xx[58] * xx[76]);
  xx[75] = xx[73] + xx[79];
  xx[76] = xx[74] + state[8];
  xx[80] = xx[78];
  xx[81] = xx[75];
  xx[82] = xx[76];
  xx[83] = 1.510286728400273e-5;
  xx[84] = 2.110548808184631e-7;
  xx[85] = 1.522914534809649e-5;
  xx[86] = xx[78] * xx[83];
  xx[87] = xx[75] * xx[84];
  xx[88] = xx[76] * xx[85];
  pm_math_cross3(xx + 80, xx + 86, xx + 89);
  xx[80] = xx[77];
  xx[81] = xx[79];
  xx[82] = state[8];
  pm_math_cross3(xx + 72, xx + 80, xx + 86);
  xx[92] = xx[89] + xx[83] * xx[86];
  xx[93] = 1.185940755304492e-11;
  xx[94] = - 3.054821332187513e-20;
  xx[95] = 1.821902325602747e-10;
  xx[96] = 4.358909629907198e-5;
  xx[97] = xx[93];
  xx[98] = xx[94];
  xx[99] = xx[93];
  xx[100] = 2.110548819932733e-7;
  xx[101] = xx[95];
  xx[102] = xx[94];
  xx[103] = xx[95];
  xx[104] = 4.371537436200037e-5;
  ii[0] = factorSymmetricPosDef(xx + 96, 3, xx + 93);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_1/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 105, xx + 96, 9 * sizeof(double));
  xx[93] = xx[90] + xx[84] * xx[87];
  xx[94] = 7.960502648785241e-7;
  xx[95] = 2.329280111075767e-13;
  xx[114] = 2.926046524751139e-7;
  xx[115] = 0.04575000000718987;
  xx[116] = xx[95];
  xx[117] = xx[114];
  xx[118] = xx[115];
  xx[119] = xx[72] + xx[78];
  xx[120] = xx[73] + xx[75];
  xx[121] = xx[74] + xx[76];
  xx[72] = 3.641162862673871e-8;
  xx[73] = 0.04575000000717538;
  xx[74] = xx[72];
  xx[75] = xx[73];
  xx[76] = - 2.926046524752066e-7;
  pm_math_cross3(xx + 80, xx + 74, xx + 122);
  pm_math_cross3(xx + 119, xx + 122, xx + 125);
  pm_math_quatXform(xx + 68, xx + 74, xx + 119);
  pm_math_cross3(xx + 52, xx + 119, xx + 128);
  pm_math_cross3(xx + 52, xx + 128, xx + 131);
  pm_math_quatInverseXform(xx + 68, xx + 131, xx + 52);
  xx[78] = 0.01360983200690392;
  xx[128] = (xx[125] + xx[52]) * xx[78];
  xx[129] = (xx[126] + xx[53]) * xx[78];
  xx[52] = (xx[127] + xx[54]) * xx[78];
  xx[125] = xx[128];
  xx[126] = xx[129];
  xx[127] = xx[52];
  xx[53] = xx[92] - xx[93] * xx[94] + pm_math_dot3(xx + 116, xx + 125);
  xx[54] = xx[10] * xx[47];
  xx[130] = xx[46] * xx[8];
  xx[131] = xx[54] + xx[130];
  xx[132] = xx[2] * xx[46] - xx[47] * xx[6];
  xx[133] = - xx[132];
  xx[134] = xx[2] * xx[47] + xx[46] * xx[6];
  xx[135] = xx[10] * xx[46] - xx[47] * xx[8];
  xx[136] = - xx[131];
  xx[137] = xx[133];
  xx[138] = xx[134];
  xx[139] = xx[135];
  pm_math_quatCompose(xx + 136, xx + 68, xx + 140);
  xx[144] = - 2.329268144978725e-13;
  xx[145] = 2.92603149291605e-7;
  xx[146] = xx[144];
  xx[147] = - xx[145];
  xx[148] = 0.0457500000000094;
  pm_math_quatXform(xx + 140, xx + 146, xx + 149);
  pm_math_quatXform(xx + 68, xx + 116, xx + 152);
  pm_math_quatXform(xx + 136, xx + 152, xx + 155);
  xx[152] = xx[149] + xx[155];
  xx[153] = 0.7058357201813958;
  xx[154] = xx[1] * input[6];
  xx[158] = sin(xx[154]);
  xx[159] = 0.7058407546227096;
  xx[160] = cos(xx[154]);
  xx[154] = xx[153] * xx[158] - xx[159] * xx[160];
  xx[161] = xx[1] * state[9];
  xx[162] = cos(xx[161]);
  xx[163] = xx[154] * xx[162];
  xx[164] = sin(xx[161]);
  xx[161] = xx[153] * xx[160] + xx[159] * xx[158];
  xx[165] = xx[164] * xx[161];
  xx[166] = 0.04233709306330295;
  xx[167] = 0.04233598682685397;
  xx[168] = xx[166] * xx[160] + xx[167] * xx[158];
  xx[169] = xx[166] * xx[158] - xx[167] * xx[160];
  xx[158] = xx[162] * xx[168] + xx[169] * xx[164];
  xx[160] = - xx[158];
  xx[170] = xx[164] * xx[168] - xx[169] * xx[162];
  xx[171] = xx[154] * xx[164] + xx[162] * xx[161];
  xx[172] = xx[163] - xx[165];
  xx[173] = xx[160];
  xx[174] = xx[170];
  xx[175] = xx[171];
  xx[176] = xx[58] * state[14] - xx[59] * state[11];
  xx[177] = xx[58] * state[13] + xx[59] * state[12];
  xx[178] = - xx[177];
  xx[179] = xx[59] * state[13] - xx[58] * state[12];
  xx[180] = - xx[179];
  xx[181] = xx[58] * state[11] + xx[59] * state[14];
  xx[182] = - xx[181];
  xx[183] = xx[176];
  xx[184] = xx[178];
  xx[185] = xx[180];
  xx[186] = xx[182];
  xx[187] = 3.980251340548381e-7;
  xx[188] = xx[59] * state[21] - xx[187] * state[18];
  xx[189] = xx[59] * state[20] - xx[187] * state[19];
  xx[190] = xx[187] * state[20] + xx[59] * state[19];
  xx[191] = - xx[190];
  xx[192] = xx[187] * state[21] + xx[59] * state[18];
  xx[187] = - xx[192];
  xx[193] = xx[188];
  xx[194] = xx[189];
  xx[195] = xx[191];
  xx[196] = xx[187];
  xx[197] = xx[1] * state[27];
  xx[198] = cos(xx[197]);
  xx[199] = 0.3535533905932732;
  xx[200] = 0.8660254037844377;
  xx[201] = xx[1] * state[25];
  xx[202] = sin(xx[201]);
  xx[203] = xx[200] * xx[202];
  xx[204] = xx[199] * xx[203];
  xx[205] = 0.6123724356957949;
  xx[206] = 0.5000000000000017;
  xx[207] = xx[206] * xx[202];
  xx[202] = xx[205] * xx[207];
  xx[208] = cos(xx[201]);
  xx[201] = xx[205] * xx[208];
  xx[209] = xx[204] + xx[202] - xx[201];
  xx[210] = sin(xx[197]);
  xx[197] = xx[202] + xx[201] + xx[204];
  xx[201] = xx[198] * xx[209] + xx[210] * xx[197];
  xx[202] = xx[205] * xx[203];
  xx[203] = xx[199] * xx[208];
  xx[204] = xx[199] * xx[207];
  xx[207] = xx[202] + xx[203] - xx[204];
  xx[208] = xx[203] - xx[202] + xx[204];
  xx[202] = xx[207] * xx[198] - xx[210] * xx[208];
  xx[203] = xx[198] * xx[208] + xx[207] * xx[210];
  xx[204] = xx[198] * xx[197] - xx[210] * xx[209];
  pm_math_quatCompose(xx + 193, xx + 201, xx + 211);
  pm_math_quatCompose(xx + 183, xx + 211, xx + 215);
  pm_math_quatCompose(xx + 172, xx + 215, xx + 219);
  xx[223] = xx[216] * xx[218];
  xx[224] = xx[215] * xx[217];
  xx[225] = xx[18] * (xx[223] - xx[224]);
  xx[226] = xx[215] * xx[216];
  xx[227] = xx[217] * xx[218];
  xx[228] = xx[216] * xx[216];
  xx[229] = xx[217] * xx[217];
  xx[230] = xx[225];
  xx[231] = (xx[226] + xx[227]) * xx[18];
  xx[232] = xx[3] - (xx[228] + xx[229]) * xx[18];
  xx[233] = 7.599121945184391e-12;
  xx[234] = 5.036130209737022e-12;
  xx[235] = 5.192027881355888e-12;
  xx[236] = - xx[233];
  xx[237] = xx[234];
  xx[238] = - xx[235];
  pm_math_cross3(xx + 230, xx + 236, xx + 239);
  pm_math_quatXform(xx + 219, xx + 239, xx + 230);
  xx[219] = xx[209];
  xx[220] = xx[207];
  xx[221] = xx[208];
  xx[222] = xx[197];
  xx[239] = 2.191920996097441e-12;
  xx[240] = xx[239] * xx[210];
  xx[241] = xx[198] * xx[240];
  xx[242] = 3.368449963403463e-13;
  xx[243] = xx[242] * xx[210];
  xx[244] = xx[243] * xx[210];
  xx[245] = xx[18] * (xx[241] + xx[244]) - xx[242];
  xx[246] = 0.02539999999999815 + xx[245];
  xx[247] = xx[240] * xx[210];
  xx[240] = xx[198] * xx[243];
  xx[243] = xx[239] - (xx[247] - xx[240]) * xx[18];
  xx[248] = 0.1524264000010511;
  xx[249] = - xx[246];
  xx[250] = - xx[243];
  xx[251] = - xx[248];
  pm_math_quatXform(xx + 219, xx + 249, xx + 252);
  xx[255] = 0.1158410329922703;
  xx[256] = 0.09621024525612519;
  xx[257] = xx[256] * xx[208];
  xx[258] = xx[207];
  xx[259] = xx[208];
  xx[260] = xx[197];
  xx[261] = xx[255] * xx[197] - xx[207] * xx[256];
  xx[262] = xx[255] * xx[208];
  xx[263] = xx[257];
  xx[264] = xx[261];
  xx[265] = - xx[262];
  pm_math_cross3(xx + 258, xx + 263, xx + 266);
  xx[263] = 7.483145982728478e-12 + xx[255] + (xx[257] * xx[209] + xx[266]) *
    xx[18];
  xx[255] = xx[252] - xx[263];
  xx[257] = 5.088251355846174e-12 - (xx[209] * xx[261] + xx[267]) * xx[18];
  xx[261] = xx[253] + xx[257];
  xx[252] = 4.00000000521855e-3 + xx[256] + xx[18] * (xx[268] - xx[262] * xx[209]);
  xx[253] = xx[254] - xx[252];
  xx[264] = xx[255];
  xx[265] = xx[261];
  xx[266] = xx[253];
  pm_math_quatXform(xx + 193, xx + 264, xx + 267);
  xx[254] = 3.641924106626229e-8;
  xx[270] = xx[233];
  xx[271] = - xx[234];
  xx[272] = xx[235];
  pm_math_quatXform(xx + 193, xx + 270, xx + 273);
  xx[256] = xx[254] + xx[273];
  xx[262] = xx[267] + xx[256];
  xx[276] = 0.04574999999998041;
  xx[277] = xx[276] + xx[274];
  xx[278] = xx[268] + xx[277];
  xx[267] = xx[145] + xx[275];
  xx[268] = xx[269] + xx[267];
  xx[273] = xx[262];
  xx[274] = xx[278];
  xx[275] = xx[268];
  pm_math_quatXform(xx + 183, xx + 273, xx + 279);
  pm_math_quatXform(xx + 183, xx + 74, xx + 282);
  xx[269] = xx[280] + xx[283];
  xx[280] = xx[279] + xx[282];
  xx[279] = xx[269] * xx[164] - xx[280] * xx[162];
  xx[281] = 3.107391981487723e-12;
  xx[285] = 9.83617579279345e-12;
  xx[286] = xx[281] * xx[162] + xx[285] * xx[164];
  xx[287] = xx[18] * xx[286] * xx[164];
  xx[288] = xx[18] * xx[164] * xx[279] - (xx[269] - xx[287]) - xx[285];
  xx[289] = xx[154];
  xx[290] = xx[161];
  xx[291] = xx[169];
  xx[292] = xx[18] * xx[286] * xx[162];
  xx[286] = xx[280] + xx[18] * xx[162] * xx[279] + xx[292] - xx[281];
  xx[279] = xx[169] * xx[286];
  xx[293] = xx[169] * xx[288];
  xx[294] = xx[154] * xx[286] - xx[288] * xx[161];
  xx[295] = - xx[279];
  xx[296] = xx[293];
  xx[297] = xx[294];
  pm_math_cross3(xx + 289, xx + 295, xx + 298);
  xx[295] = xx[230] + xx[288] + xx[18] * (xx[298] - xx[279] * xx[168]);
  xx[279] = xx[165] - xx[163];
  xx[301] = - xx[279];
  xx[302] = xx[160];
  xx[303] = xx[170];
  xx[304] = xx[171];
  pm_math_quatCompose(xx + 301, xx + 183, xx + 305);
  pm_math_quatCompose(xx + 305, xx + 193, xx + 309);
  pm_math_quatCompose(xx + 309, xx + 219, xx + 313);
  xx[160] = xx[198] * xx[313] + xx[316] * xx[210];
  xx[163] = xx[198] * xx[314] - xx[315] * xx[210];
  xx[165] = xx[198] * xx[315] + xx[314] * xx[210];
  xx[288] = xx[198] * xx[316] - xx[313] * xx[210];
  xx[317] = xx[160];
  xx[318] = xx[163];
  xx[319] = xx[165];
  xx[320] = xx[288];
  xx[296] = xx[200] * xx[210];
  xx[297] = xx[18] * xx[198] * xx[296];
  xx[321] = 2.51806510486852e-12;
  xx[322] = 3.799560972592208e-12;
  xx[323] = xx[18] * xx[296] * xx[210] - xx[200];
  xx[324] = xx[235] * xx[297] + xx[321];
  xx[325] = xx[322] + xx[235] * xx[323];
  xx[326] = xx[234] * xx[323] - xx[233] * xx[297];
  pm_math_quatXform(xx + 317, xx + 324, xx + 327);
  xx[317] = - (xx[206] * xx[243]);
  xx[318] = xx[206] * xx[246] - 0.1320051346083185;
  xx[319] = xx[200] * xx[243];
  pm_math_quatXform(xx + 219, xx + 317, xx + 323);
  xx[296] = 0.02540000000000025;
  xx[297] = xx[296] * xx[197];
  xx[317] = xx[207] * xx[296];
  xx[318] = xx[297] * xx[209] - xx[317] * xx[208];
  xx[319] = xx[18] * xx[318];
  xx[320] = (xx[297] * xx[197] + xx[207] * xx[317]) * xx[18];
  xx[326] = xx[317] * xx[209] + xx[297] * xx[208];
  xx[297] = xx[326] * xx[18];
  xx[330] = xx[323] + xx[319];
  xx[331] = xx[324] + xx[320] - xx[296];
  xx[332] = xx[325] - xx[297];
  pm_math_quatXform(xx + 309, xx + 330, xx + 323);
  xx[317] = xx[327] + xx[323];
  xx[330] = 1.031255612051699e-15;
  xx[331] = xx[163];
  xx[332] = xx[165];
  xx[333] = xx[288];
  xx[334] = xx[233] * xx[288];
  xx[335] = xx[234] * xx[288];
  xx[288] = xx[233] * xx[163] - xx[165] * xx[234];
  xx[336] = - xx[334];
  xx[337] = xx[335];
  xx[338] = xx[288];
  pm_math_cross3(xx + 331, xx + 336, xx + 339);
  xx[163] = xx[18] * (xx[247] - xx[240]) - xx[239];
  xx[165] = (xx[241] + xx[244]) * xx[18] - xx[242];
  xx[240] = xx[316] * xx[165];
  xx[241] = xx[163] * xx[316];
  xx[244] = xx[314] * xx[165] - xx[163] * xx[315];
  xx[331] = - xx[240];
  xx[332] = xx[241];
  xx[333] = xx[244];
  pm_math_cross3(xx + 314, xx + 331, xx + 336);
  xx[247] = xx[18] * (xx[339] - xx[160] * xx[334]) + xx[163] + xx[18] * (xx[336]
    - xx[313] * xx[240]) + xx[234];
  memcpy(xx + 240, xx + 57, 1 * sizeof(double));
  ii[1] = factorSymmetricPosDef(xx + 240, 1, xx + 331);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute15' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 331, xx + 240, 1 * sizeof(double));
  xx[332] = xx[247] / xx[331];
  xx[333] = xx[330] * xx[332];
  xx[334] = xx[333] * xx[210];
  xx[342] = 1.584789294349521e-16;
  xx[343] = xx[342] * xx[332];
  xx[344] = xx[343] * xx[210];
  xx[345] = xx[18] * (xx[334] * xx[210] - xx[198] * xx[344]) - xx[333];
  xx[333] = (xx[198] * xx[334] + xx[344] * xx[210]) * xx[18] - xx[343];
  xx[334] = xx[345] * xx[243] - xx[333] * xx[246] - xx[57] * xx[332];
  xx[343] = xx[248] * xx[333];
  xx[344] = 0.3535533905932758;
  xx[346] = xx[1] * state[33];
  xx[347] = cos(xx[346]);
  xx[348] = xx[344] * xx[347];
  xx[349] = sin(xx[346]);
  xx[346] = xx[344] * xx[349];
  xx[350] = xx[348] + xx[346];
  xx[351] = xx[350] * xx[350];
  xx[352] = 0.6123724356957934;
  xx[353] = xx[352] * xx[347];
  xx[347] = xx[352] * xx[349];
  xx[349] = xx[353] - xx[347];
  xx[354] = (xx[351] + xx[349] * xx[349]) * xx[18] - xx[3];
  xx[355] = xx[353] + xx[347];
  xx[347] = xx[355] * xx[349];
  xx[353] = xx[348] - xx[346];
  xx[346] = xx[350] * xx[353];
  xx[348] = xx[347] - xx[346];
  xx[356] = xx[18] * xx[348];
  xx[357] = xx[349] * xx[353];
  xx[358] = xx[355] * xx[350];
  xx[359] = (xx[357] + xx[358]) * xx[18];
  xx[360] = xx[347] + xx[346];
  xx[346] = xx[360] * xx[18];
  xx[347] = (xx[351] + xx[355] * xx[355]) * xx[18] - xx[3];
  xx[361] = xx[355] * xx[353];
  xx[362] = xx[350] * xx[349];
  xx[363] = xx[18] * (xx[361] - xx[362]);
  xx[364] = xx[357] - xx[358];
  xx[357] = xx[18] * xx[364];
  xx[358] = xx[361] + xx[362];
  xx[361] = xx[358] * xx[18];
  xx[362] = (xx[351] + xx[353] * xx[353]) * xx[18] - xx[3];
  xx[365] = xx[354];
  xx[366] = xx[356];
  xx[367] = xx[359];
  xx[368] = xx[346];
  xx[369] = xx[347];
  xx[370] = xx[363];
  xx[371] = xx[357];
  xx[372] = xx[361];
  xx[373] = xx[362];
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute10' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 351, xx + 240, 1 * sizeof(double));
  xx[374] = xx[57] / xx[351];
  xx[375] = xx[57] - xx[57] * xx[374];
  xx[376] = xx[55] * xx[354];
  xx[377] = xx[55] * xx[346];
  xx[378] = xx[55] * xx[357];
  xx[379] = xx[56] * xx[356];
  xx[380] = xx[56] * xx[347];
  xx[381] = xx[56] * xx[361];
  xx[382] = xx[359] * xx[375];
  xx[383] = xx[363] * xx[375];
  xx[384] = xx[375] * xx[362];
  pm_math_matrix3x3Compose(xx + 365, xx + 376, xx + 385);
  xx[375] = 2.822269593544343e-15;
  xx[376] = xx[375] / xx[351];
  xx[377] = xx[57] * xx[376];
  xx[378] = 2.968427723224885e-15;
  xx[379] = xx[378] / xx[351];
  xx[380] = xx[57] * xx[379];
  xx[381] = xx[377] * xx[356] - xx[380] * xx[354];
  xx[382] = xx[381] * xx[359];
  xx[383] = xx[377] * xx[347] - xx[380] * xx[346];
  xx[384] = xx[383] * xx[359];
  xx[394] = xx[377] * xx[361] - xx[380] * xx[357];
  xx[377] = xx[394] * xx[359];
  xx[380] = xx[381] * xx[363];
  xx[395] = xx[383] * xx[363];
  xx[396] = xx[394] * xx[363];
  xx[397] = xx[381] * xx[362];
  xx[381] = xx[383] * xx[362];
  xx[383] = xx[394] * xx[362];
  xx[398] = - xx[382];
  xx[399] = - xx[384];
  xx[400] = - xx[377];
  xx[401] = - xx[380];
  xx[402] = - xx[395];
  xx[403] = - xx[396];
  xx[404] = - xx[397];
  xx[405] = - xx[381];
  xx[406] = - xx[383];
  xx[407] = xx[350];
  xx[408] = xx[349];
  xx[409] = xx[355];
  xx[410] = xx[353];
  xx[394] = 5.998698970888227e-12;
  xx[411] = 6.30935626036444e-12;
  xx[412] = - xx[394];
  xx[413] = - xx[411];
  xx[414] = 4.000000001735564e-3;
  pm_math_quatXform(xx + 407, xx + 412, xx + 415);
  xx[412] = 0.1158410329922713 + xx[415];
  xx[413] = 0.09621024525612379 - xx[417];
  xx[417] = - xx[412];
  xx[418] = - xx[416];
  xx[419] = xx[413];
  pm_math_matrix3x3PostCross(xx + 398, xx + 417, xx + 420);
  xx[398] = 4.704802836816547e-4;
  xx[399] = xx[398] - xx[378] * xx[379];
  xx[400] = xx[375] * xx[379];
  xx[401] = xx[398] - xx[375] * xx[376];
  xx[429] = xx[399] * xx[354] + xx[356] * xx[400];
  xx[430] = xx[346] * xx[399] + xx[400] * xx[347];
  xx[431] = xx[357] * xx[399] + xx[361] * xx[400];
  xx[432] = xx[356] * xx[401] + xx[400] * xx[354];
  xx[433] = xx[401] * xx[347] + xx[346] * xx[400];
  xx[434] = xx[361] * xx[401] + xx[357] * xx[400];
  xx[435] = xx[398] * xx[359];
  xx[436] = xx[398] * xx[363];
  xx[437] = xx[398] * xx[362];
  pm_math_matrix3x3Compose(xx + 365, xx + 429, xx + 438);
  pm_math_matrix3x3PostCross(xx + 438, xx + 417, xx + 429);
  pm_math_matrix3x3PreCross(xx + 429, xx + 417, xx + 447);
  xx[346] = 0.152426400001803;
  xx[356] = 2.642797429992618e-15;
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute14' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 357, xx + 240, 1 * sizeof(double));
  xx[359] = xx[356] / xx[357];
  xx[361] = xx[57] * xx[359];
  xx[362] = xx[1] * state[35];
  xx[363] = cos(xx[362]);
  xx[399] = sin(xx[362]);
  xx[362] = xx[363] * xx[399];
  xx[400] = xx[18] * xx[362];
  xx[401] = 3.2073700752247e-15;
  xx[402] = xx[401] / xx[357];
  xx[403] = xx[57] * xx[402];
  xx[404] = xx[363] * xx[363];
  xx[405] = xx[18] * xx[404] - xx[3];
  xx[406] = (xx[404] + xx[399] * xx[399]) * xx[18] - xx[3];
  xx[404] = (xx[361] * xx[400] + xx[403] * xx[405]) * xx[406];
  xx[414] = xx[346] * xx[404];
  xx[415] = xx[398] - xx[356] * xx[359];
  xx[456] = xx[401] * xx[359];
  xx[457] = xx[456] * xx[405];
  xx[458] = xx[400] * xx[415] - xx[457];
  xx[459] = xx[398] - xx[401] * xx[402];
  xx[460] = xx[400] * xx[456];
  xx[456] = xx[459] * xx[405] - xx[460];
  xx[461] = xx[458] * xx[400] + xx[456] * xx[405];
  xx[462] = xx[461] * xx[346];
  xx[463] = 6.817225262079063e-12;
  xx[464] = xx[463] * xx[399];
  xx[465] = xx[464] * xx[399];
  xx[466] = 5.61723311615081e-12;
  xx[467] = xx[466] * xx[399];
  xx[468] = xx[363] * xx[467];
  xx[469] = xx[18] * (xx[465] - xx[468]) - xx[463];
  xx[470] = 0.02540000000000185 - xx[469];
  xx[471] = xx[456] * xx[400] - xx[458] * xx[405];
  xx[456] = xx[346] * xx[471];
  xx[458] = xx[363] * xx[464];
  xx[464] = xx[467] * xx[399];
  xx[467] = (xx[458] + xx[464]) * xx[18] - xx[466];
  xx[472] = xx[1] * state[31];
  xx[473] = cos(xx[472]);
  xx[474] = xx[344] * xx[473];
  xx[475] = sin(xx[472]);
  xx[472] = xx[344] * xx[475];
  xx[344] = xx[474] + xx[472];
  xx[476] = xx[344] * xx[344];
  xx[477] = xx[352] * xx[475];
  xx[475] = xx[352] * xx[473];
  xx[352] = xx[477] - xx[475];
  xx[473] = (xx[476] + xx[352] * xx[352]) * xx[18] - xx[3];
  xx[478] = xx[472] - xx[474];
  xx[472] = xx[344] * xx[478];
  xx[474] = xx[475] + xx[477];
  xx[475] = xx[474] * xx[352];
  xx[477] = xx[472] - xx[475];
  xx[479] = xx[18] * xx[477];
  xx[480] = xx[478] * xx[352];
  xx[481] = xx[344] * xx[474];
  xx[482] = (xx[480] + xx[481]) * xx[18];
  xx[483] = xx[475] + xx[472];
  xx[472] = xx[483] * xx[18];
  xx[475] = (xx[476] + xx[474] * xx[474]) * xx[18] - xx[3];
  xx[484] = xx[344] * xx[352];
  xx[485] = xx[474] * xx[478];
  xx[486] = xx[18] * (xx[484] - xx[485]);
  xx[487] = xx[480] - xx[481];
  xx[480] = xx[18] * xx[487];
  xx[481] = xx[485] + xx[484];
  xx[484] = xx[481] * xx[18];
  xx[485] = (xx[476] + xx[478] * xx[478]) * xx[18] - xx[3];
  xx[488] = xx[473];
  xx[489] = xx[479];
  xx[490] = xx[482];
  xx[491] = - xx[472];
  xx[492] = xx[475];
  xx[493] = xx[486];
  xx[494] = xx[480];
  xx[495] = - xx[484];
  xx[496] = xx[485];
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute11' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 476, xx + 240, 1 * sizeof(double));
  xx[497] = xx[57] / xx[476];
  xx[498] = xx[57] - xx[57] * xx[497];
  xx[499] = xx[55] * xx[473];
  xx[500] = - (xx[55] * xx[472]);
  xx[501] = xx[55] * xx[480];
  xx[502] = xx[56] * xx[479];
  xx[503] = xx[56] * xx[475];
  xx[504] = - (xx[56] * xx[484]);
  xx[505] = xx[482] * xx[498];
  xx[506] = xx[486] * xx[498];
  xx[507] = xx[498] * xx[485];
  pm_math_matrix3x3Compose(xx + 488, xx + 499, xx + 508);
  xx[498] = 1.787946147172686e-15;
  xx[499] = xx[498] / xx[476];
  xx[500] = xx[57] * xx[499];
  xx[501] = 1.826292542130627e-15;
  xx[502] = xx[501] / xx[476];
  xx[503] = xx[57] * xx[502];
  xx[504] = xx[500] * xx[473] + xx[503] * xx[479];
  xx[505] = xx[504] * xx[482];
  xx[506] = xx[500] * xx[472] - xx[503] * xx[475];
  xx[507] = xx[506] * xx[482];
  xx[517] = xx[503] * xx[484] - xx[500] * xx[480];
  xx[500] = xx[517] * xx[482];
  xx[503] = xx[504] * xx[486];
  xx[518] = xx[506] * xx[486];
  xx[519] = xx[517] * xx[486];
  xx[520] = xx[504] * xx[485];
  xx[504] = xx[506] * xx[485];
  xx[506] = xx[517] * xx[485];
  xx[521] = xx[505];
  xx[522] = - xx[507];
  xx[523] = - xx[500];
  xx[524] = xx[503];
  xx[525] = - xx[518];
  xx[526] = - xx[519];
  xx[527] = xx[520];
  xx[528] = - xx[504];
  xx[529] = - xx[506];
  xx[517] = - xx[474];
  xx[530] = - xx[344];
  xx[531] = xx[352];
  xx[532] = xx[517];
  xx[533] = xx[478];
  xx[534] = 3.881762117297072e-12;
  xx[535] = 3.80025733104361e-12;
  xx[536] = xx[534];
  xx[537] = - xx[535];
  xx[538] = 3.999999998874377e-3;
  pm_math_quatXform(xx + 530, xx + 536, xx + 539);
  xx[536] = 0.1412410329922711 + xx[539];
  xx[537] = 0.05221615474387407 - xx[541];
  xx[541] = - xx[536];
  xx[542] = - xx[540];
  xx[543] = xx[537];
  pm_math_matrix3x3PostCross(xx + 521, xx + 541, xx + 544);
  xx[521] = xx[398] - xx[498] * xx[499];
  xx[522] = xx[501] * xx[499];
  xx[523] = xx[398] - xx[501] * xx[502];
  xx[553] = xx[521] * xx[473] - xx[522] * xx[479];
  xx[554] = - (xx[472] * xx[521] + xx[522] * xx[475]);
  xx[555] = xx[480] * xx[521] + xx[522] * xx[484];
  xx[556] = xx[479] * xx[523] - xx[522] * xx[473];
  xx[557] = xx[523] * xx[475] + xx[522] * xx[472];
  xx[558] = - (xx[484] * xx[523] + xx[522] * xx[480]);
  xx[559] = xx[398] * xx[482];
  xx[560] = xx[398] * xx[486];
  xx[561] = xx[398] * xx[485];
  pm_math_matrix3x3Compose(xx + 488, xx + 553, xx + 521);
  pm_math_matrix3x3PostCross(xx + 521, xx + 541, xx + 553);
  pm_math_matrix3x3PreCross(xx + 553, xx + 541, xx + 562);
  xx[472] = xx[1] * state[29];
  xx[479] = sin(xx[472]);
  xx[480] = xx[205] * xx[479];
  xx[482] = cos(xx[472]);
  xx[472] = xx[205] * xx[482];
  xx[205] = xx[480] - xx[472];
  xx[484] = xx[205] * xx[205];
  xx[485] = xx[199] * xx[482];
  xx[482] = xx[199] * xx[479];
  xx[199] = xx[485] + xx[482];
  xx[479] = (xx[484] + xx[199] * xx[199]) * xx[18] - xx[3];
  xx[486] = xx[480] + xx[472];
  xx[472] = xx[486] * xx[205];
  xx[480] = xx[482] - xx[485];
  xx[482] = xx[199] * xx[480];
  xx[485] = xx[472] - xx[482];
  xx[538] = xx[18] * xx[485];
  xx[539] = xx[486] * xx[199];
  xx[571] = xx[480] * xx[205];
  xx[572] = (xx[539] + xx[571]) * xx[18];
  xx[573] = xx[482] + xx[472];
  xx[472] = xx[573] * xx[18];
  xx[482] = (xx[484] + xx[480] * xx[480]) * xx[18] - xx[3];
  xx[574] = xx[199] * xx[205];
  xx[575] = xx[486] * xx[480];
  xx[576] = xx[18] * (xx[574] - xx[575]);
  xx[577] = xx[539] - xx[571];
  xx[539] = xx[18] * xx[577];
  xx[571] = xx[575] + xx[574];
  xx[574] = xx[571] * xx[18];
  xx[575] = (xx[484] + xx[486] * xx[486]) * xx[18] - xx[3];
  xx[578] = xx[479];
  xx[579] = xx[538];
  xx[580] = xx[572];
  xx[581] = - xx[472];
  xx[582] = xx[482];
  xx[583] = xx[576];
  xx[584] = xx[539];
  xx[585] = - xx[574];
  xx[586] = xx[575];
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute12' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[484] = xx[57] / xx[240];
  xx[587] = xx[57] - xx[57] * xx[484];
  xx[588] = xx[55] * xx[479];
  xx[589] = - (xx[55] * xx[472]);
  xx[590] = xx[55] * xx[539];
  xx[591] = xx[56] * xx[538];
  xx[592] = xx[56] * xx[482];
  xx[593] = - (xx[56] * xx[574]);
  xx[594] = xx[572] * xx[587];
  xx[595] = xx[576] * xx[587];
  xx[596] = xx[587] * xx[575];
  pm_math_matrix3x3Compose(xx + 578, xx + 588, xx + 597);
  xx[587] = 5.275037938510027e-15;
  xx[588] = xx[587] / xx[240];
  xx[589] = xx[57] * xx[588];
  xx[590] = 2.891114289123629e-16;
  xx[591] = xx[590] / xx[240];
  xx[592] = xx[57] * xx[591];
  xx[593] = xx[589] * xx[538] - xx[592] * xx[479];
  xx[594] = xx[593] * xx[572];
  xx[595] = xx[592] * xx[472] + xx[589] * xx[482];
  xx[596] = xx[595] * xx[572];
  xx[606] = xx[592] * xx[539] + xx[589] * xx[574];
  xx[589] = xx[606] * xx[572];
  xx[592] = xx[593] * xx[576];
  xx[607] = xx[595] * xx[576];
  xx[608] = xx[606] * xx[576];
  xx[609] = xx[593] * xx[575];
  xx[593] = xx[595] * xx[575];
  xx[595] = xx[606] * xx[575];
  xx[610] = - xx[594];
  xx[611] = - xx[596];
  xx[612] = xx[589];
  xx[613] = - xx[592];
  xx[614] = - xx[607];
  xx[615] = xx[608];
  xx[616] = - xx[609];
  xx[617] = - xx[593];
  xx[618] = xx[595];
  xx[606] = - xx[199];
  xx[619] = - xx[486];
  xx[620] = xx[205];
  xx[621] = xx[606];
  xx[622] = xx[480];
  xx[623] = xx[619];
  xx[624] = 1.121202762681406e-11;
  xx[625] = 6.145027516349377e-13;
  xx[626] = - xx[624];
  xx[627] = - xx[625];
  xx[628] = - 3.999999999522439e-3;
  pm_math_quatXform(xx + 620, xx + 626, xx + 629);
  xx[626] = 0.1412410329922704 - xx[629];
  xx[627] = 0.05221615474387575 - xx[631];
  xx[631] = xx[626];
  xx[632] = - xx[630];
  xx[633] = xx[627];
  pm_math_matrix3x3PostCross(xx + 610, xx + 631, xx + 634);
  xx[610] = xx[398] - xx[590] * xx[591];
  xx[611] = xx[587] * xx[591];
  xx[612] = xx[398] - xx[587] * xx[588];
  xx[643] = xx[610] * xx[479] + xx[538] * xx[611];
  xx[644] = xx[611] * xx[482] - xx[472] * xx[610];
  xx[645] = xx[539] * xx[610] - xx[611] * xx[574];
  xx[646] = xx[538] * xx[612] + xx[611] * xx[479];
  xx[647] = xx[612] * xx[482] - xx[611] * xx[472];
  xx[648] = xx[539] * xx[611] - xx[574] * xx[612];
  xx[649] = xx[398] * xx[572];
  xx[650] = xx[398] * xx[576];
  xx[651] = xx[398] * xx[575];
  pm_math_matrix3x3Compose(xx + 578, xx + 643, xx + 610);
  pm_math_matrix3x3PostCross(xx + 610, xx + 631, xx + 643);
  pm_math_matrix3x3PreCross(xx + 643, xx + 631, xx + 652);
  xx[472] = xx[198] * xx[210];
  xx[538] = xx[18] * xx[472];
  xx[539] = xx[330] / xx[331];
  xx[572] = xx[398] - xx[330] * xx[539];
  xx[574] = xx[342] * xx[539];
  xx[575] = xx[198] * xx[198];
  xx[576] = xx[18] * xx[575] - xx[3];
  xx[628] = xx[574] * xx[576];
  xx[629] = xx[538] * xx[572] + xx[628];
  xx[661] = xx[538] * xx[574];
  xx[574] = xx[342] / xx[331];
  xx[662] = xx[398] - xx[342] * xx[574];
  xx[663] = xx[661] + xx[662] * xx[576];
  xx[664] = xx[629] * xx[538] + xx[663] * xx[576];
  xx[665] = xx[664] * xx[248];
  xx[666] = xx[663] * xx[538] - xx[629] * xx[576];
  xx[629] = xx[248] * xx[666];
  xx[663] = (xx[575] + xx[210] * xx[210]) * xx[18] - xx[3];
  xx[575] = xx[57] * xx[539];
  xx[667] = xx[57] * xx[574];
  xx[668] = xx[663] * (xx[575] * xx[538] - xx[667] * xx[576]);
  xx[669] = xx[248] * xx[668];
  xx[670] = xx[391] - xx[426] - xx[422] - xx[453] - (xx[414] - (xx[462] * xx[470]
    + xx[456] * xx[467])) + xx[514] - xx[550] - xx[546] - xx[568] + xx[603] -
    xx[640] - xx[636] - xx[658] - (xx[665] * xx[246] - xx[629] * xx[243] - xx
    [669]);
  xx[671] = xx[57] / xx[357];
  xx[672] = (xx[403] * xx[400] - xx[361] * xx[405]) * xx[406];
  xx[361] = xx[672] * xx[467] + xx[404] * xx[470];
  xx[403] = xx[400] * xx[459] + xx[457];
  xx[457] = xx[415] * xx[405] + xx[460];
  xx[415] = xx[403] * xx[405] - xx[400] * xx[457];
  xx[459] = xx[415] * xx[467] + xx[461] * xx[470];
  xx[460] = xx[457] * xx[405] + xx[400] * xx[403];
  xx[403] = xx[460] * xx[467] + xx[470] * xx[471];
  xx[457] = 1.754495192997305e-3;
  xx[673] = xx[57] / xx[331];
  xx[674] = (xx[575] * xx[576] + xx[667] * xx[538]) * xx[663];
  xx[575] = xx[674] * xx[243] + xx[668] * xx[246];
  xx[667] = xx[572] * xx[576] - xx[661];
  xx[572] = xx[538] * xx[662] - xx[628];
  xx[628] = xx[576] * xx[667] + xx[538] * xx[572];
  xx[661] = xx[628] * xx[243] - xx[666] * xx[246];
  xx[662] = xx[576] * xx[572] - xx[538] * xx[667];
  xx[572] = xx[243] * xx[662] - xx[664] * xx[246];
  xx[667] = (xx[57] - xx[57] * xx[671]) * xx[406] * xx[406] - xx[361] - xx[361]
    + xx[459] * xx[470] + xx[403] * xx[467] + xx[393] - xx[428] - xx[428] - xx
    [455] + xx[516] - xx[552] - xx[552] - xx[570] + xx[605] - xx[642] - xx[642]
    - xx[660] + xx[457] + (xx[57] - xx[57] * xx[673]) * xx[663] * xx[663] - xx
    [575] - xx[575] + xx[661] * xx[243] - xx[572] * xx[246];
  xx[361] = xx[459] - xx[404] - (xx[381] + xx[434]) - (xx[504] + xx[558]) - (xx
    [593] + xx[648]) + xx[668] + xx[572];
  xx[381] = xx[200] * xx[670] + xx[667] * xx[206] + xx[361] * xx[296];
  xx[404] = xx[384] + xx[432] - xx[462] + xx[507] + xx[556] + xx[596] + xx[646]
    - xx[665];
  xx[384] = xx[55] * xx[405];
  xx[432] = xx[56] * xx[400];
  xx[434] = xx[398] * xx[406] * xx[406];
  xx[504] = xx[434] * xx[467];
  xx[507] = 1.754495192997305e-3;
  xx[556] = xx[55] * xx[576];
  xx[558] = xx[56] * xx[538];
  xx[575] = xx[398] * xx[663] * xx[663];
  xx[593] = xx[575] * xx[243];
  xx[596] = xx[384] * xx[405] + xx[432] * xx[400] + xx[504] * xx[467] + xx[346] *
    xx[462] + xx[385] - xx[420] - xx[420] - xx[447] + xx[508] - xx[544] - xx[544]
    - xx[562] + xx[597] - xx[634] - xx[634] - xx[652] + xx[507] + xx[556] * xx
    [576] + xx[558] * xx[538] + xx[593] * xx[243] + xx[248] * xx[665];
  xx[462] = xx[387] - xx[422] - xx[426] - xx[449] - (xx[414] - xx[459] * xx[346])
    + xx[510] - xx[546] - xx[550] - xx[564] + xx[599] - xx[636] - xx[640] - xx
    [654] + xx[669] + xx[572] * xx[248];
  xx[414] = xx[404] * xx[296] - (xx[596] * xx[200] + xx[206] * xx[462]);
  xx[459] = 0.3963053387673541;
  xx[572] = xx[461] + xx[442] + xx[525] + xx[614] + xx[459] + xx[664];
  xx[442] = xx[404] * xx[200] - xx[361] * xx[206] - xx[572] * xx[296];
  xx[461] = xx[381] * xx[206] - xx[200] * xx[414] - xx[442] * xx[296];
  ii[1] = factorSymmetricPosDef(xx + 461, 1, xx + 525);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Subsystem/Revolute9' has a degenerate mass distribution on its base side.",
      neDiagMgr);
  }

  xx[525] = (xx[317] + xx[334] * xx[206] + xx[200] * xx[343] + xx[296] * xx[333])
    / xx[461];
  xx[614] = xx[346] * xx[415];
  xx[646] = xx[248] * xx[662];
  xx[648] = xx[614] + xx[395] + xx[433] + xx[518] + xx[557] + xx[607] + xx[647]
    + xx[646];
  xx[395] = xx[432] * xx[405] - xx[384] * xx[400] - (xx[346] * xx[456] - xx[504]
    * xx[470]) + xx[388] - xx[423] - xx[421] - xx[450] + xx[511] - xx[547] - xx
    [545] - xx[565] + xx[600] - xx[637] - xx[635] - xx[655] + xx[558] * xx[576]
    - xx[556] * xx[538] - (xx[248] * xx[629] + xx[593] * xx[246]);
  xx[384] = xx[346] * xx[672];
  xx[432] = xx[248] * xx[674];
  xx[433] = xx[384] - xx[403] * xx[346] + xx[390] - xx[425] - xx[427] - xx[452]
    + xx[513] - xx[549] - xx[551] - xx[567] + xx[602] - xx[639] - xx[641] - xx
    [657] + xx[432] - xx[661] * xx[248];
  xx[518] = xx[648] * xx[296] - (xx[395] * xx[200] + xx[433] * xx[206]);
  xx[556] = xx[525] * xx[414] + xx[343];
  xx[557] = xx[518] * xx[525] - xx[345] * xx[248];
  xx[558] = xx[334] - xx[381] * xx[525];
  pm_math_quatXform(xx + 219, xx + 556, xx + 675);
  xx[556] = - xx[263];
  xx[557] = xx[257];
  xx[558] = - xx[252];
  xx[334] = xx[382] + xx[429] - xx[456] + xx[553] - xx[505] + xx[594] + xx[643]
    - xx[629];
  xx[343] = xx[403] - xx[672] - (xx[397] + xx[431]) - (xx[555] - xx[520]) - (xx
    [609] + xx[645]) + xx[661] - xx[674];
  xx[382] = xx[471] + xx[439] + xx[522] + xx[611] + xx[666];
  xx[397] = xx[334] * xx[200] - xx[343] * xx[206] - xx[382] * xx[296];
  xx[403] = xx[504] + xx[377] + xx[435] + xx[500] + xx[559] + xx[649] - xx[589]
    + xx[593];
  xx[377] = xx[383] + xx[437] + xx[506] + xx[561] + xx[651] - xx[595];
  xx[383] = xx[445] + xx[528] + xx[617];
  xx[429] = xx[403] * xx[200] + xx[377] * xx[206] - xx[383] * xx[296];
  xx[504] = xx[345] + xx[397] * xx[525];
  xx[505] = xx[333] + xx[442] * xx[525];
  xx[506] = xx[525] * xx[429];
  pm_math_quatXform(xx + 219, xx + 504, xx + 593);
  pm_math_cross3(xx + 556, xx + 593, xx + 504);
  xx[333] = xx[675] + xx[504];
  xx[345] = xx[209] * xx[209];
  xx[431] = (xx[345] + xx[207] * xx[207]) * xx[18] - xx[3];
  xx[435] = xx[207] * xx[208];
  xx[437] = xx[209] * xx[197];
  xx[439] = xx[18] * (xx[435] - xx[437]);
  xx[445] = xx[207] * xx[197];
  xx[456] = xx[209] * xx[208];
  xx[471] = (xx[445] + xx[456]) * xx[18];
  xx[500] = (xx[435] + xx[437]) * xx[18];
  xx[435] = (xx[345] + xx[208] * xx[208]) * xx[18] - xx[3];
  xx[437] = xx[197] * xx[208];
  xx[520] = xx[207] * xx[209];
  xx[522] = xx[18] * (xx[437] - xx[520]);
  xx[528] = xx[18] * (xx[445] - xx[456]);
  xx[445] = (xx[437] + xx[520]) * xx[18];
  xx[437] = (xx[345] + xx[197] * xx[197]) * xx[18] - xx[3];
  xx[678] = xx[431];
  xx[679] = xx[439];
  xx[680] = xx[471];
  xx[681] = xx[500];
  xx[682] = xx[435];
  xx[683] = xx[522];
  xx[684] = xx[528];
  xx[685] = xx[445];
  xx[686] = xx[437];
  xx[345] = xx[414] / xx[461];
  xx[456] = xx[56] * xx[405];
  xx[520] = xx[55] * xx[400];
  xx[553] = xx[434] * xx[470];
  xx[555] = xx[56] * xx[576];
  xx[559] = xx[55] * xx[538];
  xx[561] = xx[575] * xx[246];
  xx[589] = xx[456] * xx[400] - xx[520] * xx[405] - (xx[346] * xx[614] - xx[553]
    * xx[467]) + xx[386] - xx[421] - xx[423] - xx[448] + xx[509] - xx[545] - xx
    [547] - xx[563] + xx[598] - xx[635] - xx[637] - xx[653] + xx[555] * xx[538]
    - xx[559] * xx[576] - (xx[248] * xx[646] + xx[561] * xx[243]);
  xx[607] = xx[518] * xx[345];
  xx[609] = xx[381] * xx[345];
  xx[611] = xx[460] * xx[346];
  xx[420] = 3.506321102188747e-3;
  xx[421] = xx[628] * xx[248];
  xx[422] = xx[520] * xx[400] + xx[456] * xx[405] + xx[346] * xx[611] + xx[553] *
    xx[470] + xx[389] - xx[424] - xx[424] - xx[451] + xx[512] - xx[548] - xx[548]
    - xx[566] + xx[601] - xx[638] - xx[638] - xx[656] + xx[420] + xx[559] * xx
    [538] + xx[555] * xx[576] + xx[248] * xx[421] + xx[561] * xx[246];
  xx[423] = xx[518] / xx[461];
  xx[424] = xx[381] * xx[423];
  xx[385] = xx[384] - (xx[614] * xx[470] + xx[611] * xx[467]) + xx[392] - xx[427]
    - xx[425] - xx[454] + xx[515] - xx[551] - xx[549] - xx[569] + xx[604] - xx
    [641] - xx[639] - xx[659] + xx[646] * xx[246] - xx[421] * xx[243] + xx[432];
  xx[384] = xx[381] / xx[461];
  xx[447] = xx[596] - xx[345] * xx[414];
  xx[448] = xx[589] - xx[607];
  xx[449] = xx[462] + xx[609];
  xx[450] = xx[395] - xx[607];
  xx[451] = xx[422] - xx[518] * xx[423];
  xx[452] = xx[433] + xx[424];
  xx[453] = xx[670] + xx[609];
  xx[454] = xx[385] + xx[424];
  xx[455] = xx[667] - xx[381] * xx[384];
  pm_math_matrix3x3ComposeTranspose(xx + 447, xx + 678, xx + 508);
  pm_math_matrix3x3Compose(xx + 678, xx + 508, xx + 447);
  xx[386] = xx[397] / xx[461];
  xx[387] = xx[442] / xx[461];
  xx[388] = xx[429] / xx[461];
  xx[389] = xx[611] + xx[380] + xx[430] + xx[554] - xx[503] + xx[592] + xx[644]
    + xx[421];
  xx[380] = xx[553] + xx[396] + xx[436] + xx[519] + xx[560] + xx[650] - xx[608]
    - xx[561];
  xx[508] = - (xx[334] + xx[386] * xx[414]);
  xx[509] = - (xx[404] + xx[387] * xx[414]);
  xx[510] = - (xx[403] + xx[388] * xx[414]);
  xx[511] = - (xx[389] + xx[518] * xx[386]);
  xx[512] = - (xx[648] + xx[518] * xx[387]);
  xx[513] = - (xx[380] + xx[518] * xx[388]);
  xx[514] = xx[343] + xx[381] * xx[386];
  xx[515] = xx[361] + xx[381] * xx[387];
  xx[516] = - (xx[377] - xx[381] * xx[388]);
  pm_math_matrix3x3ComposeTranspose(xx + 508, xx + 678, xx + 544);
  pm_math_matrix3x3Compose(xx + 678, xx + 544, xx + 508);
  pm_math_matrix3x3PostCross(xx + 508, xx + 556, xx + 544);
  xx[390] = xx[460] + xx[438] + xx[521] + xx[610] + xx[459] + xx[628];
  xx[391] = xx[442] * xx[386];
  xx[392] = xx[440] + xx[523] + xx[612];
  xx[393] = xx[386] * xx[429];
  xx[396] = xx[415] + xx[441] + xx[524] + xx[613] + xx[662];
  xx[415] = xx[443] + xx[526] + xx[615];
  xx[421] = xx[387] * xx[429];
  xx[424] = xx[444] + xx[527] + xx[616];
  xx[425] = xx[434] + xx[446] + xx[529] + xx[618] + xx[459] + xx[575];
  xx[559] = xx[390] - xx[397] * xx[386];
  xx[560] = xx[382] - xx[391];
  xx[561] = xx[392] - xx[393];
  xx[562] = xx[396] - xx[391];
  xx[563] = xx[572] - xx[442] * xx[387];
  xx[564] = xx[415] - xx[421];
  xx[565] = xx[424] - xx[393];
  xx[566] = xx[383] - xx[421];
  xx[567] = xx[425] - xx[388] * xx[429];
  pm_math_matrix3x3ComposeTranspose(xx + 559, xx + 678, xx + 597);
  pm_math_matrix3x3Compose(xx + 678, xx + 597, xx + 559);
  pm_math_matrix3x3PostCross(xx + 559, xx + 556, xx + 597);
  pm_math_matrix3x3PreCross(xx + 597, xx + 556, xx + 607);
  xx[391] = xx[55] + xx[447] - xx[544] - xx[544] - xx[607];
  xx[393] = xx[509] - xx[600];
  xx[421] = xx[510] - xx[603];
  xx[426] = xx[391] - (xx[235] * xx[393] + xx[234] * xx[421]);
  xx[427] = xx[398] + xx[563];
  xx[428] = xx[393] - (xx[427] * xx[235] + xx[234] * xx[564]);
  xx[430] = xx[398] + xx[567];
  xx[432] = xx[421] - (xx[235] * xx[566] + xx[430] * xx[234]);
  xx[434] = xx[448] - xx[545] - xx[547] - xx[608];
  xx[436] = xx[508] - xx[597];
  xx[438] = xx[434] + xx[235] * xx[436] - xx[233] * xx[421];
  xx[440] = xx[512] - xx[601];
  xx[441] = xx[440] + xx[235] * xx[562] - xx[233] * xx[564];
  xx[443] = xx[513] - xx[604];
  xx[444] = xx[443] + xx[235] * xx[565] - xx[430] * xx[233];
  xx[446] = xx[438] - (xx[441] * xx[235] + xx[444] * xx[234]);
  xx[456] = xx[449] - xx[546] - xx[550] - xx[609];
  xx[459] = xx[456] + xx[234] * xx[436] + xx[233] * xx[393];
  xx[460] = xx[515] - xx[602];
  xx[503] = xx[460] + xx[234] * xx[562] + xx[427] * xx[233];
  xx[508] = xx[516] - xx[605];
  xx[509] = xx[508] + xx[234] * xx[565] + xx[233] * xx[566];
  xx[510] = xx[459] - (xx[503] * xx[235] + xx[509] * xx[234]);
  xx[512] = xx[56] + xx[451] - xx[548] - xx[548] - xx[611];
  xx[513] = xx[511] - xx[598];
  xx[511] = xx[512] + xx[235] * xx[513] - xx[233] * xx[443];
  xx[515] = xx[398] + xx[559];
  xx[516] = xx[513] + xx[515] * xx[235] - xx[233] * xx[561];
  xx[519] = xx[452] - xx[549] - xx[551] - xx[612];
  xx[520] = xx[519] + xx[234] * xx[513] + xx[233] * xx[440];
  xx[521] = xx[514] - xx[599];
  xx[514] = xx[521] + xx[515] * xx[234] + xx[233] * xx[560];
  xx[523] = xx[520] + xx[514] * xx[235] - xx[509] * xx[233];
  xx[524] = xx[57] + xx[455] - xx[552] - xx[552] - xx[615];
  xx[526] = xx[524] + xx[234] * xx[521] + xx[233] * xx[460];
  xx[597] = xx[426] - (xx[428] * xx[235] + xx[432] * xx[234]);
  xx[598] = xx[446];
  xx[599] = xx[510];
  xx[600] = xx[446];
  xx[601] = xx[511] + xx[516] * xx[235] - xx[444] * xx[233];
  xx[602] = xx[523];
  xx[603] = xx[510];
  xx[604] = xx[523];
  xx[605] = xx[526] + xx[514] * xx[234] + xx[503] * xx[233];
  ii[1] = factorSymmetricPosDef(xx + 597, 3, xx + 552);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_15/Spherical1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  pm_math_quatCompose(xx + 309, xx + 201, xx + 552);
  xx[446] = xx[203] * xx[203];
  xx[510] = xx[204] * xx[204];
  xx[523] = xx[203] * xx[202];
  xx[527] = xx[201] * xx[204];
  xx[529] = xx[18] * (xx[523] - xx[527]);
  xx[544] = xx[201] * xx[203];
  xx[548] = xx[202] * xx[204];
  xx[567] = xx[3] - (xx[446] + xx[510]) * xx[18];
  xx[568] = xx[529];
  xx[569] = (xx[544] + xx[548]) * xx[18];
  pm_math_cross3(xx + 567, xx + 236, xx + 616);
  pm_math_quatXform(xx + 552, xx + 616, xx + 567);
  xx[616] = xx[189];
  xx[617] = xx[191];
  xx[618] = xx[187];
  xx[187] = xx[190] * xx[261];
  xx[191] = xx[192] * xx[253];
  xx[559] = xx[187] + xx[191];
  xx[563] = xx[261] * xx[189];
  xx[570] = xx[253] * xx[189];
  xx[634] = - xx[559];
  xx[635] = - xx[563];
  xx[636] = - xx[570];
  pm_math_cross3(xx + 616, xx + 634, xx + 637);
  xx[575] = xx[190] * xx[234];
  xx[592] = xx[192] * xx[235];
  xx[628] = xx[575] - xx[592];
  xx[629] = xx[234] * xx[189];
  xx[634] = xx[235] * xx[189];
  xx[640] = xx[628];
  xx[641] = xx[629];
  xx[642] = - xx[634];
  pm_math_cross3(xx + 616, xx + 640, xx + 643);
  xx[635] = (xx[628] * xx[188] + xx[643]) * xx[18];
  xx[628] = xx[18] * (xx[644] + xx[629] * xx[188]);
  xx[629] = (xx[645] - xx[634] * xx[188]) * xx[18];
  xx[640] = xx[18] * (xx[637] - xx[559] * xx[188]) + xx[635];
  xx[641] = xx[18] * (xx[638] - xx[563] * xx[188]) + xx[628] - xx[253] - xx[235];
  xx[642] = xx[261] + xx[18] * (xx[639] - xx[570] * xx[188]) + xx[629] - xx[234];
  pm_math_quatXform(xx + 305, xx + 640, xx + 636);
  xx[559] = xx[567] + xx[636];
  xx[563] = xx[202] * xx[202];
  xx[570] = xx[203] * xx[204];
  xx[634] = xx[201] * xx[202];
  xx[639] = xx[18] * (xx[570] - xx[634]);
  xx[640] = (xx[527] + xx[523]) * xx[18];
  xx[641] = xx[3] - (xx[510] + xx[563]) * xx[18];
  xx[642] = xx[639];
  pm_math_cross3(xx + 640, xx + 236, xx + 643);
  pm_math_quatXform(xx + 552, xx + 643, xx + 640);
  xx[643] = xx[190] * xx[255];
  xx[644] = xx[255] * xx[189];
  xx[645] = xx[644] - xx[191];
  xx[191] = xx[190] * xx[253];
  xx[649] = xx[643];
  xx[650] = xx[645];
  xx[651] = xx[191];
  pm_math_cross3(xx + 616, xx + 649, xx + 652);
  xx[646] = xx[190] * xx[233];
  xx[647] = xx[233] * xx[189];
  xx[649] = xx[592] - xx[647];
  xx[592] = xx[190] * xx[235];
  xx[655] = xx[646];
  xx[656] = - xx[649];
  xx[657] = xx[592];
  pm_math_cross3(xx + 616, xx + 655, xx + 658);
  xx[650] = xx[18] * (xx[658] + xx[646] * xx[188]);
  xx[646] = xx[18] * (xx[659] - xx[649] * xx[188]);
  xx[649] = (xx[592] * xx[188] + xx[660]) * xx[18];
  xx[655] = xx[253] + (xx[643] * xx[188] + xx[652]) * xx[18] + xx[650] + xx[235];
  xx[656] = (xx[645] * xx[188] + xx[653]) * xx[18] + xx[646];
  xx[657] = (xx[191] * xx[188] + xx[654]) * xx[18] + xx[649] - xx[255] - xx[233];
  pm_math_quatXform(xx + 305, xx + 655, xx + 651);
  xx[191] = xx[640] + xx[651];
  xx[253] = xx[676] + xx[505];
  xx[592] = xx[18] * (xx[548] - xx[544]);
  xx[654] = xx[592];
  xx[655] = (xx[634] + xx[570]) * xx[18];
  xx[656] = xx[3] - (xx[563] + xx[446]) * xx[18];
  pm_math_cross3(xx + 654, xx + 236, xx + 657);
  pm_math_quatXform(xx + 552, xx + 657, xx + 654);
  xx[552] = xx[192] * xx[255];
  xx[553] = xx[192] * xx[261];
  xx[554] = xx[644] - xx[187];
  pm_math_cross3(xx + 616, xx + 552, xx + 643);
  xx[187] = xx[192] * xx[233];
  xx[555] = xx[192] * xx[234];
  xx[657] = xx[647] + xx[575];
  xx[658] = xx[187];
  xx[659] = - xx[555];
  xx[660] = xx[657];
  pm_math_cross3(xx + 616, xx + 658, xx + 664);
  xx[575] = (xx[187] * xx[188] + xx[664]) * xx[18];
  xx[187] = xx[18] * (xx[665] - xx[555] * xx[188]);
  xx[555] = (xx[657] * xx[188] + xx[666]) * xx[18];
  xx[657] = (xx[552] * xx[188] + xx[643]) * xx[18] + xx[575] - xx[261] + xx[234];
  xx[658] = xx[255] + (xx[553] * xx[188] + xx[644]) * xx[18] + xx[187] + xx[233];
  xx[659] = (xx[554] * xx[188] + xx[645]) * xx[18] + xx[555];
  pm_math_quatXform(xx + 305, xx + 657, xx + 552);
  xx[255] = xx[654] + xx[552];
  xx[261] = xx[677] + xx[506];
  xx[504] = xx[559] - (xx[333] - (xx[235] * xx[594] + xx[234] * xx[595]));
  xx[505] = xx[191] - (xx[253] + xx[235] * xx[593] - xx[233] * xx[595]);
  xx[506] = xx[255] - (xx[261] + xx[234] * xx[593] + xx[233] * xx[594]);
  solveSymmetricPosDef(xx + 597, xx + 504, 3, 1, xx + 643, xx + 657);
  xx[504] = xx[450] - xx[547] - xx[545] - xx[610];
  xx[505] = xx[504] - (xx[235] * xx[440] + xx[234] * xx[443]);
  xx[506] = xx[453] - xx[550] - xx[546] - xx[613];
  xx[545] = xx[506] - (xx[235] * xx[460] + xx[234] * xx[508]);
  xx[447] = xx[454] - xx[551] - xx[549] - xx[614];
  xx[448] = xx[447] + xx[235] * xx[521] - xx[233] * xx[508];
  xx[449] = xx[333] + xx[426] * xx[643] + xx[438] * xx[644] + xx[459] * xx[645];
  xx[450] = xx[253] + xx[505] * xx[643] + xx[511] * xx[644] + xx[520] * xx[645];
  xx[451] = xx[261] + xx[545] * xx[643] + xx[448] * xx[644] + xx[526] * xx[645];
  pm_math_quatXform(xx + 193, xx + 449, xx + 452);
  xx[449] = xx[256];
  xx[450] = xx[277];
  xx[451] = xx[267];
  xx[253] = xx[436] - (xx[235] * xx[560] + xx[234] * xx[561]);
  xx[549] = xx[593] + xx[253] * xx[643] + xx[516] * xx[644] + xx[514] * xx[645];
  xx[550] = xx[594] + xx[428] * xx[643] + xx[441] * xx[644] + xx[503] * xx[645];
  xx[551] = xx[595] + xx[432] * xx[643] + xx[444] * xx[644] + xx[509] * xx[645];
  pm_math_quatXform(xx + 193, xx + 549, xx + 593);
  pm_math_cross3(xx + 449, xx + 593, xx + 549);
  xx[261] = xx[452] + xx[549];
  xx[333] = xx[188] * xx[188];
  xx[455] = (xx[333] + xx[189] * xx[189]) * xx[18] - xx[3];
  xx[546] = xx[192] * xx[188];
  xx[547] = xx[190] * xx[189];
  xx[607] = xx[18] * (xx[546] - xx[547]);
  xx[608] = xx[192] * xx[189];
  xx[609] = xx[190] * xx[188];
  xx[610] = (xx[608] + xx[609]) * xx[18];
  xx[611] = (xx[547] + xx[546]) * xx[18];
  xx[546] = (xx[333] + xx[190] * xx[190]) * xx[18] - xx[3];
  xx[547] = xx[192] * xx[190];
  xx[612] = xx[188] * xx[189];
  xx[613] = xx[18] * (xx[547] - xx[612]);
  xx[614] = xx[18] * (xx[609] - xx[608]);
  xx[608] = (xx[547] + xx[612]) * xx[18];
  xx[547] = (xx[333] + xx[192] * xx[192]) * xx[18] - xx[3];
  xx[674] = xx[455];
  xx[675] = xx[607];
  xx[676] = - xx[610];
  xx[677] = - xx[611];
  xx[678] = xx[546];
  xx[679] = xx[613];
  xx[680] = xx[614];
  xx[681] = xx[608];
  xx[682] = xx[547];
  xx[683] = xx[426];
  xx[684] = xx[438];
  xx[685] = xx[459];
  xx[686] = xx[505];
  xx[687] = xx[511];
  xx[688] = xx[520];
  xx[689] = xx[545];
  xx[690] = xx[448];
  xx[691] = xx[526];
  xx[692] = xx[253];
  xx[693] = xx[516];
  xx[694] = xx[514];
  xx[695] = xx[428];
  xx[696] = xx[441];
  xx[697] = xx[503];
  xx[698] = xx[432];
  xx[699] = xx[444];
  xx[700] = xx[509];
  solveSymmetricPosDef(xx + 597, xx + 683, 3, 6, xx + 701, xx + 657);
  xx[333] = xx[505] * xx[701] + xx[511] * xx[702] + xx[520] * xx[703];
  xx[609] = xx[545] * xx[701] + xx[448] * xx[702] + xx[526] * xx[703];
  xx[612] = xx[545] * xx[704] + xx[448] * xx[705] + xx[526] * xx[706];
  xx[683] = xx[391] - (xx[426] * xx[701] + xx[438] * xx[702] + xx[459] * xx[703]);
  xx[684] = xx[434] - xx[333];
  xx[685] = xx[456] - xx[609];
  xx[686] = xx[504] - xx[333];
  xx[687] = xx[512] - (xx[505] * xx[704] + xx[511] * xx[705] + xx[520] * xx[706]);
  xx[688] = xx[519] - xx[612];
  xx[689] = xx[506] - xx[609];
  xx[690] = xx[447] - xx[612];
  xx[691] = xx[524] - (xx[545] * xx[707] + xx[448] * xx[708] + xx[526] * xx[709]);
  pm_math_matrix3x3ComposeTranspose(xx + 683, xx + 674, xx + 692);
  pm_math_matrix3x3Compose(xx + 674, xx + 692, xx + 683);
  xx[692] = xx[436] - (xx[426] * xx[710] + xx[438] * xx[711] + xx[459] * xx[712]);
  xx[693] = xx[393] - (xx[426] * xx[713] + xx[438] * xx[714] + xx[459] * xx[715]);
  xx[694] = xx[421] - (xx[426] * xx[716] + xx[438] * xx[717] + xx[459] * xx[718]);
  xx[695] = xx[513] - (xx[505] * xx[710] + xx[511] * xx[711] + xx[520] * xx[712]);
  xx[696] = xx[440] - (xx[505] * xx[713] + xx[511] * xx[714] + xx[520] * xx[715]);
  xx[697] = xx[443] - (xx[505] * xx[716] + xx[511] * xx[717] + xx[520] * xx[718]);
  xx[698] = xx[521] - (xx[545] * xx[710] + xx[448] * xx[711] + xx[526] * xx[712]);
  xx[699] = xx[460] - (xx[545] * xx[713] + xx[448] * xx[714] + xx[526] * xx[715]);
  xx[700] = xx[508] - (xx[545] * xx[716] + xx[448] * xx[717] + xx[526] * xx[718]);
  pm_math_matrix3x3ComposeTranspose(xx + 692, xx + 674, xx + 719);
  pm_math_matrix3x3Compose(xx + 674, xx + 719, xx + 692);
  pm_math_matrix3x3PostCross(xx + 692, xx + 449, xx + 719);
  xx[333] = xx[428] * xx[710] + xx[441] * xx[711] + xx[503] * xx[712];
  xx[609] = xx[432] * xx[710] + xx[444] * xx[711] + xx[509] * xx[712];
  xx[612] = xx[432] * xx[713] + xx[444] * xx[714] + xx[509] * xx[715];
  xx[728] = xx[515] - (xx[253] * xx[710] + xx[516] * xx[711] + xx[514] * xx[712]);
  xx[729] = xx[560] - xx[333];
  xx[730] = xx[561] - xx[609];
  xx[731] = xx[562] - xx[333];
  xx[732] = xx[427] - (xx[428] * xx[713] + xx[441] * xx[714] + xx[503] * xx[715]);
  xx[733] = xx[564] - xx[612];
  xx[734] = xx[565] - xx[609];
  xx[735] = xx[566] - xx[612];
  xx[736] = xx[430] - (xx[432] * xx[716] + xx[444] * xx[717] + xx[509] * xx[718]);
  pm_math_matrix3x3ComposeTranspose(xx + 728, xx + 674, xx + 737);
  pm_math_matrix3x3Compose(xx + 674, xx + 737, xx + 728);
  pm_math_matrix3x3PostCross(xx + 728, xx + 449, xx + 674);
  pm_math_matrix3x3PreCross(xx + 674, xx + 449, xx + 737);
  xx[333] = xx[83] + xx[683] - xx[719] - xx[719] - xx[737];
  xx[609] = xx[684] - xx[720] - xx[722] - xx[738];
  xx[612] = xx[692] - xx[674];
  xx[615] = xx[693] - xx[677];
  xx[647] = xx[694] - xx[680];
  xx[657] = xx[695] - xx[675];
  xx[658] = xx[696] - xx[678];
  xx[659] = xx[697] - xx[681];
  xx[660] = xx[698] - xx[676];
  xx[661] = xx[699] - xx[679];
  xx[662] = xx[700] - xx[682];
  xx[674] = xx[612];
  xx[675] = xx[615];
  xx[676] = xx[647];
  xx[677] = xx[657];
  xx[678] = xx[658];
  xx[679] = xx[659];
  xx[680] = xx[660];
  xx[681] = xx[661];
  xx[682] = xx[662];
  pm_math_matrix3x3Xform(xx + 674, xx + 116, xx + 664);
  xx[668] = xx[333] - xx[94] * xx[609] + xx[664];
  xx[669] = xx[686] - xx[722] - xx[720] - xx[740];
  xx[672] = xx[84] + xx[687] - xx[723] - xx[723] - xx[741];
  xx[692] = xx[669] - xx[672] * xx[94] + xx[665];
  xx[693] = xx[78] + xx[728];
  xx[694] = xx[78] + xx[732];
  xx[746] = xx[693];
  xx[747] = xx[729];
  xx[748] = xx[730];
  xx[749] = xx[731];
  xx[750] = xx[694];
  xx[751] = xx[733];
  xx[752] = xx[734];
  xx[753] = xx[735];
  xx[754] = xx[78] + xx[736];
  pm_math_matrix3x3Xform(xx + 746, xx + 116, xx + 695);
  xx[698] = xx[612] - xx[94] * xx[657] + xx[695];
  xx[699] = xx[615] - xx[94] * xx[658] + xx[696];
  xx[695] = xx[647] - xx[94] * xx[659] + xx[697];
  xx[755] = xx[698];
  xx[756] = xx[699];
  xx[757] = xx[695];
  xx[696] = 7.670997177269469e-12;
  xx[758] = - xx[114];
  xx[759] = xx[95];
  xx[760] = xx[696];
  pm_math_matrix3x3Xform(xx + 674, xx + 758, xx + 761);
  xx[697] = xx[333] * xx[94] + xx[609] + xx[761];
  xx[700] = xx[94] * xx[669] + xx[672] + xx[762];
  pm_math_matrix3x3Xform(xx + 746, xx + 758, xx + 764);
  xx[728] = xx[94] * xx[612] + xx[657] + xx[764];
  xx[732] = xx[94] * xx[615] + xx[658] + xx[765];
  xx[764] = xx[94] * xx[647] + xx[659] + xx[766];
  xx[765] = xx[728];
  xx[766] = xx[732];
  xx[767] = xx[764];
  xx[768] = xx[697] - xx[700] * xx[94] + pm_math_dot3(xx + 116, xx + 765);
  xx[769] = xx[685] - xx[721] - xx[725] - xx[739];
  xx[770] = xx[769] + xx[72] * xx[615] - xx[73] * xx[612];
  xx[771] = xx[688] - xx[724] - xx[726] - xx[742];
  xx[772] = xx[771] + xx[72] * xx[658] - xx[73] * xx[657];
  xx[773] = xx[660] + xx[72] * xx[729] - xx[693] * xx[73];
  xx[774] = xx[661] + xx[694] * xx[72] - xx[73] * xx[731];
  xx[775] = xx[662] + xx[72] * xx[735] - xx[73] * xx[734];
  xx[776] = xx[770] - xx[772] * xx[94] + pm_math_dot3(xx + 116, xx + 773);
  xx[777] = xx[770] * xx[94] + xx[772] + pm_math_dot3(xx + 758, xx + 773);
  xx[719] = xx[85] + xx[691] - xx[727] - xx[727] - xx[745];
  xx[720] = xx[719] + xx[72] * xx[661] - xx[73] * xx[660];
  xx[778] = xx[668] - xx[692] * xx[94] + pm_math_dot3(xx + 116, xx + 755);
  xx[779] = xx[768];
  xx[780] = xx[776];
  xx[781] = xx[768];
  xx[782] = xx[697] * xx[94] + xx[700] + pm_math_dot3(xx + 758, xx + 765);
  xx[783] = xx[777];
  xx[784] = xx[776];
  xx[785] = xx[777];
  xx[786] = xx[720] + xx[774] * xx[72] - xx[773] * xx[73];
  ii[1] = factorSymmetricPosDef(xx + 778, 3, xx + 755);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_15/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  pm_math_quatCompose(xx + 305, xx + 211, xx + 765);
  xx[722] = xx[94] * xx[214];
  xx[723] = xx[94] * xx[212] + xx[213];
  xx[755] = xx[722];
  xx[756] = xx[214];
  xx[757] = - xx[723];
  pm_math_cross3(xx + 212, xx + 755, xx + 787);
  xx[727] = xx[211] * xx[214];
  xx[755] = xx[3] + (xx[787] - xx[211] * xx[722]) * xx[18];
  xx[756] = xx[18] * (xx[788] - xx[727]) - xx[94];
  xx[757] = xx[18] * (xx[789] + xx[211] * xx[723]);
  pm_math_cross3(xx + 755, xx + 236, xx + 787);
  pm_math_quatXform(xx + 765, xx + 787, xx + 755);
  xx[723] = - (xx[268] * xx[94]);
  xx[787] = xx[723];
  xx[788] = - xx[268];
  xx[789] = xx[278] + xx[262] * xx[94];
  pm_math_quatXform(xx + 183, xx + 787, xx + 790);
  pm_math_quatXform(xx + 183, xx + 116, xx + 787);
  xx[793] = xx[790] + xx[787];
  xx[794] = xx[791] + xx[788];
  xx[795] = xx[792] + xx[789];
  pm_math_quatXform(xx + 301, xx + 793, xx + 790);
  xx[776] = xx[755] + xx[790];
  xx[777] = xx[453] + xx[550];
  xx[793] = xx[212] - xx[94] * xx[213];
  xx[794] = - xx[214];
  xx[795] = xx[722];
  xx[796] = xx[793];
  pm_math_cross3(xx + 212, xx + 794, xx + 797);
  xx[794] = xx[94] + (xx[727] + xx[797]) * xx[18];
  xx[795] = xx[3] + xx[18] * (xx[798] - xx[94] * xx[727]);
  xx[796] = xx[18] * (xx[799] - xx[211] * xx[793]);
  pm_math_cross3(xx + 794, xx + 236, xx + 797);
  pm_math_quatXform(xx + 765, xx + 797, xx + 793);
  xx[796] = xx[268];
  xx[797] = xx[723];
  xx[798] = xx[278] * xx[94] - xx[262];
  pm_math_quatXform(xx + 183, xx + 796, xx + 799);
  pm_math_quatXform(xx + 183, xx + 758, xx + 796);
  xx[802] = xx[799] + xx[796];
  xx[803] = xx[800] + xx[797];
  xx[804] = xx[801] + xx[798];
  pm_math_quatXform(xx + 301, xx + 802, xx + 799);
  xx[268] = xx[793] + xx[799];
  xx[722] = xx[212] * xx[214];
  xx[723] = xx[211] * xx[213];
  xx[802] = xx[18] * (xx[722] - xx[723]);
  xx[803] = xx[211] * xx[212];
  xx[804] = xx[213] * xx[214];
  xx[805] = xx[212] * xx[212];
  xx[806] = xx[213] * xx[213];
  xx[807] = xx[802];
  xx[808] = (xx[803] + xx[804]) * xx[18];
  xx[809] = xx[3] - (xx[805] + xx[806]) * xx[18];
  pm_math_cross3(xx + 807, xx + 236, xx + 810);
  pm_math_quatXform(xx + 765, xx + 810, xx + 807);
  xx[765] = xx[178];
  xx[766] = xx[180];
  xx[767] = xx[182];
  xx[178] = xx[262] * xx[181];
  xx[180] = xx[278] * xx[181];
  xx[182] = xx[262] * xx[177] + xx[179] * xx[278];
  xx[810] = xx[178];
  xx[811] = xx[180];
  xx[812] = - xx[182];
  pm_math_cross3(xx + 765, xx + 810, xx + 813);
  xx[768] = xx[72] * xx[181];
  xx[810] = xx[73] * xx[181];
  xx[811] = xx[72] * xx[177] + xx[179] * xx[73];
  xx[816] = xx[768];
  xx[817] = xx[810];
  xx[818] = - xx[811];
  pm_math_cross3(xx + 765, xx + 816, xx + 819);
  xx[812] = xx[18] * (xx[819] + xx[768] * xx[176]);
  xx[768] = (xx[810] * xx[176] + xx[820]) * xx[18];
  xx[810] = (xx[821] - xx[811] * xx[176]) * xx[18];
  xx[816] = xx[18] * (xx[813] + xx[178] * xx[176]) + xx[812] - xx[278] - xx[73];
  xx[817] = xx[262] + xx[18] * (xx[814] + xx[180] * xx[176]) + xx[768] + xx[72];
  xx[818] = (xx[815] - xx[182] * xx[176]) * xx[18] + xx[810];
  pm_math_quatXform(xx + 301, xx + 816, xx + 813);
  xx[178] = xx[807] + xx[813];
  xx[180] = xx[454] + xx[551];
  xx[452] = xx[776] - (xx[261] - xx[777] * xx[94] + pm_math_dot3(xx + 116, xx +
    593));
  xx[453] = xx[268] - (xx[261] * xx[94] + xx[777] + pm_math_dot3(xx + 758, xx +
    593));
  xx[454] = xx[178] - (xx[180] + xx[72] * xx[594] - xx[73] * xx[593]);
  solveSymmetricPosDef(xx + 778, xx + 452, 3, 1, xx + 549, xx + 816);
  xx[182] = xx[689] - xx[725] - xx[721] - xx[743];
  xx[262] = xx[690] - xx[726] - xx[724] - xx[744];
  xx[278] = xx[182] - xx[94] * xx[262] + xx[666];
  xx[452] = xx[94] * xx[182] + xx[262] + xx[763];
  xx[664] = xx[261] + xx[668] * xx[549] + xx[697] * xx[550] + xx[770] * xx[551];
  xx[665] = xx[777] + xx[692] * xx[549] + xx[700] * xx[550] + xx[772] * xx[551];
  xx[666] = xx[180] + xx[278] * xx[549] + xx[452] * xx[550] + xx[720] * xx[551];
  pm_math_quatXform(xx + 183, xx + 664, xx + 683);
  xx[664] = xx[593] + xx[698] * xx[549] + xx[728] * xx[550] + xx[773] * xx[551];
  xx[665] = xx[594] + xx[699] * xx[549] + xx[732] * xx[550] + xx[774] * xx[551];
  xx[666] = xx[595] + xx[695] * xx[549] + xx[764] * xx[550] + xx[775] * xx[551];
  pm_math_quatXform(xx + 183, xx + 664, xx + 593);
  pm_math_cross3(xx + 282, xx + 593, xx + 664);
  xx[180] = xx[176] * xx[176];
  xx[261] = (xx[180] + xx[177] * xx[177]) * xx[18] - xx[3];
  xx[453] = xx[179] * xx[177];
  xx[454] = xx[176] * xx[181];
  xx[595] = (xx[453] + xx[454]) * xx[18];
  xx[664] = xx[177] * xx[181];
  xx[665] = xx[179] * xx[176];
  xx[683] = xx[18] * (xx[664] - xx[665]);
  xx[684] = xx[18] * (xx[453] - xx[454]);
  xx[453] = (xx[180] + xx[179] * xx[179]) * xx[18] - xx[3];
  xx[454] = xx[179] * xx[181];
  xx[686] = xx[176] * xx[177];
  xx[687] = (xx[454] + xx[686]) * xx[18];
  xx[688] = (xx[664] + xx[665]) * xx[18];
  xx[664] = xx[18] * (xx[454] - xx[686]);
  xx[454] = (xx[180] + xx[181] * xx[181]) * xx[18] - xx[3];
  xx[737] = xx[261];
  xx[738] = xx[595];
  xx[739] = xx[683];
  xx[740] = xx[684];
  xx[741] = xx[453];
  xx[742] = xx[687];
  xx[743] = xx[688];
  xx[744] = xx[664];
  xx[745] = xx[454];
  xx[816] = xx[668];
  xx[817] = xx[697];
  xx[818] = xx[770];
  xx[819] = xx[692];
  xx[820] = xx[700];
  xx[821] = xx[772];
  xx[822] = xx[278];
  xx[823] = xx[452];
  xx[824] = xx[720];
  xx[825] = xx[698];
  xx[826] = xx[728];
  xx[827] = xx[773];
  xx[828] = xx[699];
  xx[829] = xx[732];
  xx[830] = xx[774];
  xx[831] = xx[695];
  xx[832] = xx[764];
  xx[833] = xx[775];
  solveSymmetricPosDef(xx + 778, xx + 816, 3, 6, xx + 834, xx + 689);
  xx[180] = xx[692] * xx[834] + xx[700] * xx[835] + xx[772] * xx[836];
  xx[665] = xx[278] * xx[834] + xx[452] * xx[835] + xx[720] * xx[836];
  xx[686] = xx[278] * xx[837] + xx[452] * xx[838] + xx[720] * xx[839];
  xx[816] = xx[333] - (xx[668] * xx[834] + xx[697] * xx[835] + xx[770] * xx[836]);
  xx[817] = xx[609] - xx[180];
  xx[818] = xx[769] - xx[665];
  xx[819] = xx[669] - xx[180];
  xx[820] = xx[672] - (xx[692] * xx[837] + xx[700] * xx[838] + xx[772] * xx[839]);
  xx[821] = xx[771] - xx[686];
  xx[822] = xx[182] - xx[665];
  xx[823] = xx[262] - xx[686];
  xx[824] = xx[719] - (xx[278] * xx[840] + xx[452] * xx[841] + xx[720] * xx[842]);
  pm_math_matrix3x3ComposeTranspose(xx + 816, xx + 737, xx + 825);
  pm_math_matrix3x3Compose(xx + 737, xx + 825, xx + 816);
  xx[825] = xx[612] - (xx[668] * xx[843] + xx[697] * xx[844] + xx[770] * xx[845]);
  xx[826] = xx[615] - (xx[668] * xx[846] + xx[697] * xx[847] + xx[770] * xx[848]);
  xx[827] = xx[647] - (xx[668] * xx[849] + xx[697] * xx[850] + xx[770] * xx[851]);
  xx[828] = xx[657] - (xx[692] * xx[843] + xx[700] * xx[844] + xx[772] * xx[845]);
  xx[829] = xx[658] - (xx[692] * xx[846] + xx[700] * xx[847] + xx[772] * xx[848]);
  xx[830] = xx[659] - (xx[692] * xx[849] + xx[700] * xx[850] + xx[772] * xx[851]);
  xx[831] = xx[660] - (xx[278] * xx[843] + xx[452] * xx[844] + xx[720] * xx[845]);
  xx[832] = xx[661] - (xx[278] * xx[846] + xx[452] * xx[847] + xx[720] * xx[848]);
  xx[833] = xx[662] - (xx[278] * xx[849] + xx[452] * xx[850] + xx[720] * xx[851]);
  pm_math_matrix3x3ComposeTranspose(xx + 825, xx + 737, xx + 852);
  pm_math_matrix3x3Compose(xx + 737, xx + 852, xx + 825);
  pm_math_matrix3x3PostCross(xx + 825, xx + 282, xx + 852);
  xx[180] = xx[699] * xx[843] + xx[732] * xx[844] + xx[774] * xx[845];
  xx[612] = xx[695] * xx[843] + xx[764] * xx[844] + xx[775] * xx[845];
  xx[615] = xx[695] * xx[846] + xx[764] * xx[847] + xx[775] * xx[848];
  xx[861] = xx[693] - (xx[698] * xx[843] + xx[728] * xx[844] + xx[773] * xx[845]);
  xx[862] = xx[729] - xx[180];
  xx[863] = xx[730] - xx[612];
  xx[864] = xx[731] - xx[180];
  xx[865] = xx[694] - (xx[699] * xx[846] + xx[732] * xx[847] + xx[774] * xx[848]);
  xx[866] = xx[733] - xx[615];
  xx[867] = xx[734] - xx[612];
  xx[868] = xx[735] - xx[615];
  xx[869] = xx[736] - (xx[695] * xx[849] + xx[764] * xx[850] + xx[775] * xx[851])
    + xx[78];
  pm_math_matrix3x3ComposeTranspose(xx + 861, xx + 737, xx + 870);
  pm_math_matrix3x3Compose(xx + 737, xx + 870, xx + 861);
  pm_math_matrix3x3PostCross(xx + 861, xx + 282, xx + 870);
  pm_math_matrix3x3PreCross(xx + 870, xx + 282, xx + 879);
  xx[180] = xx[831] - xx[872];
  xx[612] = xx[832] - xx[875];
  xx[615] = xx[824] - xx[860] - xx[860] - xx[887] - xx[285] * xx[180] - xx[281] *
    xx[612] + xx[57];
  xx[647] = xx[398] + xx[861];
  xx[657] = xx[180] - (xx[647] * xx[285] + xx[281] * xx[862]);
  xx[658] = xx[398] + xx[865];
  xx[659] = xx[612] - (xx[285] * xx[864] + xx[658] * xx[281]);
  xx[660] = xx[615] - (xx[657] * xx[285] + xx[659] * xx[281]);
  ii[1] = factorSymmetricPosDef(xx + 660, 1, xx + 661);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[661] = (xx[295] - (xx[685] + xx[666] - (xx[285] * xx[593] + xx[281] * xx
    [594]))) / xx[660];
  xx[689] = xx[834];
  xx[690] = xx[837];
  xx[691] = xx[840];
  xx[593] = xx[179] * xx[661];
  xx[594] = xx[661] * xx[177];
  xx[662] = (xx[593] * xx[176] + xx[594] * xx[181]) * xx[18];
  xx[665] = xx[18] * (xx[593] * xx[181] - xx[594] * xx[176]);
  xx[666] = xx[661] - (xx[594] * xx[177] + xx[179] * xx[593]) * xx[18];
  xx[724] = xx[662];
  xx[725] = xx[665];
  xx[726] = xx[666];
  xx[729] = xx[843];
  xx[730] = xx[846];
  xx[731] = xx[849];
  xx[593] = xx[661] * xx[282] - xx[281] * xx[661];
  xx[594] = xx[593] * xx[181];
  xx[685] = xx[285] * xx[661] + xx[661] * xx[283];
  xx[686] = xx[685] * xx[181];
  xx[693] = xx[593] * xx[177] + xx[179] * xx[685];
  xx[733] = xx[594];
  xx[734] = xx[686];
  xx[735] = - xx[693];
  pm_math_cross3(xx + 765, xx + 733, xx + 761);
  xx[694] = (xx[761] - xx[594] * xx[176]) * xx[18] - xx[685];
  xx[594] = xx[593] + xx[18] * (xx[762] - xx[686] * xx[176]);
  xx[593] = xx[18] * (xx[763] + xx[693] * xx[176]);
  xx[733] = xx[694];
  xx[734] = xx[594];
  xx[735] = xx[593];
  xx[685] = xx[549] - (pm_math_dot3(xx + 689, xx + 724) + pm_math_dot3(xx + 729,
    xx + 733));
  xx[761] = xx[835];
  xx[762] = xx[838];
  xx[763] = xx[841];
  xx[888] = xx[844];
  xx[889] = xx[847];
  xx[890] = xx[850];
  xx[549] = xx[550] - (pm_math_dot3(xx + 761, xx + 724) + pm_math_dot3(xx + 888,
    xx + 733));
  xx[891] = xx[836];
  xx[892] = xx[839];
  xx[893] = xx[842];
  xx[834] = xx[845];
  xx[835] = xx[848];
  xx[836] = xx[851];
  xx[550] = xx[551] - (pm_math_dot3(xx + 891, xx + 724) + pm_math_dot3(xx + 834,
    xx + 733));
  xx[724] = xx[701];
  xx[725] = xx[704];
  xx[726] = xx[707];
  xx[733] = xx[662] + xx[685] + xx[94] * xx[549];
  xx[734] = xx[665] - xx[94] * xx[685] + xx[549];
  xx[735] = xx[666] + xx[550];
  pm_math_quatInverseXform(xx + 193, xx + 733, xx + 837);
  xx[840] = xx[710];
  xx[841] = xx[713];
  xx[842] = xx[716];
  pm_math_cross3(xx + 733, xx + 449, xx + 843);
  xx[733] = xx[694] + xx[95] * xx[685] - xx[114] * xx[549] - xx[73] * xx[550] +
    xx[843];
  xx[734] = xx[594] + xx[114] * xx[685] + xx[95] * xx[549] + xx[72] * xx[550] +
    xx[844];
  xx[735] = xx[593] + xx[115] * xx[685] + xx[696] * xx[549] + xx[845];
  pm_math_quatInverseXform(xx + 193, xx + 733, xx + 843);
  xx[551] = xx[643] - (pm_math_dot3(xx + 724, xx + 837) + pm_math_dot3(xx + 840,
    xx + 843));
  xx[733] = xx[702];
  xx[734] = xx[705];
  xx[735] = xx[708];
  xx[846] = xx[711];
  xx[847] = xx[714];
  xx[848] = xx[717];
  xx[593] = xx[644] - (pm_math_dot3(xx + 733, xx + 837) + pm_math_dot3(xx + 846,
    xx + 843));
  xx[849] = xx[703];
  xx[850] = xx[706];
  xx[851] = xx[709];
  xx[701] = xx[712];
  xx[702] = xx[715];
  xx[703] = xx[718];
  xx[594] = xx[645] - (pm_math_dot3(xx + 849, xx + 837) + pm_math_dot3(xx + 701,
    xx + 843));
  xx[643] = xx[345];
  xx[644] = xx[423];
  xx[645] = - xx[384];
  xx[704] = xx[837] + xx[551];
  xx[705] = xx[838] + xx[593];
  xx[706] = xx[839] + xx[594];
  pm_math_quatInverseXform(xx + 219, xx + 704, xx + 707);
  pm_math_cross3(xx + 704, xx + 556, xx + 710);
  xx[704] = xx[843] + xx[235] * xx[593] + xx[234] * xx[594] + xx[710];
  xx[705] = xx[844] - xx[235] * xx[551] + xx[233] * xx[594] + xx[711];
  xx[706] = xx[845] - xx[234] * xx[551] - xx[233] * xx[593] + xx[712];
  pm_math_quatInverseXform(xx + 219, xx + 704, xx + 710);
  xx[345] = xx[525] - (pm_math_dot3(xx + 643, xx + 707) + pm_math_dot3(xx + 386,
    xx + 710));
  xx[384] = xx[709] - xx[206] * xx[345];
  xx[704] = xx[707] - xx[200] * xx[345];
  xx[705] = xx[708];
  xx[706] = xx[384];
  pm_math_cross3(xx + 704, xx + 249, xx + 707);
  xx[423] = xx[710] + xx[707];
  xx[525] = xx[711] - xx[296] * xx[345] + xx[708];
  xx[662] = xx[525] * xx[210];
  xx[665] = xx[423] * xx[210];
  xx[666] = xx[1] * state[46];
  xx[686] = cos(xx[666]);
  xx[693] = 0.5901074779979936;
  xx[694] = xx[1] * input[8];
  xx[704] = cos(xx[694]);
  xx[705] = 0.5901036711621467;
  xx[706] = sin(xx[694]);
  xx[694] = xx[693] * xx[704] + xx[705] * xx[706];
  xx[707] = xx[686] * xx[694];
  xx[708] = xx[705] * xx[704] - xx[693] * xx[706];
  xx[693] = sin(xx[666]);
  xx[666] = xx[708] * xx[693];
  xx[705] = 0.389585375426561;
  xx[709] = 0.3895819001770367;
  xx[710] = xx[705] * xx[704] - xx[709] * xx[706];
  xx[711] = xx[709] * xx[704] + xx[705] * xx[706];
  xx[704] = xx[710] * xx[686] - xx[693] * xx[711];
  xx[705] = - xx[704];
  xx[706] = xx[710] * xx[693] + xx[686] * xx[711];
  xx[709] = xx[708] * xx[686] - xx[693] * xx[694];
  xx[712] = - (xx[707] + xx[666]);
  xx[713] = xx[705];
  xx[714] = xx[706];
  xx[715] = xx[709];
  xx[716] = xx[58] * state[51] - xx[59] * state[48];
  xx[717] = xx[58] * state[50] + xx[59] * state[49];
  xx[718] = - xx[717];
  xx[721] = xx[59] * state[50] - xx[58] * state[49];
  xx[736] = - xx[721];
  xx[777] = xx[58] * state[48] + xx[59] * state[51];
  xx[811] = - xx[777];
  xx[894] = xx[716];
  xx[895] = xx[718];
  xx[896] = xx[736];
  xx[897] = xx[811];
  pm_math_quatCompose(xx + 712, xx + 894, xx + 898);
  xx[712] = xx[721] * xx[716];
  xx[713] = xx[717] * xx[777];
  xx[714] = xx[721] * xx[777];
  xx[715] = xx[717] * xx[716];
  xx[831] = xx[18] * (xx[714] - xx[715]);
  xx[832] = xx[717] * xx[717];
  xx[837] = xx[721] * xx[721];
  xx[843] = (xx[712] + xx[713]) * xx[18];
  xx[844] = xx[831];
  xx[845] = xx[3] - (xx[832] + xx[837]) * xx[18];
  xx[902] = xx[254];
  xx[903] = xx[276];
  xx[904] = xx[145];
  pm_math_cross3(xx + 843, xx + 902, xx + 905);
  pm_math_quatXform(xx + 898, xx + 905, xx + 843);
  pm_math_quatXform(xx + 894, xx + 74, xx + 898);
  xx[838] = xx[899] * xx[693] - xx[686] * xx[898];
  xx[839] = 6.924287580811761e-12;
  xx[861] = 1.024070757638107e-11;
  xx[865] = xx[839] * xx[693] - xx[861] * xx[686];
  xx[872] = xx[18] * xx[865] * xx[693];
  xx[875] = xx[18] * xx[693] * xx[838] - (xx[899] + xx[872]) + xx[839];
  xx[901] = - xx[694];
  xx[905] = - xx[711];
  xx[906] = xx[901];
  xx[907] = xx[708];
  xx[908] = xx[905];
  xx[909] = xx[18] * xx[865] * xx[686];
  xx[865] = xx[898] + xx[18] * xx[686] * xx[838] - xx[909] - xx[861];
  xx[838] = xx[865] * xx[711];
  xx[910] = xx[875] * xx[711];
  xx[911] = xx[865] * xx[694] + xx[708] * xx[875];
  xx[912] = xx[838];
  xx[913] = - xx[910];
  xx[914] = - xx[911];
  pm_math_cross3(xx + 906, xx + 912, xx + 915);
  xx[912] = xx[843] + xx[875] + xx[18] * (xx[915] + xx[710] * xx[838]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_11/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 918, xx + 96, 9 * sizeof(double));
  xx[838] = xx[666] + xx[707];
  xx[927] = - xx[838];
  xx[928] = xx[705];
  xx[929] = xx[706];
  xx[930] = xx[709];
  pm_math_quatCompose(xx + 927, xx + 894, xx + 931);
  pm_math_quatXform(xx + 931, xx + 146, xx + 935);
  pm_math_quatXform(xx + 894, xx + 116, xx + 938);
  pm_math_quatXform(xx + 927, xx + 938, xx + 941);
  xx[666] = xx[935] + xx[941];
  xx[938] = xx[145];
  xx[939] = xx[144];
  xx[940] = 5.855191459023036e-14;
  pm_math_quatXform(xx + 931, xx + 938, xx + 944);
  pm_math_quatXform(xx + 894, xx + 758, xx + 947);
  pm_math_quatXform(xx + 927, xx + 947, xx + 950);
  xx[144] = xx[944] + xx[950];
  xx[145] = xx[254] * xx[934];
  xx[705] = xx[254] * xx[932] + xx[276] * xx[933];
  xx[947] = - xx[145];
  xx[948] = - (xx[276] * xx[934]);
  xx[949] = xx[705];
  pm_math_cross3(xx + 932, xx + 947, xx + 953);
  xx[947] = xx[718];
  xx[948] = xx[736];
  xx[949] = xx[811];
  xx[707] = xx[72] * xx[777];
  xx[718] = xx[73] * xx[777];
  xx[736] = xx[72] * xx[717] + xx[721] * xx[73];
  xx[956] = xx[707];
  xx[957] = xx[718];
  xx[958] = - xx[736];
  pm_math_cross3(xx + 947, xx + 956, xx + 959);
  xx[956] = xx[18] * (xx[959] + xx[707] * xx[716]) - xx[73];
  xx[957] = xx[72] + (xx[718] * xx[716] + xx[960]) * xx[18];
  xx[958] = (xx[961] - xx[736] * xx[716]) * xx[18];
  pm_math_quatXform(xx + 927, xx + 956, xx + 959);
  xx[707] = xx[18] * (xx[953] - xx[931] * xx[145]) + xx[959] - xx[276];
  xx[956] = - xx[666];
  xx[957] = - xx[144];
  xx[958] = - xx[707];
  solveSymmetricPosDef(xx + 918, xx + 956, 3, 1, xx + 962, xx + 965);
  xx[145] = 1.202264150185557e-11;
  xx[718] = 1.680102937794429e-13;
  xx[956] = xx[83] * xx[962] + xx[145] * xx[963];
  xx[957] = xx[84] * xx[963] - xx[718] * xx[962];
  xx[958] = xx[85] * xx[964];
  pm_math_quatXform(xx + 894, xx + 956, xx + 965);
  xx[736] = 3.170111100876369e-15;
  xx[811] = 3.982300164624803e-9;
  xx[875] = 6.2264981441351e-4;
  xx[913] = 4.955561487076875e-10;
  xx[914] = 6.226498144137072e-4;
  xx[932] = 1.044009829080716e-13;
  xx[956] = xx[736] * xx[962] - xx[811] * xx[963] - xx[875] * xx[964];
  xx[957] = xx[811] * xx[962] + xx[736] * xx[963] + xx[913] * xx[964];
  xx[958] = xx[914] * xx[962] + xx[932] * xx[963];
  pm_math_quatXform(xx + 894, xx + 956, xx + 968);
  pm_math_cross3(xx + 898, xx + 968, xx + 956);
  xx[933] = xx[716] * xx[716];
  xx[956] = (xx[933] + xx[832]) * xx[18] - xx[3];
  xx[832] = xx[721] * xx[717];
  xx[957] = xx[716] * xx[777];
  xx[965] = (xx[832] + xx[957]) * xx[18];
  xx[966] = xx[18] * (xx[713] - xx[712]);
  xx[970] = xx[18] * (xx[832] - xx[957]);
  xx[832] = (xx[933] + xx[837]) * xx[18] - xx[3];
  xx[837] = (xx[714] + xx[715]) * xx[18];
  xx[714] = (xx[713] + xx[712]) * xx[18];
  xx[712] = (xx[933] + xx[777] * xx[777]) * xx[18] - xx[3];
  xx[971] = xx[956];
  xx[972] = xx[965];
  xx[973] = xx[966];
  xx[974] = xx[970];
  xx[975] = xx[832];
  xx[976] = xx[837];
  xx[977] = xx[714];
  xx[978] = xx[831];
  xx[979] = xx[712];
  xx[713] = 0.0;
  xx[980] = xx[83];
  xx[981] = xx[145];
  xx[982] = xx[713];
  xx[983] = - xx[718];
  xx[984] = xx[84];
  xx[985] = xx[713];
  xx[986] = xx[713];
  xx[987] = xx[713];
  xx[988] = xx[85];
  xx[989] = xx[736];
  xx[990] = - xx[811];
  xx[991] = - xx[875];
  xx[992] = xx[811];
  xx[993] = xx[736];
  xx[994] = xx[913];
  xx[995] = xx[914];
  xx[996] = xx[932];
  xx[997] = xx[713];
  solveSymmetricPosDef(xx + 918, xx + 980, 3, 6, xx + 998, xx + 1016);
  xx[713] = - (xx[84] * xx[999] - xx[718] * xx[998]);
  xx[715] = - (xx[85] * xx[1000]);
  xx[933] = - (xx[85] * xx[1003]);
  xx[1016] = xx[83] - (xx[83] * xx[998] + xx[145] * xx[999]);
  xx[1017] = xx[713];
  xx[1018] = xx[715];
  xx[1019] = xx[713];
  xx[1020] = xx[84] - (xx[84] * xx[1002] - xx[718] * xx[1001]);
  xx[1021] = xx[933];
  xx[1022] = xx[715];
  xx[1023] = xx[933];
  xx[1024] = xx[85] - xx[85] * xx[1006];
  pm_math_matrix3x3ComposeTranspose(xx + 1016, xx + 971, xx + 1025);
  pm_math_matrix3x3Compose(xx + 971, xx + 1025, xx + 1016);
  xx[1025] = - (xx[83] * xx[1007] + xx[145] * xx[1008]);
  xx[1026] = - (xx[83] * xx[1010] + xx[145] * xx[1011]);
  xx[1027] = - (xx[83] * xx[1013] + xx[145] * xx[1014]);
  xx[1028] = - (xx[84] * xx[1008] - xx[718] * xx[1007]);
  xx[1029] = - (xx[84] * xx[1011] - xx[718] * xx[1010]);
  xx[1030] = - (xx[84] * xx[1014] - xx[718] * xx[1013]);
  xx[1031] = - (xx[85] * xx[1009]);
  xx[1032] = - (xx[85] * xx[1012]);
  xx[1033] = - (xx[85] * xx[1015]);
  pm_math_matrix3x3ComposeTranspose(xx + 1025, xx + 971, xx + 1034);
  pm_math_matrix3x3Compose(xx + 971, xx + 1034, xx + 1025);
  pm_math_matrix3x3PostCross(xx + 1025, xx + 898, xx + 1034);
  xx[713] = - (xx[811] * xx[1007] + xx[736] * xx[1008] + xx[913] * xx[1009]);
  xx[715] = - (xx[914] * xx[1007] + xx[932] * xx[1008]);
  xx[933] = - (xx[914] * xx[1010] + xx[932] * xx[1011]);
  xx[1043] = xx[78] - (xx[736] * xx[1007] - xx[811] * xx[1008] - xx[875] * xx
                       [1009]);
  xx[1044] = xx[713];
  xx[1045] = xx[715];
  xx[1046] = xx[713];
  xx[1047] = xx[78] - (xx[811] * xx[1010] + xx[736] * xx[1011] + xx[913] * xx
                       [1012]);
  xx[1048] = xx[933];
  xx[1049] = xx[715];
  xx[1050] = xx[933];
  xx[1051] = xx[78] - (xx[914] * xx[1013] + xx[932] * xx[1014]);
  pm_math_matrix3x3ComposeTranspose(xx + 1043, xx + 971, xx + 1052);
  pm_math_matrix3x3Compose(xx + 971, xx + 1052, xx + 1043);
  pm_math_matrix3x3PostCross(xx + 1043, xx + 898, xx + 971);
  pm_math_matrix3x3PreCross(xx + 971, xx + 898, xx + 1052);
  xx[713] = xx[1031] - xx[973];
  xx[715] = xx[1032] - xx[976];
  xx[933] = xx[1024] - xx[1042] - xx[1042] - xx[1060] + xx[839] * xx[713] - xx
    [861] * xx[715] + xx[57];
  xx[957] = xx[398] + xx[1043];
  xx[973] = xx[713] + xx[957] * xx[839] - xx[861] * xx[1044];
  xx[976] = xx[398] + xx[1047];
  xx[1031] = xx[715] + xx[839] * xx[1046] - xx[976] * xx[861];
  xx[1032] = xx[933] + xx[973] * xx[839] - xx[1031] * xx[861];
  ii[1] = factorSymmetricPosDef(xx + 1032, 1, xx + 1043);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute4' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1043] = (xx[967] + xx[958] + xx[839] * xx[968] - xx[861] * xx[969] + xx[912])
    / xx[1032];
  xx[967] = xx[998];
  xx[968] = xx[1001];
  xx[969] = xx[1004];
  xx[958] = xx[721] * xx[1043];
  xx[1047] = xx[1043] * xx[717];
  xx[1061] = - ((xx[958] * xx[716] + xx[1047] * xx[777]) * xx[18]);
  xx[1062] = xx[18] * (xx[1047] * xx[716] - xx[958] * xx[777]);
  xx[1063] = (xx[1047] * xx[717] + xx[721] * xx[958]) * xx[18] - xx[1043];
  xx[1064] = xx[1007];
  xx[1065] = xx[1010];
  xx[1066] = xx[1013];
  xx[958] = xx[1043] * xx[899] - xx[839] * xx[1043];
  xx[1047] = xx[1043] * xx[898] - xx[861] * xx[1043];
  xx[1067] = xx[1047] * xx[777];
  xx[1068] = xx[958] * xx[777];
  xx[1069] = xx[721] * xx[958] + xx[1047] * xx[717];
  xx[1070] = - xx[1067];
  xx[1071] = - xx[1068];
  xx[1072] = xx[1069];
  pm_math_cross3(xx + 947, xx + 1070, xx + 1073);
  xx[1070] = xx[958] + xx[18] * (xx[1073] + xx[1067] * xx[716]);
  xx[1071] = xx[18] * (xx[1074] + xx[1068] * xx[716]) - xx[1047];
  xx[1072] = xx[18] * (xx[1075] - xx[1069] * xx[716]);
  xx[1067] = xx[999];
  xx[1068] = xx[1002];
  xx[1069] = xx[1005];
  xx[1073] = xx[1008];
  xx[1074] = xx[1011];
  xx[1075] = xx[1014];
  xx[1076] = xx[1000];
  xx[1077] = xx[1003];
  xx[1078] = xx[1006];
  xx[998] = xx[1009];
  xx[999] = xx[1012];
  xx[1000] = xx[1015];
  xx[958] = xx[231] + xx[286] + (xx[293] * xx[168] + xx[299]) * xx[18];
  xx[286] = xx[328] + xx[324];
  xx[293] = (xx[160] * xx[335] + xx[340]) * xx[18] + xx[165] + (xx[313] * xx[241]
    + xx[337]) * xx[18] + xx[233];
  xx[241] = xx[293] / xx[331];
  xx[335] = xx[330] * xx[241];
  xx[1001] = xx[335] * xx[210];
  xx[1002] = xx[342] * xx[241];
  xx[1003] = xx[1002] * xx[210];
  xx[1004] = xx[18] * (xx[1001] * xx[210] - xx[198] * xx[1003]) - xx[335];
  xx[335] = (xx[198] * xx[1001] + xx[1003] * xx[210]) * xx[18] - xx[1002];
  xx[1001] = xx[1004] * xx[243] - xx[335] * xx[246] - xx[57] * xx[241];
  xx[1002] = xx[248] * xx[335];
  xx[1003] = (xx[286] + xx[1001] * xx[206] + xx[200] * xx[1002] + xx[296] * xx
              [335]) / xx[461];
  xx[1005] = xx[1003] * xx[414] + xx[1002];
  xx[1006] = xx[518] * xx[1003] - xx[1004] * xx[248];
  xx[1007] = xx[1001] - xx[381] * xx[1003];
  pm_math_quatXform(xx + 219, xx + 1005, xx + 1008);
  xx[1005] = xx[1004] + xx[397] * xx[1003];
  xx[1006] = xx[335] + xx[442] * xx[1003];
  xx[1007] = xx[1003] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1005, xx + 1011);
  pm_math_cross3(xx + 556, xx + 1011, xx + 1004);
  xx[335] = xx[1008] + xx[1004];
  xx[1001] = xx[568] + xx[637];
  xx[1002] = xx[641] + xx[652];
  xx[1007] = xx[1009] + xx[1005];
  xx[1014] = xx[655] + xx[553];
  xx[1004] = xx[1010] + xx[1006];
  xx[1008] = xx[1001] - (xx[335] - (xx[235] * xx[1012] + xx[234] * xx[1013]));
  xx[1009] = xx[1002] - (xx[1007] + xx[235] * xx[1011] - xx[233] * xx[1013]);
  xx[1010] = xx[1014] - (xx[1004] + xx[234] * xx[1011] + xx[233] * xx[1012]);
  solveSymmetricPosDef(xx + 597, xx + 1008, 3, 1, xx + 1079, xx + 1082);
  xx[1008] = xx[335] + xx[426] * xx[1079] + xx[438] * xx[1080] + xx[459] * xx
    [1081];
  xx[1009] = xx[1007] + xx[505] * xx[1079] + xx[511] * xx[1080] + xx[520] * xx
    [1081];
  xx[1010] = xx[1004] + xx[545] * xx[1079] + xx[448] * xx[1080] + xx[526] * xx
    [1081];
  pm_math_quatXform(xx + 193, xx + 1008, xx + 1004);
  xx[1007] = xx[1011] + xx[253] * xx[1079] + xx[516] * xx[1080] + xx[514] * xx
    [1081];
  xx[1008] = xx[1012] + xx[428] * xx[1079] + xx[441] * xx[1080] + xx[503] * xx
    [1081];
  xx[1009] = xx[1013] + xx[432] * xx[1079] + xx[444] * xx[1080] + xx[509] * xx
    [1081];
  pm_math_quatXform(xx + 193, xx + 1007, xx + 1010);
  pm_math_cross3(xx + 449, xx + 1010, xx + 1007);
  xx[335] = xx[1004] + xx[1007];
  xx[1013] = xx[756] + xx[791];
  xx[1015] = xx[1005] + xx[1008];
  xx[1047] = xx[794] + xx[800];
  xx[1082] = xx[808] + xx[814];
  xx[1004] = xx[1006] + xx[1009];
  xx[1005] = xx[1013] - (xx[335] - xx[1015] * xx[94] + pm_math_dot3(xx + 116, xx
    + 1010));
  xx[1006] = xx[1047] - (xx[335] * xx[94] + xx[1015] + pm_math_dot3(xx + 758, xx
    + 1010));
  xx[1007] = xx[1082] - (xx[1004] + xx[72] * xx[1011] - xx[73] * xx[1010]);
  solveSymmetricPosDef(xx + 778, xx + 1005, 3, 1, xx + 1083, xx + 1086);
  xx[1005] = xx[335] + xx[668] * xx[1083] + xx[697] * xx[1084] + xx[770] * xx
    [1085];
  xx[1006] = xx[1015] + xx[692] * xx[1083] + xx[700] * xx[1084] + xx[772] * xx
    [1085];
  xx[1007] = xx[1004] + xx[278] * xx[1083] + xx[452] * xx[1084] + xx[720] * xx
    [1085];
  pm_math_quatXform(xx + 183, xx + 1005, xx + 1086);
  xx[1004] = xx[1010] + xx[698] * xx[1083] + xx[728] * xx[1084] + xx[773] * xx
    [1085];
  xx[1005] = xx[1011] + xx[699] * xx[1083] + xx[732] * xx[1084] + xx[774] * xx
    [1085];
  xx[1006] = xx[1012] + xx[695] * xx[1083] + xx[764] * xx[1084] + xx[775] * xx
    [1085];
  pm_math_quatXform(xx + 183, xx + 1004, xx + 1007);
  pm_math_cross3(xx + 282, xx + 1007, xx + 1004);
  xx[335] = (xx[958] - (xx[1088] + xx[1006] - (xx[285] * xx[1007] + xx[281] *
    xx[1008]))) / xx[660];
  xx[1004] = xx[179] * xx[335];
  xx[1005] = xx[335] * xx[177];
  xx[1006] = (xx[1004] * xx[176] + xx[1005] * xx[181]) * xx[18];
  xx[1007] = xx[18] * (xx[1004] * xx[181] - xx[1005] * xx[176]);
  xx[1008] = xx[335] - (xx[1005] * xx[177] + xx[179] * xx[1004]) * xx[18];
  xx[1004] = xx[335] * xx[282] - xx[281] * xx[335];
  xx[1005] = xx[1004] * xx[181];
  xx[1009] = xx[285] * xx[335] + xx[335] * xx[283];
  xx[1010] = xx[1009] * xx[181];
  xx[1011] = xx[1004] * xx[177] + xx[179] * xx[1009];
  xx[1086] = xx[1005];
  xx[1087] = xx[1010];
  xx[1088] = - xx[1011];
  pm_math_cross3(xx + 765, xx + 1086, xx + 1089);
  xx[1012] = (xx[1089] - xx[1005] * xx[176]) * xx[18] - xx[1009];
  xx[1005] = xx[1004] + xx[18] * (xx[1090] - xx[1010] * xx[176]);
  xx[1004] = xx[18] * (xx[1091] + xx[1011] * xx[176]);
  xx[1009] = xx[1012];
  xx[1010] = xx[1005];
  xx[1011] = xx[1004];
  xx[1015] = xx[1083] - (pm_math_dot3(xx + 689, xx + 1006) + pm_math_dot3(xx +
    729, xx + 1009));
  xx[1083] = xx[1084] - (pm_math_dot3(xx + 761, xx + 1006) + pm_math_dot3(xx +
    888, xx + 1009));
  xx[1084] = xx[1085] - (pm_math_dot3(xx + 891, xx + 1006) + pm_math_dot3(xx +
    834, xx + 1009));
  xx[1009] = xx[1006] + xx[1015] + xx[94] * xx[1083];
  xx[1010] = xx[1007] - xx[94] * xx[1015] + xx[1083];
  xx[1011] = xx[1008] + xx[1084];
  pm_math_quatInverseXform(xx + 193, xx + 1009, xx + 1006);
  pm_math_cross3(xx + 1009, xx + 449, xx + 1085);
  xx[1009] = xx[1012] + xx[95] * xx[1015] - xx[114] * xx[1083] - xx[73] * xx
    [1084] + xx[1085];
  xx[1010] = xx[1005] + xx[114] * xx[1015] + xx[95] * xx[1083] + xx[72] * xx
    [1084] + xx[1086];
  xx[1011] = xx[1004] + xx[115] * xx[1015] + xx[696] * xx[1083] + xx[1087];
  pm_math_quatInverseXform(xx + 193, xx + 1009, xx + 1085);
  xx[1004] = xx[1079] - (pm_math_dot3(xx + 724, xx + 1006) + pm_math_dot3(xx +
    840, xx + 1085));
  xx[1005] = xx[1080] - (pm_math_dot3(xx + 733, xx + 1006) + pm_math_dot3(xx +
    846, xx + 1085));
  xx[1009] = xx[1081] - (pm_math_dot3(xx + 849, xx + 1006) + pm_math_dot3(xx +
    701, xx + 1085));
  xx[1010] = xx[1006] + xx[1004];
  xx[1011] = xx[1007] + xx[1005];
  xx[1012] = xx[1008] + xx[1009];
  pm_math_quatInverseXform(xx + 219, xx + 1010, xx + 1006);
  pm_math_cross3(xx + 1010, xx + 556, xx + 1079);
  xx[1010] = xx[1085] + xx[235] * xx[1005] + xx[234] * xx[1009] + xx[1079];
  xx[1011] = xx[1086] - xx[235] * xx[1004] + xx[233] * xx[1009] + xx[1080];
  xx[1012] = xx[1087] - xx[234] * xx[1004] - xx[233] * xx[1005] + xx[1081];
  pm_math_quatInverseXform(xx + 219, xx + 1010, xx + 1079);
  xx[1010] = xx[1003] - (pm_math_dot3(xx + 643, xx + 1006) + pm_math_dot3(xx +
    386, xx + 1079));
  xx[1003] = xx[1008] - xx[206] * xx[1010];
  xx[1085] = xx[1006] - xx[200] * xx[1010];
  xx[1086] = xx[1007];
  xx[1087] = xx[1003];
  pm_math_cross3(xx + 1085, xx + 249, xx + 1006);
  xx[1011] = xx[1079] + xx[1006];
  xx[1006] = xx[1080] - xx[296] * xx[1010] + xx[1007];
  xx[1007] = xx[1006] * xx[210];
  xx[1008] = xx[1011] * xx[210];
  xx[1012] = xx[241] + xx[1003] * xx[673] + xx[539] * (xx[1011] - (xx[198] * xx
    [1007] + xx[1008] * xx[210]) * xx[18]) + (xx[1006] + xx[18] * (xx[198] * xx
    [1008] - xx[1007] * xx[210])) * xx[574];
  xx[241] = xx[936] + xx[942];
  xx[1003] = xx[945] + xx[951];
  xx[1006] = (xx[954] - xx[276] * xx[931] * xx[934]) * xx[18] + xx[960] + xx[254];
  xx[1079] = - xx[241];
  xx[1080] = - xx[1003];
  xx[1081] = - xx[1006];
  solveSymmetricPosDef(xx + 918, xx + 1079, 3, 1, xx + 1085, xx + 1088);
  xx[1079] = xx[83] * xx[1085] + xx[145] * xx[1086];
  xx[1080] = xx[84] * xx[1086] - xx[718] * xx[1085];
  xx[1081] = xx[85] * xx[1087];
  pm_math_quatXform(xx + 894, xx + 1079, xx + 1088);
  xx[1079] = xx[736] * xx[1085] - xx[811] * xx[1086] - xx[875] * xx[1087];
  xx[1080] = xx[811] * xx[1085] + xx[736] * xx[1086] + xx[913] * xx[1087];
  xx[1081] = xx[914] * xx[1085] + xx[932] * xx[1086];
  pm_math_quatXform(xx + 894, xx + 1079, xx + 1091);
  pm_math_cross3(xx + 898, xx + 1091, xx + 1079);
  xx[934] = xx[844] + xx[865] + (xx[916] - xx[710] * xx[910]) * xx[18];
  xx[865] = (xx[1090] + xx[1081] + xx[839] * xx[1091] - xx[861] * xx[1092] + xx
             [934]) / xx[1032];
  xx[910] = xx[721] * xx[865];
  xx[1007] = xx[865] * xx[717];
  xx[1079] = - ((xx[910] * xx[716] + xx[1007] * xx[777]) * xx[18]);
  xx[1080] = xx[18] * (xx[1007] * xx[716] - xx[910] * xx[777]);
  xx[1081] = (xx[1007] * xx[717] + xx[721] * xx[910]) * xx[18] - xx[865];
  xx[910] = xx[865] * xx[899] - xx[839] * xx[865];
  xx[1007] = xx[865] * xx[898] - xx[861] * xx[865];
  xx[1008] = xx[1007] * xx[777];
  xx[1011] = xx[910] * xx[777];
  xx[1088] = xx[721] * xx[910] + xx[1007] * xx[717];
  xx[1089] = - xx[1008];
  xx[1090] = - xx[1011];
  xx[1091] = xx[1088];
  pm_math_cross3(xx + 947, xx + 1089, xx + 1092);
  xx[1089] = xx[910] + xx[18] * (xx[1092] + xx[1008] * xx[716]);
  xx[1090] = xx[18] * (xx[1093] + xx[1011] * xx[716]) - xx[1007];
  xx[1091] = xx[18] * (xx[1094] - xx[1088] * xx[716]);
  xx[910] = xx[1085] - (pm_math_dot3(xx + 967, xx + 1079) + pm_math_dot3(xx +
    1064, xx + 1089));
  xx[1007] = xx[1086] - (pm_math_dot3(xx + 1067, xx + 1079) + pm_math_dot3(xx +
    1073, xx + 1089));
  xx[1008] = xx[1087] - (pm_math_dot3(xx + 1076, xx + 1079) + pm_math_dot3(xx +
    998, xx + 1089));
  xx[1011] = xx[295] * xx[335] + xx[776] * xx[1015] + xx[268] * xx[1083] + xx
    [178] * xx[1084] + xx[559] * xx[1004] + xx[191] * xx[1005] + xx[255] * xx
    [1009] + xx[317] * xx[1010] + xx[247] * xx[1012] + xx[912] * xx[865] - xx
    [666] * xx[910] - xx[144] * xx[1007] - xx[707] * xx[1008];
  xx[230] = xx[232] + (xx[168] * xx[294] + xx[300]) * xx[18];
  xx[231] = xx[329] + xx[325];
  xx[232] = (xx[160] * xx[288] + xx[341]) * xx[18] + (xx[313] * xx[244] + xx[338])
    * xx[18];
  xx[160] = xx[232] / xx[331];
  xx[244] = xx[330] * xx[160];
  xx[288] = xx[244] * xx[210];
  xx[294] = xx[342] * xx[160];
  xx[298] = xx[294] * xx[210];
  xx[299] = xx[18] * (xx[288] * xx[210] - xx[198] * xx[298]) - xx[244];
  xx[244] = (xx[198] * xx[288] + xx[298] * xx[210]) * xx[18] - xx[294];
  xx[288] = xx[299] * xx[243] - xx[244] * xx[246] - xx[57] * xx[160];
  xx[294] = xx[248] * xx[244];
  xx[298] = (xx[231] + xx[288] * xx[206] + xx[200] * xx[294] + xx[296] * xx[244])
    / xx[461];
  xx[323] = xx[298] * xx[414] + xx[294];
  xx[324] = xx[518] * xx[298] - xx[299] * xx[248];
  xx[325] = xx[288] - xx[381] * xx[298];
  pm_math_quatXform(xx + 219, xx + 323, xx + 327);
  xx[323] = xx[299] + xx[397] * xx[298];
  xx[324] = xx[244] + xx[442] * xx[298];
  xx[325] = xx[298] * xx[429];
  pm_math_quatXform(xx + 219, xx + 323, xx + 336);
  pm_math_cross3(xx + 556, xx + 336, xx + 323);
  xx[244] = xx[327] + xx[323];
  xx[288] = xx[569] + xx[638];
  xx[294] = xx[642] + xx[653];
  xx[299] = xx[328] + xx[324];
  xx[300] = xx[656] + xx[554];
  xx[323] = xx[329] + xx[325];
  xx[327] = xx[288] - (xx[244] - (xx[235] * xx[337] + xx[234] * xx[338]));
  xx[328] = xx[294] - (xx[299] + xx[235] * xx[336] - xx[233] * xx[338]);
  xx[329] = xx[300] - (xx[323] + xx[234] * xx[336] + xx[233] * xx[337]);
  solveSymmetricPosDef(xx + 597, xx + 327, 3, 1, xx + 339, xx + 552);
  xx[327] = xx[244] + xx[426] * xx[339] + xx[438] * xx[340] + xx[459] * xx[341];
  xx[328] = xx[299] + xx[505] * xx[339] + xx[511] * xx[340] + xx[520] * xx[341];
  xx[329] = xx[323] + xx[545] * xx[339] + xx[448] * xx[340] + xx[526] * xx[341];
  pm_math_quatXform(xx + 193, xx + 327, xx + 323);
  xx[327] = xx[336] + xx[253] * xx[339] + xx[516] * xx[340] + xx[514] * xx[341];
  xx[328] = xx[337] + xx[428] * xx[339] + xx[441] * xx[340] + xx[503] * xx[341];
  xx[329] = xx[338] + xx[432] * xx[339] + xx[444] * xx[340] + xx[509] * xx[341];
  pm_math_quatXform(xx + 193, xx + 327, xx + 336);
  pm_math_cross3(xx + 449, xx + 336, xx + 327);
  xx[244] = xx[323] + xx[327];
  xx[299] = xx[757] + xx[792];
  xx[552] = xx[324] + xx[328];
  xx[553] = xx[795] + xx[801];
  xx[554] = xx[809] + xx[815];
  xx[323] = xx[325] + xx[329];
  xx[327] = xx[299] - (xx[244] - xx[552] * xx[94] + pm_math_dot3(xx + 116, xx +
    336));
  xx[328] = xx[553] - (xx[244] * xx[94] + xx[552] + pm_math_dot3(xx + 758, xx +
    336));
  xx[329] = xx[554] - (xx[323] + xx[72] * xx[337] - xx[73] * xx[336]);
  solveSymmetricPosDef(xx + 778, xx + 327, 3, 1, xx + 567, xx + 636);
  xx[327] = xx[244] + xx[668] * xx[567] + xx[697] * xx[568] + xx[770] * xx[569];
  xx[328] = xx[552] + xx[692] * xx[567] + xx[700] * xx[568] + xx[772] * xx[569];
  xx[329] = xx[323] + xx[278] * xx[567] + xx[452] * xx[568] + xx[720] * xx[569];
  pm_math_quatXform(xx + 183, xx + 327, xx + 323);
  xx[327] = xx[336] + xx[698] * xx[567] + xx[728] * xx[568] + xx[773] * xx[569];
  xx[328] = xx[337] + xx[699] * xx[567] + xx[732] * xx[568] + xx[774] * xx[569];
  xx[329] = xx[338] + xx[695] * xx[567] + xx[764] * xx[568] + xx[775] * xx[569];
  pm_math_quatXform(xx + 183, xx + 327, xx + 336);
  pm_math_cross3(xx + 282, xx + 336, xx + 327);
  xx[244] = (xx[230] - (xx[325] + xx[329] - (xx[285] * xx[336] + xx[281] * xx
    [337]))) / xx[660];
  xx[323] = xx[179] * xx[244];
  xx[324] = xx[244] * xx[177];
  xx[325] = (xx[323] * xx[176] + xx[324] * xx[181]) * xx[18];
  xx[327] = xx[18] * (xx[323] * xx[181] - xx[324] * xx[176]);
  xx[328] = xx[244] - (xx[324] * xx[177] + xx[179] * xx[323]) * xx[18];
  xx[336] = xx[325];
  xx[337] = xx[327];
  xx[338] = xx[328];
  xx[323] = xx[244] * xx[282] - xx[281] * xx[244];
  xx[324] = xx[323] * xx[181];
  xx[329] = xx[285] * xx[244] + xx[244] * xx[283];
  xx[552] = xx[329] * xx[181];
  xx[636] = xx[323] * xx[177] + xx[179] * xx[329];
  xx[640] = xx[324];
  xx[641] = xx[552];
  xx[642] = - xx[636];
  pm_math_cross3(xx + 765, xx + 640, xx + 651);
  xx[637] = (xx[651] - xx[324] * xx[176]) * xx[18] - xx[329];
  xx[324] = xx[323] + xx[18] * (xx[652] - xx[552] * xx[176]);
  xx[323] = xx[18] * (xx[653] + xx[636] * xx[176]);
  xx[640] = xx[637];
  xx[641] = xx[324];
  xx[642] = xx[323];
  xx[329] = xx[567] - (pm_math_dot3(xx + 689, xx + 336) + pm_math_dot3(xx + 729,
    xx + 640));
  xx[552] = xx[568] - (pm_math_dot3(xx + 761, xx + 336) + pm_math_dot3(xx + 888,
    xx + 640));
  xx[567] = xx[569] - (pm_math_dot3(xx + 891, xx + 336) + pm_math_dot3(xx + 834,
    xx + 640));
  xx[336] = xx[325] + xx[329] + xx[94] * xx[552];
  xx[337] = xx[327] - xx[94] * xx[329] + xx[552];
  xx[338] = xx[328] + xx[567];
  pm_math_quatInverseXform(xx + 193, xx + 336, xx + 640);
  pm_math_cross3(xx + 336, xx + 449, xx + 651);
  xx[336] = xx[637] + xx[95] * xx[329] - xx[114] * xx[552] - xx[73] * xx[567] +
    xx[651];
  xx[337] = xx[324] + xx[114] * xx[329] + xx[95] * xx[552] + xx[72] * xx[567] +
    xx[652];
  xx[338] = xx[323] + xx[115] * xx[329] + xx[696] * xx[552] + xx[653];
  pm_math_quatInverseXform(xx + 193, xx + 336, xx + 323);
  xx[327] = xx[339] - (pm_math_dot3(xx + 724, xx + 640) + pm_math_dot3(xx + 840,
    xx + 323));
  xx[328] = xx[340] - (pm_math_dot3(xx + 733, xx + 640) + pm_math_dot3(xx + 846,
    xx + 323));
  xx[336] = xx[341] - (pm_math_dot3(xx + 849, xx + 640) + pm_math_dot3(xx + 701,
    xx + 323));
  xx[337] = xx[640] + xx[327];
  xx[338] = xx[641] + xx[328];
  xx[339] = xx[642] + xx[336];
  pm_math_quatInverseXform(xx + 219, xx + 337, xx + 636);
  pm_math_cross3(xx + 337, xx + 556, xx + 640);
  xx[337] = xx[323] + xx[235] * xx[328] + xx[234] * xx[336] + xx[640];
  xx[338] = xx[324] - xx[235] * xx[327] + xx[233] * xx[336] + xx[641];
  xx[339] = xx[325] - xx[234] * xx[327] - xx[233] * xx[328] + xx[642];
  pm_math_quatInverseXform(xx + 219, xx + 337, xx + 323);
  xx[337] = xx[298] - (pm_math_dot3(xx + 643, xx + 636) + pm_math_dot3(xx + 386,
    xx + 323));
  xx[298] = xx[638] - xx[206] * xx[337];
  xx[338] = xx[636] - xx[200] * xx[337];
  xx[339] = xx[637];
  xx[340] = xx[298];
  pm_math_cross3(xx + 338, xx + 249, xx + 636);
  xx[325] = xx[323] + xx[636];
  xx[323] = xx[324] - xx[296] * xx[337] + xx[637];
  xx[324] = xx[323] * xx[210];
  xx[338] = xx[325] * xx[210];
  xx[339] = xx[160] + xx[298] * xx[673] + xx[539] * (xx[325] - (xx[198] * xx[324]
    + xx[338] * xx[210]) * xx[18]) + (xx[323] + xx[18] * (xx[198] * xx[338] -
    xx[324] * xx[210])) * xx[574];
  xx[160] = xx[937] + xx[943];
  xx[298] = xx[946] + xx[952];
  xx[323] = (xx[931] * xx[705] + xx[955]) * xx[18] + xx[961];
  xx[636] = - xx[160];
  xx[637] = - xx[298];
  xx[638] = - xx[323];
  solveSymmetricPosDef(xx + 918, xx + 636, 3, 1, xx + 640, xx + 651);
  xx[636] = xx[83] * xx[640] + xx[145] * xx[641];
  xx[637] = xx[84] * xx[641] - xx[718] * xx[640];
  xx[638] = xx[85] * xx[642];
  pm_math_quatXform(xx + 894, xx + 636, xx + 651);
  xx[636] = xx[736] * xx[640] - xx[811] * xx[641] - xx[875] * xx[642];
  xx[637] = xx[811] * xx[640] + xx[736] * xx[641] + xx[913] * xx[642];
  xx[638] = xx[914] * xx[640] + xx[932] * xx[641];
  pm_math_quatXform(xx + 894, xx + 636, xx + 654);
  pm_math_cross3(xx + 898, xx + 654, xx + 636);
  xx[324] = xx[845] + (xx[917] - xx[710] * xx[911]) * xx[18];
  xx[325] = (xx[653] + xx[638] + xx[839] * xx[654] - xx[861] * xx[655] + xx[324])
    / xx[1032];
  xx[338] = xx[721] * xx[325];
  xx[340] = xx[325] * xx[717];
  xx[636] = - ((xx[338] * xx[716] + xx[340] * xx[777]) * xx[18]);
  xx[637] = xx[18] * (xx[340] * xx[716] - xx[338] * xx[777]);
  xx[638] = (xx[340] * xx[717] + xx[721] * xx[338]) * xx[18] - xx[325];
  xx[338] = xx[325] * xx[899] - xx[839] * xx[325];
  xx[340] = xx[325] * xx[898] - xx[861] * xx[325];
  xx[341] = xx[340] * xx[777];
  xx[568] = xx[338] * xx[777];
  xx[569] = xx[721] * xx[338] + xx[340] * xx[717];
  xx[651] = - xx[341];
  xx[652] = - xx[568];
  xx[653] = xx[569];
  pm_math_cross3(xx + 947, xx + 651, xx + 654);
  xx[651] = xx[338] + xx[18] * (xx[654] + xx[341] * xx[716]);
  xx[652] = xx[18] * (xx[655] + xx[568] * xx[716]) - xx[340];
  xx[653] = xx[18] * (xx[656] - xx[569] * xx[716]);
  xx[338] = xx[640] - (pm_math_dot3(xx + 967, xx + 636) + pm_math_dot3(xx + 1064,
    xx + 651));
  xx[340] = xx[641] - (pm_math_dot3(xx + 1067, xx + 636) + pm_math_dot3(xx +
    1073, xx + 651));
  xx[341] = xx[642] - (pm_math_dot3(xx + 1076, xx + 636) + pm_math_dot3(xx + 998,
    xx + 651));
  xx[568] = xx[295] * xx[244] + xx[776] * xx[329] + xx[268] * xx[552] + xx[178] *
    xx[567] + xx[559] * xx[327] + xx[191] * xx[328] + xx[255] * xx[336] + xx[317]
    * xx[337] + xx[247] * xx[339] + xx[912] * xx[325] - xx[666] * xx[338] - xx
    [144] * xx[340] - xx[707] * xx[341];
  pm_math_quatCompose(xx + 219, xx + 620, xx + 651);
  pm_math_quatCompose(xx + 193, xx + 651, xx + 790);
  pm_math_quatCompose(xx + 183, xx + 790, xx + 941);
  pm_math_quatCompose(xx + 172, xx + 941, xx + 945);
  xx[569] = xx[942] * xx[944];
  xx[636] = xx[941] * xx[943];
  xx[637] = xx[18] * (xx[569] - xx[636]);
  xx[638] = xx[941] * xx[942];
  xx[640] = xx[943] * xx[944];
  xx[641] = xx[942] * xx[942];
  xx[642] = xx[943] * xx[943];
  xx[755] = xx[637];
  xx[756] = (xx[638] + xx[640]) * xx[18];
  xx[757] = xx[3] - (xx[641] + xx[642]) * xx[18];
  pm_math_cross3(xx + 755, xx + 236, xx + 799);
  pm_math_quatXform(xx + 945, xx + 799, xx + 755);
  pm_math_quatXform(xx + 219, xx + 631, xx + 799);
  xx[655] = xx[799] - xx[263];
  xx[656] = xx[800] + xx[257];
  xx[705] = xx[801] - xx[252];
  xx[799] = xx[655];
  xx[800] = xx[656];
  xx[801] = xx[705];
  pm_math_quatXform(xx + 193, xx + 799, xx + 807);
  xx[794] = xx[807] + xx[256];
  xx[795] = xx[808] + xx[277];
  xx[807] = xx[809] + xx[267];
  xx[813] = xx[794];
  xx[814] = xx[795];
  xx[815] = xx[807];
  pm_math_quatXform(xx + 183, xx + 813, xx + 843);
  xx[808] = xx[844] + xx[283];
  xx[809] = xx[843] + xx[282];
  xx[843] = xx[808] * xx[164] - xx[809] * xx[162];
  xx[844] = xx[18] * xx[164] * xx[843] - (xx[808] - xx[287]) - xx[285];
  xx[845] = xx[809] + xx[18] * xx[162] * xx[843] + xx[292] - xx[281];
  xx[843] = xx[845] * xx[169];
  xx[911] = xx[844] * xx[169];
  xx[915] = xx[845] * xx[154] - xx[844] * xx[161];
  xx[935] = - xx[843];
  xx[936] = xx[911];
  xx[937] = xx[915];
  pm_math_cross3(xx + 289, xx + 935, xx + 945);
  xx[916] = xx[755] + xx[844] + xx[18] * (xx[945] - xx[843] * xx[168]);
  pm_math_quatCompose(xx + 313, xx + 620, xx + 948);
  xx[843] = xx[233] * xx[951];
  xx[844] = xx[234] * xx[950] - xx[233] * xx[949];
  xx[935] = xx[843];
  xx[936] = - (xx[234] * xx[951]);
  xx[937] = xx[844];
  pm_math_cross3(xx + 949, xx + 935, xx + 952);
  xx[935] = xx[606];
  xx[936] = xx[480];
  xx[937] = xx[619];
  xx[606] = xx[486] * xx[624];
  xx[619] = xx[486] * xx[625];
  xx[917] = xx[625] * xx[480] - xx[199] * xx[624];
  xx[959] = xx[606];
  xx[960] = xx[619];
  xx[961] = xx[917];
  pm_math_cross3(xx + 935, xx + 959, xx + 1079);
  xx[931] = xx[606] * xx[205];
  xx[955] = xx[18] * (xx[1079] + xx[931]) - xx[625];
  xx[959] = xx[619] * xx[205];
  xx[960] = xx[624] + (xx[959] + xx[1080]) * xx[18];
  xx[961] = xx[917] * xx[205] + xx[1081];
  xx[1079] = xx[955];
  xx[1080] = xx[960];
  xx[1081] = xx[961] * xx[18];
  pm_math_quatXform(xx + 313, xx + 1079, xx + 1085);
  xx[917] = xx[18] * (xx[952] + xx[948] * xx[843]) + xx[1085] - xx[234];
  xx[843] = xx[917] / xx[240];
  xx[1079] = xx[57] * xx[843];
  xx[1080] = xx[1079] * xx[480];
  xx[1081] = xx[199] * xx[1079];
  xx[1088] = xx[587] * xx[843];
  xx[1089] = xx[486] * xx[1088];
  xx[1090] = xx[590] * xx[843];
  xx[1091] = xx[486] * xx[1090];
  xx[1092] = xx[1090] * xx[480] - xx[199] * xx[1088];
  xx[1093] = xx[1089];
  xx[1094] = xx[1091];
  xx[1095] = xx[1092];
  pm_math_cross3(xx + 935, xx + 1093, xx + 1096);
  xx[1093] = xx[18] * (xx[1096] + xx[1089] * xx[205]) - xx[1090];
  xx[1089] = xx[1088] + (xx[1091] * xx[205] + xx[1097]) * xx[18];
  xx[1088] = (xx[1092] * xx[205] + xx[1098]) * xx[18];
  xx[1090] = xx[1093];
  xx[1091] = xx[1089];
  xx[1092] = xx[1088];
  pm_math_cross3(xx + 631, xx + 1090, xx + 1094);
  xx[1090] = (xx[1080] * xx[205] + xx[486] * xx[1081]) * xx[18] + xx[1094];
  xx[1091] = xx[206] * xx[480];
  xx[1092] = xx[486] * xx[200] - xx[199] * xx[206];
  xx[1097] = xx[200] * xx[480];
  xx[1098] = - xx[1091];
  xx[1099] = xx[1092];
  xx[1100] = xx[1097];
  pm_math_cross3(xx + 935, xx + 1098, xx + 1101);
  xx[1098] = xx[18] * (xx[1101] + xx[1091] * xx[205]) - xx[200];
  xx[1099] = xx[18] * (xx[1102] - xx[1092] * xx[205]);
  xx[1100] = (xx[1103] - xx[1097] * xx[205]) * xx[18] - xx[206];
  pm_math_cross3(xx + 1098, xx + 236, xx + 1101);
  pm_math_quatXform(xx + 948, xx + 1101, xx + 1097);
  xx[1100] = - (xx[206] * xx[630]);
  xx[1101] = xx[200] * xx[627] - xx[206] * xx[626];
  xx[1102] = xx[200] * xx[630];
  pm_math_quatXform(xx + 219, xx + 1100, xx + 1103);
  xx[1100] = xx[1103] + xx[319];
  xx[1101] = xx[1104] + xx[320] - xx[296];
  xx[1102] = xx[1105] - xx[297];
  pm_math_quatXform(xx + 309, xx + 1100, xx + 1103);
  xx[949] = xx[1097] + xx[1103];
  xx[950] = xx[1079] - (xx[199] * xx[1081] + xx[1080] * xx[480]) * xx[18] + xx
    [1096];
  xx[1079] = (xx[949] + xx[1090] * xx[200] + xx[950] * xx[206] + xx[1089] * xx
              [296]) / xx[461];
  xx[1100] = xx[1090] + xx[1079] * xx[414];
  xx[1101] = xx[18] * (xx[1081] * xx[205] - xx[486] * xx[1080]) + xx[1095] + xx
    [518] * xx[1079];
  xx[1102] = xx[950] - xx[381] * xx[1079];
  pm_math_quatXform(xx + 219, xx + 1100, xx + 1090);
  xx[1094] = xx[1093] + xx[397] * xx[1079];
  xx[1095] = xx[1089] + xx[442] * xx[1079];
  xx[1096] = xx[1088] + xx[1079] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1094, xx + 1100);
  pm_math_cross3(xx + 556, xx + 1100, xx + 1093);
  xx[950] = xx[1090] + xx[1093];
  pm_math_quatCompose(xx + 309, xx + 651, xx + 1106);
  xx[1080] = xx[653] * xx[653];
  xx[1081] = xx[654] * xx[654];
  xx[1088] = xx[652] * xx[653];
  xx[1089] = xx[651] * xx[654];
  xx[1096] = xx[18] * (xx[1088] - xx[1089]);
  xx[1110] = xx[651] * xx[653];
  xx[1111] = xx[652] * xx[654];
  xx[1112] = xx[3] - (xx[1080] + xx[1081]) * xx[18];
  xx[1113] = xx[1096];
  xx[1114] = (xx[1110] + xx[1111]) * xx[18];
  pm_math_cross3(xx + 1112, xx + 236, xx + 1115);
  pm_math_quatXform(xx + 1106, xx + 1115, xx + 1112);
  xx[1115] = xx[656] * xx[190];
  xx[1116] = xx[705] * xx[192];
  xx[1117] = xx[1115] + xx[1116];
  xx[1118] = xx[656] * xx[189];
  xx[1119] = xx[705] * xx[189];
  xx[1120] = - xx[1117];
  xx[1121] = - xx[1118];
  xx[1122] = - xx[1119];
  pm_math_cross3(xx + 616, xx + 1120, xx + 1123);
  xx[1120] = xx[18] * (xx[1123] - xx[1117] * xx[188]) + xx[635];
  xx[1121] = xx[18] * (xx[1124] - xx[1118] * xx[188]) + xx[628] - xx[705] - xx
    [235];
  xx[1122] = xx[656] + xx[18] * (xx[1125] - xx[1119] * xx[188]) + xx[629] - xx
    [234];
  pm_math_quatXform(xx + 305, xx + 1120, xx + 1117);
  xx[1120] = xx[1112] + xx[1117];
  xx[1121] = xx[652] * xx[652];
  xx[1122] = xx[653] * xx[654];
  xx[1123] = xx[651] * xx[652];
  xx[1124] = xx[18] * (xx[1122] - xx[1123]);
  xx[1125] = (xx[1089] + xx[1088]) * xx[18];
  xx[1126] = xx[3] - (xx[1081] + xx[1121]) * xx[18];
  xx[1127] = xx[1124];
  pm_math_cross3(xx + 1125, xx + 236, xx + 1128);
  pm_math_quatXform(xx + 1106, xx + 1128, xx + 1125);
  xx[1128] = xx[655] * xx[190];
  xx[1129] = xx[655] * xx[189];
  xx[1130] = xx[1129] - xx[1116];
  xx[1116] = xx[705] * xx[190];
  xx[1131] = xx[1128];
  xx[1132] = xx[1130];
  xx[1133] = xx[1116];
  pm_math_cross3(xx + 616, xx + 1131, xx + 1134);
  xx[1131] = xx[705] + (xx[1128] * xx[188] + xx[1134]) * xx[18] + xx[650] + xx
    [235];
  xx[1132] = (xx[1130] * xx[188] + xx[1135]) * xx[18] + xx[646];
  xx[1133] = (xx[1116] * xx[188] + xx[1136]) * xx[18] + xx[649] - xx[655] - xx
    [233];
  pm_math_quatXform(xx + 305, xx + 1131, xx + 1134);
  xx[705] = xx[1125] + xx[1134];
  xx[1116] = xx[1091] + xx[1094];
  xx[1128] = xx[18] * (xx[1111] - xx[1110]);
  xx[1130] = xx[1128];
  xx[1131] = (xx[1123] + xx[1122]) * xx[18];
  xx[1132] = xx[3] - (xx[1121] + xx[1080]) * xx[18];
  pm_math_cross3(xx + 1130, xx + 236, xx + 1137);
  pm_math_quatXform(xx + 1106, xx + 1137, xx + 1130);
  xx[1106] = xx[655] * xx[192];
  xx[1107] = xx[656] * xx[192];
  xx[1108] = xx[1129] - xx[1115];
  pm_math_cross3(xx + 616, xx + 1106, xx + 1137);
  xx[1140] = (xx[1106] * xx[188] + xx[1137]) * xx[18] + xx[575] - xx[656] + xx
    [234];
  xx[1141] = xx[655] + (xx[1107] * xx[188] + xx[1138]) * xx[18] + xx[187] + xx
    [233];
  xx[1142] = (xx[1108] * xx[188] + xx[1139]) * xx[18] + xx[555];
  pm_math_quatXform(xx + 305, xx + 1140, xx + 1106);
  xx[655] = xx[1130] + xx[1106];
  xx[656] = xx[1092] + xx[1095];
  xx[1090] = xx[1120] - (xx[950] - (xx[235] * xx[1101] + xx[234] * xx[1102]));
  xx[1091] = xx[705] - (xx[1116] + xx[235] * xx[1100] - xx[233] * xx[1102]);
  xx[1092] = xx[655] - (xx[656] + xx[234] * xx[1100] + xx[233] * xx[1101]);
  solveSymmetricPosDef(xx + 597, xx + 1090, 3, 1, xx + 1093, xx + 1137);
  xx[1090] = xx[950] + xx[426] * xx[1093] + xx[438] * xx[1094] + xx[459] * xx
    [1095];
  xx[1091] = xx[1116] + xx[505] * xx[1093] + xx[511] * xx[1094] + xx[520] * xx
    [1095];
  xx[1092] = xx[656] + xx[545] * xx[1093] + xx[448] * xx[1094] + xx[526] * xx
    [1095];
  pm_math_quatXform(xx + 193, xx + 1090, xx + 1137);
  xx[1090] = xx[1100] + xx[253] * xx[1093] + xx[516] * xx[1094] + xx[514] * xx
    [1095];
  xx[1091] = xx[1101] + xx[428] * xx[1093] + xx[441] * xx[1094] + xx[503] * xx
    [1095];
  xx[1092] = xx[1102] + xx[432] * xx[1093] + xx[444] * xx[1094] + xx[509] * xx
    [1095];
  pm_math_quatXform(xx + 193, xx + 1090, xx + 1100);
  pm_math_cross3(xx + 449, xx + 1100, xx + 1090);
  xx[656] = xx[1137] + xx[1090];
  pm_math_quatCompose(xx + 305, xx + 790, xx + 1140);
  xx[950] = xx[94] * xx[793];
  xx[1109] = xx[94] * xx[791] + xx[792];
  xx[1144] = xx[950];
  xx[1145] = xx[793];
  xx[1146] = - xx[1109];
  pm_math_cross3(xx + 791, xx + 1144, xx + 1147);
  xx[1115] = xx[790] * xx[793];
  xx[1144] = xx[3] + (xx[1147] - xx[790] * xx[950]) * xx[18];
  xx[1145] = xx[18] * (xx[1148] - xx[1115]) - xx[94];
  xx[1146] = xx[18] * (xx[1149] + xx[790] * xx[1109]);
  pm_math_cross3(xx + 1144, xx + 236, xx + 1147);
  pm_math_quatXform(xx + 1140, xx + 1147, xx + 1144);
  xx[1109] = - (xx[807] * xx[94]);
  xx[1147] = xx[1109];
  xx[1148] = - xx[807];
  xx[1149] = xx[795] + xx[794] * xx[94];
  pm_math_quatXform(xx + 183, xx + 1147, xx + 1150);
  xx[1147] = xx[1150] + xx[787];
  xx[1148] = xx[1151] + xx[788];
  xx[1149] = xx[1152] + xx[789];
  pm_math_quatXform(xx + 301, xx + 1147, xx + 1150);
  xx[1116] = xx[1144] + xx[1150];
  xx[1129] = xx[1138] + xx[1091];
  xx[1133] = xx[791] - xx[94] * xx[792];
  xx[1147] = - xx[793];
  xx[1148] = xx[950];
  xx[1149] = xx[1133];
  pm_math_cross3(xx + 791, xx + 1147, xx + 1153);
  xx[1147] = xx[94] + (xx[1115] + xx[1153]) * xx[18];
  xx[1148] = xx[3] + xx[18] * (xx[1154] - xx[94] * xx[1115]);
  xx[1149] = xx[18] * (xx[1155] - xx[790] * xx[1133]);
  pm_math_cross3(xx + 1147, xx + 236, xx + 1153);
  pm_math_quatXform(xx + 1140, xx + 1153, xx + 1147);
  xx[1153] = xx[807];
  xx[1154] = xx[1109];
  xx[1155] = xx[795] * xx[94] - xx[794];
  pm_math_quatXform(xx + 183, xx + 1153, xx + 1156);
  xx[1153] = xx[1156] + xx[796];
  xx[1154] = xx[1157] + xx[797];
  xx[1155] = xx[1158] + xx[798];
  pm_math_quatXform(xx + 301, xx + 1153, xx + 1156);
  xx[807] = xx[1147] + xx[1156];
  xx[950] = xx[791] * xx[793];
  xx[1109] = xx[790] * xx[792];
  xx[1133] = xx[18] * (xx[950] - xx[1109]);
  xx[1153] = xx[790] * xx[791];
  xx[1154] = xx[792] * xx[793];
  xx[1155] = xx[791] * xx[791];
  xx[1159] = xx[792] * xx[792];
  xx[1160] = xx[1133];
  xx[1161] = (xx[1153] + xx[1154]) * xx[18];
  xx[1162] = xx[3] - (xx[1155] + xx[1159]) * xx[18];
  pm_math_cross3(xx + 1160, xx + 236, xx + 1163);
  pm_math_quatXform(xx + 1140, xx + 1163, xx + 1160);
  xx[1140] = xx[794] * xx[181];
  xx[1141] = xx[795] * xx[181];
  xx[1142] = xx[794] * xx[177] + xx[795] * xx[179];
  xx[1163] = xx[1140];
  xx[1164] = xx[1141];
  xx[1165] = - xx[1142];
  pm_math_cross3(xx + 765, xx + 1163, xx + 1166);
  xx[1163] = xx[18] * (xx[1166] + xx[1140] * xx[176]) + xx[812] - xx[795] - xx
    [73];
  xx[1164] = xx[794] + xx[18] * (xx[1167] + xx[1141] * xx[176]) + xx[768] + xx
    [72];
  xx[1165] = (xx[1168] - xx[1142] * xx[176]) * xx[18] + xx[810];
  pm_math_quatXform(xx + 301, xx + 1163, xx + 1140);
  xx[794] = xx[1160] + xx[1140];
  xx[795] = xx[1139] + xx[1092];
  xx[1090] = xx[1116] - (xx[656] - xx[1129] * xx[94] + pm_math_dot3(xx + 116, xx
    + 1100));
  xx[1091] = xx[807] - (xx[656] * xx[94] + xx[1129] + pm_math_dot3(xx + 758, xx
    + 1100));
  xx[1092] = xx[794] - (xx[795] + xx[72] * xx[1101] - xx[73] * xx[1100]);
  solveSymmetricPosDef(xx + 778, xx + 1090, 3, 1, xx + 1137, xx + 1163);
  xx[1090] = xx[656] + xx[668] * xx[1137] + xx[697] * xx[1138] + xx[770] * xx
    [1139];
  xx[1091] = xx[1129] + xx[692] * xx[1137] + xx[700] * xx[1138] + xx[772] * xx
    [1139];
  xx[1092] = xx[795] + xx[278] * xx[1137] + xx[452] * xx[1138] + xx[720] * xx
    [1139];
  pm_math_quatXform(xx + 183, xx + 1090, xx + 1163);
  xx[1090] = xx[1100] + xx[698] * xx[1137] + xx[728] * xx[1138] + xx[773] * xx
    [1139];
  xx[1091] = xx[1101] + xx[699] * xx[1137] + xx[732] * xx[1138] + xx[774] * xx
    [1139];
  xx[1092] = xx[1102] + xx[695] * xx[1137] + xx[764] * xx[1138] + xx[775] * xx
    [1139];
  pm_math_quatXform(xx + 183, xx + 1090, xx + 1100);
  pm_math_cross3(xx + 282, xx + 1100, xx + 1090);
  xx[656] = (xx[916] - (xx[1165] + xx[1092] - (xx[285] * xx[1100] + xx[281] *
    xx[1101]))) / xx[660];
  xx[795] = xx[179] * xx[656];
  xx[1090] = xx[656] * xx[177];
  xx[1091] = (xx[795] * xx[176] + xx[1090] * xx[181]) * xx[18];
  xx[1092] = xx[18] * (xx[795] * xx[181] - xx[1090] * xx[176]);
  xx[1100] = xx[656] - (xx[1090] * xx[177] + xx[179] * xx[795]) * xx[18];
  xx[1163] = xx[1091];
  xx[1164] = xx[1092];
  xx[1165] = xx[1100];
  xx[795] = xx[656] * xx[282] - xx[281] * xx[656];
  xx[1090] = xx[795] * xx[181];
  xx[1101] = xx[285] * xx[656] + xx[656] * xx[283];
  xx[1102] = xx[1101] * xx[181];
  xx[1129] = xx[795] * xx[177] + xx[179] * xx[1101];
  xx[1166] = xx[1090];
  xx[1167] = xx[1102];
  xx[1168] = - xx[1129];
  pm_math_cross3(xx + 765, xx + 1166, xx + 1169);
  xx[1143] = (xx[1169] - xx[1090] * xx[176]) * xx[18] - xx[1101];
  xx[1090] = xx[795] + xx[18] * (xx[1170] - xx[1102] * xx[176]);
  xx[795] = xx[18] * (xx[1171] + xx[1129] * xx[176]);
  xx[1166] = xx[1143];
  xx[1167] = xx[1090];
  xx[1168] = xx[795];
  xx[1101] = xx[1137] - (pm_math_dot3(xx + 689, xx + 1163) + pm_math_dot3(xx +
    729, xx + 1166));
  xx[1102] = xx[1138] - (pm_math_dot3(xx + 761, xx + 1163) + pm_math_dot3(xx +
    888, xx + 1166));
  xx[1129] = xx[1139] - (pm_math_dot3(xx + 891, xx + 1163) + pm_math_dot3(xx +
    834, xx + 1166));
  xx[1137] = xx[1091] + xx[1101] + xx[94] * xx[1102];
  xx[1138] = xx[1092] - xx[94] * xx[1101] + xx[1102];
  xx[1139] = xx[1100] + xx[1129];
  pm_math_quatInverseXform(xx + 193, xx + 1137, xx + 1163);
  pm_math_cross3(xx + 1137, xx + 449, xx + 1166);
  xx[1137] = xx[1143] + xx[95] * xx[1101] - xx[114] * xx[1102] - xx[73] * xx
    [1129] + xx[1166];
  xx[1138] = xx[1090] + xx[114] * xx[1101] + xx[95] * xx[1102] + xx[72] * xx
    [1129] + xx[1167];
  xx[1139] = xx[795] + xx[115] * xx[1101] + xx[696] * xx[1102] + xx[1168];
  pm_math_quatInverseXform(xx + 193, xx + 1137, xx + 1090);
  xx[795] = xx[1093] - (pm_math_dot3(xx + 724, xx + 1163) + pm_math_dot3(xx +
    840, xx + 1090));
  xx[1093] = xx[1094] - (pm_math_dot3(xx + 733, xx + 1163) + pm_math_dot3(xx +
    846, xx + 1090));
  xx[1094] = xx[1095] - (pm_math_dot3(xx + 849, xx + 1163) + pm_math_dot3(xx +
    701, xx + 1090));
  xx[1137] = xx[1163] + xx[795];
  xx[1138] = xx[1164] + xx[1093];
  xx[1139] = xx[1165] + xx[1094];
  pm_math_quatInverseXform(xx + 219, xx + 1137, xx + 1163);
  pm_math_cross3(xx + 1137, xx + 556, xx + 1166);
  xx[1137] = xx[1090] + xx[235] * xx[1093] + xx[234] * xx[1094] + xx[1166];
  xx[1138] = xx[1091] - xx[235] * xx[795] + xx[233] * xx[1094] + xx[1167];
  xx[1139] = xx[1092] - xx[234] * xx[795] - xx[233] * xx[1093] + xx[1168];
  pm_math_quatInverseXform(xx + 219, xx + 1137, xx + 1090);
  xx[1095] = xx[1079] - (pm_math_dot3(xx + 643, xx + 1163) + pm_math_dot3(xx +
    386, xx + 1090));
  xx[1079] = xx[1165] - xx[206] * xx[1095];
  xx[1137] = xx[1163] - xx[200] * xx[1095];
  xx[1138] = xx[1164];
  xx[1139] = xx[1079];
  pm_math_cross3(xx + 1137, xx + 249, xx + 1163);
  xx[1100] = xx[1090] + xx[1163];
  xx[1143] = xx[1091] - xx[296] * xx[1095];
  xx[1091] = xx[1143] + xx[1164];
  xx[1163] = xx[1091] * xx[210];
  xx[1164] = xx[1100] * xx[210];
  xx[1165] = xx[1079] * xx[673] + xx[539] * (xx[1100] - (xx[198] * xx[1163] +
    xx[1164] * xx[210]) * xx[18]) + (xx[1091] + xx[18] * (xx[198] * xx[1164] -
    xx[1163] * xx[210])) * xx[574];
  xx[1079] = xx[295] * xx[656] + xx[776] * xx[1101] + xx[268] * xx[1102] + xx
    [178] * xx[1129] + xx[559] * xx[795] + xx[191] * xx[1093] + xx[255] * xx
    [1094] + xx[317] * xx[1095] + xx[1165] * xx[247];
  xx[1091] = xx[756] + xx[845] + (xx[911] * xx[168] + xx[946]) * xx[18];
  xx[845] = (xx[953] - xx[234] * xx[948] * xx[951]) * xx[18] + xx[1086] - xx[233];
  xx[911] = xx[845] / xx[240];
  xx[951] = xx[57] * xx[911];
  xx[1100] = xx[951] * xx[480];
  xx[1163] = xx[199] * xx[951];
  xx[1164] = xx[587] * xx[911];
  xx[1166] = xx[486] * xx[1164];
  xx[1167] = xx[590] * xx[911];
  xx[1168] = xx[486] * xx[1167];
  xx[1169] = xx[1167] * xx[480] - xx[199] * xx[1164];
  xx[1170] = xx[1166];
  xx[1171] = xx[1168];
  xx[1172] = xx[1169];
  pm_math_cross3(xx + 935, xx + 1170, xx + 1173);
  xx[1170] = xx[18] * (xx[1173] + xx[1166] * xx[205]) - xx[1167];
  xx[1166] = xx[1164] + (xx[1168] * xx[205] + xx[1174]) * xx[18];
  xx[1164] = (xx[1169] * xx[205] + xx[1175]) * xx[18];
  xx[1167] = xx[1170];
  xx[1168] = xx[1166];
  xx[1169] = xx[1164];
  pm_math_cross3(xx + 631, xx + 1167, xx + 1171);
  xx[1167] = (xx[1100] * xx[205] + xx[486] * xx[1163]) * xx[18] + xx[1171];
  xx[1168] = xx[1098] + xx[1104];
  xx[1169] = xx[951] - (xx[199] * xx[1163] + xx[1100] * xx[480]) * xx[18] + xx
    [1173];
  xx[951] = (xx[1168] + xx[1167] * xx[200] + xx[1169] * xx[206] + xx[1166] * xx
             [296]) / xx[461];
  xx[1173] = xx[1167] + xx[951] * xx[414];
  xx[1174] = xx[18] * (xx[1163] * xx[205] - xx[486] * xx[1100]) + xx[1172] + xx
    [518] * xx[951];
  xx[1175] = xx[1169] - xx[381] * xx[951];
  pm_math_quatXform(xx + 219, xx + 1173, xx + 1176);
  xx[1171] = xx[1170] + xx[397] * xx[951];
  xx[1172] = xx[1166] + xx[442] * xx[951];
  xx[1173] = xx[1164] + xx[951] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1171, xx + 1179);
  pm_math_cross3(xx + 556, xx + 1179, xx + 1169);
  xx[1100] = xx[1176] + xx[1169];
  xx[1163] = xx[1113] + xx[1118];
  xx[1164] = xx[1126] + xx[1135];
  xx[1166] = xx[1177] + xx[1170];
  xx[1167] = xx[1131] + xx[1107];
  xx[1169] = xx[1178] + xx[1171];
  xx[1170] = xx[1163] - (xx[1100] - (xx[235] * xx[1180] + xx[234] * xx[1181]));
  xx[1171] = xx[1164] - (xx[1166] + xx[235] * xx[1179] - xx[233] * xx[1181]);
  xx[1172] = xx[1167] - (xx[1169] + xx[234] * xx[1179] + xx[233] * xx[1180]);
  solveSymmetricPosDef(xx + 597, xx + 1170, 3, 1, xx + 1173, xx + 1176);
  xx[1170] = xx[1100] + xx[426] * xx[1173] + xx[438] * xx[1174] + xx[459] * xx
    [1175];
  xx[1171] = xx[1166] + xx[505] * xx[1173] + xx[511] * xx[1174] + xx[520] * xx
    [1175];
  xx[1172] = xx[1169] + xx[545] * xx[1173] + xx[448] * xx[1174] + xx[526] * xx
    [1175];
  pm_math_quatXform(xx + 193, xx + 1170, xx + 1176);
  xx[1169] = xx[1179] + xx[253] * xx[1173] + xx[516] * xx[1174] + xx[514] * xx
    [1175];
  xx[1170] = xx[1180] + xx[428] * xx[1173] + xx[441] * xx[1174] + xx[503] * xx
    [1175];
  xx[1171] = xx[1181] + xx[432] * xx[1173] + xx[444] * xx[1174] + xx[509] * xx
    [1175];
  pm_math_quatXform(xx + 193, xx + 1169, xx + 1179);
  pm_math_cross3(xx + 449, xx + 1179, xx + 1169);
  xx[1100] = xx[1176] + xx[1169];
  xx[1166] = xx[1145] + xx[1151];
  xx[1172] = xx[1177] + xx[1170];
  xx[1182] = xx[1148] + xx[1157];
  xx[1183] = xx[1161] + xx[1141];
  xx[1169] = xx[1178] + xx[1171];
  xx[1176] = xx[1166] - (xx[1100] - xx[1172] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1179));
  xx[1177] = xx[1182] - (xx[1100] * xx[94] + xx[1172] + pm_math_dot3(xx + 758,
    xx + 1179));
  xx[1178] = xx[1183] - (xx[1169] + xx[72] * xx[1180] - xx[73] * xx[1179]);
  solveSymmetricPosDef(xx + 778, xx + 1176, 3, 1, xx + 1184, xx + 1187);
  xx[1176] = xx[1100] + xx[668] * xx[1184] + xx[697] * xx[1185] + xx[770] * xx
    [1186];
  xx[1177] = xx[1172] + xx[692] * xx[1184] + xx[700] * xx[1185] + xx[772] * xx
    [1186];
  xx[1178] = xx[1169] + xx[278] * xx[1184] + xx[452] * xx[1185] + xx[720] * xx
    [1186];
  pm_math_quatXform(xx + 183, xx + 1176, xx + 1169);
  xx[1176] = xx[1179] + xx[698] * xx[1184] + xx[728] * xx[1185] + xx[773] * xx
    [1186];
  xx[1177] = xx[1180] + xx[699] * xx[1184] + xx[732] * xx[1185] + xx[774] * xx
    [1186];
  xx[1178] = xx[1181] + xx[695] * xx[1184] + xx[764] * xx[1185] + xx[775] * xx
    [1186];
  pm_math_quatXform(xx + 183, xx + 1176, xx + 1179);
  pm_math_cross3(xx + 282, xx + 1179, xx + 1176);
  xx[1100] = (xx[1091] - (xx[1171] + xx[1178] - (xx[285] * xx[1179] + xx[281] *
    xx[1180]))) / xx[660];
  xx[1169] = xx[179] * xx[1100];
  xx[1170] = xx[1100] * xx[177];
  xx[1171] = (xx[1169] * xx[176] + xx[1170] * xx[181]) * xx[18];
  xx[1172] = xx[18] * (xx[1169] * xx[181] - xx[1170] * xx[176]);
  xx[1176] = xx[1100] - (xx[1170] * xx[177] + xx[179] * xx[1169]) * xx[18];
  xx[1177] = xx[1171];
  xx[1178] = xx[1172];
  xx[1179] = xx[1176];
  xx[1169] = xx[1100] * xx[282] - xx[281] * xx[1100];
  xx[1170] = xx[1169] * xx[181];
  xx[1180] = xx[285] * xx[1100] + xx[1100] * xx[283];
  xx[1181] = xx[1180] * xx[181];
  xx[1187] = xx[1169] * xx[177] + xx[179] * xx[1180];
  xx[1188] = xx[1170];
  xx[1189] = xx[1181];
  xx[1190] = - xx[1187];
  pm_math_cross3(xx + 765, xx + 1188, xx + 1191);
  xx[1188] = (xx[1191] - xx[1170] * xx[176]) * xx[18] - xx[1180];
  xx[1170] = xx[1169] + xx[18] * (xx[1192] - xx[1181] * xx[176]);
  xx[1169] = xx[18] * (xx[1193] + xx[1187] * xx[176]);
  xx[1189] = xx[1188];
  xx[1190] = xx[1170];
  xx[1191] = xx[1169];
  xx[1180] = xx[1184] - (pm_math_dot3(xx + 689, xx + 1177) + pm_math_dot3(xx +
    729, xx + 1189));
  xx[1181] = xx[1185] - (pm_math_dot3(xx + 761, xx + 1177) + pm_math_dot3(xx +
    888, xx + 1189));
  xx[1184] = xx[1186] - (pm_math_dot3(xx + 891, xx + 1177) + pm_math_dot3(xx +
    834, xx + 1189));
  xx[1177] = xx[1171] + xx[1180] + xx[94] * xx[1181];
  xx[1178] = xx[1172] - xx[94] * xx[1180] + xx[1181];
  xx[1179] = xx[1176] + xx[1184];
  pm_math_quatInverseXform(xx + 193, xx + 1177, xx + 1185);
  pm_math_cross3(xx + 1177, xx + 449, xx + 1189);
  xx[1176] = xx[1188] + xx[95] * xx[1180] - xx[114] * xx[1181] - xx[73] * xx
    [1184] + xx[1189];
  xx[1177] = xx[1170] + xx[114] * xx[1180] + xx[95] * xx[1181] + xx[72] * xx
    [1184] + xx[1190];
  xx[1178] = xx[1169] + xx[115] * xx[1180] + xx[696] * xx[1181] + xx[1191];
  pm_math_quatInverseXform(xx + 193, xx + 1176, xx + 1169);
  xx[1172] = xx[1173] - (pm_math_dot3(xx + 724, xx + 1185) + pm_math_dot3(xx +
    840, xx + 1169));
  xx[1173] = xx[1174] - (pm_math_dot3(xx + 733, xx + 1185) + pm_math_dot3(xx +
    846, xx + 1169));
  xx[1174] = xx[1175] - (pm_math_dot3(xx + 849, xx + 1185) + pm_math_dot3(xx +
    701, xx + 1169));
  xx[1175] = xx[1185] + xx[1172];
  xx[1176] = xx[1186] + xx[1173];
  xx[1177] = xx[1187] + xx[1174];
  pm_math_quatInverseXform(xx + 219, xx + 1175, xx + 1185);
  pm_math_cross3(xx + 1175, xx + 556, xx + 1188);
  xx[1175] = xx[1169] + xx[235] * xx[1173] + xx[234] * xx[1174] + xx[1188];
  xx[1176] = xx[1170] - xx[235] * xx[1172] + xx[233] * xx[1174] + xx[1189];
  xx[1177] = xx[1171] - xx[234] * xx[1172] - xx[233] * xx[1173] + xx[1190];
  pm_math_quatInverseXform(xx + 219, xx + 1175, xx + 1169);
  xx[1175] = xx[951] - (pm_math_dot3(xx + 643, xx + 1185) + pm_math_dot3(xx +
    386, xx + 1169));
  xx[951] = xx[1187] - xx[206] * xx[1175];
  xx[1176] = xx[1185] - xx[200] * xx[1175];
  xx[1177] = xx[1186];
  xx[1178] = xx[951];
  pm_math_cross3(xx + 1176, xx + 249, xx + 1185);
  xx[1179] = xx[1169] + xx[1185];
  xx[1188] = xx[1170] - xx[296] * xx[1175];
  xx[1170] = xx[1188] + xx[1186];
  xx[1185] = xx[1170] * xx[210];
  xx[1186] = xx[1179] * xx[210];
  xx[1187] = xx[951] * xx[673] + xx[539] * (xx[1179] - (xx[198] * xx[1185] + xx
    [1186] * xx[210]) * xx[18]) + (xx[1170] + xx[18] * (xx[198] * xx[1186] - xx
    [1185] * xx[210])) * xx[574];
  xx[951] = xx[295] * xx[1100] + xx[776] * xx[1180] + xx[268] * xx[1181] + xx
    [178] * xx[1184] + xx[559] * xx[1172] + xx[191] * xx[1173] + xx[255] * xx
    [1174] + xx[317] * xx[1175] + xx[1187] * xx[247];
  xx[755] = xx[757] + (xx[915] * xx[168] + xx[947]) * xx[18];
  xx[756] = (xx[948] * xx[844] + xx[954]) * xx[18] + xx[1087];
  xx[757] = xx[756] / xx[240];
  xx[844] = xx[57] * xx[757];
  xx[915] = xx[844] * xx[480];
  xx[945] = xx[199] * xx[844];
  xx[946] = xx[587] * xx[757];
  xx[947] = xx[486] * xx[946];
  xx[948] = xx[590] * xx[757];
  xx[952] = xx[486] * xx[948];
  xx[953] = xx[948] * xx[480] - xx[199] * xx[946];
  xx[1085] = xx[947];
  xx[1086] = xx[952];
  xx[1087] = xx[953];
  pm_math_cross3(xx + 935, xx + 1085, xx + 1189);
  xx[954] = xx[18] * (xx[1189] + xx[947] * xx[205]) - xx[948];
  xx[947] = xx[946] + (xx[952] * xx[205] + xx[1190]) * xx[18];
  xx[946] = (xx[953] * xx[205] + xx[1191]) * xx[18];
  xx[1085] = xx[954];
  xx[1086] = xx[947];
  xx[1087] = xx[946];
  pm_math_cross3(xx + 631, xx + 1085, xx + 1189);
  xx[948] = (xx[915] * xx[205] + xx[486] * xx[945]) * xx[18] + xx[1189];
  xx[952] = xx[1099] + xx[1105];
  xx[953] = xx[844] - (xx[199] * xx[945] + xx[915] * xx[480]) * xx[18] + xx[1191];
  xx[844] = (xx[952] + xx[948] * xx[200] + xx[953] * xx[206] + xx[947] * xx[296])
    / xx[461];
  xx[1085] = xx[948] + xx[844] * xx[414];
  xx[1086] = xx[18] * (xx[945] * xx[205] - xx[486] * xx[915]) + xx[1190] + xx
    [518] * xx[844];
  xx[1087] = xx[953] - xx[381] * xx[844];
  pm_math_quatXform(xx + 219, xx + 1085, xx + 1097);
  xx[1085] = xx[954] + xx[397] * xx[844];
  xx[1086] = xx[947] + xx[442] * xx[844];
  xx[1087] = xx[946] + xx[844] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1085, xx + 945);
  pm_math_cross3(xx + 556, xx + 945, xx + 1085);
  xx[915] = xx[1097] + xx[1085];
  xx[948] = xx[1114] + xx[1119];
  xx[953] = xx[1127] + xx[1136];
  xx[954] = xx[1098] + xx[1086];
  xx[1103] = xx[1132] + xx[1108];
  xx[1085] = xx[1099] + xx[1087];
  xx[1097] = xx[948] - (xx[915] - (xx[235] * xx[946] + xx[234] * xx[947]));
  xx[1098] = xx[953] - (xx[954] + xx[235] * xx[945] - xx[233] * xx[947]);
  xx[1099] = xx[1103] - (xx[1085] + xx[234] * xx[945] + xx[233] * xx[946]);
  solveSymmetricPosDef(xx + 597, xx + 1097, 3, 1, xx + 1104, xx + 1112);
  xx[1097] = xx[915] + xx[426] * xx[1104] + xx[438] * xx[1105] + xx[459] * xx
    [1106];
  xx[1098] = xx[954] + xx[505] * xx[1104] + xx[511] * xx[1105] + xx[520] * xx
    [1106];
  xx[1099] = xx[1085] + xx[545] * xx[1104] + xx[448] * xx[1105] + xx[526] * xx
    [1106];
  pm_math_quatXform(xx + 193, xx + 1097, xx + 1085);
  xx[1097] = xx[945] + xx[253] * xx[1104] + xx[516] * xx[1105] + xx[514] * xx
    [1106];
  xx[1098] = xx[946] + xx[428] * xx[1104] + xx[441] * xx[1105] + xx[503] * xx
    [1106];
  xx[1099] = xx[947] + xx[432] * xx[1104] + xx[444] * xx[1105] + xx[509] * xx
    [1106];
  pm_math_quatXform(xx + 193, xx + 1097, xx + 945);
  pm_math_cross3(xx + 449, xx + 945, xx + 1097);
  xx[915] = xx[1085] + xx[1097];
  xx[954] = xx[1146] + xx[1152];
  xx[1107] = xx[1086] + xx[1098];
  xx[1108] = xx[1149] + xx[1158];
  xx[1112] = xx[1162] + xx[1142];
  xx[1085] = xx[1087] + xx[1099];
  xx[1097] = xx[954] - (xx[915] - xx[1107] * xx[94] + pm_math_dot3(xx + 116, xx
    + 945));
  xx[1098] = xx[1108] - (xx[915] * xx[94] + xx[1107] + pm_math_dot3(xx + 758, xx
    + 945));
  xx[1099] = xx[1112] - (xx[1085] + xx[72] * xx[946] - xx[73] * xx[945]);
  solveSymmetricPosDef(xx + 778, xx + 1097, 3, 1, xx + 1117, xx + 1125);
  xx[1097] = xx[915] + xx[668] * xx[1117] + xx[697] * xx[1118] + xx[770] * xx
    [1119];
  xx[1098] = xx[1107] + xx[692] * xx[1117] + xx[700] * xx[1118] + xx[772] * xx
    [1119];
  xx[1099] = xx[1085] + xx[278] * xx[1117] + xx[452] * xx[1118] + xx[720] * xx
    [1119];
  pm_math_quatXform(xx + 183, xx + 1097, xx + 1085);
  xx[1097] = xx[945] + xx[698] * xx[1117] + xx[728] * xx[1118] + xx[773] * xx
    [1119];
  xx[1098] = xx[946] + xx[699] * xx[1117] + xx[732] * xx[1118] + xx[774] * xx
    [1119];
  xx[1099] = xx[947] + xx[695] * xx[1117] + xx[764] * xx[1118] + xx[775] * xx
    [1119];
  pm_math_quatXform(xx + 183, xx + 1097, xx + 945);
  pm_math_cross3(xx + 282, xx + 945, xx + 1097);
  xx[915] = (xx[755] - (xx[1087] + xx[1099] - (xx[285] * xx[945] + xx[281] * xx
    [946]))) / xx[660];
  xx[945] = xx[179] * xx[915];
  xx[946] = xx[915] * xx[177];
  xx[947] = (xx[945] * xx[176] + xx[946] * xx[181]) * xx[18];
  xx[1085] = xx[18] * (xx[945] * xx[181] - xx[946] * xx[176]);
  xx[1086] = xx[915] - (xx[946] * xx[177] + xx[179] * xx[945]) * xx[18];
  xx[1097] = xx[947];
  xx[1098] = xx[1085];
  xx[1099] = xx[1086];
  xx[945] = xx[915] * xx[282] - xx[281] * xx[915];
  xx[946] = xx[945] * xx[181];
  xx[1087] = xx[285] * xx[915] + xx[915] * xx[283];
  xx[1107] = xx[1087] * xx[181];
  xx[1113] = xx[945] * xx[177] + xx[179] * xx[1087];
  xx[1125] = xx[946];
  xx[1126] = xx[1107];
  xx[1127] = - xx[1113];
  pm_math_cross3(xx + 765, xx + 1125, xx + 1130);
  xx[1114] = (xx[1130] - xx[946] * xx[176]) * xx[18] - xx[1087];
  xx[946] = xx[945] + xx[18] * (xx[1131] - xx[1107] * xx[176]);
  xx[945] = xx[18] * (xx[1132] + xx[1113] * xx[176]);
  xx[1125] = xx[1114];
  xx[1126] = xx[946];
  xx[1127] = xx[945];
  xx[1087] = xx[1117] - (pm_math_dot3(xx + 689, xx + 1097) + pm_math_dot3(xx +
    729, xx + 1125));
  xx[1107] = xx[1118] - (pm_math_dot3(xx + 761, xx + 1097) + pm_math_dot3(xx +
    888, xx + 1125));
  xx[1113] = xx[1119] - (pm_math_dot3(xx + 891, xx + 1097) + pm_math_dot3(xx +
    834, xx + 1125));
  xx[1097] = xx[947] + xx[1087] + xx[94] * xx[1107];
  xx[1098] = xx[1085] - xx[94] * xx[1087] + xx[1107];
  xx[1099] = xx[1086] + xx[1113];
  pm_math_quatInverseXform(xx + 193, xx + 1097, xx + 1117);
  pm_math_cross3(xx + 1097, xx + 449, xx + 1125);
  xx[1097] = xx[1114] + xx[95] * xx[1087] - xx[114] * xx[1107] - xx[73] * xx
    [1113] + xx[1125];
  xx[1098] = xx[946] + xx[114] * xx[1087] + xx[95] * xx[1107] + xx[72] * xx[1113]
    + xx[1126];
  xx[1099] = xx[945] + xx[115] * xx[1087] + xx[696] * xx[1107] + xx[1127];
  pm_math_quatInverseXform(xx + 193, xx + 1097, xx + 945);
  xx[1085] = xx[1104] - (pm_math_dot3(xx + 724, xx + 1117) + pm_math_dot3(xx +
    840, xx + 945));
  xx[1086] = xx[1105] - (pm_math_dot3(xx + 733, xx + 1117) + pm_math_dot3(xx +
    846, xx + 945));
  xx[1097] = xx[1106] - (pm_math_dot3(xx + 849, xx + 1117) + pm_math_dot3(xx +
    701, xx + 945));
  xx[1104] = xx[1117] + xx[1085];
  xx[1105] = xx[1118] + xx[1086];
  xx[1106] = xx[1119] + xx[1097];
  pm_math_quatInverseXform(xx + 219, xx + 1104, xx + 1117);
  pm_math_cross3(xx + 1104, xx + 556, xx + 1125);
  xx[1104] = xx[945] + xx[235] * xx[1086] + xx[234] * xx[1097] + xx[1125];
  xx[1105] = xx[946] - xx[235] * xx[1085] + xx[233] * xx[1097] + xx[1126];
  xx[1106] = xx[947] - xx[234] * xx[1085] - xx[233] * xx[1086] + xx[1127];
  pm_math_quatInverseXform(xx + 219, xx + 1104, xx + 945);
  xx[1098] = xx[844] - (pm_math_dot3(xx + 643, xx + 1117) + pm_math_dot3(xx +
    386, xx + 945));
  xx[844] = xx[1119] - xx[206] * xx[1098];
  xx[1104] = xx[1117] - xx[200] * xx[1098];
  xx[1105] = xx[1118];
  xx[1106] = xx[844];
  pm_math_cross3(xx + 1104, xx + 249, xx + 1117);
  xx[1099] = xx[945] + xx[1117];
  xx[1114] = xx[946] - xx[296] * xx[1098];
  xx[946] = xx[1114] + xx[1118];
  xx[1117] = xx[946] * xx[210];
  xx[1118] = xx[1099] * xx[210];
  xx[1119] = xx[844] * xx[673] + xx[539] * (xx[1099] - (xx[198] * xx[1117] + xx
    [1118] * xx[210]) * xx[18]) + (xx[946] + xx[18] * (xx[198] * xx[1118] - xx
    [1117] * xx[210])) * xx[574];
  xx[844] = xx[295] * xx[915] + xx[776] * xx[1087] + xx[268] * xx[1107] + xx[178]
    * xx[1113] + xx[559] * xx[1085] + xx[191] * xx[1086] + xx[255] * xx[1097] +
    xx[317] * xx[1098] + xx[1119] * xx[247];
  pm_math_quatCompose(xx + 219, xx + 530, xx + 1144);
  pm_math_quatCompose(xx + 193, xx + 1144, xx + 1148);
  pm_math_quatCompose(xx + 183, xx + 1148, xx + 1189);
  pm_math_quatCompose(xx + 172, xx + 1189, xx + 1193);
  xx[946] = xx[1190] * xx[1192];
  xx[1099] = xx[1189] * xx[1191];
  xx[1117] = xx[18] * (xx[946] - xx[1099]);
  xx[1118] = xx[1189] * xx[1190];
  xx[1125] = xx[1191] * xx[1192];
  xx[1126] = xx[1190] * xx[1190];
  xx[1127] = xx[1191] * xx[1191];
  xx[1130] = xx[1117];
  xx[1131] = (xx[1118] + xx[1125]) * xx[18];
  xx[1132] = xx[3] - (xx[1126] + xx[1127]) * xx[18];
  pm_math_cross3(xx + 1130, xx + 236, xx + 1134);
  pm_math_quatXform(xx + 1193, xx + 1134, xx + 1130);
  pm_math_quatXform(xx + 219, xx + 541, xx + 1134);
  xx[1140] = xx[1134] - xx[263];
  xx[1141] = xx[1135] + xx[257];
  xx[1134] = xx[1136] - xx[252];
  xx[1156] = xx[1140];
  xx[1157] = xx[1141];
  xx[1158] = xx[1134];
  pm_math_quatXform(xx + 193, xx + 1156, xx + 1160);
  xx[1135] = xx[1160] + xx[256];
  xx[1136] = xx[1161] + xx[277];
  xx[1142] = xx[1162] + xx[267];
  xx[1160] = xx[1135];
  xx[1161] = xx[1136];
  xx[1162] = xx[1142];
  pm_math_quatXform(xx + 183, xx + 1160, xx + 1193);
  xx[1152] = xx[1194] + xx[283];
  xx[1170] = xx[1193] + xx[282];
  xx[1179] = xx[1152] * xx[164] - xx[1170] * xx[162];
  xx[1185] = xx[18] * xx[164] * xx[1179] - (xx[1152] - xx[287]) - xx[285];
  xx[1186] = xx[1170] + xx[18] * xx[162] * xx[1179] + xx[292] - xx[281];
  xx[1179] = xx[1186] * xx[169];
  xx[1193] = xx[1185] * xx[169];
  xx[1194] = xx[1186] * xx[154] - xx[1185] * xx[161];
  xx[1195] = - xx[1179];
  xx[1196] = xx[1193];
  xx[1197] = xx[1194];
  pm_math_cross3(xx + 289, xx + 1195, xx + 1198);
  xx[1195] = xx[1130] + xx[1185] + xx[18] * (xx[1198] - xx[1179] * xx[168]);
  pm_math_quatCompose(xx + 313, xx + 530, xx + 1201);
  xx[1179] = xx[233] * xx[1204];
  xx[1185] = xx[233] * xx[1202] - xx[234] * xx[1203];
  xx[1205] = - xx[1179];
  xx[1206] = xx[234] * xx[1204];
  xx[1207] = xx[1185];
  pm_math_cross3(xx + 1202, xx + 1205, xx + 1208);
  xx[1205] = xx[352];
  xx[1206] = xx[517];
  xx[1207] = xx[478];
  xx[517] = xx[534] * xx[478];
  xx[1196] = xx[535] * xx[478];
  xx[1197] = xx[534] * xx[352] + xx[474] * xx[535];
  xx[1211] = - xx[517];
  xx[1212] = xx[1196];
  xx[1213] = xx[1197];
  pm_math_cross3(xx + 1205, xx + 1211, xx + 1214);
  xx[1211] = xx[344] * xx[517];
  xx[1212] = xx[535] + xx[18] * (xx[1214] + xx[1211]);
  xx[1213] = xx[344] * xx[1196];
  xx[1217] = xx[534] + (xx[1215] - xx[1213]) * xx[18];
  xx[1214] = xx[1216] - xx[344] * xx[1197];
  xx[1218] = xx[1212];
  xx[1219] = xx[1217];
  xx[1220] = xx[1214] * xx[18];
  pm_math_quatXform(xx + 313, xx + 1218, xx + 1221);
  xx[1197] = xx[18] * (xx[1208] - xx[1201] * xx[1179]) + xx[1221] + xx[234];
  xx[1179] = xx[1197] / xx[476];
  xx[1215] = xx[498] * xx[1179];
  xx[1216] = xx[501] * xx[1179];
  xx[1218] = xx[1216] * xx[478];
  xx[1219] = xx[1215] * xx[478];
  xx[1220] = xx[1216] * xx[352] + xx[474] * xx[1215];
  xx[1224] = - xx[1218];
  xx[1225] = xx[1219];
  xx[1226] = xx[1220];
  pm_math_cross3(xx + 1205, xx + 1224, xx + 1227);
  xx[1224] = xx[1215] + xx[18] * (xx[1227] + xx[344] * xx[1218]);
  xx[1215] = xx[1216] + (xx[1228] - xx[344] * xx[1219]) * xx[18];
  xx[1216] = (xx[1229] - xx[344] * xx[1220]) * xx[18];
  xx[1218] = xx[1224];
  xx[1219] = xx[1215];
  xx[1220] = xx[1216];
  pm_math_cross3(xx + 541, xx + 1218, xx + 1225);
  xx[1218] = xx[57] * xx[1179];
  xx[1219] = xx[474] * xx[1218];
  xx[1220] = xx[1218] * xx[352];
  xx[1228] = xx[1225] - (xx[344] * xx[1219] + xx[1220] * xx[478]) * xx[18];
  xx[1229] = xx[474] * xx[206];
  xx[1230] = xx[206] * xx[352] - xx[200] * xx[478];
  xx[1231] = xx[474] * xx[200];
  xx[1232] = xx[1229];
  xx[1233] = xx[1230];
  xx[1234] = - xx[1231];
  pm_math_cross3(xx + 1205, xx + 1232, xx + 1235);
  xx[1232] = xx[18] * (xx[1235] + xx[344] * xx[1229]) - xx[200];
  xx[1233] = xx[18] * (xx[1236] + xx[344] * xx[1230]);
  xx[1234] = (xx[1237] - xx[344] * xx[1231]) * xx[18] - xx[206];
  pm_math_cross3(xx + 1232, xx + 236, xx + 1229);
  pm_math_quatXform(xx + 1201, xx + 1229, xx + 1232);
  xx[1229] = - (xx[206] * xx[540]);
  xx[1230] = xx[206] * xx[536] + xx[200] * xx[537];
  xx[1231] = xx[200] * xx[540];
  pm_math_quatXform(xx + 219, xx + 1229, xx + 1235);
  xx[1229] = xx[1235] + xx[319];
  xx[1230] = xx[1236] + xx[320] - xx[296];
  xx[1231] = xx[1237] - xx[297];
  pm_math_quatXform(xx + 309, xx + 1229, xx + 1235);
  xx[1202] = xx[1232] + xx[1235];
  xx[1203] = (xx[1220] * xx[352] + xx[474] * xx[1219]) * xx[18] - xx[1218] + xx
    [1227];
  xx[1218] = (xx[1202] + xx[1228] * xx[200] + xx[1203] * xx[206] + xx[1215] *
              xx[296]) / xx[461];
  xx[1229] = xx[1228] + xx[1218] * xx[414];
  xx[1230] = xx[18] * (xx[1219] * xx[478] - xx[344] * xx[1220]) + xx[1226] + xx
    [518] * xx[1218];
  xx[1231] = xx[1203] - xx[381] * xx[1218];
  pm_math_quatXform(xx + 219, xx + 1229, xx + 1225);
  xx[1228] = xx[1224] + xx[397] * xx[1218];
  xx[1229] = xx[1215] + xx[442] * xx[1218];
  xx[1230] = xx[1216] + xx[1218] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1228, xx + 1238);
  pm_math_cross3(xx + 556, xx + 1238, xx + 1228);
  xx[1203] = xx[1225] + xx[1228];
  pm_math_quatCompose(xx + 309, xx + 1144, xx + 1241);
  xx[1215] = xx[1146] * xx[1146];
  xx[1216] = xx[1147] * xx[1147];
  xx[1219] = xx[1145] * xx[1146];
  xx[1220] = xx[1144] * xx[1147];
  xx[1224] = xx[18] * (xx[1219] - xx[1220]);
  xx[1231] = xx[1144] * xx[1146];
  xx[1245] = xx[1145] * xx[1147];
  xx[1246] = xx[3] - (xx[1215] + xx[1216]) * xx[18];
  xx[1247] = xx[1224];
  xx[1248] = (xx[1231] + xx[1245]) * xx[18];
  pm_math_cross3(xx + 1246, xx + 236, xx + 1249);
  pm_math_quatXform(xx + 1241, xx + 1249, xx + 1246);
  xx[1249] = xx[1141] * xx[190];
  xx[1250] = xx[1134] * xx[192];
  xx[1251] = xx[1249] + xx[1250];
  xx[1252] = xx[1141] * xx[189];
  xx[1253] = xx[1134] * xx[189];
  xx[1254] = - xx[1251];
  xx[1255] = - xx[1252];
  xx[1256] = - xx[1253];
  pm_math_cross3(xx + 616, xx + 1254, xx + 1257);
  xx[1254] = xx[18] * (xx[1257] - xx[1251] * xx[188]) + xx[635];
  xx[1255] = xx[18] * (xx[1258] - xx[1252] * xx[188]) + xx[628] - xx[1134] - xx
    [235];
  xx[1256] = xx[1141] + xx[18] * (xx[1259] - xx[1253] * xx[188]) + xx[629] - xx
    [234];
  pm_math_quatXform(xx + 305, xx + 1254, xx + 1251);
  xx[1254] = xx[1246] + xx[1251];
  xx[1255] = xx[1145] * xx[1145];
  xx[1256] = xx[1146] * xx[1147];
  xx[1257] = xx[1144] * xx[1145];
  xx[1258] = xx[18] * (xx[1256] - xx[1257]);
  xx[1259] = (xx[1220] + xx[1219]) * xx[18];
  xx[1260] = xx[3] - (xx[1216] + xx[1255]) * xx[18];
  xx[1261] = xx[1258];
  pm_math_cross3(xx + 1259, xx + 236, xx + 1262);
  pm_math_quatXform(xx + 1241, xx + 1262, xx + 1259);
  xx[1262] = xx[1140] * xx[190];
  xx[1263] = xx[1140] * xx[189];
  xx[1264] = xx[1263] - xx[1250];
  xx[1250] = xx[1134] * xx[190];
  xx[1265] = xx[1262];
  xx[1266] = xx[1264];
  xx[1267] = xx[1250];
  pm_math_cross3(xx + 616, xx + 1265, xx + 1268);
  xx[1265] = xx[1134] + (xx[1262] * xx[188] + xx[1268]) * xx[18] + xx[650] + xx
    [235];
  xx[1266] = (xx[1264] * xx[188] + xx[1269]) * xx[18] + xx[646];
  xx[1267] = (xx[1250] * xx[188] + xx[1270]) * xx[18] + xx[649] - xx[1140] - xx
    [233];
  pm_math_quatXform(xx + 305, xx + 1265, xx + 1268);
  xx[1134] = xx[1259] + xx[1268];
  xx[1250] = xx[1226] + xx[1229];
  xx[1262] = xx[18] * (xx[1245] - xx[1231]);
  xx[1264] = xx[1262];
  xx[1265] = (xx[1257] + xx[1256]) * xx[18];
  xx[1266] = xx[3] - (xx[1255] + xx[1215]) * xx[18];
  pm_math_cross3(xx + 1264, xx + 236, xx + 1271);
  pm_math_quatXform(xx + 1241, xx + 1271, xx + 1264);
  xx[1241] = xx[1140] * xx[192];
  xx[1242] = xx[1141] * xx[192];
  xx[1243] = xx[1263] - xx[1249];
  pm_math_cross3(xx + 616, xx + 1241, xx + 1271);
  xx[1274] = (xx[1241] * xx[188] + xx[1271]) * xx[18] + xx[575] - xx[1141] + xx
    [234];
  xx[1275] = xx[1140] + (xx[1242] * xx[188] + xx[1272]) * xx[18] + xx[187] + xx
    [233];
  xx[1276] = (xx[1243] * xx[188] + xx[1273]) * xx[18] + xx[555];
  pm_math_quatXform(xx + 305, xx + 1274, xx + 1241);
  xx[1140] = xx[1264] + xx[1241];
  xx[1141] = xx[1227] + xx[1230];
  xx[1225] = xx[1254] - (xx[1203] - (xx[235] * xx[1239] + xx[234] * xx[1240]));
  xx[1226] = xx[1134] - (xx[1250] + xx[235] * xx[1238] - xx[233] * xx[1240]);
  xx[1227] = xx[1140] - (xx[1141] + xx[234] * xx[1238] + xx[233] * xx[1239]);
  solveSymmetricPosDef(xx + 597, xx + 1225, 3, 1, xx + 1228, xx + 1271);
  xx[1225] = xx[1203] + xx[426] * xx[1228] + xx[438] * xx[1229] + xx[459] * xx
    [1230];
  xx[1226] = xx[1250] + xx[505] * xx[1228] + xx[511] * xx[1229] + xx[520] * xx
    [1230];
  xx[1227] = xx[1141] + xx[545] * xx[1228] + xx[448] * xx[1229] + xx[526] * xx
    [1230];
  pm_math_quatXform(xx + 193, xx + 1225, xx + 1271);
  xx[1225] = xx[1238] + xx[253] * xx[1228] + xx[516] * xx[1229] + xx[514] * xx
    [1230];
  xx[1226] = xx[1239] + xx[428] * xx[1228] + xx[441] * xx[1229] + xx[503] * xx
    [1230];
  xx[1227] = xx[1240] + xx[432] * xx[1228] + xx[444] * xx[1229] + xx[509] * xx
    [1230];
  pm_math_quatXform(xx + 193, xx + 1225, xx + 1238);
  pm_math_cross3(xx + 449, xx + 1238, xx + 1225);
  xx[1141] = xx[1271] + xx[1225];
  pm_math_quatCompose(xx + 305, xx + 1148, xx + 1274);
  xx[1203] = xx[94] * xx[1151];
  xx[1244] = xx[94] * xx[1149] + xx[1150];
  xx[1278] = xx[1203];
  xx[1279] = xx[1151];
  xx[1280] = - xx[1244];
  pm_math_cross3(xx + 1149, xx + 1278, xx + 1281);
  xx[1249] = xx[1148] * xx[1151];
  xx[1278] = xx[3] + (xx[1281] - xx[1148] * xx[1203]) * xx[18];
  xx[1279] = xx[18] * (xx[1282] - xx[1249]) - xx[94];
  xx[1280] = xx[18] * (xx[1283] + xx[1148] * xx[1244]);
  pm_math_cross3(xx + 1278, xx + 236, xx + 1281);
  pm_math_quatXform(xx + 1274, xx + 1281, xx + 1278);
  xx[1244] = - (xx[1142] * xx[94]);
  xx[1281] = xx[1244];
  xx[1282] = - xx[1142];
  xx[1283] = xx[1136] + xx[1135] * xx[94];
  pm_math_quatXform(xx + 183, xx + 1281, xx + 1284);
  xx[1281] = xx[1284] + xx[787];
  xx[1282] = xx[1285] + xx[788];
  xx[1283] = xx[1286] + xx[789];
  pm_math_quatXform(xx + 301, xx + 1281, xx + 1284);
  xx[1250] = xx[1278] + xx[1284];
  xx[1263] = xx[1272] + xx[1226];
  xx[1267] = xx[1149] - xx[94] * xx[1150];
  xx[1281] = - xx[1151];
  xx[1282] = xx[1203];
  xx[1283] = xx[1267];
  pm_math_cross3(xx + 1149, xx + 1281, xx + 1287);
  xx[1281] = xx[94] + (xx[1249] + xx[1287]) * xx[18];
  xx[1282] = xx[3] + xx[18] * (xx[1288] - xx[94] * xx[1249]);
  xx[1283] = xx[18] * (xx[1289] - xx[1148] * xx[1267]);
  pm_math_cross3(xx + 1281, xx + 236, xx + 1287);
  pm_math_quatXform(xx + 1274, xx + 1287, xx + 1281);
  xx[1287] = xx[1142];
  xx[1288] = xx[1244];
  xx[1289] = xx[1136] * xx[94] - xx[1135];
  pm_math_quatXform(xx + 183, xx + 1287, xx + 1290);
  xx[1287] = xx[1290] + xx[796];
  xx[1288] = xx[1291] + xx[797];
  xx[1289] = xx[1292] + xx[798];
  pm_math_quatXform(xx + 301, xx + 1287, xx + 1290);
  xx[1142] = xx[1281] + xx[1290];
  xx[1203] = xx[1149] * xx[1151];
  xx[1244] = xx[1148] * xx[1150];
  xx[1267] = xx[18] * (xx[1203] - xx[1244]);
  xx[1287] = xx[1148] * xx[1149];
  xx[1288] = xx[1150] * xx[1151];
  xx[1289] = xx[1149] * xx[1149];
  xx[1293] = xx[1150] * xx[1150];
  xx[1294] = xx[1267];
  xx[1295] = (xx[1287] + xx[1288]) * xx[18];
  xx[1296] = xx[3] - (xx[1289] + xx[1293]) * xx[18];
  pm_math_cross3(xx + 1294, xx + 236, xx + 1297);
  pm_math_quatXform(xx + 1274, xx + 1297, xx + 1294);
  xx[1274] = xx[1135] * xx[181];
  xx[1275] = xx[1136] * xx[181];
  xx[1276] = xx[1135] * xx[177] + xx[1136] * xx[179];
  xx[1297] = xx[1274];
  xx[1298] = xx[1275];
  xx[1299] = - xx[1276];
  pm_math_cross3(xx + 765, xx + 1297, xx + 1300);
  xx[1297] = xx[18] * (xx[1300] + xx[1274] * xx[176]) + xx[812] - xx[1136] - xx
    [73];
  xx[1298] = xx[1135] + xx[18] * (xx[1301] + xx[1275] * xx[176]) + xx[768] + xx
    [72];
  xx[1299] = (xx[1302] - xx[1276] * xx[176]) * xx[18] + xx[810];
  pm_math_quatXform(xx + 301, xx + 1297, xx + 1274);
  xx[1135] = xx[1294] + xx[1274];
  xx[1136] = xx[1273] + xx[1227];
  xx[1225] = xx[1250] - (xx[1141] - xx[1263] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1238));
  xx[1226] = xx[1142] - (xx[1141] * xx[94] + xx[1263] + pm_math_dot3(xx + 758,
    xx + 1238));
  xx[1227] = xx[1135] - (xx[1136] + xx[72] * xx[1239] - xx[73] * xx[1238]);
  solveSymmetricPosDef(xx + 778, xx + 1225, 3, 1, xx + 1271, xx + 1297);
  xx[1225] = xx[1141] + xx[668] * xx[1271] + xx[697] * xx[1272] + xx[770] * xx
    [1273];
  xx[1226] = xx[1263] + xx[692] * xx[1271] + xx[700] * xx[1272] + xx[772] * xx
    [1273];
  xx[1227] = xx[1136] + xx[278] * xx[1271] + xx[452] * xx[1272] + xx[720] * xx
    [1273];
  pm_math_quatXform(xx + 183, xx + 1225, xx + 1297);
  xx[1225] = xx[1238] + xx[698] * xx[1271] + xx[728] * xx[1272] + xx[773] * xx
    [1273];
  xx[1226] = xx[1239] + xx[699] * xx[1271] + xx[732] * xx[1272] + xx[774] * xx
    [1273];
  xx[1227] = xx[1240] + xx[695] * xx[1271] + xx[764] * xx[1272] + xx[775] * xx
    [1273];
  pm_math_quatXform(xx + 183, xx + 1225, xx + 1238);
  pm_math_cross3(xx + 282, xx + 1238, xx + 1225);
  xx[1136] = (xx[1195] - (xx[1299] + xx[1227] - (xx[285] * xx[1238] + xx[281] *
    xx[1239]))) / xx[660];
  xx[1141] = xx[179] * xx[1136];
  xx[1225] = xx[1136] * xx[177];
  xx[1226] = (xx[1141] * xx[176] + xx[1225] * xx[181]) * xx[18];
  xx[1227] = xx[18] * (xx[1141] * xx[181] - xx[1225] * xx[176]);
  xx[1238] = xx[1136] - (xx[1225] * xx[177] + xx[179] * xx[1141]) * xx[18];
  xx[1297] = xx[1226];
  xx[1298] = xx[1227];
  xx[1299] = xx[1238];
  xx[1141] = xx[1136] * xx[282] - xx[281] * xx[1136];
  xx[1225] = xx[1141] * xx[181];
  xx[1239] = xx[285] * xx[1136] + xx[1136] * xx[283];
  xx[1240] = xx[1239] * xx[181];
  xx[1263] = xx[1141] * xx[177] + xx[179] * xx[1239];
  xx[1300] = xx[1225];
  xx[1301] = xx[1240];
  xx[1302] = - xx[1263];
  pm_math_cross3(xx + 765, xx + 1300, xx + 1303);
  xx[1277] = (xx[1303] - xx[1225] * xx[176]) * xx[18] - xx[1239];
  xx[1225] = xx[1141] + xx[18] * (xx[1304] - xx[1240] * xx[176]);
  xx[1141] = xx[18] * (xx[1305] + xx[1263] * xx[176]);
  xx[1300] = xx[1277];
  xx[1301] = xx[1225];
  xx[1302] = xx[1141];
  xx[1239] = xx[1271] - (pm_math_dot3(xx + 689, xx + 1297) + pm_math_dot3(xx +
    729, xx + 1300));
  xx[1240] = xx[1272] - (pm_math_dot3(xx + 761, xx + 1297) + pm_math_dot3(xx +
    888, xx + 1300));
  xx[1263] = xx[1273] - (pm_math_dot3(xx + 891, xx + 1297) + pm_math_dot3(xx +
    834, xx + 1300));
  xx[1271] = xx[1226] + xx[1239] + xx[94] * xx[1240];
  xx[1272] = xx[1227] - xx[94] * xx[1239] + xx[1240];
  xx[1273] = xx[1238] + xx[1263];
  pm_math_quatInverseXform(xx + 193, xx + 1271, xx + 1297);
  pm_math_cross3(xx + 1271, xx + 449, xx + 1300);
  xx[1271] = xx[1277] + xx[95] * xx[1239] - xx[114] * xx[1240] - xx[73] * xx
    [1263] + xx[1300];
  xx[1272] = xx[1225] + xx[114] * xx[1239] + xx[95] * xx[1240] + xx[72] * xx
    [1263] + xx[1301];
  xx[1273] = xx[1141] + xx[115] * xx[1239] + xx[696] * xx[1240] + xx[1302];
  pm_math_quatInverseXform(xx + 193, xx + 1271, xx + 1225);
  xx[1141] = xx[1228] - (pm_math_dot3(xx + 724, xx + 1297) + pm_math_dot3(xx +
    840, xx + 1225));
  xx[1228] = xx[1229] - (pm_math_dot3(xx + 733, xx + 1297) + pm_math_dot3(xx +
    846, xx + 1225));
  xx[1229] = xx[1230] - (pm_math_dot3(xx + 849, xx + 1297) + pm_math_dot3(xx +
    701, xx + 1225));
  xx[1271] = xx[1297] + xx[1141];
  xx[1272] = xx[1298] + xx[1228];
  xx[1273] = xx[1299] + xx[1229];
  pm_math_quatInverseXform(xx + 219, xx + 1271, xx + 1297);
  pm_math_cross3(xx + 1271, xx + 556, xx + 1300);
  xx[1271] = xx[1225] + xx[235] * xx[1228] + xx[234] * xx[1229] + xx[1300];
  xx[1272] = xx[1226] - xx[235] * xx[1141] + xx[233] * xx[1229] + xx[1301];
  xx[1273] = xx[1227] - xx[234] * xx[1141] - xx[233] * xx[1228] + xx[1302];
  pm_math_quatInverseXform(xx + 219, xx + 1271, xx + 1225);
  xx[1230] = xx[1218] - (pm_math_dot3(xx + 643, xx + 1297) + pm_math_dot3(xx +
    386, xx + 1225));
  xx[1218] = xx[1299] - xx[206] * xx[1230];
  xx[1271] = xx[1297] - xx[200] * xx[1230];
  xx[1272] = xx[1298];
  xx[1273] = xx[1218];
  pm_math_cross3(xx + 1271, xx + 249, xx + 1297);
  xx[1238] = xx[1225] + xx[1297];
  xx[1277] = xx[1226] - xx[296] * xx[1230];
  xx[1226] = xx[1277] + xx[1298];
  xx[1297] = xx[1226] * xx[210];
  xx[1298] = xx[1238] * xx[210];
  xx[1299] = xx[1218] * xx[673] + xx[539] * (xx[1238] - (xx[198] * xx[1297] +
    xx[1298] * xx[210]) * xx[18]) + (xx[1226] + xx[18] * (xx[198] * xx[1298] -
    xx[1297] * xx[210])) * xx[574];
  xx[1218] = xx[295] * xx[1136] + xx[776] * xx[1239] + xx[268] * xx[1240] + xx
    [178] * xx[1263] + xx[559] * xx[1141] + xx[191] * xx[1228] + xx[255] * xx
    [1229] + xx[317] * xx[1230] + xx[1299] * xx[247];
  xx[1226] = xx[1131] + xx[1186] + (xx[1193] * xx[168] + xx[1199]) * xx[18];
  xx[1186] = (xx[234] * xx[1201] * xx[1204] + xx[1209]) * xx[18] + xx[1222] +
    xx[233];
  xx[1193] = xx[1186] / xx[476];
  xx[1204] = xx[498] * xx[1193];
  xx[1238] = xx[501] * xx[1193];
  xx[1297] = xx[1238] * xx[478];
  xx[1298] = xx[1204] * xx[478];
  xx[1300] = xx[1238] * xx[352] + xx[474] * xx[1204];
  xx[1301] = - xx[1297];
  xx[1302] = xx[1298];
  xx[1303] = xx[1300];
  pm_math_cross3(xx + 1205, xx + 1301, xx + 1304);
  xx[1301] = xx[1204] + xx[18] * (xx[1304] + xx[344] * xx[1297]);
  xx[1204] = xx[1238] + (xx[1305] - xx[344] * xx[1298]) * xx[18];
  xx[1238] = (xx[1306] - xx[344] * xx[1300]) * xx[18];
  xx[1302] = xx[1301];
  xx[1303] = xx[1204];
  xx[1304] = xx[1238];
  pm_math_cross3(xx + 541, xx + 1302, xx + 1305);
  xx[1297] = xx[57] * xx[1193];
  xx[1298] = xx[474] * xx[1297];
  xx[1300] = xx[1297] * xx[352];
  xx[1302] = xx[1305] - (xx[344] * xx[1298] + xx[1300] * xx[478]) * xx[18];
  xx[1303] = xx[1233] + xx[1236];
  xx[1304] = (xx[1300] * xx[352] + xx[474] * xx[1298]) * xx[18] - xx[1297] + xx
    [1307];
  xx[1297] = (xx[1303] + xx[1302] * xx[200] + xx[1304] * xx[206] + xx[1204] *
              xx[296]) / xx[461];
  xx[1307] = xx[1302] + xx[1297] * xx[414];
  xx[1308] = xx[18] * (xx[1298] * xx[478] - xx[344] * xx[1300]) + xx[1306] + xx
    [518] * xx[1297];
  xx[1309] = xx[1304] - xx[381] * xx[1297];
  pm_math_quatXform(xx + 219, xx + 1307, xx + 1304);
  xx[1307] = xx[1301] + xx[397] * xx[1297];
  xx[1308] = xx[1204] + xx[442] * xx[1297];
  xx[1309] = xx[1238] + xx[1297] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1307, xx + 1300);
  pm_math_cross3(xx + 556, xx + 1300, xx + 1307);
  xx[1204] = xx[1304] + xx[1307];
  xx[1238] = xx[1247] + xx[1252];
  xx[1298] = xx[1260] + xx[1269];
  xx[1310] = xx[1305] + xx[1308];
  xx[1311] = xx[1265] + xx[1242];
  xx[1304] = xx[1306] + xx[1309];
  xx[1305] = xx[1238] - (xx[1204] - (xx[235] * xx[1301] + xx[234] * xx[1302]));
  xx[1306] = xx[1298] - (xx[1310] + xx[235] * xx[1300] - xx[233] * xx[1302]);
  xx[1307] = xx[1311] - (xx[1304] + xx[234] * xx[1300] + xx[233] * xx[1301]);
  solveSymmetricPosDef(xx + 597, xx + 1305, 3, 1, xx + 1312, xx + 1315);
  xx[1305] = xx[1204] + xx[426] * xx[1312] + xx[438] * xx[1313] + xx[459] * xx
    [1314];
  xx[1306] = xx[1310] + xx[505] * xx[1312] + xx[511] * xx[1313] + xx[520] * xx
    [1314];
  xx[1307] = xx[1304] + xx[545] * xx[1312] + xx[448] * xx[1313] + xx[526] * xx
    [1314];
  pm_math_quatXform(xx + 193, xx + 1305, xx + 1308);
  xx[1304] = xx[1300] + xx[253] * xx[1312] + xx[516] * xx[1313] + xx[514] * xx
    [1314];
  xx[1305] = xx[1301] + xx[428] * xx[1312] + xx[441] * xx[1313] + xx[503] * xx
    [1314];
  xx[1306] = xx[1302] + xx[432] * xx[1312] + xx[444] * xx[1313] + xx[509] * xx
    [1314];
  pm_math_quatXform(xx + 193, xx + 1304, xx + 1300);
  pm_math_cross3(xx + 449, xx + 1300, xx + 1304);
  xx[1204] = xx[1308] + xx[1304];
  xx[1307] = xx[1279] + xx[1285];
  xx[1315] = xx[1309] + xx[1305];
  xx[1316] = xx[1282] + xx[1291];
  xx[1317] = xx[1295] + xx[1275];
  xx[1304] = xx[1310] + xx[1306];
  xx[1308] = xx[1307] - (xx[1204] - xx[1315] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1300));
  xx[1309] = xx[1316] - (xx[1204] * xx[94] + xx[1315] + pm_math_dot3(xx + 758,
    xx + 1300));
  xx[1310] = xx[1317] - (xx[1304] + xx[72] * xx[1301] - xx[73] * xx[1300]);
  solveSymmetricPosDef(xx + 778, xx + 1308, 3, 1, xx + 1318, xx + 1321);
  xx[1308] = xx[1204] + xx[668] * xx[1318] + xx[697] * xx[1319] + xx[770] * xx
    [1320];
  xx[1309] = xx[1315] + xx[692] * xx[1318] + xx[700] * xx[1319] + xx[772] * xx
    [1320];
  xx[1310] = xx[1304] + xx[278] * xx[1318] + xx[452] * xx[1319] + xx[720] * xx
    [1320];
  pm_math_quatXform(xx + 183, xx + 1308, xx + 1304);
  xx[1308] = xx[1300] + xx[698] * xx[1318] + xx[728] * xx[1319] + xx[773] * xx
    [1320];
  xx[1309] = xx[1301] + xx[699] * xx[1318] + xx[732] * xx[1319] + xx[774] * xx
    [1320];
  xx[1310] = xx[1302] + xx[695] * xx[1318] + xx[764] * xx[1319] + xx[775] * xx
    [1320];
  pm_math_quatXform(xx + 183, xx + 1308, xx + 1300);
  pm_math_cross3(xx + 282, xx + 1300, xx + 1308);
  xx[1204] = (xx[1226] - (xx[1306] + xx[1310] - (xx[285] * xx[1300] + xx[281] *
    xx[1301]))) / xx[660];
  xx[1300] = xx[179] * xx[1204];
  xx[1301] = xx[1204] * xx[177];
  xx[1302] = (xx[1300] * xx[176] + xx[1301] * xx[181]) * xx[18];
  xx[1304] = xx[18] * (xx[1300] * xx[181] - xx[1301] * xx[176]);
  xx[1305] = xx[1204] - (xx[1301] * xx[177] + xx[179] * xx[1300]) * xx[18];
  xx[1308] = xx[1302];
  xx[1309] = xx[1304];
  xx[1310] = xx[1305];
  xx[1300] = xx[1204] * xx[282] - xx[281] * xx[1204];
  xx[1301] = xx[1300] * xx[181];
  xx[1306] = xx[285] * xx[1204] + xx[1204] * xx[283];
  xx[1315] = xx[1306] * xx[181];
  xx[1321] = xx[1300] * xx[177] + xx[179] * xx[1306];
  xx[1322] = xx[1301];
  xx[1323] = xx[1315];
  xx[1324] = - xx[1321];
  pm_math_cross3(xx + 765, xx + 1322, xx + 1325);
  xx[1322] = (xx[1325] - xx[1301] * xx[176]) * xx[18] - xx[1306];
  xx[1301] = xx[1300] + xx[18] * (xx[1326] - xx[1315] * xx[176]);
  xx[1300] = xx[18] * (xx[1327] + xx[1321] * xx[176]);
  xx[1323] = xx[1322];
  xx[1324] = xx[1301];
  xx[1325] = xx[1300];
  xx[1306] = xx[1318] - (pm_math_dot3(xx + 689, xx + 1308) + pm_math_dot3(xx +
    729, xx + 1323));
  xx[1315] = xx[1319] - (pm_math_dot3(xx + 761, xx + 1308) + pm_math_dot3(xx +
    888, xx + 1323));
  xx[1318] = xx[1320] - (pm_math_dot3(xx + 891, xx + 1308) + pm_math_dot3(xx +
    834, xx + 1323));
  xx[1308] = xx[1302] + xx[1306] + xx[94] * xx[1315];
  xx[1309] = xx[1304] - xx[94] * xx[1306] + xx[1315];
  xx[1310] = xx[1305] + xx[1318];
  pm_math_quatInverseXform(xx + 193, xx + 1308, xx + 1319);
  pm_math_cross3(xx + 1308, xx + 449, xx + 1323);
  xx[1308] = xx[1322] + xx[95] * xx[1306] - xx[114] * xx[1315] - xx[73] * xx
    [1318] + xx[1323];
  xx[1309] = xx[1301] + xx[114] * xx[1306] + xx[95] * xx[1315] + xx[72] * xx
    [1318] + xx[1324];
  xx[1310] = xx[1300] + xx[115] * xx[1306] + xx[696] * xx[1315] + xx[1325];
  pm_math_quatInverseXform(xx + 193, xx + 1308, xx + 1300);
  xx[1304] = xx[1312] - (pm_math_dot3(xx + 724, xx + 1319) + pm_math_dot3(xx +
    840, xx + 1300));
  xx[1305] = xx[1313] - (pm_math_dot3(xx + 733, xx + 1319) + pm_math_dot3(xx +
    846, xx + 1300));
  xx[1308] = xx[1314] - (pm_math_dot3(xx + 849, xx + 1319) + pm_math_dot3(xx +
    701, xx + 1300));
  xx[1312] = xx[1319] + xx[1304];
  xx[1313] = xx[1320] + xx[1305];
  xx[1314] = xx[1321] + xx[1308];
  pm_math_quatInverseXform(xx + 219, xx + 1312, xx + 1319);
  pm_math_cross3(xx + 1312, xx + 556, xx + 1322);
  xx[1312] = xx[1300] + xx[235] * xx[1305] + xx[234] * xx[1308] + xx[1322];
  xx[1313] = xx[1301] - xx[235] * xx[1304] + xx[233] * xx[1308] + xx[1323];
  xx[1314] = xx[1302] - xx[234] * xx[1304] - xx[233] * xx[1305] + xx[1324];
  pm_math_quatInverseXform(xx + 219, xx + 1312, xx + 1300);
  xx[1309] = xx[1297] - (pm_math_dot3(xx + 643, xx + 1319) + pm_math_dot3(xx +
    386, xx + 1300));
  xx[1297] = xx[1321] - xx[206] * xx[1309];
  xx[1312] = xx[1319] - xx[200] * xx[1309];
  xx[1313] = xx[1320];
  xx[1314] = xx[1297];
  pm_math_cross3(xx + 1312, xx + 249, xx + 1319);
  xx[1310] = xx[1300] + xx[1319];
  xx[1322] = xx[1301] - xx[296] * xx[1309];
  xx[1301] = xx[1322] + xx[1320];
  xx[1319] = xx[1301] * xx[210];
  xx[1320] = xx[1310] * xx[210];
  xx[1321] = xx[1297] * xx[673] + xx[539] * (xx[1310] - (xx[198] * xx[1319] +
    xx[1320] * xx[210]) * xx[18]) + (xx[1301] + xx[18] * (xx[198] * xx[1320] -
    xx[1319] * xx[210])) * xx[574];
  xx[1297] = xx[295] * xx[1204] + xx[776] * xx[1306] + xx[268] * xx[1315] + xx
    [178] * xx[1318] + xx[559] * xx[1304] + xx[191] * xx[1305] + xx[255] * xx
    [1308] + xx[317] * xx[1309] + xx[247] * xx[1321];
  xx[1130] = xx[1132] + (xx[1194] * xx[168] + xx[1200]) * xx[18];
  xx[1131] = (xx[1201] * xx[1185] + xx[1210]) * xx[18] + xx[1223];
  xx[1132] = xx[1131] / xx[476];
  xx[1185] = xx[498] * xx[1132];
  xx[1194] = xx[501] * xx[1132];
  xx[1198] = xx[1194] * xx[478];
  xx[1199] = xx[1185] * xx[478];
  xx[1200] = xx[1194] * xx[352] + xx[474] * xx[1185];
  xx[1208] = - xx[1198];
  xx[1209] = xx[1199];
  xx[1210] = xx[1200];
  pm_math_cross3(xx + 1205, xx + 1208, xx + 1221);
  xx[1201] = xx[1185] + xx[18] * (xx[1221] + xx[344] * xx[1198]);
  xx[1185] = xx[1194] + (xx[1222] - xx[344] * xx[1199]) * xx[18];
  xx[1194] = (xx[1223] - xx[344] * xx[1200]) * xx[18];
  xx[1198] = xx[1201];
  xx[1199] = xx[1185];
  xx[1200] = xx[1194];
  pm_math_cross3(xx + 541, xx + 1198, xx + 1208);
  xx[1198] = xx[57] * xx[1132];
  xx[1199] = xx[474] * xx[1198];
  xx[1200] = xx[1198] * xx[352];
  xx[1221] = xx[1208] - (xx[344] * xx[1199] + xx[1200] * xx[478]) * xx[18];
  xx[1222] = xx[1234] + xx[1237];
  xx[1223] = (xx[1200] * xx[352] + xx[474] * xx[1199]) * xx[18] - xx[1198] + xx
    [1210];
  xx[1198] = (xx[1222] + xx[1221] * xx[200] + xx[1223] * xx[206] + xx[1185] *
              xx[296]) / xx[461];
  xx[1232] = xx[1221] + xx[1198] * xx[414];
  xx[1233] = xx[18] * (xx[1199] * xx[478] - xx[344] * xx[1200]) + xx[1209] + xx
    [518] * xx[1198];
  xx[1234] = xx[1223] - xx[381] * xx[1198];
  pm_math_quatXform(xx + 219, xx + 1232, xx + 1208);
  xx[1232] = xx[1201] + xx[397] * xx[1198];
  xx[1233] = xx[1185] + xx[442] * xx[1198];
  xx[1234] = xx[1194] + xx[1198] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1232, xx + 1199);
  pm_math_cross3(xx + 556, xx + 1199, xx + 1232);
  xx[1185] = xx[1208] + xx[1232];
  xx[1194] = xx[1248] + xx[1253];
  xx[1221] = xx[1261] + xx[1270];
  xx[1223] = xx[1209] + xx[1233];
  xx[1235] = xx[1266] + xx[1243];
  xx[1208] = xx[1210] + xx[1234];
  xx[1232] = xx[1194] - (xx[1185] - (xx[235] * xx[1200] + xx[234] * xx[1201]));
  xx[1233] = xx[1221] - (xx[1223] + xx[235] * xx[1199] - xx[233] * xx[1201]);
  xx[1234] = xx[1235] - (xx[1208] + xx[234] * xx[1199] + xx[233] * xx[1200]);
  solveSymmetricPosDef(xx + 597, xx + 1232, 3, 1, xx + 1241, xx + 1246);
  xx[1232] = xx[1185] + xx[426] * xx[1241] + xx[438] * xx[1242] + xx[459] * xx
    [1243];
  xx[1233] = xx[1223] + xx[505] * xx[1241] + xx[511] * xx[1242] + xx[520] * xx
    [1243];
  xx[1234] = xx[1208] + xx[545] * xx[1241] + xx[448] * xx[1242] + xx[526] * xx
    [1243];
  pm_math_quatXform(xx + 193, xx + 1232, xx + 1208);
  xx[1232] = xx[1199] + xx[253] * xx[1241] + xx[516] * xx[1242] + xx[514] * xx
    [1243];
  xx[1233] = xx[1200] + xx[428] * xx[1241] + xx[441] * xx[1242] + xx[503] * xx
    [1243];
  xx[1234] = xx[1201] + xx[432] * xx[1241] + xx[444] * xx[1242] + xx[509] * xx
    [1243];
  pm_math_quatXform(xx + 193, xx + 1232, xx + 1199);
  pm_math_cross3(xx + 449, xx + 1199, xx + 1232);
  xx[1185] = xx[1208] + xx[1232];
  xx[1223] = xx[1280] + xx[1286];
  xx[1236] = xx[1209] + xx[1233];
  xx[1237] = xx[1283] + xx[1292];
  xx[1246] = xx[1296] + xx[1276];
  xx[1208] = xx[1210] + xx[1234];
  xx[1232] = xx[1223] - (xx[1185] - xx[1236] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1199));
  xx[1233] = xx[1237] - (xx[1185] * xx[94] + xx[1236] + pm_math_dot3(xx + 758,
    xx + 1199));
  xx[1234] = xx[1246] - (xx[1208] + xx[72] * xx[1200] - xx[73] * xx[1199]);
  solveSymmetricPosDef(xx + 778, xx + 1232, 3, 1, xx + 1251, xx + 1259);
  xx[1232] = xx[1185] + xx[668] * xx[1251] + xx[697] * xx[1252] + xx[770] * xx
    [1253];
  xx[1233] = xx[1236] + xx[692] * xx[1251] + xx[700] * xx[1252] + xx[772] * xx
    [1253];
  xx[1234] = xx[1208] + xx[278] * xx[1251] + xx[452] * xx[1252] + xx[720] * xx
    [1253];
  pm_math_quatXform(xx + 183, xx + 1232, xx + 1208);
  xx[1232] = xx[1199] + xx[698] * xx[1251] + xx[728] * xx[1252] + xx[773] * xx
    [1253];
  xx[1233] = xx[1200] + xx[699] * xx[1251] + xx[732] * xx[1252] + xx[774] * xx
    [1253];
  xx[1234] = xx[1201] + xx[695] * xx[1251] + xx[764] * xx[1252] + xx[775] * xx
    [1253];
  pm_math_quatXform(xx + 183, xx + 1232, xx + 1199);
  pm_math_cross3(xx + 282, xx + 1199, xx + 1232);
  xx[1185] = (xx[1130] - (xx[1210] + xx[1234] - (xx[285] * xx[1199] + xx[281] *
    xx[1200]))) / xx[660];
  xx[1199] = xx[179] * xx[1185];
  xx[1200] = xx[1185] * xx[177];
  xx[1201] = (xx[1199] * xx[176] + xx[1200] * xx[181]) * xx[18];
  xx[1208] = xx[18] * (xx[1199] * xx[181] - xx[1200] * xx[176]);
  xx[1209] = xx[1185] - (xx[1200] * xx[177] + xx[179] * xx[1199]) * xx[18];
  xx[1232] = xx[1201];
  xx[1233] = xx[1208];
  xx[1234] = xx[1209];
  xx[1199] = xx[1185] * xx[282] - xx[281] * xx[1185];
  xx[1200] = xx[1199] * xx[181];
  xx[1210] = xx[285] * xx[1185] + xx[1185] * xx[283];
  xx[1236] = xx[181] * xx[1210];
  xx[1247] = xx[1199] * xx[177] + xx[179] * xx[1210];
  xx[1259] = xx[1200];
  xx[1260] = xx[1236];
  xx[1261] = - xx[1247];
  pm_math_cross3(xx + 765, xx + 1259, xx + 1264);
  xx[1248] = (xx[1264] - xx[1200] * xx[176]) * xx[18] - xx[1210];
  xx[1200] = xx[1199] + xx[18] * (xx[1265] - xx[1236] * xx[176]);
  xx[1199] = xx[18] * (xx[1266] + xx[1247] * xx[176]);
  xx[1259] = xx[1248];
  xx[1260] = xx[1200];
  xx[1261] = xx[1199];
  xx[1210] = xx[1251] - (pm_math_dot3(xx + 689, xx + 1232) + pm_math_dot3(xx +
    729, xx + 1259));
  xx[1236] = xx[1252] - (pm_math_dot3(xx + 761, xx + 1232) + pm_math_dot3(xx +
    888, xx + 1259));
  xx[1247] = xx[1253] - (pm_math_dot3(xx + 891, xx + 1232) + pm_math_dot3(xx +
    834, xx + 1259));
  xx[1232] = xx[1201] + xx[1210] + xx[94] * xx[1236];
  xx[1233] = xx[1208] - xx[94] * xx[1210] + xx[1236];
  xx[1234] = xx[1209] + xx[1247];
  pm_math_quatInverseXform(xx + 193, xx + 1232, xx + 1251);
  pm_math_cross3(xx + 1232, xx + 449, xx + 1259);
  xx[1232] = xx[1248] + xx[95] * xx[1210] - xx[114] * xx[1236] - xx[73] * xx
    [1247] + xx[1259];
  xx[1233] = xx[1200] + xx[114] * xx[1210] + xx[95] * xx[1236] + xx[72] * xx
    [1247] + xx[1260];
  xx[1234] = xx[1199] + xx[115] * xx[1210] + xx[696] * xx[1236] + xx[1261];
  pm_math_quatInverseXform(xx + 193, xx + 1232, xx + 1199);
  xx[1208] = xx[1241] - (pm_math_dot3(xx + 724, xx + 1251) + pm_math_dot3(xx +
    840, xx + 1199));
  xx[1209] = xx[1242] - (pm_math_dot3(xx + 733, xx + 1251) + pm_math_dot3(xx +
    846, xx + 1199));
  xx[1232] = xx[1243] - (pm_math_dot3(xx + 849, xx + 1251) + pm_math_dot3(xx +
    701, xx + 1199));
  xx[1241] = xx[1251] + xx[1208];
  xx[1242] = xx[1252] + xx[1209];
  xx[1243] = xx[1253] + xx[1232];
  pm_math_quatInverseXform(xx + 219, xx + 1241, xx + 1251);
  pm_math_cross3(xx + 1241, xx + 556, xx + 1259);
  xx[1241] = xx[1199] + xx[235] * xx[1209] + xx[234] * xx[1232] + xx[1259];
  xx[1242] = xx[1200] - xx[235] * xx[1208] + xx[233] * xx[1232] + xx[1260];
  xx[1243] = xx[1201] - xx[234] * xx[1208] - xx[233] * xx[1209] + xx[1261];
  pm_math_quatInverseXform(xx + 219, xx + 1241, xx + 1199);
  xx[1233] = xx[1198] - (pm_math_dot3(xx + 643, xx + 1251) + pm_math_dot3(xx +
    386, xx + 1199));
  xx[1198] = xx[1253] - xx[206] * xx[1233];
  xx[1241] = xx[1251] - xx[200] * xx[1233];
  xx[1242] = xx[1252];
  xx[1243] = xx[1198];
  pm_math_cross3(xx + 1241, xx + 249, xx + 1251);
  xx[1234] = xx[1199] + xx[1251];
  xx[1248] = xx[1200] - xx[296] * xx[1233];
  xx[1200] = xx[1248] + xx[1252];
  xx[1251] = xx[1200] * xx[210];
  xx[1252] = xx[1234] * xx[210];
  xx[1253] = xx[1198] * xx[673] + xx[539] * (xx[1234] - (xx[198] * xx[1251] +
    xx[1252] * xx[210]) * xx[18]) + (xx[1200] + xx[18] * (xx[198] * xx[1252] -
    xx[1251] * xx[210])) * xx[574];
  xx[1198] = xx[295] * xx[1185] + xx[776] * xx[1210] + xx[268] * xx[1236] + xx
    [178] * xx[1247] + xx[559] * xx[1208] + xx[191] * xx[1209] + xx[255] * xx
    [1232] + xx[317] * xx[1233] + xx[247] * xx[1253];
  pm_math_quatCompose(xx + 219, xx + 407, xx + 1278);
  pm_math_quatCompose(xx + 193, xx + 1278, xx + 1282);
  pm_math_quatCompose(xx + 183, xx + 1282, xx + 1323);
  pm_math_quatCompose(xx + 172, xx + 1323, xx + 1327);
  xx[1200] = xx[1324] * xx[1326];
  xx[1234] = xx[1323] * xx[1325];
  xx[1251] = xx[18] * (xx[1200] - xx[1234]);
  xx[1252] = xx[1323] * xx[1324];
  xx[1259] = xx[1325] * xx[1326];
  xx[1260] = xx[1324] * xx[1324];
  xx[1261] = xx[1325] * xx[1325];
  xx[1264] = xx[1251];
  xx[1265] = (xx[1252] + xx[1259]) * xx[18];
  xx[1266] = xx[3] - (xx[1260] + xx[1261]) * xx[18];
  pm_math_cross3(xx + 1264, xx + 236, xx + 1268);
  pm_math_quatXform(xx + 1327, xx + 1268, xx + 1264);
  pm_math_quatXform(xx + 219, xx + 417, xx + 1268);
  xx[1274] = xx[1268] - xx[263];
  xx[1275] = xx[1269] + xx[257];
  xx[1268] = xx[1270] - xx[252];
  xx[1290] = xx[1274];
  xx[1291] = xx[1275];
  xx[1292] = xx[1268];
  pm_math_quatXform(xx + 193, xx + 1290, xx + 1294);
  xx[1269] = xx[1294] + xx[256];
  xx[1270] = xx[1295] + xx[277];
  xx[1276] = xx[1296] + xx[267];
  xx[1294] = xx[1269];
  xx[1295] = xx[1270];
  xx[1296] = xx[1276];
  pm_math_quatXform(xx + 183, xx + 1294, xx + 1327);
  xx[1286] = xx[1328] + xx[283];
  xx[1301] = xx[1327] + xx[282];
  xx[1310] = xx[1286] * xx[164] - xx[1301] * xx[162];
  xx[1319] = xx[18] * xx[164] * xx[1310] - (xx[1286] - xx[287]) - xx[285];
  xx[1320] = xx[1301] + xx[18] * xx[162] * xx[1310] + xx[292] - xx[281];
  xx[1310] = xx[169] * xx[1320];
  xx[1327] = xx[169] * xx[1319];
  xx[1328] = xx[154] * xx[1320] - xx[1319] * xx[161];
  xx[1329] = - xx[1310];
  xx[1330] = xx[1327];
  xx[1331] = xx[1328];
  pm_math_cross3(xx + 289, xx + 1329, xx + 1332);
  xx[1329] = xx[1264] + xx[1319] + xx[18] * (xx[1332] - xx[1310] * xx[168]);
  pm_math_quatCompose(xx + 313, xx + 407, xx + 1335);
  xx[1310] = xx[233] * xx[1338];
  xx[1319] = xx[233] * xx[1336] - xx[234] * xx[1337];
  xx[1339] = - xx[1310];
  xx[1340] = xx[234] * xx[1338];
  xx[1341] = xx[1319];
  pm_math_cross3(xx + 1336, xx + 1339, xx + 1342);
  xx[1339] = xx[349];
  xx[1340] = xx[355];
  xx[1341] = xx[353];
  xx[1330] = xx[394] * xx[353];
  xx[1331] = xx[411] * xx[353];
  xx[1345] = xx[394] * xx[349] + xx[355] * xx[411];
  xx[1346] = xx[1330];
  xx[1347] = xx[1331];
  xx[1348] = - xx[1345];
  pm_math_cross3(xx + 1339, xx + 1346, xx + 1349);
  xx[1346] = xx[350] * xx[1330];
  xx[1347] = xx[411] + xx[18] * (xx[1349] + xx[1346]);
  xx[1348] = xx[350] * xx[1331];
  xx[1352] = (xx[1348] + xx[1350]) * xx[18] - xx[394];
  xx[1349] = xx[1351] - xx[350] * xx[1345];
  xx[1353] = xx[1347];
  xx[1354] = xx[1352];
  xx[1355] = xx[1349] * xx[18];
  pm_math_quatXform(xx + 313, xx + 1353, xx + 1356);
  xx[1345] = xx[18] * (xx[1342] - xx[1335] * xx[1310]) + xx[1356] + xx[234];
  xx[1310] = xx[1345] / xx[351];
  xx[1350] = xx[378] * xx[1310];
  xx[1351] = xx[375] * xx[1310];
  xx[1353] = xx[1351] * xx[353];
  xx[1354] = xx[1350] * xx[353];
  xx[1355] = xx[1351] * xx[349] + xx[355] * xx[1350];
  xx[1359] = xx[1353];
  xx[1360] = xx[1354];
  xx[1361] = - xx[1355];
  pm_math_cross3(xx + 1339, xx + 1359, xx + 1362);
  xx[1359] = xx[1350] + xx[18] * (xx[1362] + xx[350] * xx[1353]);
  xx[1350] = (xx[350] * xx[1354] + xx[1363]) * xx[18] - xx[1351];
  xx[1351] = (xx[1364] - xx[350] * xx[1355]) * xx[18];
  xx[1353] = xx[1359];
  xx[1354] = xx[1350];
  xx[1355] = xx[1351];
  pm_math_cross3(xx + 417, xx + 1353, xx + 1360);
  xx[1353] = xx[57] * xx[1310];
  xx[1354] = xx[355] * xx[1353];
  xx[1355] = xx[1353] * xx[349];
  xx[1363] = xx[1360] - (xx[350] * xx[1354] + xx[1355] * xx[353]) * xx[18];
  xx[1364] = xx[355] * xx[206];
  xx[1365] = xx[206] * xx[349] - xx[200] * xx[353];
  xx[1366] = xx[355] * xx[200];
  xx[1367] = - xx[1364];
  xx[1368] = xx[1365];
  xx[1369] = xx[1366];
  pm_math_cross3(xx + 1339, xx + 1367, xx + 1370);
  xx[1367] = xx[18] * (xx[1370] + xx[350] * xx[1364]) - xx[200];
  xx[1368] = xx[18] * (xx[1371] - xx[350] * xx[1365]);
  xx[1369] = (xx[1372] - xx[350] * xx[1366]) * xx[18] - xx[206];
  pm_math_cross3(xx + 1367, xx + 236, xx + 1364);
  pm_math_quatXform(xx + 1335, xx + 1364, xx + 1367);
  xx[1364] = - (xx[206] * xx[416]);
  xx[1365] = xx[206] * xx[412] + xx[200] * xx[413];
  xx[1366] = xx[200] * xx[416];
  pm_math_quatXform(xx + 219, xx + 1364, xx + 1370);
  xx[1364] = xx[1370] + xx[319];
  xx[1365] = xx[1371] + xx[320] - xx[296];
  xx[1366] = xx[1372] - xx[297];
  pm_math_quatXform(xx + 309, xx + 1364, xx + 1370);
  xx[1336] = xx[1367] + xx[1370];
  xx[1337] = (xx[1355] * xx[349] + xx[355] * xx[1354]) * xx[18] - xx[1353] + xx
    [1362];
  xx[1353] = (xx[1336] + xx[1363] * xx[200] + xx[1337] * xx[206] + xx[1350] *
              xx[296]) / xx[461];
  xx[1364] = xx[1363] + xx[1353] * xx[414];
  xx[1365] = xx[18] * (xx[350] * xx[1355] - xx[1354] * xx[353]) + xx[1361] + xx
    [518] * xx[1353];
  xx[1366] = xx[1337] - xx[381] * xx[1353];
  pm_math_quatXform(xx + 219, xx + 1364, xx + 1360);
  xx[1363] = xx[1359] + xx[397] * xx[1353];
  xx[1364] = xx[1350] + xx[442] * xx[1353];
  xx[1365] = xx[1351] + xx[1353] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1363, xx + 1373);
  pm_math_cross3(xx + 556, xx + 1373, xx + 1363);
  xx[1337] = xx[1360] + xx[1363];
  pm_math_quatCompose(xx + 309, xx + 1278, xx + 1376);
  xx[1350] = xx[1280] * xx[1280];
  xx[1351] = xx[1281] * xx[1281];
  xx[1354] = xx[1279] * xx[1280];
  xx[1355] = xx[1278] * xx[1281];
  xx[1359] = xx[18] * (xx[1354] - xx[1355]);
  xx[1366] = xx[1278] * xx[1280];
  xx[1380] = xx[1279] * xx[1281];
  xx[1381] = xx[3] - (xx[1350] + xx[1351]) * xx[18];
  xx[1382] = xx[1359];
  xx[1383] = (xx[1366] + xx[1380]) * xx[18];
  pm_math_cross3(xx + 1381, xx + 236, xx + 1384);
  pm_math_quatXform(xx + 1376, xx + 1384, xx + 1381);
  xx[1384] = xx[190] * xx[1275];
  xx[1385] = xx[192] * xx[1268];
  xx[1386] = xx[1384] + xx[1385];
  xx[1387] = xx[1275] * xx[189];
  xx[1388] = xx[1268] * xx[189];
  xx[1389] = - xx[1386];
  xx[1390] = - xx[1387];
  xx[1391] = - xx[1388];
  pm_math_cross3(xx + 616, xx + 1389, xx + 1392);
  xx[1389] = xx[18] * (xx[1392] - xx[1386] * xx[188]) + xx[635];
  xx[1390] = xx[18] * (xx[1393] - xx[1387] * xx[188]) + xx[628] - xx[1268] - xx
    [235];
  xx[1391] = xx[1275] + xx[18] * (xx[1394] - xx[1388] * xx[188]) + xx[629] - xx
    [234];
  pm_math_quatXform(xx + 305, xx + 1389, xx + 1386);
  xx[1389] = xx[1381] + xx[1386];
  xx[1390] = xx[1279] * xx[1279];
  xx[1391] = xx[1280] * xx[1281];
  xx[1392] = xx[1278] * xx[1279];
  xx[1393] = xx[18] * (xx[1391] - xx[1392]);
  xx[1394] = (xx[1355] + xx[1354]) * xx[18];
  xx[1395] = xx[3] - (xx[1351] + xx[1390]) * xx[18];
  xx[1396] = xx[1393];
  pm_math_cross3(xx + 1394, xx + 236, xx + 1397);
  pm_math_quatXform(xx + 1376, xx + 1397, xx + 1394);
  xx[1397] = xx[190] * xx[1274];
  xx[1398] = xx[1274] * xx[189];
  xx[1399] = xx[1398] - xx[1385];
  xx[1385] = xx[190] * xx[1268];
  xx[1400] = xx[1397];
  xx[1401] = xx[1399];
  xx[1402] = xx[1385];
  pm_math_cross3(xx + 616, xx + 1400, xx + 1403);
  xx[1400] = xx[1268] + (xx[1397] * xx[188] + xx[1403]) * xx[18] + xx[650] + xx
    [235];
  xx[1401] = (xx[188] * xx[1399] + xx[1404]) * xx[18] + xx[646];
  xx[1402] = (xx[1385] * xx[188] + xx[1405]) * xx[18] + xx[649] - xx[1274] - xx
    [233];
  pm_math_quatXform(xx + 305, xx + 1400, xx + 1403);
  xx[1268] = xx[1394] + xx[1403];
  xx[1385] = xx[1361] + xx[1364];
  xx[1397] = xx[18] * (xx[1380] - xx[1366]);
  xx[1399] = xx[1397];
  xx[1400] = (xx[1392] + xx[1391]) * xx[18];
  xx[1401] = xx[3] - (xx[1390] + xx[1350]) * xx[18];
  pm_math_cross3(xx + 1399, xx + 236, xx + 1406);
  pm_math_quatXform(xx + 1376, xx + 1406, xx + 1399);
  xx[1376] = xx[192] * xx[1274];
  xx[1377] = xx[192] * xx[1275];
  xx[1378] = xx[1398] - xx[1384];
  pm_math_cross3(xx + 616, xx + 1376, xx + 1406);
  xx[1409] = (xx[1376] * xx[188] + xx[1406]) * xx[18] + xx[575] - xx[1275] + xx
    [234];
  xx[1410] = xx[1274] + (xx[1377] * xx[188] + xx[1407]) * xx[18] + xx[187] + xx
    [233];
  xx[1411] = (xx[188] * xx[1378] + xx[1408]) * xx[18] + xx[555];
  pm_math_quatXform(xx + 305, xx + 1409, xx + 1376);
  xx[1274] = xx[1399] + xx[1376];
  xx[1275] = xx[1362] + xx[1365];
  xx[1360] = xx[1389] - (xx[1337] - (xx[235] * xx[1374] + xx[234] * xx[1375]));
  xx[1361] = xx[1268] - (xx[1385] + xx[235] * xx[1373] - xx[233] * xx[1375]);
  xx[1362] = xx[1274] - (xx[1275] + xx[234] * xx[1373] + xx[233] * xx[1374]);
  solveSymmetricPosDef(xx + 597, xx + 1360, 3, 1, xx + 1363, xx + 1406);
  xx[1360] = xx[1337] + xx[426] * xx[1363] + xx[438] * xx[1364] + xx[459] * xx
    [1365];
  xx[1361] = xx[1385] + xx[505] * xx[1363] + xx[511] * xx[1364] + xx[520] * xx
    [1365];
  xx[1362] = xx[1275] + xx[545] * xx[1363] + xx[448] * xx[1364] + xx[526] * xx
    [1365];
  pm_math_quatXform(xx + 193, xx + 1360, xx + 1406);
  xx[1360] = xx[1373] + xx[253] * xx[1363] + xx[516] * xx[1364] + xx[514] * xx
    [1365];
  xx[1361] = xx[1374] + xx[428] * xx[1363] + xx[441] * xx[1364] + xx[503] * xx
    [1365];
  xx[1362] = xx[1375] + xx[432] * xx[1363] + xx[444] * xx[1364] + xx[509] * xx
    [1365];
  pm_math_quatXform(xx + 193, xx + 1360, xx + 1373);
  pm_math_cross3(xx + 449, xx + 1373, xx + 1360);
  xx[1275] = xx[1406] + xx[1360];
  pm_math_quatCompose(xx + 305, xx + 1282, xx + 1409);
  xx[1337] = xx[94] * xx[1285];
  xx[1379] = xx[94] * xx[1283] + xx[1284];
  xx[1413] = xx[1337];
  xx[1414] = xx[1285];
  xx[1415] = - xx[1379];
  pm_math_cross3(xx + 1283, xx + 1413, xx + 1416);
  xx[1384] = xx[1282] * xx[1285];
  xx[1413] = xx[3] + (xx[1416] - xx[1282] * xx[1337]) * xx[18];
  xx[1414] = xx[18] * (xx[1417] - xx[1384]) - xx[94];
  xx[1415] = xx[18] * (xx[1418] + xx[1282] * xx[1379]);
  pm_math_cross3(xx + 1413, xx + 236, xx + 1416);
  pm_math_quatXform(xx + 1409, xx + 1416, xx + 1413);
  xx[1379] = - (xx[1276] * xx[94]);
  xx[1416] = xx[1379];
  xx[1417] = - xx[1276];
  xx[1418] = xx[1270] + xx[1269] * xx[94];
  pm_math_quatXform(xx + 183, xx + 1416, xx + 1419);
  xx[1416] = xx[1419] + xx[787];
  xx[1417] = xx[1420] + xx[788];
  xx[1418] = xx[1421] + xx[789];
  pm_math_quatXform(xx + 301, xx + 1416, xx + 1419);
  xx[1385] = xx[1413] + xx[1419];
  xx[1398] = xx[1407] + xx[1361];
  xx[1402] = xx[1283] - xx[94] * xx[1284];
  xx[1416] = - xx[1285];
  xx[1417] = xx[1337];
  xx[1418] = xx[1402];
  pm_math_cross3(xx + 1283, xx + 1416, xx + 1422);
  xx[1416] = xx[94] + (xx[1384] + xx[1422]) * xx[18];
  xx[1417] = xx[3] + xx[18] * (xx[1423] - xx[94] * xx[1384]);
  xx[1418] = xx[18] * (xx[1424] - xx[1282] * xx[1402]);
  pm_math_cross3(xx + 1416, xx + 236, xx + 1422);
  pm_math_quatXform(xx + 1409, xx + 1422, xx + 1416);
  xx[1422] = xx[1276];
  xx[1423] = xx[1379];
  xx[1424] = xx[1270] * xx[94] - xx[1269];
  pm_math_quatXform(xx + 183, xx + 1422, xx + 1425);
  xx[1422] = xx[1425] + xx[796];
  xx[1423] = xx[1426] + xx[797];
  xx[1424] = xx[1427] + xx[798];
  pm_math_quatXform(xx + 301, xx + 1422, xx + 1425);
  xx[1276] = xx[1416] + xx[1425];
  xx[1337] = xx[1283] * xx[1285];
  xx[1379] = xx[1282] * xx[1284];
  xx[1402] = xx[18] * (xx[1337] - xx[1379]);
  xx[1422] = xx[1282] * xx[1283];
  xx[1423] = xx[1284] * xx[1285];
  xx[1424] = xx[1283] * xx[1283];
  xx[1428] = xx[1284] * xx[1284];
  xx[1429] = xx[1402];
  xx[1430] = (xx[1422] + xx[1423]) * xx[18];
  xx[1431] = xx[3] - (xx[1424] + xx[1428]) * xx[18];
  pm_math_cross3(xx + 1429, xx + 236, xx + 1432);
  pm_math_quatXform(xx + 1409, xx + 1432, xx + 1429);
  xx[1409] = xx[1269] * xx[181];
  xx[1410] = xx[1270] * xx[181];
  xx[1411] = xx[1269] * xx[177] + xx[179] * xx[1270];
  xx[1432] = xx[1409];
  xx[1433] = xx[1410];
  xx[1434] = - xx[1411];
  pm_math_cross3(xx + 765, xx + 1432, xx + 1435);
  xx[1432] = xx[18] * (xx[1435] + xx[1409] * xx[176]) + xx[812] - xx[1270] - xx
    [73];
  xx[1433] = xx[1269] + xx[18] * (xx[1436] + xx[1410] * xx[176]) + xx[768] + xx
    [72];
  xx[1434] = (xx[1437] - xx[1411] * xx[176]) * xx[18] + xx[810];
  pm_math_quatXform(xx + 301, xx + 1432, xx + 1409);
  xx[1269] = xx[1429] + xx[1409];
  xx[1270] = xx[1408] + xx[1362];
  xx[1360] = xx[1385] - (xx[1275] - xx[1398] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1373));
  xx[1361] = xx[1276] - (xx[1275] * xx[94] + xx[1398] + pm_math_dot3(xx + 758,
    xx + 1373));
  xx[1362] = xx[1269] - (xx[1270] + xx[72] * xx[1374] - xx[73] * xx[1373]);
  solveSymmetricPosDef(xx + 778, xx + 1360, 3, 1, xx + 1406, xx + 1432);
  xx[1360] = xx[1275] + xx[668] * xx[1406] + xx[697] * xx[1407] + xx[770] * xx
    [1408];
  xx[1361] = xx[1398] + xx[692] * xx[1406] + xx[700] * xx[1407] + xx[772] * xx
    [1408];
  xx[1362] = xx[1270] + xx[278] * xx[1406] + xx[452] * xx[1407] + xx[720] * xx
    [1408];
  pm_math_quatXform(xx + 183, xx + 1360, xx + 1432);
  xx[1360] = xx[1373] + xx[698] * xx[1406] + xx[728] * xx[1407] + xx[773] * xx
    [1408];
  xx[1361] = xx[1374] + xx[699] * xx[1406] + xx[732] * xx[1407] + xx[774] * xx
    [1408];
  xx[1362] = xx[1375] + xx[695] * xx[1406] + xx[764] * xx[1407] + xx[775] * xx
    [1408];
  pm_math_quatXform(xx + 183, xx + 1360, xx + 1373);
  pm_math_cross3(xx + 282, xx + 1373, xx + 1360);
  xx[1270] = (xx[1329] - (xx[1434] + xx[1362] - (xx[285] * xx[1373] + xx[281] *
    xx[1374]))) / xx[660];
  xx[1275] = xx[179] * xx[1270];
  xx[1360] = xx[1270] * xx[177];
  xx[1361] = (xx[1275] * xx[176] + xx[1360] * xx[181]) * xx[18];
  xx[1362] = xx[18] * (xx[1275] * xx[181] - xx[1360] * xx[176]);
  xx[1373] = xx[1270] - (xx[1360] * xx[177] + xx[179] * xx[1275]) * xx[18];
  xx[1432] = xx[1361];
  xx[1433] = xx[1362];
  xx[1434] = xx[1373];
  xx[1275] = xx[1270] * xx[282] - xx[281] * xx[1270];
  xx[1360] = xx[1275] * xx[181];
  xx[1374] = xx[285] * xx[1270] + xx[1270] * xx[283];
  xx[1375] = xx[1374] * xx[181];
  xx[1398] = xx[1275] * xx[177] + xx[179] * xx[1374];
  xx[1435] = xx[1360];
  xx[1436] = xx[1375];
  xx[1437] = - xx[1398];
  pm_math_cross3(xx + 765, xx + 1435, xx + 1438);
  xx[1412] = (xx[1438] - xx[1360] * xx[176]) * xx[18] - xx[1374];
  xx[1360] = xx[1275] + xx[18] * (xx[1439] - xx[1375] * xx[176]);
  xx[1275] = xx[18] * (xx[1440] + xx[1398] * xx[176]);
  xx[1435] = xx[1412];
  xx[1436] = xx[1360];
  xx[1437] = xx[1275];
  xx[1374] = xx[1406] - (pm_math_dot3(xx + 689, xx + 1432) + pm_math_dot3(xx +
    729, xx + 1435));
  xx[1375] = xx[1407] - (pm_math_dot3(xx + 761, xx + 1432) + pm_math_dot3(xx +
    888, xx + 1435));
  xx[1398] = xx[1408] - (pm_math_dot3(xx + 891, xx + 1432) + pm_math_dot3(xx +
    834, xx + 1435));
  xx[1406] = xx[1361] + xx[1374] + xx[94] * xx[1375];
  xx[1407] = xx[1362] - xx[94] * xx[1374] + xx[1375];
  xx[1408] = xx[1373] + xx[1398];
  pm_math_quatInverseXform(xx + 193, xx + 1406, xx + 1432);
  pm_math_cross3(xx + 1406, xx + 449, xx + 1435);
  xx[1406] = xx[1412] + xx[95] * xx[1374] - xx[114] * xx[1375] - xx[73] * xx
    [1398] + xx[1435];
  xx[1407] = xx[1360] + xx[114] * xx[1374] + xx[95] * xx[1375] + xx[72] * xx
    [1398] + xx[1436];
  xx[1408] = xx[1275] + xx[115] * xx[1374] + xx[696] * xx[1375] + xx[1437];
  pm_math_quatInverseXform(xx + 193, xx + 1406, xx + 1360);
  xx[1275] = xx[1363] - (pm_math_dot3(xx + 724, xx + 1432) + pm_math_dot3(xx +
    840, xx + 1360));
  xx[1363] = xx[1364] - (pm_math_dot3(xx + 733, xx + 1432) + pm_math_dot3(xx +
    846, xx + 1360));
  xx[1364] = xx[1365] - (pm_math_dot3(xx + 849, xx + 1432) + pm_math_dot3(xx +
    701, xx + 1360));
  xx[1406] = xx[1432] + xx[1275];
  xx[1407] = xx[1433] + xx[1363];
  xx[1408] = xx[1434] + xx[1364];
  pm_math_quatInverseXform(xx + 219, xx + 1406, xx + 1432);
  pm_math_cross3(xx + 1406, xx + 556, xx + 1435);
  xx[1406] = xx[1360] + xx[235] * xx[1363] + xx[234] * xx[1364] + xx[1435];
  xx[1407] = xx[1361] - xx[235] * xx[1275] + xx[233] * xx[1364] + xx[1436];
  xx[1408] = xx[1362] - xx[234] * xx[1275] - xx[233] * xx[1363] + xx[1437];
  pm_math_quatInverseXform(xx + 219, xx + 1406, xx + 1360);
  xx[1365] = xx[1353] - (pm_math_dot3(xx + 643, xx + 1432) + pm_math_dot3(xx +
    386, xx + 1360));
  xx[1353] = xx[1434] - xx[206] * xx[1365];
  xx[1406] = xx[1432] - xx[200] * xx[1365];
  xx[1407] = xx[1433];
  xx[1408] = xx[1353];
  pm_math_cross3(xx + 1406, xx + 249, xx + 1432);
  xx[1373] = xx[1360] + xx[1432];
  xx[1412] = xx[1361] - xx[296] * xx[1365];
  xx[1361] = xx[1412] + xx[1433];
  xx[1432] = xx[1361] * xx[210];
  xx[1433] = xx[1373] * xx[210];
  xx[1434] = xx[1353] * xx[673] + xx[539] * (xx[1373] - (xx[198] * xx[1432] +
    xx[1433] * xx[210]) * xx[18]) + (xx[1361] + xx[18] * (xx[198] * xx[1433] -
    xx[1432] * xx[210])) * xx[574];
  xx[1353] = xx[295] * xx[1270] + xx[776] * xx[1374] + xx[268] * xx[1375] + xx
    [178] * xx[1398] + xx[559] * xx[1275] + xx[191] * xx[1363] + xx[255] * xx
    [1364] + xx[317] * xx[1365] + xx[1434] * xx[247];
  xx[1361] = xx[1265] + xx[1320] + (xx[1327] * xx[168] + xx[1333]) * xx[18];
  xx[1320] = (xx[234] * xx[1335] * xx[1338] + xx[1343]) * xx[18] + xx[1357] +
    xx[233];
  xx[1327] = xx[1320] / xx[351];
  xx[1338] = xx[378] * xx[1327];
  xx[1373] = xx[375] * xx[1327];
  xx[1432] = xx[1373] * xx[353];
  xx[1433] = xx[1338] * xx[353];
  xx[1435] = xx[1373] * xx[349] + xx[355] * xx[1338];
  xx[1436] = xx[1432];
  xx[1437] = xx[1433];
  xx[1438] = - xx[1435];
  pm_math_cross3(xx + 1339, xx + 1436, xx + 1439);
  xx[1436] = xx[1338] + xx[18] * (xx[1439] + xx[350] * xx[1432]);
  xx[1338] = (xx[350] * xx[1433] + xx[1440]) * xx[18] - xx[1373];
  xx[1373] = (xx[1441] - xx[350] * xx[1435]) * xx[18];
  xx[1437] = xx[1436];
  xx[1438] = xx[1338];
  xx[1439] = xx[1373];
  pm_math_cross3(xx + 417, xx + 1437, xx + 1440);
  xx[1432] = xx[57] * xx[1327];
  xx[1433] = xx[355] * xx[1432];
  xx[1435] = xx[1432] * xx[349];
  xx[1437] = xx[1440] - (xx[350] * xx[1433] + xx[1435] * xx[353]) * xx[18];
  xx[1438] = xx[1368] + xx[1371];
  xx[1439] = (xx[1435] * xx[349] + xx[355] * xx[1433]) * xx[18] - xx[1432] + xx
    [1442];
  xx[1432] = (xx[1438] + xx[1437] * xx[200] + xx[1439] * xx[206] + xx[1338] *
              xx[296]) / xx[461];
  xx[1442] = xx[1437] + xx[1432] * xx[414];
  xx[1443] = xx[18] * (xx[350] * xx[1435] - xx[1433] * xx[353]) + xx[1441] + xx
    [518] * xx[1432];
  xx[1444] = xx[1439] - xx[381] * xx[1432];
  pm_math_quatXform(xx + 219, xx + 1442, xx + 1439);
  xx[1442] = xx[1436] + xx[397] * xx[1432];
  xx[1443] = xx[1338] + xx[442] * xx[1432];
  xx[1444] = xx[1373] + xx[1432] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1442, xx + 1435);
  pm_math_cross3(xx + 556, xx + 1435, xx + 1442);
  xx[1338] = xx[1439] + xx[1442];
  xx[1373] = xx[1382] + xx[1387];
  xx[1433] = xx[1395] + xx[1404];
  xx[1445] = xx[1440] + xx[1443];
  xx[1446] = xx[1400] + xx[1377];
  xx[1439] = xx[1441] + xx[1444];
  xx[1440] = xx[1373] - (xx[1338] - (xx[235] * xx[1436] + xx[234] * xx[1437]));
  xx[1441] = xx[1433] - (xx[1445] + xx[235] * xx[1435] - xx[233] * xx[1437]);
  xx[1442] = xx[1446] - (xx[1439] + xx[234] * xx[1435] + xx[233] * xx[1436]);
  solveSymmetricPosDef(xx + 597, xx + 1440, 3, 1, xx + 1447, xx + 1450);
  xx[1440] = xx[1338] + xx[426] * xx[1447] + xx[438] * xx[1448] + xx[459] * xx
    [1449];
  xx[1441] = xx[1445] + xx[505] * xx[1447] + xx[511] * xx[1448] + xx[520] * xx
    [1449];
  xx[1442] = xx[1439] + xx[545] * xx[1447] + xx[448] * xx[1448] + xx[526] * xx
    [1449];
  pm_math_quatXform(xx + 193, xx + 1440, xx + 1443);
  xx[1439] = xx[1435] + xx[253] * xx[1447] + xx[516] * xx[1448] + xx[514] * xx
    [1449];
  xx[1440] = xx[1436] + xx[428] * xx[1447] + xx[441] * xx[1448] + xx[503] * xx
    [1449];
  xx[1441] = xx[1437] + xx[432] * xx[1447] + xx[444] * xx[1448] + xx[509] * xx
    [1449];
  pm_math_quatXform(xx + 193, xx + 1439, xx + 1435);
  pm_math_cross3(xx + 449, xx + 1435, xx + 1439);
  xx[1338] = xx[1443] + xx[1439];
  xx[1442] = xx[1414] + xx[1420];
  xx[1450] = xx[1444] + xx[1440];
  xx[1451] = xx[1417] + xx[1426];
  xx[1452] = xx[1430] + xx[1410];
  xx[1439] = xx[1445] + xx[1441];
  xx[1443] = xx[1442] - (xx[1338] - xx[1450] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1435));
  xx[1444] = xx[1451] - (xx[1338] * xx[94] + xx[1450] + pm_math_dot3(xx + 758,
    xx + 1435));
  xx[1445] = xx[1452] - (xx[1439] + xx[72] * xx[1436] - xx[73] * xx[1435]);
  solveSymmetricPosDef(xx + 778, xx + 1443, 3, 1, xx + 1453, xx + 1456);
  xx[1443] = xx[1338] + xx[668] * xx[1453] + xx[697] * xx[1454] + xx[770] * xx
    [1455];
  xx[1444] = xx[1450] + xx[692] * xx[1453] + xx[700] * xx[1454] + xx[772] * xx
    [1455];
  xx[1445] = xx[1439] + xx[278] * xx[1453] + xx[452] * xx[1454] + xx[720] * xx
    [1455];
  pm_math_quatXform(xx + 183, xx + 1443, xx + 1439);
  xx[1443] = xx[1435] + xx[698] * xx[1453] + xx[728] * xx[1454] + xx[773] * xx
    [1455];
  xx[1444] = xx[1436] + xx[699] * xx[1453] + xx[732] * xx[1454] + xx[774] * xx
    [1455];
  xx[1445] = xx[1437] + xx[695] * xx[1453] + xx[764] * xx[1454] + xx[775] * xx
    [1455];
  pm_math_quatXform(xx + 183, xx + 1443, xx + 1435);
  pm_math_cross3(xx + 282, xx + 1435, xx + 1443);
  xx[1338] = (xx[1361] - (xx[1441] + xx[1445] - (xx[285] * xx[1435] + xx[281] *
    xx[1436]))) / xx[660];
  xx[1435] = xx[179] * xx[1338];
  xx[1436] = xx[1338] * xx[177];
  xx[1437] = (xx[1435] * xx[176] + xx[1436] * xx[181]) * xx[18];
  xx[1439] = xx[18] * (xx[1435] * xx[181] - xx[1436] * xx[176]);
  xx[1440] = xx[1338] - (xx[1436] * xx[177] + xx[179] * xx[1435]) * xx[18];
  xx[1443] = xx[1437];
  xx[1444] = xx[1439];
  xx[1445] = xx[1440];
  xx[1435] = xx[1338] * xx[282] - xx[281] * xx[1338];
  xx[1436] = xx[1435] * xx[181];
  xx[1441] = xx[285] * xx[1338] + xx[1338] * xx[283];
  xx[1450] = xx[1441] * xx[181];
  xx[1456] = xx[1435] * xx[177] + xx[179] * xx[1441];
  xx[1457] = xx[1436];
  xx[1458] = xx[1450];
  xx[1459] = - xx[1456];
  pm_math_cross3(xx + 765, xx + 1457, xx + 1460);
  xx[1457] = (xx[1460] - xx[1436] * xx[176]) * xx[18] - xx[1441];
  xx[1436] = xx[1435] + xx[18] * (xx[1461] - xx[1450] * xx[176]);
  xx[1435] = xx[18] * (xx[1462] + xx[1456] * xx[176]);
  xx[1458] = xx[1457];
  xx[1459] = xx[1436];
  xx[1460] = xx[1435];
  xx[1441] = xx[1453] - (pm_math_dot3(xx + 689, xx + 1443) + pm_math_dot3(xx +
    729, xx + 1458));
  xx[1450] = xx[1454] - (pm_math_dot3(xx + 761, xx + 1443) + pm_math_dot3(xx +
    888, xx + 1458));
  xx[1453] = xx[1455] - (pm_math_dot3(xx + 891, xx + 1443) + pm_math_dot3(xx +
    834, xx + 1458));
  xx[1443] = xx[1437] + xx[1441] + xx[94] * xx[1450];
  xx[1444] = xx[1439] - xx[94] * xx[1441] + xx[1450];
  xx[1445] = xx[1440] + xx[1453];
  pm_math_quatInverseXform(xx + 193, xx + 1443, xx + 1454);
  pm_math_cross3(xx + 1443, xx + 449, xx + 1458);
  xx[1443] = xx[1457] + xx[95] * xx[1441] - xx[114] * xx[1450] - xx[73] * xx
    [1453] + xx[1458];
  xx[1444] = xx[1436] + xx[114] * xx[1441] + xx[95] * xx[1450] + xx[72] * xx
    [1453] + xx[1459];
  xx[1445] = xx[1435] + xx[115] * xx[1441] + xx[696] * xx[1450] + xx[1460];
  pm_math_quatInverseXform(xx + 193, xx + 1443, xx + 1435);
  xx[1439] = xx[1447] - (pm_math_dot3(xx + 724, xx + 1454) + pm_math_dot3(xx +
    840, xx + 1435));
  xx[1440] = xx[1448] - (pm_math_dot3(xx + 733, xx + 1454) + pm_math_dot3(xx +
    846, xx + 1435));
  xx[1443] = xx[1449] - (pm_math_dot3(xx + 849, xx + 1454) + pm_math_dot3(xx +
    701, xx + 1435));
  xx[1447] = xx[1454] + xx[1439];
  xx[1448] = xx[1455] + xx[1440];
  xx[1449] = xx[1456] + xx[1443];
  pm_math_quatInverseXform(xx + 219, xx + 1447, xx + 1454);
  pm_math_cross3(xx + 1447, xx + 556, xx + 1457);
  xx[1447] = xx[1435] + xx[235] * xx[1440] + xx[234] * xx[1443] + xx[1457];
  xx[1448] = xx[1436] - xx[235] * xx[1439] + xx[233] * xx[1443] + xx[1458];
  xx[1449] = xx[1437] - xx[234] * xx[1439] - xx[233] * xx[1440] + xx[1459];
  pm_math_quatInverseXform(xx + 219, xx + 1447, xx + 1435);
  xx[1444] = xx[1432] - (pm_math_dot3(xx + 643, xx + 1454) + pm_math_dot3(xx +
    386, xx + 1435));
  xx[1432] = xx[1456] - xx[206] * xx[1444];
  xx[1447] = xx[1454] - xx[200] * xx[1444];
  xx[1448] = xx[1455];
  xx[1449] = xx[1432];
  pm_math_cross3(xx + 1447, xx + 249, xx + 1454);
  xx[1445] = xx[1435] + xx[1454];
  xx[1457] = xx[1436] - xx[296] * xx[1444];
  xx[1436] = xx[1457] + xx[1455];
  xx[1454] = xx[1436] * xx[210];
  xx[1455] = xx[1445] * xx[210];
  xx[1456] = xx[1432] * xx[673] + xx[539] * (xx[1445] - (xx[198] * xx[1454] +
    xx[1455] * xx[210]) * xx[18]) + (xx[1436] + xx[18] * (xx[198] * xx[1455] -
    xx[1454] * xx[210])) * xx[574];
  xx[1432] = xx[295] * xx[1338] + xx[776] * xx[1441] + xx[268] * xx[1450] + xx
    [178] * xx[1453] + xx[559] * xx[1439] + xx[191] * xx[1440] + xx[255] * xx
    [1443] + xx[317] * xx[1444] + xx[1456] * xx[247];
  xx[1264] = xx[1266] + (xx[168] * xx[1328] + xx[1334]) * xx[18];
  xx[1265] = (xx[1335] * xx[1319] + xx[1344]) * xx[18] + xx[1358];
  xx[1266] = xx[1265] / xx[351];
  xx[1319] = xx[378] * xx[1266];
  xx[1328] = xx[375] * xx[1266];
  xx[1332] = xx[1328] * xx[353];
  xx[1333] = xx[1319] * xx[353];
  xx[1334] = xx[1328] * xx[349] + xx[355] * xx[1319];
  xx[1342] = xx[1332];
  xx[1343] = xx[1333];
  xx[1344] = - xx[1334];
  pm_math_cross3(xx + 1339, xx + 1342, xx + 1356);
  xx[1335] = xx[1319] + xx[18] * (xx[1356] + xx[350] * xx[1332]);
  xx[1319] = (xx[350] * xx[1333] + xx[1357]) * xx[18] - xx[1328];
  xx[1328] = (xx[1358] - xx[350] * xx[1334]) * xx[18];
  xx[1332] = xx[1335];
  xx[1333] = xx[1319];
  xx[1334] = xx[1328];
  pm_math_cross3(xx + 417, xx + 1332, xx + 1342);
  xx[1332] = xx[57] * xx[1266];
  xx[1333] = xx[355] * xx[1332];
  xx[1334] = xx[1332] * xx[349];
  xx[1356] = xx[1342] - (xx[350] * xx[1333] + xx[1334] * xx[353]) * xx[18];
  xx[1357] = xx[1369] + xx[1372];
  xx[1358] = (xx[1334] * xx[349] + xx[355] * xx[1333]) * xx[18] - xx[1332] + xx
    [1344];
  xx[1332] = (xx[1357] + xx[1356] * xx[200] + xx[1358] * xx[206] + xx[1319] *
              xx[296]) / xx[461];
  xx[1367] = xx[1356] + xx[1332] * xx[414];
  xx[1368] = xx[18] * (xx[350] * xx[1334] - xx[1333] * xx[353]) + xx[1343] + xx
    [518] * xx[1332];
  xx[1369] = xx[1358] - xx[381] * xx[1332];
  pm_math_quatXform(xx + 219, xx + 1367, xx + 1342);
  xx[1367] = xx[1335] + xx[397] * xx[1332];
  xx[1368] = xx[1319] + xx[442] * xx[1332];
  xx[1369] = xx[1328] + xx[1332] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1367, xx + 1333);
  pm_math_cross3(xx + 556, xx + 1333, xx + 1367);
  xx[1319] = xx[1342] + xx[1367];
  xx[1328] = xx[1383] + xx[1388];
  xx[1356] = xx[1396] + xx[1405];
  xx[1358] = xx[1343] + xx[1368];
  xx[1370] = xx[1401] + xx[1378];
  xx[1342] = xx[1344] + xx[1369];
  xx[1367] = xx[1328] - (xx[1319] - (xx[235] * xx[1334] + xx[234] * xx[1335]));
  xx[1368] = xx[1356] - (xx[1358] + xx[235] * xx[1333] - xx[233] * xx[1335]);
  xx[1369] = xx[1370] - (xx[1342] + xx[234] * xx[1333] + xx[233] * xx[1334]);
  solveSymmetricPosDef(xx + 597, xx + 1367, 3, 1, xx + 1376, xx + 1381);
  xx[1367] = xx[1319] + xx[426] * xx[1376] + xx[438] * xx[1377] + xx[459] * xx
    [1378];
  xx[1368] = xx[1358] + xx[505] * xx[1376] + xx[511] * xx[1377] + xx[520] * xx
    [1378];
  xx[1369] = xx[1342] + xx[545] * xx[1376] + xx[448] * xx[1377] + xx[526] * xx
    [1378];
  pm_math_quatXform(xx + 193, xx + 1367, xx + 1342);
  xx[1367] = xx[1333] + xx[253] * xx[1376] + xx[516] * xx[1377] + xx[514] * xx
    [1378];
  xx[1368] = xx[1334] + xx[428] * xx[1376] + xx[441] * xx[1377] + xx[503] * xx
    [1378];
  xx[1369] = xx[1335] + xx[432] * xx[1376] + xx[444] * xx[1377] + xx[509] * xx
    [1378];
  pm_math_quatXform(xx + 193, xx + 1367, xx + 1333);
  pm_math_cross3(xx + 449, xx + 1333, xx + 1367);
  xx[1319] = xx[1342] + xx[1367];
  xx[1358] = xx[1415] + xx[1421];
  xx[1371] = xx[1343] + xx[1368];
  xx[1372] = xx[1418] + xx[1427];
  xx[1381] = xx[1431] + xx[1411];
  xx[1342] = xx[1344] + xx[1369];
  xx[1367] = xx[1358] - (xx[1319] - xx[1371] * xx[94] + pm_math_dot3(xx + 116,
    xx + 1333));
  xx[1368] = xx[1372] - (xx[1319] * xx[94] + xx[1371] + pm_math_dot3(xx + 758,
    xx + 1333));
  xx[1369] = xx[1381] - (xx[1342] + xx[72] * xx[1334] - xx[73] * xx[1333]);
  solveSymmetricPosDef(xx + 778, xx + 1367, 3, 1, xx + 1386, xx + 1394);
  xx[1367] = xx[1319] + xx[668] * xx[1386] + xx[697] * xx[1387] + xx[770] * xx
    [1388];
  xx[1368] = xx[1371] + xx[692] * xx[1386] + xx[700] * xx[1387] + xx[772] * xx
    [1388];
  xx[1369] = xx[1342] + xx[278] * xx[1386] + xx[452] * xx[1387] + xx[720] * xx
    [1388];
  pm_math_quatXform(xx + 183, xx + 1367, xx + 1342);
  xx[1367] = xx[1333] + xx[698] * xx[1386] + xx[728] * xx[1387] + xx[773] * xx
    [1388];
  xx[1368] = xx[1334] + xx[699] * xx[1386] + xx[732] * xx[1387] + xx[774] * xx
    [1388];
  xx[1369] = xx[1335] + xx[695] * xx[1386] + xx[764] * xx[1387] + xx[775] * xx
    [1388];
  pm_math_quatXform(xx + 183, xx + 1367, xx + 1333);
  pm_math_cross3(xx + 282, xx + 1333, xx + 1367);
  xx[1319] = (xx[1264] - (xx[1344] + xx[1369] - (xx[285] * xx[1333] + xx[281] *
    xx[1334]))) / xx[660];
  xx[1333] = xx[179] * xx[1319];
  xx[1334] = xx[1319] * xx[177];
  xx[1335] = (xx[1333] * xx[176] + xx[1334] * xx[181]) * xx[18];
  xx[1342] = xx[18] * (xx[1333] * xx[181] - xx[1334] * xx[176]);
  xx[1343] = xx[1319] - (xx[1334] * xx[177] + xx[179] * xx[1333]) * xx[18];
  xx[1367] = xx[1335];
  xx[1368] = xx[1342];
  xx[1369] = xx[1343];
  xx[1333] = xx[1319] * xx[282] - xx[281] * xx[1319];
  xx[1334] = xx[1333] * xx[181];
  xx[1344] = xx[285] * xx[1319] + xx[1319] * xx[283];
  xx[1371] = xx[1344] * xx[181];
  xx[1382] = xx[1333] * xx[177] + xx[179] * xx[1344];
  xx[1394] = xx[1334];
  xx[1395] = xx[1371];
  xx[1396] = - xx[1382];
  pm_math_cross3(xx + 765, xx + 1394, xx + 1399);
  xx[1383] = (xx[1399] - xx[1334] * xx[176]) * xx[18] - xx[1344];
  xx[1334] = xx[1333] + xx[18] * (xx[1400] - xx[1371] * xx[176]);
  xx[1333] = xx[18] * (xx[1401] + xx[1382] * xx[176]);
  xx[1394] = xx[1383];
  xx[1395] = xx[1334];
  xx[1396] = xx[1333];
  xx[1344] = xx[1386] - (pm_math_dot3(xx + 689, xx + 1367) + pm_math_dot3(xx +
    729, xx + 1394));
  xx[1371] = xx[1387] - (pm_math_dot3(xx + 761, xx + 1367) + pm_math_dot3(xx +
    888, xx + 1394));
  xx[1382] = xx[1388] - (pm_math_dot3(xx + 891, xx + 1367) + pm_math_dot3(xx +
    834, xx + 1394));
  xx[1367] = xx[1335] + xx[1344] + xx[94] * xx[1371];
  xx[1368] = xx[1342] - xx[94] * xx[1344] + xx[1371];
  xx[1369] = xx[1343] + xx[1382];
  pm_math_quatInverseXform(xx + 193, xx + 1367, xx + 1386);
  pm_math_cross3(xx + 1367, xx + 449, xx + 1394);
  xx[1367] = xx[1383] + xx[95] * xx[1344] - xx[114] * xx[1371] - xx[73] * xx
    [1382] + xx[1394];
  xx[1368] = xx[1334] + xx[114] * xx[1344] + xx[95] * xx[1371] + xx[72] * xx
    [1382] + xx[1395];
  xx[1369] = xx[1333] + xx[115] * xx[1344] + xx[696] * xx[1371] + xx[1396];
  pm_math_quatInverseXform(xx + 193, xx + 1367, xx + 1333);
  xx[1342] = xx[1376] - (pm_math_dot3(xx + 724, xx + 1386) + pm_math_dot3(xx +
    840, xx + 1333));
  xx[1343] = xx[1377] - (pm_math_dot3(xx + 733, xx + 1386) + pm_math_dot3(xx +
    846, xx + 1333));
  xx[1367] = xx[1378] - (pm_math_dot3(xx + 849, xx + 1386) + pm_math_dot3(xx +
    701, xx + 1333));
  xx[1376] = xx[1386] + xx[1342];
  xx[1377] = xx[1387] + xx[1343];
  xx[1378] = xx[1388] + xx[1367];
  pm_math_quatInverseXform(xx + 219, xx + 1376, xx + 1386);
  pm_math_cross3(xx + 1376, xx + 556, xx + 1394);
  xx[1376] = xx[1333] + xx[235] * xx[1343] + xx[234] * xx[1367] + xx[1394];
  xx[1377] = xx[1334] - xx[235] * xx[1342] + xx[233] * xx[1367] + xx[1395];
  xx[1378] = xx[1335] - xx[234] * xx[1342] - xx[233] * xx[1343] + xx[1396];
  pm_math_quatInverseXform(xx + 219, xx + 1376, xx + 1333);
  xx[1368] = xx[1332] - (pm_math_dot3(xx + 643, xx + 1386) + pm_math_dot3(xx +
    386, xx + 1333));
  xx[1332] = xx[1388] - xx[206] * xx[1368];
  xx[1376] = xx[1386] - xx[200] * xx[1368];
  xx[1377] = xx[1387];
  xx[1378] = xx[1332];
  pm_math_cross3(xx + 1376, xx + 249, xx + 1386);
  xx[1369] = xx[1333] + xx[1386];
  xx[1383] = xx[1334] - xx[296] * xx[1368];
  xx[1334] = xx[1383] + xx[1387];
  xx[1386] = xx[1334] * xx[210];
  xx[1387] = xx[1369] * xx[210];
  xx[1388] = xx[1332] * xx[673] + xx[539] * (xx[1369] - (xx[198] * xx[1386] +
    xx[1387] * xx[210]) * xx[18]) + (xx[1334] + xx[18] * (xx[198] * xx[1387] -
    xx[1386] * xx[210])) * xx[574];
  xx[1332] = xx[295] * xx[1319] + xx[776] * xx[1344] + xx[268] * xx[1371] + xx
    [178] * xx[1382] + xx[559] * xx[1342] + xx[191] * xx[1343] + xx[255] * xx
    [1367] + xx[317] * xx[1368] + xx[1388] * xx[247];
  xx[1334] = xx[363] * xx[209] + xx[399] * xx[197];
  xx[1369] = xx[207] * xx[363] - xx[399] * xx[208];
  xx[1386] = xx[363] * xx[208] + xx[207] * xx[399];
  xx[1387] = xx[363] * xx[197] - xx[399] * xx[209];
  xx[1413] = xx[1334];
  xx[1414] = xx[1369];
  xx[1415] = xx[1386];
  xx[1416] = xx[1387];
  pm_math_quatCompose(xx + 193, xx + 1413, xx + 1417);
  pm_math_quatCompose(xx + 183, xx + 1417, xx + 1458);
  pm_math_quatCompose(xx + 172, xx + 1458, xx + 1462);
  xx[172] = xx[1459] * xx[1461];
  xx[173] = xx[1458] * xx[1460];
  xx[174] = xx[18] * (xx[172] - xx[173]);
  xx[175] = xx[1458] * xx[1459];
  xx[1394] = xx[1460] * xx[1461];
  xx[1395] = xx[1459] * xx[1459];
  xx[1396] = xx[1460] * xx[1460];
  xx[1399] = xx[174];
  xx[1400] = (xx[175] + xx[1394]) * xx[18];
  xx[1401] = xx[3] - (xx[1395] + xx[1396]) * xx[18];
  pm_math_cross3(xx + 1399, xx + 236, xx + 1403);
  pm_math_quatXform(xx + 1462, xx + 1403, xx + 1399);
  xx[1403] = xx[470];
  xx[1404] = - xx[467];
  xx[1405] = - xx[346];
  pm_math_quatXform(xx + 219, xx + 1403, xx + 1409);
  xx[1421] = xx[1409] - xx[263];
  xx[263] = xx[1410] + xx[257];
  xx[257] = xx[1411] - xx[252];
  xx[1409] = xx[1421];
  xx[1410] = xx[263];
  xx[1411] = xx[257];
  pm_math_quatXform(xx + 193, xx + 1409, xx + 1425);
  xx[252] = xx[1425] + xx[256];
  xx[256] = xx[1426] + xx[277];
  xx[277] = xx[1427] + xx[267];
  xx[1425] = xx[252];
  xx[1426] = xx[256];
  xx[1427] = xx[277];
  pm_math_quatXform(xx + 183, xx + 1425, xx + 1429);
  xx[267] = xx[1430] + xx[283];
  xx[1430] = xx[1429] + xx[282];
  xx[1429] = xx[267] * xx[164] - xx[1430] * xx[162];
  xx[1431] = xx[18] * xx[164] * xx[1429] - (xx[267] - xx[287]) - xx[285];
  xx[1436] = xx[1430] + xx[18] * xx[162] * xx[1429] + xx[292] - xx[281];
  xx[1429] = xx[1436] * xx[169];
  xx[1445] = xx[1431] * xx[169];
  xx[1454] = xx[1436] * xx[154] - xx[1431] * xx[161];
  xx[1462] = - xx[1429];
  xx[1463] = xx[1445];
  xx[1464] = xx[1454];
  pm_math_cross3(xx + 289, xx + 1462, xx + 1465);
  xx[1455] = xx[1399] + xx[1431] + xx[18] * (xx[1465] - xx[1429] * xx[168]);
  xx[1429] = xx[363] * xx[313] + xx[316] * xx[399];
  xx[1431] = xx[363] * xx[314] - xx[315] * xx[399];
  xx[1462] = xx[363] * xx[315] + xx[314] * xx[399];
  xx[1463] = xx[363] * xx[316] - xx[313] * xx[399];
  xx[1468] = xx[1429];
  xx[1469] = xx[1431];
  xx[1470] = xx[1462];
  xx[1471] = xx[1463];
  xx[1464] = xx[200] * xx[399];
  xx[1472] = xx[18] * xx[363] * xx[1464];
  xx[1473] = xx[18] * xx[1464] * xx[399] - xx[200];
  xx[1474] = xx[235] * xx[1472] + xx[321];
  xx[1475] = xx[322] + xx[235] * xx[1473];
  xx[1476] = xx[234] * xx[1473] - xx[233] * xx[1472];
  pm_math_quatXform(xx + 1468, xx + 1474, xx + 1477);
  xx[1468] = - (xx[206] * xx[467]);
  xx[1469] = - (xx[206] * xx[470] + 0.1320051346089697);
  xx[1470] = xx[200] * xx[467];
  pm_math_quatXform(xx + 219, xx + 1468, xx + 1471);
  xx[1468] = xx[1471] + xx[319];
  xx[1469] = xx[1472] + xx[320] - xx[296];
  xx[1470] = xx[1473] - xx[297];
  pm_math_quatXform(xx + 309, xx + 1468, xx + 1471);
  xx[297] = xx[1477] + xx[1471];
  xx[1468] = xx[1431];
  xx[1469] = xx[1462];
  xx[1470] = xx[1463];
  xx[319] = xx[233] * xx[1463];
  xx[321] = xx[234] * xx[1463];
  xx[322] = xx[233] * xx[1431] - xx[1462] * xx[234];
  xx[1462] = - xx[319];
  xx[1463] = xx[321];
  xx[1464] = xx[322];
  pm_math_cross3(xx + 1468, xx + 1462, xx + 1474);
  xx[1431] = xx[466] - xx[18] * (xx[458] + xx[464]);
  xx[458] = xx[463] + (xx[468] - xx[465]) * xx[18];
  xx[464] = xx[316] * xx[458];
  xx[465] = xx[1431] * xx[316];
  xx[468] = xx[314] * xx[458] + xx[1431] * xx[315];
  xx[1462] = xx[464];
  xx[1463] = xx[465];
  xx[1464] = - xx[468];
  pm_math_cross3(xx + 314, xx + 1462, xx + 1468);
  xx[1462] = xx[18] * (xx[1474] - xx[1429] * xx[319]) + xx[1431] + xx[18] * (xx
    [1468] + xx[313] * xx[464]) + xx[234];
  xx[319] = xx[1462] / xx[357];
  xx[464] = xx[401] * xx[319];
  xx[1463] = xx[356] * xx[319];
  xx[1464] = xx[1463] * xx[399];
  xx[1480] = xx[464] * xx[399];
  xx[1481] = xx[464] + (xx[363] * xx[1464] - xx[1480] * xx[399]) * xx[18];
  xx[464] = xx[346] * xx[1481];
  xx[1482] = xx[1463] - xx[18] * (xx[363] * xx[1480] + xx[1464] * xx[399]);
  xx[1463] = xx[1482] * xx[467] - xx[470] * xx[1481] - xx[57] * xx[319];
  xx[1464] = (xx[297] - (xx[200] * xx[464] - xx[1463] * xx[206] + xx[296] * xx
    [1481])) / xx[461];
  xx[1483] = xx[1464] * xx[414] - xx[464];
  xx[1484] = xx[518] * xx[1464] - xx[1482] * xx[346];
  xx[1485] = xx[1463] - xx[381] * xx[1464];
  pm_math_quatXform(xx + 219, xx + 1483, xx + 1486);
  xx[1483] = xx[1482] + xx[397] * xx[1464];
  xx[1484] = xx[442] * xx[1464] - xx[1481];
  xx[1485] = xx[1464] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1483, xx + 1480);
  pm_math_cross3(xx + 556, xx + 1480, xx + 1483);
  xx[464] = xx[1486] + xx[1483];
  pm_math_quatCompose(xx + 309, xx + 1413, xx + 1489);
  xx[1463] = xx[1386] * xx[1386];
  xx[1493] = xx[1387] * xx[1387];
  xx[1494] = xx[1386] * xx[1369];
  xx[1495] = xx[1334] * xx[1387];
  xx[1496] = xx[18] * (xx[1494] - xx[1495]);
  xx[1497] = xx[1334] * xx[1386];
  xx[1498] = xx[1369] * xx[1387];
  xx[1499] = xx[3] - (xx[1463] + xx[1493]) * xx[18];
  xx[1500] = xx[1496];
  xx[1501] = (xx[1497] + xx[1498]) * xx[18];
  pm_math_cross3(xx + 1499, xx + 236, xx + 1502);
  pm_math_quatXform(xx + 1489, xx + 1502, xx + 1499);
  xx[1502] = xx[263] * xx[190];
  xx[1503] = xx[257] * xx[192];
  xx[1504] = xx[1502] + xx[1503];
  xx[1505] = xx[263] * xx[189];
  xx[1506] = xx[257] * xx[189];
  xx[1507] = - xx[1504];
  xx[1508] = - xx[1505];
  xx[1509] = - xx[1506];
  pm_math_cross3(xx + 616, xx + 1507, xx + 1510);
  xx[1507] = xx[18] * (xx[1510] - xx[1504] * xx[188]) + xx[635];
  xx[1508] = xx[18] * (xx[1511] - xx[1505] * xx[188]) + xx[628] - xx[257] - xx
    [235];
  xx[1509] = xx[263] + xx[18] * (xx[1512] - xx[1506] * xx[188]) + xx[629] - xx
    [234];
  pm_math_quatXform(xx + 305, xx + 1507, xx + 1504);
  xx[628] = xx[1499] + xx[1504];
  xx[629] = xx[1369] * xx[1369];
  xx[635] = xx[1386] * xx[1387];
  xx[1386] = xx[1334] * xx[1369];
  xx[1369] = xx[18] * (xx[635] - xx[1386]);
  xx[1507] = (xx[1495] + xx[1494]) * xx[18];
  xx[1508] = xx[3] - (xx[1493] + xx[629]) * xx[18];
  xx[1509] = xx[1369];
  pm_math_cross3(xx + 1507, xx + 236, xx + 1510);
  pm_math_quatXform(xx + 1489, xx + 1510, xx + 1507);
  xx[1387] = xx[1421] * xx[190];
  xx[1510] = xx[1421] * xx[189];
  xx[189] = xx[1510] - xx[1503];
  xx[1503] = xx[257] * xx[190];
  xx[1511] = xx[1387];
  xx[1512] = xx[189];
  xx[1513] = xx[1503];
  pm_math_cross3(xx + 616, xx + 1511, xx + 1514);
  xx[1511] = xx[257] + (xx[1387] * xx[188] + xx[1514]) * xx[18] + xx[650] + xx
    [235];
  xx[1512] = (xx[189] * xx[188] + xx[1515]) * xx[18] + xx[646];
  xx[1513] = (xx[1503] * xx[188] + xx[1516]) * xx[18] + xx[649] - xx[1421] - xx
    [233];
  pm_math_quatXform(xx + 305, xx + 1511, xx + 1514);
  xx[189] = xx[1507] + xx[1514];
  xx[190] = xx[1487] + xx[1484];
  xx[257] = xx[18] * (xx[1498] - xx[1497]);
  xx[1511] = xx[257];
  xx[1512] = (xx[1386] + xx[635]) * xx[18];
  xx[1513] = xx[3] - (xx[629] + xx[1463]) * xx[18];
  pm_math_cross3(xx + 1511, xx + 236, xx + 1517);
  pm_math_quatXform(xx + 1489, xx + 1517, xx + 1511);
  xx[646] = xx[1421] * xx[192];
  xx[649] = xx[263] * xx[192];
  xx[192] = xx[1510] - xx[1502];
  xx[1489] = xx[646];
  xx[1490] = xx[649];
  xx[1491] = xx[192];
  pm_math_cross3(xx + 616, xx + 1489, xx + 1517);
  xx[616] = (xx[646] * xx[188] + xx[1517]) * xx[18] + xx[575] - xx[263] + xx[234];
  xx[617] = xx[1421] + (xx[649] * xx[188] + xx[1518]) * xx[18] + xx[187] + xx
    [233];
  xx[618] = (xx[192] * xx[188] + xx[1519]) * xx[18] + xx[555];
  pm_math_quatXform(xx + 305, xx + 616, xx + 1489);
  xx[187] = xx[1511] + xx[1489];
  xx[188] = xx[1488] + xx[1485];
  xx[616] = xx[628] - (xx[464] - (xx[235] * xx[1481] + xx[234] * xx[1482]));
  xx[617] = xx[189] - (xx[190] + xx[235] * xx[1480] - xx[233] * xx[1482]);
  xx[618] = xx[187] - (xx[188] + xx[234] * xx[1480] + xx[233] * xx[1481]);
  solveSymmetricPosDef(xx + 597, xx + 616, 3, 1, xx + 1483, xx + 1486);
  xx[616] = xx[464] + xx[426] * xx[1483] + xx[438] * xx[1484] + xx[459] * xx
    [1485];
  xx[617] = xx[190] + xx[505] * xx[1483] + xx[511] * xx[1484] + xx[520] * xx
    [1485];
  xx[618] = xx[188] + xx[545] * xx[1483] + xx[448] * xx[1484] + xx[526] * xx
    [1485];
  pm_math_quatXform(xx + 193, xx + 616, xx + 1486);
  xx[616] = xx[1480] + xx[253] * xx[1483] + xx[516] * xx[1484] + xx[514] * xx
    [1485];
  xx[617] = xx[1481] + xx[428] * xx[1483] + xx[441] * xx[1484] + xx[503] * xx
    [1485];
  xx[618] = xx[1482] + xx[432] * xx[1483] + xx[444] * xx[1484] + xx[509] * xx
    [1485];
  pm_math_quatXform(xx + 193, xx + 616, xx + 1480);
  pm_math_cross3(xx + 449, xx + 1480, xx + 616);
  xx[188] = xx[1486] + xx[616];
  pm_math_quatCompose(xx + 305, xx + 1417, xx + 1517);
  xx[190] = xx[94] * xx[1420];
  xx[192] = xx[94] * xx[1418] + xx[1419];
  xx[1521] = xx[190];
  xx[1522] = xx[1420];
  xx[1523] = - xx[192];
  pm_math_cross3(xx + 1418, xx + 1521, xx + 1524);
  xx[263] = xx[1417] * xx[1420];
  xx[1521] = xx[3] + (xx[1524] - xx[1417] * xx[190]) * xx[18];
  xx[1522] = xx[18] * (xx[1525] - xx[263]) - xx[94];
  xx[1523] = xx[18] * (xx[1526] + xx[1417] * xx[192]);
  pm_math_cross3(xx + 1521, xx + 236, xx + 1524);
  pm_math_quatXform(xx + 1517, xx + 1524, xx + 1521);
  xx[192] = - (xx[277] * xx[94]);
  xx[1524] = xx[192];
  xx[1525] = - xx[277];
  xx[1526] = xx[256] + xx[252] * xx[94];
  pm_math_quatXform(xx + 183, xx + 1524, xx + 1527);
  xx[1524] = xx[1527] + xx[787];
  xx[1525] = xx[1528] + xx[788];
  xx[1526] = xx[1529] + xx[789];
  pm_math_quatXform(xx + 301, xx + 1524, xx + 787);
  xx[464] = xx[1521] + xx[787];
  xx[555] = xx[1487] + xx[617];
  xx[575] = xx[1418] - xx[94] * xx[1419];
  xx[1524] = - xx[1420];
  xx[1525] = xx[190];
  xx[1526] = xx[575];
  pm_math_cross3(xx + 1418, xx + 1524, xx + 1527);
  xx[1524] = xx[94] + (xx[263] + xx[1527]) * xx[18];
  xx[1525] = xx[3] + xx[18] * (xx[1528] - xx[94] * xx[263]);
  xx[1526] = xx[18] * (xx[1529] - xx[1417] * xx[575]);
  pm_math_cross3(xx + 1524, xx + 236, xx + 1527);
  pm_math_quatXform(xx + 1517, xx + 1527, xx + 1524);
  xx[1527] = xx[277];
  xx[1528] = xx[192];
  xx[1529] = xx[256] * xx[94] - xx[252];
  pm_math_quatXform(xx + 183, xx + 1527, xx + 1530);
  xx[1527] = xx[1530] + xx[796];
  xx[1528] = xx[1531] + xx[797];
  xx[1529] = xx[1532] + xx[798];
  pm_math_quatXform(xx + 301, xx + 1527, xx + 796);
  xx[190] = xx[1524] + xx[796];
  xx[192] = xx[1418] * xx[1420];
  xx[277] = xx[1417] * xx[1419];
  xx[575] = xx[18] * (xx[192] - xx[277]);
  xx[646] = xx[1417] * xx[1418];
  xx[649] = xx[1419] * xx[1420];
  xx[650] = xx[1418] * xx[1418];
  xx[1387] = xx[1419] * xx[1419];
  xx[1527] = xx[575];
  xx[1528] = (xx[646] + xx[649]) * xx[18];
  xx[1529] = xx[3] - (xx[650] + xx[1387]) * xx[18];
  pm_math_cross3(xx + 1527, xx + 236, xx + 1530);
  pm_math_quatXform(xx + 1517, xx + 1530, xx + 1527);
  xx[1421] = xx[252] * xx[181];
  xx[1492] = xx[256] * xx[181];
  xx[1502] = xx[252] * xx[177] + xx[256] * xx[179];
  xx[1517] = xx[1421];
  xx[1518] = xx[1492];
  xx[1519] = - xx[1502];
  pm_math_cross3(xx + 765, xx + 1517, xx + 1530);
  xx[1517] = xx[18] * (xx[1530] + xx[1421] * xx[176]) + xx[812] - xx[256] - xx
    [73];
  xx[1518] = xx[252] + xx[18] * (xx[1531] + xx[1492] * xx[176]) + xx[768] + xx
    [72];
  xx[1519] = (xx[1532] - xx[1502] * xx[176]) * xx[18] + xx[810];
  pm_math_quatXform(xx + 301, xx + 1517, xx + 1530);
  xx[252] = xx[1527] + xx[1530];
  xx[256] = xx[1488] + xx[618];
  xx[616] = xx[464] - (xx[188] - xx[555] * xx[94] + pm_math_dot3(xx + 116, xx +
    1480));
  xx[617] = xx[190] - (xx[188] * xx[94] + xx[555] + pm_math_dot3(xx + 758, xx +
    1480));
  xx[618] = xx[252] - (xx[256] + xx[72] * xx[1481] - xx[73] * xx[1480]);
  solveSymmetricPosDef(xx + 778, xx + 616, 3, 1, xx + 1486, xx + 1517);
  xx[616] = xx[188] + xx[668] * xx[1486] + xx[697] * xx[1487] + xx[770] * xx
    [1488];
  xx[617] = xx[555] + xx[692] * xx[1486] + xx[700] * xx[1487] + xx[772] * xx
    [1488];
  xx[618] = xx[256] + xx[278] * xx[1486] + xx[452] * xx[1487] + xx[720] * xx
    [1488];
  pm_math_quatXform(xx + 183, xx + 616, xx + 1517);
  xx[616] = xx[1480] + xx[698] * xx[1486] + xx[728] * xx[1487] + xx[773] * xx
    [1488];
  xx[617] = xx[1481] + xx[699] * xx[1486] + xx[732] * xx[1487] + xx[774] * xx
    [1488];
  xx[618] = xx[1482] + xx[695] * xx[1486] + xx[764] * xx[1487] + xx[775] * xx
    [1488];
  pm_math_quatXform(xx + 183, xx + 616, xx + 1480);
  pm_math_cross3(xx + 282, xx + 1480, xx + 616);
  xx[188] = (xx[1455] - (xx[1519] + xx[618] - (xx[285] * xx[1480] + xx[281] *
    xx[1481]))) / xx[660];
  xx[256] = xx[179] * xx[188];
  xx[555] = xx[188] * xx[177];
  xx[616] = (xx[256] * xx[176] + xx[555] * xx[181]) * xx[18];
  xx[617] = xx[18] * (xx[256] * xx[181] - xx[555] * xx[176]);
  xx[618] = xx[188] - (xx[555] * xx[177] + xx[179] * xx[256]) * xx[18];
  xx[256] = xx[188] * xx[282] - xx[281] * xx[188];
  xx[555] = xx[256] * xx[181];
  xx[768] = xx[285] * xx[188] + xx[188] * xx[283];
  xx[810] = xx[768] * xx[181];
  xx[812] = xx[256] * xx[177] + xx[179] * xx[768];
  xx[1480] = xx[555];
  xx[1481] = xx[810];
  xx[1482] = - xx[812];
  pm_math_cross3(xx + 765, xx + 1480, xx + 1517);
  xx[1421] = (xx[1517] - xx[555] * xx[176]) * xx[18] - xx[768];
  xx[555] = xx[256] + xx[18] * (xx[1518] - xx[810] * xx[176]);
  xx[256] = xx[18] * (xx[1519] + xx[812] * xx[176]);
  xx[1480] = xx[1421];
  xx[1481] = xx[555];
  xx[1482] = xx[256];
  xx[768] = xx[1486] - (pm_math_dot3(xx + 689, xx + 616) + pm_math_dot3(xx + 729,
    xx + 1480));
  xx[810] = xx[1487] - (pm_math_dot3(xx + 761, xx + 616) + pm_math_dot3(xx + 888,
    xx + 1480));
  xx[812] = xx[1488] - (pm_math_dot3(xx + 891, xx + 616) + pm_math_dot3(xx + 834,
    xx + 1480));
  xx[1480] = xx[616] + xx[768] + xx[94] * xx[810];
  xx[1481] = xx[617] - xx[94] * xx[768] + xx[810];
  xx[1482] = xx[618] + xx[812];
  pm_math_quatInverseXform(xx + 193, xx + 1480, xx + 616);
  pm_math_cross3(xx + 1480, xx + 449, xx + 1486);
  xx[1480] = xx[1421] + xx[95] * xx[768] - xx[114] * xx[810] - xx[73] * xx[812]
    + xx[1486];
  xx[1481] = xx[555] + xx[114] * xx[768] + xx[95] * xx[810] + xx[72] * xx[812] +
    xx[1487];
  xx[1482] = xx[256] + xx[115] * xx[768] + xx[696] * xx[810] + xx[1488];
  pm_math_quatInverseXform(xx + 193, xx + 1480, xx + 1486);
  xx[256] = xx[1483] - (pm_math_dot3(xx + 724, xx + 616) + pm_math_dot3(xx + 840,
    xx + 1486));
  xx[555] = xx[1484] - (pm_math_dot3(xx + 733, xx + 616) + pm_math_dot3(xx + 846,
    xx + 1486));
  xx[1421] = xx[1485] - (pm_math_dot3(xx + 849, xx + 616) + pm_math_dot3(xx +
    701, xx + 1486));
  xx[1480] = xx[616] + xx[256];
  xx[1481] = xx[617] + xx[555];
  xx[1482] = xx[618] + xx[1421];
  pm_math_quatInverseXform(xx + 219, xx + 1480, xx + 616);
  pm_math_cross3(xx + 1480, xx + 556, xx + 1483);
  xx[1480] = xx[1486] + xx[235] * xx[555] + xx[234] * xx[1421] + xx[1483];
  xx[1481] = xx[1487] - xx[235] * xx[256] + xx[233] * xx[1421] + xx[1484];
  xx[1482] = xx[1488] - xx[234] * xx[256] - xx[233] * xx[555] + xx[1485];
  pm_math_quatInverseXform(xx + 219, xx + 1480, xx + 1483);
  xx[1480] = xx[1464] - (pm_math_dot3(xx + 643, xx + 616) + pm_math_dot3(xx +
    386, xx + 1483));
  xx[1464] = xx[618] - xx[206] * xx[1480];
  xx[1486] = xx[616] - xx[200] * xx[1480];
  xx[1487] = xx[617];
  xx[1488] = xx[1464];
  pm_math_cross3(xx + 1486, xx + 249, xx + 616);
  xx[1481] = xx[1483] + xx[616];
  xx[1482] = xx[1484] - xx[296] * xx[1480];
  xx[616] = xx[1482] + xx[617];
  xx[617] = xx[616] * xx[210];
  xx[618] = xx[1481] * xx[210];
  xx[1484] = xx[1464] * xx[673] + xx[539] * (xx[1481] - (xx[198] * xx[617] + xx
    [618] * xx[210]) * xx[18]) + (xx[616] + xx[18] * (xx[198] * xx[618] - xx[617]
    * xx[210])) * xx[574];
  xx[616] = xx[295] * xx[188] + xx[776] * xx[768] + xx[268] * xx[810] + xx[178] *
    xx[812] + xx[559] * xx[256] + xx[191] * xx[555] + xx[255] * xx[1421] + xx
    [317] * xx[1480] + xx[1484] * xx[247];
  xx[617] = xx[1400] + xx[1436] + (xx[1445] * xx[168] + xx[1466]) * xx[18];
  xx[618] = xx[1478] + xx[1472];
  xx[1436] = (xx[1429] * xx[321] + xx[1475]) * xx[18] - xx[458] + (xx[313] * xx
    [465] + xx[1469]) * xx[18] + xx[233];
  xx[321] = xx[1436] / xx[357];
  xx[465] = xx[401] * xx[321];
  xx[1445] = xx[356] * xx[321];
  xx[1481] = xx[1445] * xx[399];
  xx[1492] = xx[465] * xx[399];
  xx[1502] = xx[465] + (xx[363] * xx[1481] - xx[1492] * xx[399]) * xx[18];
  xx[465] = xx[346] * xx[1502];
  xx[1503] = xx[1445] - xx[18] * (xx[363] * xx[1492] + xx[1481] * xx[399]);
  xx[1445] = xx[1503] * xx[467] - xx[470] * xx[1502] - xx[57] * xx[321];
  xx[1481] = (xx[618] - (xx[200] * xx[465] - xx[1445] * xx[206] + xx[296] * xx
    [1502])) / xx[461];
  xx[1517] = xx[1481] * xx[414] - xx[465];
  xx[1518] = xx[518] * xx[1481] - xx[1503] * xx[346];
  xx[1519] = xx[1445] - xx[381] * xx[1481];
  pm_math_quatXform(xx + 219, xx + 1517, xx + 1533);
  xx[1517] = xx[1503] + xx[397] * xx[1481];
  xx[1518] = xx[442] * xx[1481] - xx[1502];
  xx[1519] = xx[1481] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1517, xx + 1536);
  pm_math_cross3(xx + 556, xx + 1536, xx + 1517);
  xx[465] = xx[1533] + xx[1517];
  xx[1445] = xx[1500] + xx[1505];
  xx[1492] = xx[1508] + xx[1515];
  xx[1502] = xx[1534] + xx[1518];
  xx[1503] = xx[1512] + xx[1490];
  xx[1510] = xx[1535] + xx[1519];
  xx[1517] = xx[1445] - (xx[465] - (xx[235] * xx[1537] + xx[234] * xx[1538]));
  xx[1518] = xx[1492] - (xx[1502] + xx[235] * xx[1536] - xx[233] * xx[1538]);
  xx[1519] = xx[1503] - (xx[1510] + xx[234] * xx[1536] + xx[233] * xx[1537]);
  solveSymmetricPosDef(xx + 597, xx + 1517, 3, 1, xx + 1533, xx + 1539);
  xx[1517] = xx[465] + xx[426] * xx[1533] + xx[438] * xx[1534] + xx[459] * xx
    [1535];
  xx[1518] = xx[1502] + xx[505] * xx[1533] + xx[511] * xx[1534] + xx[520] * xx
    [1535];
  xx[1519] = xx[1510] + xx[545] * xx[1533] + xx[448] * xx[1534] + xx[526] * xx
    [1535];
  pm_math_quatXform(xx + 193, xx + 1517, xx + 1539);
  xx[1517] = xx[1536] + xx[253] * xx[1533] + xx[516] * xx[1534] + xx[514] * xx
    [1535];
  xx[1518] = xx[1537] + xx[428] * xx[1533] + xx[441] * xx[1534] + xx[503] * xx
    [1535];
  xx[1519] = xx[1538] + xx[432] * xx[1533] + xx[444] * xx[1534] + xx[509] * xx
    [1535];
  pm_math_quatXform(xx + 193, xx + 1517, xx + 1536);
  pm_math_cross3(xx + 449, xx + 1536, xx + 1517);
  xx[465] = xx[1539] + xx[1517];
  xx[1502] = xx[1522] + xx[788];
  xx[1510] = xx[1540] + xx[1518];
  xx[1520] = xx[1525] + xx[797];
  xx[1542] = xx[1528] + xx[1531];
  xx[1517] = xx[1541] + xx[1519];
  xx[1539] = xx[1502] - (xx[465] - xx[1510] * xx[94] + pm_math_dot3(xx + 116, xx
    + 1536));
  xx[1540] = xx[1520] - (xx[465] * xx[94] + xx[1510] + pm_math_dot3(xx + 758, xx
    + 1536));
  xx[1541] = xx[1542] - (xx[1517] + xx[72] * xx[1537] - xx[73] * xx[1536]);
  solveSymmetricPosDef(xx + 778, xx + 1539, 3, 1, xx + 1543, xx + 1546);
  xx[1539] = xx[465] + xx[668] * xx[1543] + xx[697] * xx[1544] + xx[770] * xx
    [1545];
  xx[1540] = xx[1510] + xx[692] * xx[1543] + xx[700] * xx[1544] + xx[772] * xx
    [1545];
  xx[1541] = xx[1517] + xx[278] * xx[1543] + xx[452] * xx[1544] + xx[720] * xx
    [1545];
  pm_math_quatXform(xx + 183, xx + 1539, xx + 1517);
  xx[1539] = xx[1536] + xx[698] * xx[1543] + xx[728] * xx[1544] + xx[773] * xx
    [1545];
  xx[1540] = xx[1537] + xx[699] * xx[1543] + xx[732] * xx[1544] + xx[774] * xx
    [1545];
  xx[1541] = xx[1538] + xx[695] * xx[1543] + xx[764] * xx[1544] + xx[775] * xx
    [1545];
  pm_math_quatXform(xx + 183, xx + 1539, xx + 1536);
  pm_math_cross3(xx + 282, xx + 1536, xx + 1539);
  xx[465] = (xx[617] - (xx[1519] + xx[1541] - (xx[285] * xx[1536] + xx[281] *
    xx[1537]))) / xx[660];
  xx[1510] = xx[179] * xx[465];
  xx[1517] = xx[465] * xx[177];
  xx[1518] = (xx[1510] * xx[176] + xx[1517] * xx[181]) * xx[18];
  xx[1519] = xx[18] * (xx[1510] * xx[181] - xx[1517] * xx[176]);
  xx[1536] = xx[465] - (xx[1517] * xx[177] + xx[179] * xx[1510]) * xx[18];
  xx[1537] = xx[1518];
  xx[1538] = xx[1519];
  xx[1539] = xx[1536];
  xx[1510] = xx[465] * xx[282] - xx[281] * xx[465];
  xx[1517] = xx[1510] * xx[181];
  xx[1540] = xx[285] * xx[465] + xx[465] * xx[283];
  xx[1541] = xx[1540] * xx[181];
  xx[1546] = xx[1510] * xx[177] + xx[179] * xx[1540];
  xx[1547] = xx[1517];
  xx[1548] = xx[1541];
  xx[1549] = - xx[1546];
  pm_math_cross3(xx + 765, xx + 1547, xx + 1550);
  xx[1547] = (xx[1550] - xx[1517] * xx[176]) * xx[18] - xx[1540];
  xx[1517] = xx[1510] + xx[18] * (xx[1551] - xx[1541] * xx[176]);
  xx[1510] = xx[18] * (xx[1552] + xx[1546] * xx[176]);
  xx[1548] = xx[1547];
  xx[1549] = xx[1517];
  xx[1550] = xx[1510];
  xx[1540] = xx[1543] - (pm_math_dot3(xx + 689, xx + 1537) + pm_math_dot3(xx +
    729, xx + 1548));
  xx[1541] = xx[1544] - (pm_math_dot3(xx + 761, xx + 1537) + pm_math_dot3(xx +
    888, xx + 1548));
  xx[1543] = xx[1545] - (pm_math_dot3(xx + 891, xx + 1537) + pm_math_dot3(xx +
    834, xx + 1548));
  xx[1537] = xx[1518] + xx[1540] + xx[94] * xx[1541];
  xx[1538] = xx[1519] - xx[94] * xx[1540] + xx[1541];
  xx[1539] = xx[1536] + xx[1543];
  pm_math_quatInverseXform(xx + 193, xx + 1537, xx + 1544);
  pm_math_cross3(xx + 1537, xx + 449, xx + 1548);
  xx[1536] = xx[1547] + xx[95] * xx[1540] - xx[114] * xx[1541] - xx[73] * xx
    [1543] + xx[1548];
  xx[1537] = xx[1517] + xx[114] * xx[1540] + xx[95] * xx[1541] + xx[72] * xx
    [1543] + xx[1549];
  xx[1538] = xx[1510] + xx[115] * xx[1540] + xx[696] * xx[1541] + xx[1550];
  pm_math_quatInverseXform(xx + 193, xx + 1536, xx + 1517);
  xx[1510] = xx[1533] - (pm_math_dot3(xx + 724, xx + 1544) + pm_math_dot3(xx +
    840, xx + 1517));
  xx[1533] = xx[1534] - (pm_math_dot3(xx + 733, xx + 1544) + pm_math_dot3(xx +
    846, xx + 1517));
  xx[1534] = xx[1535] - (pm_math_dot3(xx + 849, xx + 1544) + pm_math_dot3(xx +
    701, xx + 1517));
  xx[1535] = xx[1544] + xx[1510];
  xx[1536] = xx[1545] + xx[1533];
  xx[1537] = xx[1546] + xx[1534];
  pm_math_quatInverseXform(xx + 219, xx + 1535, xx + 1544);
  pm_math_cross3(xx + 1535, xx + 556, xx + 1547);
  xx[1535] = xx[1517] + xx[235] * xx[1533] + xx[234] * xx[1534] + xx[1547];
  xx[1536] = xx[1518] - xx[235] * xx[1510] + xx[233] * xx[1534] + xx[1548];
  xx[1537] = xx[1519] - xx[234] * xx[1510] - xx[233] * xx[1533] + xx[1549];
  pm_math_quatInverseXform(xx + 219, xx + 1535, xx + 1517);
  xx[1535] = xx[1481] - (pm_math_dot3(xx + 643, xx + 1544) + pm_math_dot3(xx +
    386, xx + 1517));
  xx[1481] = xx[1546] - xx[206] * xx[1535];
  xx[1536] = xx[1544] - xx[200] * xx[1535];
  xx[1537] = xx[1545];
  xx[1538] = xx[1481];
  pm_math_cross3(xx + 1536, xx + 249, xx + 1544);
  xx[1539] = xx[1517] + xx[1544];
  xx[1547] = xx[1518] - xx[296] * xx[1535];
  xx[1518] = xx[1547] + xx[1545];
  xx[1544] = xx[1518] * xx[210];
  xx[1545] = xx[1539] * xx[210];
  xx[1546] = xx[1481] * xx[673] + xx[539] * (xx[1539] - (xx[198] * xx[1544] +
    xx[1545] * xx[210]) * xx[18]) + (xx[1518] + xx[18] * (xx[198] * xx[1545] -
    xx[1544] * xx[210])) * xx[574];
  xx[1518] = xx[295] * xx[465] + xx[776] * xx[1540] + xx[268] * xx[1541] + xx
    [178] * xx[1543] + xx[559] * xx[1510] + xx[191] * xx[1533] + xx[255] * xx
    [1534] + xx[317] * xx[1535] + xx[1546] * xx[247];
  xx[1399] = xx[1401] + (xx[1454] * xx[168] + xx[1467]) * xx[18];
  xx[1400] = xx[1479] + xx[1473];
  xx[1401] = (xx[1429] * xx[322] + xx[1476]) * xx[18] + (xx[1470] - xx[313] *
    xx[468]) * xx[18];
  xx[322] = xx[1401] / xx[357];
  xx[468] = xx[401] * xx[322];
  xx[1429] = xx[356] * xx[322];
  xx[1454] = xx[1429] * xx[399];
  xx[1465] = xx[468] * xx[399];
  xx[1466] = xx[468] + (xx[363] * xx[1454] - xx[1465] * xx[399]) * xx[18];
  xx[468] = xx[346] * xx[1466];
  xx[1467] = xx[1429] - xx[18] * (xx[363] * xx[1465] + xx[1454] * xx[399]);
  xx[1429] = xx[1467] * xx[467] - xx[1466] * xx[470] - xx[57] * xx[322];
  xx[1454] = (xx[1400] - (xx[200] * xx[468] - xx[1429] * xx[206] + xx[296] * xx
    [1466])) / xx[461];
  xx[1468] = xx[1454] * xx[414] - xx[468];
  xx[1469] = xx[518] * xx[1454] - xx[1467] * xx[346];
  xx[1470] = xx[1429] - xx[381] * xx[1454];
  pm_math_quatXform(xx + 219, xx + 1468, xx + 1471);
  xx[1468] = xx[1467] + xx[397] * xx[1454];
  xx[1469] = xx[442] * xx[1454] - xx[1466];
  xx[1470] = xx[1454] * xx[429];
  pm_math_quatXform(xx + 219, xx + 1468, xx + 1465);
  pm_math_cross3(xx + 556, xx + 1465, xx + 1468);
  xx[468] = xx[1471] + xx[1468];
  xx[1429] = xx[1501] + xx[1506];
  xx[1474] = xx[1509] + xx[1516];
  xx[1475] = xx[1472] + xx[1469];
  xx[1476] = xx[1513] + xx[1491];
  xx[1468] = xx[1473] + xx[1470];
  xx[1469] = xx[1429] - (xx[468] - (xx[235] * xx[1466] + xx[234] * xx[1467]));
  xx[1470] = xx[1474] - (xx[1475] + xx[235] * xx[1465] - xx[233] * xx[1467]);
  xx[1471] = xx[1476] - (xx[1468] + xx[234] * xx[1465] + xx[233] * xx[1466]);
  solveSymmetricPosDef(xx + 597, xx + 1469, 3, 1, xx + 1477, xx + 1489);
  xx[1469] = xx[468] + xx[426] * xx[1477] + xx[438] * xx[1478] + xx[459] * xx
    [1479];
  xx[1470] = xx[1475] + xx[505] * xx[1477] + xx[511] * xx[1478] + xx[520] * xx
    [1479];
  xx[1471] = xx[1468] + xx[545] * xx[1477] + xx[448] * xx[1478] + xx[526] * xx
    [1479];
  pm_math_quatXform(xx + 193, xx + 1469, xx + 1489);
  xx[1468] = xx[1465] + xx[253] * xx[1477] + xx[516] * xx[1478] + xx[514] * xx
    [1479];
  xx[1469] = xx[1466] + xx[428] * xx[1477] + xx[441] * xx[1478] + xx[503] * xx
    [1479];
  xx[1470] = xx[1467] + xx[432] * xx[1477] + xx[444] * xx[1478] + xx[509] * xx
    [1479];
  pm_math_quatXform(xx + 193, xx + 1468, xx + 1465);
  pm_math_cross3(xx + 449, xx + 1465, xx + 1468);
  xx[468] = xx[1489] + xx[1468];
  xx[787] = xx[1523] + xx[789];
  xx[788] = xx[1490] + xx[1469];
  xx[789] = xx[1526] + xx[798];
  xx[796] = xx[1529] + xx[1532];
  xx[797] = xx[1491] + xx[1470];
  xx[1468] = xx[787] - (xx[468] - xx[788] * xx[94] + pm_math_dot3(xx + 116, xx +
    1465));
  xx[1469] = xx[789] - (xx[468] * xx[94] + xx[788] + pm_math_dot3(xx + 758, xx +
    1465));
  xx[1470] = xx[796] - (xx[797] + xx[72] * xx[1466] - xx[73] * xx[1465]);
  solveSymmetricPosDef(xx + 778, xx + 1468, 3, 1, xx + 1471, xx + 1489);
  xx[1468] = xx[468] + xx[668] * xx[1471] + xx[697] * xx[1472] + xx[770] * xx
    [1473];
  xx[1469] = xx[788] + xx[692] * xx[1471] + xx[700] * xx[1472] + xx[772] * xx
    [1473];
  xx[1470] = xx[797] + xx[278] * xx[1471] + xx[452] * xx[1472] + xx[720] * xx
    [1473];
  pm_math_quatXform(xx + 183, xx + 1468, xx + 1489);
  xx[1468] = xx[1465] + xx[698] * xx[1471] + xx[728] * xx[1472] + xx[773] * xx
    [1473];
  xx[1469] = xx[1466] + xx[699] * xx[1471] + xx[732] * xx[1472] + xx[774] * xx
    [1473];
  xx[1470] = xx[1467] + xx[695] * xx[1471] + xx[764] * xx[1472] + xx[775] * xx
    [1473];
  pm_math_quatXform(xx + 183, xx + 1468, xx + 1465);
  pm_math_cross3(xx + 282, xx + 1465, xx + 1468);
  xx[468] = (xx[1399] - (xx[1491] + xx[1470] - (xx[285] * xx[1465] + xx[281] *
    xx[1466]))) / xx[660];
  xx[788] = xx[179] * xx[468];
  xx[797] = xx[468] * xx[177];
  xx[798] = (xx[788] * xx[176] + xx[797] * xx[181]) * xx[18];
  xx[1465] = xx[18] * (xx[788] * xx[181] - xx[797] * xx[176]);
  xx[1466] = xx[468] - (xx[797] * xx[177] + xx[179] * xx[788]) * xx[18];
  xx[1467] = xx[798];
  xx[1468] = xx[1465];
  xx[1469] = xx[1466];
  xx[788] = xx[468] * xx[282] - xx[281] * xx[468];
  xx[797] = xx[788] * xx[181];
  xx[1470] = xx[285] * xx[468] + xx[468] * xx[283];
  xx[1475] = xx[1470] * xx[181];
  xx[181] = xx[788] * xx[177] + xx[179] * xx[1470];
  xx[1489] = xx[797];
  xx[1490] = xx[1475];
  xx[1491] = - xx[181];
  pm_math_cross3(xx + 765, xx + 1489, xx + 1499);
  xx[177] = (xx[1499] - xx[797] * xx[176]) * xx[18] - xx[1470];
  xx[179] = xx[788] + xx[18] * (xx[1500] - xx[1475] * xx[176]);
  xx[765] = xx[18] * (xx[1501] + xx[181] * xx[176]);
  xx[1489] = xx[177];
  xx[1490] = xx[179];
  xx[1491] = xx[765];
  xx[176] = xx[1471] - (pm_math_dot3(xx + 689, xx + 1467) + pm_math_dot3(xx +
    729, xx + 1489));
  xx[181] = xx[1472] - (pm_math_dot3(xx + 761, xx + 1467) + pm_math_dot3(xx +
    888, xx + 1489));
  xx[766] = xx[1473] - (pm_math_dot3(xx + 891, xx + 1467) + pm_math_dot3(xx +
    834, xx + 1489));
  xx[1467] = xx[798] + xx[176] + xx[94] * xx[181];
  xx[1468] = xx[1465] - xx[94] * xx[176] + xx[181];
  xx[1469] = xx[1466] + xx[766];
  pm_math_quatInverseXform(xx + 193, xx + 1467, xx + 1470);
  pm_math_cross3(xx + 1467, xx + 449, xx + 1489);
  xx[1465] = xx[177] + xx[95] * xx[176] - xx[114] * xx[181] - xx[73] * xx[766] +
    xx[1489];
  xx[1466] = xx[179] + xx[114] * xx[176] + xx[95] * xx[181] + xx[72] * xx[766] +
    xx[1490];
  xx[1467] = xx[765] + xx[115] * xx[176] + xx[696] * xx[181] + xx[1491];
  pm_math_quatInverseXform(xx + 193, xx + 1465, xx + 1489);
  xx[177] = xx[1477] - (pm_math_dot3(xx + 724, xx + 1470) + pm_math_dot3(xx +
    840, xx + 1489));
  xx[179] = xx[1478] - (pm_math_dot3(xx + 733, xx + 1470) + pm_math_dot3(xx +
    846, xx + 1489));
  xx[765] = xx[1479] - (pm_math_dot3(xx + 849, xx + 1470) + pm_math_dot3(xx +
    701, xx + 1489));
  xx[1465] = xx[1470] + xx[177];
  xx[1466] = xx[1471] + xx[179];
  xx[1467] = xx[1472] + xx[765];
  pm_math_quatInverseXform(xx + 219, xx + 1465, xx + 1468);
  pm_math_cross3(xx + 1465, xx + 556, xx + 1471);
  xx[1465] = xx[1489] + xx[235] * xx[179] + xx[234] * xx[765] + xx[1471];
  xx[1466] = xx[1490] - xx[235] * xx[177] + xx[233] * xx[765] + xx[1472];
  xx[1467] = xx[1491] - xx[234] * xx[177] - xx[233] * xx[179] + xx[1473];
  pm_math_quatInverseXform(xx + 219, xx + 1465, xx + 1471);
  xx[767] = xx[1454] - (pm_math_dot3(xx + 643, xx + 1468) + pm_math_dot3(xx +
    386, xx + 1471));
  xx[788] = xx[1470] - xx[206] * xx[767];
  xx[1465] = xx[1468] - xx[200] * xx[767];
  xx[1466] = xx[1469];
  xx[1467] = xx[788];
  pm_math_cross3(xx + 1465, xx + 249, xx + 1468);
  xx[797] = xx[1471] + xx[1468];
  xx[798] = xx[1472] - xx[296] * xx[767];
  xx[1454] = xx[798] + xx[1469];
  xx[1468] = xx[1454] * xx[210];
  xx[1469] = xx[797] * xx[210];
  xx[1470] = xx[788] * xx[673] + xx[539] * (xx[797] - (xx[198] * xx[1468] + xx
    [1469] * xx[210]) * xx[18]) + (xx[1454] + xx[18] * (xx[198] * xx[1469] - xx
    [1468] * xx[210])) * xx[574];
  xx[797] = xx[295] * xx[468] + xx[776] * xx[176] + xx[268] * xx[181] + xx[178] *
    xx[766] + xx[559] * xx[177] + xx[191] * xx[179] + xx[255] * xx[765] + xx[317]
    * xx[767] + xx[1470] * xx[247];
  xx[1454] = xx[958] * xx[244] + xx[1013] * xx[329] + xx[1047] * xx[552] + xx
    [1082] * xx[567] + xx[1001] * xx[327] + xx[1002] * xx[328] + xx[1014] * xx
    [336] + xx[286] * xx[337] + xx[293] * xx[339] + xx[934] * xx[325] - xx[241] *
    xx[338] - xx[1003] * xx[340] - xx[1006] * xx[341];
  xx[1468] = xx[958] * xx[656] + xx[1013] * xx[1101] + xx[1047] * xx[1102] + xx
    [1082] * xx[1129] + xx[1001] * xx[795] + xx[1002] * xx[1093] + xx[1014] *
    xx[1094] + xx[286] * xx[1095] + xx[293] * xx[1165];
  xx[1469] = xx[958] * xx[1100] + xx[1013] * xx[1180] + xx[1047] * xx[1181] +
    xx[1082] * xx[1184] + xx[1001] * xx[1172] + xx[1002] * xx[1173] + xx[1014] *
    xx[1174] + xx[286] * xx[1175] + xx[293] * xx[1187];
  xx[1472] = xx[958] * xx[915] + xx[1013] * xx[1087] + xx[1047] * xx[1107] + xx
    [1082] * xx[1113] + xx[1001] * xx[1085] + xx[1002] * xx[1086] + xx[1014] *
    xx[1097] + xx[286] * xx[1098] + xx[1119] * xx[293];
  xx[1475] = xx[958] * xx[1136] + xx[1013] * xx[1239] + xx[1047] * xx[1240] +
    xx[1082] * xx[1263] + xx[1001] * xx[1141] + xx[1002] * xx[1228] + xx[1014] *
    xx[1229] + xx[286] * xx[1230] + xx[1299] * xx[293];
  xx[1477] = xx[958] * xx[1204] + xx[1013] * xx[1306] + xx[1047] * xx[1315] +
    xx[1082] * xx[1318] + xx[1001] * xx[1304] + xx[1002] * xx[1305] + xx[1014] *
    xx[1308] + xx[286] * xx[1309] + xx[293] * xx[1321];
  xx[1478] = xx[958] * xx[1185] + xx[1013] * xx[1210] + xx[1047] * xx[1236] +
    xx[1082] * xx[1247] + xx[1001] * xx[1208] + xx[1002] * xx[1209] + xx[1014] *
    xx[1232] + xx[286] * xx[1233] + xx[293] * xx[1253];
  xx[1479] = xx[958] * xx[1270] + xx[1013] * xx[1374] + xx[1047] * xx[1375] +
    xx[1082] * xx[1398] + xx[1001] * xx[1275] + xx[1002] * xx[1363] + xx[1014] *
    xx[1364] + xx[286] * xx[1365] + xx[1434] * xx[293];
  xx[1489] = xx[958] * xx[1338] + xx[1013] * xx[1441] + xx[1047] * xx[1450] +
    xx[1082] * xx[1453] + xx[1001] * xx[1439] + xx[1002] * xx[1440] + xx[1014] *
    xx[1443] + xx[286] * xx[1444] + xx[1456] * xx[293];
  xx[1490] = xx[958] * xx[1319] + xx[1013] * xx[1344] + xx[1047] * xx[1371] +
    xx[1082] * xx[1382] + xx[1001] * xx[1342] + xx[1002] * xx[1343] + xx[1014] *
    xx[1367] + xx[286] * xx[1368] + xx[293] * xx[1388];
  xx[1491] = xx[958] * xx[188] + xx[1013] * xx[768] + xx[1047] * xx[810] + xx
    [1082] * xx[812] + xx[1001] * xx[256] + xx[1002] * xx[555] + xx[1014] * xx
    [1421] + xx[286] * xx[1480] + xx[293] * xx[1484];
  xx[1499] = xx[958] * xx[465] + xx[1013] * xx[1540] + xx[1047] * xx[1541] + xx
    [1082] * xx[1543] + xx[1001] * xx[1510] + xx[1002] * xx[1533] + xx[1014] *
    xx[1534] + xx[286] * xx[1535] + xx[1546] * xx[293];
  xx[1500] = xx[958] * xx[468] + xx[1013] * xx[176] + xx[1047] * xx[181] + xx
    [1082] * xx[766] + xx[1001] * xx[177] + xx[1002] * xx[179] + xx[1014] * xx
    [765] + xx[286] * xx[767] + xx[1470] * xx[293];
  xx[1501] = xx[230] * xx[656] + xx[299] * xx[1101] + xx[553] * xx[1102] + xx
    [554] * xx[1129] + xx[288] * xx[795] + xx[294] * xx[1093] + xx[300] * xx
    [1094] + xx[231] * xx[1095] + xx[232] * xx[1165];
  xx[1165] = xx[230] * xx[1100] + xx[299] * xx[1180] + xx[553] * xx[1181] + xx
    [554] * xx[1184] + xx[288] * xx[1172] + xx[294] * xx[1173] + xx[300] * xx
    [1174] + xx[231] * xx[1175] + xx[232] * xx[1187];
  xx[1187] = xx[230] * xx[915] + xx[299] * xx[1087] + xx[553] * xx[1107] + xx
    [554] * xx[1113] + xx[288] * xx[1085] + xx[294] * xx[1086] + xx[300] * xx
    [1097] + xx[231] * xx[1098] + xx[1119] * xx[232];
  xx[1119] = xx[230] * xx[1136] + xx[299] * xx[1239] + xx[553] * xx[1240] + xx
    [554] * xx[1263] + xx[288] * xx[1141] + xx[294] * xx[1228] + xx[300] * xx
    [1229] + xx[231] * xx[1230] + xx[1299] * xx[232];
  xx[1299] = xx[230] * xx[1204] + xx[299] * xx[1306] + xx[553] * xx[1315] + xx
    [554] * xx[1318] + xx[288] * xx[1304] + xx[294] * xx[1305] + xx[300] * xx
    [1308] + xx[231] * xx[1309] + xx[232] * xx[1321];
  xx[1321] = xx[230] * xx[1185] + xx[299] * xx[1210] + xx[553] * xx[1236] + xx
    [554] * xx[1247] + xx[288] * xx[1208] + xx[294] * xx[1209] + xx[300] * xx
    [1232] + xx[231] * xx[1233] + xx[232] * xx[1253];
  xx[1253] = xx[230] * xx[1270] + xx[299] * xx[1374] + xx[553] * xx[1375] + xx
    [554] * xx[1398] + xx[288] * xx[1275] + xx[294] * xx[1363] + xx[300] * xx
    [1364] + xx[231] * xx[1365] + xx[1434] * xx[232];
  xx[1434] = xx[230] * xx[1338] + xx[299] * xx[1441] + xx[553] * xx[1450] + xx
    [554] * xx[1453] + xx[288] * xx[1439] + xx[294] * xx[1440] + xx[300] * xx
    [1443] + xx[231] * xx[1444] + xx[1456] * xx[232];
  xx[1456] = xx[230] * xx[1319] + xx[299] * xx[1344] + xx[553] * xx[1371] + xx
    [554] * xx[1382] + xx[288] * xx[1342] + xx[294] * xx[1343] + xx[300] * xx
    [1367] + xx[231] * xx[1368] + xx[232] * xx[1388];
  xx[1388] = xx[230] * xx[188] + xx[299] * xx[768] + xx[553] * xx[810] + xx[554]
    * xx[812] + xx[288] * xx[256] + xx[294] * xx[555] + xx[300] * xx[1421] + xx
    [231] * xx[1480] + xx[232] * xx[1484];
  xx[1484] = xx[230] * xx[465] + xx[299] * xx[1540] + xx[553] * xx[1541] + xx
    [554] * xx[1543] + xx[288] * xx[1510] + xx[294] * xx[1533] + xx[300] * xx
    [1534] + xx[231] * xx[1535] + xx[1546] * xx[232];
  xx[1504] = xx[230] * xx[468] + xx[299] * xx[176] + xx[553] * xx[181] + xx[554]
    * xx[766] + xx[288] * xx[177] + xx[294] * xx[179] + xx[300] * xx[765] + xx
    [231] * xx[767] + xx[1470] * xx[232];
  pm_math_quatInverseXform(xx + 620, xx + 1137, xx + 1505);
  pm_math_cross3(xx + 1137, xx + 631, xx + 1511);
  xx[1137] = xx[1090] + xx[1511];
  xx[1138] = xx[1143] + xx[1512];
  xx[1139] = xx[1092] + xx[1513];
  pm_math_quatInverseXform(xx + 620, xx + 1137, xx + 1511);
  xx[1090] = xx[1] * input[11];
  xx[1092] = sin(xx[1090]);
  xx[1137] = cos(xx[1090]);
  xx[1090] = xx[153] * xx[1092] - xx[159] * xx[1137];
  xx[1138] = xx[1] * state[37];
  xx[1139] = cos(xx[1138]);
  xx[1143] = xx[1090] * xx[1139];
  xx[1470] = sin(xx[1138]);
  xx[1138] = xx[153] * xx[1137] + xx[159] * xx[1092];
  xx[153] = xx[1470] * xx[1138];
  xx[159] = xx[166] * xx[1137] + xx[167] * xx[1092];
  xx[1505] = xx[166] * xx[1092] - xx[167] * xx[1137];
  xx[166] = xx[1139] * xx[159] + xx[1505] * xx[1470];
  xx[167] = - xx[166];
  xx[1092] = xx[1470] * xx[159] - xx[1505] * xx[1139];
  xx[1137] = xx[1090] * xx[1470] + xx[1139] * xx[1138];
  xx[1513] = xx[1143] - xx[153];
  xx[1514] = xx[167];
  xx[1515] = xx[1092];
  xx[1516] = xx[1137];
  xx[1506] = xx[58] * state[42] - xx[59] * state[39];
  xx[1508] = xx[58] * state[41] + xx[59] * state[40];
  xx[1509] = - xx[1508];
  xx[1521] = xx[59] * state[41] - xx[58] * state[40];
  xx[1522] = - xx[1521];
  xx[1523] = xx[58] * state[39] + xx[59] * state[42];
  xx[1524] = - xx[1523];
  xx[1525] = xx[1506];
  xx[1526] = xx[1509];
  xx[1527] = xx[1522];
  xx[1528] = xx[1524];
  pm_math_quatCompose(xx + 1513, xx + 1525, xx + 1529);
  xx[1513] = xx[1521] * xx[1506];
  xx[1514] = xx[1523] * xx[1508];
  xx[1515] = xx[1521] * xx[1523];
  xx[1516] = xx[1506] * xx[1508];
  xx[1539] = xx[18] * (xx[1515] - xx[1516]);
  xx[1544] = xx[1508] * xx[1508];
  xx[1545] = xx[1521] * xx[1521];
  xx[1548] = (xx[1513] + xx[1514]) * xx[18];
  xx[1549] = xx[1539];
  xx[1550] = xx[3] - (xx[1544] + xx[1545]) * xx[18];
  pm_math_cross3(xx + 1548, xx + 902, xx + 1551);
  pm_math_quatXform(xx + 1529, xx + 1551, xx + 1548);
  pm_math_quatXform(xx + 1525, xx + 74, xx + 1529);
  xx[1532] = xx[1530] * xx[1470] - xx[1139] * xx[1529];
  xx[1546] = 9.27756931389703e-12;
  xx[1551] = 5.443558296964576e-12;
  xx[1552] = xx[1546] * xx[1139] + xx[1551] * xx[1470];
  xx[1553] = xx[18] * xx[1552] * xx[1470];
  xx[1554] = xx[18] * xx[1470] * xx[1532] - (xx[1530] + xx[1553]) + xx[1551];
  xx[1555] = xx[1090];
  xx[1556] = xx[1138];
  xx[1557] = xx[1505];
  xx[1558] = xx[18] * xx[1552] * xx[1139];
  xx[1552] = xx[1529] + xx[18] * xx[1139] * xx[1532] - xx[1558] + xx[1546];
  xx[1532] = xx[1505] * xx[1552];
  xx[1559] = xx[1505] * xx[1554];
  xx[1560] = xx[1090] * xx[1552] - xx[1554] * xx[1138];
  xx[1561] = - xx[1532];
  xx[1562] = xx[1559];
  xx[1563] = xx[1560];
  pm_math_cross3(xx + 1555, xx + 1561, xx + 1564);
  xx[1561] = xx[1548] + xx[1554] + xx[18] * (xx[1564] - xx[1532] * xx[159]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_12/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 1567, xx + 96, 9 * sizeof(double));
  xx[1532] = xx[153] - xx[1143];
  xx[1576] = - xx[1532];
  xx[1577] = xx[167];
  xx[1578] = xx[1092];
  xx[1579] = xx[1137];
  pm_math_quatCompose(xx + 1576, xx + 1525, xx + 1580);
  pm_math_quatXform(xx + 1580, xx + 146, xx + 1584);
  pm_math_quatXform(xx + 1525, xx + 116, xx + 1587);
  pm_math_quatXform(xx + 1576, xx + 1587, xx + 1590);
  xx[153] = xx[1584] + xx[1590];
  pm_math_quatXform(xx + 1580, xx + 938, xx + 1587);
  pm_math_quatXform(xx + 1525, xx + 758, xx + 1593);
  pm_math_quatXform(xx + 1576, xx + 1593, xx + 1596);
  xx[167] = xx[1587] + xx[1596];
  xx[1143] = xx[254] * xx[1583];
  xx[1554] = xx[254] * xx[1581] + xx[276] * xx[1582];
  xx[1593] = - xx[1143];
  xx[1594] = - (xx[276] * xx[1583]);
  xx[1595] = xx[1554];
  pm_math_cross3(xx + 1581, xx + 1593, xx + 1599);
  xx[1593] = xx[1509];
  xx[1594] = xx[1522];
  xx[1595] = xx[1524];
  xx[1509] = xx[72] * xx[1523];
  xx[1522] = xx[73] * xx[1523];
  xx[1524] = xx[72] * xx[1508] + xx[1521] * xx[73];
  xx[1602] = xx[1509];
  xx[1603] = xx[1522];
  xx[1604] = - xx[1524];
  pm_math_cross3(xx + 1593, xx + 1602, xx + 1605);
  xx[1602] = xx[18] * (xx[1605] + xx[1509] * xx[1506]) - xx[73];
  xx[1603] = xx[72] + (xx[1522] * xx[1506] + xx[1606]) * xx[18];
  xx[1604] = (xx[1607] - xx[1524] * xx[1506]) * xx[18];
  pm_math_quatXform(xx + 1576, xx + 1602, xx + 1605);
  xx[1509] = xx[18] * (xx[1599] - xx[1580] * xx[1143]) + xx[1605] - xx[276];
  xx[1602] = - xx[153];
  xx[1603] = - xx[167];
  xx[1604] = - xx[1509];
  solveSymmetricPosDef(xx + 1567, xx + 1602, 3, 1, xx + 1608, xx + 1611);
  xx[1602] = xx[83] * xx[1608] + xx[145] * xx[1609];
  xx[1603] = xx[84] * xx[1609] - xx[718] * xx[1608];
  xx[1604] = xx[85] * xx[1610];
  pm_math_quatXform(xx + 1525, xx + 1602, xx + 1611);
  xx[1602] = xx[736] * xx[1608] - xx[811] * xx[1609] - xx[875] * xx[1610];
  xx[1603] = xx[811] * xx[1608] + xx[736] * xx[1609] + xx[913] * xx[1610];
  xx[1604] = xx[914] * xx[1608] + xx[932] * xx[1609];
  pm_math_quatXform(xx + 1525, xx + 1602, xx + 1614);
  pm_math_cross3(xx + 1529, xx + 1614, xx + 1602);
  xx[1143] = xx[1506] * xx[1506];
  xx[1522] = (xx[1143] + xx[1544]) * xx[18] - xx[3];
  xx[1524] = xx[1521] * xx[1508];
  xx[1544] = xx[1523] * xx[1506];
  xx[1562] = (xx[1524] + xx[1544]) * xx[18];
  xx[1563] = xx[18] * (xx[1514] - xx[1513]);
  xx[1581] = xx[18] * (xx[1524] - xx[1544]);
  xx[1524] = (xx[1143] + xx[1545]) * xx[18] - xx[3];
  xx[1544] = (xx[1515] + xx[1516]) * xx[18];
  xx[1515] = (xx[1514] + xx[1513]) * xx[18];
  xx[1513] = (xx[1143] + xx[1523] * xx[1523]) * xx[18] - xx[3];
  xx[1616] = xx[1522];
  xx[1617] = xx[1562];
  xx[1618] = xx[1563];
  xx[1619] = xx[1581];
  xx[1620] = xx[1524];
  xx[1621] = xx[1544];
  xx[1622] = xx[1515];
  xx[1623] = xx[1539];
  xx[1624] = xx[1513];
  solveSymmetricPosDef(xx + 1567, xx + 980, 3, 6, xx + 1625, xx + 1643);
  xx[1143] = - (xx[84] * xx[1626] - xx[718] * xx[1625]);
  xx[1514] = - (xx[85] * xx[1627]);
  xx[1516] = - (xx[85] * xx[1630]);
  xx[1643] = xx[83] - (xx[83] * xx[1625] + xx[145] * xx[1626]);
  xx[1644] = xx[1143];
  xx[1645] = xx[1514];
  xx[1646] = xx[1143];
  xx[1647] = xx[84] - (xx[84] * xx[1629] - xx[718] * xx[1628]);
  xx[1648] = xx[1516];
  xx[1649] = xx[1514];
  xx[1650] = xx[1516];
  xx[1651] = xx[85] - xx[85] * xx[1633];
  pm_math_matrix3x3ComposeTranspose(xx + 1643, xx + 1616, xx + 1652);
  pm_math_matrix3x3Compose(xx + 1616, xx + 1652, xx + 1643);
  xx[1652] = - (xx[83] * xx[1634] + xx[145] * xx[1635]);
  xx[1653] = - (xx[83] * xx[1637] + xx[145] * xx[1638]);
  xx[1654] = - (xx[83] * xx[1640] + xx[145] * xx[1641]);
  xx[1655] = - (xx[84] * xx[1635] - xx[718] * xx[1634]);
  xx[1656] = - (xx[84] * xx[1638] - xx[718] * xx[1637]);
  xx[1657] = - (xx[84] * xx[1641] - xx[718] * xx[1640]);
  xx[1658] = - (xx[85] * xx[1636]);
  xx[1659] = - (xx[85] * xx[1639]);
  xx[1660] = - (xx[85] * xx[1642]);
  pm_math_matrix3x3ComposeTranspose(xx + 1652, xx + 1616, xx + 1661);
  pm_math_matrix3x3Compose(xx + 1616, xx + 1661, xx + 1652);
  pm_math_matrix3x3PostCross(xx + 1652, xx + 1529, xx + 1661);
  xx[1143] = - (xx[811] * xx[1634] + xx[736] * xx[1635] + xx[913] * xx[1636]);
  xx[1514] = - (xx[914] * xx[1634] + xx[932] * xx[1635]);
  xx[1516] = - (xx[914] * xx[1637] + xx[932] * xx[1638]);
  xx[1670] = xx[78] - (xx[736] * xx[1634] - xx[811] * xx[1635] - xx[875] * xx
                       [1636]);
  xx[1671] = xx[1143];
  xx[1672] = xx[1514];
  xx[1673] = xx[1143];
  xx[1674] = xx[78] - (xx[811] * xx[1637] + xx[736] * xx[1638] + xx[913] * xx
                       [1639]);
  xx[1675] = xx[1516];
  xx[1676] = xx[1514];
  xx[1677] = xx[1516];
  xx[1678] = xx[78] - (xx[914] * xx[1640] + xx[932] * xx[1641]);
  pm_math_matrix3x3ComposeTranspose(xx + 1670, xx + 1616, xx + 1679);
  pm_math_matrix3x3Compose(xx + 1616, xx + 1679, xx + 1670);
  pm_math_matrix3x3PostCross(xx + 1670, xx + 1529, xx + 1616);
  pm_math_matrix3x3PreCross(xx + 1616, xx + 1529, xx + 1679);
  xx[1143] = xx[1658] - xx[1618];
  xx[1514] = xx[1659] - xx[1621];
  xx[1516] = xx[1651] - xx[1669] - xx[1669] - xx[1687] + xx[1551] * xx[1143] +
    xx[1546] * xx[1514] + xx[57];
  xx[1545] = xx[398] + xx[1670];
  xx[1582] = xx[1143] + xx[1545] * xx[1551] + xx[1546] * xx[1671];
  xx[1602] = xx[398] + xx[1674];
  xx[1603] = xx[1514] + xx[1551] * xx[1673] + xx[1602] * xx[1546];
  xx[1611] = xx[1516] + xx[1582] * xx[1551] + xx[1603] * xx[1546];
  ii[1] = factorSymmetricPosDef(xx + 1611, 1, xx + 1612);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1612] = (xx[1613] + xx[1604] + xx[1551] * xx[1614] + xx[1546] * xx[1615] +
              xx[1561]) / xx[1611];
  xx[1613] = xx[1625];
  xx[1614] = xx[1628];
  xx[1615] = xx[1631];
  xx[1604] = xx[1521] * xx[1612];
  xx[1618] = xx[1612] * xx[1508];
  xx[1688] = - ((xx[1604] * xx[1506] + xx[1618] * xx[1523]) * xx[18]);
  xx[1689] = xx[18] * (xx[1618] * xx[1506] - xx[1604] * xx[1523]);
  xx[1690] = (xx[1618] * xx[1508] + xx[1521] * xx[1604]) * xx[18] - xx[1612];
  xx[1691] = xx[1634];
  xx[1692] = xx[1637];
  xx[1693] = xx[1640];
  xx[1604] = xx[1612] * xx[1530] - xx[1551] * xx[1612];
  xx[1618] = xx[1546] * xx[1612] + xx[1612] * xx[1529];
  xx[1621] = xx[1618] * xx[1523];
  xx[1658] = xx[1523] * xx[1604];
  xx[1659] = xx[1521] * xx[1604] + xx[1618] * xx[1508];
  xx[1694] = - xx[1621];
  xx[1695] = - xx[1658];
  xx[1696] = xx[1659];
  pm_math_cross3(xx + 1593, xx + 1694, xx + 1697);
  xx[1694] = xx[1604] + xx[18] * (xx[1697] + xx[1621] * xx[1506]);
  xx[1695] = xx[18] * (xx[1698] + xx[1658] * xx[1506]) - xx[1618];
  xx[1696] = xx[18] * (xx[1699] - xx[1506] * xx[1659]);
  xx[1697] = xx[1626];
  xx[1698] = xx[1629];
  xx[1699] = xx[1632];
  xx[1700] = xx[1635];
  xx[1701] = xx[1638];
  xx[1702] = xx[1641];
  xx[1703] = xx[1627];
  xx[1704] = xx[1630];
  xx[1705] = xx[1633];
  xx[1625] = xx[1636];
  xx[1626] = xx[1639];
  xx[1627] = xx[1642];
  pm_math_quatInverseXform(xx + 620, xx + 1176, xx + 1628);
  pm_math_cross3(xx + 1176, xx + 631, xx + 1631);
  xx[1176] = xx[1169] + xx[1631];
  xx[1177] = xx[1188] + xx[1632];
  xx[1178] = xx[1171] + xx[1633];
  pm_math_quatInverseXform(xx + 620, xx + 1176, xx + 1631);
  xx[1169] = xx[911] - (xx[484] * xx[1630] + xx[588] * xx[1632] - xx[591] * xx
                        [1631]);
  xx[911] = xx[1585] + xx[1591];
  xx[1171] = xx[1588] + xx[1597];
  xx[1176] = (xx[1600] - xx[276] * xx[1580] * xx[1583]) * xx[18] + xx[1606] +
    xx[254];
  xx[1628] = - xx[911];
  xx[1629] = - xx[1171];
  xx[1630] = - xx[1176];
  solveSymmetricPosDef(xx + 1567, xx + 1628, 3, 1, xx + 1631, xx + 1634);
  xx[1628] = xx[83] * xx[1631] + xx[145] * xx[1632];
  xx[1629] = xx[84] * xx[1632] - xx[718] * xx[1631];
  xx[1630] = xx[85] * xx[1633];
  pm_math_quatXform(xx + 1525, xx + 1628, xx + 1634);
  xx[1628] = xx[736] * xx[1631] - xx[811] * xx[1632] - xx[875] * xx[1633];
  xx[1629] = xx[811] * xx[1631] + xx[736] * xx[1632] + xx[913] * xx[1633];
  xx[1630] = xx[914] * xx[1631] + xx[932] * xx[1632];
  pm_math_quatXform(xx + 1525, xx + 1628, xx + 1637);
  pm_math_cross3(xx + 1529, xx + 1637, xx + 1628);
  xx[1177] = xx[1549] + xx[1552] + (xx[1559] * xx[159] + xx[1565]) * xx[18];
  xx[1178] = (xx[1636] + xx[1630] + xx[1551] * xx[1637] + xx[1546] * xx[1638] +
              xx[1177]) / xx[1611];
  xx[1188] = xx[1521] * xx[1178];
  xx[1552] = xx[1178] * xx[1508];
  xx[1628] = - ((xx[1188] * xx[1506] + xx[1552] * xx[1523]) * xx[18]);
  xx[1629] = xx[18] * (xx[1552] * xx[1506] - xx[1188] * xx[1523]);
  xx[1630] = (xx[1552] * xx[1508] + xx[1521] * xx[1188]) * xx[18] - xx[1178];
  xx[1188] = xx[1178] * xx[1530] - xx[1551] * xx[1178];
  xx[1552] = xx[1546] * xx[1178] + xx[1178] * xx[1529];
  xx[1559] = xx[1552] * xx[1523];
  xx[1583] = xx[1523] * xx[1188];
  xx[1604] = xx[1521] * xx[1188] + xx[1552] * xx[1508];
  xx[1634] = - xx[1559];
  xx[1635] = - xx[1583];
  xx[1636] = xx[1604];
  pm_math_cross3(xx + 1593, xx + 1634, xx + 1637);
  xx[1634] = xx[1188] + xx[18] * (xx[1637] + xx[1559] * xx[1506]);
  xx[1635] = xx[18] * (xx[1638] + xx[1583] * xx[1506]) - xx[1552];
  xx[1636] = xx[18] * (xx[1639] - xx[1506] * xx[1604]);
  xx[1188] = xx[1631] - (pm_math_dot3(xx + 1613, xx + 1628) + pm_math_dot3(xx +
    1691, xx + 1634));
  xx[1552] = xx[1632] - (pm_math_dot3(xx + 1697, xx + 1628) + pm_math_dot3(xx +
    1700, xx + 1634));
  xx[1559] = xx[1633] - (pm_math_dot3(xx + 1703, xx + 1628) + pm_math_dot3(xx +
    1625, xx + 1634));
  xx[1583] = xx[916] * xx[1100] + xx[1116] * xx[1180] + xx[807] * xx[1181] + xx
    [794] * xx[1184] + xx[1120] * xx[1172] + xx[705] * xx[1173] + xx[655] * xx
    [1174] + xx[949] * xx[1175] + xx[917] * xx[1169] + xx[1561] * xx[1178] - xx
    [153] * xx[1188] - xx[167] * xx[1552] - xx[1509] * xx[1559];
  pm_math_quatInverseXform(xx + 620, xx + 1104, xx + 1628);
  pm_math_cross3(xx + 1104, xx + 631, xx + 1631);
  xx[1104] = xx[945] + xx[1631];
  xx[1105] = xx[1114] + xx[1632];
  xx[1106] = xx[947] + xx[1633];
  pm_math_quatInverseXform(xx + 620, xx + 1104, xx + 1631);
  xx[945] = xx[757] - (xx[484] * xx[1630] + xx[588] * xx[1632] - xx[591] * xx
                       [1631]);
  xx[757] = xx[1586] + xx[1592];
  xx[947] = xx[1589] + xx[1598];
  xx[1104] = (xx[1580] * xx[1554] + xx[1601]) * xx[18] + xx[1607];
  xx[1584] = - xx[757];
  xx[1585] = - xx[947];
  xx[1586] = - xx[1104];
  solveSymmetricPosDef(xx + 1567, xx + 1584, 3, 1, xx + 1587, xx + 1590);
  xx[1584] = xx[83] * xx[1587] + xx[145] * xx[1588];
  xx[1585] = xx[84] * xx[1588] - xx[718] * xx[1587];
  xx[1586] = xx[85] * xx[1589];
  pm_math_quatXform(xx + 1525, xx + 1584, xx + 1590);
  xx[1584] = xx[736] * xx[1587] - xx[811] * xx[1588] - xx[875] * xx[1589];
  xx[1585] = xx[811] * xx[1587] + xx[736] * xx[1588] + xx[913] * xx[1589];
  xx[1586] = xx[914] * xx[1587] + xx[932] * xx[1588];
  pm_math_quatXform(xx + 1525, xx + 1584, xx + 1596);
  pm_math_cross3(xx + 1529, xx + 1596, xx + 1584);
  xx[1105] = xx[1550] + (xx[159] * xx[1560] + xx[1566]) * xx[18];
  xx[1106] = (xx[1592] + xx[1586] + xx[1551] * xx[1596] + xx[1546] * xx[1597] +
              xx[1105]) / xx[1611];
  xx[1114] = xx[1521] * xx[1106];
  xx[1548] = xx[1106] * xx[1508];
  xx[1564] = - ((xx[1114] * xx[1506] + xx[1548] * xx[1523]) * xx[18]);
  xx[1565] = xx[18] * (xx[1548] * xx[1506] - xx[1114] * xx[1523]);
  xx[1566] = (xx[1548] * xx[1508] + xx[1521] * xx[1114]) * xx[18] - xx[1106];
  xx[1114] = xx[1106] * xx[1530] - xx[1551] * xx[1106];
  xx[1548] = xx[1546] * xx[1106] + xx[1106] * xx[1529];
  xx[1549] = xx[1548] * xx[1523];
  xx[1550] = xx[1523] * xx[1114];
  xx[1554] = xx[1521] * xx[1114] + xx[1548] * xx[1508];
  xx[1584] = - xx[1549];
  xx[1585] = - xx[1550];
  xx[1586] = xx[1554];
  pm_math_cross3(xx + 1593, xx + 1584, xx + 1590);
  xx[1584] = xx[1114] + xx[18] * (xx[1590] + xx[1549] * xx[1506]);
  xx[1585] = xx[18] * (xx[1591] + xx[1550] * xx[1506]) - xx[1548];
  xx[1586] = xx[18] * (xx[1592] - xx[1506] * xx[1554]);
  xx[1114] = xx[1587] - (pm_math_dot3(xx + 1613, xx + 1564) + pm_math_dot3(xx +
    1691, xx + 1584));
  xx[1548] = xx[1588] - (pm_math_dot3(xx + 1697, xx + 1564) + pm_math_dot3(xx +
    1700, xx + 1584));
  xx[1549] = xx[1589] - (pm_math_dot3(xx + 1703, xx + 1564) + pm_math_dot3(xx +
    1625, xx + 1584));
  xx[1550] = xx[916] * xx[915] + xx[1116] * xx[1087] + xx[807] * xx[1107] + xx
    [794] * xx[1113] + xx[1120] * xx[1085] + xx[705] * xx[1086] + xx[655] * xx
    [1097] + xx[949] * xx[1098] + xx[917] * xx[945] + xx[1561] * xx[1106] - xx
    [153] * xx[1114] - xx[167] * xx[1548] - xx[1509] * xx[1549];
  pm_math_quatInverseXform(xx + 620, xx + 1271, xx + 1564);
  pm_math_cross3(xx + 1271, xx + 631, xx + 1584);
  xx[1587] = xx[1225] + xx[1584];
  xx[1588] = xx[1277] + xx[1585];
  xx[1589] = xx[1227] + xx[1586];
  pm_math_quatInverseXform(xx + 620, xx + 1587, xx + 1584);
  xx[1554] = xx[484] * xx[1566] + xx[588] * xx[1585] - xx[591] * xx[1584];
  xx[1560] = xx[916] * xx[1136] + xx[1116] * xx[1239] + xx[807] * xx[1240] + xx
    [794] * xx[1263] + xx[1120] * xx[1141] + xx[705] * xx[1228] + xx[655] * xx
    [1229] + xx[949] * xx[1230] - xx[917] * xx[1554];
  pm_math_quatInverseXform(xx + 620, xx + 1312, xx + 1564);
  pm_math_cross3(xx + 1312, xx + 631, xx + 1584);
  xx[1587] = xx[1300] + xx[1584];
  xx[1588] = xx[1322] + xx[1585];
  xx[1589] = xx[1302] + xx[1586];
  pm_math_quatInverseXform(xx + 620, xx + 1587, xx + 1584);
  xx[1564] = xx[484] * xx[1566] + xx[588] * xx[1585] - xx[591] * xx[1584];
  xx[1565] = xx[916] * xx[1204] + xx[1116] * xx[1306] + xx[807] * xx[1315] + xx
    [794] * xx[1318] + xx[1120] * xx[1304] + xx[705] * xx[1305] + xx[655] * xx
    [1308] + xx[949] * xx[1309] - xx[917] * xx[1564];
  pm_math_quatInverseXform(xx + 620, xx + 1241, xx + 1584);
  pm_math_cross3(xx + 1241, xx + 631, xx + 1587);
  xx[1590] = xx[1199] + xx[1587];
  xx[1591] = xx[1248] + xx[1588];
  xx[1592] = xx[1201] + xx[1589];
  pm_math_quatInverseXform(xx + 620, xx + 1590, xx + 1587);
  xx[1566] = xx[484] * xx[1586] + xx[588] * xx[1588] - xx[591] * xx[1587];
  xx[1580] = xx[916] * xx[1185] + xx[1116] * xx[1210] + xx[807] * xx[1236] + xx
    [794] * xx[1247] + xx[1120] * xx[1208] + xx[705] * xx[1209] + xx[655] * xx
    [1232] + xx[949] * xx[1233] - xx[917] * xx[1566];
  pm_math_quatInverseXform(xx + 620, xx + 1406, xx + 1584);
  pm_math_cross3(xx + 1406, xx + 631, xx + 1587);
  xx[1590] = xx[1360] + xx[1587];
  xx[1591] = xx[1412] + xx[1588];
  xx[1592] = xx[1362] + xx[1589];
  pm_math_quatInverseXform(xx + 620, xx + 1590, xx + 1587);
  xx[1584] = xx[484] * xx[1586] + xx[588] * xx[1588] - xx[591] * xx[1587];
  xx[1585] = xx[916] * xx[1270] + xx[1116] * xx[1374] + xx[807] * xx[1375] + xx
    [794] * xx[1398] + xx[1120] * xx[1275] + xx[705] * xx[1363] + xx[655] * xx
    [1364] + xx[949] * xx[1365] - xx[917] * xx[1584];
  pm_math_quatInverseXform(xx + 620, xx + 1447, xx + 1586);
  pm_math_cross3(xx + 1447, xx + 631, xx + 1589);
  xx[1592] = xx[1435] + xx[1589];
  xx[1593] = xx[1457] + xx[1590];
  xx[1594] = xx[1437] + xx[1591];
  pm_math_quatInverseXform(xx + 620, xx + 1592, xx + 1589);
  xx[1586] = xx[484] * xx[1588] + xx[588] * xx[1590] - xx[591] * xx[1589];
  xx[1587] = xx[916] * xx[1338] + xx[1116] * xx[1441] + xx[807] * xx[1450] + xx
    [794] * xx[1453] + xx[1120] * xx[1439] + xx[705] * xx[1440] + xx[655] * xx
    [1443] + xx[949] * xx[1444] - xx[917] * xx[1586];
  pm_math_quatInverseXform(xx + 620, xx + 1376, xx + 1588);
  pm_math_cross3(xx + 1376, xx + 631, xx + 1591);
  xx[1594] = xx[1333] + xx[1591];
  xx[1595] = xx[1383] + xx[1592];
  xx[1596] = xx[1335] + xx[1593];
  pm_math_quatInverseXform(xx + 620, xx + 1594, xx + 1591);
  xx[1588] = xx[484] * xx[1590] + xx[588] * xx[1592] - xx[591] * xx[1591];
  xx[1589] = xx[916] * xx[1319] + xx[1116] * xx[1344] + xx[807] * xx[1371] + xx
    [794] * xx[1382] + xx[1120] * xx[1342] + xx[705] * xx[1343] + xx[655] * xx
    [1367] + xx[949] * xx[1368] - xx[917] * xx[1588];
  pm_math_quatInverseXform(xx + 620, xx + 1486, xx + 1590);
  pm_math_cross3(xx + 1486, xx + 631, xx + 1593);
  xx[1596] = xx[1483] + xx[1593];
  xx[1597] = xx[1482] + xx[1594];
  xx[1598] = xx[1485] + xx[1595];
  pm_math_quatInverseXform(xx + 620, xx + 1596, xx + 1593);
  xx[1590] = xx[484] * xx[1592] + xx[588] * xx[1594] - xx[591] * xx[1593];
  xx[1591] = xx[916] * xx[188] + xx[1116] * xx[768] + xx[807] * xx[810] + xx[794]
    * xx[812] + xx[1120] * xx[256] + xx[705] * xx[555] + xx[655] * xx[1421] +
    xx[949] * xx[1480] - xx[917] * xx[1590];
  pm_math_quatInverseXform(xx + 620, xx + 1536, xx + 1592);
  pm_math_cross3(xx + 1536, xx + 631, xx + 1595);
  xx[1598] = xx[1517] + xx[1595];
  xx[1599] = xx[1547] + xx[1596];
  xx[1600] = xx[1519] + xx[1597];
  pm_math_quatInverseXform(xx + 620, xx + 1598, xx + 1595);
  xx[1592] = xx[484] * xx[1594] + xx[588] * xx[1596] - xx[591] * xx[1595];
  xx[1593] = xx[916] * xx[465] + xx[1116] * xx[1540] + xx[807] * xx[1541] + xx
    [794] * xx[1543] + xx[1120] * xx[1510] + xx[705] * xx[1533] + xx[655] * xx
    [1534] + xx[949] * xx[1535] - xx[917] * xx[1592];
  pm_math_quatInverseXform(xx + 620, xx + 1465, xx + 1594);
  pm_math_cross3(xx + 1465, xx + 631, xx + 1597);
  xx[1604] = xx[1471] + xx[1597];
  xx[1605] = xx[798] + xx[1598];
  xx[1606] = xx[1473] + xx[1599];
  pm_math_quatInverseXform(xx + 620, xx + 1604, xx + 1597);
  xx[1594] = xx[484] * xx[1596] + xx[588] * xx[1598] - xx[591] * xx[1597];
  xx[1595] = xx[916] * xx[468] + xx[1116] * xx[176] + xx[807] * xx[181] + xx[794]
    * xx[766] + xx[1120] * xx[177] + xx[705] * xx[179] + xx[655] * xx[765] + xx
    [949] * xx[767] - xx[917] * xx[1594];
  xx[1596] = xx[1091] * xx[915] + xx[1166] * xx[1087] + xx[1182] * xx[1107] +
    xx[1183] * xx[1113] + xx[1163] * xx[1085] + xx[1164] * xx[1086] + xx[1167] *
    xx[1097] + xx[1168] * xx[1098] + xx[845] * xx[945] + xx[1177] * xx[1106] -
    xx[911] * xx[1114] - xx[1171] * xx[1548] - xx[1176] * xx[1549];
  xx[1597] = xx[1091] * xx[1136] + xx[1166] * xx[1239] + xx[1182] * xx[1240] +
    xx[1183] * xx[1263] + xx[1163] * xx[1141] + xx[1164] * xx[1228] + xx[1167] *
    xx[1229] + xx[1168] * xx[1230] - xx[845] * xx[1554];
  xx[1598] = xx[1091] * xx[1204] + xx[1166] * xx[1306] + xx[1182] * xx[1315] +
    xx[1183] * xx[1318] + xx[1163] * xx[1304] + xx[1164] * xx[1305] + xx[1167] *
    xx[1308] + xx[1168] * xx[1309] - xx[845] * xx[1564];
  xx[1599] = xx[1091] * xx[1185] + xx[1166] * xx[1210] + xx[1182] * xx[1236] +
    xx[1183] * xx[1247] + xx[1163] * xx[1208] + xx[1164] * xx[1209] + xx[1167] *
    xx[1232] + xx[1168] * xx[1233] - xx[845] * xx[1566];
  xx[1600] = xx[1091] * xx[1270] + xx[1166] * xx[1374] + xx[1182] * xx[1375] +
    xx[1183] * xx[1398] + xx[1163] * xx[1275] + xx[1164] * xx[1363] + xx[1167] *
    xx[1364] + xx[1168] * xx[1365] - xx[845] * xx[1584];
  xx[1601] = xx[1091] * xx[1338] + xx[1166] * xx[1441] + xx[1182] * xx[1450] +
    xx[1183] * xx[1453] + xx[1163] * xx[1439] + xx[1164] * xx[1440] + xx[1167] *
    xx[1443] + xx[1168] * xx[1444] - xx[845] * xx[1586];
  xx[1604] = xx[1091] * xx[1319] + xx[1166] * xx[1344] + xx[1182] * xx[1371] +
    xx[1183] * xx[1382] + xx[1163] * xx[1342] + xx[1164] * xx[1343] + xx[1167] *
    xx[1367] + xx[1168] * xx[1368] - xx[845] * xx[1588];
  xx[1605] = xx[1091] * xx[188] + xx[1166] * xx[768] + xx[1182] * xx[810] + xx
    [1183] * xx[812] + xx[1163] * xx[256] + xx[1164] * xx[555] + xx[1167] * xx
    [1421] + xx[1168] * xx[1480] - xx[845] * xx[1590];
  xx[1606] = xx[1091] * xx[465] + xx[1166] * xx[1540] + xx[1182] * xx[1541] +
    xx[1183] * xx[1543] + xx[1163] * xx[1510] + xx[1164] * xx[1533] + xx[1167] *
    xx[1534] + xx[1168] * xx[1535] - xx[845] * xx[1592];
  xx[1607] = xx[1091] * xx[468] + xx[1166] * xx[176] + xx[1182] * xx[181] + xx
    [1183] * xx[766] + xx[1163] * xx[177] + xx[1164] * xx[179] + xx[1167] * xx
    [765] + xx[1168] * xx[767] - xx[845] * xx[1594];
  xx[1618] = xx[755] * xx[1136] + xx[954] * xx[1239] + xx[1108] * xx[1240] + xx
    [1112] * xx[1263] + xx[948] * xx[1141] + xx[953] * xx[1228] + xx[1103] * xx
    [1229] + xx[952] * xx[1230] - xx[756] * xx[1554];
  xx[1554] = xx[755] * xx[1204] + xx[954] * xx[1306] + xx[1108] * xx[1315] + xx
    [1112] * xx[1318] + xx[948] * xx[1304] + xx[953] * xx[1305] + xx[1103] * xx
    [1308] + xx[952] * xx[1309] - xx[756] * xx[1564];
  xx[1564] = xx[755] * xx[1185] + xx[954] * xx[1210] + xx[1108] * xx[1236] + xx
    [1112] * xx[1247] + xx[948] * xx[1208] + xx[953] * xx[1209] + xx[1103] * xx
    [1232] + xx[952] * xx[1233] - xx[756] * xx[1566];
  xx[1566] = xx[755] * xx[1270] + xx[954] * xx[1374] + xx[1108] * xx[1375] + xx
    [1112] * xx[1398] + xx[948] * xx[1275] + xx[953] * xx[1363] + xx[1103] * xx
    [1364] + xx[952] * xx[1365] - xx[756] * xx[1584];
  xx[1584] = xx[755] * xx[1338] + xx[954] * xx[1441] + xx[1108] * xx[1450] + xx
    [1112] * xx[1453] + xx[948] * xx[1439] + xx[953] * xx[1440] + xx[1103] * xx
    [1443] + xx[952] * xx[1444] - xx[756] * xx[1586];
  xx[1586] = xx[755] * xx[1319] + xx[954] * xx[1344] + xx[1108] * xx[1371] + xx
    [1112] * xx[1382] + xx[948] * xx[1342] + xx[953] * xx[1343] + xx[1103] * xx
    [1367] + xx[952] * xx[1368] - xx[756] * xx[1588];
  xx[1588] = xx[755] * xx[188] + xx[954] * xx[768] + xx[1108] * xx[810] + xx
    [1112] * xx[812] + xx[948] * xx[256] + xx[953] * xx[555] + xx[1103] * xx
    [1421] + xx[952] * xx[1480] - xx[756] * xx[1590];
  xx[1590] = xx[755] * xx[465] + xx[954] * xx[1540] + xx[1108] * xx[1541] + xx
    [1112] * xx[1543] + xx[948] * xx[1510] + xx[953] * xx[1533] + xx[1103] * xx
    [1534] + xx[952] * xx[1535] - xx[756] * xx[1592];
  xx[1592] = xx[755] * xx[468] + xx[954] * xx[176] + xx[1108] * xx[181] + xx
    [1112] * xx[766] + xx[948] * xx[177] + xx[953] * xx[179] + xx[1103] * xx[765]
    + xx[952] * xx[767] - xx[756] * xx[1594];
  pm_math_cross3(xx + 1271, xx + 541, xx + 1628);
  xx[1631] = xx[1225] + xx[1628];
  xx[1632] = xx[1277] + xx[1629];
  xx[1633] = xx[1227] + xx[1630];
  pm_math_quatInverseXform(xx + 530, xx + 1631, xx + 1628);
  pm_math_quatInverseXform(xx + 530, xx + 1271, xx + 1630);
  xx[1225] = xx[1] * state[55];
  xx[1227] = cos(xx[1225]);
  xx[1271] = 0.6324445710612965;
  xx[1272] = xx[1] * input[9];
  xx[1273] = cos(xx[1272]);
  xx[1277] = 0.6324396579890005;
  xx[1594] = sin(xx[1272]);
  xx[1272] = xx[1271] * xx[1273] + xx[1277] * xx[1594];
  xx[1621] = xx[1227] * xx[1272];
  xx[1630] = xx[1271] * xx[1594] - xx[1277] * xx[1273];
  xx[1271] = sin(xx[1225]);
  xx[1225] = xx[1630] * xx[1271];
  xx[1277] = 0.3162553791961485;
  xx[1631] = 0.3162538200043588;
  xx[1633] = xx[1277] * xx[1273] - xx[1631] * xx[1594];
  xx[1634] = xx[1631] * xx[1273] + xx[1277] * xx[1594];
  xx[1273] = xx[1633] * xx[1227] - xx[1271] * xx[1634];
  xx[1277] = - xx[1273];
  xx[1594] = xx[1633] * xx[1271] + xx[1227] * xx[1634];
  xx[1631] = xx[1271] * xx[1272] + xx[1630] * xx[1227];
  xx[1635] = xx[1621] - xx[1225];
  xx[1636] = xx[1277];
  xx[1637] = xx[1594];
  xx[1638] = xx[1631];
  xx[1639] = xx[58] * state[60] - xx[59] * state[57];
  xx[1640] = xx[58] * state[59] + xx[59] * state[58];
  xx[1641] = - xx[1640];
  xx[1642] = xx[59] * state[59] - xx[58] * state[58];
  xx[1658] = - xx[1642];
  xx[1659] = xx[58] * state[57] + xx[59] * state[60];
  xx[1670] = - xx[1659];
  xx[1706] = xx[1639];
  xx[1707] = xx[1641];
  xx[1708] = xx[1658];
  xx[1709] = xx[1670];
  pm_math_quatCompose(xx + 1635, xx + 1706, xx + 1710);
  xx[1635] = xx[1642] * xx[1639];
  xx[1636] = xx[1640] * xx[1659];
  xx[1637] = xx[1642] * xx[1659];
  xx[1638] = xx[1640] * xx[1639];
  xx[1674] = xx[18] * (xx[1637] - xx[1638]);
  xx[1714] = xx[1640] * xx[1640];
  xx[1715] = xx[1642] * xx[1642];
  xx[1716] = (xx[1635] + xx[1636]) * xx[18];
  xx[1717] = xx[1674];
  xx[1718] = xx[3] - (xx[1714] + xx[1715]) * xx[18];
  pm_math_cross3(xx + 1716, xx + 902, xx + 1719);
  pm_math_quatXform(xx + 1710, xx + 1719, xx + 1716);
  pm_math_quatXform(xx + 1706, xx + 74, xx + 1710);
  xx[1713] = xx[1711] * xx[1271] - xx[1227] * xx[1710];
  xx[1719] = 5.157931604049537e-12;
  xx[1720] = 9.862118968695376e-13;
  xx[1721] = xx[1719] * xx[1227] + xx[1720] * xx[1271];
  xx[1722] = xx[18] * xx[1721] * xx[1271];
  xx[1723] = xx[18] * xx[1271] * xx[1713] - (xx[1711] - xx[1722]) - xx[1720];
  xx[1724] = - xx[1634];
  xx[1725] = xx[1272];
  xx[1726] = xx[1630];
  xx[1727] = xx[1724];
  xx[1728] = xx[18] * xx[1721] * xx[1227];
  xx[1721] = xx[1710] + xx[18] * xx[1227] * xx[1713] + xx[1728] - xx[1719];
  xx[1713] = xx[1721] * xx[1634];
  xx[1729] = xx[1723] * xx[1634];
  xx[1730] = xx[1721] * xx[1272] - xx[1630] * xx[1723];
  xx[1731] = xx[1713];
  xx[1732] = - xx[1729];
  xx[1733] = xx[1730];
  pm_math_cross3(xx + 1725, xx + 1731, xx + 1734);
  xx[1731] = xx[1716] + xx[1723] + xx[18] * (xx[1734] + xx[1633] * xx[1713]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_13/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 1737, xx + 96, 9 * sizeof(double));
  xx[1713] = xx[1225] - xx[1621];
  xx[1746] = - xx[1713];
  xx[1747] = xx[1277];
  xx[1748] = xx[1594];
  xx[1749] = xx[1631];
  pm_math_quatCompose(xx + 1746, xx + 1706, xx + 1750);
  pm_math_quatXform(xx + 1750, xx + 146, xx + 1754);
  pm_math_quatXform(xx + 1706, xx + 116, xx + 1757);
  pm_math_quatXform(xx + 1746, xx + 1757, xx + 1760);
  xx[1225] = xx[1754] + xx[1760];
  pm_math_quatXform(xx + 1750, xx + 938, xx + 1757);
  pm_math_quatXform(xx + 1706, xx + 758, xx + 1763);
  pm_math_quatXform(xx + 1746, xx + 1763, xx + 1766);
  xx[1277] = xx[1757] + xx[1766];
  xx[1621] = xx[254] * xx[1753];
  xx[1723] = xx[254] * xx[1751] + xx[276] * xx[1752];
  xx[1763] = - xx[1621];
  xx[1764] = - (xx[276] * xx[1753]);
  xx[1765] = xx[1723];
  pm_math_cross3(xx + 1751, xx + 1763, xx + 1769);
  xx[1763] = xx[1641];
  xx[1764] = xx[1658];
  xx[1765] = xx[1670];
  xx[1641] = xx[72] * xx[1659];
  xx[1658] = xx[73] * xx[1659];
  xx[1670] = xx[72] * xx[1640] + xx[1642] * xx[73];
  xx[1772] = xx[1641];
  xx[1773] = xx[1658];
  xx[1774] = - xx[1670];
  pm_math_cross3(xx + 1763, xx + 1772, xx + 1775);
  xx[1772] = xx[18] * (xx[1775] + xx[1641] * xx[1639]) - xx[73];
  xx[1773] = xx[72] + (xx[1658] * xx[1639] + xx[1776]) * xx[18];
  xx[1774] = (xx[1777] - xx[1670] * xx[1639]) * xx[18];
  pm_math_quatXform(xx + 1746, xx + 1772, xx + 1775);
  xx[1641] = xx[18] * (xx[1769] - xx[1750] * xx[1621]) + xx[1775] - xx[276];
  xx[1772] = - xx[1225];
  xx[1773] = - xx[1277];
  xx[1774] = - xx[1641];
  solveSymmetricPosDef(xx + 1737, xx + 1772, 3, 1, xx + 1778, xx + 1781);
  xx[1772] = xx[83] * xx[1778] + xx[145] * xx[1779];
  xx[1773] = xx[84] * xx[1779] - xx[718] * xx[1778];
  xx[1774] = xx[85] * xx[1780];
  pm_math_quatXform(xx + 1706, xx + 1772, xx + 1781);
  xx[1772] = xx[736] * xx[1778] - xx[811] * xx[1779] - xx[875] * xx[1780];
  xx[1773] = xx[811] * xx[1778] + xx[736] * xx[1779] + xx[913] * xx[1780];
  xx[1774] = xx[914] * xx[1778] + xx[932] * xx[1779];
  pm_math_quatXform(xx + 1706, xx + 1772, xx + 1784);
  pm_math_cross3(xx + 1710, xx + 1784, xx + 1772);
  xx[1621] = xx[1639] * xx[1639];
  xx[1658] = (xx[1621] + xx[1714]) * xx[18] - xx[3];
  xx[1670] = xx[1642] * xx[1640];
  xx[1714] = xx[1639] * xx[1659];
  xx[1732] = (xx[1670] + xx[1714]) * xx[18];
  xx[1733] = xx[18] * (xx[1636] - xx[1635]);
  xx[1751] = xx[18] * (xx[1670] - xx[1714]);
  xx[1670] = (xx[1621] + xx[1715]) * xx[18] - xx[3];
  xx[1714] = (xx[1637] + xx[1638]) * xx[18];
  xx[1637] = (xx[1636] + xx[1635]) * xx[18];
  xx[1635] = (xx[1621] + xx[1659] * xx[1659]) * xx[18] - xx[3];
  xx[1786] = xx[1658];
  xx[1787] = xx[1732];
  xx[1788] = xx[1733];
  xx[1789] = xx[1751];
  xx[1790] = xx[1670];
  xx[1791] = xx[1714];
  xx[1792] = xx[1637];
  xx[1793] = xx[1674];
  xx[1794] = xx[1635];
  solveSymmetricPosDef(xx + 1737, xx + 980, 3, 6, xx + 1795, xx + 1813);
  xx[1621] = - (xx[84] * xx[1796] - xx[718] * xx[1795]);
  xx[1636] = - (xx[85] * xx[1797]);
  xx[1638] = - (xx[85] * xx[1800]);
  xx[1813] = xx[83] - (xx[83] * xx[1795] + xx[145] * xx[1796]);
  xx[1814] = xx[1621];
  xx[1815] = xx[1636];
  xx[1816] = xx[1621];
  xx[1817] = xx[84] - (xx[84] * xx[1799] - xx[718] * xx[1798]);
  xx[1818] = xx[1638];
  xx[1819] = xx[1636];
  xx[1820] = xx[1638];
  xx[1821] = xx[85] - xx[85] * xx[1803];
  pm_math_matrix3x3ComposeTranspose(xx + 1813, xx + 1786, xx + 1822);
  pm_math_matrix3x3Compose(xx + 1786, xx + 1822, xx + 1813);
  xx[1822] = - (xx[83] * xx[1804] + xx[145] * xx[1805]);
  xx[1823] = - (xx[83] * xx[1807] + xx[145] * xx[1808]);
  xx[1824] = - (xx[83] * xx[1810] + xx[145] * xx[1811]);
  xx[1825] = - (xx[84] * xx[1805] - xx[718] * xx[1804]);
  xx[1826] = - (xx[84] * xx[1808] - xx[718] * xx[1807]);
  xx[1827] = - (xx[84] * xx[1811] - xx[718] * xx[1810]);
  xx[1828] = - (xx[85] * xx[1806]);
  xx[1829] = - (xx[85] * xx[1809]);
  xx[1830] = - (xx[85] * xx[1812]);
  pm_math_matrix3x3ComposeTranspose(xx + 1822, xx + 1786, xx + 1831);
  pm_math_matrix3x3Compose(xx + 1786, xx + 1831, xx + 1822);
  pm_math_matrix3x3PostCross(xx + 1822, xx + 1710, xx + 1831);
  xx[1621] = - (xx[811] * xx[1804] + xx[736] * xx[1805] + xx[913] * xx[1806]);
  xx[1636] = - (xx[914] * xx[1804] + xx[932] * xx[1805]);
  xx[1638] = - (xx[914] * xx[1807] + xx[932] * xx[1808]);
  xx[1840] = xx[78] - (xx[736] * xx[1804] - xx[811] * xx[1805] - xx[875] * xx
                       [1806]);
  xx[1841] = xx[1621];
  xx[1842] = xx[1636];
  xx[1843] = xx[1621];
  xx[1844] = xx[78] - (xx[811] * xx[1807] + xx[736] * xx[1808] + xx[913] * xx
                       [1809]);
  xx[1845] = xx[1638];
  xx[1846] = xx[1636];
  xx[1847] = xx[1638];
  xx[1848] = xx[78] - (xx[914] * xx[1810] + xx[932] * xx[1811]);
  pm_math_matrix3x3ComposeTranspose(xx + 1840, xx + 1786, xx + 1849);
  pm_math_matrix3x3Compose(xx + 1786, xx + 1849, xx + 1840);
  pm_math_matrix3x3PostCross(xx + 1840, xx + 1710, xx + 1786);
  pm_math_matrix3x3PreCross(xx + 1786, xx + 1710, xx + 1849);
  xx[1621] = xx[1828] - xx[1788];
  xx[1636] = xx[1829] - xx[1791];
  xx[1638] = xx[1821] - xx[1839] - xx[1839] - xx[1857] - xx[1720] * xx[1621] -
    xx[1719] * xx[1636] + xx[57];
  xx[1715] = xx[398] + xx[1840];
  xx[1752] = xx[1621] - (xx[1715] * xx[1720] + xx[1719] * xx[1841]);
  xx[1772] = xx[398] + xx[1844];
  xx[1773] = xx[1636] - (xx[1720] * xx[1843] + xx[1772] * xx[1719]);
  xx[1781] = xx[1638] - (xx[1752] * xx[1720] + xx[1773] * xx[1719]);
  ii[1] = factorSymmetricPosDef(xx + 1781, 1, xx + 1782);
  if (ii[1] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute5' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1782] = (xx[1783] + xx[1774] - (xx[1720] * xx[1784] + xx[1719] * xx[1785])
              + xx[1731]) / xx[1781];
  xx[1783] = xx[1795];
  xx[1784] = xx[1798];
  xx[1785] = xx[1801];
  xx[1774] = xx[1642] * xx[1782];
  xx[1788] = xx[1782] * xx[1640];
  xx[1858] = - ((xx[1774] * xx[1639] + xx[1788] * xx[1659]) * xx[18]);
  xx[1859] = xx[18] * (xx[1788] * xx[1639] - xx[1774] * xx[1659]);
  xx[1860] = (xx[1788] * xx[1640] + xx[1642] * xx[1774]) * xx[18] - xx[1782];
  xx[1861] = xx[1804];
  xx[1862] = xx[1807];
  xx[1863] = xx[1810];
  xx[1774] = xx[1782] * xx[1711] + xx[1720] * xx[1782];
  xx[1788] = xx[1782] * xx[1710] - xx[1719] * xx[1782];
  xx[1791] = xx[1788] * xx[1659];
  xx[1828] = xx[1774] * xx[1659];
  xx[1829] = xx[1642] * xx[1774] + xx[1788] * xx[1640];
  xx[1864] = - xx[1791];
  xx[1865] = - xx[1828];
  xx[1866] = xx[1829];
  pm_math_cross3(xx + 1763, xx + 1864, xx + 1867);
  xx[1864] = xx[1774] + xx[18] * (xx[1867] + xx[1791] * xx[1639]);
  xx[1865] = xx[18] * (xx[1868] + xx[1828] * xx[1639]) - xx[1788];
  xx[1866] = xx[18] * (xx[1869] - xx[1829] * xx[1639]);
  xx[1867] = xx[1796];
  xx[1868] = xx[1799];
  xx[1869] = xx[1802];
  xx[1870] = xx[1805];
  xx[1871] = xx[1808];
  xx[1872] = xx[1811];
  xx[1873] = xx[1797];
  xx[1874] = xx[1800];
  xx[1875] = xx[1803];
  xx[1795] = xx[1806];
  xx[1796] = xx[1809];
  xx[1797] = xx[1812];
  pm_math_cross3(xx + 1312, xx + 541, xx + 1798);
  xx[1801] = xx[1300] + xx[1798];
  xx[1802] = xx[1322] + xx[1799];
  xx[1803] = xx[1302] + xx[1800];
  pm_math_quatInverseXform(xx + 530, xx + 1801, xx + 1798);
  pm_math_quatInverseXform(xx + 530, xx + 1312, xx + 1800);
  xx[1300] = xx[1193] - (xx[499] * xx[1798] + xx[502] * xx[1799] - xx[497] * xx
    [1802]);
  xx[1193] = xx[1755] + xx[1761];
  xx[1302] = xx[1758] + xx[1767];
  xx[1312] = (xx[1770] - xx[276] * xx[1750] * xx[1753]) * xx[18] + xx[1776] +
    xx[254];
  xx[1798] = - xx[1193];
  xx[1799] = - xx[1302];
  xx[1800] = - xx[1312];
  solveSymmetricPosDef(xx + 1737, xx + 1798, 3, 1, xx + 1801, xx + 1804);
  xx[1798] = xx[83] * xx[1801] + xx[145] * xx[1802];
  xx[1799] = xx[84] * xx[1802] - xx[718] * xx[1801];
  xx[1800] = xx[85] * xx[1803];
  pm_math_quatXform(xx + 1706, xx + 1798, xx + 1804);
  xx[1798] = xx[736] * xx[1801] - xx[811] * xx[1802] - xx[875] * xx[1803];
  xx[1799] = xx[811] * xx[1801] + xx[736] * xx[1802] + xx[913] * xx[1803];
  xx[1800] = xx[914] * xx[1801] + xx[932] * xx[1802];
  pm_math_quatXform(xx + 1706, xx + 1798, xx + 1807);
  pm_math_cross3(xx + 1710, xx + 1807, xx + 1798);
  xx[1313] = xx[1717] + xx[1721] + (xx[1735] - xx[1633] * xx[1729]) * xx[18];
  xx[1314] = (xx[1806] + xx[1800] - (xx[1720] * xx[1807] + xx[1719] * xx[1808])
              + xx[1313]) / xx[1781];
  xx[1322] = xx[1642] * xx[1314];
  xx[1721] = xx[1314] * xx[1640];
  xx[1798] = - ((xx[1322] * xx[1639] + xx[1721] * xx[1659]) * xx[18]);
  xx[1799] = xx[18] * (xx[1721] * xx[1639] - xx[1322] * xx[1659]);
  xx[1800] = (xx[1721] * xx[1640] + xx[1642] * xx[1322]) * xx[18] - xx[1314];
  xx[1322] = xx[1314] * xx[1711] + xx[1720] * xx[1314];
  xx[1721] = xx[1314] * xx[1710] - xx[1719] * xx[1314];
  xx[1729] = xx[1721] * xx[1659];
  xx[1753] = xx[1322] * xx[1659];
  xx[1774] = xx[1642] * xx[1322] + xx[1721] * xx[1640];
  xx[1804] = - xx[1729];
  xx[1805] = - xx[1753];
  xx[1806] = xx[1774];
  pm_math_cross3(xx + 1763, xx + 1804, xx + 1807);
  xx[1804] = xx[1322] + xx[18] * (xx[1807] + xx[1729] * xx[1639]);
  xx[1805] = xx[18] * (xx[1808] + xx[1753] * xx[1639]) - xx[1721];
  xx[1806] = xx[18] * (xx[1809] - xx[1774] * xx[1639]);
  xx[1322] = xx[1801] - (pm_math_dot3(xx + 1783, xx + 1798) + pm_math_dot3(xx +
    1861, xx + 1804));
  xx[1721] = xx[1802] - (pm_math_dot3(xx + 1867, xx + 1798) + pm_math_dot3(xx +
    1870, xx + 1804));
  xx[1729] = xx[1803] - (pm_math_dot3(xx + 1873, xx + 1798) + pm_math_dot3(xx +
    1795, xx + 1804));
  xx[1753] = xx[1195] * xx[1204] + xx[1250] * xx[1306] + xx[1142] * xx[1315] +
    xx[1135] * xx[1318] + xx[1254] * xx[1304] + xx[1134] * xx[1305] + xx[1140] *
    xx[1308] + xx[1202] * xx[1309] + xx[1197] * xx[1300] + xx[1731] * xx[1314] -
    xx[1225] * xx[1322] - xx[1277] * xx[1721] - xx[1641] * xx[1729];
  pm_math_cross3(xx + 1241, xx + 541, xx + 1798);
  xx[1801] = xx[1199] + xx[1798];
  xx[1802] = xx[1248] + xx[1799];
  xx[1803] = xx[1201] + xx[1800];
  pm_math_quatInverseXform(xx + 530, xx + 1801, xx + 1798);
  pm_math_quatInverseXform(xx + 530, xx + 1241, xx + 1800);
  xx[1199] = xx[1132] - (xx[499] * xx[1798] + xx[502] * xx[1799] - xx[497] * xx
    [1802]);
  xx[1132] = xx[1756] + xx[1762];
  xx[1201] = xx[1759] + xx[1768];
  xx[1241] = (xx[1750] * xx[1723] + xx[1771]) * xx[18] + xx[1777];
  xx[1754] = - xx[1132];
  xx[1755] = - xx[1201];
  xx[1756] = - xx[1241];
  solveSymmetricPosDef(xx + 1737, xx + 1754, 3, 1, xx + 1757, xx + 1760);
  xx[1754] = xx[83] * xx[1757] + xx[145] * xx[1758];
  xx[1755] = xx[84] * xx[1758] - xx[718] * xx[1757];
  xx[1756] = xx[85] * xx[1759];
  pm_math_quatXform(xx + 1706, xx + 1754, xx + 1760);
  xx[1754] = xx[736] * xx[1757] - xx[811] * xx[1758] - xx[875] * xx[1759];
  xx[1755] = xx[811] * xx[1757] + xx[736] * xx[1758] + xx[913] * xx[1759];
  xx[1756] = xx[914] * xx[1757] + xx[932] * xx[1758];
  pm_math_quatXform(xx + 1706, xx + 1754, xx + 1766);
  pm_math_cross3(xx + 1710, xx + 1766, xx + 1754);
  xx[1242] = xx[1718] + (xx[1633] * xx[1730] + xx[1736]) * xx[18];
  xx[1243] = (xx[1762] + xx[1756] - (xx[1720] * xx[1766] + xx[1719] * xx[1767])
              + xx[1242]) / xx[1781];
  xx[1248] = xx[1642] * xx[1243];
  xx[1716] = xx[1243] * xx[1640];
  xx[1734] = - ((xx[1248] * xx[1639] + xx[1716] * xx[1659]) * xx[18]);
  xx[1735] = xx[18] * (xx[1716] * xx[1639] - xx[1248] * xx[1659]);
  xx[1736] = (xx[1716] * xx[1640] + xx[1642] * xx[1248]) * xx[18] - xx[1243];
  xx[1248] = xx[1243] * xx[1711] + xx[1720] * xx[1243];
  xx[1716] = xx[1243] * xx[1710] - xx[1719] * xx[1243];
  xx[1717] = xx[1716] * xx[1659];
  xx[1718] = xx[1248] * xx[1659];
  xx[1723] = xx[1642] * xx[1248] + xx[1716] * xx[1640];
  xx[1754] = - xx[1717];
  xx[1755] = - xx[1718];
  xx[1756] = xx[1723];
  pm_math_cross3(xx + 1763, xx + 1754, xx + 1760);
  xx[1754] = xx[1248] + xx[18] * (xx[1760] + xx[1717] * xx[1639]);
  xx[1755] = xx[18] * (xx[1761] + xx[1718] * xx[1639]) - xx[1716];
  xx[1756] = xx[18] * (xx[1762] - xx[1723] * xx[1639]);
  xx[1248] = xx[1757] - (pm_math_dot3(xx + 1783, xx + 1734) + pm_math_dot3(xx +
    1861, xx + 1754));
  xx[1716] = xx[1758] - (pm_math_dot3(xx + 1867, xx + 1734) + pm_math_dot3(xx +
    1870, xx + 1754));
  xx[1717] = xx[1759] - (pm_math_dot3(xx + 1873, xx + 1734) + pm_math_dot3(xx +
    1795, xx + 1754));
  xx[1718] = xx[1195] * xx[1185] + xx[1250] * xx[1210] + xx[1142] * xx[1236] +
    xx[1135] * xx[1247] + xx[1254] * xx[1208] + xx[1134] * xx[1209] + xx[1140] *
    xx[1232] + xx[1202] * xx[1233] + xx[1197] * xx[1199] + xx[1731] * xx[1243] -
    xx[1225] * xx[1248] - xx[1277] * xx[1716] - xx[1641] * xx[1717];
  pm_math_cross3(xx + 1406, xx + 541, xx + 1734);
  xx[1754] = xx[1360] + xx[1734];
  xx[1755] = xx[1412] + xx[1735];
  xx[1756] = xx[1362] + xx[1736];
  pm_math_quatInverseXform(xx + 530, xx + 1754, xx + 1734);
  pm_math_quatInverseXform(xx + 530, xx + 1406, xx + 1754);
  xx[1723] = xx[499] * xx[1734] + xx[502] * xx[1735] - xx[497] * xx[1756];
  xx[1730] = xx[1195] * xx[1270] + xx[1250] * xx[1374] + xx[1142] * xx[1375] +
    xx[1135] * xx[1398] + xx[1254] * xx[1275] + xx[1134] * xx[1363] + xx[1140] *
    xx[1364] + xx[1202] * xx[1365] - xx[1723] * xx[1197];
  pm_math_cross3(xx + 1447, xx + 541, xx + 1734);
  xx[1754] = xx[1435] + xx[1734];
  xx[1755] = xx[1457] + xx[1735];
  xx[1756] = xx[1437] + xx[1736];
  pm_math_quatInverseXform(xx + 530, xx + 1754, xx + 1734);
  pm_math_quatInverseXform(xx + 530, xx + 1447, xx + 1754);
  xx[1736] = xx[499] * xx[1734] + xx[502] * xx[1735] - xx[497] * xx[1756];
  xx[1734] = xx[1195] * xx[1338] + xx[1250] * xx[1441] + xx[1142] * xx[1450] +
    xx[1135] * xx[1453] + xx[1254] * xx[1439] + xx[1134] * xx[1440] + xx[1140] *
    xx[1443] + xx[1202] * xx[1444] - xx[1736] * xx[1197];
  pm_math_cross3(xx + 1376, xx + 541, xx + 1754);
  xx[1757] = xx[1333] + xx[1754];
  xx[1758] = xx[1383] + xx[1755];
  xx[1759] = xx[1335] + xx[1756];
  pm_math_quatInverseXform(xx + 530, xx + 1757, xx + 1754);
  pm_math_quatInverseXform(xx + 530, xx + 1376, xx + 1756);
  xx[1735] = xx[499] * xx[1754] + xx[502] * xx[1755] - xx[497] * xx[1758];
  xx[1750] = xx[1195] * xx[1319] + xx[1250] * xx[1344] + xx[1142] * xx[1371] +
    xx[1135] * xx[1382] + xx[1254] * xx[1342] + xx[1134] * xx[1343] + xx[1140] *
    xx[1367] + xx[1202] * xx[1368] - xx[1735] * xx[1197];
  pm_math_cross3(xx + 1486, xx + 541, xx + 1754);
  xx[1757] = xx[1483] + xx[1754];
  xx[1758] = xx[1482] + xx[1755];
  xx[1759] = xx[1485] + xx[1756];
  pm_math_quatInverseXform(xx + 530, xx + 1757, xx + 1754);
  pm_math_quatInverseXform(xx + 530, xx + 1486, xx + 1756);
  xx[1756] = xx[499] * xx[1754] + xx[502] * xx[1755] - xx[497] * xx[1758];
  xx[1754] = xx[1195] * xx[188] + xx[1250] * xx[768] + xx[1142] * xx[810] + xx
    [1135] * xx[812] + xx[1254] * xx[256] + xx[1134] * xx[555] + xx[1140] * xx
    [1421] + xx[1202] * xx[1480] - xx[1756] * xx[1197];
  pm_math_cross3(xx + 1536, xx + 541, xx + 1757);
  xx[1760] = xx[1517] + xx[1757];
  xx[1761] = xx[1547] + xx[1758];
  xx[1762] = xx[1519] + xx[1759];
  pm_math_quatInverseXform(xx + 530, xx + 1760, xx + 1757);
  pm_math_quatInverseXform(xx + 530, xx + 1536, xx + 1759);
  xx[1755] = xx[499] * xx[1757] + xx[502] * xx[1758] - xx[497] * xx[1761];
  xx[1757] = xx[1195] * xx[465] + xx[1250] * xx[1540] + xx[1142] * xx[1541] +
    xx[1135] * xx[1543] + xx[1254] * xx[1510] + xx[1134] * xx[1533] + xx[1140] *
    xx[1534] + xx[1202] * xx[1535] - xx[1755] * xx[1197];
  pm_math_cross3(xx + 1465, xx + 541, xx + 1758);
  xx[1761] = xx[1471] + xx[1758];
  xx[1762] = xx[798] + xx[1759];
  xx[1763] = xx[1473] + xx[1760];
  pm_math_quatInverseXform(xx + 530, xx + 1761, xx + 1758);
  pm_math_quatInverseXform(xx + 530, xx + 1465, xx + 1760);
  xx[1760] = xx[499] * xx[1758] + xx[502] * xx[1759] - xx[497] * xx[1762];
  xx[1758] = xx[1195] * xx[468] + xx[1250] * xx[176] + xx[1142] * xx[181] + xx
    [1135] * xx[766] + xx[1254] * xx[177] + xx[1134] * xx[179] + xx[1140] * xx
    [765] + xx[1202] * xx[767] - xx[1760] * xx[1197];
  xx[1759] = xx[1226] * xx[1185] + xx[1307] * xx[1210] + xx[1316] * xx[1236] +
    xx[1317] * xx[1247] + xx[1238] * xx[1208] + xx[1298] * xx[1209] + xx[1311] *
    xx[1232] + xx[1303] * xx[1233] + xx[1186] * xx[1199] + xx[1313] * xx[1243] -
    xx[1193] * xx[1248] - xx[1302] * xx[1716] - xx[1312] * xx[1717];
  xx[1761] = xx[1226] * xx[1270] + xx[1307] * xx[1374] + xx[1316] * xx[1375] +
    xx[1317] * xx[1398] + xx[1238] * xx[1275] + xx[1298] * xx[1363] + xx[1311] *
    xx[1364] + xx[1303] * xx[1365] - xx[1723] * xx[1186];
  xx[1762] = xx[1226] * xx[1338] + xx[1307] * xx[1441] + xx[1316] * xx[1450] +
    xx[1317] * xx[1453] + xx[1238] * xx[1439] + xx[1298] * xx[1440] + xx[1311] *
    xx[1443] + xx[1303] * xx[1444] - xx[1736] * xx[1186];
  xx[1763] = xx[1226] * xx[1319] + xx[1307] * xx[1344] + xx[1316] * xx[1371] +
    xx[1317] * xx[1382] + xx[1238] * xx[1342] + xx[1298] * xx[1343] + xx[1311] *
    xx[1367] + xx[1303] * xx[1368] - xx[1735] * xx[1186];
  xx[1764] = xx[1226] * xx[188] + xx[1307] * xx[768] + xx[1316] * xx[810] + xx
    [1317] * xx[812] + xx[1238] * xx[256] + xx[1298] * xx[555] + xx[1311] * xx
    [1421] + xx[1303] * xx[1480] - xx[1756] * xx[1186];
  xx[1765] = xx[1226] * xx[465] + xx[1307] * xx[1540] + xx[1316] * xx[1541] +
    xx[1317] * xx[1543] + xx[1238] * xx[1510] + xx[1298] * xx[1533] + xx[1311] *
    xx[1534] + xx[1303] * xx[1535] - xx[1755] * xx[1186];
  xx[1766] = xx[1226] * xx[468] + xx[1307] * xx[176] + xx[1316] * xx[181] + xx
    [1317] * xx[766] + xx[1238] * xx[177] + xx[1298] * xx[179] + xx[1311] * xx
    [765] + xx[1303] * xx[767] - xx[1760] * xx[1186];
  xx[1767] = xx[1130] * xx[1270] + xx[1223] * xx[1374] + xx[1237] * xx[1375] +
    xx[1246] * xx[1398] + xx[1194] * xx[1275] + xx[1221] * xx[1363] + xx[1235] *
    xx[1364] + xx[1222] * xx[1365] - xx[1723] * xx[1131];
  xx[1723] = xx[1130] * xx[1338] + xx[1223] * xx[1441] + xx[1237] * xx[1450] +
    xx[1246] * xx[1453] + xx[1194] * xx[1439] + xx[1221] * xx[1440] + xx[1235] *
    xx[1443] + xx[1222] * xx[1444] - xx[1736] * xx[1131];
  xx[1736] = xx[1130] * xx[1319] + xx[1223] * xx[1344] + xx[1237] * xx[1371] +
    xx[1246] * xx[1382] + xx[1194] * xx[1342] + xx[1221] * xx[1343] + xx[1235] *
    xx[1367] + xx[1222] * xx[1368] - xx[1735] * xx[1131];
  xx[1735] = xx[1130] * xx[188] + xx[1223] * xx[768] + xx[1237] * xx[810] + xx
    [1246] * xx[812] + xx[1194] * xx[256] + xx[1221] * xx[555] + xx[1235] * xx
    [1421] + xx[1222] * xx[1480] - xx[1756] * xx[1131];
  xx[1756] = xx[1130] * xx[465] + xx[1223] * xx[1540] + xx[1237] * xx[1541] +
    xx[1246] * xx[1543] + xx[1194] * xx[1510] + xx[1221] * xx[1533] + xx[1235] *
    xx[1534] + xx[1222] * xx[1535] - xx[1755] * xx[1131];
  xx[1755] = xx[1130] * xx[468] + xx[1223] * xx[176] + xx[1237] * xx[181] + xx
    [1246] * xx[766] + xx[1194] * xx[177] + xx[1221] * xx[179] + xx[1235] * xx
    [765] + xx[1222] * xx[767] - xx[1760] * xx[1131];
  pm_math_cross3(xx + 1406, xx + 417, xx + 1768);
  xx[1774] = xx[1360] + xx[1768];
  xx[1775] = xx[1412] + xx[1769];
  xx[1776] = xx[1362] + xx[1770];
  pm_math_quatInverseXform(xx + 407, xx + 1774, xx + 1768);
  pm_math_quatInverseXform(xx + 407, xx + 1406, xx + 1774);
  xx[1360] = xx[1] * state[64];
  xx[1362] = cos(xx[1360]);
  xx[1406] = 0.6324445710612973;
  xx[1407] = xx[1] * input[10];
  xx[1] = cos(xx[1407]);
  xx[1408] = 0.6324396579890008;
  xx[1412] = sin(xx[1407]);
  xx[1407] = xx[1406] * xx[1] + xx[1408] * xx[1412];
  xx[1760] = xx[1362] * xx[1407];
  xx[1770] = xx[1408] * xx[1] - xx[1406] * xx[1412];
  xx[1406] = sin(xx[1360]);
  xx[1360] = xx[1770] * xx[1406];
  xx[1408] = 0.3162538200043575;
  xx[1771] = 0.3162553791961478;
  xx[1774] = xx[1408] * xx[1412] - xx[1771] * xx[1];
  xx[1775] = xx[1408] * xx[1] + xx[1771] * xx[1412];
  xx[1] = xx[1774] * xx[1362] + xx[1406] * xx[1775];
  xx[1408] = - xx[1];
  xx[1412] = xx[1774] * xx[1406] - xx[1362] * xx[1775];
  xx[1771] = xx[1770] * xx[1362] - xx[1406] * xx[1407];
  xx[1798] = - (xx[1760] + xx[1360]);
  xx[1799] = xx[1408];
  xx[1800] = xx[1412];
  xx[1801] = xx[1771];
  xx[1777] = xx[58] * state[69] - xx[59] * state[66];
  xx[1788] = xx[58] * state[68] + xx[59] * state[67];
  xx[1791] = - xx[1788];
  xx[1802] = xx[59] * state[68] - xx[58] * state[67];
  xx[1803] = - xx[1802];
  xx[1804] = xx[58] * state[66] + xx[59] * state[69];
  xx[1805] = - xx[1804];
  xx[1806] = xx[1777];
  xx[1807] = xx[1791];
  xx[1808] = xx[1803];
  xx[1809] = xx[1805];
  pm_math_quatCompose(xx + 1798, xx + 1806, xx + 1876);
  xx[1798] = xx[1802] * xx[1777];
  xx[1799] = xx[1788] * xx[1804];
  xx[1800] = xx[1802] * xx[1804];
  xx[1801] = xx[1788] * xx[1777];
  xx[1810] = xx[18] * (xx[1800] - xx[1801]);
  xx[1811] = xx[1788] * xx[1788];
  xx[1812] = xx[1802] * xx[1802];
  xx[1880] = (xx[1798] + xx[1799]) * xx[18];
  xx[1881] = xx[1810];
  xx[1882] = xx[3] - (xx[1811] + xx[1812]) * xx[18];
  pm_math_cross3(xx + 1880, xx + 902, xx + 1883);
  pm_math_quatXform(xx + 1876, xx + 1883, xx + 1880);
  pm_math_quatXform(xx + 1806, xx + 74, xx + 1876);
  xx[1828] = xx[1877] * xx[1406] - xx[1362] * xx[1876];
  xx[1829] = 1.600627075326599e-13;
  xx[1840] = 8.497959654019115e-12;
  xx[1844] = xx[1829] * xx[1362] + xx[1840] * xx[1406];
  xx[1879] = xx[18] * xx[1844] * xx[1406];
  xx[1883] = xx[18] * xx[1406] * xx[1828] - (xx[1877] - xx[1879]) - xx[1840];
  xx[1884] = - xx[1407];
  xx[1885] = xx[1884];
  xx[1886] = xx[1770];
  xx[1887] = xx[1775];
  xx[1888] = xx[18] * xx[1844] * xx[1362];
  xx[1844] = xx[1876] + xx[18] * xx[1362] * xx[1828] + xx[1888] - xx[1829];
  xx[1828] = xx[1844] * xx[1775];
  xx[1889] = xx[1883] * xx[1775];
  xx[1890] = xx[1844] * xx[1407] + xx[1770] * xx[1883];
  xx[1891] = - xx[1828];
  xx[1892] = xx[1889];
  xx[1893] = - xx[1890];
  pm_math_cross3(xx + 1885, xx + 1891, xx + 1894);
  xx[1891] = xx[1880] + xx[1883] + xx[18] * (xx[1894] - xx[1774] * xx[1828]);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Rod_assem_14/Spherical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1828] = xx[1360] + xx[1760];
  xx[1897] = - xx[1828];
  xx[1898] = xx[1408];
  xx[1899] = xx[1412];
  xx[1900] = xx[1771];
  pm_math_quatCompose(xx + 1897, xx + 1806, xx + 1901);
  pm_math_quatXform(xx + 1901, xx + 146, xx + 1905);
  pm_math_quatXform(xx + 1806, xx + 116, xx + 146);
  pm_math_quatXform(xx + 1897, xx + 146, xx + 1908);
  xx[146] = xx[1905] + xx[1908];
  pm_math_quatXform(xx + 1901, xx + 938, xx + 1911);
  pm_math_quatXform(xx + 1806, xx + 758, xx + 1914);
  pm_math_quatXform(xx + 1897, xx + 1914, xx + 1917);
  xx[147] = xx[1911] + xx[1917];
  xx[148] = xx[254] * xx[1904];
  xx[1360] = xx[254] * xx[1902] + xx[276] * xx[1903];
  xx[1914] = - xx[148];
  xx[1915] = - (xx[276] * xx[1904]);
  xx[1916] = xx[1360];
  pm_math_cross3(xx + 1902, xx + 1914, xx + 1920);
  xx[1914] = xx[1791];
  xx[1915] = xx[1803];
  xx[1916] = xx[1805];
  xx[1408] = xx[72] * xx[1804];
  xx[1760] = xx[73] * xx[1804];
  xx[1791] = xx[72] * xx[1788] + xx[1802] * xx[73];
  xx[1923] = xx[1408];
  xx[1924] = xx[1760];
  xx[1925] = - xx[1791];
  pm_math_cross3(xx + 1914, xx + 1923, xx + 1926);
  xx[1923] = xx[18] * (xx[1926] + xx[1408] * xx[1777]) - xx[73];
  xx[1924] = xx[72] + (xx[1760] * xx[1777] + xx[1927]) * xx[18];
  xx[1925] = (xx[1928] - xx[1791] * xx[1777]) * xx[18];
  pm_math_quatXform(xx + 1897, xx + 1923, xx + 1926);
  xx[1408] = xx[18] * (xx[1920] - xx[1901] * xx[148]) + xx[1926] - xx[276];
  xx[1923] = - xx[146];
  xx[1924] = - xx[147];
  xx[1925] = - xx[1408];
  solveSymmetricPosDef(xx + 96, xx + 1923, 3, 1, xx + 1929, xx + 1932);
  xx[1923] = xx[83] * xx[1929] + xx[145] * xx[1930];
  xx[1924] = xx[84] * xx[1930] - xx[718] * xx[1929];
  xx[1925] = xx[85] * xx[1931];
  pm_math_quatXform(xx + 1806, xx + 1923, xx + 1932);
  xx[1923] = xx[736] * xx[1929] - xx[811] * xx[1930] - xx[875] * xx[1931];
  xx[1924] = xx[811] * xx[1929] + xx[736] * xx[1930] + xx[913] * xx[1931];
  xx[1925] = xx[914] * xx[1929] + xx[932] * xx[1930];
  pm_math_quatXform(xx + 1806, xx + 1923, xx + 1935);
  pm_math_cross3(xx + 1876, xx + 1935, xx + 1923);
  xx[148] = xx[1777] * xx[1777];
  xx[1760] = (xx[148] + xx[1811]) * xx[18] - xx[3];
  xx[1791] = xx[1802] * xx[1788];
  xx[1803] = xx[1777] * xx[1804];
  xx[1805] = (xx[1791] + xx[1803]) * xx[18];
  xx[1811] = xx[18] * (xx[1799] - xx[1798]);
  xx[1883] = xx[18] * (xx[1791] - xx[1803]);
  xx[1791] = (xx[148] + xx[1812]) * xx[18] - xx[3];
  xx[1803] = (xx[1800] + xx[1801]) * xx[18];
  xx[1800] = (xx[1799] + xx[1798]) * xx[18];
  xx[1798] = (xx[148] + xx[1804] * xx[1804]) * xx[18] - xx[3];
  xx[1937] = xx[1760];
  xx[1938] = xx[1805];
  xx[1939] = xx[1811];
  xx[1940] = xx[1883];
  xx[1941] = xx[1791];
  xx[1942] = xx[1803];
  xx[1943] = xx[1800];
  xx[1944] = xx[1810];
  xx[1945] = xx[1798];
  solveSymmetricPosDef(xx + 96, xx + 980, 3, 6, xx + 1946, xx + 1964);
  xx[148] = - (xx[84] * xx[1947] - xx[718] * xx[1946]);
  xx[1799] = - (xx[85] * xx[1948]);
  xx[1801] = - (xx[85] * xx[1951]);
  xx[1964] = xx[83] - (xx[83] * xx[1946] + xx[145] * xx[1947]);
  xx[1965] = xx[148];
  xx[1966] = xx[1799];
  xx[1967] = xx[148];
  xx[1968] = xx[84] - (xx[84] * xx[1950] - xx[718] * xx[1949]);
  xx[1969] = xx[1801];
  xx[1970] = xx[1799];
  xx[1971] = xx[1801];
  xx[1972] = xx[85] - xx[85] * xx[1954];
  pm_math_matrix3x3ComposeTranspose(xx + 1964, xx + 1937, xx + 1973);
  pm_math_matrix3x3Compose(xx + 1937, xx + 1973, xx + 1964);
  xx[1973] = - (xx[83] * xx[1955] + xx[145] * xx[1956]);
  xx[1974] = - (xx[83] * xx[1958] + xx[145] * xx[1959]);
  xx[1975] = - (xx[83] * xx[1961] + xx[145] * xx[1962]);
  xx[1976] = - (xx[84] * xx[1956] - xx[718] * xx[1955]);
  xx[1977] = - (xx[84] * xx[1959] - xx[718] * xx[1958]);
  xx[1978] = - (xx[84] * xx[1962] - xx[718] * xx[1961]);
  xx[1979] = - (xx[85] * xx[1957]);
  xx[1980] = - (xx[85] * xx[1960]);
  xx[1981] = - (xx[85] * xx[1963]);
  pm_math_matrix3x3ComposeTranspose(xx + 1973, xx + 1937, xx + 1982);
  pm_math_matrix3x3Compose(xx + 1937, xx + 1982, xx + 1973);
  pm_math_matrix3x3PostCross(xx + 1973, xx + 1876, xx + 1982);
  xx[148] = - (xx[811] * xx[1955] + xx[736] * xx[1956] + xx[913] * xx[1957]);
  xx[1799] = - (xx[914] * xx[1955] + xx[932] * xx[1956]);
  xx[1801] = - (xx[914] * xx[1958] + xx[932] * xx[1959]);
  xx[1991] = xx[78] - (xx[736] * xx[1955] - xx[811] * xx[1956] - xx[875] * xx
                       [1957]);
  xx[1992] = xx[148];
  xx[1993] = xx[1799];
  xx[1994] = xx[148];
  xx[1995] = xx[78] - (xx[811] * xx[1958] + xx[736] * xx[1959] + xx[913] * xx
                       [1960]);
  xx[1996] = xx[1801];
  xx[1997] = xx[1799];
  xx[1998] = xx[1801];
  xx[1999] = xx[78] - (xx[914] * xx[1961] + xx[932] * xx[1962]);
  pm_math_matrix3x3ComposeTranspose(xx + 1991, xx + 1937, xx + 2000);
  pm_math_matrix3x3Compose(xx + 1937, xx + 2000, xx + 1991);
  pm_math_matrix3x3PostCross(xx + 1991, xx + 1876, xx + 1937);
  pm_math_matrix3x3PreCross(xx + 1937, xx + 1876, xx + 2000);
  xx[148] = xx[1979] - xx[1939];
  xx[1799] = xx[1980] - xx[1942];
  xx[1801] = xx[1972] - xx[1990] - xx[1990] - xx[2008] - xx[1840] * xx[148] -
    xx[1829] * xx[1799] + xx[57];
  xx[1812] = xx[398] + xx[1991];
  xx[1892] = xx[148] - (xx[1812] * xx[1840] + xx[1829] * xx[1992]);
  xx[1893] = xx[398] + xx[1995];
  xx[1902] = xx[1799] - (xx[1840] * xx[1994] + xx[1893] * xx[1829]);
  xx[1903] = xx[1801] - (xx[1892] * xx[1840] + xx[1902] * xx[1829]);
  ii[0] = factorSymmetricPosDef(xx + 1903, 1, xx + 1923);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute7' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1923] = (xx[1934] + xx[1925] - (xx[1840] * xx[1935] + xx[1829] * xx[1936])
              + xx[1891]) / xx[1903];
  xx[1932] = xx[1946];
  xx[1933] = xx[1949];
  xx[1934] = xx[1952];
  xx[1924] = xx[1802] * xx[1923];
  xx[1925] = xx[1923] * xx[1788];
  xx[2009] = - ((xx[1924] * xx[1777] + xx[1925] * xx[1804]) * xx[18]);
  xx[2010] = xx[18] * (xx[1925] * xx[1777] - xx[1924] * xx[1804]);
  xx[2011] = (xx[1925] * xx[1788] + xx[1802] * xx[1924]) * xx[18] - xx[1923];
  xx[2012] = xx[1955];
  xx[2013] = xx[1958];
  xx[2014] = xx[1961];
  xx[1924] = xx[1923] * xx[1877] + xx[1840] * xx[1923];
  xx[1925] = xx[1923] * xx[1876] - xx[1829] * xx[1923];
  xx[1935] = xx[1925] * xx[1804];
  xx[1936] = xx[1804] * xx[1924];
  xx[1939] = xx[1802] * xx[1924] + xx[1925] * xx[1788];
  xx[2015] = - xx[1935];
  xx[2016] = - xx[1936];
  xx[2017] = xx[1939];
  pm_math_cross3(xx + 1914, xx + 2015, xx + 2018);
  xx[2015] = xx[1924] + xx[18] * (xx[2018] + xx[1935] * xx[1777]);
  xx[2016] = xx[18] * (xx[2019] + xx[1936] * xx[1777]) - xx[1925];
  xx[2017] = xx[18] * (xx[2020] - xx[1777] * xx[1939]);
  xx[2018] = xx[1947];
  xx[2019] = xx[1950];
  xx[2020] = xx[1953];
  xx[2021] = xx[1956];
  xx[2022] = xx[1959];
  xx[2023] = xx[1962];
  xx[2024] = xx[1948];
  xx[2025] = xx[1951];
  xx[2026] = xx[1954];
  xx[1946] = xx[1957];
  xx[1947] = xx[1960];
  xx[1948] = xx[1963];
  pm_math_cross3(xx + 1447, xx + 417, xx + 1949);
  xx[1952] = xx[1435] + xx[1949];
  xx[1953] = xx[1457] + xx[1950];
  xx[1954] = xx[1437] + xx[1951];
  pm_math_quatInverseXform(xx + 407, xx + 1952, xx + 1949);
  pm_math_quatInverseXform(xx + 407, xx + 1447, xx + 1951);
  xx[1435] = xx[1327] - (xx[379] * xx[1949] - xx[376] * xx[1950] - xx[374] * xx
    [1953]);
  xx[1327] = xx[1906] + xx[1909];
  xx[1437] = xx[1912] + xx[1918];
  xx[1447] = (xx[1921] - xx[276] * xx[1901] * xx[1904]) * xx[18] + xx[1927] +
    xx[254];
  xx[1949] = - xx[1327];
  xx[1950] = - xx[1437];
  xx[1951] = - xx[1447];
  solveSymmetricPosDef(xx + 96, xx + 1949, 3, 1, xx + 1952, xx + 1955);
  xx[1949] = xx[83] * xx[1952] + xx[145] * xx[1953];
  xx[1950] = xx[84] * xx[1953] - xx[718] * xx[1952];
  xx[1951] = xx[85] * xx[1954];
  pm_math_quatXform(xx + 1806, xx + 1949, xx + 1955);
  xx[1949] = xx[736] * xx[1952] - xx[811] * xx[1953] - xx[875] * xx[1954];
  xx[1950] = xx[811] * xx[1952] + xx[736] * xx[1953] + xx[913] * xx[1954];
  xx[1951] = xx[914] * xx[1952] + xx[932] * xx[1953];
  pm_math_quatXform(xx + 1806, xx + 1949, xx + 1958);
  pm_math_cross3(xx + 1876, xx + 1958, xx + 1949);
  xx[1448] = xx[1881] + xx[1844] + (xx[1774] * xx[1889] + xx[1895]) * xx[18];
  xx[1449] = (xx[1957] + xx[1951] - (xx[1840] * xx[1958] + xx[1829] * xx[1959])
              + xx[1448]) / xx[1903];
  xx[1457] = xx[1802] * xx[1449];
  xx[1844] = xx[1449] * xx[1788];
  xx[1949] = - ((xx[1457] * xx[1777] + xx[1844] * xx[1804]) * xx[18]);
  xx[1950] = xx[18] * (xx[1844] * xx[1777] - xx[1457] * xx[1804]);
  xx[1951] = (xx[1844] * xx[1788] + xx[1802] * xx[1457]) * xx[18] - xx[1449];
  xx[1457] = xx[1449] * xx[1877] + xx[1840] * xx[1449];
  xx[1844] = xx[1449] * xx[1876] - xx[1829] * xx[1449];
  xx[1889] = xx[1844] * xx[1804];
  xx[1904] = xx[1804] * xx[1457];
  xx[1924] = xx[1802] * xx[1457] + xx[1844] * xx[1788];
  xx[1955] = - xx[1889];
  xx[1956] = - xx[1904];
  xx[1957] = xx[1924];
  pm_math_cross3(xx + 1914, xx + 1955, xx + 1958);
  xx[1955] = xx[1457] + xx[18] * (xx[1958] + xx[1889] * xx[1777]);
  xx[1956] = xx[18] * (xx[1959] + xx[1904] * xx[1777]) - xx[1844];
  xx[1957] = xx[18] * (xx[1960] - xx[1777] * xx[1924]);
  xx[1457] = xx[1952] - (pm_math_dot3(xx + 1932, xx + 1949) + pm_math_dot3(xx +
    2012, xx + 1955));
  xx[1844] = xx[1953] - (pm_math_dot3(xx + 2018, xx + 1949) + pm_math_dot3(xx +
    2021, xx + 1955));
  xx[1889] = xx[1954] - (pm_math_dot3(xx + 2024, xx + 1949) + pm_math_dot3(xx +
    1946, xx + 1955));
  xx[1904] = xx[1329] * xx[1338] + xx[1385] * xx[1441] + xx[1276] * xx[1450] +
    xx[1269] * xx[1453] + xx[1389] * xx[1439] + xx[1268] * xx[1440] + xx[1274] *
    xx[1443] + xx[1336] * xx[1444] + xx[1345] * xx[1435] + xx[1891] * xx[1449] -
    xx[146] * xx[1457] - xx[147] * xx[1844] - xx[1408] * xx[1889];
  pm_math_cross3(xx + 1376, xx + 417, xx + 1949);
  xx[1952] = xx[1333] + xx[1949];
  xx[1953] = xx[1383] + xx[1950];
  xx[1954] = xx[1335] + xx[1951];
  pm_math_quatInverseXform(xx + 407, xx + 1952, xx + 1949);
  pm_math_quatInverseXform(xx + 407, xx + 1376, xx + 1951);
  xx[1333] = xx[1266] - (xx[379] * xx[1949] - xx[376] * xx[1950] - xx[374] * xx
    [1953]);
  xx[1266] = xx[1907] + xx[1910];
  xx[1335] = xx[1913] + xx[1919];
  xx[1376] = (xx[1901] * xx[1360] + xx[1922]) * xx[18] + xx[1928];
  xx[1905] = - xx[1266];
  xx[1906] = - xx[1335];
  xx[1907] = - xx[1376];
  solveSymmetricPosDef(xx + 96, xx + 1905, 3, 1, xx + 1908, xx + 1911);
  xx[1905] = xx[83] * xx[1908] + xx[145] * xx[1909];
  xx[1906] = xx[84] * xx[1909] - xx[718] * xx[1908];
  xx[1907] = xx[85] * xx[1910];
  pm_math_quatXform(xx + 1806, xx + 1905, xx + 1911);
  xx[1905] = xx[736] * xx[1908] - xx[811] * xx[1909] - xx[875] * xx[1910];
  xx[1906] = xx[811] * xx[1908] + xx[736] * xx[1909] + xx[913] * xx[1910];
  xx[1907] = xx[914] * xx[1908] + xx[932] * xx[1909];
  pm_math_quatXform(xx + 1806, xx + 1905, xx + 1917);
  pm_math_cross3(xx + 1876, xx + 1917, xx + 1905);
  xx[1360] = xx[1882] + (xx[1896] - xx[1774] * xx[1890]) * xx[18];
  xx[1377] = (xx[1913] + xx[1907] - (xx[1840] * xx[1917] + xx[1829] * xx[1918])
              + xx[1360]) / xx[1903];
  xx[1378] = xx[1802] * xx[1377];
  xx[1383] = xx[1377] * xx[1788];
  xx[1880] = - ((xx[1378] * xx[1777] + xx[1383] * xx[1804]) * xx[18]);
  xx[1881] = xx[18] * (xx[1383] * xx[1777] - xx[1378] * xx[1804]);
  xx[1882] = (xx[1383] * xx[1788] + xx[1802] * xx[1378]) * xx[18] - xx[1377];
  xx[1378] = xx[1377] * xx[1877] + xx[1840] * xx[1377];
  xx[1383] = xx[1377] * xx[1876] - xx[1829] * xx[1377];
  xx[1890] = xx[1383] * xx[1804];
  xx[1894] = xx[1804] * xx[1378];
  xx[1895] = xx[1802] * xx[1378] + xx[1383] * xx[1788];
  xx[1905] = - xx[1890];
  xx[1906] = - xx[1894];
  xx[1907] = xx[1895];
  pm_math_cross3(xx + 1914, xx + 1905, xx + 1911);
  xx[1905] = xx[1378] + xx[18] * (xx[1911] + xx[1890] * xx[1777]);
  xx[1906] = xx[18] * (xx[1912] + xx[1894] * xx[1777]) - xx[1383];
  xx[1907] = xx[18] * (xx[1913] - xx[1777] * xx[1895]);
  xx[1378] = xx[1908] - (pm_math_dot3(xx + 1932, xx + 1880) + pm_math_dot3(xx +
    2012, xx + 1905));
  xx[1383] = xx[1909] - (pm_math_dot3(xx + 2018, xx + 1880) + pm_math_dot3(xx +
    2021, xx + 1905));
  xx[1890] = xx[1910] - (pm_math_dot3(xx + 2024, xx + 1880) + pm_math_dot3(xx +
    1946, xx + 1905));
  xx[1880] = xx[1329] * xx[1319] + xx[1385] * xx[1344] + xx[1276] * xx[1371] +
    xx[1269] * xx[1382] + xx[1389] * xx[1342] + xx[1268] * xx[1343] + xx[1274] *
    xx[1367] + xx[1336] * xx[1368] + xx[1345] * xx[1333] + xx[1891] * xx[1377] -
    xx[146] * xx[1378] - xx[147] * xx[1383] - xx[1408] * xx[1890];
  pm_math_cross3(xx + 1486, xx + 417, xx + 1894);
  xx[1905] = xx[1483] + xx[1894];
  xx[1906] = xx[1482] + xx[1895];
  xx[1907] = xx[1485] + xx[1896];
  pm_math_quatInverseXform(xx + 407, xx + 1905, xx + 1894);
  pm_math_quatInverseXform(xx + 407, xx + 1486, xx + 1905);
  xx[1485] = xx[379] * xx[1894] - xx[376] * xx[1895] - xx[374] * xx[1907];
  xx[1881] = xx[1329] * xx[188] + xx[1385] * xx[768] + xx[1276] * xx[810] + xx
    [1269] * xx[812] + xx[1389] * xx[256] + xx[1268] * xx[555] + xx[1274] * xx
    [1421] + xx[1336] * xx[1480] - xx[1485] * xx[1345];
  pm_math_cross3(xx + 1536, xx + 417, xx + 1894);
  xx[1905] = xx[1517] + xx[1894];
  xx[1906] = xx[1547] + xx[1895];
  xx[1907] = xx[1519] + xx[1896];
  pm_math_quatInverseXform(xx + 407, xx + 1905, xx + 1894);
  pm_math_quatInverseXform(xx + 407, xx + 1536, xx + 1905);
  xx[1519] = xx[379] * xx[1894] - xx[376] * xx[1895] - xx[374] * xx[1907];
  xx[1882] = xx[1329] * xx[465] + xx[1385] * xx[1540] + xx[1276] * xx[1541] +
    xx[1269] * xx[1543] + xx[1389] * xx[1510] + xx[1268] * xx[1533] + xx[1274] *
    xx[1534] + xx[1336] * xx[1535] - xx[1519] * xx[1345];
  pm_math_cross3(xx + 1465, xx + 417, xx + 1894);
  xx[1905] = xx[1471] + xx[1894];
  xx[1906] = xx[798] + xx[1895];
  xx[1907] = xx[1473] + xx[1896];
  pm_math_quatInverseXform(xx + 407, xx + 1905, xx + 1894);
  pm_math_quatInverseXform(xx + 407, xx + 1465, xx + 1905);
  xx[1473] = xx[379] * xx[1894] - xx[376] * xx[1895] - xx[374] * xx[1907];
  xx[1894] = xx[1329] * xx[468] + xx[1385] * xx[176] + xx[1276] * xx[181] + xx
    [1269] * xx[766] + xx[1389] * xx[177] + xx[1268] * xx[179] + xx[1274] * xx
    [765] + xx[1336] * xx[767] - xx[1473] * xx[1345];
  xx[1895] = xx[1361] * xx[1319] + xx[1442] * xx[1344] + xx[1451] * xx[1371] +
    xx[1452] * xx[1382] + xx[1373] * xx[1342] + xx[1433] * xx[1343] + xx[1446] *
    xx[1367] + xx[1438] * xx[1368] + xx[1320] * xx[1333] + xx[1448] * xx[1377] -
    xx[1327] * xx[1378] - xx[1437] * xx[1383] - xx[1447] * xx[1890];
  xx[1896] = xx[1361] * xx[188] + xx[1442] * xx[768] + xx[1451] * xx[810] + xx
    [1452] * xx[812] + xx[1373] * xx[256] + xx[1433] * xx[555] + xx[1446] * xx
    [1421] + xx[1438] * xx[1480] - xx[1320] * xx[1485];
  xx[1901] = xx[1361] * xx[465] + xx[1442] * xx[1540] + xx[1451] * xx[1541] +
    xx[1452] * xx[1543] + xx[1373] * xx[1510] + xx[1433] * xx[1533] + xx[1446] *
    xx[1534] + xx[1438] * xx[1535] - xx[1320] * xx[1519];
  xx[1905] = xx[1361] * xx[468] + xx[1442] * xx[176] + xx[1451] * xx[181] + xx
    [1452] * xx[766] + xx[1373] * xx[177] + xx[1433] * xx[179] + xx[1446] * xx
    [765] + xx[1438] * xx[767] - xx[1320] * xx[1473];
  xx[1906] = xx[1264] * xx[188] + xx[1358] * xx[768] + xx[1372] * xx[810] + xx
    [1381] * xx[812] + xx[1328] * xx[256] + xx[1356] * xx[555] + xx[1370] * xx
    [1421] + xx[1357] * xx[1480] - xx[1265] * xx[1485];
  xx[1485] = xx[1264] * xx[465] + xx[1358] * xx[1540] + xx[1372] * xx[1541] +
    xx[1381] * xx[1543] + xx[1328] * xx[1510] + xx[1356] * xx[1533] + xx[1370] *
    xx[1534] + xx[1357] * xx[1535] - xx[1265] * xx[1519];
  xx[1519] = xx[1264] * xx[468] + xx[1358] * xx[176] + xx[1372] * xx[181] + xx
    [1381] * xx[766] + xx[1328] * xx[177] + xx[1356] * xx[179] + xx[1370] * xx
    [765] + xx[1357] * xx[767] - xx[1265] * xx[1473];
  xx[1907] = - (xx[130] + xx[54]);
  xx[1908] = xx[133];
  xx[1909] = xx[134];
  xx[1910] = xx[135];
  pm_math_quatCompose(xx + 1907, xx + 68, xx + 1911);
  xx[54] = xx[64] * xx[60];
  xx[130] = xx[66] * xx[61];
  xx[133] = xx[64] * xx[66];
  xx[1473] = xx[60] * xx[61];
  xx[1907] = xx[18] * (xx[133] - xx[1473]);
  xx[1908] = xx[61] * xx[61];
  xx[1909] = xx[64] * xx[64];
  xx[1915] = (xx[54] + xx[130]) * xx[18];
  xx[1916] = xx[1907];
  xx[1917] = xx[3] - (xx[1908] + xx[1909]) * xx[18];
  pm_math_cross3(xx + 1915, xx + 902, xx + 1918);
  pm_math_quatXform(xx + 1911, xx + 1918, xx + 1915);
  xx[1910] = xx[120] * xx[47] - xx[46] * xx[119];
  xx[1911] = 7.748428954013064e-12;
  xx[1912] = 5.376764528053357e-12;
  xx[1913] = xx[1911] * xx[46] - xx[1912] * xx[47];
  xx[1914] = xx[18] * xx[1913] * xx[47];
  xx[1918] = xx[18] * xx[47] * xx[1910] - (xx[120] + xx[1914]) - xx[1912];
  xx[1919] = xx[9];
  xx[1920] = xx[10];
  xx[1921] = xx[0];
  xx[0] = xx[18] * xx[1913] * xx[46];
  xx[9] = xx[119] + xx[18] * xx[46] * xx[1910] - xx[0] + xx[1911];
  xx[1910] = xx[9] * xx[6];
  xx[1913] = xx[1918] * xx[6];
  xx[1922] = xx[9] * xx[8] + xx[1918] * xx[10];
  xx[1924] = xx[1910];
  xx[1925] = - xx[1913];
  xx[1926] = - xx[1922];
  pm_math_cross3(xx + 1919, xx + 1924, xx + 1949);
  xx[1924] = xx[1915] + xx[1918] + xx[18] * (xx[1949] + xx[2] * xx[1910]);
  pm_math_quatXform(xx + 140, xx + 938, xx + 1925);
  pm_math_quatXform(xx + 68, xx + 758, xx + 938);
  pm_math_quatXform(xx + 136, xx + 938, xx + 1952);
  xx[938] = xx[1925] + xx[1952];
  xx[939] = xx[254] * xx[143];
  xx[940] = xx[254] * xx[141] + xx[276] * xx[142];
  xx[1955] = - xx[939];
  xx[1956] = - (xx[276] * xx[143]);
  xx[1957] = xx[940];
  pm_math_cross3(xx + 141, xx + 1955, xx + 1958);
  xx[1955] = xx[62];
  xx[1956] = xx[65];
  xx[1957] = xx[67];
  xx[62] = xx[72] * xx[66];
  xx[65] = xx[73] * xx[66];
  xx[67] = xx[72] * xx[61] + xx[64] * xx[73];
  xx[1961] = xx[62];
  xx[1962] = xx[65];
  xx[1963] = - xx[67];
  pm_math_cross3(xx + 1955, xx + 1961, xx + 2027);
  xx[1961] = xx[18] * (xx[2027] + xx[62] * xx[60]) - xx[73];
  xx[1962] = xx[72] + (xx[65] * xx[60] + xx[2028]) * xx[18];
  xx[1963] = (xx[2029] - xx[67] * xx[60]) * xx[18];
  pm_math_quatXform(xx + 136, xx + 1961, xx + 2027);
  xx[62] = xx[18] * (xx[1958] - xx[140] * xx[939]) + xx[2027] - xx[276];
  xx[1961] = - xx[152];
  xx[1962] = - xx[938];
  xx[1963] = - xx[62];
  solveSymmetricPosDef(xx + 105, xx + 1961, 3, 1, xx + 2030, xx + 2033);
  xx[1961] = xx[83] * xx[2030] + xx[145] * xx[2031];
  xx[1962] = xx[84] * xx[2031] - xx[718] * xx[2030];
  xx[1963] = xx[85] * xx[2032];
  pm_math_quatXform(xx + 68, xx + 1961, xx + 2033);
  xx[1961] = xx[736] * xx[2030] - xx[811] * xx[2031] - xx[875] * xx[2032];
  xx[1962] = xx[811] * xx[2030] + xx[736] * xx[2031] + xx[913] * xx[2032];
  xx[1963] = xx[914] * xx[2030] + xx[932] * xx[2031];
  pm_math_quatXform(xx + 68, xx + 1961, xx + 2036);
  pm_math_cross3(xx + 119, xx + 2036, xx + 1961);
  xx[65] = xx[60] * xx[60];
  xx[67] = (xx[65] + xx[1908]) * xx[18] - xx[3];
  xx[141] = xx[64] * xx[61];
  xx[142] = xx[60] * xx[66];
  xx[939] = (xx[141] + xx[142]) * xx[18];
  xx[1908] = xx[18] * (xx[130] - xx[54]);
  xx[1910] = xx[18] * (xx[141] - xx[142]);
  xx[141] = (xx[65] + xx[1909]) * xx[18] - xx[3];
  xx[142] = (xx[133] + xx[1473]) * xx[18];
  xx[133] = (xx[130] + xx[54]) * xx[18];
  xx[54] = (xx[65] + xx[66] * xx[66]) * xx[18] - xx[3];
  xx[2038] = xx[67];
  xx[2039] = xx[939];
  xx[2040] = xx[1908];
  xx[2041] = xx[1910];
  xx[2042] = xx[141];
  xx[2043] = xx[142];
  xx[2044] = xx[133];
  xx[2045] = xx[1907];
  xx[2046] = xx[54];
  solveSymmetricPosDef(xx + 105, xx + 980, 3, 6, xx + 2047, xx + 2065);
  xx[65] = - (xx[84] * xx[2048] - xx[718] * xx[2047]);
  xx[130] = - (xx[85] * xx[2049]);
  xx[980] = - (xx[85] * xx[2052]);
  xx[981] = xx[83] - (xx[83] * xx[2047] + xx[145] * xx[2048]);
  xx[982] = xx[65];
  xx[983] = xx[130];
  xx[984] = xx[65];
  xx[985] = xx[84] - (xx[84] * xx[2051] - xx[718] * xx[2050]);
  xx[986] = xx[980];
  xx[987] = xx[130];
  xx[988] = xx[980];
  xx[989] = xx[85] - xx[85] * xx[2055];
  pm_math_matrix3x3ComposeTranspose(xx + 981, xx + 2038, xx + 2065);
  pm_math_matrix3x3Compose(xx + 2038, xx + 2065, xx + 980);
  xx[989] = - (xx[83] * xx[2056] + xx[145] * xx[2057]);
  xx[990] = - (xx[83] * xx[2059] + xx[145] * xx[2060]);
  xx[991] = - (xx[83] * xx[2062] + xx[145] * xx[2063]);
  xx[992] = - (xx[84] * xx[2057] - xx[718] * xx[2056]);
  xx[993] = - (xx[84] * xx[2060] - xx[718] * xx[2059]);
  xx[994] = - (xx[84] * xx[2063] - xx[718] * xx[2062]);
  xx[995] = - (xx[85] * xx[2058]);
  xx[996] = - (xx[85] * xx[2061]);
  xx[997] = - (xx[85] * xx[2064]);
  pm_math_matrix3x3ComposeTranspose(xx + 989, xx + 2038, xx + 2065);
  pm_math_matrix3x3Compose(xx + 2038, xx + 2065, xx + 989);
  pm_math_matrix3x3PostCross(xx + 989, xx + 119, xx + 2065);
  xx[65] = - (xx[811] * xx[2056] + xx[736] * xx[2057] + xx[913] * xx[2058]);
  xx[130] = - (xx[914] * xx[2056] + xx[932] * xx[2057]);
  xx[1473] = - (xx[914] * xx[2059] + xx[932] * xx[2060]);
  xx[2074] = xx[78] - (xx[736] * xx[2056] - xx[811] * xx[2057] - xx[875] * xx
                       [2058]);
  xx[2075] = xx[65];
  xx[2076] = xx[130];
  xx[2077] = xx[65];
  xx[2078] = xx[78] - (xx[811] * xx[2059] + xx[736] * xx[2060] + xx[913] * xx
                       [2061]);
  xx[2079] = xx[1473];
  xx[2080] = xx[130];
  xx[2081] = xx[1473];
  xx[2082] = xx[78] - (xx[914] * xx[2062] + xx[932] * xx[2063]);
  pm_math_matrix3x3ComposeTranspose(xx + 2074, xx + 2038, xx + 2083);
  pm_math_matrix3x3Compose(xx + 2038, xx + 2083, xx + 2074);
  pm_math_matrix3x3PostCross(xx + 2074, xx + 119, xx + 2038);
  pm_math_matrix3x3PreCross(xx + 2038, xx + 119, xx + 2083);
  xx[65] = xx[995] - xx[2040];
  xx[130] = xx[996] - xx[2043];
  xx[995] = xx[988] - xx[2073] - xx[2073] - xx[2091] - xx[1912] * xx[65] + xx
    [1911] * xx[130] + xx[57];
  xx[996] = xx[398] + xx[2078];
  xx[1473] = xx[130] + xx[996] * xx[1911] - xx[1912] * xx[2077];
  xx[1909] = xx[398] + xx[2074];
  xx[1918] = xx[65] + xx[1911] * xx[2075] - xx[1909] * xx[1912];
  xx[1928] = xx[995] + xx[1473] * xx[1911] - xx[1918] * xx[1912];
  ii[0] = factorSymmetricPosDef(xx + 1928, 1, xx + 1935);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'PlatformAssem/Revolute13' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[1935] = (xx[2035] + xx[1963] + xx[1911] * xx[2037] - xx[1912] * xx[2036] +
              xx[1924]) / xx[1928];
  xx[1961] = xx[2047];
  xx[1962] = xx[2050];
  xx[1963] = xx[2053];
  xx[1936] = xx[64] * xx[1935];
  xx[1939] = xx[1935] * xx[61];
  xx[2033] = - ((xx[1936] * xx[60] + xx[1939] * xx[66]) * xx[18]);
  xx[2034] = xx[18] * (xx[1939] * xx[60] - xx[1936] * xx[66]);
  xx[2035] = (xx[1939] * xx[61] + xx[64] * xx[1936]) * xx[18] - xx[1935];
  xx[2092] = xx[2056];
  xx[2093] = xx[2059];
  xx[2094] = xx[2062];
  xx[1936] = xx[1935] * xx[120] + xx[1912] * xx[1935];
  xx[1939] = xx[1911] * xx[1935] + xx[1935] * xx[119];
  xx[1942] = xx[1939] * xx[66];
  xx[1979] = xx[1936] * xx[66];
  xx[1980] = xx[64] * xx[1936] + xx[1939] * xx[61];
  xx[2095] = - xx[1942];
  xx[2096] = - xx[1979];
  xx[2097] = xx[1980];
  pm_math_cross3(xx + 1955, xx + 2095, xx + 2098);
  xx[2095] = xx[1936] + xx[18] * (xx[2098] + xx[1942] * xx[60]);
  xx[2096] = xx[18] * (xx[2099] + xx[1979] * xx[60]) - xx[1939];
  xx[2097] = xx[18] * (xx[2100] - xx[1980] * xx[60]);
  xx[2098] = xx[2048];
  xx[2099] = xx[2051];
  xx[2100] = xx[2054];
  xx[2101] = xx[2057];
  xx[2102] = xx[2060];
  xx[2103] = xx[2063];
  xx[2104] = xx[2049];
  xx[2105] = xx[2052];
  xx[2106] = xx[2055];
  xx[2047] = xx[2058];
  xx[2048] = xx[2061];
  xx[2049] = xx[2064];
  pm_math_cross3(xx + 1486, xx + 1403, xx + 2050);
  xx[1486] = xx[1483] + xx[2050];
  xx[1483] = xx[1482] + xx[2051];
  xx[1482] = xx[1483] * xx[399];
  xx[1487] = xx[1486] * xx[399];
  xx[1488] = xx[150] + xx[156];
  xx[1936] = xx[1926] + xx[1953];
  xx[1939] = (xx[1959] - xx[276] * xx[140] * xx[143]) * xx[18] + xx[2028] + xx
    [254];
  xx[2050] = - xx[1488];
  xx[2051] = - xx[1936];
  xx[2052] = - xx[1939];
  solveSymmetricPosDef(xx + 105, xx + 2050, 3, 1, xx + 2053, xx + 2056);
  xx[2050] = xx[83] * xx[2053] + xx[145] * xx[2054];
  xx[2051] = xx[84] * xx[2054] - xx[718] * xx[2053];
  xx[2052] = xx[85] * xx[2055];
  pm_math_quatXform(xx + 68, xx + 2050, xx + 2056);
  xx[2050] = xx[736] * xx[2053] - xx[811] * xx[2054] - xx[875] * xx[2055];
  xx[2051] = xx[811] * xx[2053] + xx[736] * xx[2054] + xx[913] * xx[2055];
  xx[2052] = xx[914] * xx[2053] + xx[932] * xx[2054];
  pm_math_quatXform(xx + 68, xx + 2050, xx + 2059);
  pm_math_cross3(xx + 119, xx + 2059, xx + 2050);
  xx[143] = xx[1916] + xx[9] + (xx[1950] - xx[2] * xx[1913]) * xx[18];
  xx[9] = (xx[2058] + xx[2052] + xx[1911] * xx[2060] - xx[1912] * xx[2059] + xx
           [143]) / xx[1928];
  xx[254] = xx[64] * xx[9];
  xx[276] = xx[9] * xx[61];
  xx[2050] = - ((xx[254] * xx[60] + xx[276] * xx[66]) * xx[18]);
  xx[2051] = xx[18] * (xx[276] * xx[60] - xx[254] * xx[66]);
  xx[2052] = (xx[276] * xx[61] + xx[64] * xx[254]) * xx[18] - xx[9];
  xx[254] = xx[9] * xx[120] + xx[1912] * xx[9];
  xx[276] = xx[1911] * xx[9] + xx[9] * xx[119];
  xx[1913] = xx[276] * xx[66];
  xx[1942] = xx[254] * xx[66];
  xx[1979] = xx[64] * xx[254] + xx[276] * xx[61];
  xx[2056] = - xx[1913];
  xx[2057] = - xx[1942];
  xx[2058] = xx[1979];
  pm_math_cross3(xx + 1955, xx + 2056, xx + 2059);
  xx[2056] = xx[254] + xx[18] * (xx[2059] + xx[1913] * xx[60]);
  xx[2057] = xx[18] * (xx[2060] + xx[1942] * xx[60]) - xx[276];
  xx[2058] = xx[18] * (xx[2061] - xx[1979] * xx[60]);
  xx[254] = xx[2053] - (pm_math_dot3(xx + 1961, xx + 2050) + pm_math_dot3(xx +
    2092, xx + 2056));
  xx[276] = xx[2054] - (pm_math_dot3(xx + 2098, xx + 2050) + pm_math_dot3(xx +
    2101, xx + 2056));
  xx[1913] = xx[2055] - (pm_math_dot3(xx + 2104, xx + 2050) + pm_math_dot3(xx +
    2047, xx + 2056));
  pm_math_cross3(xx + 1536, xx + 1403, xx + 2050);
  xx[1536] = xx[1517] + xx[2050];
  xx[1517] = xx[1547] + xx[2051];
  xx[1537] = xx[1517] * xx[399];
  xx[1538] = xx[1536] * xx[399];
  xx[1547] = xx[321] - (xx[359] * (xx[1536] - (xx[363] * xx[1537] + xx[1538] *
    xx[399]) * xx[18]) - (xx[1517] + xx[18] * (xx[363] * xx[1538] - xx[1537] *
    xx[399])) * xx[402] - xx[1481] * xx[671]);
  xx[321] = xx[1924] * xx[9] - xx[152] * xx[254] - xx[938] * xx[276] - xx[62] *
    xx[1913] + xx[1455] * xx[465] + xx[464] * xx[1540] + xx[190] * xx[1541] +
    xx[252] * xx[1543] + xx[628] * xx[1510] + xx[189] * xx[1533] + xx[187] * xx
    [1534] + xx[297] * xx[1535] + xx[1462] * xx[1547];
  xx[149] = xx[151] + xx[157];
  xx[150] = xx[1927] + xx[1954];
  xx[151] = (xx[140] * xx[940] + xx[1960]) * xx[18] + xx[2029];
  xx[155] = - xx[149];
  xx[156] = - xx[150];
  xx[157] = - xx[151];
  solveSymmetricPosDef(xx + 105, xx + 155, 3, 1, xx + 1536, xx + 1925);
  xx[155] = xx[83] * xx[1536] + xx[145] * xx[1537];
  xx[156] = xx[84] * xx[1537] - xx[718] * xx[1536];
  xx[157] = xx[85] * xx[1538];
  pm_math_quatXform(xx + 68, xx + 155, xx + 1925);
  xx[155] = xx[736] * xx[1536] - xx[811] * xx[1537] - xx[875] * xx[1538];
  xx[156] = xx[811] * xx[1536] + xx[736] * xx[1537] + xx[913] * xx[1538];
  xx[157] = xx[914] * xx[1536] + xx[932] * xx[1537];
  pm_math_quatXform(xx + 68, xx + 155, xx + 1952);
  pm_math_cross3(xx + 119, xx + 1952, xx + 155);
  xx[140] = xx[1917] + (xx[1951] - xx[2] * xx[1922]) * xx[18];
  xx[155] = (xx[1927] + xx[157] + xx[1911] * xx[1953] - xx[1912] * xx[1952] +
             xx[140]) / xx[1928];
  xx[156] = xx[64] * xx[155];
  xx[157] = xx[155] * xx[61];
  xx[1915] = - ((xx[156] * xx[60] + xx[157] * xx[66]) * xx[18]);
  xx[1916] = xx[18] * (xx[157] * xx[60] - xx[156] * xx[66]);
  xx[1917] = (xx[157] * xx[61] + xx[64] * xx[156]) * xx[18] - xx[155];
  xx[156] = xx[155] * xx[120] + xx[1912] * xx[155];
  xx[157] = xx[1911] * xx[155] + xx[155] * xx[119];
  xx[940] = xx[157] * xx[66];
  xx[1481] = xx[156] * xx[66];
  xx[1517] = xx[64] * xx[156] + xx[157] * xx[61];
  xx[1925] = - xx[940];
  xx[1926] = - xx[1481];
  xx[1927] = xx[1517];
  pm_math_cross3(xx + 1955, xx + 1925, xx + 1949);
  xx[1925] = xx[156] + xx[18] * (xx[1949] + xx[940] * xx[60]);
  xx[1926] = xx[18] * (xx[1950] + xx[1481] * xx[60]) - xx[157];
  xx[1927] = xx[18] * (xx[1951] - xx[1517] * xx[60]);
  xx[156] = xx[1536] - (pm_math_dot3(xx + 1961, xx + 1915) + pm_math_dot3(xx +
    2092, xx + 1925));
  xx[157] = xx[1537] - (pm_math_dot3(xx + 2098, xx + 1915) + pm_math_dot3(xx +
    2101, xx + 1925));
  xx[940] = xx[1538] - (pm_math_dot3(xx + 2104, xx + 1915) + pm_math_dot3(xx +
    2047, xx + 1925));
  pm_math_cross3(xx + 1465, xx + 1403, xx + 1536);
  xx[1465] = xx[1471] + xx[1536];
  xx[1466] = xx[798] + xx[1537];
  xx[798] = xx[1466] * xx[399];
  xx[1467] = xx[1465] * xx[399];
  xx[1471] = xx[322] - (xx[359] * (xx[1465] - (xx[363] * xx[798] + xx[1467] *
    xx[399]) * xx[18]) - (xx[1466] + xx[18] * (xx[363] * xx[1467] - xx[798] *
    xx[399])) * xx[402] - xx[788] * xx[671]);
  xx[322] = xx[1924] * xx[155] - xx[152] * xx[156] - xx[938] * xx[157] - xx[62] *
    xx[940] + xx[1455] * xx[468] + xx[464] * xx[176] + xx[190] * xx[181] + xx
    [252] * xx[766] + xx[628] * xx[177] + xx[189] * xx[179] + xx[187] * xx[765]
    + xx[297] * xx[767] + xx[1462] * xx[1471];
  xx[788] = xx[143] * xx[155] - xx[1488] * xx[156] - xx[1936] * xx[157] - xx
    [1939] * xx[940] + xx[617] * xx[468] + xx[1502] * xx[176] + xx[1520] * xx
    [181] + xx[1542] * xx[766] + xx[1445] * xx[177] + xx[1492] * xx[179] + xx
    [1503] * xx[765] + xx[618] * xx[767] + xx[1436] * xx[1471];
  xx[2107] = xx[295] * xx[661] + xx[776] * xx[685] + xx[268] * xx[549] + xx[178]
    * xx[550] + xx[559] * xx[551] + xx[191] * xx[593] + xx[255] * xx[594] + xx
    [317] * xx[345] + xx[247] * (xx[332] + xx[384] * xx[673] + xx[539] * (xx[423]
    - (xx[198] * xx[662] + xx[665] * xx[210]) * xx[18]) + (xx[525] + xx[18] *
    (xx[198] * xx[665] - xx[662] * xx[210])) * xx[574]) + xx[912] * xx[1043] -
    xx[666] * (xx[962] - (pm_math_dot3(xx + 967, xx + 1061) + pm_math_dot3(xx +
    1064, xx + 1070))) - xx[144] * (xx[963] - (pm_math_dot3(xx + 1067, xx + 1061)
    + pm_math_dot3(xx + 1073, xx + 1070))) - xx[707] * (xx[964] - (pm_math_dot3
    (xx + 1076, xx + 1061) + pm_math_dot3(xx + 998, xx + 1070)));
  xx[2108] = xx[1011];
  xx[2109] = xx[568];
  xx[2110] = xx[1079];
  xx[2111] = xx[951];
  xx[2112] = xx[844];
  xx[2113] = xx[1218];
  xx[2114] = xx[1297];
  xx[2115] = xx[1198];
  xx[2116] = xx[1353];
  xx[2117] = xx[1432];
  xx[2118] = xx[1332];
  xx[2119] = xx[616];
  xx[2120] = xx[1518];
  xx[2121] = xx[797];
  xx[2122] = xx[1011];
  xx[2123] = xx[958] * xx[335] + xx[1013] * xx[1015] + xx[1047] * xx[1083] + xx
    [1082] * xx[1084] + xx[1001] * xx[1004] + xx[1002] * xx[1005] + xx[1014] *
    xx[1009] + xx[286] * xx[1010] + xx[293] * xx[1012] + xx[934] * xx[865] - xx
    [241] * xx[910] - xx[1003] * xx[1007] - xx[1006] * xx[1008];
  xx[2124] = xx[1454];
  xx[2125] = xx[1468];
  xx[2126] = xx[1469];
  xx[2127] = xx[1472];
  xx[2128] = xx[1475];
  xx[2129] = xx[1477];
  xx[2130] = xx[1478];
  xx[2131] = xx[1479];
  xx[2132] = xx[1489];
  xx[2133] = xx[1490];
  xx[2134] = xx[1491];
  xx[2135] = xx[1499];
  xx[2136] = xx[1500];
  xx[2137] = xx[568];
  xx[2138] = xx[1454];
  xx[2139] = xx[230] * xx[244] + xx[299] * xx[329] + xx[553] * xx[552] + xx[554]
    * xx[567] + xx[288] * xx[327] + xx[294] * xx[328] + xx[300] * xx[336] + xx
    [231] * xx[337] + xx[232] * xx[339] + xx[324] * xx[325] - xx[160] * xx[338]
    - xx[298] * xx[340] - xx[323] * xx[341];
  xx[2140] = xx[1501];
  xx[2141] = xx[1165];
  xx[2142] = xx[1187];
  xx[2143] = xx[1119];
  xx[2144] = xx[1299];
  xx[2145] = xx[1321];
  xx[2146] = xx[1253];
  xx[2147] = xx[1434];
  xx[2148] = xx[1456];
  xx[2149] = xx[1388];
  xx[2150] = xx[1484];
  xx[2151] = xx[1504];
  xx[2152] = xx[1079];
  xx[2153] = xx[1468];
  xx[2154] = xx[1501];
  xx[2155] = xx[916] * xx[656] + xx[1116] * xx[1101] + xx[807] * xx[1102] + xx
    [794] * xx[1129] + xx[1120] * xx[795] + xx[705] * xx[1093] + xx[655] * xx
    [1094] + xx[949] * xx[1095] + xx[917] * (xx[843] - (xx[484] * xx[1507] + xx
    [588] * xx[1512] - xx[591] * xx[1511])) + xx[1561] * xx[1612] - xx[153] *
    (xx[1608] - (pm_math_dot3(xx + 1613, xx + 1688) + pm_math_dot3(xx + 1691, xx
       + 1694))) - xx[167] * (xx[1609] - (pm_math_dot3(xx + 1697, xx + 1688) +
    pm_math_dot3(xx + 1700, xx + 1694))) - xx[1509] * (xx[1610] - (pm_math_dot3
    (xx + 1703, xx + 1688) + pm_math_dot3(xx + 1625, xx + 1694)));
  xx[2156] = xx[1583];
  xx[2157] = xx[1550];
  xx[2158] = xx[1560];
  xx[2159] = xx[1565];
  xx[2160] = xx[1580];
  xx[2161] = xx[1585];
  xx[2162] = xx[1587];
  xx[2163] = xx[1589];
  xx[2164] = xx[1591];
  xx[2165] = xx[1593];
  xx[2166] = xx[1595];
  xx[2167] = xx[951];
  xx[2168] = xx[1469];
  xx[2169] = xx[1165];
  xx[2170] = xx[1583];
  xx[2171] = xx[1091] * xx[1100] + xx[1166] * xx[1180] + xx[1182] * xx[1181] +
    xx[1183] * xx[1184] + xx[1163] * xx[1172] + xx[1164] * xx[1173] + xx[1167] *
    xx[1174] + xx[1168] * xx[1175] + xx[845] * xx[1169] + xx[1177] * xx[1178] -
    xx[911] * xx[1188] - xx[1171] * xx[1552] - xx[1176] * xx[1559];
  xx[2172] = xx[1596];
  xx[2173] = xx[1597];
  xx[2174] = xx[1598];
  xx[2175] = xx[1599];
  xx[2176] = xx[1600];
  xx[2177] = xx[1601];
  xx[2178] = xx[1604];
  xx[2179] = xx[1605];
  xx[2180] = xx[1606];
  xx[2181] = xx[1607];
  xx[2182] = xx[844];
  xx[2183] = xx[1472];
  xx[2184] = xx[1187];
  xx[2185] = xx[1550];
  xx[2186] = xx[1596];
  xx[2187] = xx[755] * xx[915] + xx[954] * xx[1087] + xx[1108] * xx[1107] + xx
    [1112] * xx[1113] + xx[948] * xx[1085] + xx[953] * xx[1086] + xx[1103] * xx
    [1097] + xx[952] * xx[1098] + xx[756] * xx[945] + xx[1105] * xx[1106] - xx
    [757] * xx[1114] - xx[947] * xx[1548] - xx[1104] * xx[1549];
  xx[2188] = xx[1618];
  xx[2189] = xx[1554];
  xx[2190] = xx[1564];
  xx[2191] = xx[1566];
  xx[2192] = xx[1584];
  xx[2193] = xx[1586];
  xx[2194] = xx[1588];
  xx[2195] = xx[1590];
  xx[2196] = xx[1592];
  xx[2197] = xx[1218];
  xx[2198] = xx[1475];
  xx[2199] = xx[1119];
  xx[2200] = xx[1560];
  xx[2201] = xx[1597];
  xx[2202] = xx[1618];
  xx[2203] = xx[1195] * xx[1136] + xx[1250] * xx[1239] + xx[1142] * xx[1240] +
    xx[1135] * xx[1263] + xx[1254] * xx[1141] + xx[1134] * xx[1228] + xx[1140] *
    xx[1229] + xx[1202] * xx[1230] + xx[1197] * (xx[1179] - (xx[499] * xx[1628]
    + xx[502] * xx[1629] - xx[497] * xx[1632])) + xx[1731] * xx[1782] - xx[1225]
    * (xx[1778] - (pm_math_dot3(xx + 1783, xx + 1858) + pm_math_dot3(xx + 1861,
         xx + 1864))) - xx[1277] * (xx[1779] - (pm_math_dot3(xx + 1867, xx +
    1858) + pm_math_dot3(xx + 1870, xx + 1864))) - xx[1641] * (xx[1780] -
    (pm_math_dot3(xx + 1873, xx + 1858) + pm_math_dot3(xx + 1795, xx + 1864)));
  xx[2204] = xx[1753];
  xx[2205] = xx[1718];
  xx[2206] = xx[1730];
  xx[2207] = xx[1734];
  xx[2208] = xx[1750];
  xx[2209] = xx[1754];
  xx[2210] = xx[1757];
  xx[2211] = xx[1758];
  xx[2212] = xx[1297];
  xx[2213] = xx[1477];
  xx[2214] = xx[1299];
  xx[2215] = xx[1565];
  xx[2216] = xx[1598];
  xx[2217] = xx[1554];
  xx[2218] = xx[1753];
  xx[2219] = xx[1226] * xx[1204] + xx[1307] * xx[1306] + xx[1316] * xx[1315] +
    xx[1317] * xx[1318] + xx[1238] * xx[1304] + xx[1298] * xx[1305] + xx[1311] *
    xx[1308] + xx[1303] * xx[1309] + xx[1186] * xx[1300] + xx[1313] * xx[1314] -
    xx[1193] * xx[1322] - xx[1302] * xx[1721] - xx[1312] * xx[1729];
  xx[2220] = xx[1759];
  xx[2221] = xx[1761];
  xx[2222] = xx[1762];
  xx[2223] = xx[1763];
  xx[2224] = xx[1764];
  xx[2225] = xx[1765];
  xx[2226] = xx[1766];
  xx[2227] = xx[1198];
  xx[2228] = xx[1478];
  xx[2229] = xx[1321];
  xx[2230] = xx[1580];
  xx[2231] = xx[1599];
  xx[2232] = xx[1564];
  xx[2233] = xx[1718];
  xx[2234] = xx[1759];
  xx[2235] = xx[1130] * xx[1185] + xx[1223] * xx[1210] + xx[1237] * xx[1236] +
    xx[1246] * xx[1247] + xx[1194] * xx[1208] + xx[1221] * xx[1209] + xx[1235] *
    xx[1232] + xx[1222] * xx[1233] + xx[1131] * xx[1199] + xx[1242] * xx[1243] -
    xx[1132] * xx[1248] - xx[1201] * xx[1716] - xx[1241] * xx[1717];
  xx[2236] = xx[1767];
  xx[2237] = xx[1723];
  xx[2238] = xx[1736];
  xx[2239] = xx[1735];
  xx[2240] = xx[1756];
  xx[2241] = xx[1755];
  xx[2242] = xx[1353];
  xx[2243] = xx[1479];
  xx[2244] = xx[1253];
  xx[2245] = xx[1585];
  xx[2246] = xx[1600];
  xx[2247] = xx[1566];
  xx[2248] = xx[1730];
  xx[2249] = xx[1761];
  xx[2250] = xx[1767];
  xx[2251] = xx[1329] * xx[1270] + xx[1385] * xx[1374] + xx[1276] * xx[1375] +
    xx[1269] * xx[1398] + xx[1389] * xx[1275] + xx[1268] * xx[1363] + xx[1274] *
    xx[1364] + xx[1336] * xx[1365] + xx[1345] * (xx[1310] - (xx[379] * xx[1768]
    - xx[376] * xx[1769] - xx[374] * xx[1776])) + xx[1891] * xx[1923] - xx[146] *
    (xx[1929] - (pm_math_dot3(xx + 1932, xx + 2009) + pm_math_dot3(xx + 2012, xx
       + 2015))) - xx[147] * (xx[1930] - (pm_math_dot3(xx + 2018, xx + 2009) +
    pm_math_dot3(xx + 2021, xx + 2015))) - xx[1408] * (xx[1931] - (pm_math_dot3
    (xx + 2024, xx + 2009) + pm_math_dot3(xx + 1946, xx + 2015)));
  xx[2252] = xx[1904];
  xx[2253] = xx[1880];
  xx[2254] = xx[1881];
  xx[2255] = xx[1882];
  xx[2256] = xx[1894];
  xx[2257] = xx[1432];
  xx[2258] = xx[1489];
  xx[2259] = xx[1434];
  xx[2260] = xx[1587];
  xx[2261] = xx[1601];
  xx[2262] = xx[1584];
  xx[2263] = xx[1734];
  xx[2264] = xx[1762];
  xx[2265] = xx[1723];
  xx[2266] = xx[1904];
  xx[2267] = xx[1361] * xx[1338] + xx[1442] * xx[1441] + xx[1451] * xx[1450] +
    xx[1452] * xx[1453] + xx[1373] * xx[1439] + xx[1433] * xx[1440] + xx[1446] *
    xx[1443] + xx[1438] * xx[1444] + xx[1320] * xx[1435] + xx[1448] * xx[1449] -
    xx[1327] * xx[1457] - xx[1437] * xx[1844] - xx[1447] * xx[1889];
  xx[2268] = xx[1895];
  xx[2269] = xx[1896];
  xx[2270] = xx[1901];
  xx[2271] = xx[1905];
  xx[2272] = xx[1332];
  xx[2273] = xx[1490];
  xx[2274] = xx[1456];
  xx[2275] = xx[1589];
  xx[2276] = xx[1604];
  xx[2277] = xx[1586];
  xx[2278] = xx[1750];
  xx[2279] = xx[1763];
  xx[2280] = xx[1736];
  xx[2281] = xx[1880];
  xx[2282] = xx[1895];
  xx[2283] = xx[1264] * xx[1319] + xx[1358] * xx[1344] + xx[1372] * xx[1371] +
    xx[1381] * xx[1382] + xx[1328] * xx[1342] + xx[1356] * xx[1343] + xx[1370] *
    xx[1367] + xx[1357] * xx[1368] + xx[1265] * xx[1333] + xx[1360] * xx[1377] -
    xx[1266] * xx[1378] - xx[1335] * xx[1383] - xx[1376] * xx[1890];
  xx[2284] = xx[1906];
  xx[2285] = xx[1485];
  xx[2286] = xx[1519];
  xx[2287] = xx[616];
  xx[2288] = xx[1491];
  xx[2289] = xx[1388];
  xx[2290] = xx[1591];
  xx[2291] = xx[1605];
  xx[2292] = xx[1588];
  xx[2293] = xx[1754];
  xx[2294] = xx[1764];
  xx[2295] = xx[1735];
  xx[2296] = xx[1881];
  xx[2297] = xx[1896];
  xx[2298] = xx[1906];
  xx[2299] = xx[1924] * xx[1935] - xx[152] * (xx[2030] - (pm_math_dot3(xx + 1961,
    xx + 2033) + pm_math_dot3(xx + 2092, xx + 2095))) - xx[938] * (xx[2031] -
    (pm_math_dot3(xx + 2098, xx + 2033) + pm_math_dot3(xx + 2101, xx + 2095))) -
    xx[62] * (xx[2032] - (pm_math_dot3(xx + 2104, xx + 2033) + pm_math_dot3(xx +
    2047, xx + 2095))) + xx[1455] * xx[188] + xx[464] * xx[768] + xx[190] * xx
    [810] + xx[252] * xx[812] + xx[628] * xx[256] + xx[189] * xx[555] + xx[187] *
    xx[1421] + xx[297] * xx[1480] + xx[1462] * (xx[319] - (xx[359] * (xx[1486] -
    (xx[363] * xx[1482] + xx[1487] * xx[399]) * xx[18]) - (xx[1483] + xx[18] *
    (xx[363] * xx[1487] - xx[1482] * xx[399])) * xx[402] - xx[1464] * xx[671]));
  xx[2300] = xx[321];
  xx[2301] = xx[322];
  xx[2302] = xx[1518];
  xx[2303] = xx[1499];
  xx[2304] = xx[1484];
  xx[2305] = xx[1593];
  xx[2306] = xx[1606];
  xx[2307] = xx[1590];
  xx[2308] = xx[1757];
  xx[2309] = xx[1765];
  xx[2310] = xx[1756];
  xx[2311] = xx[1882];
  xx[2312] = xx[1901];
  xx[2313] = xx[1485];
  xx[2314] = xx[321];
  xx[2315] = xx[143] * xx[9] - xx[1488] * xx[254] - xx[1936] * xx[276] - xx[1939]
    * xx[1913] + xx[617] * xx[465] + xx[1502] * xx[1540] + xx[1520] * xx[1541] +
    xx[1542] * xx[1543] + xx[1445] * xx[1510] + xx[1492] * xx[1533] + xx[1503] *
    xx[1534] + xx[618] * xx[1535] + xx[1436] * xx[1547];
  xx[2316] = xx[788];
  xx[2317] = xx[797];
  xx[2318] = xx[1500];
  xx[2319] = xx[1504];
  xx[2320] = xx[1595];
  xx[2321] = xx[1607];
  xx[2322] = xx[1592];
  xx[2323] = xx[1758];
  xx[2324] = xx[1766];
  xx[2325] = xx[1755];
  xx[2326] = xx[1894];
  xx[2327] = xx[1905];
  xx[2328] = xx[1519];
  xx[2329] = xx[322];
  xx[2330] = xx[788];
  xx[2331] = xx[140] * xx[155] - xx[149] * xx[156] - xx[150] * xx[157] - xx[151]
    * xx[940] + xx[1399] * xx[468] + xx[787] * xx[176] + xx[789] * xx[181] + xx
    [796] * xx[766] + xx[1429] * xx[177] + xx[1474] * xx[179] + xx[1476] * xx
    [765] + xx[1400] * xx[767] + xx[1401] * xx[1471];
  xx[335] = xx[168];
  xx[336] = xx[154];
  xx[337] = xx[161];
  xx[338] = xx[169];
  pm_math_quatInverseXform(xx + 335, xx + 39, xx + 155);
  xx[9] = xx[162] * xx[156] + xx[155] * xx[164];
  xx[176] = xx[155] - xx[18] * xx[9] * xx[164];
  xx[177] = xx[156] - xx[18] * xx[9] * xx[162];
  xx[9] = xx[157] + inputDot[6];
  xx[179] = xx[9] - (xx[162] * xx[9] * xx[162] + xx[9] * xx[164] * xx[164]) *
    xx[18];
  xx[181] = xx[179] + state[10];
  xx[327] = xx[176];
  xx[328] = xx[177];
  xx[329] = xx[181];
  xx[339] = xx[55] * xx[176];
  xx[340] = xx[56] * xx[177];
  xx[341] = xx[181] * xx[57];
  pm_math_cross3(xx + 327, xx + 339, xx + 549);
  pm_math_quatInverseXform(xx + 183, xx + 327, xx + 339);
  xx[188] = xx[58] * state[15];
  xx[244] = xx[58] * state[16];
  xx[254] = state[15] - (xx[58] * xx[188] - xx[59] * xx[244]) * xx[18];
  xx[256] = xx[339] + xx[254];
  xx[276] = state[16] - xx[18] * (xx[59] * xx[188] + xx[58] * xx[244]);
  xx[188] = xx[340] + xx[276];
  xx[244] = xx[341] + state[17];
  xx[765] = xx[256];
  xx[766] = xx[188];
  xx[767] = xx[244];
  xx[962] = xx[256] * xx[83];
  xx[963] = xx[188] * xx[84];
  xx[964] = xx[244] * xx[85];
  pm_math_cross3(xx + 765, xx + 962, xx + 1007);
  pm_math_quatInverseXform(xx + 193, xx + 765, xx + 962);
  xx[319] = xx[962] + state[22];
  xx[321] = xx[963] + state[23];
  xx[322] = xx[964] + state[24];
  xx[1010] = xx[319];
  xx[1011] = xx[321];
  xx[1012] = xx[322];
  xx[1061] = xx[319] * xx[55];
  xx[1062] = xx[321] * xx[56];
  xx[1063] = xx[322] * xx[57];
  pm_math_cross3(xx + 1010, xx + 1061, xx + 1070);
  pm_math_quatInverseXform(xx + 219, xx + 1010, xx + 1061);
  xx[325] = xx[200] * state[26];
  xx[332] = xx[1061] - xx[325];
  xx[345] = xx[206] * state[26];
  xx[384] = xx[1063] - xx[345];
  xx[1083] = xx[332];
  xx[1084] = xx[1062];
  xx[1085] = xx[384];
  xx[1093] = xx[332] * xx[507];
  xx[1094] = xx[420] * xx[1062];
  xx[1095] = xx[384] * xx[457];
  pm_math_cross3(xx + 1083, xx + 1093, xx + 1100);
  xx[420] = xx[1062] * xx[399];
  xx[423] = xx[332] * xx[399];
  xx[457] = xx[332] - (xx[363] * xx[420] + xx[423] * xx[399]) * xx[18];
  xx[465] = xx[1062] + xx[18] * (xx[363] * xx[423] - xx[420] * xx[399]);
  xx[420] = xx[384] - state[36];
  xx[1093] = xx[457];
  xx[1094] = xx[465];
  xx[1095] = xx[420];
  xx[1172] = xx[55] * xx[457];
  xx[1173] = xx[465] * xx[56];
  xx[1174] = xx[57] * xx[420];
  pm_math_cross3(xx + 1093, xx + 1172, xx + 1178);
  xx[423] = xx[1178] - xx[55] * xx[465] * state[36];
  xx[468] = xx[1179] + xx[56] * xx[457] * state[36];
  xx[507] = xx[468] * xx[399];
  xx[525] = xx[399] * xx[423];
  xx[549] = xx[423] + xx[18] * (xx[363] * xx[507] - xx[525] * xx[399]);
  pm_math_cross3(xx + 1083, xx + 1403, xx + 1093);
  pm_math_cross3(xx + 1083, xx + 1093, xx + 1172);
  xx[423] = xx[1173] * xx[399];
  xx[550] = xx[1172] * xx[399];
  xx[552] = xx[384] + xx[420];
  xx[420] = xx[463] * state[36];
  xx[555] = xx[398] * (xx[1172] - (xx[363] * xx[423] + xx[550] * xx[399]) * xx
                       [18] + xx[552] * xx[420]);
  xx[567] = xx[466] * state[36];
  xx[568] = (xx[552] * xx[567] + xx[1173] + xx[18] * (xx[363] * xx[550] - xx[423]
              * xx[399])) * xx[398];
  xx[423] = xx[466] * xx[555] - xx[463] * xx[568] - xx[1180];
  xx[463] = xx[423] / xx[357];
  xx[466] = xx[555] - xx[356] * xx[463];
  xx[550] = xx[568] + xx[401] * xx[463];
  xx[552] = xx[399] * xx[550];
  xx[593] = xx[399] * xx[466];
  xx[594] = xx[466] + xx[18] * (xx[363] * xx[552] - xx[593] * xx[399]);
  xx[466] = xx[550] - (xx[363] * xx[593] + xx[552] * xx[399]) * xx[18];
  xx[550] = (xx[1174] - ((xx[457] + xx[457]) * xx[420] + (xx[465] + xx[465]) *
              xx[567])) * xx[398];
  xx[1093] = xx[594];
  xx[1094] = xx[466];
  xx[1095] = xx[550];
  pm_math_cross3(xx + 1403, xx + 1093, xx + 1172);
  pm_math_quatInverseXform(xx + 407, xx + 1083, xx + 1093);
  xx[420] = xx[1095] - state[34];
  xx[1208] = xx[1093];
  xx[1209] = xx[1094];
  xx[1210] = xx[420];
  xx[1228] = xx[55] * xx[1093];
  xx[1229] = xx[56] * xx[1094];
  xx[1230] = xx[57] * xx[420];
  pm_math_cross3(xx + 1208, xx + 1228, xx + 1304);
  xx[457] = xx[1304] - xx[55] * xx[1094] * state[34];
  xx[465] = xx[1305] + xx[56] * xx[1093] * state[34];
  pm_math_cross3(xx + 1083, xx + 417, xx + 1208);
  pm_math_cross3(xx + 1083, xx + 1208, xx + 1228);
  pm_math_quatInverseXform(xx + 407, xx + 1228, xx + 1208);
  xx[552] = xx[1095] + xx[420];
  xx[420] = xx[394] * state[34];
  xx[567] = xx[398] * (xx[1208] + xx[552] * xx[420]);
  xx[593] = xx[411] * state[34];
  xx[616] = (xx[552] * xx[593] + xx[1209]) * xx[398];
  xx[552] = xx[411] * xx[567] - xx[394] * xx[616] - xx[1306];
  xx[656] = xx[552] / xx[351];
  xx[1228] = xx[457];
  xx[1229] = xx[465];
  xx[1230] = xx[1306] + xx[57] * xx[656];
  pm_math_quatXform(xx + 407, xx + 1228, xx + 1308);
  xx[661] = (xx[1210] - ((xx[1093] + xx[1093]) * xx[420] + (xx[1094] + xx[1094])
              * xx[593])) * xx[398];
  xx[1093] = xx[567] - xx[378] * xx[656];
  xx[1094] = xx[616] + xx[375] * xx[656];
  xx[1095] = xx[661];
  pm_math_quatXform(xx + 407, xx + 1093, xx + 1208);
  pm_math_cross3(xx + 417, xx + 1208, xx + 1093);
  pm_math_quatInverseXform(xx + 530, xx + 1083, xx + 1228);
  xx[420] = xx[1230] - state[32];
  xx[1342] = xx[1228];
  xx[1343] = xx[1229];
  xx[1344] = xx[420];
  xx[1363] = xx[55] * xx[1228];
  xx[1364] = xx[56] * xx[1229];
  xx[1365] = xx[57] * xx[420];
  pm_math_cross3(xx + 1342, xx + 1363, xx + 1439);
  xx[593] = xx[1439] - xx[55] * xx[1229] * state[32];
  xx[662] = xx[1440] + xx[56] * xx[1228] * state[32];
  pm_math_cross3(xx + 1083, xx + 541, xx + 1342);
  pm_math_cross3(xx + 1083, xx + 1342, xx + 1363);
  pm_math_quatInverseXform(xx + 530, xx + 1363, xx + 1342);
  xx[665] = xx[1230] + xx[420];
  xx[420] = xx[534] * state[32];
  xx[685] = xx[398] * (xx[1342] - xx[665] * xx[420]);
  xx[768] = xx[535] * state[32];
  xx[788] = (xx[665] * xx[768] + xx[1343]) * xx[398];
  xx[665] = xx[535] * xx[685] + xx[534] * xx[788] - xx[1441];
  xx[795] = xx[665] / xx[476];
  xx[1363] = xx[593];
  xx[1364] = xx[662];
  xx[1365] = xx[1441] + xx[57] * xx[795];
  pm_math_quatXform(xx + 530, xx + 1363, xx + 1464);
  xx[797] = ((xx[1228] + xx[1228]) * xx[420] - (xx[1229] + xx[1229]) * xx[768] +
             xx[1344]) * xx[398];
  xx[1228] = xx[685] - xx[498] * xx[795];
  xx[1229] = xx[788] - xx[501] * xx[795];
  xx[1230] = xx[797];
  pm_math_quatXform(xx + 530, xx + 1228, xx + 1342);
  pm_math_cross3(xx + 541, xx + 1342, xx + 1228);
  pm_math_quatInverseXform(xx + 620, xx + 1083, xx + 1363);
  xx[420] = xx[1365] + state[30];
  xx[1467] = xx[1363];
  xx[1468] = xx[1364];
  xx[1469] = xx[420];
  xx[1477] = xx[55] * xx[1363];
  xx[1478] = xx[56] * xx[1364];
  xx[1479] = xx[420] * xx[57];
  pm_math_cross3(xx + 1467, xx + 1477, xx + 1480);
  xx[768] = xx[1480] + xx[55] * xx[1364] * state[30];
  xx[798] = xx[1481] - xx[56] * xx[1363] * state[30];
  pm_math_cross3(xx + 1083, xx + 631, xx + 1467);
  pm_math_cross3(xx + 1083, xx + 1467, xx + 1477);
  pm_math_quatInverseXform(xx + 620, xx + 1477, xx + 1467);
  xx[810] = xx[1365] + xx[420];
  xx[420] = xx[625] * state[30];
  xx[812] = (xx[1468] - xx[810] * xx[420]) * xx[398];
  xx[843] = xx[624] * state[30];
  xx[844] = xx[398] * (xx[1467] - xx[810] * xx[843]);
  xx[810] = xx[1482] + xx[624] * xx[812] - xx[625] * xx[844];
  xx[865] = xx[810] / xx[240];
  xx[1477] = xx[768];
  xx[1478] = xx[798];
  xx[1479] = xx[1482] - xx[57] * xx[865];
  pm_math_quatXform(xx + 620, xx + 1477, xx + 1483);
  xx[910] = ((xx[1363] + xx[1363]) * xx[843] + (xx[1364] + xx[1364]) * xx[420] +
             xx[1469]) * xx[398];
  xx[1363] = xx[844] + xx[590] * xx[865];
  xx[1364] = xx[812] - xx[587] * xx[865];
  xx[1365] = xx[910];
  pm_math_quatXform(xx + 620, xx + 1363, xx + 1467);
  pm_math_cross3(xx + 631, xx + 1467, xx + 1363);
  xx[420] = xx[1062] * xx[210];
  xx[843] = xx[332] * xx[210];
  xx[915] = xx[332] - (xx[198] * xx[420] + xx[843] * xx[210]) * xx[18];
  xx[940] = xx[1062] + xx[18] * (xx[198] * xx[843] - xx[420] * xx[210]);
  xx[420] = xx[384] - state[28];
  xx[1477] = xx[915];
  xx[1478] = xx[940];
  xx[1479] = xx[420];
  xx[1489] = xx[55] * xx[915];
  xx[1490] = xx[940] * xx[56];
  xx[1491] = xx[57] * xx[420];
  pm_math_cross3(xx + 1477, xx + 1489, xx + 1499);
  xx[843] = xx[1499] - xx[55] * xx[940] * state[28];
  xx[945] = xx[1500] + xx[56] * xx[915] * state[28];
  xx[951] = xx[945] * xx[210];
  xx[1004] = xx[210] * xx[843];
  xx[1005] = xx[843] + xx[18] * (xx[198] * xx[951] - xx[1004] * xx[210]);
  pm_math_cross3(xx + 1083, xx + 249, xx + 1477);
  pm_math_cross3(xx + 1083, xx + 1477, xx + 1489);
  xx[843] = xx[1490] * xx[210];
  xx[1015] = xx[1489] * xx[210];
  xx[1043] = xx[384] + xx[420];
  xx[420] = xx[242] * state[28];
  xx[1079] = xx[398] * (xx[1489] - (xx[198] * xx[843] + xx[1015] * xx[210]) *
                        xx[18] + xx[1043] * xx[420]);
  xx[1083] = xx[239] * state[28];
  xx[1084] = (xx[1490] + xx[18] * (xx[198] * xx[1015] - xx[843] * xx[210]) - xx
              [1043] * xx[1083]) * xx[398];
  xx[843] = xx[239] * xx[1079] + xx[242] * xx[1084] + xx[1501];
  xx[239] = xx[843] / xx[331];
  xx[242] = xx[1079] - xx[330] * xx[239];
  xx[1015] = xx[1084] - xx[342] * xx[239];
  xx[1043] = xx[210] * xx[1015];
  xx[1085] = xx[210] * xx[242];
  xx[1086] = xx[242] + xx[18] * (xx[198] * xx[1043] - xx[1085] * xx[210]);
  xx[242] = xx[1015] - (xx[198] * xx[1085] + xx[1043] * xx[210]) * xx[18];
  xx[1015] = ((xx[940] + xx[940]) * xx[1083] - (xx[915] + xx[915]) * xx[420] +
              xx[1491]) * xx[398];
  xx[1477] = xx[1086];
  xx[1478] = xx[242];
  xx[1479] = xx[1015];
  pm_math_cross3(xx + 249, xx + 1477, xx + 1489);
  xx[1583] = xx[596];
  xx[1584] = xx[589];
  xx[1585] = xx[462];
  xx[1586] = xx[395];
  xx[1587] = xx[422];
  xx[1588] = xx[433];
  xx[1589] = xx[670];
  xx[1590] = xx[385];
  xx[1591] = xx[667];
  xx[385] = xx[1062] * xx[345];
  xx[395] = xx[1061] * xx[345] - xx[1063] * xx[325];
  xx[420] = xx[1062] * xx[325];
  xx[1477] = - xx[385];
  xx[1478] = xx[395];
  xx[1479] = xx[420];
  pm_math_matrix3x3Xform(xx + 1583, xx + 1477, xx + 1510);
  xx[1583] = - xx[334];
  xx[1584] = - xx[404];
  xx[1585] = - xx[403];
  xx[1586] = - xx[389];
  xx[1587] = - xx[648];
  xx[1588] = - xx[380];
  xx[1589] = xx[343];
  xx[1590] = xx[361];
  xx[1591] = - xx[377];
  pm_math_cross3(xx + 1010, xx + 556, xx + 1517);
  pm_math_cross3(xx + 1010, xx + 1517, xx + 1533);
  pm_math_quatInverseXform(xx + 219, xx + 1533, xx + 1010);
  xx[334] = xx[296] * state[26];
  xx[343] = xx[1010] + (xx[1063] + xx[384]) * xx[334];
  xx[361] = xx[1012] - (xx[1061] + xx[332]) * xx[334];
  xx[1061] = xx[343];
  xx[1062] = xx[1011];
  xx[1063] = xx[361];
  pm_math_matrix3x3Xform(xx + 1583, xx + 1061, xx + 1517);
  xx[332] = xx[1510] + xx[1517];
  xx[334] = xx[1100] + xx[549] + xx[1172] + xx[1308] + xx[1093] + xx[1464] + xx
    [1228] + xx[1483] + xx[1363] + xx[1005] + xx[1489] + xx[332];
  xx[377] = xx[1512] + xx[1519];
  xx[380] = xx[1102] + xx[1180] + xx[57] * xx[463] + xx[1174] + xx[1310] + xx
    [1095] + xx[1466] + xx[1230] + xx[1485] + xx[1365] + xx[1501] - xx[57] * xx
    [239] + xx[1491] + xx[377];
  pm_math_matrix3x3TransposeXform(xx + 1583, xx + 1477, xx + 1533);
  xx[1583] = xx[390];
  xx[1584] = xx[382];
  xx[1585] = xx[392];
  xx[1586] = xx[396];
  xx[1587] = xx[572];
  xx[1588] = xx[415];
  xx[1589] = xx[424];
  xx[1590] = xx[383];
  xx[1591] = xx[425];
  pm_math_matrix3x3Xform(xx + 1583, xx + 1061, xx + 382);
  xx[389] = xx[1534] + xx[383];
  xx[390] = xx[466] + xx[1209] + xx[1343] + xx[1468] + xx[242] + xx[389];
  xx[242] = (xx[334] * xx[200] + xx[380] * xx[206] + xx[390] * xx[296]) / xx[461];
  xx[392] = xx[468] - (xx[363] * xx[525] + xx[507] * xx[399]) * xx[18];
  xx[396] = xx[945] - (xx[198] * xx[1004] + xx[951] * xx[210]) * xx[18];
  xx[403] = xx[1511] + xx[1518];
  xx[1061] = xx[334] + xx[242] * xx[414];
  xx[1062] = xx[1101] + xx[392] + xx[1173] + xx[1309] + xx[1094] + xx[1465] +
    xx[1229] + xx[1484] + xx[1364] + xx[396] + xx[1490] + xx[403] + xx[518] *
    xx[242];
  xx[1063] = xx[380] - xx[381] * xx[242];
  pm_math_quatXform(xx + 219, xx + 1061, xx + 1093);
  xx[334] = xx[1533] + xx[382];
  xx[380] = xx[1535] + xx[384];
  xx[382] = xx[594] + xx[1208] + xx[1342] + xx[1467] + xx[1086] + xx[334] + xx
    [397] * xx[242];
  xx[383] = xx[390] + xx[442] * xx[242];
  xx[384] = xx[550] + xx[1210] + xx[1344] + xx[1469] + xx[1015] + xx[380] + xx
    [242] * xx[429];
  pm_math_quatXform(xx + 219, xx + 382, xx + 1061);
  pm_math_cross3(xx + 556, xx + 1061, xx + 382);
  xx[1583] = xx[391];
  xx[1584] = xx[434];
  xx[1585] = xx[456];
  xx[1586] = xx[504];
  xx[1587] = xx[512];
  xx[1588] = xx[519];
  xx[1589] = xx[506];
  xx[1590] = xx[447];
  xx[1591] = xx[524];
  xx[1085] = state[22];
  xx[1086] = state[23];
  xx[1087] = state[24];
  pm_math_cross3(xx + 962, xx + 1085, xx + 1172);
  pm_math_matrix3x3Xform(xx + 1583, xx + 1172, xx + 1208);
  xx[1583] = xx[436];
  xx[1584] = xx[393];
  xx[1585] = xx[421];
  xx[1586] = xx[513];
  xx[1587] = xx[440];
  xx[1588] = xx[443];
  xx[1589] = xx[521];
  xx[1590] = xx[460];
  xx[1591] = xx[508];
  xx[506] = xx[962] + xx[319];
  xx[507] = xx[963] + xx[321];
  xx[508] = xx[964] + xx[322];
  pm_math_cross3(xx + 1085, xx + 270, xx + 962);
  pm_math_cross3(xx + 506, xx + 962, xx + 1228);
  pm_math_cross3(xx + 765, xx + 449, xx + 506);
  pm_math_cross3(xx + 765, xx + 506, xx + 1308);
  pm_math_quatInverseXform(xx + 193, xx + 1308, xx + 506);
  xx[319] = xx[1228] + xx[506];
  xx[321] = xx[1229] + xx[507];
  xx[322] = xx[1230] + xx[508];
  xx[506] = xx[319];
  xx[507] = xx[321];
  xx[508] = xx[322];
  pm_math_matrix3x3Xform(xx + 1583, xx + 506, xx + 765);
  xx[390] = xx[1208] + xx[765];
  xx[391] = xx[1070] + xx[1093] + xx[382] + xx[390];
  pm_math_matrix3x3TransposeXform(xx + 1583, xx + 1172, xx + 1228);
  xx[1583] = xx[515];
  xx[1584] = xx[560];
  xx[1585] = xx[561];
  xx[1586] = xx[562];
  xx[1587] = xx[427];
  xx[1588] = xx[564];
  xx[1589] = xx[565];
  xx[1590] = xx[566];
  xx[1591] = xx[430];
  pm_math_matrix3x3Xform(xx + 1583, xx + 506, xx + 560);
  xx[393] = xx[1229] + xx[561];
  xx[404] = xx[1062] + xx[393];
  xx[415] = xx[1230] + xx[562];
  xx[421] = xx[1063] + xx[415];
  xx[422] = xx[1209] + xx[766];
  xx[424] = xx[1071] + xx[1094] + xx[383] + xx[422];
  xx[425] = xx[1228] + xx[560];
  xx[427] = xx[1061] + xx[425];
  xx[382] = xx[1210] + xx[767];
  xx[383] = xx[1072] + xx[1095] + xx[384] + xx[382];
  xx[506] = - (xx[391] - (xx[404] * xx[235] + xx[421] * xx[234]));
  xx[507] = - (xx[424] + xx[427] * xx[235] - xx[421] * xx[233]);
  xx[508] = - (xx[383] + xx[427] * xx[234] + xx[404] * xx[233]);
  solveSymmetricPosDef(xx + 597, xx + 506, 3, 1, xx + 560, xx + 564);
  xx[506] = xx[391] + xx[426] * xx[560] + xx[438] * xx[561] + xx[459] * xx[562];
  xx[507] = xx[424] + xx[505] * xx[560] + xx[511] * xx[561] + xx[520] * xx[562];
  xx[508] = xx[383] + xx[545] * xx[560] + xx[448] * xx[561] + xx[526] * xx[562];
  pm_math_quatXform(xx + 193, xx + 506, xx + 564);
  xx[506] = xx[427] + xx[253] * xx[560] + xx[516] * xx[561] + xx[514] * xx[562];
  xx[507] = xx[404] + xx[428] * xx[560] + xx[441] * xx[561] + xx[503] * xx[562];
  xx[508] = xx[421] + xx[432] * xx[560] + xx[444] * xx[561] + xx[509] * xx[562];
  pm_math_quatXform(xx + 193, xx + 506, xx + 765);
  pm_math_cross3(xx + 449, xx + 765, xx + 506);
  xx[1583] = xx[333];
  xx[1584] = xx[609];
  xx[1585] = xx[769];
  xx[1586] = xx[669];
  xx[1587] = xx[672];
  xx[1588] = xx[771];
  xx[1589] = xx[182];
  xx[1590] = xx[262];
  xx[1591] = xx[719];
  xx[1061] = xx[254];
  xx[1062] = xx[276];
  xx[1063] = state[17];
  pm_math_cross3(xx + 339, xx + 1061, xx + 1093);
  pm_math_matrix3x3Xform(xx + 1583, xx + 1093, xx + 1208);
  xx[1228] = xx[339] + xx[256];
  xx[1229] = xx[340] + xx[188];
  xx[1230] = xx[341] + xx[244];
  pm_math_cross3(xx + 1061, xx + 74, xx + 339);
  pm_math_cross3(xx + 1228, xx + 339, xx + 1308);
  pm_math_cross3(xx + 327, xx + 282, xx + 1228);
  pm_math_cross3(xx + 327, xx + 1228, xx + 1342);
  pm_math_quatInverseXform(xx + 183, xx + 1342, xx + 327);
  xx[182] = xx[1308] + xx[327];
  xx[188] = xx[1309] + xx[328];
  xx[244] = xx[1310] + xx[329];
  xx[327] = xx[182];
  xx[328] = xx[188];
  xx[329] = xx[244];
  pm_math_matrix3x3Xform(xx + 674, xx + 327, xx + 1228);
  xx[256] = xx[1208] + xx[1228];
  xx[262] = xx[1007] + xx[564] + xx[506] + xx[256];
  xx[333] = xx[1209] + xx[1229];
  xx[383] = xx[1008] + xx[565] + xx[507] + xx[333];
  pm_math_matrix3x3TransposeXform(xx + 674, xx + 1093, xx + 1308);
  pm_math_matrix3x3Xform(xx + 746, xx + 327, xx + 674);
  xx[327] = xx[1308] + xx[674];
  xx[328] = xx[765] + xx[327];
  xx[329] = xx[1309] + xx[675];
  xx[384] = xx[766] + xx[329];
  xx[391] = xx[1310] + xx[676];
  xx[404] = xx[767] + xx[391];
  xx[674] = xx[328];
  xx[675] = xx[384];
  xx[676] = xx[404];
  xx[421] = xx[1210] + xx[1230];
  xx[424] = xx[1009] + xx[566] + xx[508] + xx[421];
  xx[506] = - (xx[262] - xx[383] * xx[94] + pm_math_dot3(xx + 116, xx + 674));
  xx[507] = - (xx[262] * xx[94] + xx[383] + pm_math_dot3(xx + 758, xx + 674));
  xx[508] = - (xx[424] + xx[384] * xx[72] - xx[328] * xx[73]);
  solveSymmetricPosDef(xx + 778, xx + 506, 3, 1, xx + 564, xx + 674);
  xx[506] = xx[262] + xx[668] * xx[564] + xx[697] * xx[565] + xx[770] * xx[566];
  xx[507] = xx[383] + xx[692] * xx[564] + xx[700] * xx[565] + xx[772] * xx[566];
  xx[508] = xx[424] + xx[278] * xx[564] + xx[452] * xx[565] + xx[720] * xx[566];
  pm_math_quatXform(xx + 183, xx + 506, xx + 674);
  xx[506] = xx[328] + xx[698] * xx[564] + xx[728] * xx[565] + xx[773] * xx[566];
  xx[507] = xx[384] + xx[699] * xx[564] + xx[732] * xx[565] + xx[774] * xx[566];
  xx[508] = xx[404] + xx[695] * xx[564] + xx[764] * xx[565] + xx[775] * xx[566];
  pm_math_quatXform(xx + 183, xx + 506, xx + 677);
  pm_math_cross3(xx + 282, xx + 677, xx + 506);
  xx[262] = xx[177] * state[10];
  xx[328] = xx[176] * state[10];
  xx[383] = xx[825] - xx[870];
  xx[384] = xx[826] - xx[873];
  xx[404] = xx[828] - xx[871];
  xx[424] = xx[829] - xx[874];
  xx[427] = xx[833] - xx[878];
  xx[746] = xx[383];
  xx[747] = xx[384];
  xx[748] = xx[827] - xx[876];
  xx[749] = xx[404];
  xx[750] = xx[424];
  xx[751] = xx[830] - xx[877];
  xx[752] = xx[180];
  xx[753] = xx[612];
  xx[754] = xx[427];
  xx[679] = xx[155];
  xx[680] = xx[156];
  xx[681] = xx[9];
  xx[180] = xx[281] * xx[164] - xx[285] * xx[162];
  xx[430] = xx[281] - xx[18] * xx[180] * xx[164];
  xx[433] = 0.0319404536709563 - xx[430];
  xx[434] = xx[285] + xx[18] * xx[180] * xx[162];
  xx[180] = 1.587500000000011e-3;
  xx[436] = 7.175000002356807e-3;
  xx[765] = xx[433];
  xx[766] = xx[434];
  xx[767] = xx[180] - ((xx[162] * xx[436] * xx[162] + xx[436] * xx[164] * xx[164])
                       * xx[18] - xx[436]);
  pm_math_cross3(xx + 679, xx + 765, xx + 825);
  pm_math_cross3(xx + 679, xx + 825, xx + 828);
  xx[436] = xx[162] * xx[829] + xx[828] * xx[164];
  xx[440] = xx[179] + xx[181];
  xx[179] = xx[281] * state[10];
  xx[181] = xx[828] - xx[18] * xx[436] * xx[164] + xx[440] * xx[179];
  xx[443] = xx[285] * state[10];
  xx[447] = xx[829] - xx[18] * xx[436] * xx[162] - xx[440] * xx[443];
  xx[436] = (xx[177] + xx[177]) * xx[443] - (xx[176] + xx[176]) * xx[179] + xx
    [830] - (xx[162] * xx[162] * xx[830] + xx[830] * xx[164] * xx[164]) * xx[18];
  xx[679] = xx[181];
  xx[680] = xx[447];
  xx[681] = xx[436];
  pm_math_matrix3x3Xform(xx + 746, xx + 679, xx + 825);
  xx[176] = xx[262] * (xx[822] - xx[858] - xx[854] - xx[885]) - xx[328] * (xx
    [823] - xx[859] - xx[857] - xx[886]) + xx[827];
  xx[746] = xx[647];
  xx[747] = xx[862];
  xx[748] = xx[863];
  xx[749] = xx[864];
  xx[750] = xx[658];
  xx[751] = xx[866];
  xx[752] = xx[867];
  xx[753] = xx[868];
  xx[754] = xx[398] + xx[869];
  pm_math_matrix3x3Xform(xx + 746, xx + 679, xx + 825);
  xx[177] = xx[262] * xx[383] - xx[328] * xx[404] + xx[825];
  xx[179] = xx[262] * xx[384] - xx[328] * xx[424] + xx[826];
  xx[679] = (xx[818] - xx[854] - xx[858] - xx[881] - (xx[285] * xx[383] + xx[281]
              * xx[384])) / xx[660];
  xx[680] = (xx[821] - xx[857] - xx[859] - xx[884] - (xx[285] * xx[404] + xx[281]
              * xx[424])) / xx[660];
  xx[681] = xx[615] / xx[660];
  xx[746] = xx[24];
  xx[747] = xx[28];
  xx[748] = xx[32];
  pm_math_cross3(xx + 39, xx + 746, xx + 749);
  xx[746] = - xx[15];
  xx[747] = - xx[30];
  xx[748] = xx[38];
  xx[752] = xx[5];
  xx[753] = xx[29];
  xx[754] = xx[33];
  pm_math_cross3(xx + 746, xx + 752, xx + 28);
  xx[5] = xx[749] + xx[28];
  xx[816] = xx[7];
  xx[817] = xx[4];
  xx[818] = xx[20];
  xx[819] = - xx[22];
  pm_math_quatXform(xx + 816, xx + 25, xx + 746);
  xx[4] = xx[750] + xx[29];
  xx[7] = xx[751] + xx[30];
  xx[24] = xx[23] * inputDdot[3] - xx[5] + xx[746] * inputDdot[4] - xx[17] *
    inputDdot[5];
  xx[25] = xx[16] * inputDdot[3] - xx[4] + xx[747] * inputDdot[4] - xx[19] *
    inputDdot[5];
  xx[26] = xx[31] * inputDdot[3] - xx[7] + xx[748] * inputDdot[4] + xx[21] *
    inputDdot[5];
  pm_math_quatInverseXform(xx + 335, xx + 24, xx + 19);
  xx[15] = xx[19] + xx[156] * inputDot[6];
  xx[17] = xx[20] - xx[155] * inputDot[6];
  xx[22] = xx[162] * xx[17] + xx[15] * xx[164];
  xx[27] = xx[15] - xx[18] * xx[22] * xx[164];
  xx[28] = xx[17] - xx[18] * xx[22] * xx[162];
  xx[19] = xx[21] + inputDdot[6];
  xx[20] = xx[19] - (xx[162] * xx[19] * xx[162] + xx[19] * xx[164] * xx[164]) *
    xx[18];
  xx[749] = xx[27];
  xx[750] = xx[28];
  xx[751] = xx[20];
  xx[752] = xx[657] / xx[660];
  xx[753] = xx[659] / xx[660];
  xx[754] = (xx[427] - (xx[285] * xx[867] + xx[281] * xx[868])) / xx[660];
  xx[657] = inputDdot[0];
  xx[658] = 1.77635683940025e-15 + inputDdot[1];
  xx[659] = inputDdot[2] - 9.806650000000001;
  pm_math_quatInverseXform(xx + 34, xx + 657, xx + 816);
  xx[32] = 2.651074505488933e-6;
  xx[33] = - 0.01576192360860613;
  xx[34] = 1.370770141144085e-6;
  pm_math_cross3(xx + 32, xx + 39, xx + 35);
  pm_math_cross3(xx + 39, xx + 35, xx + 657);
  xx[35] = - xx[5];
  xx[36] = - xx[4];
  xx[37] = - xx[7];
  pm_math_cross3(xx + 32, xx + 35, xx + 819);
  xx[35] = xx[23];
  xx[36] = xx[16];
  xx[37] = xx[31];
  pm_math_cross3(xx + 32, xx + 35, xx + 21);
  pm_math_cross3(xx + 32, xx + 746, xx + 29);
  xx[4] = xx[816] + xx[657] + xx[819] + xx[21] * inputDdot[3] + xx[29] *
    inputDdot[4] - 0.01564891801447194 * inputDdot[5];
  xx[5] = 1.5875e-3;
  xx[7] = xx[5] * xx[161];
  xx[16] = 0.02520954632904373;
  xx[32] = xx[169] * xx[16];
  xx[33] = xx[154] * xx[5] - xx[32];
  xx[34] = xx[16] * xx[161];
  xx[35] = - xx[7];
  xx[36] = xx[33];
  xx[37] = xx[34];
  pm_math_cross3(xx + 289, xx + 35, xx + 746);
  xx[35] = xx[34] * xx[168];
  xx[36] = - (0.06820673750794114 + (xx[746] - xx[7] * xx[168]) * xx[18] - xx[16]);
  xx[37] = 0.02992188481855372 - (xx[33] * xx[168] + xx[747]) * xx[18];
  xx[38] = 0.1412955924490354 - (xx[18] * (xx[748] + xx[35]) - xx[5]);
  pm_math_cross3(xx + 24, xx + 36, xx + 746);
  xx[7] = xx[817] + xx[658] + xx[820] + xx[22] * inputDdot[3] + xx[30] *
    inputDdot[4] - 2.795917064855786e-6 * inputDdot[5];
  xx[21] = xx[818] + xx[659] + xx[821] + xx[23] * inputDdot[3] + xx[31] *
    inputDdot[4] - 1.884038416131979e-3 * inputDdot[5];
  xx[29] = xx[4] + xx[746];
  xx[30] = xx[7] + xx[747];
  xx[31] = xx[21] + xx[748];
  pm_math_quatInverseXform(xx + 335, xx + 29, xx + 657);
  pm_math_cross3(xx + 39, xx + 36, xx + 29);
  pm_math_cross3(xx + 39, xx + 29, xx + 36);
  pm_math_quatInverseXform(xx + 335, xx + 36, xx + 29);
  xx[22] = xx[16] * inputDot[6];
  xx[36] = xx[15];
  xx[37] = xx[17];
  xx[38] = xx[19];
  pm_math_cross3(xx + 36, xx + 765, xx + 746);
  xx[15] = xx[657] + xx[29] - (xx[157] + xx[9]) * xx[22] + xx[746];
  xx[9] = xx[658] + xx[30] + xx[16] * inputDdot[6] + xx[747];
  xx[17] = xx[9] * xx[162] + xx[15] * xx[164];
  xx[19] = xx[15] - xx[18] * xx[17] * xx[164];
  xx[15] = xx[9] - xx[18] * xx[17] * xx[162];
  xx[9] = xx[659] + (xx[155] + xx[155]) * xx[22] + xx[31] + xx[748];
  xx[17] = xx[9] - (xx[162] * xx[9] * xx[162] + xx[9] * xx[164] * xx[164]) * xx
    [18];
  xx[29] = xx[19];
  xx[30] = xx[15];
  xx[31] = xx[17];
  xx[9] = pm_math_dot3(xx + 679, xx + 749) + pm_math_dot3(xx + 752, xx + 29);
  xx[22] = (xx[551] + xx[676] + xx[508] + xx[176] - ((xx[677] + xx[177]) * xx
             [285] + (xx[678] + xx[179]) * xx[281])) / xx[660] + xx[9];
  xx[23] = xx[18] * xx[472] * state[28] * state[28];
  xx[29] = xx[314] * xx[315];
  xx[30] = xx[313] * xx[316];
  xx[31] = xx[18] * (xx[29] - xx[30]);
  xx[33] = xx[576] * state[28] * state[28];
  xx[36] = xx[313] * xx[313];
  xx[37] = (xx[36] + xx[314] * xx[314]) * xx[18] - xx[3];
  xx[38] = xx[309] * xx[309];
  xx[155] = xx[310] * xx[311];
  xx[156] = xx[309] * xx[312];
  xx[157] = xx[310] * xx[312];
  xx[383] = xx[309] * xx[311];
  xx[384] = xx[311] * xx[312];
  xx[404] = xx[309] * xx[310];
  xx[674] = (xx[38] + xx[310] * xx[310]) * xx[18] - xx[3];
  xx[675] = xx[18] * (xx[155] - xx[156]);
  xx[676] = (xx[157] + xx[383]) * xx[18];
  xx[677] = (xx[155] + xx[156]) * xx[18];
  xx[678] = (xx[38] + xx[311] * xx[311]) * xx[18] - xx[3];
  xx[679] = xx[18] * (xx[384] - xx[404]);
  xx[680] = xx[18] * (xx[157] - xx[383]);
  xx[681] = (xx[384] + xx[404]) * xx[18];
  xx[682] = (xx[38] + xx[312] * xx[312]) * xx[18] - xx[3];
  xx[38] = xx[345] * xx[431] - xx[471] * xx[325];
  xx[155] = xx[500] * xx[345] - xx[522] * xx[325];
  xx[156] = xx[528] * xx[345] - xx[325] * xx[437];
  xx[746] = - (xx[345] * xx[38]);
  xx[747] = - (xx[439] * xx[345] * xx[345] + xx[439] * xx[325] * xx[325]);
  xx[748] = xx[325] * xx[38];
  xx[749] = - (xx[345] * xx[155]);
  xx[750] = - (xx[345] * xx[435] * xx[345] + xx[325] * xx[435] * xx[325]);
  xx[751] = xx[325] * xx[155];
  xx[752] = - (xx[345] * xx[156]);
  xx[753] = - (xx[445] * xx[345] * xx[345] + xx[445] * xx[325] * xx[325]);
  xx[754] = xx[325] * xx[156];
  pm_math_matrix3x3Compose(xx + 674, xx + 746, xx + 816);
  xx[38] = xx[305] * xx[305];
  xx[155] = xx[306] * xx[307];
  xx[156] = xx[305] * xx[308];
  xx[157] = xx[306] * xx[308];
  xx[383] = xx[305] * xx[307];
  xx[384] = xx[307] * xx[308];
  xx[404] = xx[305] * xx[306];
  xx[674] = (xx[38] + xx[306] * xx[306]) * xx[18] - xx[3];
  xx[675] = xx[18] * (xx[155] - xx[156]);
  xx[676] = (xx[157] + xx[383]) * xx[18];
  xx[677] = (xx[155] + xx[156]) * xx[18];
  xx[678] = (xx[38] + xx[307] * xx[307]) * xx[18] - xx[3];
  xx[679] = xx[18] * (xx[384] - xx[404]);
  xx[680] = xx[18] * (xx[157] - xx[383]);
  xx[681] = (xx[384] + xx[404]) * xx[18];
  xx[682] = (xx[38] + xx[308] * xx[308]) * xx[18] - xx[3];
  xx[38] = xx[455] * state[24] + xx[610] * state[22];
  xx[155] = xx[455] * state[23] - xx[607] * state[22];
  xx[156] = xx[607] * state[24] + xx[610] * state[23];
  xx[157] = xx[611] * state[24] + xx[613] * state[22];
  xx[383] = xx[611] * state[23] + xx[546] * state[22];
  xx[384] = xx[546] * state[24] - xx[613] * state[23];
  xx[404] = xx[547] * state[22] - xx[614] * state[24];
  xx[424] = xx[614] * state[23] - xx[608] * state[22];
  xx[427] = xx[608] * state[24] - xx[547] * state[23];
  xx[852] = - (xx[38] * state[24] + xx[155] * state[23]);
  xx[853] = xx[155] * state[22] - xx[156] * state[24];
  xx[854] = xx[156] * state[23] + xx[38] * state[22];
  xx[855] = xx[157] * state[24] + xx[383] * state[23];
  xx[856] = - (xx[384] * state[24] + xx[383] * state[22]);
  xx[857] = xx[384] * state[23] - xx[157] * state[22];
  xx[858] = xx[404] * state[24] - xx[424] * state[23];
  xx[859] = xx[424] * state[22] - xx[427] * state[24];
  xx[860] = xx[427] * state[23] - xx[404] * state[22];
  pm_math_matrix3x3Compose(xx + 674, xx + 852, xx + 876);
  xx[38] = xx[201] * xx[201];
  xx[674] = (xx[38] + xx[563]) * xx[18] - xx[3];
  xx[675] = xx[529];
  xx[676] = (xx[548] + xx[544]) * xx[18];
  xx[677] = (xx[523] + xx[527]) * xx[18];
  xx[678] = (xx[38] + xx[446]) * xx[18] - xx[3];
  xx[679] = xx[639];
  xx[680] = xx[592];
  xx[681] = (xx[570] + xx[634]) * xx[18];
  xx[682] = (xx[38] + xx[510]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 876, xx + 674, xx + 1583);
  xx[38] = xx[279] * xx[279];
  xx[155] = xx[171] * xx[279];
  xx[156] = xx[158] * xx[170];
  xx[157] = xx[171] * xx[158];
  xx[383] = xx[279] * xx[170];
  xx[384] = xx[171] * xx[170];
  xx[404] = xx[158] * xx[279];
  xx[1761] = (xx[38] + xx[158] * xx[158]) * xx[18] - xx[3];
  xx[1762] = xx[18] * (xx[155] - xx[156]);
  xx[1763] = - ((xx[157] + xx[383]) * xx[18]);
  xx[1764] = - ((xx[156] + xx[155]) * xx[18]);
  xx[1765] = (xx[38] + xx[170] * xx[170]) * xx[18] - xx[3];
  xx[1766] = xx[18] * (xx[384] - xx[404]);
  xx[1767] = xx[18] * (xx[383] - xx[157]);
  xx[1768] = (xx[384] + xx[404]) * xx[18];
  xx[1769] = (xx[38] + xx[171] * xx[171]) * xx[18] - xx[3];
  xx[38] = xx[683] * xx[254] - xx[261] * state[17];
  xx[155] = xx[276] * xx[261] - xx[595] * xx[254];
  xx[156] = xx[276] * xx[683] - xx[595] * state[17];
  xx[157] = xx[684] * state[17] - xx[687] * xx[254];
  xx[158] = xx[276] * xx[684] - xx[254] * xx[453];
  xx[170] = xx[453] * state[17] - xx[276] * xx[687];
  xx[171] = xx[254] * xx[454] - xx[688] * state[17];
  xx[261] = xx[276] * xx[688] - xx[664] * xx[254];
  xx[279] = xx[664] * state[17] - xx[276] * xx[454];
  xx[1949] = xx[38] * state[17] - xx[276] * xx[155];
  xx[1950] = xx[156] * state[17] + xx[155] * xx[254];
  xx[1951] = - (xx[276] * xx[156] + xx[254] * xx[38]);
  xx[1952] = - (xx[157] * state[17] + xx[276] * xx[158]);
  xx[1953] = xx[254] * xx[158] - xx[170] * state[17];
  xx[1954] = xx[276] * xx[170] + xx[157] * xx[254];
  xx[1955] = xx[171] * state[17] - xx[276] * xx[261];
  xx[1956] = xx[254] * xx[261] - xx[279] * state[17];
  xx[1957] = xx[276] * xx[279] - xx[254] * xx[171];
  pm_math_matrix3x3Compose(xx + 1761, xx + 1949, xx + 2027);
  xx[38] = xx[211] * xx[211];
  xx[155] = xx[212] * xx[213];
  xx[1761] = (xx[38] + xx[805]) * xx[18] - xx[3];
  xx[1762] = xx[18] * (xx[155] - xx[727]);
  xx[1763] = (xx[722] + xx[723]) * xx[18];
  xx[1764] = (xx[155] + xx[727]) * xx[18];
  xx[1765] = (xx[38] + xx[806]) * xx[18] - xx[3];
  xx[1766] = xx[18] * (xx[804] - xx[803]);
  xx[1767] = xx[802];
  xx[1768] = (xx[804] + xx[803]) * xx[18];
  xx[1769] = (xx[38] + xx[214] * xx[214]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 2027, xx + 1761, xx + 2050);
  xx[38] = xx[215] * xx[215];
  xx[155] = (xx[38] + xx[228]) * xx[18] - xx[3];
  xx[156] = xx[154] * xx[161];
  xx[157] = xx[169] * xx[168];
  xx[158] = xx[156] - xx[157];
  xx[170] = xx[18] * xx[158];
  xx[171] = xx[162] * xx[164];
  xx[228] = xx[18] * xx[171] * state[10] * state[10];
  xx[254] = xx[18] * xx[162] * xx[162] - xx[3];
  xx[261] = xx[254] * state[10] * state[10];
  xx[276] = xx[168] * xx[168];
  xx[279] = (xx[276] + xx[154] * xx[154]) * xx[18] - xx[3];
  xx[383] = xx[170] * xx[228] - xx[261] * xx[279];
  xx[384] = xx[216] * xx[217];
  xx[404] = xx[215] * xx[218];
  xx[424] = (xx[384] + xx[404]) * xx[18];
  xx[427] = xx[18] * xx[164] * xx[164] - xx[3];
  xx[431] = xx[427] * state[10] * state[10];
  xx[435] = xx[228] * xx[279] - xx[170] * xx[431];
  xx[437] = xx[279] * inputDot[6] * inputDot[6];
  xx[439] = xx[217] * xx[164] - xx[162] * xx[216];
  xx[440] = xx[439] * xx[439];
  xx[443] = xx[218] * xx[164] - xx[162] * xx[215];
  xx[445] = xx[443] * xx[443];
  xx[446] = (xx[440] + xx[445]) * xx[18] - xx[3];
  xx[453] = xx[18] * xx[158] * inputDot[6] * inputDot[6];
  xx[158] = xx[215] * xx[164] + xx[162] * xx[218];
  xx[454] = xx[158] * xx[443];
  xx[456] = xx[162] * xx[217] + xx[216] * xx[164];
  xx[460] = xx[456] * xx[439];
  xx[462] = (xx[454] + xx[460]) * xx[18];
  xx[521] = - xx[439];
  xx[522] = xx[443];
  xx[523] = xx[158];
  xx[524] = - xx[456];
  pm_math_quatCompose(xx + 335, xx + 521, xx + 802);
  xx[466] = xx[802] * xx[802];
  xx[468] = xx[803] * xx[804];
  xx[471] = xx[802] * xx[805];
  xx[472] = xx[803] * xx[805];
  xx[500] = xx[802] * xx[804];
  xx[504] = xx[804] * xx[805];
  xx[506] = xx[802] * xx[803];
  xx[2332] = (xx[466] + xx[803] * xx[803]) * xx[18] - xx[3];
  xx[2333] = xx[18] * (xx[468] - xx[471]);
  xx[2334] = (xx[472] + xx[500]) * xx[18];
  xx[2335] = (xx[468] + xx[471]) * xx[18];
  xx[2336] = (xx[466] + xx[804] * xx[804]) * xx[18] - xx[3];
  xx[2337] = xx[18] * (xx[504] - xx[506]);
  xx[2338] = xx[18] * (xx[472] - xx[500]);
  xx[2339] = (xx[504] + xx[506]) * xx[18];
  xx[2340] = (xx[466] + xx[805] * xx[805]) * xx[18] - xx[3];
  xx[466] = xx[158] * inputDot[6];
  xx[468] = xx[443] * inputDot[6];
  xx[506] = xx[18] * (xx[466] * xx[439] - xx[456] * xx[468]);
  xx[507] = - ((xx[468] * xx[439] + xx[456] * xx[466]) * xx[18]);
  xx[508] = inputDot[6] - (xx[468] * xx[443] + xx[158] * xx[466]) * xx[18];
  pm_math_matrix3x3PostCross(xx + 2332, xx + 506, xx + 2341);
  xx[466] = xx[216] * state[10];
  xx[468] = xx[217] * state[10];
  xx[471] = xx[18] * (xx[218] * xx[466] - xx[215] * xx[468]);
  pm_math_quatInverseXform(xx + 211, xx + 1061, xx + 506);
  pm_math_quatInverseXform(xx + 201, xx + 1085, xx + 211);
  xx[201] = xx[325] * xx[210];
  xx[202] = xx[18] * xx[201] * xx[210] - xx[325];
  xx[203] = xx[211] + xx[202];
  xx[204] = xx[506] + xx[203];
  xx[214] = (xx[215] * xx[466] + xx[218] * xx[468]) * xx[18];
  xx[215] = xx[18] * xx[198] * xx[201];
  xx[201] = xx[212] - xx[215];
  xx[472] = xx[507] + xx[201];
  xx[500] = state[10] - (xx[216] * xx[466] + xx[217] * xx[468]) * xx[18];
  xx[216] = xx[345] + state[28];
  xx[217] = xx[213] - xx[216];
  xx[466] = xx[508] + xx[217];
  xx[521] = xx[471] + xx[204];
  xx[522] = xx[214] + xx[472];
  xx[523] = xx[500] + xx[466];
  pm_math_matrix3x3PostCross(xx + 2341, xx + 521, xx + 2332);
  xx[468] = xx[154] * xx[169];
  xx[504] = xx[168] * xx[161];
  xx[510] = xx[156] + xx[157];
  xx[156] = xx[510] * xx[18];
  xx[157] = (xx[276] + xx[161] * xx[161]) * xx[18] - xx[3];
  xx[512] = xx[169] * xx[161];
  xx[513] = xx[154] * xx[168];
  xx[515] = xx[468] - xx[504];
  xx[519] = xx[18] * xx[515];
  xx[521] = xx[512] + xx[513];
  xx[522] = xx[521] * xx[18];
  xx[2341] = xx[279];
  xx[2342] = xx[170];
  xx[2343] = (xx[468] + xx[504]) * xx[18];
  xx[2344] = xx[156];
  xx[2345] = xx[157];
  xx[2346] = xx[18] * (xx[512] - xx[513]);
  xx[2347] = xx[519];
  xx[2348] = xx[522];
  xx[2349] = (xx[276] + xx[169] * xx[169]) * xx[18] - xx[3];
  xx[170] = xx[18] * (xx[454] - xx[460]);
  xx[276] = xx[456] * xx[443];
  xx[279] = xx[158] * xx[439];
  xx[454] = (xx[276] + xx[279]) * xx[18];
  xx[460] = xx[158] * xx[158];
  xx[468] = (xx[440] + xx[460]) * xx[18] - xx[3];
  xx[504] = xx[439] * xx[443];
  xx[439] = xx[456] * xx[158];
  xx[158] = xx[18] * (xx[504] - xx[439]);
  xx[443] = xx[18] * (xx[279] - xx[276]);
  xx[2350] = xx[446];
  xx[2351] = xx[170];
  xx[2352] = - xx[454];
  xx[2353] = xx[462];
  xx[2354] = xx[468];
  xx[2355] = xx[158];
  xx[2356] = xx[443];
  xx[2357] = - ((xx[439] + xx[504]) * xx[18]);
  xx[2358] = (xx[440] + xx[456] * xx[456]) * xx[18] - xx[3];
  xx[523] = xx[471];
  xx[524] = xx[214];
  xx[525] = xx[500];
  pm_math_matrix3x3PostCross(xx + 2350, xx + 523, xx + 2359);
  xx[523] = xx[204];
  xx[524] = xx[472];
  xx[525] = xx[466];
  pm_math_matrix3x3PostCross(xx + 2359, xx + 523, xx + 2350);
  xx[204] = xx[18] * (xx[384] - xx[404]);
  xx[214] = (xx[223] + xx[224]) * xx[18];
  xx[223] = (xx[38] + xx[229]) * xx[18] - xx[3];
  xx[224] = xx[18] * (xx[227] - xx[226]);
  xx[2359] = xx[155];
  xx[2360] = xx[204];
  xx[2361] = xx[214];
  xx[2362] = xx[424];
  xx[2363] = xx[223];
  xx[2364] = xx[224];
  xx[2365] = xx[225];
  xx[2366] = (xx[227] + xx[226]) * xx[18];
  xx[2367] = (xx[38] + xx[218] * xx[218]) * xx[18] - xx[3];
  pm_math_matrix3x3PostCross(xx + 2359, xx + 506, xx + 2368);
  xx[225] = xx[203];
  xx[226] = xx[201];
  xx[227] = xx[217];
  pm_math_matrix3x3PostCross(xx + 2368, xx + 225, xx + 2359);
  pm_math_matrix3x3PostCross(xx + 1761, xx + 211, xx + 2368);
  xx[38] = - xx[215];
  xx[211] = xx[202];
  xx[212] = xx[38];
  xx[213] = - xx[216];
  pm_math_matrix3x3PostCross(xx + 2368, xx + 211, xx + 1761);
  xx[201] = - xx[345];
  xx[211] = xx[202];
  xx[212] = xx[38];
  xx[213] = xx[201];
  pm_math_matrix3x3PostCross(xx + 674, xx + 211, xx + 2368);
  xx[38] = xx[2375] * state[28];
  xx[202] = xx[2369] * state[28];
  xx[203] = xx[2372] * state[28];
  xx[211] = xx[2368] * state[28];
  xx[212] = xx[2371] * state[28];
  xx[213] = xx[2374] * state[28];
  xx[674] = xx[1761] + xx[38] * xx[610] - (xx[202] * xx[455] + xx[607] * xx[203]);
  xx[675] = xx[1762] + xx[211] * xx[455] + xx[607] * xx[212] - xx[213] * xx[610];
  xx[676] = xx[1763];
  xx[677] = xx[1764] + xx[202] * xx[611] - xx[203] * xx[546] - xx[613] * xx[38];
  xx[678] = xx[1765] + xx[212] * xx[546] - xx[211] * xx[611] + xx[613] * xx[213];
  xx[679] = xx[1766];
  xx[680] = xx[1767] - (xx[614] * xx[202] + xx[203] * xx[608] + xx[38] * xx[547]);
  xx[681] = xx[1768] + xx[614] * xx[211] + xx[212] * xx[608] + xx[213] * xx[547];
  xx[682] = xx[1769];
  pm_math_matrix3x3Compose(xx + 737, xx + 674, xx + 1761);
  xx[38] = xx[2359] + xx[1761];
  xx[202] = xx[2362] + xx[1764];
  xx[203] = xx[18] * xx[171];
  xx[171] = xx[2360] + xx[1762];
  xx[211] = xx[2363] + xx[1765];
  xx[212] = xx[2361] + xx[1763];
  xx[213] = xx[2364] + xx[1766];
  xx[674] = xx[2350] + xx[38] * xx[254] - xx[202] * xx[203];
  xx[675] = xx[2351] + xx[171] * xx[254] - xx[211] * xx[203];
  xx[676] = xx[2352] + xx[212] * xx[254] - xx[213] * xx[203];
  xx[677] = xx[2353] + xx[202] * xx[427] - xx[38] * xx[203];
  xx[678] = xx[2354] + xx[211] * xx[427] - xx[171] * xx[203];
  xx[679] = xx[2355] + xx[213] * xx[427] - xx[212] * xx[203];
  xx[680] = xx[2356] - (xx[2365] + xx[1767]);
  xx[681] = xx[2357] - (xx[2366] + xx[1768]);
  xx[682] = xx[2358] - (xx[2367] + xx[1769]);
  pm_math_matrix3x3Compose(xx + 2341, xx + 674, xx + 1761);
  xx[38] = (xx[36] + xx[315] * xx[315]) * xx[18] - xx[3];
  xx[171] = (xx[29] + xx[30]) * xx[18];
  xx[29] = xx[228] * xx[157] - xx[156] * xx[261];
  xx[30] = xx[228] * xx[156] - xx[431] * xx[157];
  xx[156] = xx[18] * xx[510] * inputDot[6] * inputDot[6];
  xx[202] = xx[157] * inputDot[6] * inputDot[6];
  xx[157] = xx[315] * xx[316];
  xx[211] = xx[313] * xx[314];
  xx[212] = (xx[157] + xx[211]) * xx[18];
  xx[213] = xx[314] * xx[316];
  xx[215] = xx[313] * xx[315];
  xx[216] = xx[18] * (xx[213] - xx[215]);
  xx[217] = xx[228] * xx[522] - xx[519] * xx[261];
  xx[218] = xx[519] * xx[228] - xx[522] * xx[431];
  xx[225] = xx[18] * xx[515] * inputDot[6] * inputDot[6];
  xx[226] = xx[18] * xx[521] * inputDot[6] * inputDot[6];
  xx[674] = xx[23] * xx[31] - xx[33] * xx[37] + xx[816] * xx[576] - xx[817] *
    xx[538] + xx[1583] + xx[2050] + xx[155] * xx[383] + xx[424] * xx[435] - (xx
    [437] * xx[446] + xx[453] * xx[462]) + (xx[2332] + xx[1761]) * xx[18];
  xx[675] = xx[816] * xx[538] + xx[817] * xx[576] - (xx[23] * xx[37] + xx[31] *
    xx[33]) + xx[1584] + xx[2051] + xx[204] * xx[383] + xx[223] * xx[435] - (xx
    [170] * xx[437] + xx[453] * xx[468]) + (xx[2333] + xx[1762]) * xx[18];
  xx[676] = xx[818] * xx[663] + xx[1585] + xx[2052] + xx[214] * xx[383] + xx[224]
    * xx[435] + xx[454] * xx[437] - xx[158] * xx[453] + (xx[2334] + xx[1763]) *
    xx[18];
  xx[677] = xx[23] * xx[38] - xx[171] * xx[33] + xx[819] * xx[576] - xx[820] *
    xx[538] + xx[1586] + xx[2053] + xx[29] * xx[155] + xx[424] * xx[30] - (xx
    [156] * xx[446] + xx[202] * xx[462]) + (xx[2335] + xx[1764]) * xx[18];
  xx[678] = xx[819] * xx[538] + xx[820] * xx[576] - (xx[23] * xx[171] + xx[33] *
    xx[38]) + xx[1587] + xx[2054] + xx[204] * xx[29] + xx[30] * xx[223] - (xx
    [156] * xx[170] + xx[202] * xx[468]) + (xx[2336] + xx[1765]) * xx[18];
  xx[679] = xx[821] * xx[663] + xx[1588] + xx[2055] + xx[214] * xx[29] + xx[224]
    * xx[30] + xx[156] * xx[454] - xx[158] * xx[202] + (xx[2337] + xx[1766]) *
    xx[18];
  xx[680] = xx[23] * xx[212] - xx[216] * xx[33] + xx[822] * xx[576] - xx[823] *
    xx[538] + xx[1589] + xx[2056] + xx[217] * xx[155] + xx[424] * xx[218] - (xx
    [225] * xx[446] + xx[226] * xx[462]) + (xx[2338] + xx[1767]) * xx[18];
  xx[681] = xx[822] * xx[538] + xx[823] * xx[576] - (xx[216] * xx[23] + xx[212] *
    xx[33]) + xx[1590] + xx[2057] + xx[204] * xx[217] + xx[218] * xx[223] - (xx
    [225] * xx[170] + xx[226] * xx[468]) + (xx[2339] + xx[1768]) * xx[18];
  xx[682] = xx[824] * xx[663] + xx[1591] + xx[2058] + xx[214] * xx[217] + xx[224]
    * xx[218] + xx[225] * xx[454] - xx[226] * xx[158] + (xx[2340] + xx[1769]) *
    xx[18];
  pm_math_matrix3x3Xform(xx + 674, xx + 236, xx + 506);
  xx[23] = state[28] * state[28];
  xx[33] = xx[245] * xx[23];
  xx[155] = xx[23] * xx[243];
  xx[23] = xx[316] * xx[155];
  xx[158] = xx[316] * xx[33];
  xx[170] = xx[314] * xx[155] - xx[315] * xx[33];
  xx[521] = - xx[23];
  xx[522] = xx[158];
  xx[523] = xx[170];
  pm_math_cross3(xx + 314, xx + 521, xx + 527);
  pm_math_matrix3x3Xform(xx + 746, xx + 249, xx + 521);
  xx[204] = 0.02199704525612493;
  xx[214] = xx[204] * xx[208];
  xx[223] = 0.01270000000000017;
  xx[224] = xx[223] * xx[197] + xx[207] * xx[204];
  xx[197] = xx[223] * xx[208];
  xx[594] = xx[214];
  xx[595] = - xx[224];
  xx[596] = xx[197];
  pm_math_cross3(xx + 258, xx + 594, xx + 657);
  xx[207] = state[26] * state[26];
  xx[208] = ((xx[214] * xx[209] + xx[657]) * xx[18] - xx[223]) * xx[207];
  xx[214] = xx[207] * (xx[658] - xx[224] * xx[209]) * xx[18];
  xx[223] = (xx[204] + xx[18] * (xx[659] + xx[197] * xx[209])) * xx[207];
  xx[258] = xx[521] + xx[208];
  xx[259] = xx[522] + xx[214];
  xx[260] = xx[523] + xx[223];
  pm_math_quatXform(xx + 309, xx + 258, xx + 521);
  pm_math_matrix3x3Xform(xx + 852, xx + 264, xx + 258);
  pm_math_matrix3x3Xform(xx + 852, xx + 270, xx + 594);
  xx[270] = xx[258] + xx[594];
  xx[271] = xx[259] + xx[595];
  xx[272] = xx[260] + xx[596];
  pm_math_quatXform(xx + 305, xx + 270, xx + 258);
  pm_math_matrix3x3Xform(xx + 1949, xx + 273, xx + 270);
  pm_math_matrix3x3Xform(xx + 1949, xx + 74, xx + 657);
  xx[674] = xx[270] + xx[657];
  xx[675] = xx[271] + xx[658];
  xx[676] = xx[272] + xx[659];
  pm_math_quatXform(xx + 301, xx + 674, xx + 270);
  xx[197] = state[10] * state[10];
  xx[204] = xx[197] * xx[430];
  xx[207] = xx[269] * xx[228] - xx[280] * xx[261] + xx[204];
  xx[209] = xx[197] * xx[434];
  xx[197] = xx[280] * xx[228] - xx[269] * xx[431] - xx[209];
  xx[224] = xx[197] * xx[169];
  xx[227] = xx[207] * xx[169];
  xx[229] = xx[197] * xx[154] - xx[207] * xx[161];
  xx[674] = - xx[224];
  xx[675] = xx[227];
  xx[676] = xx[229];
  pm_math_cross3(xx + 289, xx + 674, xx + 677);
  xx[245] = inputDot[6] * inputDot[6];
  xx[276] = xx[169] * xx[32];
  xx[279] = xx[245] * ((xx[34] * xx[161] + xx[276]) * xx[18] - xx[16]);
  xx[384] = xx[269] * xx[162] + xx[280] * xx[164];
  xx[404] = xx[280] - xx[18] * xx[384] * xx[164] + xx[433];
  xx[424] = xx[269] - xx[18] * xx[384] * xx[162] + xx[434];
  xx[384] = (xx[287] - xx[285]) * state[10];
  pm_math_quatXform(xx + 183, xx + 339, xx + 674);
  pm_math_quatXform(xx + 193, xx + 962, xx + 339);
  xx[287] = xx[18] * xx[318] * state[26];
  xx[318] = xx[163] * state[28];
  xx[163] = xx[165] * state[28];
  xx[680] = xx[318] - xx[345] * xx[243];
  xx[681] = xx[163] + xx[345] * xx[246] - xx[248] * xx[325];
  xx[682] = xx[325] * xx[243];
  pm_math_quatXform(xx + 219, xx + 680, xx + 765);
  xx[165] = xx[287] + xx[765];
  pm_math_cross3(xx + 1085, xx + 264, xx + 680);
  xx[243] = (xx[320] - xx[296]) * state[26];
  xx[246] = xx[243] + xx[766];
  xx[248] = xx[18] * xx[326] * state[26];
  xx[264] = xx[767] - xx[248];
  xx[765] = xx[165] + xx[680];
  xx[766] = xx[246] + xx[681];
  xx[767] = xx[264] + xx[682];
  pm_math_quatXform(xx + 193, xx + 765, xx + 680);
  xx[265] = xx[339] + xx[680];
  pm_math_cross3(xx + 1061, xx + 273, xx + 765);
  xx[266] = xx[340] + xx[681];
  xx[273] = xx[341] + xx[682];
  xx[680] = xx[265] + xx[765];
  xx[681] = xx[266] + xx[766];
  xx[682] = xx[273] + xx[767];
  pm_math_quatXform(xx + 183, xx + 680, xx + 765);
  xx[274] = xx[674] + xx[765];
  xx[275] = xx[274] - xx[269] * state[10];
  xx[269] = xx[675] + xx[766];
  xx[320] = xx[269] + xx[280] * state[10];
  xx[280] = xx[320] * xx[162] + xx[164] * xx[275];
  xx[326] = (xx[384] + xx[275] - xx[18] * xx[280] * xx[164]) * inputDot[6];
  xx[275] = xx[169] * xx[326];
  xx[430] = (xx[292] - xx[281]) * state[10];
  xx[292] = (xx[430] + xx[320] - xx[18] * xx[280] * xx[162]) * inputDot[6];
  xx[280] = xx[169] * xx[292];
  xx[320] = xx[154] * xx[326] + xx[292] * xx[161];
  xx[680] = - xx[275];
  xx[681] = - xx[280];
  xx[682] = xx[320];
  pm_math_cross3(xx + 289, xx + 680, xx + 765);
  xx[440] = xx[269] * state[10];
  xx[269] = xx[274] * state[10];
  xx[274] = xx[440] * xx[164] - xx[162] * xx[269];
  xx[680] = xx[265];
  xx[681] = xx[266];
  xx[682] = xx[273];
  pm_math_cross3(xx + 1061, xx + 680, xx + 825);
  pm_math_quatXform(xx + 183, xx + 825, xx + 680);
  xx[825] = xx[165];
  xx[826] = xx[246];
  xx[827] = xx[264];
  pm_math_cross3(xx + 1085, xx + 825, xx + 264);
  pm_math_quatXform(xx + 193, xx + 264, xx + 825);
  xx[264] = xx[345] * xx[163];
  xx[265] = - (xx[345] * xx[318]);
  xx[266] = - (xx[325] * xx[163]);
  pm_math_quatXform(xx + 219, xx + 264, xx + 828);
  pm_math_quatXform(xx + 193, xx + 828, xx + 264);
  xx[828] = xx[825] + xx[264];
  xx[829] = xx[826] + xx[265];
  xx[830] = xx[827] + xx[266];
  pm_math_quatXform(xx + 183, xx + 828, xx + 264);
  xx[163] = xx[680] + xx[264];
  xx[165] = xx[681] + xx[265];
  xx[246] = xx[165] * xx[162] + xx[163] * xx[164];
  xx[264] = xx[682] + xx[266];
  xx[680] = xx[18] * xx[164] * xx[274] - xx[440] + xx[163] - xx[18] * xx[246] *
    xx[164];
  xx[681] = xx[269] + xx[18] * xx[162] * xx[274] + xx[165] - xx[18] * xx[246] *
    xx[162];
  xx[682] = xx[264] - (xx[162] * xx[264] * xx[162] + xx[264] * xx[164] * xx[164])
    * xx[18];
  pm_math_quatXform(xx + 335, xx + 680, xx + 264);
  xx[163] = xx[838] * xx[838];
  xx[165] = xx[709] * xx[838];
  xx[246] = xx[704] * xx[706];
  xx[269] = xx[704] * xx[709];
  xx[273] = xx[706] * xx[838];
  xx[274] = xx[709] * xx[706];
  xx[318] = xx[704] * xx[838];
  xx[1583] = (xx[163] + xx[704] * xx[704]) * xx[18] - xx[3];
  xx[1584] = xx[18] * (xx[165] - xx[246]);
  xx[1585] = - ((xx[269] + xx[273]) * xx[18]);
  xx[1586] = - ((xx[246] + xx[165]) * xx[18]);
  xx[1587] = (xx[163] + xx[706] * xx[706]) * xx[18] - xx[3];
  xx[1588] = xx[18] * (xx[274] - xx[318]);
  xx[1589] = xx[18] * (xx[273] - xx[269]);
  xx[1590] = (xx[274] + xx[318]) * xx[18];
  xx[1591] = (xx[163] + xx[709] * xx[709]) * xx[18] - xx[3];
  xx[163] = xx[58] * state[52];
  xx[165] = xx[58] * state[53];
  xx[246] = state[52] - (xx[58] * xx[163] - xx[59] * xx[165]) * xx[18];
  xx[269] = xx[966] * xx[246] - xx[956] * state[54];
  xx[273] = state[53] - xx[18] * (xx[59] * xx[163] + xx[58] * xx[165]);
  xx[163] = xx[273] * xx[956] - xx[965] * xx[246];
  xx[165] = xx[273] * xx[966] - xx[965] * state[54];
  xx[274] = xx[970] * state[54] - xx[837] * xx[246];
  xx[318] = xx[273] * xx[970] - xx[246] * xx[832];
  xx[440] = xx[832] * state[54] - xx[273] * xx[837];
  xx[446] = xx[246] * xx[712] - xx[714] * state[54];
  xx[454] = xx[273] * xx[714] - xx[831] * xx[246];
  xx[456] = xx[831] * state[54] - xx[273] * xx[712];
  xx[1761] = xx[269] * state[54] - xx[273] * xx[163];
  xx[1762] = xx[165] * state[54] + xx[163] * xx[246];
  xx[1763] = - (xx[273] * xx[165] + xx[246] * xx[269]);
  xx[1764] = - (xx[274] * state[54] + xx[273] * xx[318]);
  xx[1765] = xx[246] * xx[318] - xx[440] * state[54];
  xx[1766] = xx[273] * xx[440] + xx[274] * xx[246];
  xx[1767] = xx[446] * state[54] - xx[273] * xx[454];
  xx[1768] = xx[246] * xx[454] - xx[456] * state[54];
  xx[1769] = xx[273] * xx[456] - xx[246] * xx[446];
  pm_math_matrix3x3Compose(xx + 1583, xx + 1761, xx + 2050);
  xx[163] = xx[710] * xx[711];
  xx[165] = xx[708] * xx[694];
  xx[269] = xx[163] - xx[165];
  xx[274] = xx[18] * xx[269];
  xx[318] = xx[18] * xx[686] * xx[693] * state[47] * state[47];
  xx[440] = (xx[18] * xx[686] * xx[686] - xx[3]) * state[47] * state[47];
  xx[446] = xx[710] * xx[710];
  xx[454] = (xx[446] + xx[694] * xx[694]) * xx[18] - xx[3];
  xx[456] = xx[274] * xx[318] - xx[440] * xx[454];
  xx[462] = (xx[18] * xx[693] * xx[693] - xx[3]) * state[47] * state[47];
  xx[466] = xx[318] * xx[454] - xx[274] * xx[462];
  xx[468] = xx[454] * inputDot[8] * inputDot[8];
  xx[471] = xx[721] * xx[693] - xx[686] * xx[717];
  xx[472] = xx[471] * xx[471];
  xx[500] = xx[693] * xx[777] + xx[686] * xx[716];
  xx[510] = xx[500] * xx[500];
  xx[512] = (xx[472] + xx[510]) * xx[18] - xx[3];
  xx[513] = xx[18] * xx[269] * inputDot[8] * inputDot[8];
  xx[269] = xx[721] * xx[686] + xx[693] * xx[717];
  xx[515] = xx[471] * xx[269];
  xx[519] = xx[693] * xx[716] - xx[686] * xx[777];
  xx[524] = xx[519] * xx[500];
  xx[525] = (xx[515] - xx[524]) * xx[18];
  xx[680] = xx[710];
  xx[681] = xx[901];
  xx[682] = xx[708];
  xx[683] = xx[905];
  xx[825] = xx[471];
  xx[826] = - xx[500];
  xx[827] = xx[519];
  xx[828] = xx[269];
  pm_math_quatCompose(xx + 680, xx + 825, xx + 866);
  xx[538] = xx[866] * xx[866];
  xx[544] = xx[867] * xx[868];
  xx[548] = xx[866] * xx[869];
  xx[563] = xx[867] * xx[869];
  xx[570] = xx[866] * xx[868];
  xx[572] = xx[868] * xx[869];
  xx[576] = xx[866] * xx[867];
  xx[1583] = (xx[538] + xx[867] * xx[867]) * xx[18] - xx[3];
  xx[1584] = xx[18] * (xx[544] - xx[548]);
  xx[1585] = (xx[563] + xx[570]) * xx[18];
  xx[1586] = (xx[544] + xx[548]) * xx[18];
  xx[1587] = (xx[538] + xx[868] * xx[868]) * xx[18] - xx[3];
  xx[1588] = xx[18] * (xx[572] - xx[576]);
  xx[1589] = xx[18] * (xx[563] - xx[570]);
  xx[1590] = (xx[572] + xx[576]) * xx[18];
  xx[1591] = (xx[538] + xx[869] * xx[869]) * xx[18] - xx[3];
  xx[538] = xx[519] * inputDot[8];
  xx[544] = xx[500] * inputDot[8];
  xx[825] = xx[18] * (xx[471] * xx[538] + xx[544] * xx[269]);
  xx[826] = - ((xx[538] * xx[269] - xx[471] * xx[544]) * xx[18]);
  xx[827] = (xx[544] * xx[500] + xx[519] * xx[538]) * xx[18] - inputDot[8];
  pm_math_matrix3x3PostCross(xx + 1583, xx + 825, xx + 2332);
  xx[538] = xx[721] * state[47];
  xx[544] = xx[717] * state[47];
  xx[548] = (xx[538] * xx[716] + xx[544] * xx[777]) * xx[18];
  xx[563] = xx[18] * (xx[538] * xx[777] - xx[544] * xx[716]);
  xx[570] = state[47] - (xx[544] * xx[717] + xx[721] * xx[538]) * xx[18];
  xx[721] = xx[548] + xx[246];
  xx[722] = xx[563] + xx[273];
  xx[723] = xx[570] + state[54];
  pm_math_matrix3x3PostCross(xx + 2332, xx + 721, xx + 1583);
  xx[538] = xx[711] * xx[694];
  xx[544] = xx[710] * xx[708];
  xx[572] = xx[165] + xx[163];
  xx[163] = xx[572] * xx[18];
  xx[165] = (xx[446] + xx[708] * xx[708]) * xx[18] - xx[3];
  xx[576] = xx[710] * xx[694];
  xx[589] = xx[708] * xx[711];
  xx[592] = xx[538] - xx[544];
  xx[609] = xx[18] * xx[592];
  xx[612] = xx[589] + xx[576];
  xx[615] = xx[612] * xx[18];
  xx[2332] = xx[454];
  xx[2333] = xx[274];
  xx[2334] = (xx[538] + xx[544]) * xx[18];
  xx[2335] = - xx[163];
  xx[2336] = xx[165];
  xx[2337] = xx[18] * (xx[576] - xx[589]);
  xx[2338] = xx[609];
  xx[2339] = - xx[615];
  xx[2340] = (xx[446] + xx[711] * xx[711]) * xx[18] - xx[3];
  xx[274] = xx[18] * (xx[524] + xx[515]);
  xx[446] = xx[519] * xx[471];
  xx[454] = xx[500] * xx[269];
  xx[515] = (xx[446] - xx[454]) * xx[18];
  xx[524] = xx[519] * xx[519];
  xx[538] = (xx[472] + xx[524]) * xx[18] - xx[3];
  xx[544] = xx[519] * xx[269];
  xx[519] = xx[471] * xx[500];
  xx[471] = xx[18] * (xx[544] + xx[519]);
  xx[2350] = xx[512];
  xx[2351] = - xx[274];
  xx[2352] = xx[515];
  xx[2353] = xx[525];
  xx[2354] = xx[538];
  xx[2355] = xx[471];
  xx[2356] = - (xx[18] * (xx[454] + xx[446]));
  xx[2357] = (xx[544] - xx[519]) * xx[18];
  xx[2358] = (xx[472] + xx[269] * xx[269]) * xx[18] - xx[3];
  xx[721] = xx[548];
  xx[722] = xx[563];
  xx[723] = xx[570];
  pm_math_matrix3x3PostCross(xx + 2350, xx + 721, xx + 2359);
  xx[721] = xx[246];
  xx[722] = xx[273];
  xx[723] = state[54];
  pm_math_matrix3x3PostCross(xx + 2359, xx + 721, xx + 2350);
  pm_math_matrix3x3Compose(xx + 2332, xx + 2350, xx + 2359);
  xx[269] = xx[318] * xx[165] + xx[440] * xx[163];
  xx[472] = xx[318] * xx[163] + xx[462] * xx[165];
  xx[163] = xx[165] * inputDot[8] * inputDot[8];
  xx[165] = xx[18] * xx[572] * inputDot[8] * inputDot[8];
  xx[500] = xx[318] * xx[609] + xx[462] * xx[615];
  xx[548] = xx[318] * xx[615] + xx[609] * xx[440];
  xx[563] = xx[18] * xx[592] * inputDot[8] * inputDot[8];
  xx[570] = xx[18] * xx[612] * inputDot[8] * inputDot[8];
  xx[2332] = xx[2050] + xx[956] * xx[456] + xx[970] * xx[466] - (xx[468] * xx
    [512] + xx[513] * xx[525]) + (xx[1583] + xx[2359]) * xx[18];
  xx[2333] = xx[2051] + xx[832] * xx[466] + xx[965] * xx[456] - (xx[513] * xx
    [538] - xx[274] * xx[468]) + (xx[1584] + xx[2360]) * xx[18];
  xx[2334] = xx[2052] + xx[966] * xx[456] + xx[837] * xx[466] - (xx[468] * xx
    [515] + xx[513] * xx[471]) + (xx[1585] + xx[2361]) * xx[18];
  xx[2335] = xx[2053] + xx[956] * xx[269] - xx[970] * xx[472] - (xx[525] * xx
    [163] - xx[165] * xx[512]) + (xx[1586] + xx[2362]) * xx[18];
  xx[2336] = xx[2054] + xx[965] * xx[269] - xx[832] * xx[472] - (xx[274] * xx
    [165] + xx[163] * xx[538]) + (xx[1587] + xx[2363]) * xx[18];
  xx[2337] = xx[2055] + xx[966] * xx[269] - xx[837] * xx[472] - (xx[471] * xx
    [163] - xx[165] * xx[515]) + (xx[1588] + xx[2364]) * xx[18];
  xx[2338] = xx[2056] + xx[970] * xx[500] - xx[956] * xx[548] - (xx[563] * xx
    [512] - xx[570] * xx[525]) + (xx[1589] + xx[2365]) * xx[18];
  xx[2339] = xx[2057] + xx[832] * xx[500] - xx[965] * xx[548] + xx[563] * xx[274]
    + xx[570] * xx[538] + (xx[1590] + xx[2366]) * xx[18];
  xx[2340] = xx[2058] + xx[837] * xx[500] - xx[966] * xx[548] - (xx[563] * xx
    [515] - xx[570] * xx[471]) + (xx[1591] + xx[2367]) * xx[18];
  pm_math_matrix3x3Xform(xx + 2332, xx + 902, xx + 825);
  pm_math_matrix3x3Xform(xx + 1761, xx + 74, xx + 828);
  pm_math_quatXform(xx + 927, xx + 828, xx + 831);
  xx[269] = state[47] * state[47];
  xx[274] = xx[839] * xx[686] + xx[861] * xx[693];
  xx[456] = xx[861] - xx[18] * xx[274] * xx[693];
  xx[466] = xx[899] * xx[318] - xx[898] * xx[440] + xx[269] * xx[456];
  xx[440] = xx[839] - xx[18] * xx[274] * xx[686];
  xx[274] = xx[898] * xx[318] - xx[899] * xx[462] + xx[269] * xx[440];
  xx[269] = xx[274] * xx[711];
  xx[318] = xx[466] * xx[711];
  xx[462] = xx[274] * xx[694] + xx[708] * xx[466];
  xx[828] = xx[269];
  xx[829] = - xx[318];
  xx[830] = - xx[462];
  pm_math_cross3(xx + 906, xx + 828, xx + 862);
  xx[471] = inputDot[8] * inputDot[8];
  xx[472] = xx[708] * xx[16];
  xx[500] = xx[16] * xx[711];
  xx[512] = xx[500] * xx[711];
  xx[515] = xx[686] * xx[899] + xx[898] * xx[693];
  xx[525] = 0.03194045367095626;
  xx[538] = xx[898] - (xx[18] * xx[515] * xx[693] + xx[456]) + xx[525];
  xx[548] = xx[899] - xx[18] * xx[515] * xx[686] - xx[440];
  pm_math_cross3(xx + 721, xx + 74, xx + 828);
  pm_math_quatXform(xx + 894, xx + 828, xx + 885);
  xx[515] = xx[886] + xx[898] * state[47];
  xx[572] = xx[885] - xx[899] * state[47];
  xx[576] = xx[515] * xx[686] + xx[693] * xx[572];
  xx[589] = (xx[515] - xx[18] * xx[576] * xx[686] - (xx[861] + xx[909]) * state
             [47]) * inputDot[8];
  xx[515] = ((xx[839] - xx[872]) * state[47] + xx[572] - xx[18] * xx[576] * xx
             [693]) * inputDot[8];
  xx[572] = xx[515] * xx[711];
  xx[576] = xx[589] * xx[711];
  xx[592] = xx[708] * xx[589] - xx[515] * xx[694];
  xx[870] = - xx[572];
  xx[871] = - xx[576];
  xx[872] = - xx[592];
  pm_math_cross3(xx + 906, xx + 870, xx + 927);
  xx[609] = xx[886] * state[47];
  xx[612] = xx[885] * state[47];
  xx[615] = xx[609] * xx[693] - xx[686] * xx[612];
  xx[634] = xx[18] * xx[693] * xx[615] - xx[609];
  xx[609] = xx[612] + xx[18] * xx[686] * xx[615];
  xx[612] = xx[609] * xx[711];
  xx[615] = xx[711] * xx[634];
  xx[639] = xx[609] * xx[694] + xx[708] * xx[634];
  xx[870] = xx[612];
  xx[871] = - xx[615];
  xx[872] = - xx[639];
  pm_math_cross3(xx + 906, xx + 870, xx + 885);
  xx[870] = xx[443];
  xx[871] = - ((xx[504] + xx[439]) * xx[18]);
  xx[872] = xx[3] - (xx[445] + xx[460]) * xx[18];
  pm_math_cross3(xx + 870, xx + 236, xx + 962);
  pm_math_quatXform(xx + 802, xx + 962, xx + 870);
  xx[439] = xx[404] * xx[169];
  xx[443] = xx[169] * xx[424];
  xx[445] = xx[404] * xx[154] + xx[424] * xx[161];
  xx[802] = - xx[439];
  xx[803] = - xx[443];
  xx[804] = xx[445];
  pm_math_cross3(xx + 289, xx + 802, xx + 962);
  xx[460] = xx[154] * xx[16];
  xx[504] = xx[32] * xx[168];
  xx[647] = xx[18] * (xx[460] * xx[161] - xx[504]);
  xx[648] = xx[27] + xx[262];
  xx[27] = xx[28] - xx[328];
  xx[802] = xx[648];
  xx[803] = xx[27];
  xx[804] = xx[20] - xx[22];
  pm_math_quatInverseXform(xx + 183, xx + 802, xx + 1208);
  pm_math_cross3(xx + 802, xx + 282, xx + 1228);
  xx[28] = xx[17] + xx[436];
  xx[802] = xx[19] + xx[22] * xx[285] + xx[181] + xx[1228];
  xx[803] = xx[15] + xx[22] * xx[281] + xx[447] + xx[1229];
  xx[804] = xx[28] + xx[1230];
  pm_math_quatInverseXform(xx + 183, xx + 802, xx + 1228);
  xx[17] = xx[564] - (pm_math_dot3(xx + 689, xx + 1208) + pm_math_dot3(xx + 729,
    xx + 1228));
  xx[262] = xx[565] - (pm_math_dot3(xx + 761, xx + 1208) + pm_math_dot3(xx + 888,
    xx + 1228));
  xx[328] = xx[566] - (pm_math_dot3(xx + 891, xx + 1208) + pm_math_dot3(xx + 834,
    xx + 1228));
  xx[564] = xx[1208] + xx[17] + xx[94] * xx[262] + xx[1093];
  xx[565] = xx[1209] - xx[94] * xx[17] + xx[262] + xx[1094];
  xx[566] = xx[1210] + xx[328] + xx[1095];
  pm_math_quatInverseXform(xx + 193, xx + 564, xx + 802);
  pm_math_cross3(xx + 564, xx + 449, xx + 1208);
  xx[564] = xx[1228] + xx[95] * xx[17] - xx[114] * xx[262] - xx[73] * xx[328] +
    xx[182] + xx[1208];
  xx[565] = xx[1229] + xx[114] * xx[17] + xx[95] * xx[262] + xx[72] * xx[328] +
    xx[188] + xx[1209];
  xx[566] = xx[1230] + xx[115] * xx[17] + xx[696] * xx[262] + xx[244] + xx[1210];
  pm_math_quatInverseXform(xx + 193, xx + 564, xx + 1208);
  xx[436] = xx[560] - (pm_math_dot3(xx + 724, xx + 802) + pm_math_dot3(xx + 840,
    xx + 1208));
  xx[560] = xx[561] - (pm_math_dot3(xx + 733, xx + 802) + pm_math_dot3(xx + 846,
    xx + 1208));
  xx[561] = xx[562] - (pm_math_dot3(xx + 849, xx + 802) + pm_math_dot3(xx + 701,
    xx + 1208));
  xx[564] = xx[802] + xx[436] + xx[1172];
  xx[565] = xx[803] + xx[560] + xx[1173];
  xx[566] = xx[804] + xx[561] + xx[1174];
  pm_math_quatInverseXform(xx + 219, xx + 564, xx + 802);
  pm_math_cross3(xx + 564, xx + 556, xx + 1228);
  xx[564] = xx[1208] + xx[235] * xx[560] + xx[234] * xx[561] + xx[319] + xx[1228];
  xx[565] = xx[1209] - xx[235] * xx[436] + xx[233] * xx[561] + xx[321] + xx[1229];
  xx[566] = xx[1210] - xx[234] * xx[436] - xx[233] * xx[560] + xx[322] + xx[1230];
  pm_math_quatInverseXform(xx + 219, xx + 564, xx + 1208);
  xx[562] = pm_math_dot3(xx + 643, xx + 802) + pm_math_dot3(xx + 386, xx + 1208)
    - xx[242];
  xx[242] = xx[804] + xx[562] * xx[206] + xx[420];
  xx[564] = xx[1208] + xx[343];
  xx[804] = xx[802] + xx[562] * xx[200] - xx[385];
  xx[805] = xx[803] + xx[395];
  xx[806] = xx[242];
  pm_math_cross3(xx + 804, xx + 249, xx + 1228);
  xx[565] = xx[564] + xx[1228];
  xx[566] = xx[1209] + xx[562] * xx[296] + xx[1011];
  xx[663] = xx[566] + xx[1229];
  xx[664] = xx[663] * xx[210];
  xx[667] = xx[565] * xx[210];
  xx[669] = xx[239] + xx[673] * xx[242] + xx[539] * (xx[565] - (xx[198] * xx[664]
    + xx[667] * xx[210]) * xx[18]) + (xx[663] + xx[18] * (xx[198] * xx[667] -
    xx[664] * xx[210])) * xx[574];
  xx[1228] = xx[18] * (xx[446] + xx[454]);
  xx[1229] = - ((xx[544] - xx[519]) * xx[18]);
  xx[1230] = (xx[510] + xx[524]) * xx[18] - xx[3];
  pm_math_cross3(xx + 1228, xx + 902, xx + 1308);
  pm_math_quatXform(xx + 866, xx + 1308, xx + 1228);
  xx[239] = xx[538] * xx[711];
  xx[446] = xx[711] * xx[548];
  xx[454] = xx[708] * xx[548] - xx[538] * xx[694];
  xx[866] = - xx[239];
  xx[867] = - xx[446];
  xx[868] = - xx[454];
  pm_math_cross3(xx + 906, xx + 866, xx + 1308);
  xx[510] = xx[16] * xx[694];
  xx[519] = xx[710] * xx[500];
  pm_math_quatInverseXform(xx + 680, xx + 39, xx + 866);
  xx[524] = xx[686] * xx[867] + xx[866] * xx[693];
  xx[544] = xx[866] - xx[18] * xx[524] * xx[693];
  xx[565] = xx[867] - xx[18] * xx[524] * xx[686];
  xx[524] = xx[868] - inputDot[8];
  xx[663] = xx[524] - (xx[686] * xx[686] * xx[524] + xx[693] * xx[524] * xx[693])
    * xx[18];
  xx[664] = xx[663] + state[47];
  xx[1342] = xx[544];
  xx[1343] = xx[565];
  xx[1344] = xx[664];
  xx[1363] = xx[55] * xx[544];
  xx[1364] = xx[56] * xx[565];
  xx[1365] = xx[664] * xx[57];
  pm_math_cross3(xx + 1342, xx + 1363, xx + 1464);
  pm_math_quatInverseXform(xx + 894, xx + 1342, xx + 1363);
  xx[667] = xx[1363] + xx[246];
  xx[246] = xx[1364] + xx[273];
  xx[273] = xx[1365] + state[54];
  xx[1467] = xx[667];
  xx[1468] = xx[246];
  xx[1469] = xx[273];
  xx[1477] = xx[667] * xx[83];
  xx[1478] = xx[246] * xx[84];
  xx[1479] = xx[273] * xx[85];
  pm_math_cross3(xx + 1467, xx + 1477, xx + 1483);
  pm_math_cross3(xx + 1363, xx + 721, xx + 1467);
  xx[670] = xx[1483] + xx[83] * xx[1467];
  xx[672] = xx[1484] + xx[84] * xx[1468];
  xx[721] = xx[1363] + xx[667];
  xx[722] = xx[1364] + xx[246];
  xx[723] = xx[1365] + xx[273];
  pm_math_cross3(xx + 721, xx + 828, xx + 1363);
  pm_math_cross3(xx + 1342, xx + 898, xx + 721);
  pm_math_cross3(xx + 1342, xx + 721, xx + 828);
  pm_math_quatInverseXform(xx + 894, xx + 828, xx + 721);
  xx[246] = (xx[1363] + xx[721]) * xx[78];
  xx[273] = (xx[1364] + xx[722]) * xx[78];
  xx[667] = (xx[1365] + xx[723]) * xx[78];
  xx[721] = xx[246];
  xx[722] = xx[273];
  xx[723] = xx[667];
  xx[676] = xx[670] - xx[672] * xx[94] + pm_math_dot3(xx + 116, xx + 721);
  xx[684] = xx[670] * xx[94] + xx[672] + pm_math_dot3(xx + 758, xx + 721);
  xx[687] = xx[1485] + xx[85] * xx[1469];
  xx[688] = xx[687] + xx[72] * xx[273] - xx[73] * xx[246];
  xx[721] = - xx[676];
  xx[722] = - xx[684];
  xx[723] = - xx[688];
  solveSymmetricPosDef(xx + 918, xx + 721, 3, 1, xx + 828, xx + 1342);
  xx[721] = xx[670] + xx[83] * xx[828] + xx[145] * xx[829];
  xx[722] = xx[672] - xx[718] * xx[828] + xx[84] * xx[829];
  xx[723] = xx[687] + xx[85] * xx[830];
  pm_math_quatXform(xx + 894, xx + 721, xx + 1342);
  xx[721] = xx[246] + xx[736] * xx[828] - xx[811] * xx[829] - xx[875] * xx[830];
  xx[722] = xx[273] + xx[811] * xx[828] + xx[736] * xx[829] + xx[913] * xx[830];
  xx[723] = xx[667] + xx[914] * xx[828] + xx[932] * xx[829];
  pm_math_quatXform(xx + 894, xx + 721, xx + 1363);
  pm_math_cross3(xx + 898, xx + 1363, xx + 721);
  xx[704] = xx[565] * state[47];
  xx[706] = xx[544] * state[47];
  xx[709] = xx[1025] - xx[971];
  xx[711] = xx[1026] - xx[974];
  xx[712] = xx[1028] - xx[972];
  xx[714] = xx[1029] - xx[975];
  xx[716] = xx[1033] - xx[979];
  xx[1583] = xx[709];
  xx[1584] = xx[711];
  xx[1585] = xx[1027] - xx[977];
  xx[1586] = xx[712];
  xx[1587] = xx[714];
  xx[1588] = xx[1030] - xx[978];
  xx[1589] = xx[713];
  xx[1590] = xx[715];
  xx[1591] = xx[716];
  xx[970] = xx[866];
  xx[971] = xx[867];
  xx[972] = xx[524];
  xx[713] = 4.000000007367204e-3;
  xx[977] = xx[525] - xx[456];
  xx[978] = - xx[440];
  xx[979] = xx[180] - (xx[713] - (xx[686] * xx[713] * xx[686] + xx[713] * xx[693]
    * xx[693]) * xx[18]);
  pm_math_cross3(xx + 970, xx + 977, xx + 1025);
  pm_math_cross3(xx + 970, xx + 1025, xx + 1028);
  xx[440] = xx[686] * xx[1029] + xx[1028] * xx[693];
  xx[456] = xx[663] + xx[664];
  xx[663] = xx[861] * state[47];
  xx[664] = xx[1028] - xx[18] * xx[440] * xx[693] + xx[456] * xx[663];
  xx[713] = xx[839] * state[47];
  xx[715] = xx[456] * xx[713] + xx[1029] - xx[18] * xx[440] * xx[686];
  xx[440] = xx[1030] - (xx[686] * xx[686] * xx[1030] + xx[1030] * xx[693] * xx
                        [693]) * xx[18] - ((xx[544] + xx[544]) * xx[663] + (xx
    [565] + xx[565]) * xx[713]);
  xx[970] = xx[664];
  xx[971] = xx[715];
  xx[972] = xx[440];
  pm_math_matrix3x3Xform(xx + 1583, xx + 970, xx + 1025);
  xx[456] = xx[704] * (xx[1022] - xx[1040] - xx[1036] - xx[1058]) - xx[706] *
    (xx[1023] - xx[1041] - xx[1039] - xx[1059]) + xx[1027];
  xx[1583] = xx[957];
  xx[1584] = xx[1044];
  xx[1585] = xx[1045];
  xx[1586] = xx[1046];
  xx[1587] = xx[976];
  xx[1588] = xx[1048];
  xx[1589] = xx[1049];
  xx[1590] = xx[1050];
  xx[1591] = xx[398] + xx[1051];
  pm_math_matrix3x3Xform(xx + 1583, xx + 970, xx + 974);
  xx[544] = xx[704] * xx[709] - xx[706] * xx[712] + xx[974];
  xx[565] = xx[704] * xx[711] - xx[706] * xx[714] + xx[975];
  xx[970] = (xx[1018] - xx[1036] - xx[1040] - xx[1054] + xx[839] * xx[709] - xx
             [861] * xx[711]) / xx[1032];
  xx[971] = (xx[1021] - xx[1039] - xx[1041] - xx[1057] + xx[839] * xx[712] - xx
             [861] * xx[714]) / xx[1032];
  xx[972] = xx[933] / xx[1032];
  pm_math_quatInverseXform(xx + 680, xx + 24, xx + 711);
  xx[663] = xx[711] - xx[867] * inputDot[8];
  xx[709] = xx[712] + xx[866] * inputDot[8];
  xx[714] = xx[709] * xx[686] + xx[693] * xx[663];
  xx[717] = xx[663] - xx[18] * xx[714] * xx[693];
  xx[719] = xx[709] - xx[18] * xx[714] * xx[686];
  xx[711] = xx[713] - inputDdot[8];
  xx[712] = xx[711] - (xx[686] * xx[686] * xx[711] + xx[693] * xx[711] * xx[693])
    * xx[18];
  xx[974] = xx[717];
  xx[975] = xx[719];
  xx[976] = xx[712];
  xx[1016] = xx[973] / xx[1032];
  xx[1017] = xx[1031] / xx[1032];
  xx[1018] = (xx[716] + xx[839] * xx[1049] - xx[861] * xx[1050]) / xx[1032];
  xx[713] = xx[708] * xx[180];
  xx[714] = xx[500] + xx[180] * xx[694];
  xx[1019] = xx[713];
  xx[1020] = xx[714];
  xx[1021] = xx[472];
  pm_math_cross3(xx + 906, xx + 1019, xx + 1022);
  xx[716] = xx[710] * xx[472];
  xx[905] = 0.1165527193553521 - ((xx[710] * xx[713] + xx[1022]) * xx[18] - xx
    [16]);
  xx[906] = 0.02992349485130436 - (xx[710] * xx[714] + xx[1023]) * xx[18];
  xx[907] = - (0.1050044054848736 + xx[180] + xx[18] * (xx[1024] + xx[716]));
  pm_math_cross3(xx + 24, xx + 905, xx + 1019);
  xx[1022] = xx[4] + xx[1019];
  xx[1023] = xx[7] + xx[1020];
  xx[1024] = xx[21] + xx[1021];
  pm_math_quatInverseXform(xx + 680, xx + 1022, xx + 1019);
  pm_math_cross3(xx + 39, xx + 905, xx + 1022);
  pm_math_cross3(xx + 39, xx + 1022, xx + 905);
  pm_math_quatInverseXform(xx + 680, xx + 905, xx + 1022);
  xx[680] = xx[16] * inputDot[8];
  xx[681] = xx[663];
  xx[682] = xx[709];
  xx[683] = xx[711];
  pm_math_cross3(xx + 681, xx + 977, xx + 905);
  xx[663] = xx[1019] + xx[1022] + (xx[868] + xx[524]) * xx[680] + xx[905];
  xx[524] = xx[1020] + xx[1023] - xx[16] * inputDdot[8] + xx[906];
  xx[681] = xx[524] * xx[686] + xx[663] * xx[693];
  xx[682] = xx[663] - xx[18] * xx[681] * xx[693];
  xx[663] = xx[524] - xx[18] * xx[681] * xx[686];
  xx[524] = xx[1021] + xx[1024] - (xx[866] + xx[866]) * xx[680] + xx[907];
  xx[680] = xx[524] - (xx[686] * xx[524] * xx[686] + xx[524] * xx[693] * xx[693])
    * xx[18];
  xx[866] = xx[682];
  xx[867] = xx[663];
  xx[868] = xx[680];
  xx[524] = pm_math_dot3(xx + 970, xx + 974) + pm_math_dot3(xx + 1016, xx + 866);
  xx[681] = (xx[1466] + xx[1344] + xx[723] + xx[456] + (xx[1363] + xx[544]) *
             xx[839] - (xx[1364] + xx[565]) * xx[861]) / xx[1032] + xx[524];
  xx[683] = xx[717] + xx[704];
  xx[686] = xx[719] - xx[706];
  xx[721] = xx[683];
  xx[722] = xx[686];
  xx[723] = xx[712] - xx[681];
  pm_math_quatInverseXform(xx + 894, xx + 721, xx + 866);
  pm_math_cross3(xx + 721, xx + 898, xx + 905);
  xx[693] = xx[680] + xx[440];
  xx[721] = xx[682] - xx[681] * xx[839] + xx[664] + xx[905];
  xx[722] = xx[663] + xx[681] * xx[861] + xx[715] + xx[906];
  xx[723] = xx[693] + xx[907];
  pm_math_quatInverseXform(xx + 894, xx + 721, xx + 905);
  xx[440] = xx[828] - (pm_math_dot3(xx + 967, xx + 866) + pm_math_dot3(xx + 1064,
    xx + 905));
  xx[680] = xx[829] - (pm_math_dot3(xx + 1067, xx + 866) + pm_math_dot3(xx +
    1073, xx + 905));
  xx[704] = xx[830] - (pm_math_dot3(xx + 1076, xx + 866) + pm_math_dot3(xx + 998,
    xx + 905));
  xx[706] = xx[245] * (xx[504] + xx[154] * xx[34]) * xx[18];
  xx[34] = (xx[276] + xx[154] * xx[460]) * xx[18];
  xx[276] = xx[245] * xx[18] * (xx[35] - xx[154] * xx[32]);
  xx[35] = (xx[460] * xx[168] + xx[32] * xx[161]) * xx[18];
  pm_math_matrix3x3Compose(xx + 816, xx + 578, xx + 970);
  xx[32] = xx[479] * state[30] * state[30];
  xx[245] = xx[18] * xx[573] * state[30] * state[30];
  xx[460] = xx[18] * xx[577] * state[30] * state[30];
  xx[479] = (xx[213] + xx[215]) * xx[18];
  xx[213] = xx[651] * xx[651];
  xx[577] = (xx[213] + xx[1121]) * xx[18] - xx[3];
  xx[578] = xx[1096];
  xx[579] = (xx[1111] + xx[1110]) * xx[18];
  xx[580] = (xx[1088] + xx[1089]) * xx[18];
  xx[581] = (xx[213] + xx[1080]) * xx[18] - xx[3];
  xx[582] = xx[1124];
  xx[583] = xx[1128];
  xx[584] = (xx[1122] + xx[1123]) * xx[18];
  xx[585] = (xx[213] + xx[1081]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 876, xx + 577, xx + 1016);
  xx[213] = xx[790] * xx[790];
  xx[215] = xx[791] * xx[792];
  xx[1033] = (xx[213] + xx[1155]) * xx[18] - xx[3];
  xx[1034] = xx[18] * (xx[215] - xx[1115]);
  xx[1035] = (xx[950] + xx[1109]) * xx[18];
  xx[1036] = (xx[215] + xx[1115]) * xx[18];
  xx[1037] = (xx[213] + xx[1159]) * xx[18] - xx[3];
  xx[1038] = xx[18] * (xx[1154] - xx[1153]);
  xx[1039] = xx[1133];
  xx[1040] = (xx[1154] + xx[1153]) * xx[18];
  xx[1041] = (xx[213] + xx[793] * xx[793]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 2027, xx + 1033, xx + 1048);
  xx[213] = xx[941] * xx[941];
  xx[215] = (xx[213] + xx[641]) * xx[18] - xx[3];
  xx[504] = xx[942] * xx[943];
  xx[573] = xx[941] * xx[944];
  xx[586] = (xx[504] + xx[573]) * xx[18];
  xx[641] = xx[943] * xx[164] - xx[162] * xx[942];
  xx[709] = xx[641] * xx[641];
  xx[711] = xx[944] * xx[164] - xx[162] * xx[941];
  xx[713] = xx[711] * xx[711];
  xx[714] = (xx[709] + xx[713]) * xx[18] - xx[3];
  xx[717] = xx[941] * xx[164] + xx[162] * xx[944];
  xx[719] = xx[717] * xx[711];
  xx[721] = xx[162] * xx[943] + xx[942] * xx[164];
  xx[722] = xx[721] * xx[641];
  xx[723] = (xx[719] + xx[722]) * xx[18];
  xx[866] = - xx[641];
  xx[867] = xx[711];
  xx[868] = xx[717];
  xx[869] = - xx[721];
  pm_math_quatCompose(xx + 335, xx + 866, xx + 905);
  xx[727] = xx[905] * xx[905];
  xx[769] = xx[906] * xx[907];
  xx[771] = xx[905] * xx[908];
  xx[777] = xx[906] * xx[908];
  xx[802] = xx[905] * xx[907];
  xx[803] = xx[907] * xx[908];
  xx[828] = xx[905] * xx[906];
  xx[1583] = (xx[727] + xx[906] * xx[906]) * xx[18] - xx[3];
  xx[1584] = xx[18] * (xx[769] - xx[771]);
  xx[1585] = (xx[777] + xx[802]) * xx[18];
  xx[1586] = (xx[769] + xx[771]) * xx[18];
  xx[1587] = (xx[727] + xx[907] * xx[907]) * xx[18] - xx[3];
  xx[1588] = xx[18] * (xx[803] - xx[828]);
  xx[1589] = xx[18] * (xx[777] - xx[802]);
  xx[1590] = (xx[803] + xx[828]) * xx[18];
  xx[1591] = (xx[727] + xx[908] * xx[908]) * xx[18] - xx[3];
  xx[727] = xx[717] * inputDot[6];
  xx[769] = xx[711] * inputDot[6];
  xx[828] = xx[18] * (xx[727] * xx[641] - xx[721] * xx[769]);
  xx[829] = - ((xx[769] * xx[641] + xx[721] * xx[727]) * xx[18]);
  xx[830] = inputDot[6] - (xx[769] * xx[711] + xx[717] * xx[727]) * xx[18];
  pm_math_matrix3x3PostCross(xx + 1583, xx + 828, xx + 1761);
  xx[727] = xx[942] * state[10];
  xx[769] = xx[943] * state[10];
  xx[771] = xx[18] * (xx[944] * xx[727] - xx[941] * xx[769]);
  pm_math_quatInverseXform(xx + 790, xx + 1061, xx + 828);
  pm_math_quatInverseXform(xx + 651, xx + 1085, xx + 790);
  xx[651] = xx[345] * xx[480];
  xx[652] = xx[486] * xx[325] - xx[199] * xx[345];
  xx[486] = xx[325] * xx[480];
  xx[866] = - xx[651];
  xx[867] = xx[652];
  xx[868] = xx[486];
  pm_math_cross3(xx + 935, xx + 866, xx + 1025);
  xx[653] = xx[18] * (xx[1025] + xx[651] * xx[205]) - xx[325];
  xx[651] = xx[790] + xx[653];
  xx[654] = xx[828] + xx[651];
  xx[777] = (xx[941] * xx[727] + xx[944] * xx[769]) * xx[18];
  xx[793] = xx[18] * (xx[1026] - xx[205] * xx[652]);
  xx[652] = xx[791] + xx[793];
  xx[802] = xx[829] + xx[652];
  xx[803] = state[10] - (xx[942] * xx[727] + xx[943] * xx[769]) * xx[18];
  xx[727] = (xx[1027] - xx[486] * xx[205]) * xx[18] - xx[345];
  xx[486] = xx[727] + state[30];
  xx[769] = xx[792] + xx[486];
  xx[837] = xx[830] + xx[769];
  xx[866] = xx[771] + xx[654];
  xx[867] = xx[777] + xx[802];
  xx[868] = xx[803] + xx[837];
  pm_math_matrix3x3PostCross(xx + 1761, xx + 866, xx + 1583);
  xx[838] = xx[18] * (xx[719] - xx[722]);
  xx[719] = xx[721] * xx[711];
  xx[722] = xx[717] * xx[641];
  xx[866] = (xx[719] + xx[722]) * xx[18];
  xx[867] = xx[717] * xx[717];
  xx[868] = (xx[709] + xx[867]) * xx[18] - xx[3];
  xx[869] = xx[641] * xx[711];
  xx[641] = xx[717] * xx[721];
  xx[711] = xx[18] * (xx[869] - xx[641]);
  xx[717] = xx[18] * (xx[722] - xx[719]);
  xx[1761] = xx[714];
  xx[1762] = xx[838];
  xx[1763] = - xx[866];
  xx[1764] = xx[723];
  xx[1765] = xx[868];
  xx[1766] = xx[711];
  xx[1767] = xx[717];
  xx[1768] = - ((xx[641] + xx[869]) * xx[18]);
  xx[1769] = (xx[709] + xx[721] * xx[721]) * xx[18] - xx[3];
  xx[940] = xx[771];
  xx[941] = xx[777];
  xx[942] = xx[803];
  pm_math_matrix3x3PostCross(xx + 1761, xx + 940, xx + 2050);
  xx[940] = xx[654];
  xx[941] = xx[802];
  xx[942] = xx[837];
  pm_math_matrix3x3PostCross(xx + 2050, xx + 940, xx + 1761);
  xx[654] = xx[18] * (xx[504] - xx[573]);
  xx[504] = (xx[569] + xx[636]) * xx[18];
  xx[569] = (xx[213] + xx[642]) * xx[18] - xx[3];
  xx[573] = xx[18] * (xx[640] - xx[638]);
  xx[2050] = xx[215];
  xx[2051] = xx[654];
  xx[2052] = xx[504];
  xx[2053] = xx[586];
  xx[2054] = xx[569];
  xx[2055] = xx[573];
  xx[2056] = xx[637];
  xx[2057] = (xx[640] + xx[638]) * xx[18];
  xx[2058] = (xx[213] + xx[944] * xx[944]) * xx[18] - xx[3];
  pm_math_matrix3x3PostCross(xx + 2050, xx + 828, xx + 2332);
  xx[636] = xx[651];
  xx[637] = xx[652];
  xx[638] = xx[769];
  pm_math_matrix3x3PostCross(xx + 2332, xx + 636, xx + 2050);
  pm_math_matrix3x3PostCross(xx + 1033, xx + 790, xx + 2332);
  xx[636] = xx[653];
  xx[637] = xx[793];
  xx[638] = xx[486];
  pm_math_matrix3x3PostCross(xx + 2332, xx + 636, xx + 1033);
  xx[636] = xx[653];
  xx[637] = xx[793];
  xx[638] = xx[727];
  pm_math_matrix3x3PostCross(xx + 577, xx + 636, xx + 2332);
  xx[213] = xx[2333] * state[30];
  xx[486] = xx[2336] * state[30];
  xx[577] = xx[2339] * state[30];
  xx[578] = xx[2338] * state[30];
  xx[579] = xx[2332] * state[30];
  xx[580] = xx[2335] * state[30];
  xx[2332] = xx[1033] + xx[213] * xx[455] + xx[607] * xx[486] - xx[577] * xx[610];
  xx[2333] = xx[1034] + xx[578] * xx[610] - (xx[579] * xx[455] + xx[607] * xx
    [580]);
  xx[2334] = xx[1035];
  xx[2335] = xx[1036] + xx[486] * xx[546] - xx[213] * xx[611] + xx[613] * xx[577];
  xx[2336] = xx[1037] + xx[579] * xx[611] - xx[580] * xx[546] - xx[613] * xx[578];
  xx[2337] = xx[1038];
  xx[2338] = xx[1039] + xx[614] * xx[213] + xx[486] * xx[608] + xx[577] * xx[547];
  xx[2339] = xx[1040] - (xx[614] * xx[579] + xx[580] * xx[608] + xx[578] * xx
    [547]);
  xx[2340] = xx[1041];
  pm_math_matrix3x3Compose(xx + 737, xx + 2332, xx + 577);
  xx[213] = xx[2050] + xx[577];
  xx[486] = xx[2053] + xx[580];
  xx[636] = xx[2051] + xx[578];
  xx[637] = xx[2054] + xx[581];
  xx[638] = xx[2052] + xx[579];
  xx[640] = xx[2055] + xx[582];
  xx[1033] = xx[1761] + xx[213] * xx[254] - xx[486] * xx[203];
  xx[1034] = xx[1762] + xx[636] * xx[254] - xx[637] * xx[203];
  xx[1035] = xx[1763] + xx[638] * xx[254] - xx[640] * xx[203];
  xx[1036] = xx[1764] + xx[486] * xx[427] - xx[213] * xx[203];
  xx[1037] = xx[1765] + xx[637] * xx[427] - xx[636] * xx[203];
  xx[1038] = xx[1766] + xx[640] * xx[427] - xx[638] * xx[203];
  xx[1039] = xx[1767] - (xx[2056] + xx[583]);
  xx[1040] = xx[1768] - (xx[2057] + xx[584]);
  xx[1041] = xx[1769] - (xx[2058] + xx[585]);
  pm_math_matrix3x3Compose(xx + 2341, xx + 1033, xx + 577);
  xx[213] = xx[18] * xx[485] * state[30] * state[30];
  xx[485] = xx[482] * state[30] * state[30];
  xx[482] = xx[18] * xx[571] * state[30] * state[30];
  xx[486] = xx[18] * (xx[157] - xx[211]);
  xx[157] = (xx[36] + xx[316] * xx[316]) * xx[18] - xx[3];
  xx[1033] = xx[970] - (xx[32] * xx[37] - xx[245] * xx[31] + xx[460] * xx[479])
    + xx[1016] + xx[1048] + xx[215] * xx[383] + xx[586] * xx[435] - (xx[437] *
    xx[714] + xx[453] * xx[723]) + (xx[1583] + xx[577]) * xx[18];
  xx[1034] = xx[971] - (xx[213] * xx[37] + xx[31] * xx[485] - xx[482] * xx[479])
    + xx[1017] + xx[1049] + xx[654] * xx[383] + xx[569] * xx[435] - (xx[838] *
    xx[437] + xx[453] * xx[868]) + (xx[1584] + xx[578]) * xx[18];
  xx[1035] = xx[972] + xx[1018] + xx[1050] + xx[504] * xx[383] + xx[573] * xx
    [435] + xx[866] * xx[437] - xx[711] * xx[453] + (xx[1585] + xx[579]) * xx[18];
  xx[1036] = xx[973] - (xx[171] * xx[32] - xx[245] * xx[38] + xx[460] * xx[486])
    + xx[1019] + xx[1051] + xx[29] * xx[215] + xx[586] * xx[30] - (xx[156] * xx
    [714] + xx[202] * xx[723]) + (xx[1586] + xx[580]) * xx[18];
  xx[1037] = xx[974] - (xx[213] * xx[171] + xx[485] * xx[38] - xx[482] * xx[486])
    + xx[1020] + xx[1052] + xx[654] * xx[29] + xx[30] * xx[569] - (xx[156] * xx
    [838] + xx[202] * xx[868]) + (xx[1587] + xx[581]) * xx[18];
  xx[1038] = xx[975] + xx[1021] + xx[1053] + xx[504] * xx[29] + xx[573] * xx[30]
    + xx[156] * xx[866] - xx[711] * xx[202] + (xx[1588] + xx[582]) * xx[18];
  xx[1039] = xx[976] - (xx[216] * xx[32] - xx[245] * xx[212] + xx[460] * xx[157])
    + xx[1022] + xx[1054] + xx[217] * xx[215] + xx[586] * xx[218] - (xx[225] *
    xx[714] + xx[226] * xx[723]) + (xx[1589] + xx[583]) * xx[18];
  xx[1040] = xx[977] - (xx[216] * xx[213] + xx[212] * xx[485] - xx[482] * xx[157])
    + xx[1023] + xx[1055] + xx[654] * xx[217] + xx[218] * xx[569] - (xx[225] *
    xx[838] + xx[226] * xx[868]) + (xx[1590] + xx[584]) * xx[18];
  xx[1041] = xx[978] + xx[1024] + xx[1056] + xx[504] * xx[217] + xx[573] * xx
    [218] + xx[225] * xx[866] - xx[226] * xx[711] + (xx[1591] + xx[585]) * xx[18];
  pm_math_matrix3x3Xform(xx + 1033, xx + 236, xx + 577);
  xx[32] = xx[199] * xx[625] + xx[624] * xx[480];
  xx[580] = - xx[619];
  xx[581] = xx[606];
  xx[582] = xx[32];
  pm_math_cross3(xx + 935, xx + 580, xx + 583);
  xx[36] = state[30] * state[30];
  xx[580] = (xx[18] * (xx[583] - xx[959]) - xx[624]) * xx[36];
  xx[581] = ((xx[931] + xx[584]) * xx[18] - xx[625]) * xx[36];
  xx[582] = xx[36] * (xx[205] * xx[32] + xx[585]) * xx[18];
  pm_math_quatXform(xx + 313, xx + 580, xx + 583);
  pm_math_matrix3x3Xform(xx + 746, xx + 631, xx + 580);
  xx[636] = xx[580] + xx[208];
  xx[637] = xx[581] + xx[214];
  xx[638] = xx[582] + xx[223];
  pm_math_quatXform(xx + 309, xx + 636, xx + 580);
  pm_math_matrix3x3Xform(xx + 852, xx + 799, xx + 636);
  xx[651] = xx[636] + xx[594];
  xx[652] = xx[637] + xx[595];
  xx[653] = xx[638] + xx[596];
  pm_math_quatXform(xx + 305, xx + 651, xx + 636);
  pm_math_matrix3x3Xform(xx + 1949, xx + 813, xx + 651);
  xx[721] = xx[651] + xx[657];
  xx[722] = xx[652] + xx[658];
  xx[723] = xx[653] + xx[659];
  pm_math_quatXform(xx + 301, xx + 721, xx + 651);
  xx[32] = xx[808] * xx[228] - xx[809] * xx[261] + xx[204];
  xx[36] = xx[809] * xx[228] - xx[808] * xx[431] - xx[209];
  xx[199] = xx[36] * xx[169];
  xx[205] = xx[32] * xx[169];
  xx[211] = xx[36] * xx[154] - xx[32] * xx[161];
  xx[721] = - xx[199];
  xx[722] = xx[205];
  xx[723] = xx[211];
  pm_math_cross3(xx + 289, xx + 721, xx + 790);
  xx[213] = xx[808] * xx[162] + xx[809] * xx[164];
  xx[215] = xx[809] - xx[18] * xx[213] * xx[164] + xx[433];
  xx[245] = xx[808] - xx[18] * xx[213] * xx[162] + xx[434];
  xx[213] = xx[955] * state[30];
  xx[460] = xx[960] * state[30];
  xx[480] = xx[18] * xx[961] * state[30];
  xx[721] = xx[213] - xx[630] * xx[345];
  xx[722] = xx[460] + xx[325] * xx[627] - xx[345] * xx[626];
  xx[723] = xx[480] + xx[630] * xx[325];
  pm_math_quatXform(xx + 219, xx + 721, xx + 624);
  xx[482] = xx[287] + xx[624];
  pm_math_cross3(xx + 1085, xx + 799, xx + 721);
  xx[485] = xx[243] + xx[625];
  xx[504] = xx[626] - xx[248];
  xx[624] = xx[482] + xx[721];
  xx[625] = xx[485] + xx[722];
  xx[626] = xx[504] + xx[723];
  pm_math_quatXform(xx + 193, xx + 624, xx + 721);
  xx[569] = xx[339] + xx[721];
  pm_math_cross3(xx + 1061, xx + 813, xx + 624);
  xx[571] = xx[340] + xx[722];
  xx[573] = xx[341] + xx[723];
  xx[721] = xx[569] + xx[624];
  xx[722] = xx[571] + xx[625];
  xx[723] = xx[573] + xx[626];
  pm_math_quatXform(xx + 183, xx + 721, xx + 624);
  xx[586] = xx[674] + xx[624];
  xx[606] = xx[586] - xx[808] * state[10];
  xx[619] = xx[675] + xx[625];
  xx[624] = xx[619] + xx[809] * state[10];
  xx[625] = xx[624] * xx[162] + xx[164] * xx[606];
  xx[626] = (xx[384] + xx[606] - xx[18] * xx[625] * xx[164]) * inputDot[6];
  xx[606] = xx[169] * xx[626];
  xx[627] = (xx[430] + xx[624] - xx[18] * xx[625] * xx[162]) * inputDot[6];
  xx[624] = xx[169] * xx[627];
  xx[625] = xx[154] * xx[626] + xx[627] * xx[161];
  xx[721] = - xx[606];
  xx[722] = - xx[624];
  xx[723] = xx[625];
  pm_math_cross3(xx + 289, xx + 721, xx + 799);
  xx[630] = xx[619] * state[10];
  xx[619] = xx[586] * state[10];
  xx[586] = xx[630] * xx[164] - xx[162] * xx[619];
  xx[721] = xx[569];
  xx[722] = xx[571];
  xx[723] = xx[573];
  pm_math_cross3(xx + 1061, xx + 721, xx + 813);
  pm_math_quatXform(xx + 183, xx + 813, xx + 721);
  xx[813] = xx[482];
  xx[814] = xx[485];
  xx[815] = xx[504];
  pm_math_cross3(xx + 1085, xx + 813, xx + 828);
  pm_math_quatXform(xx + 193, xx + 828, xx + 813);
  xx[828] = xx[460] * xx[345];
  xx[829] = xx[480] * xx[325] - xx[213] * xx[345];
  xx[830] = - (xx[460] * xx[325]);
  pm_math_quatXform(xx + 219, xx + 828, xx + 935);
  pm_math_quatXform(xx + 193, xx + 935, xx + 828);
  xx[935] = xx[813] + xx[828];
  xx[936] = xx[814] + xx[829];
  xx[937] = xx[815] + xx[830];
  pm_math_quatXform(xx + 183, xx + 935, xx + 813);
  xx[213] = xx[721] + xx[813];
  xx[460] = xx[722] + xx[814];
  xx[480] = xx[460] * xx[162] + xx[213] * xx[164];
  xx[482] = xx[723] + xx[815];
  xx[721] = xx[18] * xx[164] * xx[586] - xx[630] + xx[213] - xx[18] * xx[480] *
    xx[164];
  xx[722] = xx[619] + xx[18] * xx[162] * xx[586] + xx[460] - xx[18] * xx[480] *
    xx[162];
  xx[723] = xx[482] - (xx[162] * xx[482] * xx[162] + xx[482] * xx[164] * xx[164])
    * xx[18];
  pm_math_quatXform(xx + 335, xx + 721, xx + 813);
  xx[213] = xx[1532] * xx[1532];
  xx[460] = xx[1137] * xx[1532];
  xx[480] = xx[166] * xx[1092];
  xx[482] = xx[166] * xx[1137];
  xx[485] = xx[1092] * xx[1532];
  xx[504] = xx[1137] * xx[1092];
  xx[569] = xx[166] * xx[1532];
  xx[970] = (xx[213] + xx[166] * xx[166]) * xx[18] - xx[3];
  xx[971] = xx[18] * (xx[460] - xx[480]);
  xx[972] = - ((xx[482] + xx[485]) * xx[18]);
  xx[973] = - ((xx[480] + xx[460]) * xx[18]);
  xx[974] = (xx[213] + xx[1092] * xx[1092]) * xx[18] - xx[3];
  xx[975] = xx[18] * (xx[504] - xx[569]);
  xx[976] = xx[18] * (xx[485] - xx[482]);
  xx[977] = (xx[504] + xx[569]) * xx[18];
  xx[978] = (xx[213] + xx[1137] * xx[1137]) * xx[18] - xx[3];
  xx[166] = xx[58] * state[43];
  xx[213] = xx[58] * state[44];
  xx[460] = state[43] - (xx[58] * xx[166] - xx[59] * xx[213]) * xx[18];
  xx[480] = xx[1563] * xx[460] - xx[1522] * state[45];
  xx[482] = state[44] - xx[18] * (xx[59] * xx[166] + xx[58] * xx[213]);
  xx[166] = xx[482] * xx[1522] - xx[1562] * xx[460];
  xx[213] = xx[482] * xx[1563] - xx[1562] * state[45];
  xx[485] = xx[1581] * state[45] - xx[1544] * xx[460];
  xx[504] = xx[482] * xx[1581] - xx[460] * xx[1524];
  xx[569] = xx[1524] * state[45] - xx[482] * xx[1544];
  xx[571] = xx[460] * xx[1513] - xx[1515] * state[45];
  xx[573] = xx[482] * xx[1515] - xx[1539] * xx[460];
  xx[586] = xx[1539] * state[45] - xx[482] * xx[1513];
  xx[1016] = xx[480] * state[45] - xx[482] * xx[166];
  xx[1017] = xx[213] * state[45] + xx[166] * xx[460];
  xx[1018] = - (xx[482] * xx[213] + xx[460] * xx[480]);
  xx[1019] = - (xx[485] * state[45] + xx[482] * xx[504]);
  xx[1020] = xx[460] * xx[504] - xx[569] * state[45];
  xx[1021] = xx[482] * xx[569] + xx[485] * xx[460];
  xx[1022] = xx[571] * state[45] - xx[482] * xx[573];
  xx[1023] = xx[460] * xx[573] - xx[586] * state[45];
  xx[1024] = xx[482] * xx[586] - xx[460] * xx[571];
  pm_math_matrix3x3Compose(xx + 970, xx + 1016, xx + 1033);
  xx[166] = xx[1090] * xx[1138];
  xx[213] = xx[1505] * xx[159];
  xx[480] = xx[166] - xx[213];
  xx[485] = xx[18] * xx[480];
  xx[504] = xx[18] * xx[1139] * xx[1470] * state[38] * state[38];
  xx[569] = (xx[18] * xx[1139] * xx[1139] - xx[3]) * state[38] * state[38];
  xx[571] = xx[159] * xx[159];
  xx[573] = (xx[571] + xx[1090] * xx[1090]) * xx[18] - xx[3];
  xx[586] = xx[485] * xx[504] - xx[569] * xx[573];
  xx[619] = (xx[18] * xx[1470] * xx[1470] - xx[3]) * state[38] * state[38];
  xx[630] = xx[504] * xx[573] - xx[485] * xx[619];
  xx[640] = xx[573] * inputDot[11] * inputDot[11];
  xx[642] = xx[1521] * xx[1470] - xx[1139] * xx[1508];
  xx[654] = xx[642] * xx[642];
  xx[709] = xx[1470] * xx[1523] + xx[1139] * xx[1506];
  xx[711] = xx[709] * xx[709];
  xx[714] = (xx[654] + xx[711]) * xx[18] - xx[3];
  xx[719] = xx[18] * xx[480] * inputDot[11] * inputDot[11];
  xx[480] = xx[1521] * xx[1139] + xx[1470] * xx[1508];
  xx[721] = xx[642] * xx[480];
  xx[722] = xx[1470] * xx[1506] - xx[1139] * xx[1523];
  xx[723] = xx[722] * xx[709];
  xx[727] = (xx[721] - xx[723]) * xx[18];
  xx[940] = xx[159];
  xx[941] = xx[1090];
  xx[942] = xx[1138];
  xx[943] = xx[1505];
  xx[970] = xx[642];
  xx[971] = - xx[709];
  xx[972] = xx[722];
  xx[973] = xx[480];
  pm_math_quatCompose(xx + 940, xx + 970, xx + 974);
  xx[769] = xx[974] * xx[974];
  xx[771] = xx[975] * xx[976];
  xx[777] = xx[974] * xx[977];
  xx[793] = xx[975] * xx[977];
  xx[802] = xx[974] * xx[976];
  xx[803] = xx[976] * xx[977];
  xx[808] = xx[974] * xx[975];
  xx[1048] = (xx[769] + xx[975] * xx[975]) * xx[18] - xx[3];
  xx[1049] = xx[18] * (xx[771] - xx[777]);
  xx[1050] = (xx[793] + xx[802]) * xx[18];
  xx[1051] = (xx[771] + xx[777]) * xx[18];
  xx[1052] = (xx[769] + xx[976] * xx[976]) * xx[18] - xx[3];
  xx[1053] = xx[18] * (xx[803] - xx[808]);
  xx[1054] = xx[18] * (xx[793] - xx[802]);
  xx[1055] = (xx[803] + xx[808]) * xx[18];
  xx[1056] = (xx[769] + xx[977] * xx[977]) * xx[18] - xx[3];
  xx[769] = xx[709] * inputDot[11];
  xx[771] = xx[722] * inputDot[11];
  xx[828] = - (xx[18] * (xx[769] * xx[480] + xx[642] * xx[771]));
  xx[829] = (xx[771] * xx[480] - xx[642] * xx[769]) * xx[18];
  xx[830] = inputDot[11] - (xx[769] * xx[709] + xx[722] * xx[771]) * xx[18];
  pm_math_matrix3x3PostCross(xx + 1048, xx + 828, xx + 1532);
  xx[769] = xx[1521] * state[38];
  xx[771] = xx[1508] * state[38];
  xx[777] = (xx[769] * xx[1506] + xx[771] * xx[1523]) * xx[18];
  xx[793] = xx[18] * (xx[769] * xx[1523] - xx[771] * xx[1506]);
  xx[802] = state[38] - (xx[771] * xx[1508] + xx[1521] * xx[769]) * xx[18];
  xx[828] = xx[777] + xx[460];
  xx[829] = xx[793] + xx[482];
  xx[830] = xx[802] + state[45];
  pm_math_matrix3x3PostCross(xx + 1532, xx + 828, xx + 1048);
  xx[769] = xx[1090] * xx[1505];
  xx[771] = xx[1138] * xx[159];
  xx[803] = xx[166] + xx[213];
  xx[166] = xx[803] * xx[18];
  xx[213] = (xx[571] + xx[1138] * xx[1138]) * xx[18] - xx[3];
  xx[808] = xx[1505] * xx[1138];
  xx[809] = xx[1090] * xx[159];
  xx[828] = xx[769] - xx[771];
  xx[829] = xx[18] * xx[828];
  xx[830] = xx[808] + xx[809];
  xx[837] = xx[830] * xx[18];
  xx[1532] = xx[573];
  xx[1533] = xx[485];
  xx[1534] = (xx[769] + xx[771]) * xx[18];
  xx[1535] = xx[166];
  xx[1536] = xx[213];
  xx[1537] = xx[18] * (xx[808] - xx[809]);
  xx[1538] = xx[829];
  xx[1539] = xx[837];
  xx[1540] = (xx[571] + xx[1505] * xx[1505]) * xx[18] - xx[3];
  xx[485] = xx[18] * (xx[723] + xx[721]);
  xx[571] = xx[722] * xx[642];
  xx[573] = xx[480] * xx[709];
  xx[721] = (xx[571] - xx[573]) * xx[18];
  xx[723] = xx[722] * xx[722];
  xx[769] = (xx[654] + xx[723]) * xx[18] - xx[3];
  xx[771] = xx[722] * xx[480];
  xx[722] = xx[642] * xx[709];
  xx[642] = xx[18] * (xx[771] + xx[722]);
  xx[709] = - (xx[18] * (xx[573] + xx[571]));
  xx[1583] = xx[714];
  xx[1584] = - xx[485];
  xx[1585] = xx[721];
  xx[1586] = xx[727];
  xx[1587] = xx[769];
  xx[1588] = xx[642];
  xx[1589] = xx[709];
  xx[1590] = (xx[771] - xx[722]) * xx[18];
  xx[1591] = (xx[654] + xx[480] * xx[480]) * xx[18] - xx[3];
  xx[935] = xx[777];
  xx[936] = xx[793];
  xx[937] = xx[802];
  pm_math_matrix3x3PostCross(xx + 1583, xx + 935, xx + 1761);
  xx[935] = xx[460];
  xx[936] = xx[482];
  xx[937] = state[45];
  pm_math_matrix3x3PostCross(xx + 1761, xx + 935, xx + 1583);
  pm_math_matrix3x3Compose(xx + 1532, xx + 1583, xx + 1761);
  xx[480] = xx[504] * xx[213] - xx[569] * xx[166];
  xx[571] = xx[504] * xx[166] - xx[619] * xx[213];
  xx[166] = xx[18] * xx[803] * inputDot[11] * inputDot[11];
  xx[573] = xx[213] * inputDot[11] * inputDot[11];
  xx[213] = xx[504] * xx[837] - xx[829] * xx[569];
  xx[654] = xx[504] * xx[829] - xx[619] * xx[837];
  xx[777] = xx[18] * xx[828] * inputDot[11] * inputDot[11];
  xx[793] = xx[18] * xx[830] * inputDot[11] * inputDot[11];
  xx[1532] = xx[1033] + xx[586] * xx[1522] + xx[1581] * xx[630] - (xx[640] * xx
    [714] + xx[719] * xx[727]) + (xx[1048] + xx[1761]) * xx[18];
  xx[1533] = xx[1034] + xx[630] * xx[1524] + xx[1562] * xx[586] - (xx[719] * xx
    [769] - xx[485] * xx[640]) + (xx[1049] + xx[1762]) * xx[18];
  xx[1534] = xx[1035] + xx[1563] * xx[586] + xx[1544] * xx[630] - (xx[640] * xx
    [721] + xx[719] * xx[642]) + (xx[1050] + xx[1763]) * xx[18];
  xx[1535] = xx[1036] + xx[480] * xx[1522] + xx[1581] * xx[571] - (xx[166] * xx
    [714] + xx[727] * xx[573]) + (xx[1051] + xx[1764]) * xx[18];
  xx[1536] = xx[1037] + xx[571] * xx[1524] + xx[1562] * xx[480] - (xx[573] * xx
    [769] - xx[485] * xx[166]) + (xx[1052] + xx[1765]) * xx[18];
  xx[1537] = xx[1038] + xx[1563] * xx[480] + xx[1544] * xx[571] - (xx[166] * xx
    [721] + xx[642] * xx[573]) + (xx[1053] + xx[1766]) * xx[18];
  xx[1538] = xx[1039] + xx[213] * xx[1522] + xx[1581] * xx[654] - (xx[777] * xx
    [714] + xx[793] * xx[727]) + (xx[1054] + xx[1767]) * xx[18];
  xx[1539] = xx[1040] + xx[654] * xx[1524] + xx[1562] * xx[213] - (xx[793] * xx
    [769] - xx[485] * xx[777]) + (xx[1055] + xx[1768]) * xx[18];
  xx[1540] = xx[1041] + xx[1563] * xx[213] + xx[1544] * xx[654] - (xx[777] * xx
    [721] + xx[642] * xx[793]) + (xx[1056] + xx[1769]) * xx[18];
  pm_math_matrix3x3Xform(xx + 1532, xx + 902, xx + 828);
  pm_math_matrix3x3Xform(xx + 1016, xx + 74, xx + 955);
  pm_math_quatXform(xx + 1576, xx + 955, xx + 959);
  xx[213] = state[38] * state[38];
  xx[480] = xx[1551] * xx[1139] - xx[1546] * xx[1470];
  xx[485] = xx[1546] + xx[18] * xx[480] * xx[1470];
  xx[571] = xx[1530] * xx[504] - xx[1529] * xx[569] - xx[213] * xx[485];
  xx[569] = xx[1551] - xx[18] * xx[480] * xx[1139];
  xx[480] = xx[1529] * xx[504] - xx[1530] * xx[619] + xx[213] * xx[569];
  xx[213] = xx[1505] * xx[480];
  xx[504] = xx[1505] * xx[571];
  xx[586] = xx[1090] * xx[480] - xx[571] * xx[1138];
  xx[955] = - xx[213];
  xx[956] = xx[504];
  xx[957] = xx[586];
  pm_math_cross3(xx + 1555, xx + 955, xx + 970);
  xx[619] = inputDot[11] * inputDot[11];
  xx[630] = 0.02520954632904374;
  xx[642] = xx[630] * xx[1138];
  xx[654] = xx[1505] * xx[630];
  xx[714] = xx[1505] * xx[654];
  xx[721] = xx[1139] * xx[1530] + xx[1529] * xx[1470];
  xx[727] = 0.03194045367095631;
  xx[769] = xx[1529] - (xx[18] * xx[721] * xx[1470] - xx[485]) + xx[727];
  xx[802] = xx[1530] - xx[18] * xx[721] * xx[1139] - xx[569];
  pm_math_cross3(xx + 935, xx + 74, xx + 955);
  pm_math_quatXform(xx + 1525, xx + 955, xx + 1016);
  xx[721] = xx[1016] - xx[1530] * state[38];
  xx[803] = xx[1017] + xx[1529] * state[38];
  xx[808] = xx[803] * xx[1139] + xx[1470] * xx[721];
  xx[809] = ((xx[1551] - xx[1553]) * state[38] + xx[721] - xx[18] * xx[808] *
             xx[1470]) * inputDot[11];
  xx[721] = xx[1505] * xx[809];
  xx[837] = ((xx[1546] - xx[1558]) * state[38] + xx[803] - xx[18] * xx[808] *
             xx[1139]) * inputDot[11];
  xx[803] = xx[1505] * xx[837];
  xx[808] = xx[1090] * xx[809] + xx[837] * xx[1138];
  xx[1018] = - xx[721];
  xx[1019] = - xx[803];
  xx[1020] = xx[808];
  pm_math_cross3(xx + 1555, xx + 1018, xx + 1021);
  xx[838] = xx[1017] * state[38];
  xx[866] = xx[1016] * state[38];
  xx[868] = xx[838] * xx[1470] - xx[1139] * xx[866];
  xx[873] = xx[18] * xx[1470] * xx[868] - xx[838];
  xx[838] = xx[866] + xx[18] * xx[1139] * xx[868];
  xx[866] = xx[1505] * xx[838];
  xx[868] = xx[1505] * xx[873];
  xx[874] = xx[1090] * xx[838] - xx[1138] * xx[873];
  xx[1016] = - xx[866];
  xx[1017] = xx[868];
  xx[1018] = xx[874];
  pm_math_cross3(xx + 1555, xx + 1016, xx + 1024);
  xx[1016] = xx[717];
  xx[1017] = - ((xx[869] + xx[641]) * xx[18]);
  xx[1018] = xx[3] - (xx[713] + xx[867]) * xx[18];
  pm_math_cross3(xx + 1016, xx + 236, xx + 1027);
  pm_math_quatXform(xx + 905, xx + 1027, xx + 1016);
  xx[641] = xx[215] * xx[169];
  xx[713] = xx[169] * xx[245];
  xx[717] = xx[215] * xx[154] + xx[245] * xx[161];
  xx[905] = - xx[641];
  xx[906] = - xx[713];
  xx[907] = xx[717];
  pm_math_cross3(xx + 289, xx + 905, xx + 1027);
  pm_math_quatInverseXform(xx + 620, xx + 804, xx + 905);
  pm_math_cross3(xx + 804, xx + 631, xx + 1033);
  xx[867] = xx[1210] + xx[361];
  xx[1036] = xx[564] + xx[1033];
  xx[1037] = xx[566] + xx[1034];
  xx[1038] = xx[867] + xx[1035];
  pm_math_quatInverseXform(xx + 620, xx + 1036, xx + 1033);
  xx[869] = xx[865] + xx[484] * xx[907] + xx[588] * xx[1034] - xx[591] * xx[1033];
  xx[905] = xx[709];
  xx[906] = (xx[771] - xx[722]) * xx[18];
  xx[907] = xx[3] - (xx[711] + xx[723]) * xx[18];
  pm_math_cross3(xx + 905, xx + 902, xx + 1033);
  pm_math_quatXform(xx + 974, xx + 1033, xx + 905);
  xx[709] = xx[1505] * xx[769];
  xx[711] = xx[1505] * xx[802];
  xx[722] = xx[1090] * xx[769] + xx[1138] * xx[802];
  xx[973] = - xx[709];
  xx[974] = - xx[711];
  xx[975] = xx[722];
  pm_math_cross3(xx + 1555, xx + 973, xx + 976);
  xx[723] = xx[1090] * xx[630];
  xx[771] = xx[654] * xx[159];
  pm_math_quatInverseXform(xx + 940, xx + 39, xx + 973);
  xx[865] = xx[1139] * xx[974] + xx[973] * xx[1470];
  xx[901] = xx[973] - xx[18] * xx[865] * xx[1470];
  xx[908] = xx[974] - xx[18] * xx[865] * xx[1139];
  xx[865] = xx[975] + inputDot[11];
  xx[909] = xx[865] - (xx[1139] * xx[865] * xx[1139] + xx[865] * xx[1470] * xx
                       [1470]) * xx[18];
  xx[915] = xx[909] + state[38];
  xx[1033] = xx[901];
  xx[1034] = xx[908];
  xx[1035] = xx[915];
  xx[1036] = xx[55] * xx[901];
  xx[1037] = xx[56] * xx[908];
  xx[1038] = xx[915] * xx[57];
  pm_math_cross3(xx + 1033, xx + 1036, xx + 1039);
  pm_math_quatInverseXform(xx + 1525, xx + 1033, xx + 1036);
  xx[930] = xx[1036] + xx[460];
  xx[460] = xx[1037] + xx[482];
  xx[482] = xx[1038] + state[45];
  xx[1042] = xx[930];
  xx[1043] = xx[460];
  xx[1044] = xx[482];
  xx[1048] = xx[930] * xx[83];
  xx[1049] = xx[460] * xx[84];
  xx[1050] = xx[482] * xx[85];
  pm_math_cross3(xx + 1042, xx + 1048, xx + 1051);
  pm_math_cross3(xx + 1036, xx + 935, xx + 1042);
  xx[931] = xx[1051] + xx[83] * xx[1042];
  xx[933] = xx[1052] + xx[84] * xx[1043];
  xx[935] = xx[1036] + xx[930];
  xx[936] = xx[1037] + xx[460];
  xx[937] = xx[1038] + xx[482];
  pm_math_cross3(xx + 935, xx + 955, xx + 1036);
  pm_math_cross3(xx + 1033, xx + 1529, xx + 935);
  pm_math_cross3(xx + 1033, xx + 935, xx + 955);
  pm_math_quatInverseXform(xx + 1525, xx + 955, xx + 935);
  xx[460] = (xx[1036] + xx[935]) * xx[78];
  xx[482] = (xx[1037] + xx[936]) * xx[78];
  xx[930] = (xx[1038] + xx[937]) * xx[78];
  xx[935] = xx[460];
  xx[936] = xx[482];
  xx[937] = xx[930];
  xx[944] = xx[931] - xx[933] * xx[94] + pm_math_dot3(xx + 116, xx + 935);
  xx[945] = xx[931] * xx[94] + xx[933] + pm_math_dot3(xx + 758, xx + 935);
  xx[935] = xx[1053] + xx[85] * xx[1044];
  xx[936] = xx[935] + xx[72] * xx[482] - xx[73] * xx[460];
  xx[955] = - xx[944];
  xx[956] = - xx[945];
  xx[957] = - xx[936];
  solveSymmetricPosDef(xx + 1567, xx + 955, 3, 1, xx + 1033, xx + 1036);
  xx[955] = xx[931] + xx[83] * xx[1033] + xx[145] * xx[1034];
  xx[956] = xx[933] - xx[718] * xx[1033] + xx[84] * xx[1034];
  xx[957] = xx[935] + xx[85] * xx[1035];
  pm_math_quatXform(xx + 1525, xx + 955, xx + 1036);
  xx[955] = xx[460] + xx[736] * xx[1033] - xx[811] * xx[1034] - xx[875] * xx
    [1035];
  xx[956] = xx[482] + xx[811] * xx[1033] + xx[736] * xx[1034] + xx[913] * xx
    [1035];
  xx[957] = xx[930] + xx[914] * xx[1033] + xx[932] * xx[1034];
  pm_math_quatXform(xx + 1525, xx + 955, xx + 1042);
  pm_math_cross3(xx + 1529, xx + 1042, xx + 955);
  xx[937] = xx[908] * state[38];
  xx[950] = xx[901] * state[38];
  xx[951] = xx[1652] - xx[1616];
  xx[955] = xx[1653] - xx[1619];
  xx[956] = xx[1655] - xx[1617];
  xx[965] = xx[1656] - xx[1620];
  xx[966] = xx[1660] - xx[1624];
  xx[1048] = xx[951];
  xx[1049] = xx[955];
  xx[1050] = xx[1654] - xx[1622];
  xx[1051] = xx[956];
  xx[1052] = xx[965];
  xx[1053] = xx[1657] - xx[1623];
  xx[1054] = xx[1143];
  xx[1055] = xx[1514];
  xx[1056] = xx[966];
  xx[1044] = xx[973];
  xx[1045] = xx[974];
  xx[1046] = xx[865];
  xx[979] = 7.174999998974562e-3;
  xx[1057] = xx[727] + xx[485];
  xx[1058] = - xx[569];
  xx[1059] = xx[180] - ((xx[1139] * xx[979] * xx[1139] + xx[979] * xx[1470] *
    xx[1470]) * xx[18] - xx[979]);
  pm_math_cross3(xx + 1044, xx + 1057, xx + 1096);
  pm_math_cross3(xx + 1044, xx + 1096, xx + 1109);
  xx[485] = xx[1139] * xx[1110] + xx[1109] * xx[1470];
  xx[569] = xx[909] + xx[915];
  xx[727] = xx[1546] * state[38];
  xx[909] = xx[1109] - xx[18] * xx[485] * xx[1470] - xx[569] * xx[727];
  xx[915] = xx[1551] * state[38];
  xx[979] = xx[569] * xx[915] + xx[1110] - xx[18] * xx[485] * xx[1139];
  xx[485] = (xx[901] + xx[901]) * xx[727] - (xx[908] + xx[908]) * xx[915] + xx
    [1111] - (xx[1139] * xx[1139] * xx[1111] + xx[1111] * xx[1470] * xx[1470]) *
    xx[18];
  xx[1044] = xx[909];
  xx[1045] = xx[979];
  xx[1046] = xx[485];
  pm_math_matrix3x3Xform(xx + 1048, xx + 1044, xx + 1096);
  xx[569] = xx[937] * (xx[1649] - xx[1667] - xx[1663] - xx[1685]) - xx[950] *
    (xx[1650] - xx[1668] - xx[1666] - xx[1686]) + xx[1098];
  xx[1048] = xx[1545];
  xx[1049] = xx[1671];
  xx[1050] = xx[1672];
  xx[1051] = xx[1673];
  xx[1052] = xx[1602];
  xx[1053] = xx[1675];
  xx[1054] = xx[1676];
  xx[1055] = xx[1677];
  xx[1056] = xx[398] + xx[1678];
  pm_math_matrix3x3Xform(xx + 1048, xx + 1044, xx + 1096);
  xx[727] = xx[937] * xx[951] - xx[950] * xx[956] + xx[1096];
  xx[901] = xx[937] * xx[955] - xx[950] * xx[965] + xx[1097];
  xx[1044] = (xx[1645] - xx[1663] - xx[1667] - xx[1681] + xx[1551] * xx[951] +
              xx[1546] * xx[955]) / xx[1611];
  xx[1045] = (xx[1648] - xx[1666] - xx[1668] - xx[1684] + xx[1551] * xx[956] +
              xx[1546] * xx[965]) / xx[1611];
  xx[1046] = xx[1516] / xx[1611];
  pm_math_quatInverseXform(xx + 940, xx + 24, xx + 1048);
  xx[908] = xx[1048] + xx[974] * inputDot[11];
  xx[915] = xx[1049] - xx[973] * inputDot[11];
  xx[951] = xx[1139] * xx[915] + xx[908] * xx[1470];
  xx[955] = xx[908] - xx[18] * xx[951] * xx[1470];
  xx[956] = xx[915] - xx[18] * xx[951] * xx[1139];
  xx[951] = xx[1050] + inputDdot[11];
  xx[965] = xx[951] - (xx[1139] * xx[951] * xx[1139] + xx[951] * xx[1470] * xx
                       [1470]) * xx[18];
  xx[1048] = xx[955];
  xx[1049] = xx[956];
  xx[1050] = xx[965];
  xx[1051] = xx[1582] / xx[1611];
  xx[1052] = xx[1603] / xx[1611];
  xx[1053] = (xx[966] + xx[1551] * xx[1676] + xx[1546] * xx[1677]) / xx[1611];
  xx[966] = xx[5] * xx[1138];
  xx[974] = xx[1090] * xx[5] - xx[654];
  xx[1054] = - xx[966];
  xx[1055] = xx[974];
  xx[1056] = xx[642];
  pm_math_cross3(xx + 1555, xx + 1054, xx + 1096);
  xx[1004] = xx[642] * xx[159];
  xx[1054] = 0.03266483819494233 - ((xx[1096] - xx[966] * xx[159]) * xx[18] -
    xx[630]);
  xx[1055] = 0.02992259737327991 - (xx[159] * xx[974] + xx[1097]) * xx[18];
  xx[1056] = 0.1534399415345039 - (xx[18] * (xx[1098] + xx[1004]) - xx[5]);
  pm_math_cross3(xx + 24, xx + 1054, xx + 1096);
  xx[1109] = xx[4] + xx[1096];
  xx[1110] = xx[7] + xx[1097];
  xx[1111] = xx[21] + xx[1098];
  pm_math_quatInverseXform(xx + 940, xx + 1109, xx + 1096);
  pm_math_cross3(xx + 39, xx + 1054, xx + 1109);
  pm_math_cross3(xx + 39, xx + 1109, xx + 1054);
  pm_math_quatInverseXform(xx + 940, xx + 1054, xx + 1109);
  xx[5] = xx[630] * inputDot[11];
  xx[940] = xx[908];
  xx[941] = xx[915];
  xx[942] = xx[951];
  pm_math_cross3(xx + 940, xx + 1057, xx + 1054);
  xx[908] = xx[1096] + xx[1109] - (xx[975] + xx[865]) * xx[5] + xx[1054];
  xx[865] = xx[1097] + xx[1110] + xx[630] * inputDdot[11] + xx[1055];
  xx[915] = xx[865] * xx[1139] + xx[908] * xx[1470];
  xx[940] = xx[908] - xx[18] * xx[915] * xx[1470];
  xx[908] = xx[865] - xx[18] * xx[915] * xx[1139];
  xx[865] = xx[1098] + (xx[973] + xx[973]) * xx[5] + xx[1111] + xx[1056];
  xx[5] = xx[865] - (xx[1139] * xx[865] * xx[1139] + xx[865] * xx[1470] * xx
                     [1470]) * xx[18];
  xx[941] = xx[940];
  xx[942] = xx[908];
  xx[943] = xx[5];
  xx[865] = pm_math_dot3(xx + 1044, xx + 1048) + pm_math_dot3(xx + 1051, xx +
    941);
  xx[915] = (xx[1041] + xx[1038] + xx[957] + xx[569] + (xx[1042] + xx[727]) *
             xx[1551] + (xx[1043] + xx[901]) * xx[1546]) / xx[1611] + xx[865];
  xx[941] = xx[955] + xx[937];
  xx[937] = xx[956] - xx[950];
  xx[955] = xx[941];
  xx[956] = xx[937];
  xx[957] = xx[965] - xx[915];
  pm_math_quatInverseXform(xx + 1525, xx + 955, xx + 973);
  pm_math_cross3(xx + 955, xx + 1529, xx + 1036);
  xx[942] = xx[5] + xx[485];
  xx[955] = xx[940] - xx[915] * xx[1551] + xx[909] + xx[1036];
  xx[956] = xx[908] - xx[915] * xx[1546] + xx[979] + xx[1037];
  xx[957] = xx[942] + xx[1038];
  pm_math_quatInverseXform(xx + 1525, xx + 955, xx + 1036);
  xx[5] = xx[1033] - (pm_math_dot3(xx + 1613, xx + 973) + pm_math_dot3(xx + 1691,
    xx + 1036));
  xx[485] = xx[1034] - (pm_math_dot3(xx + 1697, xx + 973) + pm_math_dot3(xx +
    1700, xx + 1036));
  xx[943] = xx[1035] - (pm_math_dot3(xx + 1703, xx + 973) + pm_math_dot3(xx +
    1625, xx + 1036));
  pm_math_matrix3x3Compose(xx + 816, xx + 488, xx + 1048);
  xx[488] = xx[473] * state[32] * state[32];
  xx[473] = xx[18] * xx[483] * state[32] * state[32];
  xx[483] = xx[18] * xx[487] * state[32] * state[32];
  xx[487] = xx[1144] * xx[1144];
  xx[1510] = (xx[487] + xx[1255]) * xx[18] - xx[3];
  xx[1511] = xx[1224];
  xx[1512] = (xx[1245] + xx[1231]) * xx[18];
  xx[1513] = (xx[1219] + xx[1220]) * xx[18];
  xx[1514] = (xx[487] + xx[1215]) * xx[18] - xx[3];
  xx[1515] = xx[1258];
  xx[1516] = xx[1262];
  xx[1517] = (xx[1256] + xx[1257]) * xx[18];
  xx[1518] = (xx[487] + xx[1216]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 876, xx + 1510, xx + 1532);
  xx[487] = xx[1148] * xx[1148];
  xx[489] = xx[1149] * xx[1150];
  xx[1552] = (xx[487] + xx[1289]) * xx[18] - xx[3];
  xx[1553] = xx[18] * (xx[489] - xx[1249]);
  xx[1554] = (xx[1203] + xx[1244]) * xx[18];
  xx[1555] = (xx[489] + xx[1249]) * xx[18];
  xx[1556] = (xx[487] + xx[1293]) * xx[18] - xx[3];
  xx[1557] = xx[18] * (xx[1288] - xx[1287]);
  xx[1558] = xx[1267];
  xx[1559] = (xx[1288] + xx[1287]) * xx[18];
  xx[1560] = (xx[487] + xx[1151] * xx[1151]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 2027, xx + 1552, xx + 1576);
  xx[487] = xx[1189] * xx[1189];
  xx[489] = (xx[487] + xx[1126]) * xx[18] - xx[3];
  xx[490] = xx[1190] * xx[1191];
  xx[491] = xx[1189] * xx[1192];
  xx[492] = (xx[490] + xx[491]) * xx[18];
  xx[493] = xx[1191] * xx[164] - xx[162] * xx[1190];
  xx[494] = xx[493] * xx[493];
  xx[495] = xx[1192] * xx[164] - xx[162] * xx[1189];
  xx[496] = xx[495] * xx[495];
  xx[950] = (xx[494] + xx[496]) * xx[18] - xx[3];
  xx[951] = xx[1189] * xx[164] + xx[162] * xx[1192];
  xx[955] = xx[951] * xx[495];
  xx[956] = xx[162] * xx[1191] + xx[1190] * xx[164];
  xx[957] = xx[956] * xx[493];
  xx[966] = (xx[955] + xx[957]) * xx[18];
  xx[1033] = - xx[493];
  xx[1034] = xx[495];
  xx[1035] = xx[951];
  xx[1036] = - xx[956];
  pm_math_quatCompose(xx + 335, xx + 1033, xx + 1037);
  xx[973] = xx[1037] * xx[1037];
  xx[974] = xx[1038] * xx[1039];
  xx[975] = xx[1037] * xx[1040];
  xx[1010] = xx[1038] * xx[1040];
  xx[1012] = xx[1037] * xx[1039];
  xx[1019] = xx[1039] * xx[1040];
  xx[1020] = xx[1037] * xx[1038];
  xx[1585] = (xx[973] + xx[1038] * xx[1038]) * xx[18] - xx[3];
  xx[1586] = xx[18] * (xx[974] - xx[975]);
  xx[1587] = (xx[1010] + xx[1012]) * xx[18];
  xx[1588] = (xx[974] + xx[975]) * xx[18];
  xx[1589] = (xx[973] + xx[1039] * xx[1039]) * xx[18] - xx[3];
  xx[1590] = xx[18] * (xx[1019] - xx[1020]);
  xx[1591] = xx[18] * (xx[1010] - xx[1012]);
  xx[1592] = (xx[1019] + xx[1020]) * xx[18];
  xx[1593] = (xx[973] + xx[1040] * xx[1040]) * xx[18] - xx[3];
  xx[973] = xx[951] * inputDot[6];
  xx[974] = xx[495] * inputDot[6];
  xx[1033] = xx[18] * (xx[973] * xx[493] - xx[956] * xx[974]);
  xx[1034] = - ((xx[974] * xx[493] + xx[956] * xx[973]) * xx[18]);
  xx[1035] = inputDot[6] - (xx[974] * xx[495] + xx[951] * xx[973]) * xx[18];
  pm_math_matrix3x3PostCross(xx + 1585, xx + 1033, xx + 1595);
  xx[973] = xx[1190] * state[10];
  xx[974] = xx[1191] * state[10];
  xx[975] = xx[18] * (xx[1192] * xx[973] - xx[1189] * xx[974]);
  pm_math_quatInverseXform(xx + 1148, xx + 1061, xx + 1033);
  pm_math_quatInverseXform(xx + 1144, xx + 1085, xx + 1042);
  xx[1010] = xx[474] * xx[345];
  xx[1012] = xx[345] * xx[352] - xx[325] * xx[478];
  xx[478] = xx[474] * xx[325];
  xx[1057] = xx[1010];
  xx[1058] = xx[1012];
  xx[1059] = - xx[478];
  pm_math_cross3(xx + 1205, xx + 1057, xx + 1096);
  xx[1019] = xx[18] * (xx[1096] + xx[344] * xx[1010]) - xx[325];
  xx[1010] = xx[1042] + xx[1019];
  xx[1020] = xx[1033] + xx[1010];
  xx[1030] = (xx[1189] * xx[973] + xx[1192] * xx[974]) * xx[18];
  xx[1031] = xx[18] * (xx[1097] + xx[344] * xx[1012]);
  xx[1012] = xx[1043] + xx[1031];
  xx[1036] = xx[1034] + xx[1012];
  xx[1045] = state[10] - (xx[1190] * xx[973] + xx[1191] * xx[974]) * xx[18];
  xx[973] = (xx[1098] - xx[344] * xx[478]) * xx[18] - xx[345];
  xx[478] = xx[973] - state[32];
  xx[974] = xx[1044] + xx[478];
  xx[1046] = xx[1035] + xx[974];
  xx[1057] = xx[975] + xx[1020];
  xx[1058] = xx[1030] + xx[1036];
  xx[1059] = xx[1045] + xx[1046];
  pm_math_matrix3x3PostCross(xx + 1595, xx + 1057, xx + 1143);
  xx[1057] = xx[18] * (xx[955] - xx[957]);
  xx[955] = xx[956] * xx[495];
  xx[957] = xx[951] * xx[493];
  xx[1058] = (xx[955] + xx[957]) * xx[18];
  xx[1059] = xx[951] * xx[951];
  xx[1060] = (xx[494] + xx[1059]) * xx[18] - xx[3];
  xx[1080] = xx[495] * xx[493];
  xx[493] = xx[951] * xx[956];
  xx[495] = xx[18] * (xx[1080] - xx[493]);
  xx[951] = xx[18] * (xx[957] - xx[955]);
  xx[1585] = xx[950];
  xx[1586] = xx[1057];
  xx[1587] = - xx[1058];
  xx[1588] = xx[966];
  xx[1589] = xx[1060];
  xx[1590] = xx[495];
  xx[1591] = xx[951];
  xx[1592] = - ((xx[493] + xx[1080]) * xx[18]);
  xx[1593] = (xx[494] + xx[956] * xx[956]) * xx[18] - xx[3];
  xx[955] = xx[975];
  xx[956] = xx[1030];
  xx[957] = xx[1045];
  pm_math_matrix3x3PostCross(xx + 1585, xx + 955, xx + 1595);
  xx[955] = xx[1020];
  xx[956] = xx[1036];
  xx[957] = xx[1046];
  pm_math_matrix3x3PostCross(xx + 1595, xx + 955, xx + 1585);
  xx[494] = xx[18] * (xx[490] - xx[491]);
  xx[490] = (xx[946] + xx[1099]) * xx[18];
  xx[491] = (xx[487] + xx[1127]) * xx[18] - xx[3];
  xx[946] = xx[18] * (xx[1125] - xx[1118]);
  xx[1595] = xx[489];
  xx[1596] = xx[494];
  xx[1597] = xx[490];
  xx[1598] = xx[492];
  xx[1599] = xx[491];
  xx[1600] = xx[946];
  xx[1601] = xx[1117];
  xx[1602] = (xx[1125] + xx[1118]) * xx[18];
  xx[1603] = (xx[487] + xx[1192] * xx[1192]) * xx[18] - xx[3];
  pm_math_matrix3x3PostCross(xx + 1595, xx + 1033, xx + 1121);
  xx[955] = xx[1010];
  xx[956] = xx[1012];
  xx[957] = xx[974];
  pm_math_matrix3x3PostCross(xx + 1121, xx + 955, xx + 1595);
  pm_math_matrix3x3PostCross(xx + 1552, xx + 1042, xx + 1121);
  xx[955] = xx[1019];
  xx[956] = xx[1031];
  xx[957] = xx[478];
  pm_math_matrix3x3PostCross(xx + 1121, xx + 955, xx + 1552);
  xx[955] = xx[1019];
  xx[956] = xx[1031];
  xx[957] = xx[973];
  pm_math_matrix3x3PostCross(xx + 1510, xx + 955, xx + 1121);
  xx[478] = xx[1128] * state[32];
  xx[487] = xx[1122] * state[32];
  xx[955] = xx[1125] * state[32];
  xx[956] = xx[1121] * state[32];
  xx[957] = xx[1124] * state[32];
  xx[973] = xx[1127] * state[32];
  xx[1121] = xx[1552] + xx[478] * xx[610] - (xx[487] * xx[455] + xx[607] * xx
    [955]);
  xx[1122] = xx[1553] + xx[956] * xx[455] + xx[607] * xx[957] - xx[973] * xx[610];
  xx[1123] = xx[1554];
  xx[1124] = xx[1555] + xx[487] * xx[611] - xx[955] * xx[546] - xx[613] * xx[478];
  xx[1125] = xx[1556] + xx[957] * xx[546] - xx[956] * xx[611] + xx[613] * xx[973];
  xx[1126] = xx[1557];
  xx[1127] = xx[1558] - (xx[614] * xx[487] + xx[955] * xx[608] + xx[478] * xx
    [547]);
  xx[1128] = xx[1559] + xx[614] * xx[956] + xx[957] * xx[608] + xx[973] * xx[547];
  xx[1129] = xx[1560];
  pm_math_matrix3x3Compose(xx + 737, xx + 1121, xx + 1510);
  xx[478] = xx[1595] + xx[1510];
  xx[487] = xx[1598] + xx[1513];
  xx[955] = xx[1596] + xx[1511];
  xx[956] = xx[1599] + xx[1514];
  xx[957] = xx[1597] + xx[1512];
  xx[973] = xx[1600] + xx[1515];
  xx[1121] = xx[1585] + xx[478] * xx[254] - xx[487] * xx[203];
  xx[1122] = xx[1586] + xx[955] * xx[254] - xx[956] * xx[203];
  xx[1123] = xx[1587] + xx[957] * xx[254] - xx[973] * xx[203];
  xx[1124] = xx[1588] + xx[487] * xx[427] - xx[478] * xx[203];
  xx[1125] = xx[1589] + xx[956] * xx[427] - xx[955] * xx[203];
  xx[1126] = xx[1590] + xx[973] * xx[427] - xx[957] * xx[203];
  xx[1127] = xx[1591] - (xx[1601] + xx[1516]);
  xx[1128] = xx[1592] - (xx[1602] + xx[1517]);
  xx[1129] = xx[1593] - (xx[1603] + xx[1518]);
  pm_math_matrix3x3Compose(xx + 2341, xx + 1121, xx + 1510);
  xx[478] = xx[18] * xx[477] * state[32] * state[32];
  xx[477] = xx[475] * state[32] * state[32];
  xx[475] = xx[18] * xx[481] * state[32] * state[32];
  xx[1121] = xx[1048] - (xx[488] * xx[37] - xx[473] * xx[31] + xx[483] * xx[479])
    + xx[1532] + xx[1576] + xx[489] * xx[383] + xx[492] * xx[435] - (xx[437] *
    xx[950] + xx[453] * xx[966]) + (xx[1143] + xx[1510]) * xx[18];
  xx[1122] = xx[1049] - (xx[478] * xx[37] + xx[31] * xx[477] - xx[475] * xx[479])
    + xx[1533] + xx[1577] + xx[494] * xx[383] + xx[491] * xx[435] - (xx[1057] *
    xx[437] + xx[453] * xx[1060]) + (xx[1144] + xx[1511]) * xx[18];
  xx[1123] = xx[1050] + xx[1534] + xx[1578] + xx[490] * xx[383] + xx[946] * xx
    [435] + xx[1058] * xx[437] - xx[495] * xx[453] + (xx[1145] + xx[1512]) * xx
    [18];
  xx[1124] = xx[1051] - (xx[488] * xx[171] - xx[473] * xx[38] + xx[483] * xx[486])
    + xx[1535] + xx[1579] + xx[489] * xx[29] + xx[492] * xx[30] - (xx[156] * xx
    [950] + xx[966] * xx[202]) + (xx[1146] + xx[1513]) * xx[18];
  xx[1125] = xx[1052] - (xx[478] * xx[171] + xx[477] * xx[38] - xx[475] * xx[486])
    + xx[1536] + xx[1580] + xx[494] * xx[29] + xx[491] * xx[30] - (xx[1057] *
    xx[156] + xx[202] * xx[1060]) + (xx[1147] + xx[1514]) * xx[18];
  xx[1126] = xx[1053] + xx[1537] + xx[1581] + xx[490] * xx[29] + xx[946] * xx[30]
    + xx[156] * xx[1058] - xx[495] * xx[202] + (xx[1148] + xx[1515]) * xx[18];
  xx[1127] = xx[1054] - (xx[216] * xx[488] - xx[473] * xx[212] + xx[483] * xx
    [157]) + xx[1538] + xx[1582] + xx[489] * xx[217] + xx[492] * xx[218] - (xx
    [225] * xx[950] + xx[226] * xx[966]) + (xx[1149] + xx[1516]) * xx[18];
  xx[1128] = xx[1055] - (xx[478] * xx[216] + xx[477] * xx[212] - xx[475] * xx
    [157]) + xx[1539] + xx[1583] + xx[494] * xx[217] + xx[491] * xx[218] - (xx
    [1057] * xx[225] + xx[226] * xx[1060]) + (xx[1150] + xx[1517]) * xx[18];
  xx[1129] = xx[1056] + xx[1540] + xx[1584] + xx[490] * xx[217] + xx[946] * xx
    [218] + xx[225] * xx[1058] - xx[495] * xx[226] + (xx[1151] + xx[1518]) * xx
    [18];
  pm_math_matrix3x3Xform(xx + 1121, xx + 236, xx + 487);
  xx[473] = xx[474] * xx[534] - xx[535] * xx[352];
  xx[490] = xx[1196];
  xx[491] = xx[517];
  xx[492] = xx[473];
  pm_math_cross3(xx + 1205, xx + 490, xx + 955);
  xx[352] = state[32] * state[32];
  xx[490] = (xx[534] + xx[18] * (xx[955] - xx[1213])) * xx[352];
  xx[491] = ((xx[956] - xx[1211]) * xx[18] - xx[535]) * xx[352];
  xx[492] = (xx[957] - xx[344] * xx[473]) * xx[18] * xx[352];
  pm_math_quatXform(xx + 313, xx + 490, xx + 473);
  pm_math_matrix3x3Xform(xx + 746, xx + 541, xx + 490);
  xx[955] = xx[490] + xx[208];
  xx[956] = xx[491] + xx[214];
  xx[957] = xx[492] + xx[223];
  pm_math_quatXform(xx + 309, xx + 955, xx + 490);
  pm_math_matrix3x3Xform(xx + 852, xx + 1156, xx + 955);
  xx[973] = xx[955] + xx[594];
  xx[974] = xx[956] + xx[595];
  xx[975] = xx[957] + xx[596];
  pm_math_quatXform(xx + 305, xx + 973, xx + 955);
  pm_math_matrix3x3Xform(xx + 1949, xx + 1160, xx + 973);
  xx[1033] = xx[973] + xx[657];
  xx[1034] = xx[974] + xx[658];
  xx[1035] = xx[975] + xx[659];
  pm_math_quatXform(xx + 301, xx + 1033, xx + 973);
  xx[344] = xx[1152] * xx[228] - xx[1170] * xx[261] + xx[204];
  xx[352] = xx[1170] * xx[228] - xx[1152] * xx[431] - xx[209];
  xx[477] = xx[352] * xx[169];
  xx[478] = xx[344] * xx[169];
  xx[481] = xx[352] * xx[154] - xx[344] * xx[161];
  xx[1033] = - xx[477];
  xx[1034] = xx[478];
  xx[1035] = xx[481];
  pm_math_cross3(xx + 289, xx + 1033, xx + 1042);
  xx[483] = xx[1152] * xx[162] + xx[1170] * xx[164];
  xx[494] = xx[1170] - xx[18] * xx[483] * xx[164] + xx[433];
  xx[495] = xx[1152] - xx[18] * xx[483] * xx[162] + xx[434];
  xx[483] = xx[1212] * state[32];
  xx[517] = xx[1217] * state[32];
  xx[534] = xx[18] * xx[1214] * state[32];
  xx[1033] = xx[483] - xx[540] * xx[345];
  xx[1034] = xx[517] + xx[345] * xx[536] + xx[325] * xx[537];
  xx[1035] = xx[534] + xx[540] * xx[325];
  pm_math_quatXform(xx + 219, xx + 1033, xx + 535);
  xx[540] = xx[287] + xx[535];
  pm_math_cross3(xx + 1085, xx + 1156, xx + 1033);
  xx[946] = xx[243] + xx[536];
  xx[535] = xx[537] - xx[248];
  xx[1048] = xx[540] + xx[1033];
  xx[1049] = xx[946] + xx[1034];
  xx[1050] = xx[535] + xx[1035];
  pm_math_quatXform(xx + 193, xx + 1048, xx + 1033);
  xx[536] = xx[339] + xx[1033];
  pm_math_cross3(xx + 1061, xx + 1160, xx + 1048);
  xx[537] = xx[340] + xx[1034];
  xx[950] = xx[341] + xx[1035];
  xx[1033] = xx[536] + xx[1048];
  xx[1034] = xx[537] + xx[1049];
  xx[1035] = xx[950] + xx[1050];
  pm_math_quatXform(xx + 183, xx + 1033, xx + 1048);
  xx[966] = xx[674] + xx[1048];
  xx[1010] = xx[966] - xx[1152] * state[10];
  xx[1012] = xx[675] + xx[1049];
  xx[1019] = xx[1012] + xx[1170] * state[10];
  xx[1020] = xx[1019] * xx[162] + xx[164] * xx[1010];
  xx[1030] = (xx[384] + xx[1010] - xx[18] * xx[1020] * xx[164]) * inputDot[6];
  xx[1010] = xx[169] * xx[1030];
  xx[1031] = (xx[430] + xx[1019] - xx[18] * xx[1020] * xx[162]) * inputDot[6];
  xx[1019] = xx[169] * xx[1031];
  xx[1020] = xx[154] * xx[1030] + xx[1031] * xx[161];
  xx[1033] = - xx[1010];
  xx[1034] = - xx[1019];
  xx[1035] = xx[1020];
  pm_math_cross3(xx + 289, xx + 1033, xx + 1048);
  xx[1033] = xx[1012] * state[10];
  xx[1012] = xx[966] * state[10];
  xx[966] = xx[1033] * xx[164] - xx[162] * xx[1012];
  xx[1034] = xx[536];
  xx[1035] = xx[537];
  xx[1036] = xx[950];
  pm_math_cross3(xx + 1061, xx + 1034, xx + 1051);
  pm_math_quatXform(xx + 183, xx + 1051, xx + 1034);
  xx[1051] = xx[540];
  xx[1052] = xx[946];
  xx[1053] = xx[535];
  pm_math_cross3(xx + 1085, xx + 1051, xx + 535);
  pm_math_quatXform(xx + 193, xx + 535, xx + 1051);
  xx[535] = xx[517] * xx[345];
  xx[536] = xx[534] * xx[325] - xx[483] * xx[345];
  xx[537] = - (xx[517] * xx[325]);
  pm_math_quatXform(xx + 219, xx + 535, xx + 1054);
  pm_math_quatXform(xx + 193, xx + 1054, xx + 534);
  xx[1054] = xx[1051] + xx[534];
  xx[1055] = xx[1052] + xx[535];
  xx[1056] = xx[1053] + xx[536];
  pm_math_quatXform(xx + 183, xx + 1054, xx + 534);
  xx[483] = xx[1034] + xx[534];
  xx[517] = xx[1035] + xx[535];
  xx[537] = xx[517] * xx[162] + xx[483] * xx[164];
  xx[534] = xx[1036] + xx[536];
  xx[1034] = xx[18] * xx[164] * xx[966] - xx[1033] + xx[483] - xx[18] * xx[537] *
    xx[164];
  xx[1035] = xx[1012] + xx[18] * xx[162] * xx[966] + xx[517] - xx[18] * xx[537] *
    xx[162];
  xx[1036] = xx[534] - (xx[162] * xx[534] * xx[162] + xx[534] * xx[164] * xx[164])
    * xx[18];
  pm_math_quatXform(xx + 335, xx + 1034, xx + 534);
  xx[483] = xx[1713] * xx[1713];
  xx[517] = xx[1631] * xx[1713];
  xx[537] = xx[1273] * xx[1594];
  xx[540] = xx[1273] * xx[1631];
  xx[946] = xx[1713] * xx[1594];
  xx[950] = xx[1631] * xx[1594];
  xx[966] = xx[1273] * xx[1713];
  xx[1121] = (xx[483] + xx[1273] * xx[1273]) * xx[18] - xx[3];
  xx[1122] = xx[18] * (xx[517] - xx[537]);
  xx[1123] = - ((xx[540] + xx[946]) * xx[18]);
  xx[1124] = - ((xx[537] + xx[517]) * xx[18]);
  xx[1125] = (xx[483] + xx[1594] * xx[1594]) * xx[18] - xx[3];
  xx[1126] = xx[18] * (xx[950] - xx[966]);
  xx[1127] = xx[18] * (xx[946] - xx[540]);
  xx[1128] = (xx[950] + xx[966]) * xx[18];
  xx[1129] = (xx[483] + xx[1631] * xx[1631]) * xx[18] - xx[3];
  xx[483] = xx[58] * state[61];
  xx[517] = xx[58] * state[62];
  xx[537] = state[61] - (xx[58] * xx[483] - xx[59] * xx[517]) * xx[18];
  xx[540] = xx[1733] * xx[537] - xx[1658] * state[63];
  xx[946] = state[62] - xx[18] * (xx[59] * xx[483] + xx[58] * xx[517]);
  xx[483] = xx[946] * xx[1658] - xx[1732] * xx[537];
  xx[517] = xx[946] * xx[1733] - xx[1732] * state[63];
  xx[950] = xx[1751] * state[63] - xx[1714] * xx[537];
  xx[966] = xx[946] * xx[1751] - xx[1670] * xx[537];
  xx[1012] = xx[1670] * state[63] - xx[946] * xx[1714];
  xx[1033] = xx[1635] * xx[537] - xx[1637] * state[63];
  xx[1034] = xx[946] * xx[1637] - xx[1674] * xx[537];
  xx[1035] = xx[1674] * state[63] - xx[946] * xx[1635];
  xx[1143] = xx[540] * state[63] - xx[483] * xx[946];
  xx[1144] = xx[517] * state[63] + xx[483] * xx[537];
  xx[1145] = - (xx[517] * xx[946] + xx[540] * xx[537]);
  xx[1146] = - (xx[950] * state[63] + xx[946] * xx[966]);
  xx[1147] = xx[966] * xx[537] - xx[1012] * state[63];
  xx[1148] = xx[1012] * xx[946] + xx[950] * xx[537];
  xx[1149] = xx[1033] * state[63] - xx[946] * xx[1034];
  xx[1150] = xx[1034] * xx[537] - xx[1035] * state[63];
  xx[1151] = xx[946] * xx[1035] - xx[1033] * xx[537];
  pm_math_matrix3x3Compose(xx + 1121, xx + 1143, xx + 1152);
  xx[483] = xx[1630] * xx[1272];
  xx[517] = xx[1633] * xx[1634];
  xx[540] = xx[483] + xx[517];
  xx[950] = xx[18] * xx[540];
  xx[966] = xx[18] * xx[1227] * xx[1271] * state[56] * state[56];
  xx[1012] = (xx[18] * xx[1227] * xx[1227] - xx[3]) * state[56] * state[56];
  xx[1033] = xx[1633] * xx[1633];
  xx[1034] = (xx[1033] + xx[1272] * xx[1272]) * xx[18] - xx[3];
  xx[1035] = xx[950] * xx[966] - xx[1012] * xx[1034];
  xx[1036] = (xx[18] * xx[1271] * xx[1271] - xx[3]) * state[56] * state[56];
  xx[1045] = xx[966] * xx[1034] - xx[1036] * xx[950];
  xx[1046] = xx[1034] * inputDot[9] * inputDot[9];
  xx[1051] = xx[1642] * xx[1271] - xx[1227] * xx[1640];
  xx[1052] = xx[1051] * xx[1051];
  xx[1053] = xx[1271] * xx[1659] + xx[1227] * xx[1639];
  xx[1054] = xx[1053] * xx[1053];
  xx[1055] = (xx[1052] + xx[1054]) * xx[18] - xx[3];
  xx[1056] = xx[1642] * xx[1227] + xx[1271] * xx[1640];
  xx[1057] = xx[1051] * xx[1056];
  xx[1058] = xx[1271] * xx[1639] - xx[1227] * xx[1659];
  xx[1060] = xx[1058] * xx[1053];
  xx[1081] = (xx[1057] - xx[1060]) * xx[18];
  xx[1083] = xx[18] * xx[540] * inputDot[9] * inputDot[9];
  xx[1096] = xx[1633];
  xx[1097] = xx[1272];
  xx[1098] = xx[1630];
  xx[1099] = xx[1724];
  xx[1121] = xx[1051];
  xx[1122] = - xx[1053];
  xx[1123] = xx[1058];
  xx[1124] = xx[1056];
  pm_math_quatCompose(xx + 1096, xx + 1121, xx + 1125);
  xx[540] = xx[1125] * xx[1125];
  xx[1088] = xx[1126] * xx[1127];
  xx[1089] = xx[1125] * xx[1128];
  xx[1092] = xx[1126] * xx[1128];
  xx[1106] = xx[1125] * xx[1127];
  xx[1107] = xx[1127] * xx[1128];
  xx[1109] = xx[1125] * xx[1126];
  xx[1203] = (xx[540] + xx[1126] * xx[1126]) * xx[18] - xx[3];
  xx[1204] = xx[18] * (xx[1088] - xx[1089]);
  xx[1205] = (xx[1092] + xx[1106]) * xx[18];
  xx[1206] = (xx[1088] + xx[1089]) * xx[18];
  xx[1207] = (xx[540] + xx[1127] * xx[1127]) * xx[18] - xx[3];
  xx[1208] = xx[18] * (xx[1107] - xx[1109]);
  xx[1209] = xx[18] * (xx[1092] - xx[1106]);
  xx[1210] = (xx[1107] + xx[1109]) * xx[18];
  xx[1211] = (xx[540] + xx[1128] * xx[1128]) * xx[18] - xx[3];
  xx[540] = xx[1058] * inputDot[9];
  xx[1088] = xx[1053] * inputDot[9];
  xx[1109] = xx[18] * (xx[1051] * xx[540] + xx[1088] * xx[1056]);
  xx[1110] = - ((xx[540] * xx[1056] - xx[1051] * xx[1088]) * xx[18]);
  xx[1111] = (xx[1088] * xx[1053] + xx[1058] * xx[540]) * xx[18] - inputDot[9];
  pm_math_matrix3x3PostCross(xx + 1203, xx + 1109, xx + 1212);
  xx[540] = xx[1642] * state[56];
  xx[1088] = xx[1640] * state[56];
  xx[1089] = (xx[540] * xx[1639] + xx[1088] * xx[1659]) * xx[18];
  xx[1092] = xx[18] * (xx[540] * xx[1659] - xx[1088] * xx[1639]);
  xx[1106] = state[56] - (xx[1088] * xx[1640] + xx[1642] * xx[540]) * xx[18];
  xx[1109] = xx[1089] + xx[537];
  xx[1110] = xx[1092] + xx[946];
  xx[1111] = xx[1106] + state[63];
  pm_math_matrix3x3PostCross(xx + 1212, xx + 1109, xx + 1203);
  xx[540] = xx[1630] * xx[1633];
  xx[1088] = xx[1272] * xx[1634];
  xx[1107] = xx[483] - xx[517];
  xx[483] = xx[1107] * xx[18];
  xx[517] = (xx[1033] + xx[1630] * xx[1630]) * xx[18] - xx[3];
  xx[1109] = xx[1630] * xx[1634];
  xx[1110] = xx[1633] * xx[1272];
  xx[1111] = xx[1088] + xx[540];
  xx[1113] = xx[18] * xx[1111];
  xx[1114] = xx[1110] - xx[1109];
  xx[1115] = xx[1114] * xx[18];
  xx[1212] = xx[1034];
  xx[1213] = xx[950];
  xx[1214] = (xx[540] - xx[1088]) * xx[18];
  xx[1215] = xx[483];
  xx[1216] = xx[517];
  xx[1217] = - (xx[18] * (xx[1109] + xx[1110]));
  xx[1218] = - xx[1113];
  xx[1219] = xx[1115];
  xx[1220] = (xx[1033] + xx[1634] * xx[1634]) * xx[18] - xx[3];
  xx[540] = xx[18] * (xx[1060] + xx[1057]);
  xx[950] = xx[1058] * xx[1051];
  xx[1033] = xx[1053] * xx[1056];
  xx[1034] = (xx[950] - xx[1033]) * xx[18];
  xx[1057] = xx[1058] * xx[1058];
  xx[1060] = (xx[1052] + xx[1057]) * xx[18] - xx[3];
  xx[1088] = xx[1058] * xx[1056];
  xx[1058] = xx[1051] * xx[1053];
  xx[1051] = xx[18] * (xx[1088] + xx[1058]);
  xx[1510] = xx[1055];
  xx[1511] = - xx[540];
  xx[1512] = xx[1034];
  xx[1513] = xx[1081];
  xx[1514] = xx[1060];
  xx[1515] = xx[1051];
  xx[1516] = - (xx[18] * (xx[1033] + xx[950]));
  xx[1517] = (xx[1088] - xx[1058]) * xx[18];
  xx[1518] = (xx[1052] + xx[1056] * xx[1056]) * xx[18] - xx[3];
  xx[1117] = xx[1089];
  xx[1118] = xx[1092];
  xx[1119] = xx[1106];
  pm_math_matrix3x3PostCross(xx + 1510, xx + 1117, xx + 1532);
  xx[1117] = xx[537];
  xx[1118] = xx[946];
  xx[1119] = state[63];
  pm_math_matrix3x3PostCross(xx + 1532, xx + 1117, xx + 1510);
  pm_math_matrix3x3Compose(xx + 1212, xx + 1510, xx + 1532);
  xx[1052] = xx[966] * xx[517] - xx[1012] * xx[483];
  xx[1053] = xx[483] * xx[966] - xx[1036] * xx[517];
  xx[483] = xx[18] * xx[1107] * inputDot[9] * inputDot[9];
  xx[1056] = xx[517] * inputDot[9] * inputDot[9];
  xx[517] = xx[1115] * xx[966] + xx[1012] * xx[1113];
  xx[1089] = xx[966] * xx[1113] + xx[1036] * xx[1115];
  xx[1092] = xx[18] * xx[1114] * inputDot[9] * inputDot[9];
  xx[1106] = xx[18] * xx[1111] * inputDot[9] * inputDot[9];
  xx[1212] = xx[1152] + xx[1035] * xx[1658] + xx[1751] * xx[1045] - (xx[1046] *
    xx[1055] + xx[1081] * xx[1083]) + (xx[1203] + xx[1532]) * xx[18];
  xx[1213] = xx[1153] + xx[1045] * xx[1670] + xx[1732] * xx[1035] - (xx[1083] *
    xx[1060] - xx[1046] * xx[540]) + (xx[1204] + xx[1533]) * xx[18];
  xx[1214] = xx[1154] + xx[1733] * xx[1035] + xx[1714] * xx[1045] - (xx[1046] *
    xx[1034] + xx[1083] * xx[1051]) + (xx[1205] + xx[1534]) * xx[18];
  xx[1215] = xx[1155] + xx[1052] * xx[1658] + xx[1751] * xx[1053] - (xx[483] *
    xx[1055] + xx[1081] * xx[1056]) + (xx[1206] + xx[1535]) * xx[18];
  xx[1216] = xx[1156] + xx[1053] * xx[1670] + xx[1732] * xx[1052] - (xx[1056] *
    xx[1060] - xx[540] * xx[483]) + (xx[1207] + xx[1536]) * xx[18];
  xx[1217] = xx[1157] + xx[1733] * xx[1052] + xx[1714] * xx[1053] - (xx[1034] *
    xx[483] + xx[1056] * xx[1051]) + (xx[1208] + xx[1537]) * xx[18];
  xx[1218] = xx[1158] + xx[517] * xx[1658] - xx[1751] * xx[1089] - (xx[1081] *
    xx[1092] - xx[1106] * xx[1055]) + (xx[1209] + xx[1538]) * xx[18];
  xx[1219] = xx[1159] + xx[1732] * xx[517] - xx[1089] * xx[1670] - (xx[540] *
    xx[1106] + xx[1092] * xx[1060]) + (xx[1210] + xx[1539]) * xx[18];
  xx[1220] = xx[1160] + xx[1733] * xx[517] - xx[1714] * xx[1089] - (xx[1051] *
    xx[1092] - xx[1034] * xx[1106]) + (xx[1211] + xx[1540]) * xx[18];
  pm_math_matrix3x3Xform(xx + 1212, xx + 902, xx + 1051);
  pm_math_matrix3x3Xform(xx + 1143, xx + 74, xx + 1109);
  pm_math_quatXform(xx + 1746, xx + 1109, xx + 1113);
  xx[517] = state[56] * state[56];
  xx[540] = xx[1719] * xx[1271] - xx[1720] * xx[1227];
  xx[1034] = xx[1719] - xx[18] * xx[540] * xx[1271];
  xx[1035] = xx[1711] * xx[966] - xx[1710] * xx[1012] + xx[517] * xx[1034];
  xx[1012] = xx[1720] + xx[18] * xx[540] * xx[1227];
  xx[540] = xx[1710] * xx[966] - xx[1711] * xx[1036] - xx[517] * xx[1012];
  xx[517] = xx[540] * xx[1634];
  xx[966] = xx[1035] * xx[1634];
  xx[1036] = xx[540] * xx[1272] - xx[1035] * xx[1630];
  xx[1109] = xx[517];
  xx[1110] = - xx[966];
  xx[1111] = xx[1036];
  pm_math_cross3(xx + 1725, xx + 1109, xx + 1121);
  xx[1045] = inputDot[9] * inputDot[9];
  xx[1055] = xx[1630] * xx[16];
  xx[1060] = xx[16] * xx[1634];
  xx[1081] = xx[1060] * xx[1634];
  xx[1089] = xx[1227] * xx[1711] + xx[1710] * xx[1271];
  xx[1107] = xx[1710] - (xx[18] * xx[1089] * xx[1271] + xx[1034]) + xx[525];
  xx[1109] = xx[1711] - xx[18] * xx[1089] * xx[1227] + xx[1012];
  pm_math_cross3(xx + 1117, xx + 74, xx + 1143);
  pm_math_quatXform(xx + 1706, xx + 1143, xx + 1146);
  xx[1089] = xx[1147] + xx[1710] * state[56];
  xx[1110] = xx[1146] - xx[1711] * state[56];
  xx[1111] = xx[1089] * xx[1227] + xx[1271] * xx[1110];
  xx[1124] = ((xx[1728] - xx[1719]) * state[56] + xx[1089] - xx[18] * xx[1111] *
              xx[1227]) * inputDot[9];
  xx[1089] = ((xx[1722] - xx[1720]) * state[56] + xx[1110] - xx[18] * xx[1111] *
              xx[1271]) * inputDot[9];
  xx[1110] = xx[1089] * xx[1634];
  xx[1111] = xx[1124] * xx[1634];
  xx[1129] = xx[1089] * xx[1272] + xx[1630] * xx[1124];
  xx[1148] = - xx[1110];
  xx[1149] = - xx[1111];
  xx[1150] = - xx[1129];
  pm_math_cross3(xx + 1725, xx + 1148, xx + 1151);
  xx[1133] = xx[1147] * state[56];
  xx[1136] = xx[1146] * state[56];
  xx[1137] = xx[1133] * xx[1271] - xx[1227] * xx[1136];
  xx[1139] = xx[18] * xx[1271] * xx[1137] - xx[1133];
  xx[1133] = xx[1136] + xx[18] * xx[1227] * xx[1137];
  xx[1136] = xx[1133] * xx[1634];
  xx[1137] = xx[1139] * xx[1634];
  xx[1141] = xx[1133] * xx[1272] - xx[1630] * xx[1139];
  xx[1146] = xx[1136];
  xx[1147] = - xx[1137];
  xx[1148] = xx[1141];
  pm_math_cross3(xx + 1725, xx + 1146, xx + 1154);
  xx[1146] = xx[951];
  xx[1147] = - ((xx[1080] + xx[493]) * xx[18]);
  xx[1148] = xx[3] - (xx[496] + xx[1059]) * xx[18];
  pm_math_cross3(xx + 1146, xx + 236, xx + 1157);
  pm_math_quatXform(xx + 1037, xx + 1157, xx + 1146);
  xx[493] = xx[494] * xx[169];
  xx[496] = xx[169] * xx[495];
  xx[951] = xx[494] * xx[154] + xx[495] * xx[161];
  xx[1037] = - xx[493];
  xx[1038] = - xx[496];
  xx[1039] = xx[951];
  pm_math_cross3(xx + 289, xx + 1037, xx + 1157);
  pm_math_cross3(xx + 804, xx + 541, xx + 1037);
  xx[1160] = xx[564] + xx[1037];
  xx[1161] = xx[566] + xx[1038];
  xx[1162] = xx[867] + xx[1039];
  pm_math_quatInverseXform(xx + 530, xx + 1160, xx + 1037);
  pm_math_quatInverseXform(xx + 530, xx + 804, xx + 1160);
  xx[1039] = xx[795] + xx[499] * xx[1037] + xx[502] * xx[1038] - xx[497] * xx
    [1162];
  xx[1160] = xx[18] * (xx[950] + xx[1033]);
  xx[1161] = - ((xx[1088] - xx[1058]) * xx[18]);
  xx[1162] = (xx[1054] + xx[1057]) * xx[18] - xx[3];
  pm_math_cross3(xx + 1160, xx + 902, xx + 1057);
  pm_math_quatXform(xx + 1125, xx + 1057, xx + 1160);
  xx[795] = xx[1107] * xx[1634];
  xx[950] = xx[1109] * xx[1634];
  xx[1033] = xx[1107] * xx[1272] + xx[1630] * xx[1109];
  xx[1057] = - xx[795];
  xx[1058] = - xx[950];
  xx[1059] = - xx[1033];
  pm_math_cross3(xx + 1725, xx + 1057, xx + 1125);
  xx[1037] = xx[16] * xx[1272];
  xx[1038] = xx[1633] * xx[1060];
  pm_math_quatInverseXform(xx + 1096, xx + 39, xx + 1057);
  xx[1040] = xx[1227] * xx[1058] + xx[1057] * xx[1271];
  xx[1054] = xx[1057] - xx[18] * xx[1040] * xx[1271];
  xx[1080] = xx[1058] - xx[18] * xx[1040] * xx[1227];
  xx[1040] = xx[1059] - inputDot[9];
  xx[1088] = xx[1040] - (xx[1227] * xx[1227] * xx[1040] + xx[1271] * xx[1040] *
    xx[1271]) * xx[18];
  xx[1128] = xx[1088] + state[56];
  xx[1187] = xx[1054];
  xx[1188] = xx[1080];
  xx[1189] = xx[1128];
  xx[1190] = xx[55] * xx[1054];
  xx[1191] = xx[56] * xx[1080];
  xx[1192] = xx[1128] * xx[57];
  pm_math_cross3(xx + 1187, xx + 1190, xx + 1203);
  pm_math_quatInverseXform(xx + 1706, xx + 1187, xx + 1190);
  xx[1149] = xx[1190] + xx[537];
  xx[537] = xx[1191] + xx[946];
  xx[946] = xx[1192] + state[63];
  xx[1206] = xx[1149];
  xx[1207] = xx[537];
  xx[1208] = xx[946];
  xx[1209] = xx[1149] * xx[83];
  xx[1210] = xx[537] * xx[84];
  xx[1211] = xx[946] * xx[85];
  pm_math_cross3(xx + 1206, xx + 1209, xx + 1212);
  pm_math_cross3(xx + 1190, xx + 1117, xx + 1206);
  xx[1117] = xx[1212] + xx[83] * xx[1206];
  xx[1118] = xx[1213] + xx[84] * xx[1207];
  xx[1209] = xx[1190] + xx[1149];
  xx[1210] = xx[1191] + xx[537];
  xx[1211] = xx[1192] + xx[946];
  pm_math_cross3(xx + 1209, xx + 1143, xx + 1190);
  pm_math_cross3(xx + 1187, xx + 1710, xx + 1143);
  pm_math_cross3(xx + 1187, xx + 1143, xx + 1209);
  pm_math_quatInverseXform(xx + 1706, xx + 1209, xx + 1143);
  xx[537] = (xx[1190] + xx[1143]) * xx[78];
  xx[946] = (xx[1191] + xx[1144]) * xx[78];
  xx[1119] = (xx[1192] + xx[1145]) * xx[78];
  xx[1143] = xx[537];
  xx[1144] = xx[946];
  xx[1145] = xx[1119];
  xx[1149] = xx[1117] - xx[1118] * xx[94] + pm_math_dot3(xx + 116, xx + 1143);
  xx[1150] = xx[1117] * xx[94] + xx[1118] + pm_math_dot3(xx + 758, xx + 1143);
  xx[1143] = xx[1214] + xx[85] * xx[1208];
  xx[1144] = xx[1143] + xx[72] * xx[946] - xx[73] * xx[537];
  xx[1187] = - xx[1149];
  xx[1188] = - xx[1150];
  xx[1189] = - xx[1144];
  solveSymmetricPosDef(xx + 1737, xx + 1187, 3, 1, xx + 1190, xx + 1206);
  xx[1187] = xx[1117] + xx[83] * xx[1190] + xx[145] * xx[1191];
  xx[1188] = xx[1118] - xx[718] * xx[1190] + xx[84] * xx[1191];
  xx[1189] = xx[1143] + xx[85] * xx[1192];
  pm_math_quatXform(xx + 1706, xx + 1187, xx + 1206);
  xx[1187] = xx[537] + xx[736] * xx[1190] - xx[811] * xx[1191] - xx[875] * xx
    [1192];
  xx[1188] = xx[946] + xx[811] * xx[1190] + xx[736] * xx[1191] + xx[913] * xx
    [1192];
  xx[1189] = xx[1119] + xx[914] * xx[1190] + xx[932] * xx[1191];
  pm_math_quatXform(xx + 1706, xx + 1187, xx + 1209);
  pm_math_cross3(xx + 1710, xx + 1209, xx + 1187);
  xx[1145] = xx[1080] * state[56];
  xx[1165] = xx[1054] * state[56];
  xx[1169] = xx[1822] - xx[1786];
  xx[1170] = xx[1823] - xx[1789];
  xx[1175] = xx[1825] - xx[1787];
  xx[1178] = xx[1826] - xx[1790];
  xx[1179] = xx[1830] - xx[1794];
  xx[1211] = xx[1169];
  xx[1212] = xx[1170];
  xx[1213] = xx[1824] - xx[1792];
  xx[1214] = xx[1175];
  xx[1215] = xx[1178];
  xx[1216] = xx[1827] - xx[1793];
  xx[1217] = xx[1621];
  xx[1218] = xx[1636];
  xx[1219] = xx[1179];
  xx[1231] = xx[1057];
  xx[1232] = xx[1058];
  xx[1233] = xx[1040];
  xx[1181] = 3.99999999470772e-3;
  xx[1243] = xx[525] - xx[1034];
  xx[1244] = xx[1012];
  xx[1245] = xx[180] - (xx[1181] - (xx[1227] * xx[1181] * xx[1227] + xx[1181] *
    xx[1271] * xx[1271]) * xx[18]);
  pm_math_cross3(xx + 1231, xx + 1243, xx + 1247);
  pm_math_cross3(xx + 1231, xx + 1247, xx + 1255);
  xx[525] = xx[1227] * xx[1256] + xx[1255] * xx[1271];
  xx[1012] = xx[1088] + xx[1128];
  xx[1034] = xx[1719] * state[56];
  xx[1088] = xx[1255] - xx[18] * xx[525] * xx[1271] + xx[1012] * xx[1034];
  xx[1128] = xx[1720] * state[56];
  xx[1181] = xx[1256] - xx[18] * xx[525] * xx[1227] - xx[1012] * xx[1128];
  xx[525] = (xx[1080] + xx[1080]) * xx[1128] - (xx[1054] + xx[1054]) * xx[1034]
    + xx[1257] - (xx[1227] * xx[1227] * xx[1257] + xx[1257] * xx[1271] * xx[1271])
    * xx[18];
  xx[1231] = xx[1088];
  xx[1232] = xx[1181];
  xx[1233] = xx[525];
  pm_math_matrix3x3Xform(xx + 1211, xx + 1231, xx + 1247);
  xx[1012] = xx[1145] * (xx[1819] - xx[1837] - xx[1833] - xx[1855]) - xx[1165] *
    (xx[1820] - xx[1838] - xx[1836] - xx[1856]) + xx[1249];
  xx[1211] = xx[1715];
  xx[1212] = xx[1841];
  xx[1213] = xx[1842];
  xx[1214] = xx[1843];
  xx[1215] = xx[1772];
  xx[1216] = xx[1845];
  xx[1217] = xx[1846];
  xx[1218] = xx[1847];
  xx[1219] = xx[398] + xx[1848];
  pm_math_matrix3x3Xform(xx + 1211, xx + 1231, xx + 1247);
  xx[1034] = xx[1145] * xx[1169] - xx[1165] * xx[1175] + xx[1247];
  xx[1054] = xx[1145] * xx[1170] - xx[1165] * xx[1178] + xx[1248];
  xx[1211] = (xx[1815] - xx[1833] - xx[1837] - xx[1851] - (xx[1720] * xx[1169] +
    xx[1719] * xx[1170])) / xx[1781];
  xx[1212] = (xx[1818] - xx[1836] - xx[1838] - xx[1854] - (xx[1720] * xx[1175] +
    xx[1719] * xx[1178])) / xx[1781];
  xx[1213] = xx[1638] / xx[1781];
  pm_math_quatInverseXform(xx + 1096, xx + 24, xx + 1214);
  xx[1080] = xx[1214] - xx[1058] * inputDot[9];
  xx[1058] = xx[1215] + xx[1057] * inputDot[9];
  xx[1128] = xx[1058] * xx[1227] + xx[1271] * xx[1080];
  xx[1169] = xx[1080] - xx[18] * xx[1128] * xx[1271];
  xx[1170] = xx[1058] - xx[18] * xx[1128] * xx[1227];
  xx[1128] = xx[1216] - inputDdot[9];
  xx[1175] = xx[1128] - (xx[1227] * xx[1227] * xx[1128] + xx[1271] * xx[1128] *
    xx[1271]) * xx[18];
  xx[1214] = xx[1169];
  xx[1215] = xx[1170];
  xx[1216] = xx[1175];
  xx[1217] = xx[1752] / xx[1781];
  xx[1218] = xx[1773] / xx[1781];
  xx[1219] = (xx[1179] - (xx[1720] * xx[1846] + xx[1719] * xx[1847])) / xx[1781];
  xx[1178] = xx[1630] * xx[180];
  xx[1179] = xx[1060] - xx[180] * xx[1272];
  xx[1231] = xx[1178];
  xx[1232] = xx[1179];
  xx[1233] = xx[1055];
  pm_math_cross3(xx + 1725, xx + 1231, xx + 1247);
  xx[1184] = xx[1633] * xx[1055];
  xx[1231] = - (0.08825748853214695 + (xx[1633] * xx[1178] + xx[1247]) * xx[18]
                - xx[16]);
  xx[1232] = 0.02992204813763048 - (xx[1633] * xx[1179] + xx[1248]) * xx[18];
  xx[1233] = - (0.1297164406712666 + xx[180] + xx[18] * (xx[1249] + xx[1184]));
  pm_math_cross3(xx + 24, xx + 1231, xx + 1247);
  xx[1255] = xx[4] + xx[1247];
  xx[1256] = xx[7] + xx[1248];
  xx[1257] = xx[21] + xx[1249];
  pm_math_quatInverseXform(xx + 1096, xx + 1255, xx + 1247);
  pm_math_cross3(xx + 39, xx + 1231, xx + 1255);
  pm_math_cross3(xx + 39, xx + 1255, xx + 1231);
  pm_math_quatInverseXform(xx + 1096, xx + 1231, xx + 1255);
  xx[1096] = xx[16] * inputDot[9];
  xx[1097] = xx[1080];
  xx[1098] = xx[1058];
  xx[1099] = xx[1128];
  pm_math_cross3(xx + 1097, xx + 1243, xx + 1231);
  xx[1058] = xx[1247] + xx[1255] + (xx[1059] + xx[1040]) * xx[1096] + xx[1231];
  xx[1040] = xx[1248] + xx[1256] - xx[16] * inputDdot[9] + xx[1232];
  xx[1059] = xx[1040] * xx[1227] + xx[1058] * xx[1271];
  xx[1080] = xx[1058] - xx[18] * xx[1059] * xx[1271];
  xx[1058] = xx[1040] - xx[18] * xx[1059] * xx[1227];
  xx[1040] = xx[1249] + xx[1257] - (xx[1057] + xx[1057]) * xx[1096] + xx[1233];
  xx[1057] = xx[1040] - (xx[1227] * xx[1040] * xx[1227] + xx[1040] * xx[1271] *
    xx[1271]) * xx[18];
  xx[1096] = xx[1080];
  xx[1097] = xx[1058];
  xx[1098] = xx[1057];
  xx[1040] = pm_math_dot3(xx + 1211, xx + 1214) + pm_math_dot3(xx + 1217, xx +
    1096);
  xx[1059] = (xx[1205] + xx[1208] + xx[1189] + xx[1012] - ((xx[1209] + xx[1034])
    * xx[1720] + (xx[1210] + xx[1054]) * xx[1719])) / xx[1781] + xx[1040];
  xx[1096] = xx[1169] + xx[1145];
  xx[1097] = xx[1170] - xx[1165];
  xx[1187] = xx[1096];
  xx[1188] = xx[1097];
  xx[1189] = xx[1175] - xx[1059];
  pm_math_quatInverseXform(xx + 1706, xx + 1187, xx + 1206);
  pm_math_cross3(xx + 1187, xx + 1710, xx + 1209);
  xx[1098] = xx[1057] + xx[525];
  xx[1187] = xx[1080] + xx[1059] * xx[1720] + xx[1088] + xx[1209];
  xx[1188] = xx[1058] + xx[1059] * xx[1719] + xx[1181] + xx[1210];
  xx[1189] = xx[1098] + xx[1211];
  pm_math_quatInverseXform(xx + 1706, xx + 1187, xx + 1209);
  xx[525] = xx[1190] - (pm_math_dot3(xx + 1783, xx + 1206) + pm_math_dot3(xx +
    1861, xx + 1209));
  xx[1057] = xx[1191] - (pm_math_dot3(xx + 1867, xx + 1206) + pm_math_dot3(xx +
    1870, xx + 1209));
  xx[1099] = xx[1192] - (pm_math_dot3(xx + 1873, xx + 1206) + pm_math_dot3(xx +
    1795, xx + 1209));
  pm_math_matrix3x3Compose(xx + 816, xx + 365, xx + 1206);
  xx[365] = xx[354] * state[34] * state[34];
  xx[354] = xx[18] * xx[360] * state[34] * state[34];
  xx[360] = xx[18] * xx[364] * state[34] * state[34];
  xx[364] = xx[1278] * xx[1278];
  xx[1510] = (xx[364] + xx[1390]) * xx[18] - xx[3];
  xx[1511] = xx[1359];
  xx[1512] = (xx[1380] + xx[1366]) * xx[18];
  xx[1513] = (xx[1354] + xx[1355]) * xx[18];
  xx[1514] = (xx[364] + xx[1350]) * xx[18] - xx[3];
  xx[1515] = xx[1393];
  xx[1516] = xx[1397];
  xx[1517] = (xx[1391] + xx[1392]) * xx[18];
  xx[1518] = (xx[364] + xx[1351]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 876, xx + 1510, xx + 1532);
  xx[364] = xx[1282] * xx[1282];
  xx[366] = xx[1283] * xx[1284];
  xx[1552] = (xx[364] + xx[1424]) * xx[18] - xx[3];
  xx[1553] = xx[18] * (xx[366] - xx[1384]);
  xx[1554] = (xx[1337] + xx[1379]) * xx[18];
  xx[1555] = (xx[366] + xx[1384]) * xx[18];
  xx[1556] = (xx[364] + xx[1428]) * xx[18] - xx[3];
  xx[1557] = xx[18] * (xx[1423] - xx[1422]);
  xx[1558] = xx[1402];
  xx[1559] = (xx[1423] + xx[1422]) * xx[18];
  xx[1560] = (xx[364] + xx[1285] * xx[1285]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 2027, xx + 1552, xx + 1576);
  xx[364] = xx[1323] * xx[1323];
  xx[366] = (xx[364] + xx[1260]) * xx[18] - xx[3];
  xx[367] = xx[1324] * xx[1325];
  xx[368] = xx[1323] * xx[1326];
  xx[369] = (xx[367] + xx[368]) * xx[18];
  xx[370] = xx[1325] * xx[164] - xx[162] * xx[1324];
  xx[371] = xx[370] * xx[370];
  xx[372] = xx[1326] * xx[164] - xx[162] * xx[1323];
  xx[373] = xx[372] * xx[372];
  xx[1128] = (xx[371] + xx[373]) * xx[18] - xx[3];
  xx[1145] = xx[1323] * xx[164] + xx[162] * xx[1326];
  xx[1165] = xx[1145] * xx[372];
  xx[1169] = xx[162] * xx[1325] + xx[1324] * xx[164];
  xx[1170] = xx[1169] * xx[370];
  xx[1178] = (xx[1165] + xx[1170]) * xx[18];
  xx[1187] = - xx[370];
  xx[1188] = xx[372];
  xx[1189] = xx[1145];
  xx[1190] = - xx[1169];
  pm_math_quatCompose(xx + 335, xx + 1187, xx + 1215);
  xx[1179] = xx[1215] * xx[1215];
  xx[1185] = xx[1216] * xx[1217];
  xx[1187] = xx[1215] * xx[1218];
  xx[1188] = xx[1216] * xx[1218];
  xx[1189] = xx[1215] * xx[1217];
  xx[1190] = xx[1217] * xx[1218];
  xx[1191] = xx[1215] * xx[1216];
  xx[1585] = (xx[1179] + xx[1216] * xx[1216]) * xx[18] - xx[3];
  xx[1586] = xx[18] * (xx[1185] - xx[1187]);
  xx[1587] = (xx[1188] + xx[1189]) * xx[18];
  xx[1588] = (xx[1185] + xx[1187]) * xx[18];
  xx[1589] = (xx[1179] + xx[1217] * xx[1217]) * xx[18] - xx[3];
  xx[1590] = xx[18] * (xx[1190] - xx[1191]);
  xx[1591] = xx[18] * (xx[1188] - xx[1189]);
  xx[1592] = (xx[1190] + xx[1191]) * xx[18];
  xx[1593] = (xx[1179] + xx[1218] * xx[1218]) * xx[18] - xx[3];
  xx[1179] = xx[1145] * inputDot[6];
  xx[1185] = xx[372] * inputDot[6];
  xx[1187] = xx[18] * (xx[1179] * xx[370] - xx[1169] * xx[1185]);
  xx[1188] = - ((xx[1185] * xx[370] + xx[1169] * xx[1179]) * xx[18]);
  xx[1189] = inputDot[6] - (xx[1185] * xx[372] + xx[1145] * xx[1179]) * xx[18];
  pm_math_matrix3x3PostCross(xx + 1585, xx + 1187, xx + 1594);
  xx[1179] = xx[1324] * state[10];
  xx[1185] = xx[1325] * state[10];
  xx[1187] = xx[18] * (xx[1326] * xx[1179] - xx[1323] * xx[1185]);
  pm_math_quatInverseXform(xx + 1282, xx + 1061, xx + 1188);
  pm_math_quatInverseXform(xx + 1278, xx + 1085, xx + 1231);
  xx[1191] = xx[355] * xx[345];
  xx[1192] = xx[345] * xx[349] - xx[325] * xx[353];
  xx[353] = xx[355] * xx[325];
  xx[1243] = - xx[1191];
  xx[1244] = xx[1192];
  xx[1245] = xx[353];
  pm_math_cross3(xx + 1339, xx + 1243, xx + 1247);
  xx[1196] = xx[18] * (xx[1247] + xx[350] * xx[1191]) - xx[325];
  xx[1191] = xx[1231] + xx[1196];
  xx[1198] = xx[1188] + xx[1191];
  xx[1199] = (xx[1323] * xx[1179] + xx[1326] * xx[1185]) * xx[18];
  xx[1203] = xx[18] * (xx[1248] - xx[350] * xx[1192]);
  xx[1192] = xx[1232] + xx[1203];
  xx[1204] = xx[1189] + xx[1192];
  xx[1219] = state[10] - (xx[1324] * xx[1179] + xx[1325] * xx[1185]) * xx[18];
  xx[1179] = (xx[1249] - xx[350] * xx[353]) * xx[18] - xx[345];
  xx[353] = xx[1179] - state[34];
  xx[1185] = xx[1233] + xx[353];
  xx[1220] = xx[1190] + xx[1185];
  xx[1243] = xx[1187] + xx[1198];
  xx[1244] = xx[1199] + xx[1204];
  xx[1245] = xx[1219] + xx[1220];
  pm_math_matrix3x3PostCross(xx + 1594, xx + 1243, xx + 1585);
  xx[1224] = xx[18] * (xx[1165] - xx[1170]);
  xx[1165] = xx[1169] * xx[372];
  xx[1170] = xx[1145] * xx[370];
  xx[1227] = (xx[1165] + xx[1170]) * xx[18];
  xx[1236] = xx[1145] * xx[1145];
  xx[1239] = (xx[371] + xx[1236]) * xx[18] - xx[3];
  xx[1240] = xx[372] * xx[370];
  xx[370] = xx[1145] * xx[1169];
  xx[372] = xx[18] * (xx[1240] - xx[370]);
  xx[1145] = xx[18] * (xx[1170] - xx[1165]);
  xx[1594] = xx[1128];
  xx[1595] = xx[1224];
  xx[1596] = - xx[1227];
  xx[1597] = xx[1178];
  xx[1598] = xx[1239];
  xx[1599] = xx[372];
  xx[1600] = xx[1145];
  xx[1601] = - ((xx[370] + xx[1240]) * xx[18]);
  xx[1602] = (xx[371] + xx[1169] * xx[1169]) * xx[18] - xx[3];
  xx[1243] = xx[1187];
  xx[1244] = xx[1199];
  xx[1245] = xx[1219];
  pm_math_matrix3x3PostCross(xx + 1594, xx + 1243, xx + 1616);
  xx[1243] = xx[1198];
  xx[1244] = xx[1204];
  xx[1245] = xx[1220];
  pm_math_matrix3x3PostCross(xx + 1616, xx + 1243, xx + 1594);
  xx[371] = xx[18] * (xx[367] - xx[368]);
  xx[367] = (xx[1200] + xx[1234]) * xx[18];
  xx[368] = (xx[364] + xx[1261]) * xx[18] - xx[3];
  xx[1165] = xx[18] * (xx[1259] - xx[1252]);
  xx[1616] = xx[366];
  xx[1617] = xx[371];
  xx[1618] = xx[367];
  xx[1619] = xx[369];
  xx[1620] = xx[368];
  xx[1621] = xx[1165];
  xx[1622] = xx[1251];
  xx[1623] = (xx[1259] + xx[1252]) * xx[18];
  xx[1624] = (xx[364] + xx[1326] * xx[1326]) * xx[18] - xx[3];
  pm_math_matrix3x3PostCross(xx + 1616, xx + 1188, xx + 1255);
  xx[1187] = xx[1191];
  xx[1188] = xx[1192];
  xx[1189] = xx[1185];
  pm_math_matrix3x3PostCross(xx + 1255, xx + 1187, xx + 1616);
  pm_math_matrix3x3PostCross(xx + 1552, xx + 1231, xx + 1255);
  xx[1187] = xx[1196];
  xx[1188] = xx[1203];
  xx[1189] = xx[353];
  pm_math_matrix3x3PostCross(xx + 1255, xx + 1187, xx + 1552);
  xx[1187] = xx[1196];
  xx[1188] = xx[1203];
  xx[1189] = xx[1179];
  pm_math_matrix3x3PostCross(xx + 1510, xx + 1187, xx + 1255);
  xx[353] = xx[1262] * state[34];
  xx[364] = xx[1256] * state[34];
  xx[1169] = xx[1259] * state[34];
  xx[1170] = xx[1255] * state[34];
  xx[1179] = xx[1258] * state[34];
  xx[1185] = xx[1261] * state[34];
  xx[1255] = xx[1552] + xx[353] * xx[610] - (xx[364] * xx[455] + xx[1169] * xx
    [607]);
  xx[1256] = xx[1553] + xx[1170] * xx[455] + xx[1179] * xx[607] - xx[1185] * xx
    [610];
  xx[1257] = xx[1554];
  xx[1258] = xx[1555] + xx[364] * xx[611] - xx[1169] * xx[546] - xx[353] * xx
    [613];
  xx[1259] = xx[1556] + xx[1179] * xx[546] - xx[1170] * xx[611] + xx[1185] * xx
    [613];
  xx[1260] = xx[1557];
  xx[1261] = xx[1558] - (xx[364] * xx[614] + xx[1169] * xx[608] + xx[353] * xx
    [547]);
  xx[1262] = xx[1559] + xx[1170] * xx[614] + xx[1179] * xx[608] + xx[1185] * xx
    [547];
  xx[1263] = xx[1560];
  pm_math_matrix3x3Compose(xx + 737, xx + 1255, xx + 1510);
  xx[353] = xx[1616] + xx[1510];
  xx[364] = xx[1619] + xx[1513];
  xx[1169] = xx[1617] + xx[1511];
  xx[1170] = xx[1620] + xx[1514];
  xx[1179] = xx[1618] + xx[1512];
  xx[1185] = xx[1621] + xx[1515];
  xx[1255] = xx[1594] + xx[353] * xx[254] - xx[364] * xx[203];
  xx[1256] = xx[1595] + xx[1169] * xx[254] - xx[1170] * xx[203];
  xx[1257] = xx[1596] + xx[1179] * xx[254] - xx[1185] * xx[203];
  xx[1258] = xx[1597] + xx[364] * xx[427] - xx[353] * xx[203];
  xx[1259] = xx[1598] + xx[1170] * xx[427] - xx[1169] * xx[203];
  xx[1260] = xx[1599] + xx[1185] * xx[427] - xx[1179] * xx[203];
  xx[1261] = xx[1600] - (xx[1622] + xx[1516]);
  xx[1262] = xx[1601] - (xx[1623] + xx[1517]);
  xx[1263] = xx[1602] - (xx[1624] + xx[1518]);
  pm_math_matrix3x3Compose(xx + 2341, xx + 1255, xx + 1510);
  xx[353] = xx[18] * xx[348] * state[34] * state[34];
  xx[348] = xx[347] * state[34] * state[34];
  xx[347] = xx[18] * xx[358] * state[34] * state[34];
  xx[1255] = xx[1206] - (xx[365] * xx[37] + xx[354] * xx[31] + xx[360] * xx[479])
    + xx[1532] + xx[1576] + xx[366] * xx[383] + xx[369] * xx[435] - (xx[437] *
    xx[1128] + xx[1178] * xx[453]) + (xx[1585] + xx[1510]) * xx[18];
  xx[1256] = xx[1207] - (xx[353] * xx[37] + xx[348] * xx[31] + xx[347] * xx[479])
    + xx[1533] + xx[1577] + xx[371] * xx[383] + xx[368] * xx[435] - (xx[1224] *
    xx[437] + xx[453] * xx[1239]) + (xx[1586] + xx[1511]) * xx[18];
  xx[1257] = xx[1208] + xx[1534] + xx[1578] + xx[367] * xx[383] + xx[1165] * xx
    [435] + xx[1227] * xx[437] - xx[372] * xx[453] + (xx[1587] + xx[1512]) * xx
    [18];
  xx[1258] = xx[1209] - (xx[365] * xx[171] + xx[354] * xx[38] + xx[360] * xx[486])
    + xx[1535] + xx[1579] + xx[366] * xx[29] + xx[369] * xx[30] - (xx[156] * xx
    [1128] + xx[1178] * xx[202]) + (xx[1588] + xx[1513]) * xx[18];
  xx[1259] = xx[1210] - (xx[353] * xx[171] + xx[348] * xx[38] + xx[347] * xx[486])
    + xx[1536] + xx[1580] + xx[371] * xx[29] + xx[368] * xx[30] - (xx[1224] *
    xx[156] + xx[202] * xx[1239]) + (xx[1589] + xx[1514]) * xx[18];
  xx[1260] = xx[1211] + xx[1537] + xx[1581] + xx[367] * xx[29] + xx[1165] * xx
    [30] + xx[1227] * xx[156] - xx[372] * xx[202] + (xx[1590] + xx[1515]) * xx
    [18];
  xx[1261] = xx[1212] - (xx[365] * xx[216] + xx[354] * xx[212] + xx[360] * xx
    [157]) + xx[1538] + xx[1582] + xx[366] * xx[217] + xx[369] * xx[218] - (xx
    [225] * xx[1128] + xx[1178] * xx[226]) + (xx[1591] + xx[1516]) * xx[18];
  xx[1262] = xx[1213] - (xx[353] * xx[216] + xx[348] * xx[212] + xx[347] * xx
    [157]) + xx[1539] + xx[1583] + xx[371] * xx[217] + xx[368] * xx[218] - (xx
    [1224] * xx[225] + xx[226] * xx[1239]) + (xx[1592] + xx[1517]) * xx[18];
  xx[1263] = xx[1214] + xx[1540] + xx[1584] + xx[367] * xx[217] + xx[1165] * xx
    [218] + xx[1227] * xx[225] - xx[372] * xx[226] + (xx[1593] + xx[1518]) * xx
    [18];
  pm_math_matrix3x3Xform(xx + 1255, xx + 236, xx + 364);
  xx[157] = xx[355] * xx[394] - xx[411] * xx[349];
  xx[347] = xx[1331];
  xx[348] = - xx[1330];
  xx[349] = xx[157];
  pm_math_cross3(xx + 1339, xx + 347, xx + 353);
  xx[347] = state[34] * state[34];
  xx[367] = (xx[18] * (xx[353] + xx[1348]) - xx[394]) * xx[347];
  xx[368] = ((xx[354] - xx[1346]) * xx[18] - xx[411]) * xx[347];
  xx[369] = (xx[350] * xx[157] + xx[355]) * xx[18] * xx[347];
  pm_math_quatXform(xx + 313, xx + 367, xx + 347);
  pm_math_matrix3x3Xform(xx + 746, xx + 417, xx + 353);
  xx[367] = xx[353] + xx[208];
  xx[368] = xx[354] + xx[214];
  xx[369] = xx[355] + xx[223];
  pm_math_quatXform(xx + 309, xx + 367, xx + 353);
  pm_math_matrix3x3Xform(xx + 852, xx + 1290, xx + 367);
  xx[1187] = xx[367] + xx[594];
  xx[1188] = xx[368] + xx[595];
  xx[1189] = xx[369] + xx[596];
  pm_math_quatXform(xx + 305, xx + 1187, xx + 367);
  pm_math_matrix3x3Xform(xx + 1949, xx + 1294, xx + 1187);
  xx[1190] = xx[1187] + xx[657];
  xx[1191] = xx[1188] + xx[658];
  xx[1192] = xx[1189] + xx[659];
  pm_math_quatXform(xx + 301, xx + 1190, xx + 1187);
  xx[157] = xx[1286] * xx[228] - xx[1301] * xx[261] + xx[204];
  xx[350] = xx[1301] * xx[228] - xx[1286] * xx[431] - xx[209];
  xx[358] = xx[350] * xx[169];
  xx[360] = xx[157] * xx[169];
  xx[371] = xx[350] * xx[154] - xx[157] * xx[161];
  xx[1190] = - xx[358];
  xx[1191] = xx[360];
  xx[1192] = xx[371];
  pm_math_cross3(xx + 289, xx + 1190, xx + 1198);
  xx[372] = xx[1286] * xx[162] + xx[1301] * xx[164];
  xx[394] = xx[1301] - xx[18] * xx[372] * xx[164] + xx[433];
  xx[411] = xx[1286] - xx[18] * xx[372] * xx[162] + xx[434];
  xx[372] = xx[1347] * state[34];
  xx[479] = xx[1352] * state[34];
  xx[486] = xx[18] * xx[1349] * state[34];
  xx[1190] = xx[372] - xx[416] * xx[345];
  xx[1191] = xx[479] + xx[345] * xx[412] + xx[325] * xx[413];
  xx[1192] = xx[486] + xx[416] * xx[325];
  pm_math_quatXform(xx + 219, xx + 1190, xx + 1206);
  xx[412] = xx[287] + xx[1206];
  pm_math_cross3(xx + 1085, xx + 1290, xx + 1190);
  xx[413] = xx[243] + xx[1207];
  xx[416] = xx[1208] - xx[248];
  xx[1206] = xx[412] + xx[1190];
  xx[1207] = xx[413] + xx[1191];
  xx[1208] = xx[416] + xx[1192];
  pm_math_quatXform(xx + 193, xx + 1206, xx + 1190);
  xx[1128] = xx[339] + xx[1190];
  pm_math_cross3(xx + 1061, xx + 1294, xx + 1206);
  xx[1165] = xx[340] + xx[1191];
  xx[1169] = xx[341] + xx[1192];
  xx[1190] = xx[1128] + xx[1206];
  xx[1191] = xx[1165] + xx[1207];
  xx[1192] = xx[1169] + xx[1208];
  pm_math_quatXform(xx + 183, xx + 1190, xx + 1206);
  xx[1170] = xx[674] + xx[1206];
  xx[1178] = xx[1170] - xx[1286] * state[10];
  xx[1179] = xx[675] + xx[1207];
  xx[1185] = xx[1179] + xx[1301] * state[10];
  xx[1190] = xx[1185] * xx[162] + xx[164] * xx[1178];
  xx[1191] = (xx[384] + xx[1178] - xx[18] * xx[1190] * xx[164]) * inputDot[6];
  xx[1178] = xx[169] * xx[1191];
  xx[1192] = (xx[430] + xx[1185] - xx[18] * xx[1190] * xx[162]) * inputDot[6];
  xx[1185] = xx[169] * xx[1192];
  xx[1190] = xx[154] * xx[1191] + xx[1192] * xx[161];
  xx[1206] = - xx[1178];
  xx[1207] = - xx[1185];
  xx[1208] = xx[1190];
  pm_math_cross3(xx + 289, xx + 1206, xx + 1209);
  xx[1196] = xx[1179] * state[10];
  xx[1179] = xx[1170] * state[10];
  xx[1170] = xx[1196] * xx[164] - xx[162] * xx[1179];
  xx[1206] = xx[1128];
  xx[1207] = xx[1165];
  xx[1208] = xx[1169];
  pm_math_cross3(xx + 1061, xx + 1206, xx + 1212);
  pm_math_quatXform(xx + 183, xx + 1212, xx + 1206);
  xx[1212] = xx[412];
  xx[1213] = xx[413];
  xx[1214] = xx[416];
  pm_math_cross3(xx + 1085, xx + 1212, xx + 1231);
  pm_math_quatXform(xx + 193, xx + 1231, xx + 1212);
  xx[1231] = xx[345] * xx[479];
  xx[1232] = xx[486] * xx[325] - xx[345] * xx[372];
  xx[1233] = - (xx[325] * xx[479]);
  pm_math_quatXform(xx + 219, xx + 1231, xx + 1243);
  pm_math_quatXform(xx + 193, xx + 1243, xx + 1231);
  xx[1243] = xx[1212] + xx[1231];
  xx[1244] = xx[1213] + xx[1232];
  xx[1245] = xx[1214] + xx[1233];
  pm_math_quatXform(xx + 183, xx + 1243, xx + 1212);
  xx[372] = xx[1206] + xx[1212];
  xx[412] = xx[1207] + xx[1213];
  xx[413] = xx[412] * xx[162] + xx[372] * xx[164];
  xx[416] = xx[1208] + xx[1214];
  xx[1206] = xx[18] * xx[164] * xx[1170] - xx[1196] + xx[372] - xx[18] * xx[413]
    * xx[164];
  xx[1207] = xx[1179] + xx[18] * xx[162] * xx[1170] + xx[412] - xx[18] * xx[413]
    * xx[162];
  xx[1208] = xx[416] - (xx[162] * xx[416] * xx[162] + xx[416] * xx[164] * xx[164])
    * xx[18];
  pm_math_quatXform(xx + 335, xx + 1206, xx + 1212);
  xx[372] = xx[1828] * xx[1828];
  xx[412] = xx[1771] * xx[1828];
  xx[413] = xx[1] * xx[1412];
  xx[416] = xx[1771] * xx[1];
  xx[479] = xx[1828] * xx[1412];
  xx[486] = xx[1771] * xx[1412];
  xx[1128] = xx[1] * xx[1828];
  xx[1255] = (xx[372] + xx[1] * xx[1]) * xx[18] - xx[3];
  xx[1256] = xx[18] * (xx[412] - xx[413]);
  xx[1257] = - ((xx[416] + xx[479]) * xx[18]);
  xx[1258] = - ((xx[413] + xx[412]) * xx[18]);
  xx[1259] = (xx[372] + xx[1412] * xx[1412]) * xx[18] - xx[3];
  xx[1260] = xx[18] * (xx[486] - xx[1128]);
  xx[1261] = xx[18] * (xx[479] - xx[416]);
  xx[1262] = (xx[486] + xx[1128]) * xx[18];
  xx[1263] = (xx[372] + xx[1771] * xx[1771]) * xx[18] - xx[3];
  xx[1] = xx[58] * state[70];
  xx[372] = xx[58] * state[71];
  xx[412] = state[70] - (xx[58] * xx[1] - xx[59] * xx[372]) * xx[18];
  xx[413] = xx[1811] * xx[412] - xx[1760] * state[72];
  xx[416] = state[71] - xx[18] * (xx[59] * xx[1] + xx[58] * xx[372]);
  xx[1] = xx[416] * xx[1760] - xx[1805] * xx[412];
  xx[58] = xx[416] * xx[1811] - xx[1805] * state[72];
  xx[59] = xx[1883] * state[72] - xx[1803] * xx[412];
  xx[372] = xx[416] * xx[1883] - xx[1791] * xx[412];
  xx[479] = xx[1791] * state[72] - xx[416] * xx[1803];
  xx[486] = xx[1798] * xx[412] - xx[1800] * state[72];
  xx[1128] = xx[416] * xx[1800] - xx[1810] * xx[412];
  xx[1165] = xx[1810] * state[72] - xx[416] * xx[1798];
  xx[1278] = xx[413] * state[72] - xx[1] * xx[416];
  xx[1279] = xx[58] * state[72] + xx[1] * xx[412];
  xx[1280] = - (xx[58] * xx[416] + xx[413] * xx[412]);
  xx[1281] = - (xx[59] * state[72] + xx[416] * xx[372]);
  xx[1282] = xx[372] * xx[412] - xx[479] * state[72];
  xx[1283] = xx[479] * xx[416] + xx[59] * xx[412];
  xx[1284] = xx[486] * state[72] - xx[416] * xx[1128];
  xx[1285] = xx[1128] * xx[412] - xx[1165] * state[72];
  xx[1286] = xx[416] * xx[1165] - xx[486] * xx[412];
  pm_math_matrix3x3Compose(xx + 1255, xx + 1278, xx + 1287);
  xx[1] = xx[18] * xx[1362] * xx[1406] * state[65] * state[65];
  xx[58] = xx[1774] * xx[1774];
  xx[59] = (xx[58] + xx[1407] * xx[1407]) * xx[18] - xx[3];
  xx[372] = (xx[18] * xx[1406] * xx[1406] - xx[3]) * state[65] * state[65];
  xx[413] = xx[1770] * xx[1407];
  xx[479] = xx[1774] * xx[1775];
  xx[486] = xx[413] + xx[479];
  xx[1128] = xx[18] * xx[486];
  xx[1165] = xx[1] * xx[59] + xx[372] * xx[1128];
  xx[1169] = (xx[18] * xx[1362] * xx[1362] - xx[3]) * state[65] * state[65];
  xx[1170] = xx[1128] * xx[1] + xx[1169] * xx[59];
  xx[1179] = xx[59] * inputDot[10] * inputDot[10];
  xx[1196] = xx[1802] * xx[1406] - xx[1362] * xx[1788];
  xx[1203] = xx[1196] * xx[1196];
  xx[1204] = xx[1406] * xx[1804] + xx[1362] * xx[1777];
  xx[1206] = xx[1204] * xx[1204];
  xx[1207] = (xx[1203] + xx[1206]) * xx[18] - xx[3];
  xx[1208] = xx[1802] * xx[1362] + xx[1406] * xx[1788];
  xx[1219] = xx[1196] * xx[1208];
  xx[1220] = xx[1406] * xx[1777] - xx[1362] * xx[1804];
  xx[1224] = xx[1220] * xx[1204];
  xx[1227] = (xx[1219] - xx[1224]) * xx[18];
  xx[1231] = xx[18] * xx[486] * inputDot[10] * inputDot[10];
  xx[1255] = xx[1774];
  xx[1256] = xx[1884];
  xx[1257] = xx[1770];
  xx[1258] = xx[1775];
  xx[1259] = xx[1196];
  xx[1260] = - xx[1204];
  xx[1261] = xx[1220];
  xx[1262] = xx[1208];
  pm_math_quatCompose(xx + 1255, xx + 1259, xx + 1321);
  xx[486] = xx[1321] * xx[1321];
  xx[1232] = xx[1322] * xx[1323];
  xx[1233] = xx[1321] * xx[1324];
  xx[1234] = xx[1322] * xx[1324];
  xx[1239] = xx[1321] * xx[1323];
  xx[1243] = xx[1323] * xx[1324];
  xx[1244] = xx[1321] * xx[1322];
  xx[1346] = (xx[486] + xx[1322] * xx[1322]) * xx[18] - xx[3];
  xx[1347] = xx[18] * (xx[1232] - xx[1233]);
  xx[1348] = (xx[1234] + xx[1239]) * xx[18];
  xx[1349] = (xx[1232] + xx[1233]) * xx[18];
  xx[1350] = (xx[486] + xx[1323] * xx[1323]) * xx[18] - xx[3];
  xx[1351] = xx[18] * (xx[1243] - xx[1244]);
  xx[1352] = xx[18] * (xx[1234] - xx[1239]);
  xx[1353] = (xx[1243] + xx[1244]) * xx[18];
  xx[1354] = (xx[486] + xx[1324] * xx[1324]) * xx[18] - xx[3];
  xx[486] = xx[1220] * inputDot[10];
  xx[1232] = xx[1204] * inputDot[10];
  xx[1243] = xx[18] * (xx[1196] * xx[486] + xx[1232] * xx[1208]);
  xx[1244] = - ((xx[486] * xx[1208] - xx[1196] * xx[1232]) * xx[18]);
  xx[1245] = (xx[1232] * xx[1204] + xx[1220] * xx[486]) * xx[18] - inputDot[10];
  pm_math_matrix3x3PostCross(xx + 1346, xx + 1243, xx + 1510);
  xx[486] = xx[1802] * state[65];
  xx[1232] = xx[1788] * state[65];
  xx[1233] = (xx[486] * xx[1777] + xx[1232] * xx[1804]) * xx[18];
  xx[1234] = xx[18] * (xx[486] * xx[1804] - xx[1232] * xx[1777]);
  xx[1239] = state[65] - (xx[1232] * xx[1788] + xx[1802] * xx[486]) * xx[18];
  xx[1243] = xx[1233] + xx[412];
  xx[1244] = xx[1234] + xx[416];
  xx[1245] = xx[1239] + state[72];
  pm_math_matrix3x3PostCross(xx + 1510, xx + 1243, xx + 1346);
  xx[486] = xx[1770] * xx[1774];
  xx[1232] = xx[1407] * xx[1775];
  xx[1243] = xx[479] - xx[413];
  xx[413] = xx[1243] * xx[18];
  xx[479] = (xx[58] + xx[1770] * xx[1770]) * xx[18] - xx[3];
  xx[1244] = xx[1770] * xx[1775];
  xx[1245] = xx[1774] * xx[1407];
  xx[1247] = xx[1232] + xx[486];
  xx[1248] = xx[18] * xx[1247];
  xx[1249] = xx[1244] - xx[1245];
  xx[1251] = xx[1249] * xx[18];
  xx[1510] = xx[59];
  xx[1511] = - xx[1128];
  xx[1512] = (xx[486] - xx[1232]) * xx[18];
  xx[1513] = xx[413];
  xx[1514] = xx[479];
  xx[1515] = xx[18] * (xx[1244] + xx[1245]);
  xx[1516] = - xx[1248];
  xx[1517] = xx[1251];
  xx[1518] = (xx[58] + xx[1775] * xx[1775]) * xx[18] - xx[3];
  xx[58] = xx[18] * (xx[1224] + xx[1219]);
  xx[59] = xx[1220] * xx[1196];
  xx[486] = xx[1208] * xx[1204];
  xx[1128] = (xx[59] - xx[486]) * xx[18];
  xx[1219] = xx[1220] * xx[1220];
  xx[1224] = (xx[1203] + xx[1219]) * xx[18] - xx[3];
  xx[1232] = xx[1220] * xx[1208];
  xx[1220] = xx[1196] * xx[1204];
  xx[1196] = xx[18] * (xx[1232] + xx[1220]);
  xx[1532] = xx[1207];
  xx[1533] = - xx[58];
  xx[1534] = xx[1128];
  xx[1535] = xx[1227];
  xx[1536] = xx[1224];
  xx[1537] = xx[1196];
  xx[1538] = - (xx[18] * (xx[486] + xx[59]));
  xx[1539] = (xx[1232] - xx[1220]) * xx[18];
  xx[1540] = (xx[1203] + xx[1208] * xx[1208]) * xx[18] - xx[3];
  xx[1259] = xx[1233];
  xx[1260] = xx[1234];
  xx[1261] = xx[1239];
  pm_math_matrix3x3PostCross(xx + 1532, xx + 1259, xx + 1552);
  xx[1259] = xx[412];
  xx[1260] = xx[416];
  xx[1261] = state[72];
  pm_math_matrix3x3PostCross(xx + 1552, xx + 1259, xx + 1532);
  pm_math_matrix3x3Compose(xx + 1510, xx + 1532, xx + 1552);
  xx[1203] = xx[1] * xx[479] - xx[1169] * xx[413];
  xx[1204] = xx[413] * xx[1] - xx[372] * xx[479];
  xx[413] = xx[18] * xx[1243] * inputDot[10] * inputDot[10];
  xx[1208] = xx[479] * inputDot[10] * inputDot[10];
  xx[479] = xx[1251] * xx[1] + xx[1169] * xx[1248];
  xx[1233] = xx[1] * xx[1248] + xx[372] * xx[1251];
  xx[1234] = xx[18] * xx[1249] * inputDot[10] * inputDot[10];
  xx[1239] = xx[18] * xx[1247] * inputDot[10] * inputDot[10];
  xx[1510] = xx[1287] + xx[1883] * xx[1165] - xx[1760] * xx[1170] - (xx[1179] *
    xx[1207] - xx[1227] * xx[1231]) + (xx[1346] + xx[1552]) * xx[18];
  xx[1511] = xx[1288] + xx[1791] * xx[1165] - xx[1805] * xx[1170] + xx[1179] *
    xx[58] + xx[1231] * xx[1224] + (xx[1347] + xx[1553]) * xx[18];
  xx[1512] = xx[1289] + xx[1803] * xx[1165] - xx[1811] * xx[1170] - (xx[1179] *
    xx[1128] - xx[1231] * xx[1196]) + (xx[1348] + xx[1554]) * xx[18];
  xx[1513] = xx[1290] + xx[1760] * xx[1203] + xx[1883] * xx[1204] - (xx[413] *
    xx[1207] + xx[1227] * xx[1208]) + (xx[1349] + xx[1555]) * xx[18];
  xx[1514] = xx[1291] + xx[1791] * xx[1204] + xx[1805] * xx[1203] - (xx[1208] *
    xx[1224] - xx[58] * xx[413]) + (xx[1350] + xx[1556]) * xx[18];
  xx[1515] = xx[1292] + xx[1811] * xx[1203] + xx[1803] * xx[1204] - (xx[1128] *
    xx[413] + xx[1208] * xx[1196]) + (xx[1351] + xx[1557]) * xx[18];
  xx[1516] = xx[1293] + xx[1760] * xx[479] - xx[1883] * xx[1233] - (xx[1227] *
    xx[1234] - xx[1239] * xx[1207]) + (xx[1352] + xx[1558]) * xx[18];
  xx[1517] = xx[1294] + xx[1805] * xx[479] - xx[1791] * xx[1233] - (xx[58] * xx
    [1239] + xx[1234] * xx[1224]) + (xx[1353] + xx[1559]) * xx[18];
  xx[1518] = xx[1295] + xx[1811] * xx[479] - xx[1803] * xx[1233] - (xx[1196] *
    xx[1234] - xx[1128] * xx[1239]) + (xx[1354] + xx[1560]) * xx[18];
  pm_math_matrix3x3Xform(xx + 1510, xx + 902, xx + 1243);
  pm_math_matrix3x3Xform(xx + 1278, xx + 74, xx + 1247);
  pm_math_quatXform(xx + 1897, xx + 1247, xx + 1251);
  xx[58] = state[65] * state[65];
  xx[479] = xx[1829] * xx[1406] - xx[1840] * xx[1362];
  xx[1128] = xx[1829] - xx[18] * xx[479] * xx[1406];
  xx[1165] = xx[1877] * xx[1] - xx[1876] * xx[1169] + xx[58] * xx[1128];
  xx[1169] = xx[1840] + xx[18] * xx[479] * xx[1362];
  xx[479] = xx[1876] * xx[1] - xx[1877] * xx[372] - xx[58] * xx[1169];
  xx[1] = xx[479] * xx[1775];
  xx[58] = xx[1165] * xx[1775];
  xx[372] = xx[479] * xx[1407] + xx[1770] * xx[1165];
  xx[1247] = - xx[1];
  xx[1248] = xx[58];
  xx[1249] = - xx[372];
  pm_math_cross3(xx + 1885, xx + 1247, xx + 1278);
  xx[1170] = inputDot[10] * inputDot[10];
  xx[1196] = xx[1770] * xx[16];
  xx[1203] = xx[16] * xx[1775];
  xx[1204] = xx[1203] * xx[1775];
  xx[1207] = xx[1362] * xx[1877] + xx[1876] * xx[1406];
  xx[1224] = 0.03194045367095628;
  xx[1227] = xx[1876] - (xx[18] * xx[1207] * xx[1406] + xx[1128]) + xx[1224];
  xx[1233] = xx[1877] - xx[18] * xx[1207] * xx[1362] + xx[1169];
  pm_math_cross3(xx + 1259, xx + 74, xx + 1247);
  pm_math_quatXform(xx + 1806, xx + 1247, xx + 1281);
  xx[1207] = xx[1282] + xx[1876] * state[65];
  xx[1262] = xx[1281] - xx[1877] * state[65];
  xx[1263] = xx[1207] * xx[1362] + xx[1406] * xx[1262];
  xx[1267] = ((xx[1888] - xx[1829]) * state[65] + xx[1207] - xx[18] * xx[1263] *
              xx[1362]) * inputDot[10];
  xx[1207] = ((xx[1879] - xx[1840]) * state[65] + xx[1262] - xx[18] * xx[1263] *
              xx[1406]) * inputDot[10];
  xx[1262] = xx[1207] * xx[1775];
  xx[1263] = xx[1267] * xx[1775];
  xx[1270] = xx[1770] * xx[1267] - xx[1207] * xx[1407];
  xx[1283] = xx[1262];
  xx[1284] = xx[1263];
  xx[1285] = - xx[1270];
  pm_math_cross3(xx + 1885, xx + 1283, xx + 1286);
  xx[1271] = xx[1282] * state[65];
  xx[1273] = xx[1281] * state[65];
  xx[1275] = xx[1271] * xx[1406] - xx[1362] * xx[1273];
  xx[1281] = xx[18] * xx[1406] * xx[1275] - xx[1271];
  xx[1271] = xx[1273] + xx[18] * xx[1362] * xx[1275];
  xx[1273] = xx[1271] * xx[1775];
  xx[1275] = xx[1775] * xx[1281];
  xx[1282] = xx[1271] * xx[1407] + xx[1770] * xx[1281];
  xx[1283] = - xx[1273];
  xx[1284] = xx[1275];
  xx[1285] = - xx[1282];
  pm_math_cross3(xx + 1885, xx + 1283, xx + 1289);
  xx[1283] = xx[1145];
  xx[1284] = - ((xx[1240] + xx[370]) * xx[18]);
  xx[1285] = xx[3] - (xx[373] + xx[1236]) * xx[18];
  pm_math_cross3(xx + 1283, xx + 236, xx + 1292);
  pm_math_quatXform(xx + 1215, xx + 1292, xx + 1283);
  xx[370] = xx[394] * xx[169];
  xx[373] = xx[169] * xx[411];
  xx[1145] = xx[394] * xx[154] + xx[411] * xx[161];
  xx[1215] = - xx[370];
  xx[1216] = - xx[373];
  xx[1217] = xx[1145];
  pm_math_cross3(xx + 289, xx + 1215, xx + 1292);
  pm_math_cross3(xx + 804, xx + 417, xx + 1215);
  xx[1295] = xx[564] + xx[1215];
  xx[1296] = xx[566] + xx[1216];
  xx[1297] = xx[867] + xx[1217];
  pm_math_quatInverseXform(xx + 407, xx + 1295, xx + 1215);
  pm_math_quatInverseXform(xx + 407, xx + 804, xx + 1295);
  xx[867] = xx[656] + xx[379] * xx[1215] - xx[376] * xx[1216] - xx[374] * xx
    [1297];
  xx[1215] = xx[18] * (xx[59] + xx[486]);
  xx[1216] = - ((xx[1232] - xx[1220]) * xx[18]);
  xx[1217] = (xx[1206] + xx[1219]) * xx[18] - xx[3];
  pm_math_cross3(xx + 1215, xx + 902, xx + 1218);
  pm_math_quatXform(xx + 1321, xx + 1218, xx + 1215);
  xx[59] = xx[1227] * xx[1775];
  xx[486] = xx[1775] * xx[1233];
  xx[656] = xx[1770] * xx[1233] - xx[1227] * xx[1407];
  xx[1218] = xx[59];
  xx[1219] = xx[486];
  xx[1220] = - xx[656];
  pm_math_cross3(xx + 1885, xx + 1218, xx + 1295);
  xx[1206] = xx[16] * xx[1407];
  xx[1218] = xx[1774] * xx[1203];
  pm_math_quatInverseXform(xx + 1255, xx + 39, xx + 1299);
  xx[1219] = xx[1362] * xx[1300] + xx[1299] * xx[1406];
  xx[1220] = xx[1299] - xx[18] * xx[1219] * xx[1406];
  xx[1232] = xx[1300] - xx[18] * xx[1219] * xx[1362];
  xx[1219] = xx[1301] - inputDot[10];
  xx[1236] = xx[1219] - (xx[1362] * xx[1362] * xx[1219] + xx[1406] * xx[1219] *
    xx[1406]) * xx[18];
  xx[1240] = xx[1236] + state[65];
  xx[1321] = xx[1220];
  xx[1322] = xx[1232];
  xx[1323] = xx[1240];
  xx[1324] = xx[55] * xx[1220];
  xx[1325] = xx[56] * xx[1232];
  xx[1326] = xx[1240] * xx[57];
  pm_math_cross3(xx + 1321, xx + 1324, xx + 1330);
  pm_math_quatInverseXform(xx + 1806, xx + 1321, xx + 1324);
  xx[55] = xx[1324] + xx[412];
  xx[56] = xx[1325] + xx[416];
  xx[412] = xx[1326] + state[72];
  xx[1337] = xx[55];
  xx[1338] = xx[56];
  xx[1339] = xx[412];
  xx[1340] = xx[55] * xx[83];
  xx[1341] = xx[56] * xx[84];
  xx[1342] = xx[412] * xx[85];
  pm_math_cross3(xx + 1337, xx + 1340, xx + 1346);
  pm_math_cross3(xx + 1324, xx + 1259, xx + 1337);
  xx[416] = xx[1346] + xx[83] * xx[1337];
  xx[1259] = xx[1347] + xx[84] * xx[1338];
  xx[1340] = xx[1324] + xx[55];
  xx[1341] = xx[1325] + xx[56];
  xx[1342] = xx[1326] + xx[412];
  pm_math_cross3(xx + 1340, xx + 1247, xx + 1324);
  pm_math_cross3(xx + 1321, xx + 1876, xx + 1247);
  pm_math_cross3(xx + 1321, xx + 1247, xx + 1340);
  pm_math_quatInverseXform(xx + 1806, xx + 1340, xx + 1247);
  xx[55] = (xx[1324] + xx[1247]) * xx[78];
  xx[56] = (xx[1325] + xx[1248]) * xx[78];
  xx[412] = (xx[1326] + xx[1249]) * xx[78];
  xx[1247] = xx[55];
  xx[1248] = xx[56];
  xx[1249] = xx[412];
  xx[78] = xx[416] - xx[1259] * xx[94] + pm_math_dot3(xx + 116, xx + 1247);
  xx[1260] = xx[416] * xx[94] + xx[1259] + pm_math_dot3(xx + 758, xx + 1247);
  xx[1247] = xx[1348] + xx[85] * xx[1339];
  xx[1248] = xx[1247] + xx[72] * xx[56] - xx[73] * xx[55];
  xx[1321] = - xx[78];
  xx[1322] = - xx[1260];
  xx[1323] = - xx[1248];
  solveSymmetricPosDef(xx + 96, xx + 1321, 3, 1, xx + 1324, xx + 1337);
  xx[1321] = xx[416] + xx[83] * xx[1324] + xx[145] * xx[1325];
  xx[1322] = xx[1259] - xx[718] * xx[1324] + xx[84] * xx[1325];
  xx[1323] = xx[1247] + xx[85] * xx[1326];
  pm_math_quatXform(xx + 1806, xx + 1321, xx + 1337);
  xx[1321] = xx[55] + xx[736] * xx[1324] - xx[811] * xx[1325] - xx[875] * xx
    [1326];
  xx[1322] = xx[56] + xx[811] * xx[1324] + xx[736] * xx[1325] + xx[913] * xx
    [1326];
  xx[1323] = xx[412] + xx[914] * xx[1324] + xx[932] * xx[1325];
  pm_math_quatXform(xx + 1806, xx + 1321, xx + 1340);
  pm_math_cross3(xx + 1876, xx + 1340, xx + 1321);
  xx[1249] = xx[1232] * state[65];
  xx[1261] = xx[1220] * state[65];
  xx[1304] = xx[1973] - xx[1937];
  xx[1305] = xx[1974] - xx[1940];
  xx[1314] = xx[1976] - xx[1938];
  xx[1315] = xx[1977] - xx[1941];
  xx[1318] = xx[1981] - xx[1945];
  xx[1346] = xx[1304];
  xx[1347] = xx[1305];
  xx[1348] = xx[1975] - xx[1943];
  xx[1349] = xx[1314];
  xx[1350] = xx[1315];
  xx[1351] = xx[1978] - xx[1944];
  xx[1352] = xx[148];
  xx[1353] = xx[1799];
  xx[1354] = xx[1318];
  xx[1342] = xx[1299];
  xx[1343] = xx[1300];
  xx[1344] = xx[1219];
  xx[148] = 3.999999996613603e-3;
  xx[1363] = xx[1224] - xx[1128];
  xx[1364] = xx[1169];
  xx[1365] = 1.587500000000039e-3 - (xx[148] - (xx[1362] * xx[148] * xx[1362] +
    xx[148] * xx[1406] * xx[1406]) * xx[18]);
  pm_math_cross3(xx + 1342, xx + 1363, xx + 1366);
  pm_math_cross3(xx + 1342, xx + 1366, xx + 1377);
  xx[148] = xx[1362] * xx[1378] + xx[1377] * xx[1406];
  xx[1128] = xx[1236] + xx[1240];
  xx[1169] = xx[1829] * state[65];
  xx[1224] = xx[1377] - xx[18] * xx[148] * xx[1406] + xx[1128] * xx[1169];
  xx[1236] = xx[1840] * state[65];
  xx[1240] = xx[1378] - xx[18] * xx[148] * xx[1362] - xx[1128] * xx[1236];
  xx[148] = (xx[1232] + xx[1232]) * xx[1236] - (xx[1220] + xx[1220]) * xx[1169]
    + xx[1379] - (xx[1362] * xx[1362] * xx[1379] + xx[1379] * xx[1406] * xx[1406])
    * xx[18];
  xx[1342] = xx[1224];
  xx[1343] = xx[1240];
  xx[1344] = xx[148];
  pm_math_matrix3x3Xform(xx + 1346, xx + 1342, xx + 1366);
  xx[1128] = xx[1249] * (xx[1970] - xx[1988] - xx[1984] - xx[2006]) - xx[1261] *
    (xx[1971] - xx[1989] - xx[1987] - xx[2007]) + xx[1368];
  xx[1346] = xx[1812];
  xx[1347] = xx[1992];
  xx[1348] = xx[1993];
  xx[1349] = xx[1994];
  xx[1350] = xx[1893];
  xx[1351] = xx[1996];
  xx[1352] = xx[1997];
  xx[1353] = xx[1998];
  xx[1354] = xx[398] + xx[1999];
  pm_math_matrix3x3Xform(xx + 1346, xx + 1342, xx + 1366);
  xx[1169] = xx[1249] * xx[1304] - xx[1261] * xx[1314] + xx[1366];
  xx[1220] = xx[1249] * xx[1305] - xx[1261] * xx[1315] + xx[1367];
  xx[1342] = (xx[1966] - xx[1984] - xx[1988] - xx[2002] - (xx[1840] * xx[1304] +
    xx[1829] * xx[1305])) / xx[1903];
  xx[1343] = (xx[1969] - xx[1987] - xx[1989] - xx[2005] - (xx[1840] * xx[1314] +
    xx[1829] * xx[1315])) / xx[1903];
  xx[1344] = xx[1801] / xx[1903];
  pm_math_quatInverseXform(xx + 1255, xx + 24, xx + 1346);
  xx[1232] = xx[1346] - xx[1300] * inputDot[10];
  xx[1236] = xx[1347] + xx[1299] * inputDot[10];
  xx[1300] = xx[1236] * xx[1362] + xx[1406] * xx[1232];
  xx[1304] = xx[1232] - xx[18] * xx[1300] * xx[1406];
  xx[1305] = xx[1236] - xx[18] * xx[1300] * xx[1362];
  xx[1300] = xx[1348] - inputDdot[10];
  xx[1314] = xx[1300] - (xx[1362] * xx[1362] * xx[1300] + xx[1406] * xx[1300] *
    xx[1406]) * xx[18];
  xx[1346] = xx[1304];
  xx[1347] = xx[1305];
  xx[1348] = xx[1314];
  xx[1349] = xx[1892] / xx[1903];
  xx[1350] = xx[1902] / xx[1903];
  xx[1351] = (xx[1318] - (xx[1840] * xx[1997] + xx[1829] * xx[1998])) / xx[1903];
  xx[1315] = 1.587499999999983e-3;
  xx[1318] = xx[1770] * xx[1315];
  xx[1319] = xx[1315] * xx[1407] - xx[1203];
  xx[1352] = xx[1318];
  xx[1353] = xx[1319];
  xx[1354] = xx[1196];
  pm_math_cross3(xx + 1885, xx + 1352, xx + 1366);
  xx[1321] = xx[1774] * xx[1196];
  xx[1352] = - (0.1492477869940503 + (xx[1774] * xx[1318] + xx[1366]) * xx[18] -
                xx[16]);
  xx[1353] = 0.02992151662180351 - (xx[1774] * xx[1319] + xx[1367]) * xx[18];
  xx[1354] = - (0.04838166497694621 + xx[1315] + xx[18] * (xx[1368] + xx[1321]));
  pm_math_cross3(xx + 24, xx + 1352, xx + 1366);
  xx[1377] = xx[4] + xx[1366];
  xx[1378] = xx[7] + xx[1367];
  xx[1379] = xx[21] + xx[1368];
  pm_math_quatInverseXform(xx + 1255, xx + 1377, xx + 1366);
  pm_math_cross3(xx + 39, xx + 1352, xx + 1377);
  pm_math_cross3(xx + 39, xx + 1377, xx + 1352);
  pm_math_quatInverseXform(xx + 1255, xx + 1352, xx + 1377);
  xx[1255] = xx[16] * inputDot[10];
  xx[1256] = xx[1232];
  xx[1257] = xx[1236];
  xx[1258] = xx[1300];
  pm_math_cross3(xx + 1256, xx + 1363, xx + 1352);
  xx[1232] = xx[1366] + xx[1377] + (xx[1301] + xx[1219]) * xx[1255] + xx[1352];
  xx[1219] = xx[1367] + xx[1378] - xx[16] * inputDdot[10] + xx[1353];
  xx[1236] = xx[1219] * xx[1362] + xx[1232] * xx[1406];
  xx[1256] = xx[1232] - xx[18] * xx[1236] * xx[1406];
  xx[1232] = xx[1219] - xx[18] * xx[1236] * xx[1362];
  xx[1219] = xx[1368] + xx[1379] - (xx[1299] + xx[1299]) * xx[1255] + xx[1354];
  xx[1236] = xx[1219] - (xx[1362] * xx[1219] * xx[1362] + xx[1219] * xx[1406] *
    xx[1406]) * xx[18];
  xx[1299] = xx[1256];
  xx[1300] = xx[1232];
  xx[1301] = xx[1236];
  xx[1219] = pm_math_dot3(xx + 1342, xx + 1346) + pm_math_dot3(xx + 1349, xx +
    1299);
  xx[1255] = (xx[1332] + xx[1339] + xx[1323] + xx[1128] - ((xx[1340] + xx[1169])
    * xx[1840] + (xx[1341] + xx[1220]) * xx[1829])) / xx[1903] + xx[1219];
  xx[1257] = xx[1304] + xx[1249];
  xx[1249] = xx[1305] - xx[1261];
  xx[1299] = xx[1257];
  xx[1300] = xx[1249];
  xx[1301] = xx[1314] - xx[1255];
  pm_math_quatInverseXform(xx + 1806, xx + 1299, xx + 1337);
  pm_math_cross3(xx + 1299, xx + 1876, xx + 1340);
  xx[1258] = xx[1236] + xx[148];
  xx[1299] = xx[1256] + xx[1255] * xx[1840] + xx[1224] + xx[1340];
  xx[1300] = xx[1232] + xx[1255] * xx[1829] + xx[1240] + xx[1341];
  xx[1301] = xx[1258] + xx[1342];
  pm_math_quatInverseXform(xx + 1806, xx + 1299, xx + 1340);
  xx[148] = xx[1324] - (pm_math_dot3(xx + 1932, xx + 1337) + pm_math_dot3(xx +
    2012, xx + 1340));
  xx[1236] = xx[1325] - (pm_math_dot3(xx + 2018, xx + 1337) + pm_math_dot3(xx +
    2021, xx + 1340));
  xx[1261] = xx[1326] - (pm_math_dot3(xx + 2024, xx + 1337) + pm_math_dot3(xx +
    1946, xx + 1340));
  xx[1299] = xx[64] * xx[47] - xx[46] * xx[61];
  xx[1300] = xx[47] * xx[66] + xx[46] * xx[60];
  xx[1301] = xx[47] * xx[60] - xx[46] * xx[66];
  xx[1304] = xx[64] * xx[46] + xx[47] * xx[61];
  xx[1322] = xx[1299];
  xx[1323] = - xx[1300];
  xx[1324] = xx[1301];
  xx[1325] = xx[1304];
  pm_math_quatCompose(xx + 11, xx + 1322, xx + 1337);
  xx[1305] = xx[1301] * xx[1299];
  xx[1315] = xx[1304] * xx[1300];
  xx[1318] = xx[1301] * xx[1304];
  xx[1319] = xx[1299] * xx[1300];
  xx[1322] = xx[1300] * xx[1300];
  xx[1323] = xx[1301] * xx[1301];
  xx[1324] = xx[18] * (xx[1305] + xx[1315]);
  xx[1325] = - ((xx[1318] - xx[1319]) * xx[18]);
  xx[1326] = (xx[1322] + xx[1323]) * xx[18] - xx[3];
  pm_math_cross3(xx + 1324, xx + 902, xx + 1341);
  pm_math_quatXform(xx + 1337, xx + 1341, xx + 1324);
  xx[1330] = xx[46] * xx[120] + xx[119] * xx[47];
  xx[1331] = xx[1912] * xx[46] + xx[1911] * xx[47];
  xx[1333] = xx[18] * xx[1331] * xx[46] - xx[1912];
  xx[1341] = xx[120] - xx[18] * xx[1330] * xx[46] - xx[1333];
  xx[1342] = xx[18] * xx[1331] * xx[47] - xx[1911];
  xx[1331] = 0.03194045367095624;
  xx[1343] = xx[119] - (xx[18] * xx[1330] * xx[47] + xx[1342]) + xx[1331];
  xx[1330] = xx[1343] * xx[6];
  xx[1344] = xx[1341] * xx[6];
  xx[1346] = xx[10] * xx[1341] - xx[1343] * xx[8];
  xx[1347] = - xx[1330];
  xx[1348] = - xx[1344];
  xx[1349] = - xx[1346];
  pm_math_cross3(xx + 1919, xx + 1347, xx + 1350);
  xx[1347] = xx[16] * xx[8];
  xx[1348] = xx[16] * xx[6];
  xx[1349] = xx[2] * xx[1348];
  xx[1353] = xx[18] * xx[362] * state[36] * state[36];
  xx[362] = xx[405] * state[36] * state[36];
  xx[1354] = xx[1334] * xx[1334];
  xx[1510] = (xx[1354] + xx[629]) * xx[18] - xx[3];
  xx[1511] = xx[1496];
  xx[1512] = (xx[1498] + xx[1497]) * xx[18];
  xx[1513] = (xx[1494] + xx[1495]) * xx[18];
  xx[1514] = (xx[1354] + xx[1463]) * xx[18] - xx[3];
  xx[1515] = xx[1369];
  xx[1516] = xx[257];
  xx[1517] = (xx[635] + xx[1386]) * xx[18];
  xx[1518] = (xx[1354] + xx[1493]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 876, xx + 1510, xx + 1532);
  xx[257] = xx[1417] * xx[1417];
  xx[629] = xx[1418] * xx[1419];
  xx[876] = (xx[257] + xx[650]) * xx[18] - xx[3];
  xx[877] = xx[18] * (xx[629] - xx[263]);
  xx[878] = (xx[192] + xx[277]) * xx[18];
  xx[879] = (xx[629] + xx[263]) * xx[18];
  xx[880] = (xx[257] + xx[1387]) * xx[18] - xx[3];
  xx[881] = xx[18] * (xx[649] - xx[646]);
  xx[882] = xx[575];
  xx[883] = (xx[649] + xx[646]) * xx[18];
  xx[884] = (xx[257] + xx[1420] * xx[1420]) * xx[18] - xx[3];
  pm_math_matrix3x3Compose(xx + 2027, xx + 876, xx + 1552);
  xx[192] = xx[1458] * xx[1458];
  xx[257] = (xx[192] + xx[1395]) * xx[18] - xx[3];
  xx[263] = xx[1459] * xx[1460];
  xx[277] = xx[1458] * xx[1461];
  xx[575] = (xx[263] + xx[277]) * xx[18];
  xx[629] = xx[1460] * xx[164] - xx[162] * xx[1459];
  xx[635] = xx[629] * xx[629];
  xx[646] = xx[1461] * xx[164] - xx[162] * xx[1458];
  xx[649] = xx[646] * xx[646];
  xx[650] = (xx[635] + xx[649]) * xx[18] - xx[3];
  xx[1334] = xx[1458] * xx[164] + xx[162] * xx[1461];
  xx[1354] = xx[1334] * xx[646];
  xx[1355] = xx[162] * xx[1460] + xx[1459] * xx[164];
  xx[1359] = xx[1355] * xx[629];
  xx[1362] = (xx[1354] + xx[1359]) * xx[18];
  xx[1363] = - xx[629];
  xx[1364] = xx[646];
  xx[1365] = xx[1334];
  xx[1366] = - xx[1355];
  pm_math_quatCompose(xx + 335, xx + 1363, xx + 1377);
  xx[1363] = xx[1377] * xx[1377];
  xx[1364] = xx[1378] * xx[1379];
  xx[1365] = xx[1377] * xx[1380];
  xx[1366] = xx[1378] * xx[1380];
  xx[1367] = xx[1377] * xx[1379];
  xx[1368] = xx[1379] * xx[1380];
  xx[1369] = xx[1377] * xx[1378];
  xx[1576] = (xx[1363] + xx[1378] * xx[1378]) * xx[18] - xx[3];
  xx[1577] = xx[18] * (xx[1364] - xx[1365]);
  xx[1578] = (xx[1366] + xx[1367]) * xx[18];
  xx[1579] = (xx[1364] + xx[1365]) * xx[18];
  xx[1580] = (xx[1363] + xx[1379] * xx[1379]) * xx[18] - xx[3];
  xx[1581] = xx[18] * (xx[1368] - xx[1369]);
  xx[1582] = xx[18] * (xx[1366] - xx[1367]);
  xx[1583] = (xx[1368] + xx[1369]) * xx[18];
  xx[1584] = (xx[1363] + xx[1380] * xx[1380]) * xx[18] - xx[3];
  xx[1363] = xx[1334] * inputDot[6];
  xx[1364] = xx[646] * inputDot[6];
  xx[1365] = xx[18] * (xx[1363] * xx[629] - xx[1355] * xx[1364]);
  xx[1366] = - ((xx[1364] * xx[629] + xx[1355] * xx[1363]) * xx[18]);
  xx[1367] = inputDot[6] - (xx[1364] * xx[646] + xx[1334] * xx[1363]) * xx[18];
  pm_math_matrix3x3PostCross(xx + 1576, xx + 1365, xx + 1585);
  xx[1363] = xx[1459] * state[10];
  xx[1364] = xx[1460] * state[10];
  xx[1365] = xx[18] * (xx[1461] * xx[1363] - xx[1458] * xx[1364]);
  pm_math_quatInverseXform(xx + 1417, xx + 1061, xx + 1366);
  pm_math_quatInverseXform(xx + 1413, xx + 1085, xx + 1382);
  xx[1369] = xx[325] * xx[399];
  xx[1371] = xx[18] * xx[1369] * xx[399] - xx[325];
  xx[1374] = xx[1382] + xx[1371];
  xx[1375] = xx[1366] + xx[1374];
  xx[1386] = (xx[1458] * xx[1363] + xx[1461] * xx[1364]) * xx[18];
  xx[1387] = xx[18] * xx[363] * xx[1369];
  xx[1369] = xx[1383] - xx[1387];
  xx[1388] = xx[1367] + xx[1369];
  xx[1390] = state[10] - (xx[1459] * xx[1363] + xx[1460] * xx[1364]) * xx[18];
  xx[1363] = xx[345] + state[36];
  xx[1364] = xx[1384] - xx[1363];
  xx[1391] = xx[1368] + xx[1364];
  xx[1412] = xx[1365] + xx[1375];
  xx[1413] = xx[1386] + xx[1388];
  xx[1414] = xx[1390] + xx[1391];
  pm_math_matrix3x3PostCross(xx + 1585, xx + 1412, xx + 1415);
  xx[1392] = xx[18] * (xx[1354] - xx[1359]);
  xx[1354] = xx[1355] * xx[646];
  xx[1359] = xx[1334] * xx[629];
  xx[1393] = (xx[1354] + xx[1359]) * xx[18];
  xx[1395] = xx[1334] * xx[1334];
  xx[1397] = (xx[635] + xx[1395]) * xx[18] - xx[3];
  xx[1398] = xx[629] * xx[646];
  xx[629] = xx[1355] * xx[1334];
  xx[646] = xx[18] * (xx[1398] - xx[629]);
  xx[1334] = xx[18] * (xx[1359] - xx[1354]);
  xx[1576] = xx[650];
  xx[1577] = xx[1392];
  xx[1578] = - xx[1393];
  xx[1579] = xx[1362];
  xx[1580] = xx[1397];
  xx[1581] = xx[646];
  xx[1582] = xx[1334];
  xx[1583] = - ((xx[629] + xx[1398]) * xx[18]);
  xx[1584] = (xx[635] + xx[1355] * xx[1355]) * xx[18] - xx[3];
  xx[1412] = xx[1365];
  xx[1413] = xx[1386];
  xx[1414] = xx[1390];
  pm_math_matrix3x3PostCross(xx + 1576, xx + 1412, xx + 1585);
  xx[1412] = xx[1375];
  xx[1413] = xx[1388];
  xx[1414] = xx[1391];
  pm_math_matrix3x3PostCross(xx + 1585, xx + 1412, xx + 1576);
  xx[635] = xx[18] * (xx[263] - xx[277]);
  xx[263] = (xx[172] + xx[173]) * xx[18];
  xx[172] = (xx[192] + xx[1396]) * xx[18] - xx[3];
  xx[173] = xx[18] * (xx[1394] - xx[175]);
  xx[1585] = xx[257];
  xx[1586] = xx[635];
  xx[1587] = xx[263];
  xx[1588] = xx[575];
  xx[1589] = xx[172];
  xx[1590] = xx[173];
  xx[1591] = xx[174];
  xx[1592] = (xx[1394] + xx[175]) * xx[18];
  xx[1593] = (xx[192] + xx[1461] * xx[1461]) * xx[18] - xx[3];
  pm_math_matrix3x3PostCross(xx + 1585, xx + 1366, xx + 1594);
  xx[1365] = xx[1374];
  xx[1366] = xx[1369];
  xx[1367] = xx[1364];
  pm_math_matrix3x3PostCross(xx + 1594, xx + 1365, xx + 1585);
  pm_math_matrix3x3PostCross(xx + 876, xx + 1382, xx + 1594);
  xx[174] = - xx[1387];
  xx[876] = xx[1371];
  xx[877] = xx[174];
  xx[878] = - xx[1363];
  pm_math_matrix3x3PostCross(xx + 1594, xx + 876, xx + 1616);
  xx[876] = xx[1371];
  xx[877] = xx[174];
  xx[878] = xx[201];
  pm_math_matrix3x3PostCross(xx + 1510, xx + 876, xx + 1594);
  xx[174] = xx[1601] * state[36];
  xx[175] = xx[1595] * state[36];
  xx[192] = xx[1598] * state[36];
  xx[201] = xx[1594] * state[36];
  xx[277] = xx[1597] * state[36];
  xx[876] = xx[1600] * state[36];
  xx[1510] = xx[1616] + xx[174] * xx[610] - (xx[175] * xx[455] + xx[192] * xx
    [607]);
  xx[1511] = xx[1617] + xx[201] * xx[455] + xx[277] * xx[607] - xx[876] * xx[610];
  xx[1512] = xx[1618];
  xx[1513] = xx[1619] + xx[175] * xx[611] - xx[192] * xx[546] - xx[174] * xx[613];
  xx[1514] = xx[1620] + xx[277] * xx[546] - xx[201] * xx[611] + xx[876] * xx[613];
  xx[1515] = xx[1621];
  xx[1516] = xx[1622] - (xx[175] * xx[614] + xx[192] * xx[608] + xx[174] * xx
    [547]);
  xx[1517] = xx[1623] + xx[201] * xx[614] + xx[277] * xx[608] + xx[876] * xx[547];
  xx[1518] = xx[1624];
  pm_math_matrix3x3Compose(xx + 737, xx + 1510, xx + 876);
  xx[174] = xx[1585] + xx[876];
  xx[175] = xx[1588] + xx[879];
  xx[192] = xx[1586] + xx[877];
  xx[201] = xx[1589] + xx[880];
  xx[277] = xx[1587] + xx[878];
  xx[455] = xx[1590] + xx[881];
  xx[737] = xx[1576] + xx[174] * xx[254] - xx[175] * xx[203];
  xx[738] = xx[1577] + xx[192] * xx[254] - xx[201] * xx[203];
  xx[739] = xx[1578] + xx[277] * xx[254] - xx[455] * xx[203];
  xx[740] = xx[1579] + xx[175] * xx[427] - xx[174] * xx[203];
  xx[741] = xx[1580] + xx[201] * xx[427] - xx[192] * xx[203];
  xx[742] = xx[1581] + xx[455] * xx[427] - xx[277] * xx[203];
  xx[743] = xx[1582] - (xx[1591] + xx[882]);
  xx[744] = xx[1583] - (xx[1592] + xx[883]);
  xx[745] = xx[1584] - (xx[1593] + xx[884]);
  pm_math_matrix3x3Compose(xx + 2341, xx + 737, xx + 876);
  xx[737] = xx[1353] * xx[31] - xx[362] * xx[37] + xx[816] * xx[405] - xx[817] *
    xx[400] + xx[1532] + xx[1552] + xx[257] * xx[383] + xx[575] * xx[435] - (xx
    [437] * xx[650] + xx[1362] * xx[453]) + (xx[1415] + xx[876]) * xx[18];
  xx[738] = xx[816] * xx[400] + xx[817] * xx[405] - (xx[1353] * xx[37] + xx[362]
    * xx[31]) + xx[1533] + xx[1553] + xx[635] * xx[383] + xx[172] * xx[435] -
    (xx[1392] * xx[437] + xx[453] * xx[1397]) + (xx[1416] + xx[877]) * xx[18];
  xx[739] = xx[818] * xx[406] + xx[1534] + xx[1554] + xx[263] * xx[383] + xx[173]
    * xx[435] + xx[1393] * xx[437] - xx[646] * xx[453] + (xx[1417] + xx[878]) *
    xx[18];
  xx[740] = xx[1353] * xx[38] - xx[362] * xx[171] + xx[819] * xx[405] - xx[820] *
    xx[400] + xx[1535] + xx[1555] + xx[257] * xx[29] + xx[575] * xx[30] - (xx
    [156] * xx[650] + xx[1362] * xx[202]) + (xx[1418] + xx[879]) * xx[18];
  xx[741] = xx[819] * xx[400] + xx[820] * xx[405] - (xx[1353] * xx[171] + xx[362]
    * xx[38]) + xx[1536] + xx[1556] + xx[635] * xx[29] + xx[172] * xx[30] - (xx
    [1392] * xx[156] + xx[202] * xx[1397]) + (xx[1419] + xx[880]) * xx[18];
  xx[742] = xx[821] * xx[406] + xx[1537] + xx[1557] + xx[263] * xx[29] + xx[173]
    * xx[30] + xx[1393] * xx[156] - xx[646] * xx[202] + (xx[1420] + xx[881]) *
    xx[18];
  xx[743] = xx[1353] * xx[212] - xx[362] * xx[216] + xx[822] * xx[405] - xx[823]
    * xx[400] + xx[1538] + xx[1558] + xx[257] * xx[217] + xx[575] * xx[218] -
    (xx[225] * xx[650] + xx[1362] * xx[226]) + (xx[1421] + xx[882]) * xx[18];
  xx[744] = xx[822] * xx[400] + xx[823] * xx[405] - (xx[1353] * xx[216] + xx[362]
    * xx[212]) + xx[1539] + xx[1559] + xx[635] * xx[217] + xx[172] * xx[218] -
    (xx[1392] * xx[225] + xx[226] * xx[1397]) + (xx[1422] + xx[883]) * xx[18];
  xx[745] = xx[824] * xx[406] + xx[1540] + xx[1560] + xx[263] * xx[217] + xx[173]
    * xx[218] + xx[1393] * xx[225] - xx[646] * xx[226] + (xx[1423] + xx[884]) *
    xx[18];
  pm_math_matrix3x3Xform(xx + 737, xx + 236, xx + 29);
  xx[37] = state[36] * state[36];
  xx[38] = xx[469] * xx[37];
  xx[171] = xx[37] * xx[467];
  xx[37] = xx[316] * xx[171];
  xx[172] = xx[316] * xx[38];
  xx[173] = xx[314] * xx[171] - xx[315] * xx[38];
  xx[216] = - xx[37];
  xx[217] = xx[172];
  xx[218] = xx[173];
  pm_math_cross3(xx + 314, xx + 216, xx + 737);
  pm_math_matrix3x3Xform(xx + 746, xx + 1403, xx + 216);
  xx[314] = xx[216] + xx[208];
  xx[315] = xx[217] + xx[214];
  xx[316] = xx[218] + xx[223];
  pm_math_quatXform(xx + 309, xx + 314, xx + 216);
  pm_math_matrix3x3Xform(xx + 852, xx + 1409, xx + 309);
  xx[314] = xx[309] + xx[594];
  xx[315] = xx[310] + xx[595];
  xx[316] = xx[311] + xx[596];
  pm_math_quatXform(xx + 305, xx + 314, xx + 309);
  pm_math_matrix3x3Xform(xx + 1949, xx + 1425, xx + 305);
  xx[314] = xx[305] + xx[657];
  xx[315] = xx[306] + xx[658];
  xx[316] = xx[307] + xx[659];
  pm_math_quatXform(xx + 301, xx + 314, xx + 305);
  xx[174] = xx[267] * xx[228] - xx[1430] * xx[261] + xx[204];
  xx[175] = xx[1430] * xx[228] - xx[267] * xx[431] - xx[209];
  xx[192] = xx[175] * xx[169];
  xx[201] = xx[174] * xx[169];
  xx[203] = xx[175] * xx[154] - xx[174] * xx[161];
  xx[301] = - xx[192];
  xx[302] = xx[201];
  xx[303] = xx[203];
  pm_math_cross3(xx + 289, xx + 301, xx + 314);
  xx[204] = xx[267] * xx[162] + xx[1430] * xx[164];
  xx[208] = xx[1430] - xx[18] * xx[204] * xx[164] + xx[433];
  xx[209] = xx[267] - xx[18] * xx[204] * xx[162] + xx[434];
  xx[204] = xx[1431] * state[36];
  xx[212] = xx[458] * state[36];
  xx[301] = xx[204] - xx[345] * xx[467];
  xx[302] = - (xx[212] + xx[345] * xx[470] + xx[346] * xx[325]);
  xx[303] = xx[325] * xx[467];
  pm_math_quatXform(xx + 219, xx + 301, xx + 433);
  xx[214] = xx[287] + xx[433];
  pm_math_cross3(xx + 1085, xx + 1409, xx + 301);
  xx[223] = xx[243] + xx[434];
  xx[228] = xx[435] - xx[248];
  xx[433] = xx[214] + xx[301];
  xx[434] = xx[223] + xx[302];
  xx[435] = xx[228] + xx[303];
  pm_math_quatXform(xx + 193, xx + 433, xx + 301);
  xx[243] = xx[339] + xx[301];
  pm_math_cross3(xx + 1061, xx + 1425, xx + 433);
  xx[248] = xx[340] + xx[302];
  xx[254] = xx[341] + xx[303];
  xx[301] = xx[243] + xx[433];
  xx[302] = xx[248] + xx[434];
  xx[303] = xx[254] + xx[435];
  pm_math_quatXform(xx + 183, xx + 301, xx + 339);
  xx[257] = xx[674] + xx[339];
  xx[261] = xx[257] - xx[267] * state[10];
  xx[263] = xx[675] + xx[340];
  xx[267] = xx[263] + xx[1430] * state[10];
  xx[277] = xx[267] * xx[162] + xx[164] * xx[261];
  xx[287] = (xx[384] + xx[261] - xx[18] * xx[277] * xx[164]) * inputDot[6];
  xx[261] = xx[169] * xx[287];
  xx[301] = (xx[430] + xx[267] - xx[18] * xx[277] * xx[162]) * inputDot[6];
  xx[267] = xx[169] * xx[301];
  xx[277] = xx[154] * xx[287] + xx[301] * xx[161];
  xx[302] = - xx[261];
  xx[303] = - xx[267];
  xx[304] = xx[277];
  pm_math_cross3(xx + 289, xx + 302, xx + 339);
  xx[302] = xx[263] * state[10];
  xx[263] = xx[257] * state[10];
  xx[257] = xx[302] * xx[164] - xx[162] * xx[263];
  xx[433] = xx[243];
  xx[434] = xx[248];
  xx[435] = xx[254];
  pm_math_cross3(xx + 1061, xx + 433, xx + 594);
  pm_math_quatXform(xx + 183, xx + 594, xx + 433);
  xx[594] = xx[214];
  xx[595] = xx[223];
  xx[596] = xx[228];
  pm_math_cross3(xx + 1085, xx + 594, xx + 657);
  pm_math_quatXform(xx + 193, xx + 657, xx + 594);
  xx[657] = - (xx[212] * xx[345]);
  xx[658] = - (xx[204] * xx[345]);
  xx[659] = xx[212] * xx[325];
  pm_math_quatXform(xx + 219, xx + 657, xx + 740);
  pm_math_quatXform(xx + 193, xx + 740, xx + 657);
  xx[740] = xx[594] + xx[657];
  xx[741] = xx[595] + xx[658];
  xx[742] = xx[596] + xx[659];
  pm_math_quatXform(xx + 183, xx + 740, xx + 594);
  xx[204] = xx[433] + xx[594];
  xx[212] = xx[434] + xx[595];
  xx[214] = xx[212] * xx[162] + xx[204] * xx[164];
  xx[223] = xx[435] + xx[596];
  xx[433] = xx[18] * xx[164] * xx[257] - xx[302] + xx[204] - xx[18] * xx[214] *
    xx[164];
  xx[434] = xx[263] + xx[18] * xx[162] * xx[257] + xx[212] - xx[18] * xx[214] *
    xx[162];
  xx[435] = xx[223] - (xx[162] * xx[223] * xx[162] + xx[223] * xx[164] * xx[164])
    * xx[18];
  pm_math_quatXform(xx + 335, xx + 433, xx + 302);
  xx[162] = xx[131] * xx[131];
  xx[164] = xx[135] * xx[131];
  xx[204] = xx[132] * xx[134];
  xx[212] = xx[132] * xx[135];
  xx[214] = xx[134] * xx[131];
  xx[223] = xx[135] * xx[134];
  xx[228] = xx[132] * xx[131];
  xx[740] = (xx[162] + xx[132] * xx[132]) * xx[18] - xx[3];
  xx[741] = xx[18] * (xx[164] - xx[204]);
  xx[742] = - ((xx[212] + xx[214]) * xx[18]);
  xx[743] = - ((xx[204] + xx[164]) * xx[18]);
  xx[744] = (xx[162] + xx[134] * xx[134]) * xx[18] - xx[3];
  xx[745] = xx[18] * (xx[223] - xx[228]);
  xx[746] = xx[18] * (xx[214] - xx[212]);
  xx[747] = (xx[223] + xx[228]) * xx[18];
  xx[748] = (xx[162] + xx[135] * xx[135]) * xx[18] - xx[3];
  xx[131] = xx[1908] * xx[77] - xx[67] * state[8];
  xx[132] = xx[79] * xx[67] - xx[939] * xx[77];
  xx[134] = xx[79] * xx[1908] - xx[939] * state[8];
  xx[135] = xx[1910] * state[8] - xx[142] * xx[77];
  xx[162] = xx[79] * xx[1910] - xx[77] * xx[141];
  xx[164] = xx[141] * state[8] - xx[79] * xx[142];
  xx[204] = xx[77] * xx[54] - xx[133] * state[8];
  xx[212] = xx[79] * xx[133] - xx[1907] * xx[77];
  xx[133] = xx[1907] * state[8] - xx[79] * xx[54];
  xx[816] = xx[131] * state[8] - xx[132] * xx[79];
  xx[817] = xx[134] * state[8] + xx[132] * xx[77];
  xx[818] = - (xx[134] * xx[79] + xx[131] * xx[77]);
  xx[819] = - (xx[135] * state[8] + xx[79] * xx[162]);
  xx[820] = xx[162] * xx[77] - xx[164] * state[8];
  xx[821] = xx[164] * xx[79] + xx[135] * xx[77];
  xx[822] = xx[204] * state[8] - xx[79] * xx[212];
  xx[823] = xx[212] * xx[77] - xx[133] * state[8];
  xx[824] = xx[79] * xx[133] - xx[204] * xx[77];
  pm_math_matrix3x3Compose(xx + 740, xx + 816, xx + 852);
  xx[54] = xx[2] * xx[6];
  xx[131] = xx[10] * xx[8];
  xx[132] = xx[54] - xx[131];
  xx[133] = xx[18] * xx[132];
  xx[134] = xx[18] * xx[46] * xx[47] * state[1] * state[1];
  xx[135] = (xx[18] * xx[46] * xx[46] - xx[3]) * state[1] * state[1];
  xx[162] = xx[2] * xx[2];
  xx[164] = (xx[162] + xx[8] * xx[8]) * xx[18] - xx[3];
  xx[204] = xx[133] * xx[134] - xx[135] * xx[164];
  xx[212] = (xx[18] * xx[47] * xx[47] - xx[3]) * state[1] * state[1];
  xx[214] = xx[134] * xx[164] - xx[212] * xx[133];
  xx[223] = xx[164] * inputDot[7] * inputDot[7];
  xx[228] = xx[1299] * xx[1299];
  xx[243] = (xx[228] + xx[1322]) * xx[18] - xx[3];
  xx[248] = xx[1299] * xx[1304];
  xx[254] = xx[1301] * xx[1300];
  xx[257] = (xx[248] - xx[254]) * xx[18];
  xx[263] = xx[18] * xx[132] * inputDot[7] * inputDot[7];
  xx[132] = xx[1337] * xx[1337];
  xx[308] = xx[1338] * xx[1339];
  xx[312] = xx[1337] * xx[1340];
  xx[325] = xx[1338] * xx[1340];
  xx[335] = xx[1337] * xx[1339];
  xx[336] = xx[1339] * xx[1340];
  xx[337] = xx[1337] * xx[1338];
  xx[740] = (xx[132] + xx[1338] * xx[1338]) * xx[18] - xx[3];
  xx[741] = xx[18] * (xx[308] - xx[312]);
  xx[742] = (xx[325] + xx[335]) * xx[18];
  xx[743] = (xx[308] + xx[312]) * xx[18];
  xx[744] = (xx[132] + xx[1339] * xx[1339]) * xx[18] - xx[3];
  xx[745] = xx[18] * (xx[336] - xx[337]);
  xx[746] = xx[18] * (xx[325] - xx[335]);
  xx[747] = (xx[336] + xx[337]) * xx[18];
  xx[748] = (xx[132] + xx[1340] * xx[1340]) * xx[18] - xx[3];
  xx[132] = xx[1301] * inputDot[7];
  xx[308] = xx[1300] * inputDot[7];
  xx[335] = xx[18] * (xx[1299] * xx[132] + xx[308] * xx[1304]);
  xx[336] = - ((xx[132] * xx[1304] - xx[1299] * xx[308]) * xx[18]);
  xx[337] = (xx[308] * xx[1300] + xx[1301] * xx[132]) * xx[18] - inputDot[7];
  pm_math_matrix3x3PostCross(xx + 740, xx + 335, xx + 876);
  xx[132] = xx[64] * state[1];
  xx[308] = xx[61] * state[1];
  xx[312] = (xx[132] * xx[60] + xx[308] * xx[66]) * xx[18];
  xx[325] = xx[18] * (xx[132] * xx[66] - xx[308] * xx[60]);
  xx[60] = state[1] - (xx[308] * xx[61] + xx[64] * xx[132]) * xx[18];
  xx[335] = xx[312] + xx[77];
  xx[336] = xx[325] + xx[79];
  xx[337] = xx[60] + state[8];
  pm_math_matrix3x3PostCross(xx + 876, xx + 335, xx + 740);
  xx[61] = xx[8] * xx[6];
  xx[64] = xx[2] * xx[10];
  xx[66] = xx[131] + xx[54];
  xx[54] = xx[66] * xx[18];
  xx[77] = (xx[162] + xx[10] * xx[10]) * xx[18] - xx[3];
  xx[79] = xx[2] * xx[8];
  xx[131] = xx[10] * xx[6];
  xx[132] = xx[61] - xx[64];
  xx[308] = xx[18] * xx[132];
  xx[335] = xx[131] + xx[79];
  xx[336] = xx[335] * xx[18];
  xx[876] = xx[164];
  xx[877] = xx[133];
  xx[878] = (xx[61] + xx[64]) * xx[18];
  xx[879] = - xx[54];
  xx[880] = xx[77];
  xx[881] = xx[18] * (xx[79] - xx[131]);
  xx[882] = xx[308];
  xx[883] = - xx[336];
  xx[884] = (xx[162] + xx[6] * xx[6]) * xx[18] - xx[3];
  xx[61] = xx[18] * (xx[254] + xx[248]);
  xx[64] = (xx[1305] - xx[1315]) * xx[18];
  xx[79] = (xx[228] + xx[1323]) * xx[18] - xx[3];
  xx[131] = xx[18] * (xx[1318] + xx[1319]);
  xx[1409] = xx[243];
  xx[1410] = - xx[61];
  xx[1411] = xx[64];
  xx[1412] = xx[257];
  xx[1413] = xx[79];
  xx[1414] = xx[131];
  xx[1415] = - (xx[18] * (xx[1315] + xx[1305]));
  xx[1416] = (xx[1318] - xx[1319]) * xx[18];
  xx[1417] = (xx[228] + xx[1304] * xx[1304]) * xx[18] - xx[3];
  xx[433] = xx[312];
  xx[434] = xx[325];
  xx[435] = xx[60];
  pm_math_matrix3x3PostCross(xx + 1409, xx + 433, xx + 1418);
  pm_math_matrix3x3PostCross(xx + 1418, xx + 80, xx + 1409);
  pm_math_matrix3x3Compose(xx + 876, xx + 1409, xx + 1418);
  xx[60] = xx[134] * xx[77] + xx[135] * xx[54];
  xx[80] = xx[54] * xx[134] + xx[212] * xx[77];
  xx[54] = xx[77] * inputDot[7] * inputDot[7];
  xx[77] = xx[18] * xx[66] * inputDot[7] * inputDot[7];
  xx[66] = xx[134] * xx[308] + xx[212] * xx[336];
  xx[81] = xx[336] * xx[134] + xx[135] * xx[308];
  xx[82] = xx[18] * xx[132] * inputDot[7] * inputDot[7];
  xx[132] = xx[18] * xx[335] * inputDot[7] * inputDot[7];
  xx[876] = xx[852] + xx[204] * xx[67] + xx[1910] * xx[214] - (xx[223] * xx[243]
    + xx[257] * xx[263]) + (xx[740] + xx[1418]) * xx[18];
  xx[877] = xx[853] + xx[214] * xx[141] + xx[939] * xx[204] - (xx[263] * xx[79]
    - xx[223] * xx[61]) + (xx[741] + xx[1419]) * xx[18];
  xx[878] = xx[854] + xx[1908] * xx[204] + xx[142] * xx[214] - (xx[223] * xx[64]
    + xx[263] * xx[131]) + (xx[742] + xx[1420]) * xx[18];
  xx[879] = xx[855] + xx[60] * xx[67] - xx[1910] * xx[80] - (xx[257] * xx[54] -
    xx[77] * xx[243]) + (xx[743] + xx[1421]) * xx[18];
  xx[880] = xx[856] + xx[939] * xx[60] - xx[80] * xx[141] - (xx[61] * xx[77] +
    xx[54] * xx[79]) + (xx[744] + xx[1422]) * xx[18];
  xx[881] = xx[857] + xx[1908] * xx[60] - xx[142] * xx[80] - (xx[54] * xx[131] -
    xx[64] * xx[77]) + (xx[745] + xx[1423]) * xx[18];
  xx[882] = xx[858] + xx[1910] * xx[66] - xx[81] * xx[67] - (xx[82] * xx[243] -
    xx[257] * xx[132]) + (xx[746] + xx[1424]) * xx[18];
  xx[883] = xx[859] + xx[66] * xx[141] - xx[939] * xx[81] + xx[61] * xx[82] +
    xx[132] * xx[79] + (xx[747] + xx[1425]) * xx[18];
  xx[884] = xx[860] + xx[142] * xx[66] - xx[1908] * xx[81] - (xx[64] * xx[82] -
    xx[131] * xx[132]) + (xx[748] + xx[1426]) * xx[18];
  pm_math_matrix3x3Xform(xx + 876, xx + 902, xx + 79);
  pm_math_matrix3x3Xform(xx + 816, xx + 74, xx + 335);
  pm_math_quatXform(xx + 136, xx + 335, xx + 74);
  xx[60] = state[1] * state[1];
  xx[61] = xx[120] * xx[134] - xx[119] * xx[135] + xx[60] * xx[1342];
  xx[64] = xx[119] * xx[134] - xx[120] * xx[212] + xx[60] * xx[1333];
  xx[60] = xx[64] * xx[6];
  xx[66] = xx[61] * xx[6];
  xx[67] = xx[64] * xx[8] + xx[61] * xx[10];
  xx[133] = xx[60];
  xx[134] = - xx[66];
  xx[135] = - xx[67];
  pm_math_cross3(xx + 1919, xx + 133, xx + 136);
  xx[131] = inputDot[7] * inputDot[7];
  xx[133] = xx[10] * xx[16];
  xx[134] = xx[1348] * xx[6];
  pm_math_quatXform(xx + 68, xx + 122, xx + 335);
  xx[122] = xx[336] + xx[119] * state[1];
  xx[123] = xx[335] - xx[120] * state[1];
  xx[124] = xx[122] * xx[46] + xx[47] * xx[123];
  xx[135] = ((xx[1911] - xx[0]) * state[1] + xx[122] - xx[18] * xx[124] * xx[46])
    * inputDot[7];
  xx[0] = (xx[123] - xx[18] * xx[124] * xx[47] - (xx[1912] + xx[1914]) * state[1])
    * inputDot[7];
  xx[122] = xx[0] * xx[6];
  xx[123] = xx[135] * xx[6];
  xx[124] = xx[10] * xx[135] - xx[0] * xx[8];
  xx[433] = - xx[122];
  xx[434] = - xx[123];
  xx[435] = - xx[124];
  pm_math_cross3(xx + 1919, xx + 433, xx + 594);
  xx[139] = xx[336] * state[1];
  xx[141] = xx[335] * state[1];
  xx[142] = xx[139] * xx[47] - xx[46] * xx[141];
  xx[162] = xx[18] * xx[47] * xx[142] - xx[139];
  xx[139] = xx[141] + xx[18] * xx[46] * xx[142];
  xx[141] = xx[139] * xx[6];
  xx[142] = xx[162] * xx[6];
  xx[6] = xx[139] * xx[8] + xx[10] * xx[162];
  xx[335] = xx[141];
  xx[336] = - xx[142];
  xx[337] = - xx[6];
  pm_math_cross3(xx + 1919, xx + 335, xx + 433);
  xx[164] = xx[92] * xx[94] + xx[93] + pm_math_dot3(xx + 758, xx + 125);
  xx[86] = xx[91] + xx[85] * xx[88];
  xx[87] = xx[86] + xx[72] * xx[129] - xx[73] * xx[128];
  xx[88] = - xx[53];
  xx[89] = - xx[164];
  xx[90] = - xx[87];
  solveSymmetricPosDef(xx + 105, xx + 88, 3, 1, xx + 125, xx + 335);
  xx[88] = xx[92] + xx[83] * xx[125] + xx[145] * xx[126];
  xx[89] = xx[93] - xx[718] * xx[125] + xx[84] * xx[126];
  xx[90] = xx[86] + xx[85] * xx[127];
  pm_math_quatXform(xx + 68, xx + 88, xx + 335);
  xx[88] = xx[128] + xx[736] * xx[125] - xx[811] * xx[126] - xx[875] * xx[127];
  xx[89] = xx[129] + xx[811] * xx[125] + xx[736] * xx[126] + xx[913] * xx[127];
  xx[90] = xx[52] + xx[914] * xx[125] + xx[932] * xx[126];
  pm_math_quatXform(xx + 68, xx + 88, xx + 657);
  pm_math_cross3(xx + 119, xx + 657, xx + 88);
  xx[88] = xx[49] * state[1];
  xx[89] = xx[48] * state[1];
  xx[91] = xx[989] - xx[2038];
  xx[204] = xx[990] - xx[2041];
  xx[212] = xx[992] - xx[2039];
  xx[214] = xx[993] - xx[2042];
  xx[228] = xx[997] - xx[2046];
  xx[740] = xx[91];
  xx[741] = xx[204];
  xx[742] = xx[991] - xx[2044];
  xx[743] = xx[212];
  xx[744] = xx[214];
  xx[745] = xx[994] - xx[2045];
  xx[746] = xx[65];
  xx[747] = xx[130];
  xx[748] = xx[228];
  xx[749] = xx[42];
  xx[750] = xx[43];
  xx[751] = xx[45];
  xx[65] = 4.0000000045273e-3;
  xx[752] = xx[1331] - xx[1342];
  xx[753] = - xx[1333];
  xx[754] = xx[180] - (xx[65] - (xx[46] * xx[65] * xx[46] + xx[65] * xx[47] *
    xx[47]) * xx[18]);
  pm_math_cross3(xx + 749, xx + 752, xx + 816);
  pm_math_cross3(xx + 749, xx + 816, xx + 819);
  xx[65] = xx[46] * xx[820] + xx[819] * xx[47];
  xx[130] = xx[50] + xx[51];
  xx[50] = xx[1911] * state[1];
  xx[51] = xx[819] - xx[18] * xx[65] * xx[47] - xx[130] * xx[50];
  xx[243] = xx[1912] * state[1];
  xx[248] = xx[820] - xx[18] * xx[65] * xx[46] - xx[130] * xx[243];
  xx[65] = (xx[48] + xx[48]) * xx[50] + (xx[49] + xx[49]) * xx[243] + xx[821] -
    (xx[46] * xx[46] * xx[821] + xx[821] * xx[47] * xx[47]) * xx[18];
  xx[48] = xx[51];
  xx[49] = xx[248];
  xx[50] = xx[65];
  pm_math_matrix3x3Xform(xx + 740, xx + 48, xx + 749);
  xx[130] = xx[88] * (xx[986] - xx[2071] - xx[2067] - xx[2089]) - xx[89] * (xx
    [987] - xx[2072] - xx[2070] - xx[2090]) + xx[751];
  xx[740] = xx[1909];
  xx[741] = xx[2075];
  xx[742] = xx[2076];
  xx[743] = xx[2077];
  xx[744] = xx[996];
  xx[745] = xx[2079];
  xx[746] = xx[2080];
  xx[747] = xx[2081];
  xx[748] = xx[398] + xx[2082];
  pm_math_matrix3x3Xform(xx + 740, xx + 48, xx + 749);
  xx[48] = xx[88] * xx[204] - xx[89] * xx[214] + xx[750];
  xx[49] = xx[88] * xx[91] - xx[89] * xx[212] + xx[749];
  xx[740] = (xx[982] - xx[2067] - xx[2071] - xx[2085] + xx[1911] * xx[204] - xx
             [1912] * xx[91]) / xx[1928];
  xx[741] = (xx[985] - xx[2070] - xx[2072] - xx[2088] + xx[1911] * xx[214] - xx
             [1912] * xx[212]) / xx[1928];
  xx[742] = xx[995] / xx[1928];
  pm_math_quatInverseXform(xx + 11, xx + 24, xx + 743);
  xx[50] = xx[743] - xx[43] * inputDot[7];
  xx[43] = xx[744] + xx[42] * inputDot[7];
  xx[91] = xx[43] * xx[46] + xx[47] * xx[50];
  xx[204] = xx[50] - xx[18] * xx[91] * xx[47];
  xx[212] = xx[43] - xx[18] * xx[91] * xx[46];
  xx[91] = xx[745] - inputDdot[7];
  xx[214] = xx[91] - (xx[46] * xx[46] * xx[91] + xx[47] * xx[91] * xx[47]) * xx
    [18];
  xx[743] = xx[204];
  xx[744] = xx[212];
  xx[745] = xx[214];
  xx[746] = xx[1918] / xx[1928];
  xx[747] = xx[1473] / xx[1928];
  xx[748] = (xx[228] + xx[1911] * xx[2081] - xx[1912] * xx[2080]) / xx[1928];
  xx[228] = xx[10] * xx[180];
  xx[243] = xx[1348] + xx[180] * xx[8];
  xx[749] = xx[228];
  xx[750] = xx[243];
  xx[751] = xx[133];
  pm_math_cross3(xx + 1919, xx + 749, xx + 816);
  xx[254] = xx[2] * xx[133];
  xx[749] = 0.1564468326892218 - ((xx[2] * xx[228] + xx[816]) * xx[18] - xx[16]);
  xx[750] = 0.02992367610368172 - (xx[2] * xx[243] + xx[817]) * xx[18];
  xx[751] = - (0.01163189793971064 + xx[180] + xx[18] * (xx[818] + xx[254]));
  pm_math_cross3(xx + 24, xx + 749, xx + 816);
  xx[24] = xx[4] + xx[816];
  xx[25] = xx[7] + xx[817];
  xx[26] = xx[21] + xx[818];
  pm_math_quatInverseXform(xx + 11, xx + 24, xx + 816);
  pm_math_cross3(xx + 39, xx + 749, xx + 24);
  pm_math_cross3(xx + 39, xx + 24, xx + 749);
  pm_math_quatInverseXform(xx + 11, xx + 749, xx + 24);
  xx[4] = xx[16] * inputDot[7];
  xx[11] = xx[50];
  xx[12] = xx[43];
  xx[13] = xx[91];
  pm_math_cross3(xx + 11, xx + 752, xx + 39);
  xx[7] = xx[816] + xx[24] + (xx[44] + xx[45]) * xx[4] + xx[39];
  xx[11] = xx[817] + xx[25] - xx[16] * inputDdot[7] + xx[40];
  xx[12] = xx[11] * xx[46] + xx[7] * xx[47];
  xx[13] = xx[7] - xx[18] * xx[12] * xx[47];
  xx[7] = xx[11] - xx[18] * xx[12] * xx[46];
  xx[11] = xx[818] + xx[26] - (xx[42] + xx[42]) * xx[4] + xx[41];
  xx[4] = xx[11] - (xx[46] * xx[11] * xx[46] + xx[11] * xx[47] * xx[47]) * xx[18];
  xx[24] = xx[13];
  xx[25] = xx[7];
  xx[26] = xx[4];
  xx[11] = pm_math_dot3(xx + 740, xx + 743) + pm_math_dot3(xx + 746, xx + 24);
  xx[12] = (xx[63] + xx[337] + xx[90] + xx[130] + (xx[658] + xx[48]) * xx[1911]
            - (xx[657] + xx[49]) * xx[1912]) / xx[1928] + xx[11];
  xx[14] = xx[204] + xx[88];
  xx[21] = xx[212] - xx[89];
  xx[24] = xx[14];
  xx[25] = xx[21];
  xx[26] = xx[214] - xx[12];
  pm_math_quatInverseXform(xx + 68, xx + 24, xx + 39);
  pm_math_cross3(xx + 24, xx + 119, xx + 42);
  xx[24] = xx[4] + xx[65];
  xx[45] = xx[13] + xx[12] * xx[1912] + xx[51] + xx[42];
  xx[46] = xx[7] - xx[12] * xx[1911] + xx[248] + xx[43];
  xx[47] = xx[24] + xx[44];
  pm_math_quatInverseXform(xx + 68, xx + 45, xx + 42);
  xx[4] = xx[125] - (pm_math_dot3(xx + 1961, xx + 39) + pm_math_dot3(xx + 2092,
    xx + 42));
  xx[25] = xx[126] - (pm_math_dot3(xx + 2098, xx + 39) + pm_math_dot3(xx + 2101,
    xx + 42));
  xx[26] = xx[127] - (pm_math_dot3(xx + 2104, xx + 39) + pm_math_dot3(xx + 2047,
    xx + 42));
  xx[39] = xx[1334];
  xx[40] = - ((xx[1398] + xx[629]) * xx[18]);
  xx[41] = xx[3] - (xx[649] + xx[1395]) * xx[18];
  pm_math_cross3(xx + 39, xx + 236, xx + 42);
  pm_math_quatXform(xx + 1377, xx + 42, xx + 39);
  xx[3] = xx[208] * xx[169];
  xx[42] = xx[169] * xx[209];
  xx[43] = xx[208] * xx[154] + xx[209] * xx[161];
  xx[44] = - xx[3];
  xx[45] = - xx[42];
  xx[46] = xx[43];
  pm_math_cross3(xx + 289, xx + 44, xx + 88);
  pm_math_cross3(xx + 804, xx + 1403, xx + 44);
  xx[47] = xx[564] + xx[44];
  xx[44] = xx[566] + xx[45];
  xx[45] = xx[44] * xx[399];
  xx[46] = xx[47] * xx[399];
  xx[50] = xx[463] + xx[359] * (xx[47] - (xx[363] * xx[45] + xx[46] * xx[399]) *
    xx[18]) - (xx[44] + xx[18] * (xx[363] * xx[46] - xx[45] * xx[399])) * xx[402]
    - xx[671] * xx[242];
  xx[740] = xx[22] * xx[295] - (xx[506] + xx[33] + xx[18] * (xx[527] - xx[313] *
    xx[23]) + xx[521] + xx[258] + xx[270] + xx[207] + xx[18] * (xx[677] - xx[224]
    * xx[168]) + xx[279] - (xx[404] * xx[437] + xx[453] * xx[424]) + (xx[18] *
    (xx[765] - xx[275] * xx[168]) - xx[292] + xx[264]) * xx[18] - (xx[825] + xx
    [831] + xx[466] + xx[18] * (xx[862] + xx[710] * xx[269]) + xx[471] * ((xx
    [708] * xx[472] + xx[512]) * xx[18] - xx[16]) - (xx[538] * xx[468] + xx[513]
    * xx[548]) + (xx[589] + (xx[927] - xx[710] * xx[572]) * xx[18] + xx[634] +
                  xx[18] * (xx[885] + xx[710] * xx[612])) * xx[18]) + (xx[870] +
    xx[18] * (xx[962] - xx[439] * xx[168]) - xx[424] + xx[647]) * inputDdot[6])
    - xx[776] * xx[17] - xx[268] * xx[262] - xx[178] * xx[328] - xx[559] * xx
    [436] - xx[191] * xx[560] - xx[255] * xx[561] + xx[562] * xx[317] - xx[669] *
    xx[247] + (xx[1228] + xx[548] + (xx[1308] - xx[710] * xx[239]) * xx[18] +
               xx[18] * (xx[708] * xx[510] - xx[519])) * inputDdot[8] - xx[912] *
    xx[681] + xx[666] * xx[440] + xx[144] * xx[680] + xx[707] * xx[704];
  xx[741] = xx[958] * xx[22] - (xx[507] + xx[155] + (xx[313] * xx[158] + xx[528])
    * xx[18] + xx[522] + xx[259] + xx[271] + xx[197] + (xx[227] * xx[168] + xx
    [678]) * xx[18] - (xx[706] + xx[404] * xx[156] + xx[202] * xx[424]) + (xx
    [326] + xx[18] * (xx[766] - xx[280] * xx[168]) + xx[265]) * xx[18] - (xx[826]
    + xx[832] + xx[274] + (xx[863] - xx[710] * xx[318]) * xx[18] + xx[471] *
    (xx[519] + xx[472] * xx[694]) * xx[18] - (xx[163] * xx[548] - xx[538] * xx
    [165]) + ((xx[928] - xx[710] * xx[576]) * xx[18] - xx[515] + xx[609] + (xx
    [886] - xx[710] * xx[615]) * xx[18]) * xx[18]) + (xx[871] + xx[404] + xx[18]
    * (xx[963] - xx[443] * xx[168]) - xx[34] + xx[16]) * inputDdot[6]) - xx[1013]
    * xx[17] - xx[1047] * xx[262] - xx[1082] * xx[328] - xx[1001] * xx[436] -
    xx[1002] * xx[560] - xx[1014] * xx[561] + xx[562] * xx[286] - xx[669] * xx
    [293] + (xx[1229] + (xx[1309] - xx[710] * xx[446]) * xx[18] - (xx[538] -
              (xx[512] + xx[510] * xx[694]) * xx[18]) - xx[16]) * inputDdot[8] -
    xx[934] * xx[681] + xx[241] * xx[440] + xx[1003] * xx[680] + xx[1006] * xx
    [704];
  xx[742] = xx[230] * xx[22] - (xx[508] + (xx[313] * xx[170] + xx[529]) * xx[18]
    + xx[523] + xx[260] + xx[272] + (xx[229] * xx[168] + xx[679]) * xx[18] + xx
    [276] - (xx[404] * xx[225] + xx[226] * xx[424]) + ((xx[320] * xx[168] + xx
    [767]) * xx[18] + xx[266]) * xx[18] - (xx[827] + xx[833] + (xx[864] - xx[710]
    * xx[462]) * xx[18] + xx[471] * xx[18] * (xx[716] - xx[500] * xx[694]) -
    (xx[538] * xx[563] - xx[570] * xx[548]) + (xx[18] * (xx[929] - xx[710] * xx
    [592]) + (xx[887] - xx[710] * xx[639]) * xx[18]) * xx[18]) + (xx[872] + (xx
    [445] * xx[168] + xx[964]) * xx[18] + xx[35]) * inputDdot[6]) - xx[299] *
    xx[17] - xx[553] * xx[262] - xx[554] * xx[328] - xx[288] * xx[436] - xx[294]
    * xx[560] - xx[300] * xx[561] + xx[562] * xx[231] - xx[669] * xx[232] + (xx
    [1230] + xx[18] * (xx[1310] - xx[710] * xx[454]) + (xx[710] * xx[510] + xx
    [708] * xx[500]) * xx[18]) * inputDdot[8] - xx[324] * xx[681] + xx[160] *
    xx[440] + xx[298] * xx[680] + xx[323] * xx[704];
  xx[743] = xx[916] * xx[22] - (xx[577] + xx[583] + xx[580] + xx[636] + xx[651]
    + xx[32] + xx[18] * (xx[790] - xx[199] * xx[168]) + xx[279] - (xx[215] * xx
    [437] + xx[453] * xx[245]) + (xx[18] * (xx[799] - xx[606] * xx[168]) - xx
    [627] + xx[813]) * xx[18] - (xx[828] + xx[959] + xx[571] + xx[18] * (xx[970]
    - xx[213] * xx[159]) + xx[619] * ((xx[642] * xx[1138] + xx[714]) * xx[18] -
    xx[630]) - (xx[769] * xx[640] + xx[719] * xx[802]) + (xx[18] * (xx[1021] -
    xx[721] * xx[159]) - xx[837] + xx[873] + xx[18] * (xx[1024] - xx[866] * xx
    [159])) * xx[18]) + (xx[1016] + xx[18] * (xx[1027] - xx[641] * xx[168]) -
    xx[245] + xx[647]) * inputDdot[6]) - xx[1116] * xx[17] - xx[807] * xx[262] -
    xx[794] * xx[328] - xx[1120] * xx[436] - xx[705] * xx[560] - xx[655] * xx
    [561] + xx[562] * xx[949] + xx[869] * xx[917] + (xx[905] + xx[18] * (xx[976]
    - xx[709] * xx[159]) - xx[802] + xx[18] * (xx[723] * xx[1138] - xx[771])) *
    inputDdot[11] - xx[1561] * xx[915] + xx[153] * xx[5] + xx[167] * xx[485] +
    xx[1509] * xx[943];
  xx[744] = xx[1091] * xx[22] - (xx[578] + xx[584] + xx[581] + xx[637] + xx[652]
    + xx[36] + (xx[205] * xx[168] + xx[791]) * xx[18] - (xx[706] + xx[215] * xx
    [156] + xx[202] * xx[245]) + (xx[626] + xx[18] * (xx[800] - xx[624] * xx[168])
    + xx[814]) * xx[18] - (xx[829] + xx[960] + xx[480] + (xx[504] * xx[159] +
    xx[971]) * xx[18] - (xx[619] * (xx[771] + xx[1090] * xx[642]) * xx[18] + xx
    [769] * xx[166] + xx[573] * xx[802]) + (xx[809] + xx[18] * (xx[1022] - xx
    [803] * xx[159]) + xx[838] + (xx[868] * xx[159] + xx[1025]) * xx[18]) * xx
    [18]) + (xx[1017] + xx[215] + xx[18] * (xx[1028] - xx[713] * xx[168]) - xx
             [34] + xx[16]) * inputDdot[6]) - xx[1166] * xx[17] - xx[1182] * xx
    [262] - xx[1183] * xx[328] - xx[1163] * xx[436] - xx[1164] * xx[560] - xx
    [1167] * xx[561] + xx[562] * xx[1168] + xx[869] * xx[845] + (xx[906] + xx
    [769] + xx[18] * (xx[977] - xx[711] * xx[159]) - (xx[714] + xx[1090] * xx
    [723]) * xx[18] + xx[630]) * inputDdot[11] - xx[915] * xx[1177] + xx[911] *
    xx[5] + xx[1171] * xx[485] + xx[1176] * xx[943];
  xx[745] = xx[755] * xx[22] - (xx[579] + xx[585] + xx[582] + xx[638] + xx[653]
    + (xx[211] * xx[168] + xx[792]) * xx[18] + xx[276] - (xx[215] * xx[225] +
    xx[226] * xx[245]) + ((xx[625] * xx[168] + xx[801]) * xx[18] + xx[815]) *
    xx[18] - (xx[830] + xx[961] + (xx[159] * xx[586] + xx[972]) * xx[18] + xx
              [619] * xx[18] * (xx[1004] - xx[1090] * xx[654]) - (xx[769] * xx
    [777] + xx[793] * xx[802]) + ((xx[808] * xx[159] + xx[1023]) * xx[18] + (xx
    [159] * xx[874] + xx[1026]) * xx[18]) * xx[18]) + (xx[1018] + (xx[717] * xx
    [168] + xx[1029]) * xx[18] + xx[35]) * inputDdot[6]) - xx[954] * xx[17] -
    xx[1108] * xx[262] - xx[1112] * xx[328] - xx[948] * xx[436] - xx[953] * xx
    [560] - xx[1103] * xx[561] + xx[562] * xx[952] + xx[869] * xx[756] + (xx[907]
    + (xx[722] * xx[159] + xx[978]) * xx[18] + (xx[723] * xx[159] + xx[654] *
    xx[1138]) * xx[18]) * inputDdot[11] - xx[915] * xx[1105] + xx[757] * xx[5] +
    xx[947] * xx[485] + xx[1104] * xx[943];
  xx[746] = xx[1195] * xx[22] - (xx[487] + xx[473] + xx[490] + xx[955] + xx[973]
    + xx[344] + xx[18] * (xx[1042] - xx[477] * xx[168]) + xx[279] - (xx[494] *
    xx[437] + xx[453] * xx[495]) + (xx[18] * (xx[1048] - xx[1010] * xx[168]) -
    xx[1031] + xx[534]) * xx[18] - (xx[1051] + xx[1113] + xx[1035] + xx[18] *
    (xx[1121] + xx[1633] * xx[517]) + xx[1045] * ((xx[1630] * xx[1055] + xx[1081])
    * xx[18] - xx[16]) - (xx[1107] * xx[1046] + xx[1083] * xx[1109]) + (xx[1124]
    + (xx[1151] - xx[1633] * xx[1110]) * xx[18] + xx[1139] + xx[18] * (xx[1154]
    + xx[1633] * xx[1136])) * xx[18]) + (xx[1146] + xx[18] * (xx[1157] - xx[493]
    * xx[168]) - xx[495] + xx[647]) * inputDdot[6]) - xx[1250] * xx[17] - xx
    [1142] * xx[262] - xx[1135] * xx[328] - xx[1254] * xx[436] - xx[1134] * xx
    [560] - xx[1140] * xx[561] + xx[562] * xx[1202] + xx[1039] * xx[1197] + (xx
    [1160] + xx[1109] + (xx[1125] - xx[1633] * xx[795]) * xx[18] - xx[18] * (xx
    [1630] * xx[1037] + xx[1038])) * inputDdot[9] - xx[1059] * xx[1731] + xx
    [1225] * xx[525] + xx[1277] * xx[1057] + xx[1641] * xx[1099];
  xx[747] = xx[1226] * xx[22] - (xx[488] + xx[474] + xx[491] + xx[956] + xx[974]
    + xx[352] + (xx[478] * xx[168] + xx[1043]) * xx[18] - (xx[706] + xx[494] *
    xx[156] + xx[202] * xx[495]) + (xx[1030] + xx[18] * (xx[1049] - xx[1019] *
    xx[168]) + xx[535]) * xx[18] - (xx[1052] + xx[1114] + xx[540] + (xx[1122] -
    xx[1633] * xx[966]) * xx[18] + (xx[1038] - xx[1055] * xx[1272]) * xx[18] *
    xx[1045] - (xx[1107] * xx[483] + xx[1056] * xx[1109]) + ((xx[1152] - xx[1633]
    * xx[1111]) * xx[18] - xx[1089] + xx[1133] + (xx[1155] - xx[1633] * xx[1137])
    * xx[18]) * xx[18]) + (xx[1147] + xx[494] + xx[18] * (xx[1158] - xx[496] *
    xx[168]) - xx[34] + xx[16]) * inputDdot[6]) - xx[1307] * xx[17] - xx[1316] *
    xx[262] - xx[1317] * xx[328] - xx[1238] * xx[436] - xx[1298] * xx[560] - xx
    [1311] * xx[561] + xx[562] * xx[1303] + xx[1039] * xx[1186] + (xx[1161] +
    (xx[1126] - xx[1633] * xx[950]) * xx[18] - (xx[1107] - (xx[1081] + xx[1037] *
    xx[1272]) * xx[18]) - xx[16]) * inputDdot[9] - xx[1059] * xx[1313] + xx[1193]
    * xx[525] + xx[1302] * xx[1057] + xx[1312] * xx[1099];
  xx[748] = xx[22] * xx[1130] - (xx[489] + xx[475] + xx[492] + xx[957] + xx[975]
    + (xx[481] * xx[168] + xx[1044]) * xx[18] + xx[276] - (xx[494] * xx[225] +
    xx[226] * xx[495]) + ((xx[1020] * xx[168] + xx[1050]) * xx[18] + xx[536]) *
    xx[18] - (xx[1053] + xx[1115] + (xx[1633] * xx[1036] + xx[1123]) * xx[18] +
              xx[1045] * xx[18] * (xx[1060] * xx[1272] + xx[1184]) - (xx[1092] *
    xx[1109] - xx[1107] * xx[1106]) + (xx[18] * (xx[1153] - xx[1129] * xx[1633])
    + (xx[1633] * xx[1141] + xx[1156]) * xx[18]) * xx[18]) + (xx[1148] + (xx[951]
    * xx[168] + xx[1159]) * xx[18] + xx[35]) * inputDdot[6]) - xx[1223] * xx[17]
    - xx[1237] * xx[262] - xx[1246] * xx[328] - xx[1194] * xx[436] - xx[1221] *
    xx[560] - xx[1235] * xx[561] + xx[562] * xx[1222] + xx[1039] * xx[1131] +
    (xx[1162] + xx[18] * (xx[1127] - xx[1033] * xx[1633]) + (xx[1630] * xx[1060]
      - xx[1633] * xx[1037]) * xx[18]) * inputDdot[9] - xx[1059] * xx[1242] +
    xx[1132] * xx[525] + xx[1201] * xx[1057] + xx[1241] * xx[1099];
  xx[749] = xx[22] * xx[1329] - (xx[364] + xx[347] + xx[353] + xx[367] + xx[1187]
    + xx[157] + xx[18] * (xx[1198] - xx[358] * xx[168]) + xx[279] - (xx[394] *
    xx[437] + xx[453] * xx[411]) + (xx[18] * (xx[1209] - xx[1178] * xx[168]) -
    xx[1192] + xx[1212]) * xx[18] - (xx[1243] + xx[1251] + xx[1165] + xx[18] *
    (xx[1278] - xx[1774] * xx[1]) + xx[1170] * ((xx[1770] * xx[1196] + xx[1204])
    * xx[18] - xx[16]) - (xx[1227] * xx[1179] - xx[1231] * xx[1233]) + (xx[1267]
    + (xx[1774] * xx[1262] + xx[1286]) * xx[18] + xx[1281] + xx[18] * (xx[1289]
    - xx[1774] * xx[1273])) * xx[18]) + (xx[1283] + xx[18] * (xx[1292] - xx[370]
    * xx[168]) - xx[411] + xx[647]) * inputDdot[6]) - xx[1385] * xx[17] - xx
    [1276] * xx[262] - xx[1269] * xx[328] - xx[1389] * xx[436] - xx[1268] * xx
    [560] - xx[1274] * xx[561] + xx[562] * xx[1336] + xx[867] * xx[1345] + (xx
    [1215] + xx[1233] + (xx[1774] * xx[59] + xx[1295]) * xx[18] + xx[18] * (xx
    [1770] * xx[1206] + xx[1218])) * inputDdot[10] - xx[1891] * xx[1255] + xx
    [146] * xx[148] + xx[147] * xx[1236] + xx[1408] * xx[1261];
  xx[750] = xx[1361] * xx[22] - (xx[365] + xx[348] + xx[354] + xx[368] + xx[1188]
    + xx[350] + (xx[360] * xx[168] + xx[1199]) * xx[18] - (xx[706] + xx[394] *
    xx[156] + xx[202] * xx[411]) + (xx[1191] + xx[18] * (xx[1210] - xx[1185] *
    xx[168]) + xx[1213]) * xx[18] - (xx[1244] + xx[1252] + xx[479] + (xx[1774] *
    xx[58] + xx[1279]) * xx[18] + (xx[1196] * xx[1407] - xx[1218]) * xx[18] *
    xx[1170] - (xx[1227] * xx[413] + xx[1208] * xx[1233]) + ((xx[1774] * xx[1263]
    + xx[1287]) * xx[18] - xx[1207] + xx[1271] + (xx[1774] * xx[1275] + xx[1290])
    * xx[18]) * xx[18]) + (xx[1284] + xx[394] + xx[18] * (xx[1293] - xx[373] *
    xx[168]) - xx[34] + xx[16]) * inputDdot[6]) - xx[1442] * xx[17] - xx[1451] *
    xx[262] - xx[1452] * xx[328] - xx[1373] * xx[436] - xx[1433] * xx[560] - xx
    [1446] * xx[561] + xx[562] * xx[1438] + xx[867] * xx[1320] + (xx[1216] +
    (xx[1774] * xx[486] + xx[1296]) * xx[18] - (xx[1227] - (xx[1204] + xx[1206] *
    xx[1407]) * xx[18]) - xx[16]) * inputDdot[10] - xx[1255] * xx[1448] + xx
    [1327] * xx[148] + xx[1437] * xx[1236] + xx[1447] * xx[1261];
  xx[751] = xx[1264] * xx[22] - (xx[366] + xx[349] + xx[355] + xx[369] + xx[1189]
    + (xx[371] * xx[168] + xx[1200]) * xx[18] + xx[276] - (xx[394] * xx[225] +
    xx[226] * xx[411]) + ((xx[1190] * xx[168] + xx[1211]) * xx[18] + xx[1214]) *
    xx[18] - (xx[1245] + xx[1253] + (xx[1280] - xx[1774] * xx[372]) * xx[18] +
              xx[1170] * xx[18] * (xx[1203] * xx[1407] + xx[1321]) - (xx[1234] *
    xx[1233] - xx[1227] * xx[1239]) + (xx[18] * (xx[1288] - xx[1774] * xx[1270])
    + (xx[1291] - xx[1774] * xx[1282]) * xx[18]) * xx[18]) + (xx[1285] + (xx
    [1145] * xx[168] + xx[1294]) * xx[18] + xx[35]) * inputDdot[6]) - xx[1358] *
    xx[17] - xx[1372] * xx[262] - xx[1381] * xx[328] - xx[1328] * xx[436] - xx
    [1356] * xx[560] - xx[1370] * xx[561] + xx[562] * xx[1357] + xx[867] * xx
    [1265] + (xx[1217] + xx[18] * (xx[1297] - xx[1774] * xx[656]) + (xx[1774] *
    xx[1206] - xx[1770] * xx[1203]) * xx[18]) * inputDdot[10] - xx[1255] * xx
    [1360] + xx[1266] * xx[148] + xx[1335] * xx[1236] + xx[1376] * xx[1261];
  xx[752] = (xx[1324] + xx[1341] + (xx[1350] - xx[2] * xx[1330]) * xx[18] + xx
             [18] * (xx[10] * xx[1347] - xx[1349])) * inputDdot[7] - (xx[29] +
    xx[38] + xx[18] * (xx[737] - xx[313] * xx[37]) + xx[216] + xx[309] + xx[305]
    + xx[174] + xx[18] * (xx[314] - xx[192] * xx[168]) + xx[279] - (xx[208] *
    xx[437] + xx[453] * xx[209]) + (xx[18] * (xx[339] - xx[261] * xx[168]) - xx
    [301] + xx[302]) * xx[18] - (xx[79] + xx[74] + xx[61] + xx[18] * (xx[136] +
    xx[2] * xx[60]) + xx[131] * ((xx[10] * xx[133] + xx[134]) * xx[18] - xx[16])
    - (xx[1343] * xx[223] + xx[263] * xx[1341]) + (xx[135] + (xx[594] - xx[2] *
    xx[122]) * xx[18] + xx[162] + xx[18] * (xx[433] + xx[2] * xx[141])) * xx[18]))
    - xx[12] * xx[1924] + xx[152] * xx[4] + xx[938] * xx[25] + xx[62] * xx[26] -
    (xx[39] + xx[18] * (xx[88] - xx[3] * xx[168]) - xx[209] + xx[647]) *
    inputDdot[6] + xx[1455] * xx[22] - xx[464] * xx[17] - xx[190] * xx[262] -
    xx[252] * xx[328] - xx[628] * xx[436] - xx[189] * xx[560] - xx[187] * xx[561]
    + xx[562] * xx[297] + xx[50] * xx[1462];
  xx[753] = (xx[1325] + (xx[1351] - xx[2] * xx[1344]) * xx[18] - (xx[1343] -
              (xx[134] + xx[1347] * xx[8]) * xx[18]) - xx[16]) * inputDdot[7] -
    (xx[30] + xx[171] + (xx[313] * xx[172] + xx[738]) * xx[18] + xx[217] + xx
     [310] + xx[306] + xx[175] + (xx[201] * xx[168] + xx[315]) * xx[18] - (xx
      [706] + xx[208] * xx[156] + xx[202] * xx[209]) + (xx[287] + xx[18] * (xx
       [340] - xx[267] * xx[168]) + xx[303]) * xx[18] - (xx[80] + xx[75] + xx[64]
      + (xx[137] - xx[2] * xx[66]) * xx[18] + (xx[1349] + xx[133] * xx[8]) * xx
      [18] * xx[131] - (xx[54] * xx[1341] - xx[1343] * xx[77]) + ((xx[595] - xx
        [2] * xx[123]) * xx[18] - xx[0] + xx[139] + (xx[434] - xx[2] * xx[142]) *
       xx[18]) * xx[18])) - xx[143] * xx[12] + xx[1488] * xx[4] + xx[1936] * xx
    [25] + xx[1939] * xx[26] - (xx[40] + xx[208] + xx[18] * (xx[89] - xx[42] *
    xx[168]) - xx[34] + xx[16]) * inputDdot[6] + xx[617] * xx[22] - xx[1502] *
    xx[17] - xx[1520] * xx[262] - xx[1542] * xx[328] - xx[1445] * xx[436] - xx
    [1492] * xx[560] - xx[1503] * xx[561] + xx[562] * xx[618] + xx[50] * xx[1436];
  xx[754] = (xx[1326] + xx[18] * (xx[1352] - xx[1346] * xx[2]) + (xx[2] * xx
              [1347] + xx[10] * xx[1348]) * xx[18]) * inputDdot[7] - (xx[31] +
    (xx[313] * xx[173] + xx[739]) * xx[18] + xx[218] + xx[311] + xx[307] + (xx
    [203] * xx[168] + xx[316]) * xx[18] + xx[276] - (xx[208] * xx[225] + xx[226]
    * xx[209]) + ((xx[277] * xx[168] + xx[341]) * xx[18] + xx[304]) * xx[18] -
    (xx[81] + xx[76] + (xx[138] - xx[2] * xx[67]) * xx[18] + xx[131] * xx[18] *
     (xx[254] - xx[1348] * xx[8]) - (xx[1343] * xx[82] - xx[132] * xx[1341]) +
     (xx[18] * (xx[596] - xx[124] * xx[2]) + (xx[435] - xx[2] * xx[6]) * xx[18])
     * xx[18])) - xx[140] * xx[12] + xx[149] * xx[4] + xx[150] * xx[25] + xx[151]
    * xx[26] - (xx[41] + (xx[43] * xx[168] + xx[90]) * xx[18] + xx[35]) *
    inputDdot[6] + xx[1399] * xx[22] - xx[787] * xx[17] - xx[789] * xx[262] -
    xx[796] * xx[328] - xx[1429] * xx[436] - xx[1474] * xx[560] - xx[1476] * xx
    [561] + xx[562] * xx[1400] + xx[50] * xx[1401];
  memcpy(xx + 2332, xx + 2107, 225 * sizeof(double));
  factorAndSolveSymmetric(xx + 2332, 15, xx + 301, ii + 0, xx + 740, xx + 29, xx
    + 2557);
  xx[0] = - (xx[53] + xx[152] * xx[41] + xx[1488] * xx[42] + xx[149] * xx[43]);
  xx[1] = - (xx[164] + xx[938] * xx[41] + xx[1936] * xx[42] + xx[150] * xx[43]);
  xx[2] = - (xx[87] + xx[62] * xx[41] + xx[1939] * xx[42] + xx[151] * xx[43]);
  solveSymmetricPosDef(xx + 105, xx + 0, 3, 1, xx + 3, xx + 44);
  xx[0] = xx[92] + xx[83] * xx[3] + xx[145] * xx[4];
  xx[1] = xx[93] - xx[718] * xx[3] + xx[84] * xx[4];
  xx[2] = xx[86] + xx[85] * xx[5];
  pm_math_quatXform(xx + 68, xx + 0, xx + 44);
  xx[0] = xx[128] + xx[736] * xx[3] - xx[811] * xx[4] - xx[875] * xx[5];
  xx[1] = xx[129] + xx[811] * xx[3] + xx[736] * xx[4] + xx[913] * xx[5];
  xx[2] = xx[52] + xx[914] * xx[3] + xx[932] * xx[4];
  pm_math_quatXform(xx + 68, xx + 0, xx + 52);
  pm_math_cross3(xx + 119, xx + 52, xx + 0);
  xx[0] = (xx[63] + xx[46] + xx[2] + xx[130] + (xx[53] + xx[48]) * xx[1911] -
           (xx[52] + xx[49]) * xx[1912] + xx[1924] * xx[41] + xx[143] * xx[42] +
           xx[140] * xx[43]) / xx[1928] + xx[11];
  xx[44] = state[2];
  xx[45] = state[3];
  xx[46] = state[4];
  xx[47] = state[5];
  xx[10] = state[6];
  xx[11] = state[7];
  xx[12] = state[8];
  pm_math_quatDeriv(xx + 44, xx + 10, xx + 58);
  xx[10] = xx[14];
  xx[11] = xx[21];
  xx[12] = xx[214] - xx[0];
  pm_math_quatInverseXform(xx + 68, xx + 10, xx + 21);
  pm_math_cross3(xx + 10, xx + 119, xx + 44);
  xx[10] = xx[13] + xx[0] * xx[1912] + xx[51] + xx[44];
  xx[11] = xx[7] - xx[0] * xx[1911] + xx[248] + xx[45];
  xx[12] = xx[24] + xx[46];
  pm_math_quatInverseXform(xx + 68, xx + 10, xx + 6);
  xx[1] = (xx[1462] * xx[41] + xx[1436] * xx[42] + xx[1401] * xx[43] - xx[423]) /
    xx[357];
  xx[2] = xx[555] + xx[356] * xx[1];
  xx[10] = xx[568] - xx[401] * xx[1];
  xx[11] = xx[10] * xx[399];
  xx[12] = xx[2] * xx[399];
  xx[13] = xx[2] + xx[18] * (xx[363] * xx[11] - xx[12] * xx[399]);
  xx[2] = xx[10] - (xx[363] * xx[12] + xx[11] * xx[399]) * xx[18];
  xx[10] = xx[13];
  xx[11] = xx[2];
  xx[12] = xx[550];
  pm_math_cross3(xx + 1403, xx + 10, xx + 24);
  xx[10] = (xx[1345] * xx[38] + xx[1320] * xx[39] + xx[1265] * xx[40] - xx[552])
    / xx[351];
  xx[44] = xx[457];
  xx[45] = xx[465];
  xx[46] = xx[1306] - xx[57] * xx[10];
  pm_math_quatXform(xx + 407, xx + 44, xx + 47);
  xx[44] = xx[567] + xx[378] * xx[10];
  xx[45] = xx[616] - xx[375] * xx[10];
  xx[46] = xx[661];
  pm_math_quatXform(xx + 407, xx + 44, xx + 50);
  pm_math_cross3(xx + 417, xx + 50, xx + 44);
  xx[11] = (xx[1197] * xx[35] + xx[1186] * xx[36] + xx[1131] * xx[37] - xx[665])
    / xx[476];
  xx[62] = xx[593];
  xx[63] = xx[662];
  xx[64] = xx[1441] - xx[57] * xx[11];
  pm_math_quatXform(xx + 530, xx + 62, xx + 65);
  xx[62] = xx[685] + xx[498] * xx[11];
  xx[63] = xx[788] + xx[501] * xx[11];
  xx[64] = xx[797];
  pm_math_quatXform(xx + 530, xx + 62, xx + 68);
  pm_math_cross3(xx + 541, xx + 68, xx + 62);
  xx[12] = (xx[917] * xx[32] + xx[845] * xx[33] + xx[756] * xx[34] - xx[810]) /
    xx[240];
  xx[74] = xx[768];
  xx[75] = xx[798];
  xx[76] = xx[1482] + xx[57] * xx[12];
  pm_math_quatXform(xx + 620, xx + 74, xx + 79);
  xx[74] = xx[844] - xx[590] * xx[12];
  xx[75] = xx[812] + xx[587] * xx[12];
  xx[76] = xx[910];
  pm_math_quatXform(xx + 620, xx + 74, xx + 86);
  pm_math_cross3(xx + 631, xx + 86, xx + 74);
  xx[14] = (xx[247] * xx[29] + xx[293] * xx[30] + xx[232] * xx[31] + xx[843]) /
    xx[331];
  xx[16] = xx[1079] - xx[330] * xx[14];
  xx[17] = xx[1084] - xx[342] * xx[14];
  xx[53] = xx[17] * xx[210];
  xx[54] = xx[16] * xx[210];
  xx[71] = xx[16] + xx[18] * (xx[198] * xx[53] - xx[54] * xx[210]);
  xx[16] = xx[17] - (xx[198] * xx[54] + xx[53] * xx[210]) * xx[18];
  xx[89] = xx[71];
  xx[90] = xx[16];
  xx[91] = xx[1015];
  pm_math_cross3(xx + 249, xx + 89, xx + 105);
  xx[17] = xx[1100] + xx[549] + xx[24] + xx[47] + xx[44] + xx[65] + xx[62] + xx
    [79] + xx[74] + xx[1005] + xx[105] + xx[332];
  xx[53] = xx[1102] + xx[1180] - xx[57] * xx[1] + xx[26] + xx[49] + xx[46] + xx
    [67] + xx[64] + xx[81] + xx[76] + xx[1501] - xx[57] * xx[14] + xx[107] + xx
    [377];
  xx[54] = xx[2] + xx[51] + xx[69] + xx[87] + xx[16] + xx[389];
  xx[2] = (xx[317] * xx[29] + xx[286] * xx[30] + xx[231] * xx[31] + xx[949] *
           xx[32] + xx[1168] * xx[33] + xx[952] * xx[34] + xx[1202] * xx[35] +
           xx[1303] * xx[36] + xx[1222] * xx[37] + xx[1336] * xx[38] + xx[1438] *
           xx[39] + xx[1357] * xx[40] + xx[297] * xx[41] + xx[618] * xx[42] +
           xx[1400] * xx[43] + xx[17] * xx[200] + xx[53] * xx[206] + xx[54] *
           xx[296]) / xx[461];
  xx[89] = xx[17] + xx[2] * xx[414];
  xx[90] = xx[1101] + xx[392] + xx[25] + xx[48] + xx[45] + xx[66] + xx[63] + xx
    [80] + xx[75] + xx[396] + xx[106] + xx[403] + xx[518] * xx[2];
  xx[91] = xx[53] - xx[381] * xx[2];
  pm_math_quatXform(xx + 219, xx + 89, xx + 24);
  xx[44] = xx[13] + xx[50] + xx[68] + xx[86] + xx[71] + xx[334] + xx[397] * xx[2];
  xx[45] = xx[54] + xx[442] * xx[2];
  xx[46] = xx[550] + xx[52] + xx[70] + xx[88] + xx[1015] + xx[380] + xx[2] * xx
    [429];
  pm_math_quatXform(xx + 219, xx + 44, xx + 47);
  pm_math_cross3(xx + 556, xx + 47, xx + 44);
  xx[13] = xx[1070] + xx[24] + xx[44] + xx[390];
  xx[16] = xx[48] + xx[393];
  xx[17] = xx[49] + xx[415];
  xx[48] = xx[1071] + xx[25] + xx[45] + xx[422];
  xx[49] = xx[47] + xx[425];
  xx[24] = xx[1072] + xx[26] + xx[46] + xx[382];
  xx[44] = xx[559] * xx[29] + xx[1001] * xx[30] + xx[288] * xx[31] + xx[1120] *
    xx[32] + xx[1163] * xx[33] + xx[948] * xx[34] + xx[1254] * xx[35] + xx[1238]
    * xx[36] + xx[1194] * xx[37] + xx[1389] * xx[38] + xx[1373] * xx[39] + xx
    [1328] * xx[40] + xx[628] * xx[41] + xx[1445] * xx[42] + xx[1429] * xx[43] -
    (xx[13] - (xx[16] * xx[235] + xx[17] * xx[234]));
  xx[45] = xx[191] * xx[29] + xx[1002] * xx[30] + xx[294] * xx[31] + xx[705] *
    xx[32] + xx[1164] * xx[33] + xx[953] * xx[34] + xx[1134] * xx[35] + xx[1298]
    * xx[36] + xx[1221] * xx[37] + xx[1268] * xx[38] + xx[1433] * xx[39] + xx
    [1356] * xx[40] + xx[189] * xx[41] + xx[1492] * xx[42] + xx[1474] * xx[43] -
    (xx[48] + xx[49] * xx[235] - xx[17] * xx[233]);
  xx[46] = xx[255] * xx[29] + xx[1014] * xx[30] + xx[300] * xx[31] + xx[655] *
    xx[32] + xx[1167] * xx[33] + xx[1103] * xx[34] + xx[1140] * xx[35] + xx[1311]
    * xx[36] + xx[1235] * xx[37] + xx[1274] * xx[38] + xx[1446] * xx[39] + xx
    [1370] * xx[40] + xx[187] * xx[41] + xx[1503] * xx[42] + xx[1476] * xx[43] -
    (xx[24] + xx[49] * xx[234] + xx[16] * xx[233]);
  solveSymmetricPosDef(xx + 597, xx + 44, 3, 1, xx + 50, xx + 62);
  xx[44] = xx[13] + xx[426] * xx[50] + xx[438] * xx[51] + xx[459] * xx[52];
  xx[45] = xx[48] + xx[505] * xx[50] + xx[511] * xx[51] + xx[520] * xx[52];
  xx[46] = xx[24] + xx[545] * xx[50] + xx[448] * xx[51] + xx[526] * xx[52];
  pm_math_quatXform(xx + 193, xx + 44, xx + 24);
  xx[44] = xx[49] + xx[253] * xx[50] + xx[516] * xx[51] + xx[514] * xx[52];
  xx[45] = xx[16] + xx[428] * xx[50] + xx[441] * xx[51] + xx[503] * xx[52];
  xx[46] = xx[17] + xx[432] * xx[50] + xx[444] * xx[51] + xx[509] * xx[52];
  pm_math_quatXform(xx + 193, xx + 44, xx + 47);
  pm_math_cross3(xx + 449, xx + 47, xx + 44);
  xx[13] = xx[1007] + xx[24] + xx[44] + xx[256];
  xx[16] = xx[1008] + xx[25] + xx[45] + xx[333];
  xx[17] = xx[47] + xx[327];
  xx[47] = xx[48] + xx[329];
  xx[48] = xx[49] + xx[391];
  xx[62] = xx[17];
  xx[63] = xx[47];
  xx[64] = xx[48];
  xx[24] = xx[1009] + xx[26] + xx[46] + xx[421];
  xx[44] = xx[776] * xx[29] + xx[1013] * xx[30] + xx[299] * xx[31] + xx[1116] *
    xx[32] + xx[1166] * xx[33] + xx[954] * xx[34] + xx[1250] * xx[35] + xx[1307]
    * xx[36] + xx[1223] * xx[37] + xx[1385] * xx[38] + xx[1442] * xx[39] + xx
    [1358] * xx[40] + xx[464] * xx[41] + xx[1502] * xx[42] + xx[787] * xx[43] -
    (xx[13] - xx[16] * xx[94] + pm_math_dot3(xx + 116, xx + 62));
  xx[45] = xx[268] * xx[29] + xx[1047] * xx[30] + xx[553] * xx[31] + xx[807] *
    xx[32] + xx[1182] * xx[33] + xx[1108] * xx[34] + xx[1142] * xx[35] + xx[1316]
    * xx[36] + xx[1237] * xx[37] + xx[1276] * xx[38] + xx[1451] * xx[39] + xx
    [1372] * xx[40] + xx[190] * xx[41] + xx[1520] * xx[42] + xx[789] * xx[43] -
    (xx[13] * xx[94] + xx[16] + pm_math_dot3(xx + 758, xx + 62));
  xx[46] = xx[178] * xx[29] + xx[1082] * xx[30] + xx[554] * xx[31] + xx[794] *
    xx[32] + xx[1183] * xx[33] + xx[1112] * xx[34] + xx[1135] * xx[35] + xx[1317]
    * xx[36] + xx[1246] * xx[37] + xx[1269] * xx[38] + xx[1452] * xx[39] + xx
    [1381] * xx[40] + xx[252] * xx[41] + xx[1542] * xx[42] + xx[796] * xx[43] -
    (xx[24] + xx[47] * xx[72] - xx[17] * xx[73]);
  solveSymmetricPosDef(xx + 778, xx + 44, 3, 1, xx + 62, xx + 65);
  xx[44] = xx[13] + xx[668] * xx[62] + xx[697] * xx[63] + xx[770] * xx[64];
  xx[45] = xx[16] + xx[692] * xx[62] + xx[700] * xx[63] + xx[772] * xx[64];
  xx[46] = xx[24] + xx[278] * xx[62] + xx[452] * xx[63] + xx[720] * xx[64];
  pm_math_quatXform(xx + 183, xx + 44, xx + 24);
  xx[44] = xx[17] + xx[698] * xx[62] + xx[728] * xx[63] + xx[773] * xx[64];
  xx[45] = xx[47] + xx[699] * xx[62] + xx[732] * xx[63] + xx[774] * xx[64];
  xx[46] = xx[48] + xx[695] * xx[62] + xx[764] * xx[63] + xx[775] * xx[64];
  pm_math_quatXform(xx + 183, xx + 44, xx + 47);
  pm_math_cross3(xx + 282, xx + 47, xx + 44);
  xx[13] = (xx[295] * xx[29] + xx[958] * xx[30] + xx[230] * xx[31] + xx[916] *
            xx[32] + xx[1091] * xx[33] + xx[755] * xx[34] + xx[1195] * xx[35] +
            xx[1226] * xx[36] + xx[1130] * xx[37] + xx[1329] * xx[38] + xx[1361]
            * xx[39] + xx[1264] * xx[40] + xx[1455] * xx[41] + xx[617] * xx[42]
            + xx[1399] * xx[43] - (xx[551] + xx[26] + xx[46] + xx[176] - ((xx[47]
    + xx[177]) * xx[285] + (xx[48] + xx[179]) * xx[281]))) / xx[660] - xx[9];
  xx[41] = state[11];
  xx[42] = state[12];
  xx[43] = state[13];
  xx[44] = state[14];
  xx[24] = state[15];
  xx[25] = state[16];
  xx[26] = state[17];
  pm_math_quatDeriv(xx + 41, xx + 24, xx + 45);
  xx[24] = xx[648];
  xx[25] = xx[27];
  xx[26] = xx[20] + xx[13];
  pm_math_quatInverseXform(xx + 183, xx + 24, xx + 41);
  pm_math_cross3(xx + 24, xx + 282, xx + 65);
  xx[24] = xx[19] - xx[285] * xx[13] + xx[181] + xx[65];
  xx[25] = xx[15] - xx[281] * xx[13] + xx[447] + xx[66];
  xx[26] = xx[28] + xx[67];
  pm_math_quatInverseXform(xx + 183, xx + 24, xx + 15);
  xx[9] = xx[62] - (pm_math_dot3(xx + 689, xx + 41) + pm_math_dot3(xx + 729, xx
    + 15));
  xx[19] = xx[63] - (pm_math_dot3(xx + 761, xx + 41) + pm_math_dot3(xx + 888, xx
    + 15));
  xx[20] = xx[64] - (pm_math_dot3(xx + 891, xx + 41) + pm_math_dot3(xx + 834, xx
    + 15));
  xx[24] = state[18];
  xx[25] = state[19];
  xx[26] = state[20];
  xx[27] = state[21];
  pm_math_quatDeriv(xx + 24, xx + 1085, xx + 62);
  xx[24] = xx[41] + xx[9] + xx[94] * xx[19] + xx[1093];
  xx[25] = xx[42] - xx[94] * xx[9] + xx[19] + xx[1094];
  xx[26] = xx[43] + xx[20] + xx[1095];
  pm_math_quatInverseXform(xx + 193, xx + 24, xx + 41);
  pm_math_cross3(xx + 24, xx + 449, xx + 66);
  xx[24] = xx[15] + xx[95] * xx[9] - xx[114] * xx[19] - xx[73] * xx[20] + xx[182]
    + xx[66];
  xx[25] = xx[16] + xx[114] * xx[9] + xx[95] * xx[19] + xx[72] * xx[20] + xx[188]
    + xx[67];
  xx[26] = xx[17] + xx[115] * xx[9] + xx[696] * xx[19] + xx[244] + xx[68];
  pm_math_quatInverseXform(xx + 193, xx + 24, xx + 15);
  xx[24] = xx[50] - (pm_math_dot3(xx + 724, xx + 41) + pm_math_dot3(xx + 840, xx
    + 15));
  xx[25] = xx[51] - (pm_math_dot3(xx + 733, xx + 41) + pm_math_dot3(xx + 846, xx
    + 15));
  xx[26] = xx[52] - (pm_math_dot3(xx + 849, xx + 41) + pm_math_dot3(xx + 701, xx
    + 15));
  xx[49] = xx[41] + xx[24] + xx[1172];
  xx[50] = xx[42] + xx[25] + xx[1173];
  xx[51] = xx[43] + xx[26] + xx[1174];
  pm_math_quatInverseXform(xx + 219, xx + 49, xx + 41);
  pm_math_cross3(xx + 49, xx + 556, xx + 52);
  xx[49] = xx[15] + xx[235] * xx[25] + xx[234] * xx[26] + xx[319] + xx[52];
  xx[50] = xx[16] - xx[235] * xx[24] + xx[233] * xx[26] + xx[321] + xx[53];
  xx[51] = xx[17] - xx[234] * xx[24] - xx[233] * xx[25] + xx[322] + xx[54];
  pm_math_quatInverseXform(xx + 219, xx + 49, xx + 15);
  xx[27] = xx[2] - (pm_math_dot3(xx + 643, xx + 41) + pm_math_dot3(xx + 386, xx
    + 15));
  xx[2] = xx[43] - xx[206] * xx[27] + xx[420];
  xx[28] = xx[15] + xx[343];
  xx[49] = xx[41] - xx[200] * xx[27] - xx[385];
  xx[50] = xx[42] + xx[395];
  xx[51] = xx[2];
  pm_math_cross3(xx + 49, xx + 249, xx + 41);
  xx[15] = xx[28] + xx[41];
  xx[44] = xx[16] - xx[296] * xx[27] + xx[1011];
  xx[16] = xx[44] + xx[42];
  xx[41] = xx[16] * xx[210];
  xx[42] = xx[15] * xx[210];
  pm_math_quatInverseXform(xx + 620, xx + 49, xx + 52);
  pm_math_cross3(xx + 49, xx + 631, xx + 66);
  xx[43] = xx[17] + xx[361];
  xx[69] = xx[28] + xx[66];
  xx[70] = xx[44] + xx[67];
  xx[71] = xx[43] + xx[68];
  pm_math_quatInverseXform(xx + 620, xx + 69, xx + 66);
  pm_math_cross3(xx + 49, xx + 541, xx + 68);
  xx[71] = xx[28] + xx[68];
  xx[72] = xx[44] + xx[69];
  xx[73] = xx[43] + xx[70];
  pm_math_quatInverseXform(xx + 530, xx + 71, xx + 68);
  pm_math_quatInverseXform(xx + 530, xx + 49, xx + 70);
  pm_math_cross3(xx + 49, xx + 417, xx + 73);
  xx[79] = xx[28] + xx[73];
  xx[80] = xx[44] + xx[74];
  xx[81] = xx[43] + xx[75];
  pm_math_quatInverseXform(xx + 407, xx + 79, xx + 73);
  pm_math_quatInverseXform(xx + 407, xx + 49, xx + 75);
  pm_math_cross3(xx + 49, xx + 1403, xx + 79);
  xx[17] = xx[28] + xx[79];
  xx[28] = xx[44] + xx[80];
  xx[43] = xx[28] * xx[399];
  xx[44] = xx[17] * xx[399];
  xx[49] = - (xx[944] + xx[153] * xx[32] + xx[911] * xx[33] + xx[757] * xx[34]);
  xx[50] = - (xx[945] + xx[167] * xx[32] + xx[1171] * xx[33] + xx[947] * xx[34]);
  xx[51] = - (xx[936] + xx[1509] * xx[32] + xx[1176] * xx[33] + xx[1104] * xx[34]);
  solveSymmetricPosDef(xx + 1567, xx + 49, 3, 1, xx + 79, xx + 86);
  xx[49] = xx[931] + xx[83] * xx[79] + xx[145] * xx[80];
  xx[50] = xx[933] - xx[718] * xx[79] + xx[84] * xx[80];
  xx[51] = xx[935] + xx[85] * xx[81];
  pm_math_quatXform(xx + 1525, xx + 49, xx + 86);
  xx[49] = xx[460] + xx[736] * xx[79] - xx[811] * xx[80] - xx[875] * xx[81];
  xx[50] = xx[482] + xx[811] * xx[79] + xx[736] * xx[80] + xx[913] * xx[81];
  xx[51] = xx[930] + xx[914] * xx[79] + xx[932] * xx[80];
  pm_math_quatXform(xx + 1525, xx + 49, xx + 89);
  pm_math_cross3(xx + 1529, xx + 89, xx + 49);
  xx[49] = (xx[1041] + xx[88] + xx[51] + xx[569] + (xx[89] + xx[727]) * xx[1551]
            + (xx[90] + xx[901]) * xx[1546] + xx[1561] * xx[32] + xx[1177] * xx
            [33] + xx[1105] * xx[34]) / xx[1611] + xx[865];
  xx[50] = state[39];
  xx[51] = state[40];
  xx[52] = state[41];
  xx[53] = state[42];
  xx[32] = state[43];
  xx[33] = state[44];
  xx[34] = state[45];
  pm_math_quatDeriv(xx + 50, xx + 32, xx + 86);
  xx[32] = xx[941];
  xx[33] = xx[937];
  xx[34] = xx[965] - xx[49];
  pm_math_quatInverseXform(xx + 1525, xx + 32, xx + 50);
  pm_math_cross3(xx + 32, xx + 1529, xx + 90);
  xx[32] = xx[940] - xx[49] * xx[1551] + xx[909] + xx[90];
  xx[33] = xx[908] - xx[49] * xx[1546] + xx[979] + xx[91];
  xx[34] = xx[942] + xx[92];
  pm_math_quatInverseXform(xx + 1525, xx + 32, xx + 90);
  xx[32] = - (xx[676] + xx[666] * xx[29] + xx[241] * xx[30] + xx[160] * xx[31]);
  xx[33] = - (xx[684] + xx[144] * xx[29] + xx[1003] * xx[30] + xx[298] * xx[31]);
  xx[34] = - (xx[688] + xx[707] * xx[29] + xx[1006] * xx[30] + xx[323] * xx[31]);
  solveSymmetricPosDef(xx + 918, xx + 32, 3, 1, xx + 93, xx + 105);
  xx[32] = xx[670] + xx[83] * xx[93] + xx[145] * xx[94];
  xx[33] = xx[672] - xx[718] * xx[93] + xx[84] * xx[94];
  xx[34] = xx[687] + xx[85] * xx[95];
  pm_math_quatXform(xx + 894, xx + 32, xx + 105);
  xx[32] = xx[246] + xx[736] * xx[93] - xx[811] * xx[94] - xx[875] * xx[95];
  xx[33] = xx[273] + xx[811] * xx[93] + xx[736] * xx[94] + xx[913] * xx[95];
  xx[34] = xx[667] + xx[914] * xx[93] + xx[932] * xx[94];
  pm_math_quatXform(xx + 894, xx + 32, xx + 108);
  pm_math_cross3(xx + 898, xx + 108, xx + 32);
  xx[32] = (xx[1466] + xx[107] + xx[34] + xx[456] + (xx[108] + xx[544]) * xx[839]
            - (xx[109] + xx[565]) * xx[861] + xx[912] * xx[29] + xx[934] * xx[30]
            + xx[324] * xx[31]) / xx[1032] + xx[524];
  xx[105] = state[48];
  xx[106] = state[49];
  xx[107] = state[50];
  xx[108] = state[51];
  xx[29] = state[52];
  xx[30] = state[53];
  xx[31] = state[54];
  pm_math_quatDeriv(xx + 105, xx + 29, xx + 109);
  xx[29] = xx[683];
  xx[30] = xx[686];
  xx[31] = xx[712] - xx[32];
  pm_math_quatInverseXform(xx + 894, xx + 29, xx + 105);
  pm_math_cross3(xx + 29, xx + 898, xx + 113);
  xx[29] = xx[682] - xx[32] * xx[839] + xx[664] + xx[113];
  xx[30] = xx[663] + xx[32] * xx[861] + xx[715] + xx[114];
  xx[31] = xx[693] + xx[115];
  pm_math_quatInverseXform(xx + 894, xx + 29, xx + 113);
  xx[29] = - (xx[1149] + xx[1225] * xx[35] + xx[1193] * xx[36] + xx[1132] * xx
              [37]);
  xx[30] = - (xx[1150] + xx[1277] * xx[35] + xx[1302] * xx[36] + xx[1201] * xx
              [37]);
  xx[31] = - (xx[1144] + xx[1641] * xx[35] + xx[1312] * xx[36] + xx[1241] * xx
              [37]);
  solveSymmetricPosDef(xx + 1737, xx + 29, 3, 1, xx + 116, xx + 119);
  xx[29] = xx[1117] + xx[83] * xx[116] + xx[145] * xx[117];
  xx[30] = xx[1118] - xx[718] * xx[116] + xx[84] * xx[117];
  xx[31] = xx[1143] + xx[85] * xx[118];
  pm_math_quatXform(xx + 1706, xx + 29, xx + 119);
  xx[29] = xx[537] + xx[736] * xx[116] - xx[811] * xx[117] - xx[875] * xx[118];
  xx[30] = xx[946] + xx[811] * xx[116] + xx[736] * xx[117] + xx[913] * xx[118];
  xx[31] = xx[1119] + xx[914] * xx[116] + xx[932] * xx[117];
  pm_math_quatXform(xx + 1706, xx + 29, xx + 122);
  pm_math_cross3(xx + 1710, xx + 122, xx + 29);
  xx[29] = (xx[1205] + xx[121] + xx[31] + xx[1012] - ((xx[122] + xx[1034]) * xx
             [1720] + (xx[123] + xx[1054]) * xx[1719]) + xx[1731] * xx[35] + xx
            [1313] * xx[36] + xx[1242] * xx[37]) / xx[1781] + xx[1040];
  xx[33] = state[57];
  xx[34] = state[58];
  xx[35] = state[59];
  xx[36] = state[60];
  xx[119] = state[61];
  xx[120] = state[62];
  xx[121] = state[63];
  pm_math_quatDeriv(xx + 33, xx + 119, xx + 122);
  xx[33] = xx[1096];
  xx[34] = xx[1097];
  xx[35] = xx[1175] - xx[29];
  pm_math_quatInverseXform(xx + 1706, xx + 33, xx + 119);
  pm_math_cross3(xx + 33, xx + 1710, xx + 126);
  xx[33] = xx[1080] + xx[29] * xx[1720] + xx[1088] + xx[126];
  xx[34] = xx[1058] + xx[29] * xx[1719] + xx[1181] + xx[127];
  xx[35] = xx[1098] + xx[128];
  pm_math_quatInverseXform(xx + 1706, xx + 33, xx + 126);
  xx[33] = - (xx[78] + xx[146] * xx[38] + xx[1327] * xx[39] + xx[1266] * xx[40]);
  xx[34] = - (xx[1260] + xx[147] * xx[38] + xx[1437] * xx[39] + xx[1335] * xx[40]);
  xx[35] = - (xx[1248] + xx[1408] * xx[38] + xx[1447] * xx[39] + xx[1376] * xx
              [40]);
  solveSymmetricPosDef(xx + 96, xx + 33, 3, 1, xx + 129, xx + 132);
  xx[33] = xx[416] + xx[83] * xx[129] + xx[145] * xx[130];
  xx[34] = xx[1259] - xx[718] * xx[129] + xx[84] * xx[130];
  xx[35] = xx[1247] + xx[85] * xx[131];
  pm_math_quatXform(xx + 1806, xx + 33, xx + 82);
  xx[33] = xx[55] + xx[736] * xx[129] - xx[811] * xx[130] - xx[875] * xx[131];
  xx[34] = xx[56] + xx[811] * xx[129] + xx[736] * xx[130] + xx[913] * xx[131];
  xx[35] = xx[412] + xx[914] * xx[129] + xx[932] * xx[130];
  pm_math_quatXform(xx + 1806, xx + 33, xx + 55);
  pm_math_cross3(xx + 1876, xx + 55, xx + 33);
  xx[30] = (xx[1332] + xx[84] + xx[35] + xx[1128] - ((xx[55] + xx[1169]) * xx
             [1840] + (xx[56] + xx[1220]) * xx[1829]) + xx[1891] * xx[38] + xx
            [1448] * xx[39] + xx[1360] * xx[40]) / xx[1903] + xx[1219];
  xx[33] = state[66];
  xx[34] = state[67];
  xx[35] = state[68];
  xx[36] = state[69];
  xx[37] = state[70];
  xx[38] = state[71];
  xx[39] = state[72];
  pm_math_quatDeriv(xx + 33, xx + 37, xx + 82);
  xx[33] = xx[1257];
  xx[34] = xx[1249];
  xx[35] = xx[1314] - xx[30];
  pm_math_quatInverseXform(xx + 1806, xx + 33, xx + 36);
  pm_math_cross3(xx + 33, xx + 1876, xx + 55);
  xx[33] = xx[1256] + xx[30] * xx[1840] + xx[1224] + xx[55];
  xx[34] = xx[1232] + xx[30] * xx[1829] + xx[1240] + xx[56];
  xx[35] = xx[1258] + xx[57];
  pm_math_quatInverseXform(xx + 1806, xx + 33, xx + 55);
  deriv[0] = state[1];
  deriv[1] = - xx[0];
  deriv[2] = xx[58];
  deriv[3] = xx[59];
  deriv[4] = xx[60];
  deriv[5] = xx[61];
  deriv[6] = xx[3] - (pm_math_dot3(xx + 1961, xx + 21) + pm_math_dot3(xx + 2092,
    xx + 6));
  deriv[7] = xx[4] - (pm_math_dot3(xx + 2098, xx + 21) + pm_math_dot3(xx + 2101,
    xx + 6));
  deriv[8] = xx[5] - (pm_math_dot3(xx + 2104, xx + 21) + pm_math_dot3(xx + 2047,
    xx + 6));
  deriv[9] = state[10];
  deriv[10] = xx[13];
  deriv[11] = xx[45];
  deriv[12] = xx[46];
  deriv[13] = xx[47];
  deriv[14] = xx[48];
  deriv[15] = xx[9];
  deriv[16] = xx[19];
  deriv[17] = xx[20];
  deriv[18] = xx[62];
  deriv[19] = xx[63];
  deriv[20] = xx[64];
  deriv[21] = xx[65];
  deriv[22] = xx[24];
  deriv[23] = xx[25];
  deriv[24] = xx[26];
  deriv[25] = state[26];
  deriv[26] = xx[27];
  deriv[27] = state[28];
  deriv[28] = xx[14] + xx[673] * xx[2] + xx[539] * (xx[15] - (xx[198] * xx[41] +
    xx[42] * xx[210]) * xx[18]) + (xx[16] + xx[18] * (xx[198] * xx[42] - xx[41] *
    xx[210])) * xx[574];
  deriv[29] = state[30];
  deriv[30] = xx[12] - (xx[484] * xx[54] + xx[588] * xx[67] - xx[591] * xx[66]);
  deriv[31] = state[32];
  deriv[32] = xx[11] - (xx[499] * xx[68] + xx[502] * xx[69] - xx[497] * xx[72]);
  deriv[33] = state[34];
  deriv[34] = xx[10] - (xx[379] * xx[73] - xx[376] * xx[74] - xx[374] * xx[77]);
  deriv[35] = state[36];
  deriv[36] = xx[1] - (xx[359] * (xx[17] - (xx[363] * xx[43] + xx[44] * xx[399])
    * xx[18]) - (xx[28] + xx[18] * (xx[363] * xx[44] - xx[43] * xx[399])) * xx
                       [402] - xx[671] * xx[2]);
  deriv[37] = state[38];
  deriv[38] = - xx[49];
  deriv[39] = xx[86];
  deriv[40] = xx[87];
  deriv[41] = xx[88];
  deriv[42] = xx[89];
  deriv[43] = xx[79] - (pm_math_dot3(xx + 1613, xx + 50) + pm_math_dot3(xx +
    1691, xx + 90));
  deriv[44] = xx[80] - (pm_math_dot3(xx + 1697, xx + 50) + pm_math_dot3(xx +
    1700, xx + 90));
  deriv[45] = xx[81] - (pm_math_dot3(xx + 1703, xx + 50) + pm_math_dot3(xx +
    1625, xx + 90));
  deriv[46] = state[47];
  deriv[47] = - xx[32];
  deriv[48] = xx[109];
  deriv[49] = xx[110];
  deriv[50] = xx[111];
  deriv[51] = xx[112];
  deriv[52] = xx[93] - (pm_math_dot3(xx + 967, xx + 105) + pm_math_dot3(xx +
    1064, xx + 113));
  deriv[53] = xx[94] - (pm_math_dot3(xx + 1067, xx + 105) + pm_math_dot3(xx +
    1073, xx + 113));
  deriv[54] = xx[95] - (pm_math_dot3(xx + 1076, xx + 105) + pm_math_dot3(xx +
    998, xx + 113));
  deriv[55] = state[56];
  deriv[56] = - xx[29];
  deriv[57] = xx[122];
  deriv[58] = xx[123];
  deriv[59] = xx[124];
  deriv[60] = xx[125];
  deriv[61] = xx[116] - (pm_math_dot3(xx + 1783, xx + 119) + pm_math_dot3(xx +
    1861, xx + 126));
  deriv[62] = xx[117] - (pm_math_dot3(xx + 1867, xx + 119) + pm_math_dot3(xx +
    1870, xx + 126));
  deriv[63] = xx[118] - (pm_math_dot3(xx + 1873, xx + 119) + pm_math_dot3(xx +
    1795, xx + 126));
  deriv[64] = state[65];
  deriv[65] = - xx[30];
  deriv[66] = xx[82];
  deriv[67] = xx[83];
  deriv[68] = xx[84];
  deriv[69] = xx[85];
  deriv[70] = xx[129] - (pm_math_dot3(xx + 1932, xx + 36) + pm_math_dot3(xx +
    2012, xx + 55));
  deriv[71] = xx[130] - (pm_math_dot3(xx + 2018, xx + 36) + pm_math_dot3(xx +
    2021, xx + 55));
  deriv[72] = xx[131] - (pm_math_dot3(xx + 2024, xx + 36) + pm_math_dot3(xx +
    1946, xx + 55));
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
