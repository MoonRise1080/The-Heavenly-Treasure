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
//Enemy huntressNine(1120, 476, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);//bug
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
Enemy huntressFifteen(789, 3000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressSixteen(789, 2500, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
//Enemy huntressSeventeen(1117, 1500, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressEighteen(696, 3500, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressNineteen(300, 2000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);

/*******************************Leve2_phase_2**********************************************/


/*******************************Leve2_phase_3**********************************************/

Enemy huntressTwenty(331, 372, bringerHeight, bringerWidth, 1, true, false, false, false, false, false);
Enemy huntressTwentyone(636, 470, bringerHeight, bringerWidth, 1, true, false, false, false, false, false);
Enemy huntressTwentytwo(1059, 525, bringerHeight, bringerWidth, 1, true, false, false, false, false, false);
Enemy huntressTwentythree(300, 2000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentyfour(696, 2500, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
Enemy huntressTwentyfive(1022, 3000, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);

/*******************************Leve2_phase_3**********************************************/

Enemy bringerBoss(1280, 130, (bringerHeight * 3), (bringerWidth * 3), 10, true, false, false, false, false, false);

gameObject h1(180, 1500, 128, 128, 0, false, true);
gameObject h2(360, 2000, 128, 128, 0, false, true);
gameObject h3(540, 2500, 128, 128, 0, false, true);
gameObject h4(720, 3000, 128, 128, 0, false, true);
gameObject h5(180, 3500, 128, 128, 0, false, true);
gameObject h6(360, 4000, 128, 128, 0, false, true);
gameObject h7(540, 4500, 128, 128, 0, false, true);
gameObject h8(720, 5000, 128, 128, 0, false, true);
gameObject h9(180, 5500, 128, 128, 0, false, true);
gameObject h10(360, 6000, 128, 128, 0, false, true);



void showLevelTwo()
{
	char score[20];
	if (mainChar.dead == 4 && menu_option == 1)
	{
		if (gameOverIndex == 1)
		{
			iShowImage(0, 0, 1280, 720, gameOverMenu[1]);
			sprintf_s(score, "%d", mainChar.score);
			iText(650, 275, score, GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else
		{
			iShowImage(0, 0, 1280, 720, gameOverMenu[0]);
			sprintf_s(score, "%d", mainChar.score);
			iText(650, 275, score, GLUT_BITMAP_TIMES_ROMAN_24);
		}


		isStart = false;
		lvlOneStart = false;
		lvlTwoStart = false;
		gameOverCommand = true;
		

		/*******************************Enemy_reposition*****************************************/
		huntressSeven.pos_x = 161;
		huntressSeven.pos_y = 465;
		huntressSeven.dim_x = bringerHeight;
		huntressSeven.dim_y = bringerWidth;
		huntressSeven.hp = 2;
		huntressSeven.idle = true;
		huntressSeven.rdirection = false;
		huntressSeven.collision = false;
		huntressSeven.chase = false;
		huntressSeven.attack = false;
		huntressSeven.isDead = false;

		huntressEight.pos_x = 608;
		huntressEight.pos_y = 327;
		huntressEight.dim_x = bringerHeight;
		huntressEight.dim_y = bringerWidth;
		huntressEight.hp = 2;
		huntressEight.idle = true;
		huntressEight.rdirection = false;
		huntressEight.collision = false;
		huntressEight.chase = false;
		huntressEight.attack = false;
		huntressEight.isDead = false;

		huntressTen.pos_x = 200;
		huntressTen.pos_y = 2000;
		huntressTen.dim_x = bringerHeight;
		huntressTen.dim_y = bringerWidth;
		huntressTen.hp = 2;
		huntressTen.idle = true;
		huntressTen.rdirection = false;
		huntressTen.collision = false;
		huntressTen.chase = false;
		huntressTen.attack = false;
		huntressTen.isDead = false;

		huntressEleven.pos_x = 600;
		huntressEleven.pos_y = 2500;
		huntressEleven.dim_x = bringerHeight;
		huntressEleven.dim_y = bringerWidth;
		huntressEleven.hp = 2;
		huntressEleven.idle = true;
		huntressEleven.rdirection = false;
		huntressEleven.collision = false;
		huntressEleven.chase = false;
		huntressEleven.attack = false;
		huntressEleven.isDead = false;

		huntressTwelve.pos_x = 1000;
		huntressTwelve.pos_y = 3000;
		huntressTwelve.dim_x = bringerHeight;
		huntressTwelve.dim_y = bringerWidth;
		huntressTwelve.hp = 2;
		huntressTwelve.idle = true;
		huntressTwelve.rdirection = false;
		huntressTwelve.collision = false;
		huntressTwelve.chase = false;
		huntressTwelve.attack = false;
		huntressTwelve.isDead = false;// phase 1 ends

		huntressThirteen.pos_x = 298;
		huntressThirteen.pos_y = 534;
		huntressThirteen.dim_x = bringerHeight;
		huntressThirteen.dim_y = bringerWidth;
		huntressThirteen.hp = 2;
		huntressThirteen.idle = true;
		huntressThirteen.rdirection = false;
		huntressThirteen.collision = false;
		huntressThirteen.chase = false;
		huntressThirteen.attack = false;
		huntressThirteen.isDead = false;

		huntressFourteen.pos_x = 976;
		huntressFourteen.pos_y = 540;
		huntressFourteen.dim_x = bringerHeight;
		huntressFourteen.dim_y = bringerWidth;
		huntressFourteen.hp = 2;
		huntressFourteen.idle = true;
		huntressFourteen.rdirection = false;
		huntressFourteen.collision = false;
		huntressFourteen.chase = false;
		huntressFourteen.attack = false;
		huntressFourteen.isDead = false;

		huntressFifteen.pos_x = 789;
		huntressFifteen.pos_y = 1200;
		huntressFifteen.dim_x = bringerHeight;
		huntressFifteen.dim_y = bringerWidth;
		huntressFifteen.hp = 2;
		huntressFifteen.idle = true;
		huntressFifteen.rdirection = false;
		huntressFifteen.collision = false;
		huntressFifteen.chase = false;
		huntressFifteen.attack = false;
		huntressFifteen.isDead = false;

		huntressSixteen.pos_x = 789;
		huntressSixteen.pos_y = 1500;
		huntressSixteen.dim_x = bringerHeight;
		huntressSixteen.dim_y = bringerWidth;
		huntressSixteen.hp = 2;
		huntressSixteen.idle = true;
		huntressSixteen.rdirection = false;
		huntressSixteen.collision = false;
		huntressSixteen.chase = false;
		huntressSixteen.attack = false;
		huntressSixteen.isDead = false;

		huntressEighteen.pos_x = 696;
		huntressEighteen.pos_y = 900;
		huntressEighteen.dim_x = bringerHeight;
		huntressEighteen.dim_y = bringerWidth;
		huntressEighteen.hp = 2;
		huntressEighteen.idle = true;
		huntressEighteen.rdirection = false;
		huntressEighteen.collision = false;
		huntressEighteen.chase = false;
		huntressEighteen.attack = false;
		huntressEighteen.isDead = false;

		huntressNineteen.pos_x = 300;
		huntressNineteen.pos_y = 900;
		huntressNineteen.dim_x = bringerHeight;
		huntressNineteen.dim_y = bringerWidth;
		huntressNineteen.hp = 2;
		huntressNineteen.idle = true;
		huntressNineteen.rdirection = false;
		huntressNineteen.collision = false;
		huntressNineteen.chase = false;
		huntressNineteen.attack = false;
		huntressNineteen.isDead = false;//phase 2 ends

		huntressTwenty.pos_x = 331;
		huntressTwenty.pos_y = 372;
		huntressTwenty.dim_x = bringerHeight;
		huntressTwenty.dim_y = bringerWidth;
		huntressTwenty.hp = 2;
		huntressTwenty.idle = true;
		huntressTwenty.rdirection = false;
		huntressTwenty.collision = false;
		huntressTwenty.chase = false;
		huntressTwenty.attack = false;
		huntressTwenty.isDead = false;

		huntressTwentyone.pos_x = 636;
		huntressTwentyone.pos_y = 470;
		huntressTwentyone.dim_x = bringerHeight;
		huntressTwentyone.dim_y = bringerWidth;
		huntressTwentyone.hp = 2;
		huntressTwentyone.idle = true;
		huntressTwentyone.rdirection = false;
		huntressTwentyone.collision = false;
		huntressTwentyone.chase = false;
		huntressTwentyone.attack = false;
		huntressTwentyone.isDead = false;

		huntressTwentytwo.pos_x = 1059;
		huntressTwentytwo.pos_y = 525;
		huntressTwentytwo.dim_x = bringerHeight;
		huntressTwentytwo.dim_y = bringerWidth;
		huntressTwentytwo.hp = 2;
		huntressTwentytwo.idle = true;
		huntressTwentytwo.rdirection = false;
		huntressTwentytwo.collision = false;
		huntressTwentytwo.chase = false;
		huntressTwentytwo.attack = false;
		huntressTwentytwo.isDead = false;

		huntressTwentythree.pos_x = 300;
		huntressTwentythree.pos_y = 800;
		huntressTwentythree.dim_x = bringerHeight;
		huntressTwentythree.dim_y = bringerWidth;
		huntressTwentythree.hp = 2;
		huntressTwentythree.idle = true;
		huntressTwentythree.rdirection = false;
		huntressTwentythree.collision = false;
		huntressTwentythree.chase = false;
		huntressTwentythree.attack = false;
		huntressTwentythree.isDead = false;

		huntressTwentyfour.pos_x = 696;
		huntressTwentyfour.pos_y = 1000;
		huntressTwentyfour.dim_x = bringerHeight;
		huntressTwentyfour.dim_y = bringerWidth;
		huntressTwentyfour.hp = 2;
		huntressTwentyfour.idle = true;
		huntressTwentyfour.rdirection = false;
		huntressTwentyfour.collision = false;
		huntressTwentyfour.chase = false;
		huntressTwentyfour.attack = false;
		huntressTwentyfour.isDead = false;
		
		huntressTwentyfive.pos_x = 1022;
		huntressTwentyfive.pos_y = 1200;
		huntressTwentyfive.dim_x = bringerHeight;
		huntressTwentyfive.dim_y = bringerWidth;
		huntressTwentyfive.hp = 2;
		huntressTwentyfive.idle = true;
		huntressTwentyfive.rdirection = false;
		huntressTwentyfive.collision = false;
		huntressTwentyfive.chase = false;
		huntressTwentyfive.attack = false;
		huntressTwentyfive.isDead = false;//phase 3 ends

		bringerBoss.pos_x = 1280;
		bringerBoss.pos_y = 130;
		bringerBoss.dim_x = (bringerHeight * 3);
		bringerBoss.dim_y = (bringerWidth * 3);
		bringerBoss.hp = 1;
		bringerBoss.idle = true;
		bringerBoss.rdirection = false;
		bringerBoss.collision = false;
		bringerBoss.chase = false;
		bringerBoss.attack = false;
		bringerBoss.isDead = false;

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
			//showBringerAnimations(huntressNine);
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

			/*if (collisionEnemy(huntressNine, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressNine, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressNine, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN) ||
				collisionEnemy(huntressNine, bringerMother, recX[3], recY[3], dx[3], dy[3], bringerMother.padN))
			{
				huntressNine.collision = true;
			}
			else
			{
				huntressNine.collision = false;
			}*/

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
			//chaseCheck(&huntressNine);
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
			//showBringerAnimations(huntressSeventeen);
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

			/*if (collisionEnemy(huntressSeventeen, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN) ||
				collisionEnemy(huntressSeventeen, bringerMother, recX[1], recY[1], dx[1], dy[1], bringerMother.padN) ||
				collisionEnemy(huntressSeventeen, bringerMother, recX[2], recY[2], dx[2], dy[2], bringerMother.padN))
			{
				huntressSeventeen.collision = true;
			}
			else
			{
				huntressSeventeen.collision = false;
			}*/
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
			//chaseCheck(&huntressSeventeen);
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

		if (phase == 6)
		{
			mainChar.phase = phase;
			collisionLvlTwoPhaseFour();
			mainChar.dead = 0;

			iShowImage(lvlTwoPhaseFour.pos_x, lvlTwoPhaseFour.pos_y, lvlTwoPhaseFour.dim_x, lvlTwoPhaseFour.dim_y, lvlTwoPhaseFour.bgImage);
			showHp();

			showBringerAnimations(bringerBoss, 3);

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]));

			if (collisionEnemy(bringerBoss, bringerMother, recX[0], recY[0], dx[0], dy[0], bringerMother.padN))
			{
				bringerBoss.collision = true;
			}
			else
			{
				bringerBoss.collision = false;
			}

			chaseCheck(&bringerBoss);

			if (mainChar.isDead == true)
			{
				gameOver(8, 128);
			}

			showGameObject(h1);
			if ((h1.isTaken == false) && abs(mainChar.pos_x - h1.pos_x) <= 50 && abs(mainChar.pos_y - h1.pos_y) <= 50)
			{
				h1.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h2);
			if ((h2.isTaken == false) && abs(mainChar.pos_x - h2.pos_x) <= 50 && abs(mainChar.pos_y - h2.pos_y) <= 50)
			{
				h2.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h3);
			if ((h3.isTaken == false) && abs(mainChar.pos_x - h3.pos_x) <= 50 && abs(mainChar.pos_y - h3.pos_y) <= 50)
			{
				h3.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h4);
			if ((h4.isTaken == false) && abs(mainChar.pos_x - h4.pos_x) <= 50 && abs(mainChar.pos_y - h4.pos_y) <= 50)
			{
				h4.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h5);
			if ((h5.isTaken == false) && abs(mainChar.pos_x - h5.pos_x) <= 50 && abs(mainChar.pos_y - h5.pos_y) <= 50)
			{
				h5.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h6);
			if ((h6.isTaken == false) && abs(mainChar.pos_x - h6.pos_x) <= 50 && abs(mainChar.pos_y - h6.pos_y) <= 50)
			{
				h6.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h7);
			if ((h7.isTaken == false) && abs(mainChar.pos_x - h7.pos_x) <= 50 && abs(mainChar.pos_y - h7.pos_y) <= 50)
			{
				h7.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h8);
			if ((h8.isTaken == false) && abs(mainChar.pos_x - h8.pos_x) <= 50 && abs(mainChar.pos_y - h8.pos_y) <= 50)
			{
				h8.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h9);
			if ((h9.isTaken == false) && abs(mainChar.pos_x - h9.pos_x) <= 50 && abs(mainChar.pos_y - h9.pos_y) <= 50)
			{
				h9.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}
			showGameObject(h10);
			if ((h10.isTaken == false) && abs(mainChar.pos_x - h10.pos_x) <= 50 && abs(mainChar.pos_y - h10.pos_y) <= 50)
			{
				h10.isTaken = true;
				mainChar.hp--;
				if (mainChar.hp < 0)
				{
					mainChar.hp = 0;
				}
			}

		}
				
	}


	if (bringerBoss.isDead == true)
	{
		phase = 0;
		menu_option = 8;
		mainChar.dead = 0;

		lvlOneReset();

		/*******************************Enemy_reposition*****************************************/
		huntressSeven.pos_x = 161;
		huntressSeven.pos_y = 465;
		huntressSeven.dim_x = bringerHeight;
		huntressSeven.dim_y = bringerWidth;
		huntressSeven.hp = 2;
		huntressSeven.idle = true;
		huntressSeven.rdirection = false;
		huntressSeven.collision = false;
		huntressSeven.chase = false;
		huntressSeven.attack = false;
		huntressSeven.isDead = false;

		huntressEight.pos_x = 608;
		huntressEight.pos_y = 327;
		huntressEight.dim_x = bringerHeight;
		huntressEight.dim_y = bringerWidth;
		huntressEight.hp = 2;
		huntressEight.idle = true;
		huntressEight.rdirection = false;
		huntressEight.collision = false;
		huntressEight.chase = false;
		huntressEight.attack = false;
		huntressEight.isDead = false;

		huntressTen.pos_x = 200;
		huntressTen.pos_y = 2000;
		huntressTen.dim_x = bringerHeight;
		huntressTen.dim_y = bringerWidth;
		huntressTen.hp = 2;
		huntressTen.idle = true;
		huntressTen.rdirection = false;
		huntressTen.collision = false;
		huntressTen.chase = false;
		huntressTen.attack = false;
		huntressTen.isDead = false;

		huntressEleven.pos_x = 600;
		huntressEleven.pos_y = 2500;
		huntressEleven.dim_x = bringerHeight;
		huntressEleven.dim_y = bringerWidth;
		huntressEleven.hp = 2;
		huntressEleven.idle = true;
		huntressEleven.rdirection = false;
		huntressEleven.collision = false;
		huntressEleven.chase = false;
		huntressEleven.attack = false;
		huntressEleven.isDead = false;

		huntressTwelve.pos_x = 1000;
		huntressTwelve.pos_y = 3000;
		huntressTwelve.dim_x = bringerHeight;
		huntressTwelve.dim_y = bringerWidth;
		huntressTwelve.hp = 2;
		huntressTwelve.idle = true;
		huntressTwelve.rdirection = false;
		huntressTwelve.collision = false;
		huntressTwelve.chase = false;
		huntressTwelve.attack = false;
		huntressTwelve.isDead = false;// phase 1 ends

		huntressThirteen.pos_x = 298;
		huntressThirteen.pos_y = 534;
		huntressThirteen.dim_x = bringerHeight;
		huntressThirteen.dim_y = bringerWidth;
		huntressThirteen.hp = 2;
		huntressThirteen.idle = true;
		huntressThirteen.rdirection = false;
		huntressThirteen.collision = false;
		huntressThirteen.chase = false;
		huntressThirteen.attack = false;
		huntressThirteen.isDead = false;

		huntressFourteen.pos_x = 976;
		huntressFourteen.pos_y = 540;
		huntressFourteen.dim_x = bringerHeight;
		huntressFourteen.dim_y = bringerWidth;
		huntressFourteen.hp = 2;
		huntressFourteen.idle = true;
		huntressFourteen.rdirection = false;
		huntressFourteen.collision = false;
		huntressFourteen.chase = false;
		huntressFourteen.attack = false;
		huntressFourteen.isDead = false;

		huntressFifteen.pos_x = 789;
		huntressFifteen.pos_y = 1200;
		huntressFifteen.dim_x = bringerHeight;
		huntressFifteen.dim_y = bringerWidth;
		huntressFifteen.hp = 2;
		huntressFifteen.idle = true;
		huntressFifteen.rdirection = false;
		huntressFifteen.collision = false;
		huntressFifteen.chase = false;
		huntressFifteen.attack = false;
		huntressFifteen.isDead = false;

		huntressSixteen.pos_x = 789;
		huntressSixteen.pos_y = 1500;
		huntressSixteen.dim_x = bringerHeight;
		huntressSixteen.dim_y = bringerWidth;
		huntressSixteen.hp = 2;
		huntressSixteen.idle = true;
		huntressSixteen.rdirection = false;
		huntressSixteen.collision = false;
		huntressSixteen.chase = false;
		huntressSixteen.attack = false;
		huntressSixteen.isDead = false;

		huntressEighteen.pos_x = 696;
		huntressEighteen.pos_y = 900;
		huntressEighteen.dim_x = bringerHeight;
		huntressEighteen.dim_y = bringerWidth;
		huntressEighteen.hp = 2;
		huntressEighteen.idle = true;
		huntressEighteen.rdirection = false;
		huntressEighteen.collision = false;
		huntressEighteen.chase = false;
		huntressEighteen.attack = false;
		huntressEighteen.isDead = false;

		huntressNineteen.pos_x = 300;
		huntressNineteen.pos_y = 900;
		huntressNineteen.dim_x = bringerHeight;
		huntressNineteen.dim_y = bringerWidth;
		huntressNineteen.hp = 2;
		huntressNineteen.idle = true;
		huntressNineteen.rdirection = false;
		huntressNineteen.collision = false;
		huntressNineteen.chase = false;
		huntressNineteen.attack = false;
		huntressNineteen.isDead = false;//phase 2 ends

		huntressTwenty.pos_x = 331;
		huntressTwenty.pos_y = 372;
		huntressTwenty.dim_x = bringerHeight;
		huntressTwenty.dim_y = bringerWidth;
		huntressTwenty.hp = 2;
		huntressTwenty.idle = true;
		huntressTwenty.rdirection = false;
		huntressTwenty.collision = false;
		huntressTwenty.chase = false;
		huntressTwenty.attack = false;
		huntressTwenty.isDead = false;

		huntressTwentyone.pos_x = 636;
		huntressTwentyone.pos_y = 470;
		huntressTwentyone.dim_x = bringerHeight;
		huntressTwentyone.dim_y = bringerWidth;
		huntressTwentyone.hp = 2;
		huntressTwentyone.idle = true;
		huntressTwentyone.rdirection = false;
		huntressTwentyone.collision = false;
		huntressTwentyone.chase = false;
		huntressTwentyone.attack = false;
		huntressTwentyone.isDead = false;

		huntressTwentytwo.pos_x = 1059;
		huntressTwentytwo.pos_y = 525;
		huntressTwentytwo.dim_x = bringerHeight;
		huntressTwentytwo.dim_y = bringerWidth;
		huntressTwentytwo.hp = 2;
		huntressTwentytwo.idle = true;
		huntressTwentytwo.rdirection = false;
		huntressTwentytwo.collision = false;
		huntressTwentytwo.chase = false;
		huntressTwentytwo.attack = false;
		huntressTwentytwo.isDead = false;

		huntressTwentythree.pos_x = 300;
		huntressTwentythree.pos_y = 800;
		huntressTwentythree.dim_x = bringerHeight;
		huntressTwentythree.dim_y = bringerWidth;
		huntressTwentythree.hp = 2;
		huntressTwentythree.idle = true;
		huntressTwentythree.rdirection = false;
		huntressTwentythree.collision = false;
		huntressTwentythree.chase = false;
		huntressTwentythree.attack = false;
		huntressTwentythree.isDead = false;

		huntressTwentyfour.pos_x = 696;
		huntressTwentyfour.pos_y = 1000;
		huntressTwentyfour.dim_x = bringerHeight;
		huntressTwentyfour.dim_y = bringerWidth;
		huntressTwentyfour.hp = 2;
		huntressTwentyfour.idle = true;
		huntressTwentyfour.rdirection = false;
		huntressTwentyfour.collision = false;
		huntressTwentyfour.chase = false;
		huntressTwentyfour.attack = false;
		huntressTwentyfour.isDead = false;

		huntressTwentyfive.pos_x = 1022;
		huntressTwentyfive.pos_y = 1200;
		huntressTwentyfive.dim_x = bringerHeight;
		huntressTwentyfive.dim_y = bringerWidth;
		huntressTwentyfive.hp = 2;
		huntressTwentyfive.idle = true;
		huntressTwentyfive.rdirection = false;
		huntressTwentyfive.collision = false;
		huntressTwentyfive.chase = false;
		huntressTwentyfive.attack = false;
		huntressTwentyfive.isDead = false;//phase 3 ends

		bringerBoss.pos_x = 1280;
		bringerBoss.pos_y = 130;
		bringerBoss.dim_x = (bringerHeight * 3);
		bringerBoss.dim_y = (bringerWidth * 3);
		bringerBoss.hp = 1;
		bringerBoss.idle = true;
		bringerBoss.rdirection = false;
		bringerBoss.collision = false;
		bringerBoss.chase = false;
		bringerBoss.attack = false;
		bringerBoss.isDead = false;

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

		isStart = false;
		lvlOneStart = false;
		lvlTwoStart = false;

		/**************************************Heart_reposition*********************************************/
	}
	

	if (mainChar.dead < 4 && menu_option == 1)
	{
		showPoint();
		showPlayerAnimations();
		
	}
		
	
}



#endif