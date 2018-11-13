

void creditf(char men[])
{iShowBMP(0,0,men);
	FILE *fcredit;
	fcredit = fopen("focs.txt", "r");
	char o[300];
	int j=300;
	fgets(o,300,fcredit);
	while (!feof(fcredit))
	{
		fgets(o, 300, fcredit);
		iText(0, j, o,GLUT_BITMAP_HELVETICA_18);
		j=j-30;
	}
	fclose(fcredit);
}
