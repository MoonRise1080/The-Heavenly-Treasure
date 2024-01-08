#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


struct Player
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int idleIndex = 0;
	int runIndex = 0;
	int moveCheck = 0;
	int padN = 51;
	int padInv = 51;
	int hp = 0;
	bool idle = true;
	bool rdirection = true;
	
	int img_idle[8], img_invIdle[8], img_run[10], img_invRun[10];

	

	Player(int pos_x, int pos_y, int dim_x, int dim_y, int hp, bool idle, bool rdirection)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->hp = hp;
		this->idle = idle;
		this->rdirection = rdirection;
	}

}mainChar(100, 324, 138, 120, 0, true, true);

#endif