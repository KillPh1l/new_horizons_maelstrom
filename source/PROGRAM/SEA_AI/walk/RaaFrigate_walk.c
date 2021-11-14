int RaaFrigate_walk_count;
float RaaFrigate_walk_verts[141];
int RaaFrigate_walk_types[47];
int RaaFrigate_walk_graph[56];

void RaaFrigate_walk_init()
{
        RaaFrigate_walk_count = 47;

        RaaFrigate_walk_verts[0] = -0.116366;
        RaaFrigate_walk_verts[1] = 4.40248;
        RaaFrigate_walk_verts[2] = 14.563023;
        RaaFrigate_walk_verts[3] = -0.124645;
        RaaFrigate_walk_verts[4] = 4.429979;
        RaaFrigate_walk_verts[5] = 12.843364;
        RaaFrigate_walk_verts[6] = 2.060179;
        RaaFrigate_walk_verts[7] = 4.224979;
        RaaFrigate_walk_verts[8] = 10.228444;
        RaaFrigate_walk_verts[9] = 2.480121;
        RaaFrigate_walk_verts[10] = 4.189979;
        RaaFrigate_walk_verts[11] = 4.928111;
        RaaFrigate_walk_verts[12] = 2.596357;
        RaaFrigate_walk_verts[13] = 4.177479;
        RaaFrigate_walk_verts[14] = 0.166011;
        RaaFrigate_walk_verts[15] = -0.047245;
        RaaFrigate_walk_verts[16] = 4.399978;
        RaaFrigate_walk_verts[17] = -4.368462;
        RaaFrigate_walk_verts[18] = 0.962276;
        RaaFrigate_walk_verts[19] = 4.522477;
        RaaFrigate_walk_verts[20] = -6.275048;
        RaaFrigate_walk_verts[21] = 1.192152;
        RaaFrigate_walk_verts[22] = 4.534978;
        RaaFrigate_walk_verts[23] = -8.118005;
        RaaFrigate_walk_verts[24] = 0.00168;
        RaaFrigate_walk_verts[25] = 4.582478;
        RaaFrigate_walk_verts[26] = -9.667797;
        RaaFrigate_walk_verts[27] = -0.032564;
        RaaFrigate_walk_verts[28] = 4.68748;
        RaaFrigate_walk_verts[29] = -14.314234;
        RaaFrigate_walk_verts[30] = -0.033863;
        RaaFrigate_walk_verts[31] = 4.789982;
        RaaFrigate_walk_verts[32] = -17.392534;
        RaaFrigate_walk_verts[33] = -0.896964;
        RaaFrigate_walk_verts[34] = 4.73498;
        RaaFrigate_walk_verts[35] = -15.703747;
        RaaFrigate_walk_verts[36] = 0.978475;
        RaaFrigate_walk_verts[37] = 4.699979;
        RaaFrigate_walk_verts[38] = -15.662668;
        RaaFrigate_walk_verts[39] = -1.107036;
        RaaFrigate_walk_verts[40] = 4.477483;
        RaaFrigate_walk_verts[41] = -8.137432;
        RaaFrigate_walk_verts[42] = -0.91943;
        RaaFrigate_walk_verts[43] = 4.442492;
        RaaFrigate_walk_verts[44] = -6.20932;
        RaaFrigate_walk_verts[45] = -2.624952;
        RaaFrigate_walk_verts[46] = 4.145016;
        RaaFrigate_walk_verts[47] = 0.084801;
        RaaFrigate_walk_verts[48] = -2.436056;
        RaaFrigate_walk_verts[49] = 4.119995;
        RaaFrigate_walk_verts[50] = 4.90727;
        RaaFrigate_walk_verts[51] = -1.589133;
        RaaFrigate_walk_verts[52] = 4.097499;
        RaaFrigate_walk_verts[53] = 10.404812;
        RaaFrigate_walk_verts[54] = 4.199976;
        RaaFrigate_walk_verts[55] = 4.477477;
        RaaFrigate_walk_verts[56] = 14.452475;
        RaaFrigate_walk_verts[57] = 0.441799;
        RaaFrigate_walk_verts[58] = 20.335012;
        RaaFrigate_walk_verts[59] = 15.951965;
        RaaFrigate_walk_verts[60] = -0.540352;
        RaaFrigate_walk_verts[61] = 20.419994;
        RaaFrigate_walk_verts[62] = 15.935836;
        RaaFrigate_walk_verts[63] = -4.216039;
        RaaFrigate_walk_verts[64] = 4.537475;
        RaaFrigate_walk_verts[65] = 14.184442;
        RaaFrigate_walk_verts[66] = -5.092209;
        RaaFrigate_walk_verts[67] = 4.430019;
        RaaFrigate_walk_verts[68] = -3.484324;
        RaaFrigate_walk_verts[69] = 1.845337;
        RaaFrigate_walk_verts[70] = 4.470007;
        RaaFrigate_walk_verts[71] = -11.603145;
        RaaFrigate_walk_verts[72] = -0.692356;
        RaaFrigate_walk_verts[73] = 21.494923;
        RaaFrigate_walk_verts[74] = -1.85275;
        RaaFrigate_walk_verts[75] = 0.673662;
        RaaFrigate_walk_verts[76] = 21.632416;
        RaaFrigate_walk_verts[77] = -1.832744;
        RaaFrigate_walk_verts[78] = 4.87953;
        RaaFrigate_walk_verts[79] = 4.370017;
        RaaFrigate_walk_verts[80] = -3.561934;
        RaaFrigate_walk_verts[81] = 3.692554;
        RaaFrigate_walk_verts[82] = 5.070013;
        RaaFrigate_walk_verts[83] = -15.033804;
        RaaFrigate_walk_verts[84] = 0.360102;
        RaaFrigate_walk_verts[85] = 17.005003;
        RaaFrigate_walk_verts[86] = -13.869939;
        RaaFrigate_walk_verts[87] = -0.376293;
        RaaFrigate_walk_verts[88] = 16.965031;
        RaaFrigate_walk_verts[89] = -13.86358;
        RaaFrigate_walk_verts[90] = -3.741689;
        RaaFrigate_walk_verts[91] = 5.160009;
        RaaFrigate_walk_verts[92] = -15.051487;
        RaaFrigate_walk_verts[93] = 1.019329;
        RaaFrigate_walk_verts[94] = 4.377512;
        RaaFrigate_walk_verts[95] = 16.074123;
        RaaFrigate_walk_verts[96] = 1.372344;
        RaaFrigate_walk_verts[97] = 4.40251;
        RaaFrigate_walk_verts[98] = 12.563197;
        RaaFrigate_walk_verts[99] = 1.623464;
        RaaFrigate_walk_verts[100] = 4.495014;
        RaaFrigate_walk_verts[101] = -6.167469;
        RaaFrigate_walk_verts[102] = 1.349321;
        RaaFrigate_walk_verts[103] = 4.507512;
        RaaFrigate_walk_verts[104] = -9.743629;
        RaaFrigate_walk_verts[105] = 0.917767;
        RaaFrigate_walk_verts[106] = 4.76501;
        RaaFrigate_walk_verts[107] = -13.862271;
        RaaFrigate_walk_verts[108] = 0.548729;
        RaaFrigate_walk_verts[109] = 4.812509;
        RaaFrigate_walk_verts[110] = -17.548258;
        RaaFrigate_walk_verts[111] = -0.593209;
        RaaFrigate_walk_verts[112] = 4.745009;
        RaaFrigate_walk_verts[113] = -17.591465;
        RaaFrigate_walk_verts[114] = -0.915016;
        RaaFrigate_walk_verts[115] = 4.612511;
        RaaFrigate_walk_verts[116] = -13.788422;
        RaaFrigate_walk_verts[117] = -1.318413;
        RaaFrigate_walk_verts[118] = 4.557509;
        RaaFrigate_walk_verts[119] = -9.81383;
        RaaFrigate_walk_verts[120] = -1.71258;
        RaaFrigate_walk_verts[121] = 4.450009;
        RaaFrigate_walk_verts[122] = -6.228292;
        RaaFrigate_walk_verts[123] = -1.399705;
        RaaFrigate_walk_verts[124] = 4.340011;
        RaaFrigate_walk_verts[125] = 12.622614;
        RaaFrigate_walk_verts[126] = -1.037748;
        RaaFrigate_walk_verts[127] = 4.450006;
        RaaFrigate_walk_verts[128] = 16.074722;
        RaaFrigate_walk_verts[129] = 0.857893;
        RaaFrigate_walk_verts[130] = 4.505009;
        RaaFrigate_walk_verts[131] = -12.139858;
        RaaFrigate_walk_verts[132] = -0.819332;
        RaaFrigate_walk_verts[133] = 2.395018;
        RaaFrigate_walk_verts[134] = -12.184133;
        RaaFrigate_walk_verts[135] = -1.825516;
        RaaFrigate_walk_verts[136] = 2.180008;
        RaaFrigate_walk_verts[137] = -9.208123;
        RaaFrigate_walk_verts[138] = -1.891442;
        RaaFrigate_walk_verts[139] = 4.422507;
        RaaFrigate_walk_verts[140] = -11.563432;

        RaaFrigate_walk_types[0] = 0;
        RaaFrigate_walk_types[1] = 0;
        RaaFrigate_walk_types[2] = 0;
        RaaFrigate_walk_types[3] = 0;
        RaaFrigate_walk_types[4] = 0;
        RaaFrigate_walk_types[5] = 0;
        RaaFrigate_walk_types[6] = 0;
        RaaFrigate_walk_types[7] = 0;
        RaaFrigate_walk_types[8] = 0;
        RaaFrigate_walk_types[9] = 0;
        RaaFrigate_walk_types[10] = 0;
        RaaFrigate_walk_types[11] = 0;
        RaaFrigate_walk_types[12] = 0;
        RaaFrigate_walk_types[13] = 0;
        RaaFrigate_walk_types[14] = 0;
        RaaFrigate_walk_types[15] = 0;
        RaaFrigate_walk_types[16] = 0;
        RaaFrigate_walk_types[17] = 0;
        RaaFrigate_walk_types[18] = 5;
        RaaFrigate_walk_types[19] = 6;
        RaaFrigate_walk_types[20] = 6;
        RaaFrigate_walk_types[21] = 5;
        RaaFrigate_walk_types[22] = 5;
        RaaFrigate_walk_types[23] = 0;
        RaaFrigate_walk_types[24] = 4;
        RaaFrigate_walk_types[25] = 4;
        RaaFrigate_walk_types[26] = 5;
        RaaFrigate_walk_types[27] = 5;
        RaaFrigate_walk_types[28] = 4;
        RaaFrigate_walk_types[29] = 4;
        RaaFrigate_walk_types[30] = 5;
        RaaFrigate_walk_types[31] = 2;
        RaaFrigate_walk_types[32] = 2;
        RaaFrigate_walk_types[33] = 2;
        RaaFrigate_walk_types[34] = 2;
        RaaFrigate_walk_types[35] = 2;
        RaaFrigate_walk_types[36] = 2;
        RaaFrigate_walk_types[37] = 1;
        RaaFrigate_walk_types[38] = 1;
        RaaFrigate_walk_types[39] = 1;
        RaaFrigate_walk_types[40] = 1;
        RaaFrigate_walk_types[41] = 1;
        RaaFrigate_walk_types[42] = 1;
        RaaFrigate_walk_types[43] = 0;
        RaaFrigate_walk_types[44] = 0;
        RaaFrigate_walk_types[45] = 0;
        RaaFrigate_walk_types[46] = 0;

        RaaFrigate_walk_graph[0] = (0)*256 + (1);
        RaaFrigate_walk_graph[1] = (2)*256 + (1);
        RaaFrigate_walk_graph[2] = (2)*256 + (3);
        RaaFrigate_walk_graph[3] = (4)*256 + (3);
        RaaFrigate_walk_graph[4] = (4)*256 + (5);
        RaaFrigate_walk_graph[5] = (4)*256 + (6);
        RaaFrigate_walk_graph[6] = (6)*256 + (5);
        RaaFrigate_walk_graph[7] = (6)*256 + (7);
        RaaFrigate_walk_graph[8] = (8)*256 + (7);
        RaaFrigate_walk_graph[9] = (13)*256 + (8);
        RaaFrigate_walk_graph[10] = (12)*256 + (9);
        RaaFrigate_walk_graph[11] = (12)*256 + (10);
        RaaFrigate_walk_graph[12] = (12)*256 + (11);
        RaaFrigate_walk_graph[13] = (10)*256 + (11);
        RaaFrigate_walk_graph[14] = (11)*256 + (9);
        RaaFrigate_walk_graph[15] = (14)*256 + (13);
        RaaFrigate_walk_graph[16] = (14)*256 + (15);
        RaaFrigate_walk_graph[17] = (14)*256 + (5);
        RaaFrigate_walk_graph[18] = (16)*256 + (15);
        RaaFrigate_walk_graph[19] = (16)*256 + (17);
        RaaFrigate_walk_graph[20] = (2)*256 + (17);
        RaaFrigate_walk_graph[21] = (1)*256 + (17);
        RaaFrigate_walk_graph[22] = (1)*256 + (18);
        RaaFrigate_walk_graph[23] = (1)*256 + (21);
        RaaFrigate_walk_graph[24] = (20)*256 + (21);
        RaaFrigate_walk_graph[25] = (19)*256 + (18);
        RaaFrigate_walk_graph[26] = (24)*256 + (22);
        RaaFrigate_walk_graph[27] = (15)*256 + (22);
        RaaFrigate_walk_graph[28] = (4)*256 + (26);
        RaaFrigate_walk_graph[29] = (25)*256 + (26);
        RaaFrigate_walk_graph[30] = (28)*256 + (27);
        RaaFrigate_walk_graph[31] = (29)*256 + (30);
        RaaFrigate_walk_graph[32] = (27)*256 + (12);
        RaaFrigate_walk_graph[33] = (30)*256 + (11);
        RaaFrigate_walk_graph[34] = (30)*256 + (11);
        RaaFrigate_walk_graph[35] = (6)*256 + (33);
        RaaFrigate_walk_graph[36] = (8)*256 + (34);
        RaaFrigate_walk_graph[37] = (9)*256 + (35);
        RaaFrigate_walk_graph[38] = (10)*256 + (36);
        RaaFrigate_walk_graph[39] = (10)*256 + (37);
        RaaFrigate_walk_graph[40] = (9)*256 + (38);
        RaaFrigate_walk_graph[41] = (8)*256 + (39);
        RaaFrigate_walk_graph[42] = (14)*256 + (40);
        RaaFrigate_walk_graph[43] = (1)*256 + (41);
        RaaFrigate_walk_graph[44] = (0)*256 + (42);
        RaaFrigate_walk_graph[45] = (0)*256 + (31);
        RaaFrigate_walk_graph[46] = (1)*256 + (32);
        RaaFrigate_walk_graph[47] = (43)*256 + (44);
        RaaFrigate_walk_graph[48] = (45)*256 + (44);
        RaaFrigate_walk_graph[49] = (45)*256 + (44);
        RaaFrigate_walk_graph[50] = (7)*256 + (23);
        RaaFrigate_walk_graph[51] = (12)*256 + (23);
        RaaFrigate_walk_graph[52] = (43)*256 + (23);
        RaaFrigate_walk_graph[53] = (11)*256 + (46);
        RaaFrigate_walk_graph[54] = (13)*256 + (46);
        RaaFrigate_walk_graph[55] = (13)*256 + (46);
}
