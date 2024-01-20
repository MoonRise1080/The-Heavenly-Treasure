#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "Player.h"


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
	bool collision = false;
	bool chase = true;
	int img_idle[8], img_invIdle[8], img_run[8], img_invRun[8];

	Enemy()
	{
		;
	}

	Enemy(int padN, int padInv)
	{
		this->padN = padN;
		this->padInv = padInv;
	}


	Enemy(int pos_x, int pos_y, int dim_x, int dim_y, bool idle, bool rdirection, bool collision, bool chase)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->idle = idle;
		this->rdirection = rdirection;
		this->collision = collision;
		this->chase = chase;
	}

	void applyGravityEnemy()
	{
		pos_y -= 15;
	}

	void Chase()
	{
		if (rdirection)
		{
			pos_x += 10;
		}
		else
		{
			pos_x -= 10;
		}
	}

}huntressMother(53, 112);


void showHuntressAnimations(Enemy animationEnemy)
{
	if (animationEnemy.idle)
	{
		if (animationEnemy.rdirection)
		{
			iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_idle[huntressMother.idleIndex]);
		}

		else
		{
			iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_invIdle[huntressMother.idleIndex]);
		}
	}

	else
	{
		if (animationEnemy.rdirection)
		{
			iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_run[mainChar.runIndex]);
		}

		else
		{
			iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_invRun[mainChar.runIndex]);
		}

		huntressMother.moveCheck++;

		if (huntressMother.moveCheck > 200)
		{
			huntressMother.moveCheck = 0;
			huntressMother.idle = true;
		}

	}
}


#endif