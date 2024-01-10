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

/*void huntressAni()
{
	if (huntress.idle)
	{
		if (huntress.rdirection)
		{
			iShowImage(huntress.pos_x, huntress.pos_y, huntress.dim_x, huntress.dim_y, huntress.img_idle[huntress.idleIndex]);
		}

		else
		{
			iShowImage(huntress.pos_x, huntress.pos_y, huntress.dim_x, huntress.dim_y, huntress.img_idle[huntress.idleIndex]);
		}

	}

	else
	{
		if (mainChar.rdirection)
		{
			iShowImage(huntress.pos_x, huntress.pos_y, huntress.dim_x, huntress.dim_y, huntress.img_idle[huntress.idleIndex]);
		}

		else
		{
			iShowImage(huntress.pos_x, huntress.pos_y, huntress.dim_x, huntress.dim_y, huntress.img_idle[huntress.idleIndex]);
		}

		huntress.moveCheck++;

		if (huntress.moveCheck > 200)
		{
			huntress.moveCheck = 0;
			huntress.idle = true;
		}

	}

	}


*/

#endif