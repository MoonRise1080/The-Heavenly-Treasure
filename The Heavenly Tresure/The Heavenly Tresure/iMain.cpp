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
using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://




void iDraw()
{
	iClear();

	cout << huntressOne.idle << endl;

	if (menu_option == 0)
	{
		isStart = false;
		showMenu();
	}


	if (menu_option == 1)
	{
		isStart = true;
		lvlOneStart = true;
		showLevelOne();
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

	if (lvlOneStart == true)
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

		if (huntressOne.collision == false)
		{
			huntressOne.applyGravityEnemy();
		}

		if (huntressTwo.collision == false)
		{
			huntressTwo.applyGravityEnemy();
		}
		
		if (huntressOne.chase == true)
		{
			huntressOne.Chase();
		}

		if (huntressTwo.chase == true)
		{
			huntressTwo.Chase();
		}

	}
		
}
void heroHurt()
{
	if (lvlOneStart == true)
	{
		if (huntressOne.attack == true)
		{
			huntressOne.enemyAttack();
		}
		if (huntressTwo.attack == true)
		{
			huntressTwo.enemyAttack();
		}
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
	if (key == '\r')
	{
		
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
	iSetTimer(3000, heroHurt);
	controlSound(true);
	iStart();
	return 0;
}