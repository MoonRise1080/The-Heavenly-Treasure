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

Enemy huntressOne(990, 575, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwo(688, 504, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressThree(789, 374, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressFour(1117, 192, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressFive(696, 366, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressSix(1022, 494, huntressHeight, huntressWidth, true, false, false, false, false, false);

gameObject heartOne(905, 185, 128, 128, 0, false);
gameObject heartTwo(532, 200, 128, 128, 0, false);
gameObject heartThree(1214, 614, 128, 128, 0, false);

void showLevelOne()
{
	if (lvlOneStart == true)
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
			if ((heartOne.isTaken == false) && abs(mainChar.pos_x - heartOne.pos_x) <= 50 && abs(mainChar.pos_y - heartOne.pos_y) <= 50)
			{
				heartOne.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}

			//GAME OVER
			if (mainChar.isDead == true)
			{
				gameOver(100, 324);
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

			showHuntressAnimations(huntressThree);
			showHuntressAnimations(huntressFour);

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

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[4], recY[4], dx[4], dy[4]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[5], recY[5], dx[5], dy[5]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[6], recY[6], dx[6], dy[6]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[7], recY[7], dx[7], dy[7]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[8], recY[8], dx[8], dy[8]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[9], recY[9], dx[9], dy[9]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[10], recY[10], dx[10], dy[10]));

			/******************************************************************************************/
			if (collisionEnemy(huntressThree, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressThree, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressThree, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressThree, huntressMother, recX[3], recY[3], dx[3], dy[3]) ||
				collisionEnemy(huntressThree, huntressMother, recX[4], recY[4], dx[4], dy[4]) ||
				collisionEnemy(huntressThree, huntressMother, recX[5], recY[5], dx[5], dy[5]) ||
				collisionEnemy(huntressThree, huntressMother, recX[6], recY[6], dx[6], dy[6]) ||
				collisionEnemy(huntressThree, huntressMother, recX[7], recY[7], dx[7], dy[7]) ||
				collisionEnemy(huntressThree, huntressMother, recX[8], recY[8], dx[8], dy[8]) ||
				collisionEnemy(huntressThree, huntressMother, recX[9], recY[9], dx[9], dy[9]) ||
				collisionEnemy(huntressThree, huntressMother, recX[10], recY[10], dx[10], dy[10]))
			{
				huntressThree.collision = true;
			}
			else
			{
				huntressThree.collision = false;
			}

			if (collisionEnemy(huntressFour, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressFour, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressFour, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressFour, huntressMother, recX[3], recY[3], dx[3], dy[3]) ||
				collisionEnemy(huntressFour, huntressMother, recX[4], recY[4], dx[4], dy[4]) ||
				collisionEnemy(huntressFour, huntressMother, recX[5], recY[5], dx[5], dy[5]) ||
				collisionEnemy(huntressFour, huntressMother, recX[6], recY[6], dx[6], dy[6]) ||
				collisionEnemy(huntressFour, huntressMother, recX[7], recY[7], dx[7], dy[7]) ||
				collisionEnemy(huntressFour, huntressMother, recX[8], recY[8], dx[8], dy[8]) ||
				collisionEnemy(huntressFour, huntressMother, recX[9], recY[9], dx[9], dy[9]) ||
				collisionEnemy(huntressFour, huntressMother, recX[10], recY[10], dx[10], dy[10]))
			{
				huntressFour.collision = true;
			}
			else
			{
				huntressFour.collision = false;
			}

			chaseCheck(&huntressThree);
			chaseCheck(&huntressFour);


			//pick up the HEART
			showGameObject(heartTwo);
			if ((heartTwo.isTaken == false) && abs(mainChar.pos_x - heartTwo.pos_x) <= 50 && abs(mainChar.pos_y - heartTwo.pos_y) <= 50)
			{
				heartTwo.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			//Game over
			if (mainChar.isDead == true)
			{
				gameOver(40, 300);
			}
			/**************************************************************************************************************/
		}

		else if (phase == 2)
		{
			collisionLvlOnePhaseThree();
			iShowImage(lvlOnePhaseThree.pos_x, lvlOnePhaseThree.pos_y, lvlOnePhaseThree.dim_x, lvlOnePhaseThree.dim_y, lvlOnePhaseThree.bgImage);

			showHuntressAnimations(huntressFive);
			showHuntressAnimations(huntressSix);

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
			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[4], recY[4], dx[4], dy[4]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[5], recY[5], dx[5], dy[5]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[6], recY[6], dx[6], dy[6]));


			/*****************************************************************************************************************************/
			if (collisionEnemy(huntressFive, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressFive, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressFive, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressFive, huntressMother, recX[3], recY[3], dx[3], dy[3]) ||
				collisionEnemy(huntressFive, huntressMother, recX[4], recY[4], dx[4], dy[4]) ||
				collisionEnemy(huntressFive, huntressMother, recX[5], recY[5], dx[5], dy[5]) ||
				collisionEnemy(huntressFive, huntressMother, recX[6], recY[6], dx[6], dy[6]))
			{
				huntressFive.collision = true;
			}
			else
			{
				huntressFive.collision = false;
			}

			if (collisionEnemy(huntressSix, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressSix, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressSix, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressSix, huntressMother, recX[3], recY[3], dx[3], dy[3]) ||
				collisionEnemy(huntressSix, huntressMother, recX[4], recY[4], dx[4], dy[4]) ||
				collisionEnemy(huntressSix, huntressMother, recX[5], recY[5], dx[5], dy[5]) ||
				collisionEnemy(huntressSix, huntressMother, recX[6], recY[6], dx[6], dy[6]))
			{
				huntressSix.collision = true;
			}
			else
			{
				huntressSix.collision = false;
			}

			chaseCheck(&huntressFive);
			chaseCheck(&huntressSix);


			//pick up the HEART
			showGameObject(heartThree);
			if ((heartThree.isTaken == false) && (mainChar.pos_x == heartThree.pos_x) && (mainChar.pos_y = heartThree.pos_y))
			{
				heartThree.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}

			//GAME OVER
			if (mainChar.isDead == true)
			{
				gameOver(20, 140);
			}
			/*****************************************************************************************************************************/

			if (mainChar.pos_x > 1280)
			{
				phase++;
				mainChar.pos_x = 0;
			}
		}


		/*___________________________________________________ Animations _____________________________________________________________*/

		showPlayerAnimations();

		/*___________________________________________________ Animations End ________________________________________________________*/


	}

}

#endif





