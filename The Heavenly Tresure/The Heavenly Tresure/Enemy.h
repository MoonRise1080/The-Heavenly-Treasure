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
	bool gravity = true;
	bool chase = true;

	int img_idle[8], img_invIdle[8];

	Enemy()
	{
		;
	}

	Enemy(int pos_x, int pos_y, int dim_x, int dim_y, bool idle, bool rdirection, bool gravity,bool chase)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->idle = idle;
		this->rdirection = rdirection;
		this->gravity = gravity;
		this->chase = chase;
	}

	void applyGravityEnemy()
	{
		pos_y -= 15;
	}
	/*void Animation()
	{
		if (rdirection)
		{
			iShowImage(huntressMother.pos_x, huntressMother.pos_y, huntressMother.dim_x, huntressMother.dim_y, huntressMother.img_run[huntressMother.runIndex]);
		}

		else
		{
			iShowImage(huntressMother.pos_x, huntressMother.pos_y, huntressMother.dim_x, huntressMother.dim_y, huntressMother.img_invRun[huntressMother.runIndex]);
		}
		moveCheck++;
		if (moveCheck > 200)
		{
			moveCheck = 0;
			idle = true;
		}
	}*/
	void Chase()
	{
		if (rdirection==true)
		{
			pos_x += 10;
		}
		else if (rdirection!=true)
		{
			pos_x -= 10;
		}
	}

};



#endif