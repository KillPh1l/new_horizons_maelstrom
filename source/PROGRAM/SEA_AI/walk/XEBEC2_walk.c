int XEBEC2_walk_count;
float XEBEC2_walk_verts[72];
int XEBEC2_walk_types[24];
int XEBEC2_walk_graph[48];

void XEBEC2_walk_init()
{
	XEBEC2_walk_count = 24;

	XEBEC2_walk_verts[0 ] = -2.476301;
	XEBEC2_walk_verts[1 ] = 1.336209;
	XEBEC2_walk_verts[2 ] = -6.020534;
	XEBEC2_walk_verts[3 ] = 0.506837;
	XEBEC2_walk_verts[4 ] = 1.328558;
	XEBEC2_walk_verts[5 ] = -4.661572;
	XEBEC2_walk_verts[6 ] = 1.587154;
	XEBEC2_walk_verts[7 ] = 1.064352;
	XEBEC2_walk_verts[8 ] = 1.060965;
	XEBEC2_walk_verts[9 ] = 2.569438;
	XEBEC2_walk_verts[10] = 1.064352;
	XEBEC2_walk_verts[11] = 1.060965;
	XEBEC2_walk_verts[12] = 1.117441;
	XEBEC2_walk_verts[13] = 1.022512;
	XEBEC2_walk_verts[14] = 4.932908;
	XEBEC2_walk_verts[15] = -2.341259;
	XEBEC2_walk_verts[16] = 2.837312;
	XEBEC2_walk_verts[17] = -7.667893;
	XEBEC2_walk_verts[18] = 0.479638;
	XEBEC2_walk_verts[19] = 1.147645;
	XEBEC2_walk_verts[20] = 9.076429;
	XEBEC2_walk_verts[21] = -0.626960;
	XEBEC2_walk_verts[22] = 1.147645;
	XEBEC2_walk_verts[23] = 9.314243;
	XEBEC2_walk_verts[24] = -1.213002;
	XEBEC2_walk_verts[25] = 1.025597;
	XEBEC2_walk_verts[26] = 5.263597;
	XEBEC2_walk_verts[27] = -1.262427;
	XEBEC2_walk_verts[28] = 1.095699;
	XEBEC2_walk_verts[29] = -0.204647;
	XEBEC2_walk_verts[30] = -2.464652;
	XEBEC2_walk_verts[31] = 1.095699;
	XEBEC2_walk_verts[32] = 0.976002;
	XEBEC2_walk_verts[33] = -1.147633;
	XEBEC2_walk_verts[34] = 1.338536;
	XEBEC2_walk_verts[35] = -5.021188;
	XEBEC2_walk_verts[36] = -1.970922;
	XEBEC2_walk_verts[37] = 2.872777;
	XEBEC2_walk_verts[38] = -8.889812;
	XEBEC2_walk_verts[39] = 1.678335;
	XEBEC2_walk_verts[40] = 2.895517;
	XEBEC2_walk_verts[41] = -9.795836;
	XEBEC2_walk_verts[42] = 1.678335;
	XEBEC2_walk_verts[43] = 2.895517;
	XEBEC2_walk_verts[44] = -6.495187;
	XEBEC2_walk_verts[45] = -0.419974;
	XEBEC2_walk_verts[46] = 1.320235;
	XEBEC2_walk_verts[47] = -5.370546;
	XEBEC2_walk_verts[48] = 1.507408;
	XEBEC2_walk_verts[49] = 1.190113;
	XEBEC2_walk_verts[50] = -3.019456;
	XEBEC2_walk_verts[51] = 1.507408;
	XEBEC2_walk_verts[52] = 1.126008;
	XEBEC2_walk_verts[53] = -1.452976;
	XEBEC2_walk_verts[54] = 1.453629;
	XEBEC2_walk_verts[55] = 1.065253;
	XEBEC2_walk_verts[56] = 3.347712;
	XEBEC2_walk_verts[57] = 1.375661;
	XEBEC2_walk_verts[58] = 1.041317;
	XEBEC2_walk_verts[59] = 6.421756;
	XEBEC2_walk_verts[60] = -1.335063;
	XEBEC2_walk_verts[61] = 1.051757;
	XEBEC2_walk_verts[62] = 6.215945;
	XEBEC2_walk_verts[63] = -1.568791;
	XEBEC2_walk_verts[64] = 1.035584;
	XEBEC2_walk_verts[65] = 3.341241;
	XEBEC2_walk_verts[66] = -1.411636;
	XEBEC2_walk_verts[67] = 1.207289;
	XEBEC2_walk_verts[68] = -3.062330;
	XEBEC2_walk_verts[69] = -0.419974;
	XEBEC2_walk_verts[70] = 1.361167;
	XEBEC2_walk_verts[71] = -7.075140;

	XEBEC2_walk_types[0 ] = 0;
	XEBEC2_walk_types[1 ] = 0;
	XEBEC2_walk_types[2 ] = 0;
	XEBEC2_walk_types[3 ] = 0;
	XEBEC2_walk_types[4 ] = 0;
	XEBEC2_walk_types[5 ] = 0;
	XEBEC2_walk_types[6 ] = 0;
	XEBEC2_walk_types[7 ] = 0;
	XEBEC2_walk_types[8 ] = 0;
	XEBEC2_walk_types[9 ] = 0;
	XEBEC2_walk_types[10] = 0;
	XEBEC2_walk_types[11] = 0;
	XEBEC2_walk_types[12] = 0;
	XEBEC2_walk_types[13] = 0;
	XEBEC2_walk_types[14] = 0;
	XEBEC2_walk_types[15] = 2;
	XEBEC2_walk_types[16] = 1;
	XEBEC2_walk_types[17] = 1;
	XEBEC2_walk_types[18] = 1;
	XEBEC2_walk_types[19] = 1;
	XEBEC2_walk_types[20] = 1;
	XEBEC2_walk_types[21] = 1;
	XEBEC2_walk_types[22] = 1;
	XEBEC2_walk_types[23] = 3;

	XEBEC2_walk_graph[0 ] = (24)*256 + (16);
	XEBEC2_walk_graph[1 ] = (16)*256 + (11);
	XEBEC2_walk_graph[2 ] = (16)*256 + (0);
	XEBEC2_walk_graph[3 ] = (16)*256 + (1);
	XEBEC2_walk_graph[4 ] = (11)*256 + (0);
	XEBEC2_walk_graph[5 ] = (0)*256 + (5);
	XEBEC2_walk_graph[6 ] = (5)*256 + (12);
	XEBEC2_walk_graph[7 ] = (-1)*256 + (-1);
	XEBEC2_walk_graph[8 ] = ( 3)*256 + (17);
	XEBEC2_walk_graph[9 ] = (1)*256 + (11);
	XEBEC2_walk_graph[10] = (23)*256 + (18);
	XEBEC2_walk_graph[11] = (13)*256 + (14);
	XEBEC2_walk_graph[12] = (11)*256 + (23);
	XEBEC2_walk_graph[13] = (1)*256 + (23);
	XEBEC2_walk_graph[14] = (9)*256 + (23);
	XEBEC2_walk_graph[15] = (1)*256 + (9);
	XEBEC2_walk_graph[16] = (23)*256 + (17);
	XEBEC2_walk_graph[17] = (17)*256 + (1);
	XEBEC2_walk_graph[18] = (9)*256 + (1);
	XEBEC2_walk_graph[19] = (9)*256 + (10);
	XEBEC2_walk_graph[20] = (10)*256 + (22);
	XEBEC2_walk_graph[21] = (22)*256 + (9);
	XEBEC2_walk_graph[22] = (22)*256 + (8);
	XEBEC2_walk_graph[23] = (18)*256 + (23);
	XEBEC2_walk_graph[24] = (18)*256 + (17);
	XEBEC2_walk_graph[25] = (-1)*256 + (-1);
	XEBEC2_walk_graph[26] = (8)*256 + (21);
	XEBEC2_walk_graph[27] = (21)*256 + (7);
	XEBEC2_walk_graph[28] = (7)*256 + (6);
	XEBEC2_walk_graph[29] = (-1)*256 + (-1);
	XEBEC2_walk_graph[30] = (16)*256 + (17);
	XEBEC2_walk_graph[31] = (4)*256 + (19);
	XEBEC2_walk_graph[32] = (19)*256 + (3);
	XEBEC2_walk_graph[33] = (19)*256 + (2);
	XEBEC2_walk_graph[34] = (2)*256 + (3);
	XEBEC2_walk_graph[35] = (3)*256 + (18);
	XEBEC2_walk_graph[36] = (2)*256 + (18);
	XEBEC2_walk_graph[37] = (8)*256 + (4);
	XEBEC2_walk_graph[38] = (6)*256 + (19);
	XEBEC2_walk_graph[39] = (-1)*256 + (-1);
	XEBEC2_walk_graph[40] = (-1)*256 + (-1);
	XEBEC2_walk_graph[41] = (9)*256 + (17);
	XEBEC2_walk_graph[42] = (10)*256 + (19);
	XEBEC2_walk_graph[43] = (22)*256 + (2);
	XEBEC2_walk_graph[44] = (10)*256 + (21);
	XEBEC2_walk_graph[45] = (5)*256 + (14);
	XEBEC2_walk_graph[46] = (12)*256 + (14);
	XEBEC2_walk_graph[47] = (11)*256 + (22);
}
