#ifndef LEVELONE_H_INCLUDED
#define LEVELONE_H_INCLUDED
#define screenWidth 1280
#define screenHight 720
#define huntressHeight 150
#define huntressWidth 150

#include "Backgrounds.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"
#include "HUD.h"
#include "Enemy.h"

bool isStart = false;
int phase = 0;
bool collisionPlayer = false;
bool collisionMob = false;
bool lvlOneStart = true;
Enemy huntressMother;
Enemy huntressOne(990, 500, huntressHeight, huntressWidth, true, false, false,false);

void showLevelOne()
{
	
	if (phase == 0)
	{
		
		collisionLvlOnePhaseOne();
		iShowImage(lvlOnePhaseOne.pos_x, lvlOnePhaseOne.pos_y, lvlOnePhaseOne.dim_x, lvlOnePhaseOne.dim_y, lvlOnePhaseOne.bgImage);
		iShowImage(huntressOne.pos_x, huntressOne.pos_y, huntressOne.dim_x, huntressOne.dim_y, huntressMother.img_idle[huntressMother.idleIndex]);

		showHp();
		if (mainChar.pos_x == 1280)
		{
			phase++;
			mainChar.pos_x = 0;
		}


		collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[4], recY[4], dx[4], dy[4]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[5], recY[5], dx[5], dy[5]));

		if (collisionEnemy(huntressOne, recX[0], recY[0], dx[0], dy[0]) ||
			collisionEnemy(huntressOne, recX[1], recY[1], dx[1], dy[1]) ||
			collisionEnemy(huntressOne, recX[2], recY[2], dx[2], dy[2]) ||
			collisionEnemy(huntressOne, recX[3], recY[3], dx[3], dy[3]) ||
			collisionEnemy(huntressOne, recX[4], recY[4], dx[4], dy[4]) ||
			collisionEnemy(huntressOne, recX[5], recY[5], dx[5], dy[5]))
		{
			huntressOne.collision = true;
		}
		else
		{
			huntressOne.collision = false;
		}
		
		if (mainChar.pos_x - huntressOne.pos_x <= 50)
		{
			huntressOne.idle = false;
			huntressOne.chase = true;
			huntressOne.rdirection = false;
		}
		else if (huntressOne.pos_x - mainChar.pos_x <= 50)
		{
			huntressOne.idle = false;
			huntressOne.chase = true;
			huntressOne.rdirection = true;
		}
		
	}

	else if (phase == 1)
	{
		collisionLvlOnePhaseTwo();
		iShowImage(lvlOnePhaseTwo.pos_x, lvlOnePhaseTwo.pos_y, lvlOnePhaseTwo.dim_x, lvlOnePhaseTwo.dim_y, lvlOnePhaseTwo.bgImage);
		showHp();
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

		collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[6], recY[6], dx[6], dy[6]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[7], recY[7], dx[7], dy[7]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[8], recY[8], dx[8], dy[8]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[9], recY[9], dx[9], dy[9]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[10], recY[10], dx[10], dy[10]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[11], recY[11], dx[11], dy[11]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[12], recY[12], dx[12], dy[12]));
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

	/*___________________________________________________ Animations _____________________________________________________________*/

	showPlayerAnimations();

	/*___________________________________________________ Animations End ________________________________________________________*/

	
}

#endif





