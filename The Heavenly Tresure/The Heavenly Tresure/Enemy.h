#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
#define enemyRangeMax 250
#define enemyRangeMin 50
#include "Player.h"
#include <cstdlib>

struct Enemy
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int idleIndex = 0, runIndex = 0, attackIndex = 0;
	int moveCheck = 0;
	int padN = 50;
	int padInv = 0;
	int hp;
	bool idle = true;
	bool rdirection = true;
	bool collision = false;
	bool chase = true;
	bool attack = true;
	bool isDead = false;
	int img_idle[8], img_invIdle[8], img_run[8], img_invRun[8], img_attack[10], img_invAttack[10];

	Enemy()
	{
		;
	}

	Enemy(int padN, int padInv)
	{
		this->padN = padN;
		this->padInv = padInv;
	}


	Enemy(int pos_x, int pos_y, int dim_x, int dim_y, int hp, bool idle, bool rdirection, bool collision, bool chase, bool attack, bool isDead)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->hp = hp;
		this->idle = idle;
		this->rdirection = rdirection;
		this->collision = collision;
		this->chase = chase;
		this->attack = attack;
		this->isDead = isDead;
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

	void enemyAttack()
	{
		if (isDead == false)
		{
			if (abs(mainChar.pos_x - pos_x) <= 50)
			{
				mainChar.hp++;
				if (mainChar.hp == 4 && mainChar.dead <= 3)
				{
					mainChar.isDead = true;
					mainChar.dead++;
					mainChar.hp = 0;
				}
			}
		}
	}


}huntressMother(53, 112), bringerMother(210, 210);


void chaseCheck(Enemy *currentEnemy)
{
	if (!(*currentEnemy).isDead)
	{
		if (abs(mainChar.pos_x - (*currentEnemy).pos_x) <= enemyRangeMax && abs(mainChar.pos_x - (*currentEnemy).pos_x) >= enemyRangeMin)
		{
			(*currentEnemy).idle = false;
			(*currentEnemy).chase = true;
			(*currentEnemy).attack = false;
			if (mainChar.pos_x - (*currentEnemy).pos_x <= 0)
			{
				(*currentEnemy).rdirection = false;
			}
			else
			{
				(*currentEnemy).rdirection = true;
			}
		}
		else if (abs(mainChar.pos_x - (*currentEnemy).pos_x) > enemyRangeMax)
		{
			(*currentEnemy).idle = true;
			(*currentEnemy).chase = false;
			(*currentEnemy).attack = false;
		}
		else if ((abs(mainChar.pos_x - (*currentEnemy).pos_x) < enemyRangeMin) && (abs(mainChar.pos_y - (*currentEnemy).pos_y) <= 50))
		{
			(*currentEnemy).attack = true;
			(*currentEnemy).idle = false;
			(*currentEnemy).chase = false;

			if ((abs(mainChar.pos_x - (*currentEnemy).pos_x <= 50)) && mainChar.attack == true && mainChar.atkDec == true && (*currentEnemy).isDead == false)
			{
				mainChar.atkDec = false;
				(*currentEnemy).hp--;
				if ((*currentEnemy).hp <= 0)
				{
					(*currentEnemy).isDead = true;
					mainChar.score += 50;
					(*currentEnemy).hp = 0;
				}
			}
		}
	}
}


void showHuntressAnimations(Enemy animationEnemy)
{
	if (!animationEnemy.isDead)
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

		else if (animationEnemy.chase)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_run[huntressMother.runIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_invRun[huntressMother.runIndex]);
			}

			animationEnemy.moveCheck++;

			if (animationEnemy.moveCheck > 200)
			{
				animationEnemy.moveCheck = 0;
				animationEnemy.idle = true;
			}

		}

		else if (animationEnemy.attack)
		{
			if (animationEnemy.rdirection)
			{
				animationEnemy.dim_x += 200;
				animationEnemy.dim_y += 200;
				animationEnemy.pos_x -= 107;
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_attack[huntressMother.attackIndex]);
			}

			else
			{
				animationEnemy.dim_x += 200;
				animationEnemy.dim_y += 200;
				animationEnemy.pos_x -= 107;
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, huntressMother.img_invAttack[huntressMother.attackIndex]);
			}
		}
	}

}


void showBringerAnimations(Enemy animationEnemy)
{
	if (!animationEnemy.isDead)
	{
		if (animationEnemy.idle)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_idle[bringerMother.idleIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x - 177, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_invIdle[bringerMother.idleIndex]);
			}
		}

		else if (animationEnemy.chase)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_run[bringerMother.runIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x - 172, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_invRun[bringerMother.runIndex]);
			}

			animationEnemy.moveCheck++;

			if (animationEnemy.moveCheck > 200)
			{
				animationEnemy.moveCheck = 0;
				animationEnemy.idle = true;
			}

		}

		else if (animationEnemy.attack)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_attack[bringerMother.attackIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x - 156, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_invAttack[bringerMother.attackIndex]);
			}
		}
	}

}

void showBringerAnimations(Enemy animationEnemy, int multi)
{
	if (!animationEnemy.isDead)
	{
		if (animationEnemy.idle)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_idle[bringerMother.idleIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x - 177 * multi, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_invIdle[bringerMother.idleIndex]);
			}
		}

		else if (animationEnemy.chase)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_run[bringerMother.runIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x - 172 * multi, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_invRun[bringerMother.runIndex]);
			}

			animationEnemy.moveCheck++;

			if (animationEnemy.moveCheck > 200)
			{
				animationEnemy.moveCheck = 0;
				animationEnemy.idle = true;
			}

		}

		else if (animationEnemy.attack)
		{
			if (animationEnemy.rdirection)
			{
				iShowImage(animationEnemy.pos_x, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_attack[bringerMother.attackIndex]);
			}

			else
			{
				iShowImage(animationEnemy.pos_x - 156 * multi, animationEnemy.pos_y, animationEnemy.dim_x, animationEnemy.dim_y, bringerMother.img_invAttack[bringerMother.attackIndex]);
			}
		}
	}

}


#endif