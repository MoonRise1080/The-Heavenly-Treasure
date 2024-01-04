#ifndef LEVELONE_H_INCLUDED
#define LEVELONE_H_INCLUDED
#define screenWidth 1280
#define screenHight 720

#include "Backgrounds.h"
#include "Loadimg.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"

bool isStart = false;
int phase = 0;

void showLevelOne()
{
	
	if (phase == 0)
	{
		iShowImage(lvlOnePhaseOne.pos_x, lvlOnePhaseOne.pos_y, lvlOnePhaseOne.dim_x, lvlOnePhaseOne.dim_y, lvlOnePhaseOne.bgImage);
		if (mainChar.pos_x == 1280)
		{
			phase++;
			mainChar.pos_x = 0;
		}
	}

	else if (phase == 1)
	{
		iShowImage(lvlOnePhaseTwo.pos_x, lvlOnePhaseTwo.pos_y, lvlOnePhaseTwo.dim_x, lvlOnePhaseTwo.dim_y, lvlOnePhaseTwo.bgImage);
		if (mainChar.pos_x > 1280)
		{
			phase++;
			mainChar.pos_x = 0;
		}
		else if (mainChar.pos_x < 0)
		{
			phase--;
			mainChar.pos_x = 1280;
		}
	}

	else if (phase == 2)
	{
		iShowImage(lvlOnePhaseThree.pos_x, lvlOnePhaseThree.pos_y, lvlOnePhaseThree.dim_x, lvlOnePhaseThree.dim_y, lvlOnePhaseThree.bgImage);
		if (mainChar.pos_x > 1280)
		{
			phase++;
			mainChar.pos_x = 0;
		}
		else if (mainChar.pos_x < 0)
		{
			phase--;
			mainChar.pos_x = 1280;
		}
	}

	

	if (mainChar.idle)
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

	else
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

	
}

#endif





