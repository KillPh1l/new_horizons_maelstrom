int Battleship4_walk_count;
float Battleship4_walk_verts[165];
int Battleship4_walk_types[55];
int Battleship4_walk_graph[66];

void Battleship4_walk_init()
{
        Battleship4_walk_count = 55;

        Battleship4_walk_verts[0] = -2.925024;
        Battleship4_walk_verts[1] = 6.875008;
        Battleship4_walk_verts[2] = 15.690728;
        Battleship4_walk_verts[3] = -3.784451;
        Battleship4_walk_verts[4] = 6.78251;
        Battleship4_walk_verts[5] = 11.835018;
        Battleship4_walk_verts[6] = -2.826078;
        Battleship4_walk_verts[7] = 6.73001;
        Battleship4_walk_verts[8] = 7.062812;
        Battleship4_walk_verts[9] = -3.214116;
        Battleship4_walk_verts[10] = 6.710009;
        Battleship4_walk_verts[11] = 2.961762;
        Battleship4_walk_verts[12] = -3.147503;
        Battleship4_walk_verts[13] = 6.68251;
        Battleship4_walk_verts[14] = -1.859478;
        Battleship4_walk_verts[15] = -3.451219;
        Battleship4_walk_verts[16] = 6.657509;
        Battleship4_walk_verts[17] = -5.597045;
        Battleship4_walk_verts[18] = -4.483941;
        Battleship4_walk_verts[19] = 6.650012;
        Battleship4_walk_verts[20] = -7.297519;
        Battleship4_walk_verts[21] = -4.546568;
        Battleship4_walk_verts[22] = 8.610016;
        Battleship4_walk_verts[23] = -10.2451;
        Battleship4_walk_verts[24] = -4.086685;
        Battleship4_walk_verts[25] = 9.005016;
        Battleship4_walk_verts[26] = -13.609074;
        Battleship4_walk_verts[27] = -3.212773;
        Battleship4_walk_verts[28] = 9.727526;
        Battleship4_walk_verts[29] = -20.30155;
        Battleship4_walk_verts[30] = -2.549423;
        Battleship4_walk_verts[31] = 9.917448;
        Battleship4_walk_verts[32] = -22.289131;
        Battleship4_walk_verts[33] = -2.153629;
        Battleship4_walk_verts[34] = 10.705054;
        Battleship4_walk_verts[35] = -29.432758;
        Battleship4_walk_verts[36] = 1.945388;
        Battleship4_walk_verts[37] = 10.580005;
        Battleship4_walk_verts[38] = -27.414803;
        Battleship4_walk_verts[39] = 2.739364;
        Battleship4_walk_verts[40] = 10.007535;
        Battleship4_walk_verts[41] = -23.047277;
        Battleship4_walk_verts[42] = 3.446759;
        Battleship4_walk_verts[43] = 9.750029;
        Battleship4_walk_verts[44] = -20.237646;
        Battleship4_walk_verts[45] = 3.757425;
        Battleship4_walk_verts[46] = 8.972528;
        Battleship4_walk_verts[47] = -14.067489;
        Battleship4_walk_verts[48] = 4.462854;
        Battleship4_walk_verts[49] = 8.517508;
        Battleship4_walk_verts[50] = -10.219934;
        Battleship4_walk_verts[51] = 4.652311;
        Battleship4_walk_verts[52] = 6.580011;
        Battleship4_walk_verts[53] = -7.272544;
        Battleship4_walk_verts[54] = 3.590209;
        Battleship4_walk_verts[55] = 6.665012;
        Battleship4_walk_verts[56] = -5.688292;
        Battleship4_walk_verts[57] = 3.022933;
        Battleship4_walk_verts[58] = 6.622511;
        Battleship4_walk_verts[59] = -1.860672;
        Battleship4_walk_verts[60] = 3.555193;
        Battleship4_walk_verts[61] = 6.68251;
        Battleship4_walk_verts[62] = 2.851782;
        Battleship4_walk_verts[63] = 3.887566;
        Battleship4_walk_verts[64] = 6.687508;
        Battleship4_walk_verts[65] = 7.06431;
        Battleship4_walk_verts[66] = 3.710918;
        Battleship4_walk_verts[67] = 6.817506;
        Battleship4_walk_verts[68] = 11.883159;
        Battleship4_walk_verts[69] = 3.797851;
        Battleship4_walk_verts[70] = 6.892506;
        Battleship4_walk_verts[71] = 16.167738;
        Battleship4_walk_verts[72] = -0.012986;
        Battleship4_walk_verts[73] = 7.055005;
        Battleship4_walk_verts[74] = 14.405025;
        Battleship4_walk_verts[75] = 0.034765;
        Battleship4_walk_verts[76] = 6.892504;
        Battleship4_walk_verts[77] = 16.877687;
        Battleship4_walk_verts[78] = -0.023239;
        Battleship4_walk_verts[79] = 8.900021;
        Battleship4_walk_verts[80] = 19.75868;
        Battleship4_walk_verts[81] = -3.907665;
        Battleship4_walk_verts[82] = 9.135021;
        Battleship4_walk_verts[83] = 22.41873;
        Battleship4_walk_verts[84] = -3.011894;
        Battleship4_walk_verts[85] = 9.502531;
        Battleship4_walk_verts[86] = 27.02561;
        Battleship4_walk_verts[87] = 3.662309;
        Battleship4_walk_verts[88] = 9.515026;
        Battleship4_walk_verts[89] = 26.727829;
        Battleship4_walk_verts[90] = 4.325273;
        Battleship4_walk_verts[91] = 9.085015;
        Battleship4_walk_verts[92] = 22.636517;
        Battleship4_walk_verts[93] = 5.176039;
        Battleship4_walk_verts[94] = 8.820008;
        Battleship4_walk_verts[95] = 18.599112;
        Battleship4_walk_verts[96] = -4.01543;
        Battleship4_walk_verts[97] = 8.825006;
        Battleship4_walk_verts[98] = 18.568312;
        Battleship4_walk_verts[99] = -0.12147;
        Battleship4_walk_verts[100] = 8.86752;
        Battleship4_walk_verts[101] = -11.189084;
        Battleship4_walk_verts[102] = -0.767656;
        Battleship4_walk_verts[103] = 10.232547;
        Battleship4_walk_verts[104] = -24.784039;
        Battleship4_walk_verts[105] = -5.012194;
        Battleship4_walk_verts[106] = 6.912506;
        Battleship4_walk_verts[107] = 16.199568;
        Battleship4_walk_verts[108] = -5.142035;
        Battleship4_walk_verts[109] = 6.855004;
        Battleship4_walk_verts[110] = 11.806783;
        Battleship4_walk_verts[111] = -5.098755;
        Battleship4_walk_verts[112] = 6.742506;
        Battleship4_walk_verts[113] = 7.018526;
        Battleship4_walk_verts[114] = -4.998235;
        Battleship4_walk_verts[115] = 6.732504;
        Battleship4_walk_verts[116] = 2.793851;
        Battleship4_walk_verts[117] = -4.824679;
        Battleship4_walk_verts[118] = 6.697504;
        Battleship4_walk_verts[119] = -1.897166;
        Battleship4_walk_verts[120] = -4.638213;
        Battleship4_walk_verts[121] = 6.600006;
        Battleship4_walk_verts[122] = -5.698673;
        Battleship4_walk_verts[123] = 4.832036;
        Battleship4_walk_verts[124] = 6.572505;
        Battleship4_walk_verts[125] = -5.5999;
        Battleship4_walk_verts[126] = 4.906153;
        Battleship4_walk_verts[127] = 6.690003;
        Battleship4_walk_verts[128] = -1.857675;
        Battleship4_walk_verts[129] = 5.105394;
        Battleship4_walk_verts[130] = 6.764999;
        Battleship4_walk_verts[131] = 2.843383;
        Battleship4_walk_verts[132] = 5.116727;
        Battleship4_walk_verts[133] = 6.690001;
        Battleship4_walk_verts[134] = 7.011553;
        Battleship4_walk_verts[135] = 5.234734;
        Battleship4_walk_verts[136] = 6.775005;
        Battleship4_walk_verts[137] = 11.850454;
        Battleship4_walk_verts[138] = 5.160199;
        Battleship4_walk_verts[139] = 6.892505;
        Battleship4_walk_verts[140] = 16.276106;
        Battleship4_walk_verts[141] = 5.598176;
        Battleship4_walk_verts[142] = 9.627496;
        Battleship4_walk_verts[143] = -20.299324;
        Battleship4_walk_verts[144] = -5.541359;
        Battleship4_walk_verts[145] = 9.509989;
        Battleship4_walk_verts[146] = -20.315271;
        Battleship4_walk_verts[147] = -2.130981;
        Battleship4_walk_verts[148] = 27.38496;
        Battleship4_walk_verts[149] = -20.247995;
        Battleship4_walk_verts[150] = 1.953325;
        Battleship4_walk_verts[151] = 27.419937;
        Battleship4_walk_verts[152] = -20.033466;
        Battleship4_walk_verts[153] = 7.480866;
        Battleship4_walk_verts[154] = 6.312507;
        Battleship4_walk_verts[155] = -5.621406;
        Battleship4_walk_verts[156] = -7.575206;
        Battleship4_walk_verts[157] = 6.327507;
        Battleship4_walk_verts[158] = -5.635237;
        Battleship4_walk_verts[159] = -2.352844;
        Battleship4_walk_verts[160] = 29.879992;
        Battleship4_walk_verts[161] = -3.933074;
        Battleship4_walk_verts[162] = 2.293225;
        Battleship4_walk_verts[163] = 29.899937;
        Battleship4_walk_verts[164] = -3.950534;

        Battleship4_walk_types[0] = 0;
        Battleship4_walk_types[1] = 0;
        Battleship4_walk_types[2] = 0;
        Battleship4_walk_types[3] = 0;
        Battleship4_walk_types[4] = 0;
        Battleship4_walk_types[5] = 0;
        Battleship4_walk_types[6] = 0;
        Battleship4_walk_types[7] = 0;
        Battleship4_walk_types[8] = 0;
        Battleship4_walk_types[9] = 0;
        Battleship4_walk_types[10] = 0;
        Battleship4_walk_types[11] = 0;
        Battleship4_walk_types[12] = 0;
        Battleship4_walk_types[13] = 0;
        Battleship4_walk_types[14] = 0;
        Battleship4_walk_types[15] = 0;
        Battleship4_walk_types[16] = 0;
        Battleship4_walk_types[17] = 0;
        Battleship4_walk_types[18] = 0;
        Battleship4_walk_types[19] = 0;
        Battleship4_walk_types[20] = 0;
        Battleship4_walk_types[21] = 0;
        Battleship4_walk_types[22] = 0;
        Battleship4_walk_types[23] = 0;
        Battleship4_walk_types[24] = 0;
        Battleship4_walk_types[25] = 0;
        Battleship4_walk_types[26] = 0;
        Battleship4_walk_types[27] = 0;
        Battleship4_walk_types[28] = 0;
        Battleship4_walk_types[29] = 0;
        Battleship4_walk_types[30] = 0;
        Battleship4_walk_types[31] = 0;
        Battleship4_walk_types[32] = 0;
        Battleship4_walk_types[33] = 0;
        Battleship4_walk_types[34] = 0;
        Battleship4_walk_types[35] = 1;
        Battleship4_walk_types[36] = 1;
        Battleship4_walk_types[37] = 1;
        Battleship4_walk_types[38] = 1;
        Battleship4_walk_types[39] = 1;
        Battleship4_walk_types[40] = 1;
        Battleship4_walk_types[41] = 2;
        Battleship4_walk_types[42] = 2;
        Battleship4_walk_types[43] = 2;
        Battleship4_walk_types[44] = 2;
        Battleship4_walk_types[45] = 2;
        Battleship4_walk_types[46] = 2;
        Battleship4_walk_types[47] = 5;
        Battleship4_walk_types[48] = 5;
        Battleship4_walk_types[49] = 4;
        Battleship4_walk_types[50] = 4;
        Battleship4_walk_types[51] = 5;
        Battleship4_walk_types[52] = 5;
        Battleship4_walk_types[53] = 4;
        Battleship4_walk_types[54] = 4;

        Battleship4_walk_graph[0] = (1)*256 + (0);
        Battleship4_walk_graph[1] = (1)*256 + (2);
        Battleship4_walk_graph[2] = (3)*256 + (2);
        Battleship4_walk_graph[3] = (3)*256 + (4);
        Battleship4_walk_graph[4] = (5)*256 + (4);
        Battleship4_walk_graph[5] = (5)*256 + (6);
        Battleship4_walk_graph[6] = (7)*256 + (6);
        Battleship4_walk_graph[7] = (7)*256 + (8);
        Battleship4_walk_graph[8] = (9)*256 + (8);
        Battleship4_walk_graph[9] = (9)*256 + (10);
        Battleship4_walk_graph[10] = (11)*256 + (10);
        Battleship4_walk_graph[11] = (11)*256 + (12);
        Battleship4_walk_graph[12] = (13)*256 + (12);
        Battleship4_walk_graph[13] = (13)*256 + (14);
        Battleship4_walk_graph[14] = (15)*256 + (14);
        Battleship4_walk_graph[15] = (15)*256 + (16);
        Battleship4_walk_graph[16] = (17)*256 + (16);
        Battleship4_walk_graph[17] = (17)*256 + (18);
        Battleship4_walk_graph[18] = (19)*256 + (18);
        Battleship4_walk_graph[19] = (19)*256 + (20);
        Battleship4_walk_graph[20] = (21)*256 + (20);
        Battleship4_walk_graph[21] = (21)*256 + (22);
        Battleship4_walk_graph[22] = (23)*256 + (22);
        Battleship4_walk_graph[23] = (23)*256 + (24);
        Battleship4_walk_graph[24] = (25)*256 + (24);
        Battleship4_walk_graph[25] = (25)*256 + (26);
        Battleship4_walk_graph[26] = (27)*256 + (26);
        Battleship4_walk_graph[27] = (27)*256 + (28);
        Battleship4_walk_graph[28] = (29)*256 + (28);
        Battleship4_walk_graph[29] = (29)*256 + (30);
        Battleship4_walk_graph[30] = (31)*256 + (30);
        Battleship4_walk_graph[31] = (30)*256 + (26);
        Battleship4_walk_graph[32] = (0)*256 + (24);
        Battleship4_walk_graph[33] = (32)*256 + (27);
        Battleship4_walk_graph[34] = (15)*256 + (33);
        Battleship4_walk_graph[35] = (8)*256 + (33);
        Battleship4_walk_graph[36] = (34)*256 + (10);
        Battleship4_walk_graph[37] = (34)*256 + (13);
        Battleship4_walk_graph[38] = (1)*256 + (22);
        Battleship4_walk_graph[39] = (3)*256 + (19);
        Battleship4_walk_graph[40] = (4)*256 + (20);
        Battleship4_walk_graph[41] = (5)*256 + (18);
        Battleship4_walk_graph[42] = (11)*256 + (34);
        Battleship4_walk_graph[43] = (12)*256 + (34);
        Battleship4_walk_graph[44] = (35)*256 + (0);
        Battleship4_walk_graph[45] = (36)*256 + (1);
        Battleship4_walk_graph[46] = (37)*256 + (2);
        Battleship4_walk_graph[47] = (38)*256 + (3);
        Battleship4_walk_graph[48] = (39)*256 + (4);
        Battleship4_walk_graph[49] = (40)*256 + (5);
        Battleship4_walk_graph[50] = (41)*256 + (18);
        Battleship4_walk_graph[51] = (42)*256 + (19);
        Battleship4_walk_graph[52] = (43)*256 + (20);
        Battleship4_walk_graph[53] = (44)*256 + (21);
        Battleship4_walk_graph[54] = (45)*256 + (22);
        Battleship4_walk_graph[55] = (46)*256 + (23);
        Battleship4_walk_graph[56] = (24)*256 + (2);
        Battleship4_walk_graph[57] = (24)*256 + (21);
        Battleship4_walk_graph[58] = (41)*256 + (51);
        Battleship4_walk_graph[59] = (54)*256 + (51);
        Battleship4_walk_graph[60] = (53)*256 + (52);
        Battleship4_walk_graph[61] = (40)*256 + (52);
        Battleship4_walk_graph[62] = (9)*256 + (48);
        Battleship4_walk_graph[63] = (49)*256 + (48);
        Battleship4_walk_graph[64] = (50)*256 + (47);
        Battleship4_walk_graph[65] = (14)*256 + (47);
}
