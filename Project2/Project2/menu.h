void menu1 (int pixelx, char men[])
{iShowBMP(0,0,men);
	iShowBMP(pixelx,450,"images\\new-game.bmp");
	iShowBMP(pixelx,350,"images\\highscore.bmp");
	iShowBMP(pixelx,250,"images\\credits.bmp");
	iShowBMP(pixelx,150,"images\\how-to-play.bmp"); // creating main menu
	iShowBMP(pixelx,50,"images\\exit.bmp");
}