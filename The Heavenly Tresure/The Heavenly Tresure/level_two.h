#ifndef LEVELTWO_H_INCLUDED
#define LEVELTWO_H_INCLUDED
#define screenWidth 1280
#define screenHight 720
#define huntressHeight 150
#define huntressWidth 150
#define bringerHeight 288
#define bringerWidth 174

/*#include "Backgrounds.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"
#include "HUD.h"
#include "Enemy.h"
#include "Game_object.h"
#include <iostream>
#include <cstdlib>*/

#include "level_one.h"

/*int phaseLvlTwo = 0;
bool isStartLvlTwo = false;
bool collisionPlayerLvlTwo = false;
bool collisionMobLvlTwo = false;
*/
bool lvlTwoStart = false;
bool lvlTwoPhaseOneRepo = false;

/*******************************Leve2_phase_1**********************************************/

Enemy huntressSeven(161, 465, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressEight(608, 327, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressNine(1120, 476, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);//bug
Enemy huntressTen(200, 2000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressEleven(600, 2500, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwelve(1000, 3000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);

gameObject heartFour(640, 105, 128, 128, 0, false);
gameObject heartFive(640, 105, 128, 128, 0, false);
gameObject heartSix(640, 105, 128, 128, 0, false);


/*******************************Leve2_phase_1**********************************************/


/*******************************Leve2_phase_2**********************************************/

Enemy huntressThirteen(298, 534, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressFourteen(976, 540, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressFifteen(789, 1200, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressSixteen(789, 1000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressSeventeen(1117, 1500, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressEighteen(696, 900, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressNineteen(300, 900, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);

/*******************************Leve2_phase_2**********************************************/


/*******************************Leve2_phase_3**********************************************/

Enemy huntressTwenty(331, 372, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentyone(636, 470, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentytwo(1059, 525, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentythree(300, 800, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentyfour(696, 1000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentyfive(1022, 1200, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);

/*******************************Leve2_phase_3**********************************************/



void showLevelTwo()
{
	if (mainChar.dead == 4)
	{
		if (gameOverIndex == 1)
		{
			iShowImage(0, 0, 1280, 720, gameOverMenu[1]);
		}
		else
		{
			iShowImage(0, 0, 1280, 720, gameOverMenu[0]);
		}

		isStart = false;
		lvlOneStart = false;
		lvlTwoStart = false;
		gameOverCommand = true;

		mainChar.pos_x = 100;
		mainChar.pos_y = 324;
		mainChar.dim_x = 138;
		mainChar.dim_y = 120;
		mainChar.hp = 0;
		mainChar.idle = true;
		mainChar.rdirection = true;

		/*******************************Enemy_reposition*****************************************/
		huntressSeven.pos_x = 161;
		huntressSeven.pos_y = 465;
		huntressSeven.dim_x = huntressHeight;
		huntressSeven.dim_y = huntressWidth;
		huntressSeven.hp = 2;
		huntressSeven.idle = true;
		huntressSeven.rdirection = false;
		huntressSeven.collision = false;
		huntressSeven.chase = false;
		huntressSeven.attack = false;
		huntressSeven.isDead = false;

		huntressEight.pos_x = 608;
		huntressEight.pos_y = 327;
		huntressEight.dim_x = huntressHeight;
		huntressEight.dim_y = huntressWidth;
		huntressEight.hp = 2;
		huntressEight.idle = true;
		huntressEight.rdirection = false;
		huntressEight.collision = false;
		huntressEight.chase = false;
		huntressEight.attack = false;
		huntressEight.isDead = false;

		huntressNine.pos_x = 1120;
		huntressNine.pos_y = 476;
		huntressNine.dim_x = huntressHeight;
		huntressNine.dim_y = huntressWidth;
		huntressNine.hp = 2;
		huntressNine.idle = true;
		huntressNine.rdirection = false;
		huntressNine.collision = false;
		huntressNine.chase = false;
		huntressNine.attack = false;
		huntressNine.isDead = false;

		huntressTen.pos_x = 200;
		huntressTen.pos_y = 2000;
		huntressTen.dim_x = huntressHeight;
		huntressTen.dim_y = huntressWidth;
		huntressTen.hp = 2;
		huntressTen.idle = true;
		huntressTen.rdirection = false;
		huntressTen.collision = false;
		huntressTen.chase = false;
		huntressTen.attack = false;
		huntressTen.isDead = false;

		huntressEleven.pos_x = 600;
		huntressEleven.pos_y = 2500;
		huntressEleven.dim_x = huntressHeight;
		huntressEleven.dim_y = huntressWidth;
		huntressEleven.hp = 2;
		huntressEleven.idle = true;
		huntressEleven.rdirection = false;
		huntressEleven.collision = false;
		huntressEleven.chase = false;
		huntressEleven.attack = false;
		huntressEleven.isDead = false;

		huntressTwelve.pos_x = 1000;
		huntressTwelve.pos_y = 3000;
		huntressTwelve.dim_x = huntressHeight;
		huntressTwelve.dim_y = huntressWidth;
		huntressTwelve.hp = 2;
		huntressTwelve.idle = true;
		huntressTwelve.rdirection = false;
		huntressTwelve.collision = false;
		huntressTwelve.chase = false;
		huntressTwelve.attack = false;
		huntressTwelve.isDead = false;// phase 1 ends

		huntressThirteen.pos_x = 298;
		huntressThirteen.pos_y = 534;
		huntressThirteen.dim_x = huntressHeight;
		huntressThirteen.dim_y = huntressWidth;
		huntressThirteen.hp = 2;
		huntressThirteen.idle = true;
		huntressThirteen.rdirection = false;
		huntressThirteen.collision = false;
		huntressThirteen.chase = false;
		huntressThirteen.attack = false;
		huntressThirteen.isDead = false;

		huntressFourteen.pos_x = 976;
		huntressFourteen.pos_y = 540;
		huntressFourteen.dim_x = huntressHeight;
		huntressFourteen.dim_y = huntressWidth;
		huntressFourteen.hp = 2;
		huntressFourteen.idle = true;
		huntressFourteen.rdirection = false;
		huntressFourteen.collision = false;
		huntressFourteen.chase = false;
		huntressFourteen.attack = false;
		huntressFourteen.isDead = false;

		huntressFifteen.pos_x = 789;
		huntressFifteen.pos_y = 1200;
		huntressFifteen.dim_x = huntressHeight;
		huntressFifteen.dim_y = huntressWidth;
		huntressFifteen.hp = 2;
		huntressFifteen.idle = true;
		huntressFifteen.rdirection = false;
		huntressFifteen.collision = false;
		huntressFifteen.chase = false;
		huntressFifteen.attack = false;
		huntressFifteen.isDead = false;

		huntressSixteen.pos_x = 789;
		huntressSixteen.pos_y = 1500;
		huntressSixteen.dim_x = huntressHeight;
		huntressSixteen.dim_y = huntressWidth;
		huntressSixteen.hp = 2;
		huntressSixteen.idle = true;
		huntressSixteen.rdirection = false;
		huntressSixteen.collision = false;
		huntressSixteen.chase = false;
		huntressSixteen.attack = false;
		huntressSixteen.isDead = false;

		huntressSeventeen.pos_x = 1117;
		huntressSeventeen.pos_y = 1500;
		huntressSeventeen.dim_x = huntressHeight;
		huntressSeventeen.dim_y = huntressWidth;
		huntressSeventeen.hp = 2;
		huntressSeventeen.idle = true;
		huntressSeventeen.rdirection = false;
		huntressSeventeen.collision = false;
		huntressSeventeen.chase = false;
		huntressSeventeen.attack = false;
		huntressSeventeen.isDead = false;

		huntressEighteen.pos_x = 696;
		huntressEighteen.pos_y = 900;
		huntressEighteen.dim_x = huntressHeight;
		huntressEighteen.dim_y = huntressWidth;
		huntressEighteen.hp = 2;
		huntressEighteen.idle = true;
		huntressEighteen.rdirection = false;
		huntressEighteen.collision = false;
		huntressEighteen.chase = false;
		huntressEighteen.attack = false;
		huntressEighteen.isDead = false;

		huntressNineteen.pos_x = 300;
		huntressNineteen.pos_y = 900;
		huntressNineteen.dim_x = huntressHeight;
		huntressNineteen.dim_y = huntressWidth;
		huntressNineteen.hp = 2;
		huntressNineteen.idle = true;
		huntressNineteen.rdirection = false;
		huntressNineteen.collision = false;
		huntressNineteen.chase = false;
		huntressNineteen.attack = false;
		huntressNineteen.isDead = false;//phase 2 ends

		huntressTwenty.pos_x = 331;
		huntressTwenty.pos_y = 372;
		huntressTwenty.dim_x = huntressHeight;
		huntressTwenty.dim_y = huntressWidth;
		huntressTwenty.hp = 2;
		huntressTwenty.idle = true;
		huntressTwenty.rdirection = false;
		huntressTwenty.collision = false;
		huntressTwenty.chase = false;
		huntressTwenty.attack = false;
		huntressTwenty.isDead = false;

		huntressTwentyone.pos_x = 636;
		huntressTwentyone.pos_y = 470;
		huntressTwentyone.dim_x = huntressHeight;
		huntressTwentyone.dim_y = huntressWidth;
		huntressTwentyone.hp = 2;
		huntressTwentyone.idle = true;
		huntressTwentyone.rdirection = false;
		huntressTwentyone.collision = false;
		huntressTwentyone.chase = false;
		huntressTwentyone.attack = false;
		huntressTwentyone.isDead = false;

		huntressTwentytwo.pos_x = 1059;
		huntressTwentytwo.pos_y = 525;
		huntressTwentytwo.dim_x = huntressHeight;
		huntressTwentytwo.dim_y = huntressWidth;
		huntressTwentytwo.hp = 2;
		huntressTwentytwo.idle = true;
		huntressTwentytwo.rdirection = false;
		huntressTwentytwo.collision = false;
		huntressTwentytwo.chase = false;
		huntressTwentytwo.attack = false;
		huntressTwentytwo.isDead = false;

		huntressTwentythree.pos_x = 300;
		huntressTwentythree.pos_y = 800;
		huntressTwentythree.dim_x = huntressHeight;
		huntressTwentythree.dim_y = huntressWidth;
		huntressTwentythree.hp = 2;
		huntressTwentythree.idle = true;
		huntressTwentythree.rdirection = false;
		huntressTwentythree.collision = false;
		huntressTwentythree.chase = false;
		huntressTwentythree.attack = false;
		huntressTwentythree.isDead = false;

		huntressTwentyfour.pos_x = 696;
		huntressTwentyfour.pos_y = 1000;
		huntressTwentyfour.dim_x = huntressHeight;
		huntressTwentyfour.dim_y = huntressWidth;
		huntressTwentyfour.hp = 2;
		huntressTwentyfour.idle = true;
		huntressTwentyfour.rdirection = false;
		huntressTwentyfour.collision = false;
		huntressTwentyfour.chase = false;
		huntressTwentyfour.attack = false;
		huntressTwentyfour.isDead = false;
		
		huntressTwentyfive.pos_x = 1022;
		huntressTwentyfive.pos_y = 1200;
		huntressTwentyfive.dim_x = huntressHeight;
		huntressTwentyfive.dim_y = huntressWidth;
		huntressTwentyfive.hp = 2;
		huntressTwentyfive.idle = true;
		huntressTwentyfive.rdirection = false;
		huntressTwentyfive.collision = false;
		huntressTwentyfive.chase = false;
		huntressTwentyfive.attack = false;
		huntressTwentyfive.isDead = false;//phase 3 ends

		/*******************************Enemy_reposition*****************************************/

		/**************************************Heart_reposition*********************************************/
		heartFour.pos_x = 640;
		heartFour.pos_y = 105;
		heartFour.dim_x = 128;
		heartFour.dim_y = 128;
		heartFour.index = 0;
		heartFour.isTaken = false;

		heartFive.pos_x = 640;
		heartFive.pos_y = 105;
		heartFive.dim_x = 128;
		heartFive.dim_y = 128;
		heartFive.index = 0;
		heartFive.isTaken = false;

		heartSix.pos_x = 640;
		heartSix.pos_y = 105;
		heartSix.dim_x = 128;
		heartSix.dim_y = 128;
		heartSix.index = 0;
		heartSix.isTaken = false;


		/**************************************Heart_reposition*********************************************/

	}

	if (lvlTwoStart == true)
	{
		if (phase == 3)
		{
			mainChar.phase = phase;
			collisionLvlTwoPhaseOne();
						
			iShowImage(lvlTwoPhaseOne.pos_x, lvlTwoPhaseOne.pos_y, lvlTwoPhaseOne.dim_x, lvlTwoPhaseOne.dim_y, lvlTwoPhaseOne.bgImage);

			showHp();
			showBringerAnimations(huntressSeven);
			showBringerAnimations(huntressEight);
			showBringerAnimations(huntressNine);
			showBringerAnimations(huntressTen);
			showBringerAnimations(huntressEleven);
			showBringerAnimations(huntressTwelve);

			if (mainChar.pos_x + mainChar.dim_x > 1300)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]));

			/******************************************************************************enemy_col_check************************************************************************************/
			if (collisionEnemy(huntressSeven, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressSeven, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressSeven, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressSeven, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressSeven.collision = true;
			}
			else
			{
				huntressSeven.collision = false;
			}

			if (collisionEnemy(huntressEight, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressEight, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressEight, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressEight, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressEight.collision = true;
			}
			else
			{
				huntressEight.collision = false;
			}

			if (collisionEnemy(huntressNine, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressNine, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressNine, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressNine, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressNine.collision = true;
			}
			else
			{
				huntressNine.collision = false;
			}
			//out of the screen enemy starts
			if (collisionEnemy(huntressTen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTen, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTen.collision = true;
			}
			else
			{
				huntressTen.collision = false;
			}
			if (collisionEnemy(huntressEleven, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressEleven, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressEleven, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressEleven, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressEleven.collision = true;
			}
			else
			{
				huntressEleven.collision = false;
			}
			if (collisionEnemy(huntressTwelve, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwelve, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwelve, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwelve, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwelve.collision = true;
			}
			else
			{
				huntressTwelve.collision = false;
			}

			/******************************************************************************enemy_col_check************************************************************************************/

			chaseCheck(&huntressSeven);
			chaseCheck(&huntressEight);
			chaseCheck(&huntressNine);
			chaseCheck(&huntressTen);
			chaseCheck(&huntressEleven);
			chaseCheck(&huntressTwelve);

			showGameObject(heartFour);
			if ((heartFour.isTaken == false) && abs(mainChar.pos_x - heartFour.pos_x) <= 50 && abs(mainChar.pos_y - heartFour.pos_y) <= 50)
			{
				heartFour.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}

			if (mainChar.isDead == true)
			{
				gameOver(8, 128);
			}
		}

		if (phase == 4)
		{
			collisionLvlTwoPhaseTwo();
			
			mainChar.phase = phase;
			iShowImage(lvlTwoPhaseTwo.pos_x, lvlTwoPhaseTwo.pos_y, lvlTwoPhaseTwo.dim_x, lvlTwoPhaseTwo.dim_y, lvlTwoPhaseTwo.bgImage);

			showHp();

			showBringerAnimations(huntressThirteen);
			showBringerAnimations(huntressFourteen);
			showBringerAnimations(huntressFifteen);
			showBringerAnimations(huntressSixteen);
			showBringerAnimations(huntressSeventeen);
			showBringerAnimations(huntressEighteen);
			showBringerAnimations(huntressNineteen);
			

			if (mainChar.pos_x + mainChar.dim_x > 1300)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) );

			/******************************************************************************enemy_col_check************************************************************************************/
			if (collisionEnemy(huntressThirteen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressThirteen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressThirteen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressThirteen.collision = true;
			}
			else
			{
				huntressThirteen.collision = false;
			}

			if (collisionEnemy(huntressFourteen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressFourteen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressFourteen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressFourteen.collision = true;
			}
			else
			{
				huntressFourteen.collision = false;
			}
			
			///out of the screen enemy
			
			if (collisionEnemy(huntressFifteen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressFifteen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressFifteen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressFifteen.collision = true;
			}
			else
			{
				huntressFifteen.collision = false;
			}
			if (collisionEnemy(huntressSixteen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressSixteen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressSixteen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressSixteen.collision = true;
			}
			else
			{
				huntressSixteen.collision = false;
			}

			if (collisionEnemy(huntressSeventeen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressSeventeen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressSeventeen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressSeventeen.collision = true;
			}
			else
			{
				huntressSeventeen.collision = false;
			}
			if (collisionEnemy(huntressEighteen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressEighteen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressEighteen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressEighteen.collision = true;
			}
			else
			{
				huntressEighteen.collision = false;
			}

			if (collisionEnemy(huntressNineteen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressNineteen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressNineteen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressNineteen.collision = true;
			}
			else
			{
				huntressNineteen.collision = false;
			}
			

			/******************************************************************************enemy_col_check************************************************************************************/

			chaseCheck(&huntressThirteen);
			chaseCheck(&huntressFourteen);
			chaseCheck(&huntressFifteen);
			chaseCheck(&huntressSixteen);
			chaseCheck(&huntressSeventeen);
			chaseCheck(&huntressEighteen);
			chaseCheck(&huntressNineteen);

			showGameObject(heartFive);
			if ((heartFive.isTaken == false) && abs(mainChar.pos_x - heartFive.pos_x) <= 50 && abs(mainChar.pos_y - heartFive.pos_y) <= 50)
			{
				heartFive.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}

			if (mainChar.isDead == true)
			{
				gameOver(8, 128);
			}

		}

		if (phase == 5)
		{
			mainChar.phase = phase;
			collisionLvlTwoPhaseThree();
			

			iShowImage(lvlTwoPhaseThree.pos_x, lvlTwoPhaseThree.pos_y, lvlTwoPhaseThree.dim_x, lvlTwoPhaseThree.dim_y, lvlTwoPhaseThree.bgImage);

			showHp();

			showBringerAnimations(huntressTwenty);
			showBringerAnimations(huntressTwentyone);
			showBringerAnimations(huntressTwentytwo);
			showBringerAnimations(huntressTwentythree);
			showBringerAnimations(huntressTwentyfour);
			showBringerAnimations(huntressTwentyfive);

			if (mainChar.pos_x + mainChar.dim_x > 1300)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]));

			/******************************************************************************enemy_col_check************************************************************************************/
			if (collisionEnemy(huntressTwenty, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwenty, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwenty, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwenty, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwenty.collision = true;
			}
			else
			{
				huntressTwenty.collision = false;
			}

			if (collisionEnemy(huntressTwentyone, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwentyone, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwentyone, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwentyone, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwentyone.collision = true;
			}
			else
			{
				huntressTwentyone.collision = false;
			}

			if (collisionEnemy(huntressTwentytwo, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwentytwo, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwentytwo, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwentytwo, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwentytwo.collision = true;
			}
			else
			{
				huntressTwentytwo.collision = false;
			}

			//out side of the screen
			if (collisionEnemy(huntressTwentythree, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwentythree, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwentythree, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwentythree, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwentythree.collision = true;
			}
			else
			{
				huntressTwentythree.collision = false;
			}

			if (collisionEnemy(huntressTwentyfour, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwentyfour, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwentyfour, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwentyfour, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwentyfour.collision = true;
			}
			else
			{
				huntressTwentyfour.collision = false;
			}

			if (collisionEnemy(huntressTwentyfive, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressTwentyfive, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressTwentyfive, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressTwentyfive, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressTwentyfive.collision = true;
			}
			else
			{
				huntressTwentyfive.collision = false;
			}

			/******************************************************************************enemy_col_check************************************************************************************/

			chaseCheck(&huntressTwenty);
			chaseCheck(&huntressTwentyone);
			chaseCheck(&huntressTwentytwo);
			chaseCheck(&huntressTwentythree);
			chaseCheck(&huntressTwentyfour);
			chaseCheck(&huntressTwentyfive);

			showGameObject(heartSix);
			if ((heartSix.isTaken == false) && abs(mainChar.pos_x - heartSix.pos_x) <= 50 && abs(mainChar.pos_y - heartSix.pos_y) <= 50)
			{
				heartSix.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}

			if (mainChar.isDead == true)
			{
				gameOver(8, 128);
			}
		}
				
	}


	if (mainChar.dead < 4 && menu_option == 1)
	{
		showPoint();
		showPlayerAnimations();
	}
}



#endif