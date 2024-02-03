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
Enemy huntressNine(1120, 476, bringerHeight, bringerWidth, 2, true, false, false, false, false, false);
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
	}

	if (lvlTwoStart == true)
	{
		if (phase == 3)
		{
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
		showPlayerAnimations();
	}
}



#endif