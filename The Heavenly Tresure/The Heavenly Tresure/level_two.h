#ifndef LEVELTWO_H_INCLUDED
#define LEVELTWO_H_INCLUDED
#define screenWidth 1280
#define screenHight 720
#define huntressHeight 150
#define huntressWidth 150

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

Enemy huntressSeven(161, 465, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressEight(608, 327, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressNine(1120, 476, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTen(200, 800, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressEleven(600, 900, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwelve(1000, 1000, huntressHeight, huntressWidth, true, false, false, false, false, false);

/*******************************Leve2_phase_1**********************************************/


/*******************************Leve2_phase_2**********************************************/

Enemy huntressThirteen(298, 534, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressFourteen(976, 540, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressFifteen(789, 1200, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressSixteen(789, 1000, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressSeventeen(1117,1500, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressEighteen(696, 900, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressNineteen(300, 900, huntressHeight, huntressWidth, true, false, false, false, false, false);

/*******************************Leve2_phase_2**********************************************/


/*******************************Leve2_phase_3**********************************************/

Enemy huntressTwenty(331, 372, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwentyone(636, 470, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwentytwo(1059, 525, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwentythree(300, 800, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwentyfour(696, 1000, huntressHeight, huntressWidth, true, false, false, false, false, false);
Enemy huntressTwentyfive(1022, 1200, huntressHeight, huntressWidth, true, false, false, false, false, false);

/*******************************Leve2_phase_3**********************************************/



void showLevelTwo()
{
	if (lvlTwoStart == true)
	{
		if (phase == 3)
		{
			collisionLvlTwoPhaseOne();

			

			iShowImage(lvlTwoPhaseOne.pos_x, lvlTwoPhaseOne.pos_y, lvlTwoPhaseOne.dim_x, lvlTwoPhaseOne.dim_y, lvlTwoPhaseOne.bgImage);

			showHp();
			showHuntressAnimations(huntressSeven);
			showHuntressAnimations(huntressEight);
			showHuntressAnimations(huntressNine);
			showHuntressAnimations(huntressTen);
			showHuntressAnimations(huntressEleven);
			showHuntressAnimations(huntressTwelve);

			if (mainChar.pos_x == 1280)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]));

			/******************************************************************************enemy_col_check************************************************************************************/
			if (collisionEnemy(huntressSeven, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressSeven, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressSeven, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressSeven, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressSeven.collision = true;
			}
			else
			{
				huntressSeven.collision = false;
			}

			if (collisionEnemy(huntressEight, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressEight, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressEight, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressEight, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressEight.collision = true;
			}
			else
			{
				huntressEight.collision = false;
			}

			if (collisionEnemy(huntressNine, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressNine, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressNine, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressNine, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressNine.collision = true;
			}
			else
			{
				huntressNine.collision = false;
			}
			//out of the screen enemy starts
			if (collisionEnemy(huntressTen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTen, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTen, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressTen.collision = true;
			}
			else
			{
				huntressTen.collision = false;
			}
			if (collisionEnemy(huntressEleven, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressEleven, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressEleven, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressEleven, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressEleven.collision = true;
			}
			else
			{
				huntressEleven.collision = false;
			}
			if (collisionEnemy(huntressTwelve, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwelve, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwelve, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwelve, huntressMother, recX[3], recY[3], dx[3], dy[3]))
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
		}

		if (phase == 4)
		{
			collisionLvlTwoPhaseTwo();
			

			iShowImage(lvlTwoPhaseTwo.pos_x, lvlTwoPhaseTwo.pos_y, lvlTwoPhaseTwo.dim_x, lvlTwoPhaseTwo.dim_y, lvlTwoPhaseTwo.bgImage);

			showHp();

			showHuntressAnimations(huntressThirteen);
			showHuntressAnimations(huntressFourteen);
			showHuntressAnimations(huntressFifteen);
			showHuntressAnimations(huntressSixteen);
			showHuntressAnimations(huntressSeventeen);
			showHuntressAnimations(huntressEighteen);
			showHuntressAnimations(huntressNineteen);
			

			if (mainChar.pos_x == 1280)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) );

			/******************************************************************************enemy_col_check************************************************************************************/
			if (collisionEnemy(huntressThirteen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressThirteen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressThirteen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressThirteen.collision = true;
			}
			else
			{
				huntressThirteen.collision = false;
			}

			if (collisionEnemy(huntressFourteen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressFourteen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressFourteen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressFourteen.collision = true;
			}
			else
			{
				huntressFourteen.collision = false;
			}
			
			///out of the screen enemy
			
			if (collisionEnemy(huntressFifteen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressFifteen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressFifteen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressFifteen.collision = true;
			}
			else
			{
				huntressFifteen.collision = false;
			}
			if (collisionEnemy(huntressSixteen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressSixteen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressSixteen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressSixteen.collision = true;
			}
			else
			{
				huntressSixteen.collision = false;
			}

			if (collisionEnemy(huntressSeventeen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressSeventeen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressSeventeen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressSeventeen.collision = true;
			}
			else
			{
				huntressSeventeen.collision = false;
			}
			if (collisionEnemy(huntressEighteen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressEighteen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressEighteen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
			{
				huntressEighteen.collision = true;
			}
			else
			{
				huntressEighteen.collision = false;
			}

			if (collisionEnemy(huntressNineteen, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressNineteen, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressNineteen, huntressMother, recX[2], recY[2], dx[2], dy[2]))
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

		}

		if (phase == 5)
		{
			collisionLvlTwoPhaseThree();
			

			iShowImage(lvlTwoPhaseThree.pos_x, lvlTwoPhaseThree.pos_y, lvlTwoPhaseThree.dim_x, lvlTwoPhaseThree.dim_y, lvlTwoPhaseThree.bgImage);

			showHp();

			showHuntressAnimations(huntressTwenty);
			showHuntressAnimations(huntressTwentyone);
			showHuntressAnimations(huntressTwentytwo);
			showHuntressAnimations(huntressTwentythree);
			showHuntressAnimations(huntressTwentyfour);
			showHuntressAnimations(huntressTwentyfive);

			if (mainChar.pos_x == 1280)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]));

			/******************************************************************************enemy_col_check************************************************************************************/
			if (collisionEnemy(huntressTwenty, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwenty, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwenty, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwenty, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressTwenty.collision = true;
			}
			else
			{
				huntressTwenty.collision = false;
			}

			if (collisionEnemy(huntressTwentyone, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwentyone, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwentyone, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwentyone, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressTwentyone.collision = true;
			}
			else
			{
				huntressTwentyone.collision = false;
			}

			if (collisionEnemy(huntressTwentytwo, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwentytwo, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwentytwo, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwentytwo, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressTwentytwo.collision = true;
			}
			else
			{
				huntressTwentytwo.collision = false;
			}

			//out side of the screen
			if (collisionEnemy(huntressTwentythree, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwentythree, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwentythree, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwentythree, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressTwentythree.collision = true;
			}
			else
			{
				huntressTwentythree.collision = false;
			}

			if (collisionEnemy(huntressTwentyfour, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwentyfour, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwentyfour, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwentyfour, huntressMother, recX[3], recY[3], dx[3], dy[3]))
			{
				huntressTwentyfour.collision = true;
			}
			else
			{
				huntressTwentyfour.collision = false;
			}

			if (collisionEnemy(huntressTwentyfive, huntressMother, recX[0], recY[0], dx[0], dy[0]) ||
				collisionEnemy(huntressTwentyfive, huntressMother, recX[1], recY[1], dx[1], dy[1]) ||
				collisionEnemy(huntressTwentyfive, huntressMother, recX[2], recY[2], dx[2], dy[2]) ||
				collisionEnemy(huntressTwentyfive, huntressMother, recX[3], recY[3], dx[3], dy[3]))
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
		}

		
	}


	showPlayerAnimations();
}



#endif