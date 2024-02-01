#ifndef LEVELTWO_H_INCLUDED
#define LEVELTWO_H_INCLUDED
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
bool lvlTwoStart = false;
//bool lvlTwoPhaseOneRepo = false;

/*Enemy huntressOne(990, 575, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwo(688, 504, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressThree(789, 374, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressFour(1117, 192, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressFive(696, 366, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressSix(1022, 494, huntressHeight, huntressWidth, true, false, false, false, false, false);*/

/*gameObject heartOne(905, 185, 128, 128, 0, false);
gameObject heartTwo(532, 200, 128, 128, 0, false);
gameObject heartThree(1214, 614, 128, 128, 0, false);*/



void showLevelTwo()
{
	if (lvlTwoStart == true)
	{

		if (phase == 0)
		{

			collisionLvlTwoPhaseOne();
			iShowImage(lvlTwoPhaseOne.pos_x, lvlTwoPhaseOne.pos_y, lvlTwoPhaseOne.dim_x, lvlTwoPhaseOne.dim_y, lvlTwoPhaseOne.bgImage);

			//showHuntressAnimations(huntressOne);
			//showHuntressAnimations(huntressTwo);

			showHp();


			if (mainChar.pos_x == 1280)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]) );

			if (collisionEnemy(huntressOne, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressOne, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressOne, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressOne, huntressMother, recX[3], recY[3], dx[3], dy[3]))
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
				collisionEnemy(huntressTwo, huntressMother, recX[3], recY[3], dx[3], dy[3]))
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
			if (lvlTwoPhaseOneRepo == false)
			{
				mainChar.pos_x = 40;
				mainChar.pos_y = 300;
				lvlOnePhaseOneRepo = true;
			}

			collisionLvlTwoPhaseTwo();
			iShowImage(lvlTwoPhaseTwo.pos_x, lvlTwoPhaseTwo.pos_y, lvlTwoPhaseTwo.dim_x, lvlTwoPhaseTwo.dim_y, lvlTwoPhaseTwo.bgImage);

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
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]));

			/******************************************************************************************/
			if (collisionEnemy(huntressThree, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressThree, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressThree, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressThree.collision = true;
			}
			else
			{
				huntressThree.collision = false;
			}

			if (collisionEnemy(huntressFour, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressFour, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressFour, huntressMother, recX[2], recY[2], dx[2], dy[2]))
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
			collisionLvlTwoPhaseThree();
			iShowImage(lvlTwoPhaseThree.pos_x, lvlTwoPhaseThree.pos_y, lvlTwoPhaseThree.dim_x, lvlTwoPhaseThree.dim_y, lvlTwoPhaseThree.bgImage);

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
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]));


			/*****************************************************************************************************************************/
			if (collisionEnemy(huntressFive, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressFive, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressFive, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressFive, huntressMother, recX[3], recY[3], dx[3], dy[3]))
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
				collisionEnemy(huntressSix, huntressMother, recX[3], recY[3], dx[3], dy[3]))
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
		}

		/*___________________________________________________ Animations _____________________________________________________________*/

		showPlayerAnimations();

		/*___________________________________________________ Animations End ________________________________________________________*/


	}

}



#endif