#include<stdio.h>
#include "iGraphics.h"
#include "menu.h"
#include"credit.h"
#include"howtoplay.h"
#include"gameover.h"
#define screen_width 1200
#define screen_height 720
int pixelx=800;
int bg_G=147;
int bg_R=0;
int bg_B=0;
int gameState = 0;
int hole_Row_dx[4]={50,350,650,950};
int hole_Col_dy[4]={50,200,350,500};
char holes[4][100] = {"images\\hole 0.bmp","images\\hole 1.bmp","images\\hole 2.bmp","images\\hole 3.bmp"};
char men[100]={"images\\home.bmp"};
int hole_index[16];
int timer=61;
int timer_flag=0;
char timer_string[10];
int timer_dx=100,timer_dy=680;
int points=0;
char points_string[10];
int points_dx=500,points_dy=680;
int left_mouse=0;
#define hit 3
int gamePlay = 0;
int highscore = 30;
char highscore_string[10];
struct hole{
	int hole_number;
};
struct hole  hole[16];
#define gameOver 100
bool pause = 0;

void iDraw()
{
	int i,j,k=0;
//place your drawing codes here
iClear();
if(gameState==0)
{
	menu1(pixelx,men);
}
if(gameState==1)
{
iSetColor(255,255,255);
iFilledRectangle(0,screen_height-92,screen_width,92);
iSetColor(255,0,0);
if(timer_flag==0)
	iText(timer_dx,timer_dy,"Time Left: 120",GLUT_BITMAP_TIMES_ROMAN_24);
else 
	iText(timer_dx,timer_dy,"Time Left: ",GLUT_BITMAP_TIMES_ROMAN_24);
iText(timer_dx+110,timer_dy,timer_string,GLUT_BITMAP_TIMES_ROMAN_24);   //time left and points are counted in this part
if(points==0)
	iText(points_dx,points_dy,"Points: 0",GLUT_BITMAP_TIMES_ROMAN_24);
else {
	iText(points_dx,points_dy,"Points: ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(points_dx+77,points_dy,points_string,GLUT_BITMAP_TIMES_ROMAN_24);
}
iSetColor(bg_R,bg_G,bg_B);
iFilledRectangle(0,0,screen_width,screen_height-92);

for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		iShowBMP(hole_Row_dx[i],hole_Col_dy[j],holes[hole[k].hole_number]);    // holes and their respective images are screened by using structure.
		k++;
	}
}
if(pause==0)
	iShowBMP(750,650,"images\\pause.bmp");
if(pause==1)
	iShowBMP(750,650,"images\\play.bmp");
iShowBMP(1050,650,"images\\back.bmp");
}
if(gameState==2)
{
	iShowBMP(0,0,men);
	iShowBMP(1050,650,"images\\back.bmp");
	iSetColor(255,255,255);
	iText(585,360,"HIGHSCORE: ",GLUT_BITMAP_TIMES_ROMAN_24);  //showing highscore
	iText(750,360,highscore_string,GLUT_BITMAP_TIMES_ROMAN_24);
}
if(gameState==3)
	{
	creditf(men);	
	}
	if(gameState==4)
	{
		howtoplay1(men);
	}
	if(gameState==gameOver)
	{
		gameov(points_string);
	}
}
void iMouseMove(int mx, int my)
{
//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
{
	if(gameState==1)
{
	if(hole[0].hole_number==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		left_mouse=1;
	}
	if(hole[1].hole_number==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		left_mouse=1;
	}
	if(hole[2].hole_number==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		left_mouse=1;
	}
	if(hole[3].hole_number==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		left_mouse=1;
	}
	if(hole[4].hole_number==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		left_mouse=1;
	}
	if(hole[5].hole_number==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		left_mouse=1;
	}
	if(hole[6].hole_number==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		left_mouse=1;
	}
	if(hole[7].hole_number==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		left_mouse=1;
	}
	if(hole[8].hole_number==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		left_mouse=1;
	}
	if(hole[9].hole_number==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		left_mouse=1;
	}
	if(hole[10].hole_number==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		left_mouse=1;
	}
	if(hole[11].hole_number==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		left_mouse=1;
	}
	if(hole[12].hole_number==hit)
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		left_mouse=1;
	}
	if(hole[13].hole_number==hit)
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		left_mouse=1;
	}
	if(hole[14].hole_number==hit)
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		left_mouse=1;
	}
	if(hole[15].hole_number==hit)                                                                      
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		left_mouse=1;
	}
	if(mx>=750 && mx<=878 && my>=650 && my<=714)
			pause=!pause;
}
	//upper part is for hitting moles and lower part is for changing screen from menu
	if(mx>=800 && mx<=928 && my>=450 && my<=514)
	{
		gameState=1;
	}
	if(mx>=800 && mx<=928 && my>=50 && my<=114)
	{
		exit(0);
	}
	if(mx>=800 && mx<=928 && my>=350 && my<=414)
	{
		gameState=2;
	}
	if(mx>=800 && mx<=928 && my>=250 && my<=314)
	{
		gameState=3;
	}
	if(mx>=800 && mx<=928 && my>=150 && my<=214)
	{
		gameState=4;
	}
	if(gameState==3 || gameState==4 || gameState==2)
	{
		if(mx>=1050 && mx<=1178 && my>=650 && my<=714)
			{
				gameState=0;
				points=0;	
			}
	}
	if(gameState==gameOver || gameState==1)
	{
		if(mx>=1050 && mx<=1178 && my>=650 && my<=714)  // return to main screen option after gameover
		{
			gameState=0;
			timer=61;
			points=0;
		}
			
	}
	
}
		if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
			exit(0);
//place your codes here
}
void iKeyboard(unsigned char key)
{
	if(key=='p')
	{
		gamePlay=1;
		gameState=1;
	}
//place your codes here
}
void iSpecialKeyboard(unsigned char key)
{
//place your codes for other keys here
}
void change()
{
	if(pause==0){
	int k;
	for(k=0;k<16;k++)
	{
		hole[k].hole_number=rand()%4; //moles randomly pops up from hole
	}
	}
}
void time()
{
	if(gameState==1 && pause==0)
{
	timer_flag=1;
    timer--;
    sprintf(timer_string, "%d", timer); // time management
	if(timer<0)
		gameState=gameOver;
}
}
void score()
{
	if(gameState==1 && pause==0)
{
	if(left_mouse==1)
		points++;
	sprintf(points_string, "%d", points); // points management
	left_mouse=0;
}
}
int main()
{
//place your own initialization codes here.
	iSetTimer(500,score);
	iSetTimer(500,change);
	iSetTimer(1000,time);
	PlaySound("images//blinx.wav",NULL,SND_LOOP|SND_ASYNC); // sound music
	if(gameState==gameOver)
	{
		if(points>highscore)
		{                              //if you gain more points than the highscore, your score will replace to the highscore
			highscore=points;
		}
	}
	if(gameState==0)
		points=0;
	sprintf(highscore_string, "%d", highscore);
	iInitialize(screen_width, screen_height,"Whacamoles");

return 0;
}