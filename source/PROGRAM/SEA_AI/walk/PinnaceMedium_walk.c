int PinnaceMedium_walk_count;
float PinnaceMedium_walk_verts[156];
int PinnaceMedium_walk_types[52];
int PinnaceMedium_walk_graph[56];

void PinnaceMedium_walk_init()
{
        PinnaceMedium_walk_count = 52;

        PinnaceMedium_walk_verts[0] = 1.887569;
        PinnaceMedium_walk_verts[1] = 3.537401;
        PinnaceMedium_walk_verts[2] = 6.030146;
        PinnaceMedium_walk_verts[3] = 1.761873;
        PinnaceMedium_walk_verts[4] = 1.587444;
        PinnaceMedium_walk_verts[5] = 2.747541;
        PinnaceMedium_walk_verts[6] = 1.071791;
        PinnaceMedium_walk_verts[7] = 1.399922;
        PinnaceMedium_walk_verts[8] = 0.64244;
        PinnaceMedium_walk_verts[9] = 2.068462;
        PinnaceMedium_walk_verts[10] = 1.83243;
        PinnaceMedium_walk_verts[11] = -2.749835;
        PinnaceMedium_walk_verts[12] = 1.887113;
        PinnaceMedium_walk_verts[13] = 3.769869;
        PinnaceMedium_walk_verts[14] = -3.882188;
        PinnaceMedium_walk_verts[15] = 1.898398;
        PinnaceMedium_walk_verts[16] = 4.252357;
        PinnaceMedium_walk_verts[17] = -7.436862;
        PinnaceMedium_walk_verts[18] = -2.709853;
        PinnaceMedium_walk_verts[19] = 3.724869;
        PinnaceMedium_walk_verts[20] = 4.004423;
        PinnaceMedium_walk_verts[21] = -1.619014;
        PinnaceMedium_walk_verts[22] = 3.189903;
        PinnaceMedium_walk_verts[23] = 3.867939;
        PinnaceMedium_walk_verts[24] = -1.856515;
        PinnaceMedium_walk_verts[25] = 2.047414;
        PinnaceMedium_walk_verts[26] = 2.244254;
        PinnaceMedium_walk_verts[27] = -1.93535;
        PinnaceMedium_walk_verts[28] = 1.837413;
        PinnaceMedium_walk_verts[29] = -2.710653;
        PinnaceMedium_walk_verts[30] = -1.773308;
        PinnaceMedium_walk_verts[31] = 3.344866;
        PinnaceMedium_walk_verts[32] = -4.496314;
        PinnaceMedium_walk_verts[33] = -1.366496;
        PinnaceMedium_walk_verts[34] = 4.129994;
        PinnaceMedium_walk_verts[35] = -7.11515;
        PinnaceMedium_walk_verts[36] = -1.068694;
        PinnaceMedium_walk_verts[37] = 3.230006;
        PinnaceMedium_walk_verts[38] = -10.136468;
        PinnaceMedium_walk_verts[39] = -1.678938;
        PinnaceMedium_walk_verts[40] = 5.8025;
        PinnaceMedium_walk_verts[41] = -11.959101;
        PinnaceMedium_walk_verts[42] = 1.577377;
        PinnaceMedium_walk_verts[43] = 5.517502;
        PinnaceMedium_walk_verts[44] = -12.09284;
        PinnaceMedium_walk_verts[45] = 3.399466;
        PinnaceMedium_walk_verts[46] = 5.040034;
        PinnaceMedium_walk_verts[47] = -7.329669;
        PinnaceMedium_walk_verts[48] = 3.468125;
        PinnaceMedium_walk_verts[49] = 5.30004;
        PinnaceMedium_walk_verts[50] = -5.106941;
        PinnaceMedium_walk_verts[51] = -3.456855;
        PinnaceMedium_walk_verts[52] = 5.465009;
        PinnaceMedium_walk_verts[53] = -7.449947;
        PinnaceMedium_walk_verts[54] = -3.506973;
        PinnaceMedium_walk_verts[55] = 5.277506;
        PinnaceMedium_walk_verts[56] = -4.983714;
        PinnaceMedium_walk_verts[57] = 2.077253;
        PinnaceMedium_walk_verts[58] = 2.032531;
        PinnaceMedium_walk_verts[59] = -1.757301;
        PinnaceMedium_walk_verts[60] = 2.193257;
        PinnaceMedium_walk_verts[61] = 1.875027;
        PinnaceMedium_walk_verts[62] = 1.514719;
        PinnaceMedium_walk_verts[63] = 1.587278;
        PinnaceMedium_walk_verts[64] = 4.22997;
        PinnaceMedium_walk_verts[65] = 8.310393;
        PinnaceMedium_walk_verts[66] = -2.365088;
        PinnaceMedium_walk_verts[67] = 1.782527;
        PinnaceMedium_walk_verts[68] = -1.782274;
        PinnaceMedium_walk_verts[69] = -2.091359;
        PinnaceMedium_walk_verts[70] = 1.825029;
        PinnaceMedium_walk_verts[71] = 1.543568;
        PinnaceMedium_walk_verts[72] = -1.578918;
        PinnaceMedium_walk_verts[73] = 4.112469;
        PinnaceMedium_walk_verts[74] = 8.227626;
        PinnaceMedium_walk_verts[75] = 1.953978;
        PinnaceMedium_walk_verts[76] = 4.449963;
        PinnaceMedium_walk_verts[77] = -10.844827;
        PinnaceMedium_walk_verts[78] = -1.998107;
        PinnaceMedium_walk_verts[79] = 4.652468;
        PinnaceMedium_walk_verts[80] = -10.329831;
        PinnaceMedium_walk_verts[81] = 1.333673;
        PinnaceMedium_walk_verts[82] = 5.842464;
        PinnaceMedium_walk_verts[83] = -14.854453;
        PinnaceMedium_walk_verts[84] = -0.772435;
        PinnaceMedium_walk_verts[85] = 5.159945;
        PinnaceMedium_walk_verts[86] = -14.78746;
        PinnaceMedium_walk_verts[87] = -0.005475;
        PinnaceMedium_walk_verts[88] = 1.432525;
        PinnaceMedium_walk_verts[89] = -3.455067;
        PinnaceMedium_walk_verts[90] = 1.857164;
        PinnaceMedium_walk_verts[91] = 3.205019;
        PinnaceMedium_walk_verts[92] = 3.621113;
        PinnaceMedium_walk_verts[93] = -1.872539;
        PinnaceMedium_walk_verts[94] = 3.07752;
        PinnaceMedium_walk_verts[95] = 3.736382;
        PinnaceMedium_walk_verts[96] = 2.766642;
        PinnaceMedium_walk_verts[97] = 1.447523;
        PinnaceMedium_walk_verts[98] = 0.073685;
        PinnaceMedium_walk_verts[99] = -2.349696;
        PinnaceMedium_walk_verts[100] = 1.087521;
        PinnaceMedium_walk_verts[101] = -0.312501;
        PinnaceMedium_walk_verts[102] = 0.151939;
        PinnaceMedium_walk_verts[103] = 1.535016;
        PinnaceMedium_walk_verts[104] = 3.066028;
        PinnaceMedium_walk_verts[105] = 0.145089;
        PinnaceMedium_walk_verts[106] = 17.155437;
        PinnaceMedium_walk_verts[107] = -5.017716;
        PinnaceMedium_walk_verts[108] = -0.29013;
        PinnaceMedium_walk_verts[109] = 17.235464;
        PinnaceMedium_walk_verts[110] = -4.923962;
        PinnaceMedium_walk_verts[111] = -3.648101;
        PinnaceMedium_walk_verts[112] = 4.752486;
        PinnaceMedium_walk_verts[113] = 7.642651;
        PinnaceMedium_walk_verts[114] = 3.454995;
        PinnaceMedium_walk_verts[115] = 5.227498;
        PinnaceMedium_walk_verts[116] = 7.608085;
        PinnaceMedium_walk_verts[117] = -3.574086;
        PinnaceMedium_walk_verts[118] = 4.457483;
        PinnaceMedium_walk_verts[119] = 4.940554;
        PinnaceMedium_walk_verts[120] = 3.675889;
        PinnaceMedium_walk_verts[121] = 4.807486;
        PinnaceMedium_walk_verts[122] = 5.1647;
        PinnaceMedium_walk_verts[123] = 0.259221;
        PinnaceMedium_walk_verts[124] = 15.825226;
        PinnaceMedium_walk_verts[125] = 8.623278;
        PinnaceMedium_walk_verts[126] = -0.324754;
        PinnaceMedium_walk_verts[127] = 15.91786;
        PinnaceMedium_walk_verts[128] = 8.718058;
        PinnaceMedium_walk_verts[129] = -1.323331;
        PinnaceMedium_walk_verts[130] = 6.202478;
        PinnaceMedium_walk_verts[131] = -16.956583;
        PinnaceMedium_walk_verts[132] = 1.252153;
        PinnaceMedium_walk_verts[133] = 6.177484;
        PinnaceMedium_walk_verts[134] = -16.897358;
        PinnaceMedium_walk_verts[135] = -1.107535;
        PinnaceMedium_walk_verts[136] = 6.825037;
        PinnaceMedium_walk_verts[137] = -19.265102;
        PinnaceMedium_walk_verts[138] = 1.17289;
        PinnaceMedium_walk_verts[139] = 6.800018;
        PinnaceMedium_walk_verts[140] = -19.463163;
        PinnaceMedium_walk_verts[141] = -0.396796;
        PinnaceMedium_walk_verts[142] = 3.26748;
        PinnaceMedium_walk_verts[143] = 5.18591;
        PinnaceMedium_walk_verts[144] = 3.027391;
        PinnaceMedium_walk_verts[145] = 7.254994;
        PinnaceMedium_walk_verts[146] = -16.485773;
        PinnaceMedium_walk_verts[147] = -2.999205;
        PinnaceMedium_walk_verts[148] = 7.350001;
        PinnaceMedium_walk_verts[149] = -16.33996;
        PinnaceMedium_walk_verts[150] = 0.399511;
        PinnaceMedium_walk_verts[151] = 16.352488;
        PinnaceMedium_walk_verts[152] = -15.193851;
        PinnaceMedium_walk_verts[153] = -0.266682;
        PinnaceMedium_walk_verts[154] = 16.599957;
        PinnaceMedium_walk_verts[155] = -15.109273;

        PinnaceMedium_walk_types[0] = 0;
        PinnaceMedium_walk_types[1] = 0;
        PinnaceMedium_walk_types[2] = 0;
        PinnaceMedium_walk_types[3] = 0;
        PinnaceMedium_walk_types[4] = 0;
        PinnaceMedium_walk_types[5] = 0;
        PinnaceMedium_walk_types[6] = 0;
        PinnaceMedium_walk_types[7] = 0;
        PinnaceMedium_walk_types[8] = 0;
        PinnaceMedium_walk_types[9] = 0;
        PinnaceMedium_walk_types[10] = 0;
        PinnaceMedium_walk_types[11] = 0;
        PinnaceMedium_walk_types[12] = 0;
        PinnaceMedium_walk_types[13] = 0;
        PinnaceMedium_walk_types[14] = 0;
        PinnaceMedium_walk_types[15] = 5;
        PinnaceMedium_walk_types[16] = 5;
        PinnaceMedium_walk_types[17] = 5;
        PinnaceMedium_walk_types[18] = 5;
        PinnaceMedium_walk_types[19] = 2;
        PinnaceMedium_walk_types[20] = 2;
        PinnaceMedium_walk_types[21] = 3;
        PinnaceMedium_walk_types[22] = 1;
        PinnaceMedium_walk_types[23] = 1;
        PinnaceMedium_walk_types[24] = 3;
        PinnaceMedium_walk_types[25] = 0;
        PinnaceMedium_walk_types[26] = 0;
        PinnaceMedium_walk_types[27] = 0;
        PinnaceMedium_walk_types[28] = 0;
        PinnaceMedium_walk_types[29] = 0;
        PinnaceMedium_walk_types[30] = 0;
        PinnaceMedium_walk_types[31] = 0;
        PinnaceMedium_walk_types[32] = 0;
        PinnaceMedium_walk_types[33] = 0;
        PinnaceMedium_walk_types[34] = 0;
        PinnaceMedium_walk_types[35] = 4;
        PinnaceMedium_walk_types[36] = 4;
        PinnaceMedium_walk_types[37] = 5;
        PinnaceMedium_walk_types[38] = 5;
        PinnaceMedium_walk_types[39] = 5;
        PinnaceMedium_walk_types[40] = 5;
        PinnaceMedium_walk_types[41] = 6;
        PinnaceMedium_walk_types[42] = 6;
        PinnaceMedium_walk_types[43] = 0;
        PinnaceMedium_walk_types[44] = 0;
        PinnaceMedium_walk_types[45] = 0;
        PinnaceMedium_walk_types[46] = 0;
        PinnaceMedium_walk_types[47] = 0;
        PinnaceMedium_walk_types[48] = 5;
        PinnaceMedium_walk_types[49] = 5;
        PinnaceMedium_walk_types[50] = 4;
        PinnaceMedium_walk_types[51] = 4;

        PinnaceMedium_walk_graph[0] = (30)*256 + (1);
        PinnaceMedium_walk_graph[1] = (1)*256 + (2);
        PinnaceMedium_walk_graph[2] = (32)*256 + (3);
        PinnaceMedium_walk_graph[3] = (3)*256 + (4);
        PinnaceMedium_walk_graph[4] = (4)*256 + (5);
        PinnaceMedium_walk_graph[5] = (31)*256 + (6);
        PinnaceMedium_walk_graph[6] = (8)*256 + (7);
        PinnaceMedium_walk_graph[7] = (9)*256 + (33);
        PinnaceMedium_walk_graph[8] = (10)*256 + (9);
        PinnaceMedium_walk_graph[9] = (11)*256 + (10);
        PinnaceMedium_walk_graph[10] = (12)*256 + (11);
        PinnaceMedium_walk_graph[11] = (33)*256 + (8);
        PinnaceMedium_walk_graph[12] = (27)*256 + (14);
        PinnaceMedium_walk_graph[13] = (26)*256 + (13);
        PinnaceMedium_walk_graph[14] = (5)*256 + (15);
        PinnaceMedium_walk_graph[15] = (16)*256 + (15);
        PinnaceMedium_walk_graph[16] = (17)*256 + (11);
        PinnaceMedium_walk_graph[17] = (17)*256 + (18);
        PinnaceMedium_walk_graph[18] = (2)*256 + (19);
        PinnaceMedium_walk_graph[19] = (1)*256 + (20);
        PinnaceMedium_walk_graph[20] = (0)*256 + (21);
        PinnaceMedium_walk_graph[21] = (8)*256 + (22);
        PinnaceMedium_walk_graph[22] = (7)*256 + (23);
        PinnaceMedium_walk_graph[23] = (6)*256 + (24);
        PinnaceMedium_walk_graph[24] = (25)*256 + (5);
        PinnaceMedium_walk_graph[25] = (26)*256 + (11);
        PinnaceMedium_walk_graph[26] = (32)*256 + (29);
        PinnaceMedium_walk_graph[27] = (33)*256 + (29);
        PinnaceMedium_walk_graph[28] = (30)*256 + (0);
        PinnaceMedium_walk_graph[29] = (31)*256 + (7);
        PinnaceMedium_walk_graph[30] = (27)*256 + (28);
        PinnaceMedium_walk_graph[31] = (13)*256 + (28);
        PinnaceMedium_walk_graph[32] = (25)*256 + (14);
        PinnaceMedium_walk_graph[33] = (12)*256 + (5);
        PinnaceMedium_walk_graph[34] = (32)*256 + (2);
        PinnaceMedium_walk_graph[35] = (1)*256 + (34);
        PinnaceMedium_walk_graph[36] = (7)*256 + (34);
        PinnaceMedium_walk_graph[37] = (29)*256 + (34);
        PinnaceMedium_walk_graph[38] = (16)*256 + (35);
        PinnaceMedium_walk_graph[39] = (36)*256 + (18);
        PinnaceMedium_walk_graph[40] = (0)*256 + (38);
        PinnaceMedium_walk_graph[41] = (40)*256 + (38);
        PinnaceMedium_walk_graph[42] = (40)*256 + (41);
        PinnaceMedium_walk_graph[43] = (6)*256 + (39);
        PinnaceMedium_walk_graph[44] = (37)*256 + (39);
        PinnaceMedium_walk_graph[45] = (37)*256 + (42);
        PinnaceMedium_walk_graph[46] = (43)*256 + (28);
        PinnaceMedium_walk_graph[47] = (43)*256 + (45);
        PinnaceMedium_walk_graph[48] = (46)*256 + (44);
        PinnaceMedium_walk_graph[49] = (27)*256 + (44);
        PinnaceMedium_walk_graph[50] = (47)*256 + (6);
        PinnaceMedium_walk_graph[51] = (47)*256 + (0);
        PinnaceMedium_walk_graph[52] = (48)*256 + (44);
        PinnaceMedium_walk_graph[53] = (48)*256 + (50);
        PinnaceMedium_walk_graph[54] = (49)*256 + (51);
        PinnaceMedium_walk_graph[55] = (49)*256 + (43);
}
