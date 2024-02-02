#include <iostream>
#include "iGraphics.h"
#include "Backgrounds.h"
#include "Loadimg.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"
#include "level_one.h"
#include "sound.h"
#include "HUD.h"
#include "Game_object.h"
#include "Gameover.h"
#include <cstdlib>
using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://




void iDraw()
{
	iClear();

	cout << abs(huntressOne.pos_x - mainChar.pos_x) << endl;

	if (menu_option == 0)
	{
		isStart = false;
		mainChar.dead = 0;
		showMenu();
	}


	if (menu_option == 1)
	{
		isStart = true;
		
		if (phase >= 0 && phase <= 2)
		{
			lvlOneStart = true;
			showLevelOne();
		}
		else if (phase >= 3)
		{
			lvlOneStart = false;
			lvlTwoStart = true;
			showLevelTwo();
		}
				
	}

	if (menu_option == 3)
	{
		showScore();
	}

	if (menu_option == 4)
	{
		showSet();
	}

	if (menu_option == 6)
	{
		showStory();
	}

}


void oneFiftyMilli()
{	
	
	if (isStart)
	{
		if (mainChar.idle)
		{
			mainChar.idleIndex++;
			if (mainChar.idleIndex > 7)
			{
				mainChar.idleIndex = 0;
			}
		}

		if (!mainChar.idle)
		{
			mainChar.runIndex++;
			if (mainChar.runIndex > 9)
			{
				mainChar.runIndex = 0;
			}
		}

		if (collisionPlayer == false)
		{
			applyGravity();
		}
	}

	if (lvlOneStart == true || lvlTwoStart == true)
	{
		if (1)
		{
			huntressMother.idleIndex++;
			if (huntressMother.idleIndex > 7)
			{
				huntressMother.idleIndex = 0;
			}
		}

		if (1)
		{
			huntressMother.runIndex++;
			if (huntressMother.runIndex > 7)
			{
				huntressMother.runIndex = 0;
			}
		}

		if (1)
		{
			huntressMother.attackIndex++;
			if (huntressMother.attackIndex > 4)
			{
				huntressMother.attackIndex = 0;
			}
		}

		if (1)
		{
			mainChar.attIndex++;
			if (mainChar.attIndex > 5)
			{
				mainChar.attIndex = 0;
			}
		}
		/*******************************level_one*********************************************************/

		if (huntressOne.collision == false)
		{
			if (phase == 0)
				huntressOne.applyGravityEnemy();
		}
		if (huntressTwo.collision == false)
		{
			if (phase == 0)
				huntressTwo.applyGravityEnemy();
		}
		if (huntressThree.collision == false)
		{
			if (phase == 1)
				huntressThree.applyGravityEnemy();
		}
		if (huntressFour.collision == false)
		{
			if (phase == 1)
				huntressFour.applyGravityEnemy();
		}
		if (huntressFive.collision == false)
		{
			if (phase == 2)
				huntressFive.applyGravityEnemy();
		}
		if (huntressSix.collision == false)
		{
			if (phase == 2)
				huntressSix.applyGravityEnemy();
		}
		/*******************************level_one*********************************************************/


		/*******************************level_one_chase*********************************************************/
		if (huntressOne.chase == true)
		{
			huntressOne.Chase();
		}
		if (huntressTwo.chase == true)
		{
			huntressTwo.Chase();
		}
		if (huntressThree.chase == true)
		{
			huntressThree.Chase();
		}
		if (huntressFour.chase == true)
		{
			huntressFour.Chase();
		}
		if (huntressFive.chase == true)
		{
			huntressFive.Chase();
		}
		if (huntressSix.chase == true)
		{
			huntressSix.Chase();
		}
		/*******************************level_one_chase*********************************************************/


		/*******************************level_two*********************************************************/

		if (huntressSeven.collision == false)
		{
			if (phase == 3)
				huntressSeven.applyGravityEnemy();
		}
		if (huntressEight.collision == false)
		{
			if (phase == 3)
				huntressEight.applyGravityEnemy();
		}
		if (huntressNine.collision == false)
		{
			if (phase == 3)
				huntressNine.applyGravityEnemy();
		}
		if (huntressTen.collision == false)
		{
			if (phase == 3)
				huntressTen.applyGravityEnemy();
		}
		if (huntressEleven.collision == false)
		{
			if (phase == 3)
				huntressEleven.applyGravityEnemy();
		}
		if (huntressTwelve.collision == false)
		{
			if (phase == 3)
				huntressTwelve.applyGravityEnemy();
		}
		
		//phase one ends

		if (huntressThirteen.collision == false)
		{
			if (phase == 4)
				huntressThirteen.applyGravityEnemy();
		}
		if (huntressFourteen.collision == false)
		{
			if (phase == 4)
				huntressFourteen.applyGravityEnemy();
		}
		
		if (huntressFifteen.collision == false)
		{
			if (phase == 4)
				huntressFifteen.applyGravityEnemy();
		}
		if (huntressSixteen.collision == false)
		{
			if (phase == 4)
				huntressSixteen.applyGravityEnemy();
		}

		if (huntressSeventeen.collision == false)
		{
			if (phase == 4)
				huntressSeventeen.applyGravityEnemy();
		}
		if (huntressEighteen.collision == false)
		{
			if (phase == 4)
				huntressEighteen.applyGravityEnemy();
		}
		if (huntressNineteen.collision == false)
		{
			if (phase == 4)
				huntressNineteen.applyGravityEnemy();
		}
		//phase two ends 

		if (huntressTwenty.collision == false)
		{
			if (phase == 5)
				huntressTwenty.applyGravityEnemy();
		}
		if (huntressTwentyone.collision == false)
		{
			if (phase == 5)
				huntressTwentyone.applyGravityEnemy();
		}
		if (huntressTwentytwo.collision == false)
		{
			if (phase == 5)
				huntressTwentytwo.applyGravityEnemy();
		}
		if (huntressTwenty.collision == false)
		{
			if (phase == 5)
				huntressTwenty.applyGravityEnemy();
		}
		if (huntressTwentythree.collision == false)
		{
			if (phase == 5)
				huntressTwentythree.applyGravityEnemy();
		}
		if (huntressTwentyfour.collision == false)
		{
			if (phase == 5)
				huntressTwentyfour.applyGravityEnemy();
		}
		if (huntressTwentyfive.collision == false)
		{
			if (phase == 5)
				huntressTwentyfive.applyGravityEnemy();
		}
		//phase three ends 

		/*******************************level_two*********************************************************/


		/*******************************level_two*********************************************************/
		if (huntressSeven.chase == true)
		{
			huntressSeven.Chase();
		}
		if (huntressEight.chase == true)
		{
			huntressEight.Chase();
		}
		if (huntressNine.chase == true)
		{
			huntressNine.Chase();
		}
		if (huntressTen.chase == true)
		{
			huntressTen.Chase();
		}
		if (huntressEleven.chase == true)
		{
			huntressEleven.Chase();
		}
		if (huntressTwelve.chase == true)
		{
			huntressTwelve.Chase();
		}
		//phase one ends

		if (huntressThirteen.chase == true)
		{
			huntressThirteen.Chase();
		}
		if (huntressFourteen.chase == true)
		{
			huntressFourteen.Chase();
		}
		if (huntressFifteen.chase == true)
		{
			huntressFifteen.Chase();
		}
		if (huntressSixteen.chase == true)
		{
			huntressSixteen.Chase();
		}
		if (huntressSeventeen.chase == true)
		{
			huntressSeventeen.Chase();
		}
		if (huntressEighteen.chase == true)
		{
			huntressEighteen.Chase();
		}
		if (huntressNineteen.chase == true)
		{
			huntressNineteen.Chase();
		}

		//phase Two ends

		if (huntressTwenty.chase == true)
		{
			huntressTwenty.Chase();
		}
		if (huntressTwentyone.chase == true)
		{
			huntressTwentyone.Chase();
		}
		if (huntressTwentytwo.chase == true)
		{
			huntressTwentytwo.Chase();
		}
		if (huntressTwentythree.chase == true)
		{
			huntressTwentythree.Chase();
		}
		if (huntressTwentyfour.chase == true)
		{
			huntressTwentyfour.Chase();
		}
		if (huntressTwentyfive.chase == true)
		{
			huntressTwentyfive.Chase();
		}
		//phase Three ends
		/*******************************level_two*********************************************************/

	}

}
void threeThousandMilli()
{
	if (lvlOneStart == true || lvlTwoStart == true)
	{
		/***********************************************Level_one*****************************************************************************/
		if (huntressOne.attack == true)
		{
			huntressOne.enemyAttack();
		}
		if (huntressTwo.attack == true)
		{
			huntressTwo.enemyAttack();
		}
		if (huntressThree.attack == true)
		{
			huntressThree.enemyAttack();
		}
		if (huntressFour.attack == true)
		{
			huntressFour.enemyAttack();
		}
		if (huntressFive.attack == true)
		{
			huntressFive.enemyAttack();
		}
		if (huntressSix.attack == true)
		{
			huntressSix.enemyAttack();
		}
		/***********************************************Level_one*****************************************************************************/

		/***********************************************Level_Two*****************************************************************************/
		if (huntressSeven.attack == true)
		{
			huntressSeven.enemyAttack();
		}
		if (huntressEight.attack == true)
		{
			huntressEight.enemyAttack();
		}
		if (huntressNine.attack == true)
		{
			huntressNine.enemyAttack();
		}
		if (huntressTen.attack == true)
		{
			huntressTen.enemyAttack();
		}
		if (huntressEleven.attack == true)
		{
			huntressEleven.enemyAttack();
		}
		if (huntressTwelve.attack == true)
		{
			huntressTwelve.enemyAttack();
		}
		//phase one ends
		if (huntressThirteen.attack == true)
		{
			huntressThirteen.enemyAttack();
		}
		if (huntressFourteen.attack == true)
		{
			huntressFourteen.enemyAttack();
		}
		if (huntressFifteen.attack == true)
		{
			huntressFifteen.enemyAttack();
		}
		if (huntressSixteen.attack == true)
		{
			huntressSixteen.enemyAttack();
		}
		if (huntressSeventeen.attack == true)
		{
			huntressSeventeen.enemyAttack();
		}
		if (huntressEighteen.attack == true)
		{
			huntressEighteen.enemyAttack();
		}
		if (huntressNineteen.attack == true)
		{
			huntressNineteen.enemyAttack();
		}
		//phase two ends
		if (huntressTwenty.attack == true)
		{
			huntressTwenty.enemyAttack();
		}
		if (huntressTwentyone.attack == true)
		{
			huntressTwentyone.enemyAttack();
		}
		if (huntressTwentytwo.attack == true)
		{
			huntressTwentytwo.enemyAttack();
		}
		if (huntressTwentythree.attack == true)
		{
			huntressTwentythree.enemyAttack();
		}
		if (huntressTwentyfour.attack == true)
		{
			huntressTwentyfour.enemyAttack();
		}
		if (huntressTwentyfive.attack == true)
		{
			huntressTwentyfive.enemyAttack();
		}
		//phase three ends
		/***********************************************Level_Two*****************************************************************************/
	}
}


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}

