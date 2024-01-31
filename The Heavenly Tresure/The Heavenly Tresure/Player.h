#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


struct Player
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int idleIndex = 0;
	int runIndex = 0;
	int attIndex = 0;
	int moveCheck = 0;
	int padN = 51;
	int padInv = 51;
	int hp = 0;
	int dead = 0;
	bool isDead = false;
	bool idle = true;
	bool rdirection = true;
	bool attack = false;
	bool attRe = false;

	int img_idle[8], img_invIdle[8], img_run[10], img_invRun[10], img_att[6], img_attInv[6];

	

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


void applyGravity()
{
	mainChar.pos_y -= 15;
}

void gameOver(int resX,int resY)
{
	if (mainChar.isDead == true)
	{
		if (mainChar.dead <= 3)
		{
			mainChar.pos_x = resX;
			mainChar.pos_y = resY;
			mainChar.isDead = false;
		}
		if (mainChar.dead==4)
		{
			//GAME IS OVER RETURN TO THE MENU PAGE;
		}
	}
}

void showPlayerAnimations()
{
	int tempX;

	if (mainChar.idle == true && mainChar.attack == false)
	{
		if (mainChar.rdirection)
		{
			iShowImage(mainChar.pos_x, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, mainChar.img_idle[mainChar.idleIndex]);
		}

		else
		{
			iShowImage(mainChar.pos_x, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, mainChar.img_invIdle[mainChar.idleIndex]);
		}

	}

	else if (mainChar.idle == false && mainChar.attack == false)
	{
		if (mainChar.rdirection)
		{
			iShowImage(mainChar.pos_x, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, mainChar.img_run[mainChar.runIndex]);
		}

		else
		{
			iShowImage(mainChar.pos_x, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, mainChar.img_invRun[mainChar.runIndex]);
		}

		mainChar.moveCheck++;

		if (mainChar.moveCheck > 200)
		{
			mainChar.moveCheck = 0;
			mainChar.idle = true;
		}

	}

	if (mainChar.attack)
	{
		if (mainChar.attRe == false)
		{
			mainChar.dim_x += 75;
			mainChar.dim_y += 25;
			mainChar.attRe = true;
		}
		
		if (mainChar.rdirection)
		{
			iShowImage(mainChar.pos_x, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, mainChar.img_att[mainChar.attIndex]);
		}

		else
		{
			tempX = mainChar.pos_x - 100;
			iShowImage(tempX, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, mainChar.img_attInv[mainChar.attIndex]);
		}

		mainChar.moveCheck++;

		if (mainChar.moveCheck > 200)
		{
			mainChar.moveCheck = 0;
			mainChar.idle = true;
			mainChar.attack = false;
			mainChar.attRe = false;
			mainChar.dim_x -= 75;
			mainChar.dim_y -= 25;
		}
	}
}

#endif