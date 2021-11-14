int Empress_walk_count;
float Empress_walk_verts[105];
int Empress_walk_types[35];
int Empress_walk_graph[35];

void Empress_walk_init()
{
        Empress_walk_count = 35;

        Empress_walk_verts[0] = -1.064782;
        Empress_walk_verts[1] = 7.072358;
        Empress_walk_verts[2] = -10.95;
        Empress_walk_verts[3] = -1.664562;
        Empress_walk_verts[4] = 6.830429;
        Empress_walk_verts[5] = -7.9249;
        Empress_walk_verts[6] = -1.673588;
        Empress_walk_verts[7] = 4.083992;
        Empress_walk_verts[8] = -5.496736;
        Empress_walk_verts[9] = 0.003450754;
        Empress_walk_verts[10] = 4.002592;
        Empress_walk_verts[11] = -4.368927;
        Empress_walk_verts[12] = 0;
        Empress_walk_verts[13] = 1.755208;
        Empress_walk_verts[14] = -1.703253;
        Empress_walk_verts[15] = -1.54756;
        Empress_walk_verts[16] = 1.696781;
        Empress_walk_verts[17] = -0.2760344;
        Empress_walk_verts[18] = -1.509949;
        Empress_walk_verts[19] = 1.720378;
        Empress_walk_verts[20] = 2.258319;
        Empress_walk_verts[21] = -1.30798;
        Empress_walk_verts[22] = 1.861417;
        Empress_walk_verts[23] = 4.409849;
        Empress_walk_verts[24] = -0.003341429;
        Empress_walk_verts[25] = 1.879783;
        Empress_walk_verts[26] = 4.450198;
        Empress_walk_verts[27] = -0.006900422;
        Empress_walk_verts[28] = 2.538554;
        Empress_walk_verts[29] = 5.295676;
        Empress_walk_verts[30] = -1.496644;
        Empress_walk_verts[31] = 2.675705;
        Empress_walk_verts[32] = 6.778917;
        Empress_walk_verts[33] = -0.9826121;
        Empress_walk_verts[34] = 3.085923;
        Empress_walk_verts[35] = 9.564217;
        Empress_walk_verts[36] = -0.4382244;
        Empress_walk_verts[37] = 3.322829;
        Empress_walk_verts[38] = 11.09189;
        Empress_walk_verts[39] = 1.506539;
        Empress_walk_verts[40] = 2.959168;
        Empress_walk_verts[41] = 8.856477;
        Empress_walk_verts[42] = 1.611039;
        Empress_walk_verts[43] = 2.656119;
        Empress_walk_verts[44] = 6.579633;
        Empress_walk_verts[45] = -0.007144036;
        Empress_walk_verts[46] = 2.554622;
        Empress_walk_verts[47] = 5.297103;
        Empress_walk_verts[48] = 0;
        Empress_walk_verts[49] = 1.878014;
        Empress_walk_verts[50] = 4.450281;
        Empress_walk_verts[51] = 1.264563;
        Empress_walk_verts[52] = 1.863617;
        Empress_walk_verts[53] = 4.477649;
        Empress_walk_verts[54] = 1.465294;
        Empress_walk_verts[55] = 1.721082;
        Empress_walk_verts[56] = 2.208109;
        Empress_walk_verts[57] = 1.557364;
        Empress_walk_verts[58] = 1.701918;
        Empress_walk_verts[59] = -0.3829145;
        Empress_walk_verts[60] = 0.003323559;
        Empress_walk_verts[61] = 1.764555;
        Empress_walk_verts[62] = -1.700673;
        Empress_walk_verts[63] = 0;
        Empress_walk_verts[64] = 4.010814;
        Empress_walk_verts[65] = -4.377184;
        Empress_walk_verts[66] = 1.683523;
        Empress_walk_verts[67] = 4.082973;
        Empress_walk_verts[68] = -5.502732;
        Empress_walk_verts[69] = 1.681383;
        Empress_walk_verts[70] = 6.828473;
        Empress_walk_verts[71] = -7.935709;
        Empress_walk_verts[72] = 1.14013;
        Empress_walk_verts[73] = 7.07635;
        Empress_walk_verts[74] = -11.01161;
        Empress_walk_verts[75] = 0.4019073;
        Empress_walk_verts[76] = 6.870241;
        Empress_walk_verts[77] = -9.096994;
        Empress_walk_verts[78] = -1.899822;
        Empress_walk_verts[79] = 3.996804;
        Empress_walk_verts[80] = -4.735214;
        Empress_walk_verts[81] = 1.23308;
        Empress_walk_verts[82] = 1.863602;
        Empress_walk_verts[83] = 4.70884;
        Empress_walk_verts[84] = 1.445236;
        Empress_walk_verts[85] = 1.71544;
        Empress_walk_verts[86] = 2.202818;
        Empress_walk_verts[87] = 1.553701;
        Empress_walk_verts[88] = 1.699168;
        Empress_walk_verts[89] = -0.3512904;
        Empress_walk_verts[90] = 1.474422;
        Empress_walk_verts[91] = 1.812724;
        Empress_walk_verts[92] = -2.872303;
        Empress_walk_verts[93] = -1.538301;
        Empress_walk_verts[94] = 1.806189;
        Empress_walk_verts[95] = -2.813057;
        Empress_walk_verts[96] = -1.517695;
        Empress_walk_verts[97] = 1.70622;
        Empress_walk_verts[98] = -0.2986494;
        Empress_walk_verts[99] = -1.49304;
        Empress_walk_verts[100] = 1.725412;
        Empress_walk_verts[101] = 2.272557;
        Empress_walk_verts[102] = -1.284237;
        Empress_walk_verts[103] = 1.888536;
        Empress_walk_verts[104] = 4.726744;

        Empress_walk_types[0] = 0;
        Empress_walk_types[1] = 0;
        Empress_walk_types[2] = 0;
        Empress_walk_types[3] = 0;
        Empress_walk_types[4] = 0;
        Empress_walk_types[5] = 0;
        Empress_walk_types[6] = 0;
        Empress_walk_types[7] = 0;
        Empress_walk_types[8] = 0;
        Empress_walk_types[9] = 0;
        Empress_walk_types[10] = 0;
        Empress_walk_types[11] = 0;
        Empress_walk_types[12] = 0;
        Empress_walk_types[13] = 0;
        Empress_walk_types[14] = 0;
        Empress_walk_types[15] = 0;
        Empress_walk_types[16] = 0;
        Empress_walk_types[17] = 0;
        Empress_walk_types[18] = 0;
        Empress_walk_types[19] = 0;
        Empress_walk_types[20] = 0;
        Empress_walk_types[21] = 0;
        Empress_walk_types[22] = 0;
        Empress_walk_types[23] = 0;
        Empress_walk_types[24] = 0;
        Empress_walk_types[25] = 0;
        Empress_walk_types[26] = 0;
        Empress_walk_types[27] = 2;
        Empress_walk_types[28] = 2;
        Empress_walk_types[29] = 2;
        Empress_walk_types[30] = 2;
        Empress_walk_types[31] = 1;
        Empress_walk_types[32] = 1;
        Empress_walk_types[33] = 1;
        Empress_walk_types[34] = 1;

        Empress_walk_graph[0] = (0)*256 + (1);
        Empress_walk_graph[1] = (1)*256 + (2);
        Empress_walk_graph[2] = (2)*256 + (3);
        Empress_walk_graph[3] = (2)*256 + (26);
        Empress_walk_graph[4] = (3)*256 + (4);
        Empress_walk_graph[5] = (4)*256 + (5);
        Empress_walk_graph[6] = (5)*256 + (31);
        Empress_walk_graph[7] = (5)*256 + (32);
        Empress_walk_graph[8] = (5)*256 + (6);
        Empress_walk_graph[9] = (6)*256 + (33);
        Empress_walk_graph[10] = (6)*256 + (7);
        Empress_walk_graph[11] = (7)*256 + (34);
        Empress_walk_graph[12] = (7)*256 + (8);
        Empress_walk_graph[13] = (8)*256 + (9);
        Empress_walk_graph[14] = (9)*256 + (10);
        Empress_walk_graph[15] = (10)*256 + (11);
        Empress_walk_graph[16] = (11)*256 + (12);
        Empress_walk_graph[17] = (12)*256 + (13);
        Empress_walk_graph[18] = (13)*256 + (14);
        Empress_walk_graph[19] = (14)*256 + (15);
        Empress_walk_graph[20] = (15)*256 + (16);
        Empress_walk_graph[21] = (16)*256 + (17);
        Empress_walk_graph[22] = (17)*256 + (27);
        Empress_walk_graph[23] = (17)*256 + (18);
        Empress_walk_graph[24] = (18)*256 + (28);
        Empress_walk_graph[25] = (18)*256 + (19);
        Empress_walk_graph[26] = (19)*256 + (29);
        Empress_walk_graph[27] = (19)*256 + (30);
        Empress_walk_graph[28] = (19)*256 + (20);
        Empress_walk_graph[29] = (20)*256 + (21);
        Empress_walk_graph[30] = (21)*256 + (22);
        Empress_walk_graph[31] = (22)*256 + (23);
        Empress_walk_graph[32] = (23)*256 + (25);
        Empress_walk_graph[33] = (23)*256 + (24);
        Empress_walk_graph[34] = (24)*256 + (0);
}
