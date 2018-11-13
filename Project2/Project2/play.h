#define hit 3
int game(int mx, int my,int hole_Row_dx[],int hole_Col_dy[],int hole[])
{
	if(hole[0]==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		return 1;
	}
	if(hole[1]==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		return 1;
	}
	if(hole[2]==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		return 1;
	}
	if(hole[3]==hit)
	{
	if(mx>=hole_Row_dx[0] && mx<=(hole_Row_dx[0]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		return 1;
	}
	if(hole[4]==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		return 1;
	}
	if(hole[5]==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		return 1;
	}
	if(hole[6]==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		return 1;
	}
	if(hole[7]==hit)
	{
	if(mx>=hole_Row_dx[1] && mx<=(hole_Row_dx[1]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		return 1;
	}
	if(hole[8]==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		return 1;
	}
	if(hole[9]==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		return 1;
	}
	if(hole[10]==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		return 1;
	}
	if(hole[11]==hit)
	{
	if(mx>=hole_Row_dx[2] && mx<=(hole_Row_dx[2]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		return 1;
	}
	if(hole[12]==hit)
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[0] && my <=(hole_Col_dy[0]+128))
		return 1;
	}
	if(hole[13]==hit)
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[1] && my <=(hole_Col_dy[1]+128))
		return 1;
	}
	if(hole[14]==hit)
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[2] && my <=(hole_Col_dy[2]+128))
		return 1;
	}
	if(hole[15]==hit)                                                                      
	{
	if(mx>=hole_Row_dx[3] && mx<=(hole_Row_dx[3]+256) && my>=hole_Col_dy[3] && my <=(hole_Col_dy[3]+128))
		return 1;
	}
}