//*******************************************************************ipassiveMouse***********************************************************************//

void iPassiveMouseMove(int mx, int my)
{
	/*-------------------------- Highlight menu -------------------------*/
	if (menu_option >= 0 && menu_option <= 6)
	{
		if (mx >= 520 && mx <= 750 && my >= 475 && my <= 525)
		{
			highlightIndex = 1; //New game
		}
		else if (mx >= 520 && mx <= 750 && my >= 399 && my <= 450)
		{
			highlightIndex = 2; //Continue
		}
		else if (mx >= 520 && mx <= 750 && my >= 325 && my <= 375)
		{
			highlightIndex = 3; //Score
		}
		else if (mx >= 520 && mx <= 750 && my >= 250 && my <= 305)
		{
			highlightIndex = 4; //Settings
		}
		else if (mx >= 520 && mx <= 750 && my >= 175 && my <= 230)
		{
			highlightIndex = 5; //Control
		}
		else if (mx >= 552 && mx <= 750 && my >= 100 && my <= 150)
		{
			highlightIndex = 6; //Story
		}
		else if (mx >= 520 && mx <= 750 && my >= 25 && my <= 75)
		{
			highlightIndex = 7;
		}
		else
		{
			highlightIndex = 0;
		}

		/*--------------------------------- Selected ----------------------------------------*/

		if (menu_option == 4 && (mx >= 536 && mx <= 758 && my >= 286 && my <= 336))
		{
			setIndex = 1;
		}
		else if (menu_option == 4 && (mx >= 536 && mx <= 758 && my >= 210 && my <= 260))
		{
			setIndex = 2;
		}
		else if (menu_option == 4 && (mx >= 536 && mx <= 758 && my >= 135 && my <= 185))
		{
			setIndex = 3;
		}
		else if (menu_option == 4 && (mx >= 536 && mx <= 758 && my >= 438 && my <= 488))
		{
			setIndex = 4;
		}
		else if (menu_option == 4 && (mx >= 536 && mx <= 758 && my >= 515 && my <= 565))
		{
			setIndex = 5;
		}
		else if (menu_option == 4 && (mx >= 536 && mx <= 758 && my >= 60 && my <= 110))
		{
			setIndex = 6;
		}
		else
		{
			setIndex = 0;
		}

		if (menu_option == 3 && (mx >= 528 && mx <= 750 && my >= 210 && my <= 260))
		{
			scoreIndex = 1;
		}
		else if (menu_option == 3 && (mx >= 528 && mx <= 750 && my >= 130 && my <= 180))
		{
			scoreIndex = 2;
		}
		else
		{
			scoreIndex = 0;
		}


		if (menu_option == 6 && (mx >= 528 && mx <= 750 && my >= 67 && my <= 118))
		{
			storyIndex = 1;
		}
		else
		{
			storyIndex = 0;
		}
	}
	
	if (mx >= 459 && mx <= 840 && my >= 100 && my <= 190)
	{
		gameOverIndex = 1;
	}
	else
	{
		gameOverIndex = 0;
	}
}

