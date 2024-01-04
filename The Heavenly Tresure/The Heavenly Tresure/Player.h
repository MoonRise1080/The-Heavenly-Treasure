#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


struct Player
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int idleIndex = 0, runIndex = 0;
	int moveCheck = 0;
	bool idle = true;
	bool rdirection = true;
	
	int img_idle[8], img_invIdle[8], img_run[10], img_invRun[10];

	

	Player(int pos_x, int pos_y, int dim_x, int dim_y, bool idle, bool rdirection)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->idle = idle;
		this->rdirection = rdirection;
	}

}mainChar(0, 0, 300, 165, true, true);

#endif