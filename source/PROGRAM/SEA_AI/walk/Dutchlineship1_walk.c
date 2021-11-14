int Dutchlineship1_walk_count;
float Dutchlineship1_walk_verts[192];
int Dutchlineship1_walk_types[64];
int Dutchlineship1_walk_graph[69];

void Dutchlineship1_walk_init()
{
	Dutchlineship1_walk_count = 64;

	Dutchlineship1_walk_verts[0 ] =  -2.679804;               0
	Dutchlineship1_walk_verts[1 ] = 3.127535;
	Dutchlineship1_walk_verts[2 ] = 4.408100;
	Dutchlineship1_walk_verts[3 ] = -2.869061;               1
	Dutchlineship1_walk_verts[4 ] = 3.095021;
	Dutchlineship1_walk_verts[5 ] = 7.537737;
	Dutchlineship1_walk_verts[6 ] =  -2.591043;           2
	Dutchlineship1_walk_verts[7 ] = 3.082536;
	Dutchlineship1_walk_verts[8 ] = 10.990243;
	Dutchlineship1_walk_verts[9 ] = -0.086831;            3
	Dutchlineship1_walk_verts[10] = 4.497507;
	Dutchlineship1_walk_verts[11] = 14.910428;
	Dutchlineship1_walk_verts[12] =  -0.038761;            4
	Dutchlineship1_walk_verts[13] = 5.800017;
	Dutchlineship1_walk_verts[14] = 16.642767;
	Dutchlineship1_walk_verts[15] = 2.888787;           5
	Dutchlineship1_walk_verts[16] = 5.810015;
	Dutchlineship1_walk_verts[17] = 16.966261;
	Dutchlineship1_walk_verts[18] = 2.799448,5;           6
	Dutchlineship1_walk_verts[19] = 5.780058;
	Dutchlineship1_walk_verts[20] = 14.034285;
	Dutchlineship1_walk_verts[21] =  -0.100957;            7
	Dutchlineship1_walk_verts[22] = 3.122536;
	Dutchlineship1_walk_verts[23] = 15.080273;
	Dutchlineship1_walk_verts[24] = 2.966797;            8
	Dutchlineship1_walk_verts[25] = 3.087533;
	Dutchlineship1_walk_verts[26] = 8.083533;
	Dutchlineship1_walk_verts[27] = 3.207860;           9
	Dutchlineship1_walk_verts[28] = 3.125033;
	Dutchlineship1_walk_verts[29] = 4.673064;
	Dutchlineship1_walk_verts[30] = 3.143505;           10
	Dutchlineship1_walk_verts[31] = 3.140035;
	Dutchlineship1_walk_verts[32] = 0.865133;
	Dutchlineship1_walk_verts[33] = 2.299615;            11
	Dutchlineship1_walk_verts[34] = 3.270001;
	Dutchlineship1_walk_verts[35] = -2.021239;
	Dutchlineship1_walk_verts[36] = 1.325094;            12
	Dutchlineship1_walk_verts[37] = 3.287486;
	Dutchlineship1_walk_verts[38] = -3.434826;
	Dutchlineship1_walk_verts[39] = 2.471522;           13
	Dutchlineship1_walk_verts[40] = 5.842482;
	Dutchlineship1_walk_verts[41] = -7.285820;
	Dutchlineship1_walk_verts[42] = 2.324220;               14
	Dutchlineship1_walk_verts[43] = 6.037484;
	Dutchlineship1_walk_verts[44] = -11.451917;
	Dutchlineship1_walk_verts[45] = 2.420761;           15
	Dutchlineship1_walk_verts[46] = 7.605009;
	Dutchlineship1_walk_verts[47] = -13.737892;
	Dutchlineship1_walk_verts[48] =  -0.102577;            16
	Dutchlineship1_walk_verts[49] = 7.885026;
	Dutchlineship1_walk_verts[50] = -19.306860;
	Dutchlineship1_walk_verts[51] = -1.724470;            17
	Dutchlineship1_walk_verts[52] = 7.570014;
	Dutchlineship1_walk_verts[53] = -18.548540;
	Dutchlineship1_walk_verts[54] = -2.410233;           18
	Dutchlineship1_walk_verts[55] = 7.425005;
	Dutchlineship1_walk_verts[56] = -13.804247;
	Dutchlineship1_walk_verts[57] = -2.397780;           19
	Dutchlineship1_walk_verts[58] = 5.977493;
	Dutchlineship1_walk_verts[59] = -11.531957;
	Dutchlineship1_walk_verts[60] = -2.293477;            20
	Dutchlineship1_walk_verts[61] = 5.722495;
	Dutchlineship1_walk_verts[62] = -6.925860;
	Dutchlineship1_walk_verts[63] = -2.645242;               21
	Dutchlineship1_walk_verts[64] = 3.304986;
	Dutchlineship1_walk_verts[65] = -3.133563;
	Dutchlineship1_walk_verts[66] = -2.771898;               22
	Dutchlineship1_walk_verts[67] = 3.245001;
	Dutchlineship1_walk_verts[68] = -0.701172;
	Dutchlineship1_walk_verts[69] = -2.729494;               23
	Dutchlineship1_walk_verts[70] = 3.250019;
	Dutchlineship1_walk_verts[71] = 1.822589;
	Dutchlineship1_walk_verts[72] = -3.370303;              24
	Dutchlineship1_walk_verts[73] = 3.230019;
	Dutchlineship1_walk_verts[74] = -4.845841;
	Dutchlineship1_walk_verts[75] = -3.155056;            25
	Dutchlineship1_walk_verts[76] = 3.062519;
	Dutchlineship1_walk_verts[77] = 17.541368;
	Dutchlineship1_walk_verts[78] = 2.680096;           26
	Dutchlineship1_walk_verts[79] = 3.165019;
	Dutchlineship1_walk_verts[80] = -4.742320;
	Dutchlineship1_walk_verts[81] = 3.001326;             27
	Dutchlineship1_walk_verts[82] = 3.080016;
	Dutchlineship1_walk_verts[83] = 21.990961;
	Dutchlineship1_walk_verts[84] = -2.913264;            28
	Dutchlineship1_walk_verts[85] = 5.872469;
	Dutchlineship1_walk_verts[86] = 18.697081;
	Dutchlineship1_walk_verts[87] = 2.752301;             29
	Dutchlineship1_walk_verts[88] = 5.922525;
	Dutchlineship1_walk_verts[89] = 19.030954;
	Dutchlineship1_walk_verts[90] = 2.4184948;            30
	Dutchlineship1_walk_verts[91] = 3.347467;
	Dutchlineship1_walk_verts[92] = -4.263370;
	Dutchlineship1_walk_verts[93] = -2.549013;               31
	Dutchlineship1_walk_verts[94] = 3.334973;
	Dutchlineship1_walk_verts[95] = -4.675315;
	Dutchlineship1_walk_verts[96] =  -2.448146;               32
	Dutchlineship1_walk_verts[97] = 5.842472;
	Dutchlineship1_walk_verts[98] = -6.975585;
	Dutchlineship1_walk_verts[99] =  2.346055;               33
	Dutchlineship1_walk_verts[100] = 5.717472;
	Dutchlineship1_walk_verts[101] = -6.815188;
	Dutchlineship1_walk_verts[102] =  -6.755287;              34
	Dutchlineship1_walk_verts[103] = 3.672460;
	Dutchlineship1_walk_verts[104] = -7.510232;
	Dutchlineship1_walk_verts[105] = 6.918740;              35
	Dutchlineship1_walk_verts[106] = 3.349964;
	Dutchlineship1_walk_verts[107] = -7.337540;
	Dutchlineship1_walk_verts[108] = -1.757373;              36
	Dutchlineship1_walk_verts[109] = 21.772608;
	Dutchlineship1_walk_verts[110] = -3.619220;
	Dutchlineship1_walk_verts[111] = 1.872705;              37
	Dutchlineship1_walk_verts[112] = 21.880123;
	Dutchlineship1_walk_verts[113] = -3.735352;
	Dutchlineship1_walk_verts[114] = -4.785246;        38
	Dutchlineship1_walk_verts[115] = 3.377497;
	Dutchlineship1_walk_verts[116] = 17.247160;
	Dutchlineship1_walk_verts[117] = 4.817630;              39
	Dutchlineship1_walk_verts[118] = 3.197501;
	Dutchlineship1_walk_verts[119] = 17.566225;
	Dutchlineship1_walk_verts[120] = -1.762131;              40
	Dutchlineship1_walk_verts[121] = 19.077444;
	Dutchlineship1_walk_verts[122] = 19.631550;
	Dutchlineship1_walk_verts[123] =1.965568;        41
	Dutchlineship1_walk_verts[124] = 18.805033;
	Dutchlineship1_walk_verts[125] = 19.451216;
	Dutchlineship1_walk_verts[126] = -3.462143;        42
	Dutchlineship1_walk_verts[127] = 3.280057;
	Dutchlineship1_walk_verts[128] = 0.852595;
	Dutchlineship1_walk_verts[129] = -3.561306;              43
	Dutchlineship1_walk_verts[130] = 3.352538;
	Dutchlineship1_walk_verts[131] = 5.181839;
	Dutchlineship1_walk_verts[132] = -3.467880;              44
	Dutchlineship1_walk_verts[133] = 3.237410;
	Dutchlineship1_walk_verts[134] = 9.652301;
	Dutchlineship1_walk_verts[135] = -3.557331;        45
	Dutchlineship1_walk_verts[136] = 5.819953;
	Dutchlineship1_walk_verts[137] = 15.373241;
	Dutchlineship1_walk_verts[138] =  -3.185317;        46
	Dutchlineship1_walk_verts[139] = 5.919964;
	Dutchlineship1_walk_verts[140] = 19.310387;
	Dutchlineship1_walk_verts[141] = -3.397465;        47
	Dutchlineship1_walk_verts[142] = 3.212410;
	Dutchlineship1_walk_verts[143] = 14.586411;
	Dutchlineship1_walk_verts[144] =  3.175966;        48
	Dutchlineship1_walk_verts[145] = 3.402516;
	Dutchlineship1_walk_verts[146] = 14.402841;
	Dutchlineship1_walk_verts[147] = -3.520072;        49
	Dutchlineship1_walk_verts[148] = 5.792481;
	Dutchlineship1_walk_verts[149] = -6.202875;
	Dutchlineship1_walk_verts[150] = -3.271440;        50
	Dutchlineship1_walk_verts[151] = 6.097475;
	Dutchlineship1_walk_verts[152] = -8.657883;
	Dutchlineship1_walk_verts[153] = -3.088536;        51
	Dutchlineship1_walk_verts[154] = 6.304981;
	Dutchlineship1_walk_verts[155] = -11.199321;
	Dutchlineship1_walk_verts[156] =  -2.392891;        52
	Dutchlineship1_walk_verts[157] = 7.542504;
	Dutchlineship1_walk_verts[158] = -15.922865;
	Dutchlineship1_walk_verts[159] = -2.020756;        53
	Dutchlineship1_walk_verts[160] = 7.835005;
	Dutchlineship1_walk_verts[161] = -18.917994;
	Dutchlineship1_walk_verts[162] =  2.125299;        54
	Dutchlineship1_walk_verts[163] = 7.817496;
	Dutchlineship1_walk_verts[164] = -18.996168;
	Dutchlineship1_walk_verts[165] = 2.384536;        55
	Dutchlineship1_walk_verts[166] = 7.692491;
	Dutchlineship1_walk_verts[167] = -16.015701;
	Dutchlineship1_walk_verts[168] =  3.041215;        56
	Dutchlineship1_walk_verts[169] = 6.105028;
	Dutchlineship1_walk_verts[170] = -11.319105;
	Dutchlineship1_walk_verts[171] = 3.301850;        57
	Dutchlineship1_walk_verts[172] = 5.897516;
	Dutchlineship1_walk_verts[173] = -8.637999;
	Dutchlineship1_walk_verts[174] = 3.435284;        58
	Dutchlineship1_walk_verts[175] = 5.795030;
	Dutchlineship1_walk_verts[176] = -6.212831;
	Dutchlineship1_walk_verts[177] =  3.324744;        59
	Dutchlineship1_walk_verts[178] = 3.262412;
	Dutchlineship1_walk_verts[179] = 0.649613;
	Dutchlineship1_walk_verts[180] = 3.427159;        60
	Dutchlineship1_walk_verts[181] = 3.204908;
	Dutchlineship1_walk_verts[182] = 5.164800;
	Dutchlineship1_walk_verts[183] =  3.441301;        61
	Dutchlineship1_walk_verts[184] = 3.072496;
	Dutchlineship1_walk_verts[185] = 10.143003;
	Dutchlineship1_walk_verts[186] = 2.900134;        62
	Dutchlineship1_walk_verts[187] = 3.404916;
	Dutchlineship1_walk_verts[188] = 20.114265;
	Dutchlineship1_walk_verts[189] =  -2.854225;        63
	Dutchlineship1_walk_verts[190] = 3.447412;
	Dutchlineship1_walk_verts[191] = 19.544767;

	Dutchlineship1_walk_types[0 ] = 0;
	Dutchlineship1_walk_types[1 ] = 0;
	Dutchlineship1_walk_types[2 ] = 0;
	Dutchlineship1_walk_types[3 ] = 0;
	Dutchlineship1_walk_types[4 ] = 0;
	Dutchlineship1_walk_types[5 ] = 0;
	Dutchlineship1_walk_types[6 ] = 0;
	Dutchlineship1_walk_types[7 ] = 0;
	Dutchlineship1_walk_types[8 ] = 0;
	Dutchlineship1_walk_types[9 ] = 0;
	Dutchlineship1_walk_types[10] = 0;
	Dutchlineship1_walk_types[11] = 0;
	Dutchlineship1_walk_types[12] = 0;
	Dutchlineship1_walk_types[13] = 0;
	Dutchlineship1_walk_types[14] = 0;
	Dutchlineship1_walk_types[15] = 0;
	Dutchlineship1_walk_types[16] = 3;
	Dutchlineship1_walk_types[17] = 0;
	Dutchlineship1_walk_types[18] = 0;
	Dutchlineship1_walk_types[19] = 0;
	Dutchlineship1_walk_types[20] = 0;
	Dutchlineship1_walk_types[21] = 0;
	Dutchlineship1_walk_types[22] = 0;
	Dutchlineship1_walk_types[23] = 0;
	Dutchlineship1_walk_types[24] = 1;
	Dutchlineship1_walk_types[25] = 1;
	Dutchlineship1_walk_types[26] = 1;
	Dutchlineship1_walk_types[27] = 1;
	Dutchlineship1_walk_types[28] = 1;
	Dutchlineship1_walk_types[29] = 1;
	Dutchlineship1_walk_types[30] = 0;
	Dutchlineship1_walk_types[31] = 0;
	Dutchlineship1_walk_types[32] = 0;
	Dutchlineship1_walk_types[33] = 0;
	Dutchlineship1_walk_types[34] = 5;
	Dutchlineship1_walk_types[35] = 5;
	Dutchlineship1_walk_types[36] = 4;
	Dutchlineship1_walk_types[37] = 4;
	Dutchlineship1_walk_types[38] = 5;
	Dutchlineship1_walk_types[39] = 5;
	Dutchlineship1_walk_types[40] = 4;
	Dutchlineship1_walk_types[41] = 4;
	Dutchlineship1_walk_types[42] = 1;
	Dutchlineship1_walk_types[43] = 1;
	Dutchlineship1_walk_types[44] = 1;
	Dutchlineship1_walk_types[45] = 1;
	Dutchlineship1_walk_types[46] = 1;
	Dutchlineship1_walk_types[47] = 1;
	Dutchlineship1_walk_types[48] = 1;
	Dutchlineship1_walk_types[49] = 1;
	Dutchlineship1_walk_types[50] = 1;
	Dutchlineship1_walk_types[51] = 1;
	Dutchlineship1_walk_types[52] = 1;
	Dutchlineship1_walk_types[53] = 1;
	Dutchlineship1_walk_types[54] = 1;
	Dutchlineship1_walk_types[55] = 1;
	Dutchlineship1_walk_types[56] = 1;
	Dutchlineship1_walk_types[57] = 1;
	Dutchlineship1_walk_types[58] = 1;
	Dutchlineship1_walk_types[59] = 1;
	Dutchlineship1_walk_types[60] = 1;
	Dutchlineship1_walk_types[61] = 1;
	Dutchlineship1_walk_types[62] = 1;
	Dutchlineship1_walk_types[63] = 1;


      Dutchlineship1_walk_graph[0 ] = ( 0)*256 + ( 1);
	Dutchlineship1_walk_graph[1 ] = ( 1)*256 + ( 2);
	Dutchlineship1_walk_graph[2 ] = ( 1)*256 + (3);
	Dutchlineship1_walk_graph[3 ] = (3)*256 + (4);
	Dutchlineship1_walk_graph[4 ] = ( 4)*256 + ( 5);
	Dutchlineship1_walk_graph[5 ] = ( 5)*256 + ( 6);
	Dutchlineship1_walk_graph[6 ] = ( 6)*256 + (7);
	Dutchlineship1_walk_graph[7 ] = (7)*256 + (8);
	Dutchlineship1_walk_graph[8 ] = (8)*256 + ( 9);
	Dutchlineship1_walk_graph[9 ] = (9)*256 + (10);
	Dutchlineship1_walk_graph[10] = (10)*256 + (11);
	Dutchlineship1_walk_graph[11] = (11)*256 + (12);
	Dutchlineship1_walk_graph[12] = (12)*256 + (13);
	Dutchlineship1_walk_graph[13] = (13)*256 + (14);
	Dutchlineship1_walk_graph[14] = (14)*256 + (15);
	Dutchlineship1_walk_graph[15] = (15)*256 + (15);
	Dutchlineship1_walk_graph[16] = (15)*256 + (16);
	Dutchlineship1_walk_graph[17] = (16)*256 + (17);
	Dutchlineship1_walk_graph[18] = (17)*256 + (18);
	Dutchlineship1_walk_graph[19] = ( 18)*256 + (19);
	Dutchlineship1_walk_graph[20] = ( 19)*256 + (20);
	Dutchlineship1_walk_graph[21] = (20)*256 + (32);
	Dutchlineship1_walk_graph[22] = (21)*256 + (22);
	Dutchlineship1_walk_graph[23] = ( 22)*256 + ( 23);
	Dutchlineship1_walk_graph[24] = ( 23)*256 + ( 0);
	Dutchlineship1_walk_graph[25] = ( 24)*256 + (0);
	Dutchlineship1_walk_graph[26] = (25)*256 + (1);
	Dutchlineship1_walk_graph[27] = (28)*256 + ( 4);
	Dutchlineship1_walk_graph[28] = ( 29)*256 + (5);
	Dutchlineship1_walk_graph[29] = ( 27)*256 + ( 8);
	Dutchlineship1_walk_graph[30] = ( 26)*256 + (9);
	Dutchlineship1_walk_graph[31] = ( 33)*256 + ( 30);
	Dutchlineship1_walk_graph[32] = ( 33)*256 + ( 13);
	Dutchlineship1_walk_graph[33] = ( 31)*256 + ( 32);
	Dutchlineship1_walk_graph[34] = ( 31)*256 + ( 21);
	Dutchlineship1_walk_graph[35] = ( 12)*256 + ( 21);
	Dutchlineship1_walk_graph[36] = (14)*256 + (20);
	Dutchlineship1_walk_graph[37] = (38)*256 + (28);
	Dutchlineship1_walk_graph[38] = (38)*256 + (40);
	Dutchlineship1_walk_graph[39] = (39)*256 + (41);
	Dutchlineship1_walk_graph[40] = (39)*256 + (29);
	Dutchlineship1_walk_graph[41] = (35)*256 + (12);
	Dutchlineship1_walk_graph[42] = (35)*256 + (37);
	Dutchlineship1_walk_graph[43] = (34)*256 + (36);
	Dutchlineship1_walk_graph[44] = (34)*256 + (21);
	Dutchlineship1_walk_graph[45] = (32)*256 + (12);
	Dutchlineship1_walk_graph[46] = (44)*256 + (0);
	Dutchlineship1_walk_graph[47] = (43)*256 + (31);
	Dutchlineship1_walk_graph[48] = (42)*256 + (22);
	Dutchlineship1_walk_graph[49] = (49)*256 + (20);
	Dutchlineship1_walk_graph[50] = (50)*256 + (32);
	Dutchlineship1_walk_graph[51] = (51)*256 + (19);
	Dutchlineship1_walk_graph[52] = (52)*256 + (18);
	Dutchlineship1_walk_graph[53] = (53)*256 + (17);
	Dutchlineship1_walk_graph[54] = (54)*256 + (16);
	Dutchlineship1_walk_graph[55] = (55)*256 + (15);
	Dutchlineship1_walk_graph[56] = (56)*256 + (14);
	Dutchlineship1_walk_graph[57] = (57)*256 + (33);
	Dutchlineship1_walk_graph[58] = (58)*256 + (12);
	Dutchlineship1_walk_graph[59] = (59)*256 + (10);
	Dutchlineship1_walk_graph[60] = (60)*256 + (9);
	Dutchlineship1_walk_graph[61] = (61)*256 + (8);
	Dutchlineship1_walk_graph[62] = (48)*256 + (3);
	Dutchlineship1_walk_graph[63] = (46)*256 + (3);
	Dutchlineship1_walk_graph[64] = (47)*256 + (3);
	Dutchlineship1_walk_graph[65] = (45)*256 + (2);
	Dutchlineship1_walk_graph[66] = (47)*256 + (1);
	Dutchlineship1_walk_graph[67] = (62)*256 + (3);
	Dutchlineship1_walk_graph[68] = (63)*256 + (3);
}
