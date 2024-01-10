#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED


struct Enemy
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int idleIndex = 0, runIndex = 0;
	int moveCheck = 0;
	int padN = 50;
	int padInv = 0;
	bool idle = true;
	bool rdirection = true;

	int img_idle[8], img_invIdle[8];

	Enemy()
	{
		;
	}


	Enemy(int pos_x, int pos_y, int dim_x, int dim_y, bool idle, bool rdirection)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->idle = idle;
		this->rdirection = rdirection;
	}

};



#endif