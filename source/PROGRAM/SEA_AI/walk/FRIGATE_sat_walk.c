int FRIGATE_sat_walk_count;
float FRIGATE_sat_walk_verts[132];
int FRIGATE_sat_walk_types[44];
int FRIGATE_sat_walk_graph[88];

void FRIGATE_sat_walk_init()
{
	FRIGATE_sat_walk_count = 44;

	FRIGATE_sat_walk_verts[0 ] = 0.682879;
	FRIGATE_sat_walk_verts[1 ] = 15.473681;
	FRIGATE_sat_walk_verts[2 ] = -0.706995;
	FRIGATE_sat_walk_verts[3 ] = -0.709027;
	FRIGATE_sat_walk_verts[4 ] = 15.473681;
	FRIGATE_sat_walk_verts[5 ] = -0.706995;
	FRIGATE_sat_walk_verts[6 ] = -0.629206;
	FRIGATE_sat_walk_verts[7 ] = 14.566985;
	FRIGATE_sat_walk_verts[8 ] = 11.854861;
	FRIGATE_sat_walk_verts[9 ] = -0.612228;
	FRIGATE_sat_walk_verts[10] = 3.624563;
	FRIGATE_sat_walk_verts[11] = 15.510467;
	FRIGATE_sat_walk_verts[12] = 1.024424;
	FRIGATE_sat_walk_verts[13] = 3.628924;
	FRIGATE_sat_walk_verts[14] = 15.510467;
	FRIGATE_sat_walk_verts[15] = 1.546245;
	FRIGATE_sat_walk_verts[16] = 3.605749;
	FRIGATE_sat_walk_verts[17] = 6.449152;
	FRIGATE_sat_walk_verts[18] = 3.008051;
	FRIGATE_sat_walk_verts[19] = 3.475136;
	FRIGATE_sat_walk_verts[20] = 6.449152;
	FRIGATE_sat_walk_verts[21] = 1.524509;
	FRIGATE_sat_walk_verts[22] = 3.464328;
	FRIGATE_sat_walk_verts[23] = 0.694325;
	FRIGATE_sat_walk_verts[24] = 3.041313;
	FRIGATE_sat_walk_verts[25] = 3.463332;
	FRIGATE_sat_walk_verts[26] = -0.797201;
	FRIGATE_sat_walk_verts[27] = 1.412109;
	FRIGATE_sat_walk_verts[28] = 3.878240;
	FRIGATE_sat_walk_verts[29] = -7.849167;
	FRIGATE_sat_walk_verts[30] = 1.412109;
	FRIGATE_sat_walk_verts[31] = 4.396459;
	FRIGATE_sat_walk_verts[32] = -11.552757;
	FRIGATE_sat_walk_verts[33] = -1.098465;
	FRIGATE_sat_walk_verts[34] = 4.282524;
	FRIGATE_sat_walk_verts[35] = -12.368937;
	FRIGATE_sat_walk_verts[36] = -1.543357;
	FRIGATE_sat_walk_verts[37] = 3.560584;
	FRIGATE_sat_walk_verts[38] = -2.732440;
	FRIGATE_sat_walk_verts[39] = -3.164254;
	FRIGATE_sat_walk_verts[40] = 3.483950;
	FRIGATE_sat_walk_verts[41] = -1.328485;
	FRIGATE_sat_walk_verts[42] = -1.610916;
	FRIGATE_sat_walk_verts[43] = 3.545569;
	FRIGATE_sat_walk_verts[44] = 9.261824;
	FRIGATE_sat_walk_verts[45] = -1.041233;
	FRIGATE_sat_walk_verts[46] = 3.646608;
	FRIGATE_sat_walk_verts[47] = 13.830785;
	FRIGATE_sat_walk_verts[48] = -1.820494;
	FRIGATE_sat_walk_verts[49] = 3.462107;
	FRIGATE_sat_walk_verts[50] = 4.661315;
	FRIGATE_sat_walk_verts[51] = -1.873664;
	FRIGATE_sat_walk_verts[52] = 3.462107;
	FRIGATE_sat_walk_verts[53] = 1.160880;
	FRIGATE_sat_walk_verts[54] = -1.883289;
	FRIGATE_sat_walk_verts[55] = 3.716453;
	FRIGATE_sat_walk_verts[56] = -6.236930;
	FRIGATE_sat_walk_verts[57] = -1.489612;
	FRIGATE_sat_walk_verts[58] = 4.331543;
	FRIGATE_sat_walk_verts[59] = -11.640511;
	FRIGATE_sat_walk_verts[60] = 1.618072;
	FRIGATE_sat_walk_verts[61] = 3.985708;
	FRIGATE_sat_walk_verts[62] = -9.463777;
	FRIGATE_sat_walk_verts[63] = 1.706109;
	FRIGATE_sat_walk_verts[64] = 3.718518;
	FRIGATE_sat_walk_verts[65] = -6.161139;
	FRIGATE_sat_walk_verts[66] = 1.618072;
	FRIGATE_sat_walk_verts[67] = 3.475363;
	FRIGATE_sat_walk_verts[68] = 1.045762;
	FRIGATE_sat_walk_verts[69] = 1.679032;
	FRIGATE_sat_walk_verts[70] = 3.475363;
	FRIGATE_sat_walk_verts[71] = 4.635014;
	FRIGATE_sat_walk_verts[72] = 1.412765;
	FRIGATE_sat_walk_verts[73] = 3.574110;
	FRIGATE_sat_walk_verts[74] = 11.282850;
	FRIGATE_sat_walk_verts[75] = -1.402551;
	FRIGATE_sat_walk_verts[76] = 4.345655;
	FRIGATE_sat_walk_verts[77] = -13.298085;
	FRIGATE_sat_walk_verts[78] = -1.402551;
	FRIGATE_sat_walk_verts[79] = 4.345655;
	FRIGATE_sat_walk_verts[80] = -14.489914;
	FRIGATE_sat_walk_verts[81] = 4.062783;
	FRIGATE_sat_walk_verts[82] = 4.202068;
	FRIGATE_sat_walk_verts[83] = 9.940866;
	FRIGATE_sat_walk_verts[84] = -4.162785;
	FRIGATE_sat_walk_verts[85] = 4.202068;
	FRIGATE_sat_walk_verts[86] = 9.940866;
	FRIGATE_sat_walk_verts[87] = -4.317084;
	FRIGATE_sat_walk_verts[88] = 4.251468;
	FRIGATE_sat_walk_verts[89] = -4.380688;
	FRIGATE_sat_walk_verts[90] = 4.181965;
	FRIGATE_sat_walk_verts[91] = 4.146683;
	FRIGATE_sat_walk_verts[92] = -4.380688;
	FRIGATE_sat_walk_verts[93] = 0.615476;
	FRIGATE_sat_walk_verts[94] = 14.566985;
	FRIGATE_sat_walk_verts[95] = 11.854861;
	FRIGATE_sat_walk_verts[96] = 0.864657;
	FRIGATE_sat_walk_verts[97] = 16.738598;
	FRIGATE_sat_walk_verts[98] = 12.830065;
	FRIGATE_sat_walk_verts[99] = -0.916581;
	FRIGATE_sat_walk_verts[100] = 16.738598;
	FRIGATE_sat_walk_verts[101] = 11.767217;
	FRIGATE_sat_walk_verts[102] = -0.840785;
	FRIGATE_sat_walk_verts[103] = 18.357742;
	FRIGATE_sat_walk_verts[104] = -0.433058;
	FRIGATE_sat_walk_verts[105] = 0.731754;
	FRIGATE_sat_walk_verts[106] = 18.357742;
	FRIGATE_sat_walk_verts[107] = -0.261145;
	FRIGATE_sat_walk_verts[108] = -0.998365;
	FRIGATE_sat_walk_verts[109] = 3.690455;
	FRIGATE_sat_walk_verts[110] = 13.748741;
	FRIGATE_sat_walk_verts[111] = 1.982347;
	FRIGATE_sat_walk_verts[112] = 6.722304;
	FRIGATE_sat_walk_verts[113] = -16.270916;
	FRIGATE_sat_walk_verts[114] = 0.478816;
	FRIGATE_sat_walk_verts[115] = 4.339559;
	FRIGATE_sat_walk_verts[116] = -13.373476;
	FRIGATE_sat_walk_verts[117] = 1.636433;
	FRIGATE_sat_walk_verts[118] = 5.103526;
	FRIGATE_sat_walk_verts[119] = -13.322992;
	FRIGATE_sat_walk_verts[120] = 2.330873;
	FRIGATE_sat_walk_verts[121] = 5.103526;
	FRIGATE_sat_walk_verts[122] = -13.955664;
	FRIGATE_sat_walk_verts[123] = 2.194665;
	FRIGATE_sat_walk_verts[124] = 6.732555;
	FRIGATE_sat_walk_verts[125] = -16.251188;
	FRIGATE_sat_walk_verts[126] = 0.036381;
	FRIGATE_sat_walk_verts[127] = 6.722304;
	FRIGATE_sat_walk_verts[128] = -18.285877;
	FRIGATE_sat_walk_verts[129] = -2.333549;
	FRIGATE_sat_walk_verts[130] = 6.722304;
	FRIGATE_sat_walk_verts[131] = -15.834783;

	FRIGATE_sat_walk_types[0 ] = 4;
	FRIGATE_sat_walk_types[1 ] = 4;
	FRIGATE_sat_walk_types[2 ] = 4;
	FRIGATE_sat_walk_types[3 ] = 0;
	FRIGATE_sat_walk_types[4 ] = 0;
	FRIGATE_sat_walk_types[5 ] = 0;
	FRIGATE_sat_walk_types[6 ] = 0;
	FRIGATE_sat_walk_types[7 ] = 0;
	FRIGATE_sat_walk_types[8 ] = 0;
	FRIGATE_sat_walk_types[9 ] = 0;
	FRIGATE_sat_walk_types[10] = 0;
	FRIGATE_sat_walk_types[11] = 0;
	FRIGATE_sat_walk_types[12] = 0;
	FRIGATE_sat_walk_types[13] = 0;
	FRIGATE_sat_walk_types[14] = 0;
	FRIGATE_sat_walk_types[15] = 1;
	FRIGATE_sat_walk_types[16] = 1;
	FRIGATE_sat_walk_types[17] = 1;
	FRIGATE_sat_walk_types[18] = 1;
	FRIGATE_sat_walk_types[19] = 1;
	FRIGATE_sat_walk_types[20] = 1;
	FRIGATE_sat_walk_types[21] = 1;
	FRIGATE_sat_walk_types[22] = 1;
	FRIGATE_sat_walk_types[23] = 1;
	FRIGATE_sat_walk_types[24] = 1;
	FRIGATE_sat_walk_types[25] = 2;
	FRIGATE_sat_walk_types[26] = 3;
	FRIGATE_sat_walk_types[27] = 5;
	FRIGATE_sat_walk_types[28] = 5;
	FRIGATE_sat_walk_types[29] = 5;
	FRIGATE_sat_walk_types[30] = 5;
	FRIGATE_sat_walk_types[31] = 4;
	FRIGATE_sat_walk_types[32] = 6;
	FRIGATE_sat_walk_types[33] = 6;
	FRIGATE_sat_walk_types[34] = 6;
	FRIGATE_sat_walk_types[35] = 6;
	FRIGATE_sat_walk_types[36] = 0;
	FRIGATE_sat_walk_types[37] = 0;
	FRIGATE_sat_walk_types[38] = 0;
	FRIGATE_sat_walk_types[39] = 0;
	FRIGATE_sat_walk_types[40] = 0;
	FRIGATE_sat_walk_types[41] = 0;
	FRIGATE_sat_walk_types[42] = 0;
	FRIGATE_sat_walk_types[43] = 0;

	FRIGATE_sat_walk_graph[0 ] = (26)*256 + (25);
	FRIGATE_sat_walk_graph[1 ] = (25)*256 + (19);
	FRIGATE_sat_walk_graph[2 ] = (25)*256 + (10);
	FRIGATE_sat_walk_graph[3 ] = (19)*256 + (10);
	FRIGATE_sat_walk_graph[4 ] = (10)*256 + (20);
	FRIGATE_sat_walk_graph[5 ] = (20)*256 + (9);
	FRIGATE_sat_walk_graph[6 ] = (9)*256 + (21);
	FRIGATE_sat_walk_graph[7 ] = (21)*256 + (30);
	FRIGATE_sat_walk_graph[8 ] = (30)*256 + (18);
	FRIGATE_sat_walk_graph[9 ] = (19)*256 + (18);
	FRIGATE_sat_walk_graph[10] = (18)*256 + (8);
	FRIGATE_sat_walk_graph[11] = (8)*256 + (7);
	FRIGATE_sat_walk_graph[12] = (17)*256 + (13);
	FRIGATE_sat_walk_graph[13] = (13)*256 + (12);
	FRIGATE_sat_walk_graph[14] = (7)*256 + (22);
	FRIGATE_sat_walk_graph[15] = (22)*256 + (17);
	FRIGATE_sat_walk_graph[16] = (22)*256 + (23);
	FRIGATE_sat_walk_graph[17] = (23)*256 + (5);
	FRIGATE_sat_walk_graph[18] = (23)*256 + (6);
	FRIGATE_sat_walk_graph[19] = (5)*256 + (6);
	FRIGATE_sat_walk_graph[20] = (17)*256 + (16);
	FRIGATE_sat_walk_graph[21] = (16)*256 + (14);
	FRIGATE_sat_walk_graph[22] = (16)*256 + (36);
	FRIGATE_sat_walk_graph[23] = (12)*256 + (18);
	FRIGATE_sat_walk_graph[24] = (12)*256 + (21);
	FRIGATE_sat_walk_graph[25] = (5)*256 + (24);
	FRIGATE_sat_walk_graph[26] = (24)*256 + (27);
	FRIGATE_sat_walk_graph[27] = (24)*256 + (4);
	FRIGATE_sat_walk_graph[28] = (4)*256 + (3);
	FRIGATE_sat_walk_graph[29] = (3)*256 + (15);
	FRIGATE_sat_walk_graph[30] = (15)*256 + (14);
	FRIGATE_sat_walk_graph[31] = (22)*256 + (21);
	FRIGATE_sat_walk_graph[32] = (30)*256 + (0);
	FRIGATE_sat_walk_graph[33] = (29)*256 + (1);
	FRIGATE_sat_walk_graph[34] = (18)*256 + (29);
	FRIGATE_sat_walk_graph[35] = (1)*256 + (34);
	FRIGATE_sat_walk_graph[36] = (0)*256 + (35);
	FRIGATE_sat_walk_graph[37] = (27)*256 + (31);
	FRIGATE_sat_walk_graph[38] = (28)*256 + (2);
	FRIGATE_sat_walk_graph[39] = (31)*256 + (32);
	FRIGATE_sat_walk_graph[40] = (2)*256 + (33);
	FRIGATE_sat_walk_graph[41] = (20)*256 + (18);
	FRIGATE_sat_walk_graph[42] = (18)*256 + (21);
	FRIGATE_sat_walk_graph[43] = (16)*256 + (22);
	FRIGATE_sat_walk_graph[44] = (23)*256 + (17);
	FRIGATE_sat_walk_graph[45] = (17)*256 + (12);
	FRIGATE_sat_walk_graph[46] = (15)*256 + (4);
	FRIGATE_sat_walk_graph[47] = (9)*256 + (18);
	FRIGATE_sat_walk_graph[48] = (36)*256 + (28);
	FRIGATE_sat_walk_graph[49] = (11)*256 + (25);
	FRIGATE_sat_walk_graph[50] = (10)*256 + (11);
	FRIGATE_sat_walk_graph[51] = (11)*256 + (38);
	FRIGATE_sat_walk_graph[52] = (25)*256 + (38);
	FRIGATE_sat_walk_graph[53] = (38)*256 + (39);
	FRIGATE_sat_walk_graph[54] = (39)*256 + (40);
	FRIGATE_sat_walk_graph[55] = (40)*256 + (41);
	FRIGATE_sat_walk_graph[56] = (41)*256 + (37);
	FRIGATE_sat_walk_graph[57] = (37)*256 + (42);
	FRIGATE_sat_walk_graph[58] = (37)*256 + (44);
	FRIGATE_sat_walk_graph[59] = (42)*256 + (44);
	FRIGATE_sat_walk_graph[60] = (42)*256 + (43);
	FRIGATE_sat_walk_graph[61] = (43)*256 + (44);
	FRIGATE_sat_walk_graph[62] = (37)*256 + (43);
	FRIGATE_sat_walk_graph[63] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[64] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[65] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[66] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[67] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[68] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[69] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[70] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[71] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[72] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[73] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[74] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[75] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[76] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[77] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[78] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[79] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[80] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[81] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[82] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[83] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[84] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[85] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[86] = (-1)*256 + (-1);
	FRIGATE_sat_walk_graph[87] = (-1)*256 + (-1);
}
