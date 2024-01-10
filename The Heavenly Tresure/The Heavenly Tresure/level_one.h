#ifndef LEVELONE_H_INCLUDED
#define LEVELONE_H_INCLUDED
#define screenWidth 1280
#define screenHight 720

#include "Backgrounds.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"
#include "HUD.h"
#include "Enemy.h"

bool isStart = false;
int phase = 0;
bool collsion = false;
Enemy huntress(890, 180, 200, 200, true, false);

void showLevelOne()
{
	
	if (phase == 0)
	{
		collisionLvlOnePhaseOne();
		iShowImage(lvlOnePhaseOne.pos_x, lvlOnePhaseOne.pos_y, lvlOnePhaseOne.dim_x, lvlOnePhaseOne.dim_y, lvlOnePhaseOne.bgImage);
		//huntressAni();

		showHp();
		if (mainChar.pos_x == 1280)
		{
			phase++;
			mainChar.pos_x = 0;
		}

		collision = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) || 
					collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
					collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]));
	}

	else if (phase == 1)
	{
		collisionLvlOnePhaseTwo();
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

	/*___________________________________________________Animations_____________________________________________________________*/

	showPlayerAnimations();

	/*____________________________________________________Animations End________________________________________________________*/

	
}

#endif





