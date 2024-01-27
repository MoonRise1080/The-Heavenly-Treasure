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
#include "Game_object.h"
#include <iostream>
#include <cstdlib>

int phase = 0;
bool isStart = false;
bool collisionPlayer = false;
bool collisionMob = false;
bool lvlOneStart = false;
bool lvlOnePhaseOneRepo = false;

Enemy huntressOne(990, 575, huntressHeight, huntressWidth, true, false, false, false, false);
Enemy huntressTwo(688, 504, huntressHeight, huntressWidth, true, false, false, false, false);
gameObject heartOne(905, 185, 50, 50, 0, false);
void showLevelOne()
{
	
	if (phase == 0)
	{
		
		collisionLvlOnePhaseOne();
		iShowImage(lvlOnePhaseOne.pos_x, lvlOnePhaseOne.pos_y, lvlOnePhaseOne.dim_x, lvlOnePhaseOne.dim_y, lvlOnePhaseOne.bgImage);
		
		showHuntressAnimations(huntressOne);
		showHuntressAnimations(huntressTwo);

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

		if (collisionEnemy(huntressOne, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
			collisionEnemy(huntressOne, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
			collisionEnemy(huntressOne, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
			collisionEnemy(huntressOne, huntressMother, recX[3], recY[3], dx[3], dy[3]) ||
			collisionEnemy(huntressOne, huntressMother, recX[4], recY[4], dx[4], dy[4]) ||
			collisionEnemy(huntressOne, huntressMother, recX[5], recY[5], dx[5], dy[5]))
		{
			huntressOne.collision = true;
		}
		else
		{
			huntressOne.collision = false;
		}

		if (collisionEnemy(huntressTwo, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
			collisionEnemy(huntressTwo, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
			collisionEnemy(huntressTwo, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
			collisionEnemy(huntressTwo, huntressMother, recX[3], recY[3], dx[3], dy[3]) ||
			collisionEnemy(huntressTwo, huntressMother, recX[4], recY[4], dx[4], dy[4]) ||
			collisionEnemy(huntressTwo, huntressMother, recX[5], recY[5], dx[5], dy[5]))
		{
			huntressTwo.collision = true;
		}
		else
		{
			huntressTwo.collision = false;
		}
		
		chaseCheck(&huntressOne);
		chaseCheck(&huntressTwo);


		//pick up the HEART
		showGameObject(heartOne);
		if ((heartOne.isTaken==false)&&(mainChar.pos_x == heartOne.pos_x) && (mainChar.pos_y = heartOne.pos_y))
		{
			heartOne.isTaken = true;
			mainChar.hp--;
			if (mainChar.hp < 0)
			{
				mainChar.hp = 0;
			}
		}

		
	}

	else if (phase == 1)
	{
		if (lvlOnePhaseOneRepo == false)
		{
			mainChar.pos_x = 40;
			mainChar.pos_y = 300;
			lvlOnePhaseOneRepo = true;
		}
		
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
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[12], recY[12], dx[12], dy[12])||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[13], recY[13], dx[13], dy[13])||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[14], recY[14], dx[14], dy[14])||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[15], recY[15], dx[15], dy[15])||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[16], recY[16], dx[16], dy[16]));
	}

	else if (phase == 2)
	{
		collisionLvlOnePhaseThree();
		iShowImage(lvlOnePhaseThree.pos_x, lvlOnePhaseThree.pos_y, lvlOnePhaseThree.dim_x, lvlOnePhaseThree.dim_y, lvlOnePhaseThree.bgImage);
		
		
		
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
		collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[17], recY[17], dx[17], dy[17]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[18], recY[18], dx[18], dy[18]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[19], recY[19], dx[19], dy[19]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[20], recY[20], dx[20], dy[20]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[21], recY[21], dx[21], dy[21]) ||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[22], recY[22], dx[22], dy[22])||
			collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[23], recY[23], dx[23], dy[23]));

	}

	/*___________________________________________________ Animations _____________________________________________________________*/

	showPlayerAnimations();

	/*___________________________________________________ Animations End ________________________________________________________*/

	
}

#endif





