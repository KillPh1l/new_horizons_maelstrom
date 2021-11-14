int BrigQeen_walk_count;
float BrigQeen_walk_verts[141];
int BrigQeen_walk_types[47];
int BrigQeen_walk_graph[50];

void BrigQeen_walk_init()
{
        BrigQeen_walk_count = 47;

        BrigQeen_walk_verts[0] = 1.208756;
        BrigQeen_walk_verts[1] = 1.592418;
        BrigQeen_walk_verts[2] = 5.873392;
        BrigQeen_walk_verts[3] = 1.13296;
        BrigQeen_walk_verts[4] = 1.597417;
        BrigQeen_walk_verts[5] = 3.641712;
        BrigQeen_walk_verts[6] = 1.198456;
        BrigQeen_walk_verts[7] = 1.607419;
        BrigQeen_walk_verts[8] = 1.337476;
        BrigQeen_walk_verts[9] = 1.049789;
        BrigQeen_walk_verts[10] = 1.65242;
        BrigQeen_walk_verts[11] = -1.04879;
        BrigQeen_walk_verts[12] = 0.807934;
        BrigQeen_walk_verts[13] = 1.739906;
        BrigQeen_walk_verts[14] = -3.327291;
        BrigQeen_walk_verts[15] = 0.338521;
        BrigQeen_walk_verts[16] = 1.847402;
        BrigQeen_walk_verts[17] = -6.350386;
        BrigQeen_walk_verts[18] = -1.058853;
        BrigQeen_walk_verts[19] = 1.582402;
        BrigQeen_walk_verts[20] = 5.856463;
        BrigQeen_walk_verts[21] = -1.442268;
        BrigQeen_walk_verts[22] = 1.997409;
        BrigQeen_walk_verts[23] = 3.729317;
        BrigQeen_walk_verts[24] = -1.315445;
        BrigQeen_walk_verts[25] = 1.537404;
        BrigQeen_walk_verts[26] = 1.325771;
        BrigQeen_walk_verts[27] = -1.163525;
        BrigQeen_walk_verts[28] = 1.634904;
        BrigQeen_walk_verts[29] = -1.002861;
        BrigQeen_walk_verts[30] = -0.777185;
        BrigQeen_walk_verts[31] = 1.674905;
        BrigQeen_walk_verts[32] = -3.354386;
        BrigQeen_walk_verts[33] = -0.463749;
        BrigQeen_walk_verts[34] = 1.82754;
        BrigQeen_walk_verts[35] = -6.337849;
        BrigQeen_walk_verts[36] = 1.437199;
        BrigQeen_walk_verts[37] = 3.487554;
        BrigQeen_walk_verts[38] = -10.010715;
        BrigQeen_walk_verts[39] = -0.822346;
        BrigQeen_walk_verts[40] = 3.570049;
        BrigQeen_walk_verts[41] = -11.023941;
        BrigQeen_walk_verts[42] = 0.608547;
        BrigQeen_walk_verts[43] = 3.555052;
        BrigQeen_walk_verts[44] = -10.935415;
        BrigQeen_walk_verts[45] = 1.960475;
        BrigQeen_walk_verts[46] = 1.747549;
        BrigQeen_walk_verts[47] = -4.82597;
        BrigQeen_walk_verts[48] = 3.915004;
        BrigQeen_walk_verts[49] = 3.23758;
        BrigQeen_walk_verts[50] = -5.991224;
        BrigQeen_walk_verts[51] = 1.119011;
        BrigQeen_walk_verts[52] = 13.000304;
        BrigQeen_walk_verts[53] = -5.177069;
        BrigQeen_walk_verts[54] = -2.054247;
        BrigQeen_walk_verts[55] = 1.702519;
        BrigQeen_walk_verts[56] = -4.79262;
        BrigQeen_walk_verts[57] = -3.929027;
        BrigQeen_walk_verts[58] = 3.045043;
        BrigQeen_walk_verts[59] = -5.676173;
        BrigQeen_walk_verts[60] = -1.141238;
        BrigQeen_walk_verts[61] = 12.93012;
        BrigQeen_walk_verts[62] = -5.20513;
        BrigQeen_walk_verts[63] = 1.184844;
        BrigQeen_walk_verts[64] = 1.797519;
        BrigQeen_walk_verts[65] = -6.038548;
        BrigQeen_walk_verts[66] = 1.505944;
        BrigQeen_walk_verts[67] = 1.665017;
        BrigQeen_walk_verts[68] = -3.394521;
        BrigQeen_walk_verts[69] = 1.702916;
        BrigQeen_walk_verts[70] = 1.71252;
        BrigQeen_walk_verts[71] = -1.158391;
        BrigQeen_walk_verts[72] = 1.879678;
        BrigQeen_walk_verts[73] = 1.66002;
        BrigQeen_walk_verts[74] = 1.20349;
        BrigQeen_walk_verts[75] = 1.868685;
        BrigQeen_walk_verts[76] = 1.657519;
        BrigQeen_walk_verts[77] = 3.660722;
        BrigQeen_walk_verts[78] = 2.102323;
        BrigQeen_walk_verts[79] = 1.572517;
        BrigQeen_walk_verts[80] = 6.088327;
        BrigQeen_walk_verts[81] = -1.215882;
        BrigQeen_walk_verts[82] = 1.837515;
        BrigQeen_walk_verts[83] = -6.025061;
        BrigQeen_walk_verts[84] = -1.523965;
        BrigQeen_walk_verts[85] = 1.752518;
        BrigQeen_walk_verts[86] = -3.512709;
        BrigQeen_walk_verts[87] = -1.883669;
        BrigQeen_walk_verts[88] = 1.602519;
        BrigQeen_walk_verts[89] = -1.068772;
        BrigQeen_walk_verts[90] = -2.104821;
        BrigQeen_walk_verts[91] = 1.590019;
        BrigQeen_walk_verts[92] = 1.312019;
        BrigQeen_walk_verts[93] = -2.104666;
        BrigQeen_walk_verts[94] = 1.555019;
        BrigQeen_walk_verts[95] = 3.716429;
        BrigQeen_walk_verts[96] = -2.139235;
        BrigQeen_walk_verts[97] = 1.592516;
        BrigQeen_walk_verts[98] = 6.082392;
        BrigQeen_walk_verts[99] = 2.147663;
        BrigQeen_walk_verts[100] = 2.072531;
        BrigQeen_walk_verts[101] = -7.774885;
        BrigQeen_walk_verts[102] = -0.881639;
        BrigQeen_walk_verts[103] = 3.752515;
        BrigQeen_walk_verts[104] = -13.306099;
        BrigQeen_walk_verts[105] = 0.792643;
        BrigQeen_walk_verts[106] = 3.702518;
        BrigQeen_walk_verts[107] = -13.348383;
        BrigQeen_walk_verts[108] = -1.747602;
        BrigQeen_walk_verts[109] = 3.56502;
        BrigQeen_walk_verts[110] = -10.033026;
        BrigQeen_walk_verts[111] = -2.090137;
        BrigQeen_walk_verts[112] = 2.117522;
        BrigQeen_walk_verts[113] = -7.522536;
        BrigQeen_walk_verts[114] = 0.940282;
        BrigQeen_walk_verts[115] = 1.692514;
        BrigQeen_walk_verts[116] = 8.01016;
        BrigQeen_walk_verts[117] = -0.858465;
        BrigQeen_walk_verts[118] = 1.660012;
        BrigQeen_walk_verts[119] = 7.971786;
        BrigQeen_walk_verts[120] = 4.367848;
        BrigQeen_walk_verts[121] = 2.905041;
        BrigQeen_walk_verts[122] = 7.283028;
        BrigQeen_walk_verts[123] = 0.907213;
        BrigQeen_walk_verts[124] = 12.349977;
        BrigQeen_walk_verts[125] = 6.681509;
        BrigQeen_walk_verts[126] = -0.956636;
        BrigQeen_walk_verts[127] = 12.325108;
        BrigQeen_walk_verts[128] = 6.669388;
        BrigQeen_walk_verts[129] = -4.532334;
        BrigQeen_walk_verts[130] = 2.777522;
        BrigQeen_walk_verts[131] = 7.309257;
        BrigQeen_walk_verts[132] = -1.717358;
        BrigQeen_walk_verts[133] = 1.68744;
        BrigQeen_walk_verts[134] = 8.424866;
        BrigQeen_walk_verts[135] = 1.720159;
        BrigQeen_walk_verts[136] = 1.707437;
        BrigQeen_walk_verts[137] = 8.353951;
        BrigQeen_walk_verts[138] = -0.082312;
        BrigQeen_walk_verts[139] = 1.424929;
        BrigQeen_walk_verts[140] = -9.830254;

        BrigQeen_walk_types[0] = 0;
        BrigQeen_walk_types[1] = 0;
        BrigQeen_walk_types[2] = 0;
        BrigQeen_walk_types[3] = 0;
        BrigQeen_walk_types[4] = 0;
        BrigQeen_walk_types[5] = 0;
        BrigQeen_walk_types[6] = 0;
        BrigQeen_walk_types[7] = 0;
        BrigQeen_walk_types[8] = 0;
        BrigQeen_walk_types[9] = 0;
        BrigQeen_walk_types[10] = 0;
        BrigQeen_walk_types[11] = 0;
        BrigQeen_walk_types[12] = 0;
        BrigQeen_walk_types[13] = 0;
        BrigQeen_walk_types[14] = 0;
        BrigQeen_walk_types[15] = 5;
        BrigQeen_walk_types[16] = 5;
        BrigQeen_walk_types[17] = 4;
        BrigQeen_walk_types[18] = 5;
        BrigQeen_walk_types[19] = 5;
        BrigQeen_walk_types[20] = 4;
        BrigQeen_walk_types[21] = 2;
        BrigQeen_walk_types[22] = 2;
        BrigQeen_walk_types[23] = 2;
        BrigQeen_walk_types[24] = 2;
        BrigQeen_walk_types[25] = 2;
        BrigQeen_walk_types[26] = 2;
        BrigQeen_walk_types[27] = 1;
        BrigQeen_walk_types[28] = 1;
        BrigQeen_walk_types[29] = 1;
        BrigQeen_walk_types[30] = 1;
        BrigQeen_walk_types[31] = 1;
        BrigQeen_walk_types[32] = 1;
        BrigQeen_walk_types[33] = 0;
        BrigQeen_walk_types[34] = 0;
        BrigQeen_walk_types[35] = 0;
        BrigQeen_walk_types[36] = 0;
        BrigQeen_walk_types[37] = 0;
        BrigQeen_walk_types[38] = 0;
        BrigQeen_walk_types[39] = 0;
        BrigQeen_walk_types[40] = 5;
        BrigQeen_walk_types[41] = 6;
        BrigQeen_walk_types[42] = 6;
        BrigQeen_walk_types[43] = 5;
        BrigQeen_walk_types[44] = 1;
        BrigQeen_walk_types[45] = 0;
        BrigQeen_walk_types[46] = 0;

        BrigQeen_walk_graph[0] = (0)*256 + (1);
        BrigQeen_walk_graph[1] = (1)*256 + (2);
        BrigQeen_walk_graph[2] = (2)*256 + (3);
        BrigQeen_walk_graph[3] = (3)*256 + (4);
        BrigQeen_walk_graph[4] = (4)*256 + (5);
        BrigQeen_walk_graph[5] = (7)*256 + (6);
        BrigQeen_walk_graph[6] = (8)*256 + (7);
        BrigQeen_walk_graph[7] = (9)*256 + (8);
        BrigQeen_walk_graph[8] = (10)*256 + (9);
        BrigQeen_walk_graph[9] = (11)*256 + (10);
        BrigQeen_walk_graph[10] = (2)*256 + (8);
        BrigQeen_walk_graph[11] = (12)*256 + (14);
        BrigQeen_walk_graph[12] = (14)*256 + (13);
        BrigQeen_walk_graph[13] = (5)*256 + (15);
        BrigQeen_walk_graph[14] = (16)*256 + (15);
        BrigQeen_walk_graph[15] = (16)*256 + (17);
        BrigQeen_walk_graph[16] = (18)*256 + (11);
        BrigQeen_walk_graph[17] = (18)*256 + (19);
        BrigQeen_walk_graph[18] = (20)*256 + (19);
        BrigQeen_walk_graph[19] = (5)*256 + (21);
        BrigQeen_walk_graph[20] = (4)*256 + (22);
        BrigQeen_walk_graph[21] = (3)*256 + (23);
        BrigQeen_walk_graph[22] = (2)*256 + (24);
        BrigQeen_walk_graph[23] = (1)*256 + (25);
        BrigQeen_walk_graph[24] = (0)*256 + (26);
        BrigQeen_walk_graph[25] = (11)*256 + (27);
        BrigQeen_walk_graph[26] = (10)*256 + (28);
        BrigQeen_walk_graph[27] = (9)*256 + (29);
        BrigQeen_walk_graph[28] = (8)*256 + (30);
        BrigQeen_walk_graph[29] = (7)*256 + (31);
        BrigQeen_walk_graph[30] = (6)*256 + (32);
        BrigQeen_walk_graph[31] = (33)*256 + (5);
        BrigQeen_walk_graph[32] = (37)*256 + (11);
        BrigQeen_walk_graph[33] = (33)*256 + (12);
        BrigQeen_walk_graph[34] = (37)*256 + (36);
        BrigQeen_walk_graph[35] = (13)*256 + (36);
        BrigQeen_walk_graph[36] = (13)*256 + (34);
        BrigQeen_walk_graph[37] = (35)*256 + (34);
        BrigQeen_walk_graph[38] = (35)*256 + (14);
        BrigQeen_walk_graph[39] = (40)*256 + (26);
        BrigQeen_walk_graph[40] = (40)*256 + (41);
        BrigQeen_walk_graph[41] = (42)*256 + (43);
        BrigQeen_walk_graph[42] = (32)*256 + (43);
        BrigQeen_walk_graph[43] = (0)*256 + (38);
        BrigQeen_walk_graph[44] = (6)*256 + (39);
        BrigQeen_walk_graph[45] = (11)*256 + (46);
        BrigQeen_walk_graph[46] = (5)*256 + (46);
        BrigQeen_walk_graph[47] = (5)*256 + (46);
        BrigQeen_walk_graph[48] = (45)*256 + (38);
        BrigQeen_walk_graph[49] = (44)*256 + (39);
}