void iMouse(int button, int state, int mx, int my)
{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	{
		//controlSound(false);
		selectMenuOption(mx, my);
	}


	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'a')
	{
		mainChar.attack = true;
		mainChar.idle = false;
	}

	if (key == 'm')
	{
		music = false;
		controlSound(false);
	}

}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_RIGHT)
	{
		if (1)
		{
			mainChar.pos_x += 5;
			mainChar.idle = false;
			mainChar.rdirection = true;
		}
	}

	if (key == GLUT_KEY_LEFT)
	{
		if (1)
		{
			mainChar.pos_x -= 5;
			mainChar.idle = false;
			mainChar.rdirection = false;
		}
	}

	if (key == GLUT_KEY_UP)
	{
		mainChar.pos_y += 200;
		mainChar.idle = false;

	}

	if (key == GLUT_KEY_DOWN)
	{
		mainChar.pos_y -= 200;
		mainChar.idle = false;
	}

	if (key == GLUT_KEY_END)
	{
		menu_option = 0;
		musicOption = 1;
		controlSound(false);
		controlSound(true);
	}

}


int main()
{

	iInitialize(1280, 720, "The Heavenly Treasure");
	loadImage();

	iSetTimer(150, oneFiftyMilli);
	iSetTimer(1000, threeThousandMilli);
	controlSound(true);
	iStart();
	return 0;
}