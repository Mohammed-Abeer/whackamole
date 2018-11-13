void gameov(char points_string[]){
iShowBMP(0,0,"images\\gameover.bmp");
		iSetColor(255,0,0);
		iText(585,600,"Points: ",GLUT_BITMAP_TIMES_ROMAN_24); //POINTS WILL BE SHOWN WITH GAMEOVER SCREEN
		iText(662,600,points_string,GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP(1050,650,"images\\back.bmp");
}