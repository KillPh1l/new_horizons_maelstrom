int LuggerVML_walk_count;
float LuggerVML_walk_verts[78];
int LuggerVML_walk_types[26];
int LuggerVML_walk_graph[52];

void LuggerVML_walk_init()
{
	LuggerVML_walk_count = 26;

	LuggerVML_walk_verts[0 ] = -1.200;
	LuggerVML_walk_verts[1 ] = 1.500;
	LuggerVML_walk_verts[2 ] = 5.500;
	LuggerVML_walk_verts[3 ] = -1.701;
	LuggerVML_walk_verts[4 ] = 1.601;
	LuggerVML_walk_verts[5 ] = -6.601;
	LuggerVML_walk_verts[6 ] = 0.702;
	LuggerVML_walk_verts[7 ] = 3.302;
	LuggerVML_walk_verts[8 ] = -12.502;
	LuggerVML_walk_verts[9 ] = -0.703;
	LuggerVML_walk_verts[10] = 3.303;
	LuggerVML_walk_verts[11] = -12.503;
	LuggerVML_walk_verts[12] = 1.704;
	LuggerVML_walk_verts[13] = 1.604;
	LuggerVML_walk_verts[14] = -6.604;
	LuggerVML_walk_verts[15] = -1.705;
	LuggerVML_walk_verts[16] = 2.805;
	LuggerVML_walk_verts[17] = -8.205;
	LuggerVML_walk_verts[18] = 1.706;
	LuggerVML_walk_verts[19] = 2.806;
	LuggerVML_walk_verts[20] = -8.206;
	LuggerVML_walk_verts[21] = 0.907;
	LuggerVML_walk_verts[22] = 1.507;
	LuggerVML_walk_verts[23] = 5.707;
	LuggerVML_walk_verts[24] = -0.608;
	LuggerVML_walk_verts[25] = 1.508;
	LuggerVML_walk_verts[26] = 3.008;
	LuggerVML_walk_verts[27] = -0.609;
	LuggerVML_walk_verts[28] = 1.509;
	LuggerVML_walk_verts[29] = -0.109;
	LuggerVML_walk_verts[30] = -0.610;
	LuggerVML_walk_verts[31] = 1.510;
	LuggerVML_walk_verts[32] = -3.510;
	LuggerVML_walk_verts[33] = 0.611;
	LuggerVML_walk_verts[34] = 1.511;
	LuggerVML_walk_verts[35] = -3.511;
	LuggerVML_walk_verts[36] = 0.612;
	LuggerVML_walk_verts[37] = 1.512;
	LuggerVML_walk_verts[38] = -0.112;
	LuggerVML_walk_verts[39] = 0.713;
	LuggerVML_walk_verts[40] = 1.513;
	LuggerVML_walk_verts[41] = 3.013;
	LuggerVML_walk_verts[42] = 3.014;
	LuggerVML_walk_verts[43] = 2.314;
	LuggerVML_walk_verts[44] = 6.014;
	LuggerVML_walk_verts[45] = -3.015;
	LuggerVML_walk_verts[46] = 2.315;
	LuggerVML_walk_verts[47] = 6.015;
	LuggerVML_walk_verts[48] = -3.516;
	LuggerVML_walk_verts[49] = 2.216;
	LuggerVML_walk_verts[50] = -3.516;
	LuggerVML_walk_verts[51] = 0.517;
	LuggerVML_walk_verts[52] = 10.517;
	LuggerVML_walk_verts[53] = 6.717;
	LuggerVML_walk_verts[54] = -0.618;
	LuggerVML_walk_verts[55] = 10.518;
	LuggerVML_walk_verts[56] = 6.718;
	LuggerVML_walk_verts[57] = -0.619;
	LuggerVML_walk_verts[58] = 13.419;
	LuggerVML_walk_verts[59] = -3.819;
	LuggerVML_walk_verts[60] = 3.520;
	LuggerVML_walk_verts[61] = 2.220;
	LuggerVML_walk_verts[62] = -3.520;
	LuggerVML_walk_verts[63] = 0.621;
	LuggerVML_walk_verts[64] = 13.421;
	LuggerVML_walk_verts[65] = -3.821;
	LuggerVML_walk_verts[66] = -0.022;
	LuggerVML_walk_verts[67] = 1.522;
	LuggerVML_walk_verts[68] = -5.722;
	LuggerVML_walk_verts[69] = 0.023;
	LuggerVML_walk_verts[70] = 1.523;
	LuggerVML_walk_verts[71] = -6.223;
	LuggerVML_walk_verts[72] = 0.024;
	LuggerVML_walk_verts[73] = 1.024;
	LuggerVML_walk_verts[74] = -6.824;
	LuggerVML_walk_verts[75] = -0.025;
	LuggerVML_walk_verts[76] = 0.825;
	LuggerVML_walk_verts[77] = -8.425;

	LuggerVML_walk_types[0 ] = 0;
	LuggerVML_walk_types[1 ] = 0;
	LuggerVML_walk_types[2 ] = 0;
	LuggerVML_walk_types[3 ] = 0;
	LuggerVML_walk_types[4 ] = 0;
	LuggerVML_walk_types[5 ] = 0;
	LuggerVML_walk_types[6 ] = 0;
	LuggerVML_walk_types[7 ] = 0;
	LuggerVML_walk_types[8 ] = 1;
	LuggerVML_walk_types[9 ] = 1;
	LuggerVML_walk_types[10] = 1;
	LuggerVML_walk_types[11] = 1;
	LuggerVML_walk_types[12] = 1;
	LuggerVML_walk_types[13] = 1;
	LuggerVML_walk_types[14] = 5;
	LuggerVML_walk_types[15] = 5;
	LuggerVML_walk_types[16] = 5;
	LuggerVML_walk_types[17] = 4;
	LuggerVML_walk_types[18] = 4;
	LuggerVML_walk_types[19] = 4;
	LuggerVML_walk_types[20] = 5;
	LuggerVML_walk_types[21] = 4;
	LuggerVML_walk_types[22] = 0;
	LuggerVML_walk_types[23] = 0;
	LuggerVML_walk_types[24] = 2;
	LuggerVML_walk_types[25] = 3;

	LuggerVML_walk_graph[0 ] = ( 0)*256 + ( 8);
	LuggerVML_walk_graph[1 ] = ( 8)*256 + (13);
	LuggerVML_walk_graph[2 ] = ( 8)*256 + ( 9);
	LuggerVML_walk_graph[3 ] = (22)*256 + ( 1);
	LuggerVML_walk_graph[4 ] = ( 7)*256 + (13);
	LuggerVML_walk_graph[5 ] = ( 2)*256 + ( 6);
	LuggerVML_walk_graph[6 ] = (13)*256 + (12);
	LuggerVML_walk_graph[7 ] = ( 6)*256 + ( 4);
	LuggerVML_walk_graph[8 ] = ( 5)*256 + ( 1);
	LuggerVML_walk_graph[9 ] = ( 2)*256 + ( 6);
	LuggerVML_walk_graph[10] = (12)*256 + (11);
	LuggerVML_walk_graph[11] = (11)*256 + (10);
	LuggerVML_walk_graph[12] = ( 0)*256 + (15);
	LuggerVML_walk_graph[13] = ( 2)*256 + ( 3);
	LuggerVML_walk_graph[14] = ( 9)*256 + (10);
	LuggerVML_walk_graph[15] = (-1)*256 + (-1);
	LuggerVML_walk_graph[16] = ( 3)*256 + ( 5);
	LuggerVML_walk_graph[17] = (10)*256 + (22);
	LuggerVML_walk_graph[18] = (11)*256 + (22);
	LuggerVML_walk_graph[19] = (22)*256 + (23);
	LuggerVML_walk_graph[20] = (23)*256 + (24);
	LuggerVML_walk_graph[21] = (24)*256 + (25);
	LuggerVML_walk_graph[22] = (12)*256 + (20);
	LuggerVML_walk_graph[23] = (20)*256 + (21);
	LuggerVML_walk_graph[24] = ( 9)*256 + (16);
	LuggerVML_walk_graph[25] = (16)*256 + (19);
	LuggerVML_walk_graph[26] = ( 7)*256 + (14);
	LuggerVML_walk_graph[27] = (14)*256 + (17);
	LuggerVML_walk_graph[28] = ( 8)*256 + (15);
	LuggerVML_walk_graph[29] = (15)*256 + (18);
	LuggerVML_walk_graph[30] = ( 0)*256 + ( 7);
	LuggerVML_walk_graph[31] = ( 4)*256 + (22);
	LuggerVML_walk_graph[32] = (-1)*256 + (-1);
	LuggerVML_walk_graph[33] = (-1)*256 + (-1);
	LuggerVML_walk_graph[34] = (-1)*256 + (-1);
	LuggerVML_walk_graph[35] = (-1)*256 + (-1);
	LuggerVML_walk_graph[36] = (-1)*256 + (-1);
	LuggerVML_walk_graph[37] = (-1)*256 + (-1);
	LuggerVML_walk_graph[38] = (-1)*256 + (-1);
	LuggerVML_walk_graph[39] = (-1)*256 + (-1);
	LuggerVML_walk_graph[40] = (-1)*256 + (-1);
	LuggerVML_walk_graph[41] = (-1)*256 + (-1);
	LuggerVML_walk_graph[42] = (-1)*256 + (-1);
	LuggerVML_walk_graph[43] = (-1)*256 + (-1);
	LuggerVML_walk_graph[44] = (-1)*256 + (-1);
	LuggerVML_walk_graph[45] = (-1)*256 + (-1);
	LuggerVML_walk_graph[46] = (-1)*256 + (-1);
	LuggerVML_walk_graph[47] = (-1)*256 + (-1);
	LuggerVML_walk_graph[48] = (-1)*256 + (-1);
	LuggerVML_walk_graph[49] = (-1)*256 + (-1);
	LuggerVML_walk_graph[50] = (-1)*256 + (-1);
	LuggerVML_walk_graph[51] = (-1)*256 + (-1);
}
