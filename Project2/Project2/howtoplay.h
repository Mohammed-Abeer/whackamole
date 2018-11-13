
void howtoplay1(char men[])
{iShowBMP(0,0,men);
 iShowBMP(1050, 650, "images\\back.bmp");

	FILE *fplay;
	fplay = fopen("docs.txt", "r");
	char line[300];
	int k=500;
	while (!feof(fplay))
	{
		fgets(line, 300, fplay);
		iText(0, k, line,GLUT_BITMAP_TIMES_ROMAN_24);
			k=k-30;
	}
	fclose(fplay);

}
