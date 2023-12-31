#include <iostream>
#include "iGraphics.h"
#include "DemoBackground.h"
#include "Loadimg.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"
#include "Intro_level.h"
using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://




void iDraw()
{
	iClear();

	if (menu_option == 0)
	{
		isStart = false;
		showMenu();
	}


	if (menu_option == 1)
	{
		isStart = true;
		showIntroLevel();
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
		if (demo_player.idle)
		{
			demo_player.idleIndex++;
			if (demo_player.idleIndex > 7)
			{
				demo_player.idleIndex = 0;
			}
		}

		if (!demo_player.idle)
		{
			demo_player.runIndex++;
			if (demo_player.runIndex >= 9)
			{
				demo_player.runIndex = 0;
			}
		}

		collImpl = (collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[3], recY[3], dx[3], dy[3]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[4], recY[4], dx[4], dy[4]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[5], recY[5], dx[5], dy[5]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[6], recY[6], dx[6], dy[6]) ||
			collisionDetection(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, recX[7], recY[7], dx[7], dy[7]));

		if (collImpl)
		{
			cout << colX << endl;
			cout << colY << endl;
			cout << "Collision detected" << endl;
		}

		else
		{
			demo_player.pos_y -= 15;
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
	
	
}


void iSpecialKeyboard(unsigned char key)
{
	
	if (key == GLUT_KEY_RIGHT)
	{	
		if (1)
		{
			demo_player.pos_x += 5;
			demo_player.idle = false;
			demo_player.rdirection = true;
		}
	}

	if (key == GLUT_KEY_LEFT)
	{
		if (1)
		{
			demo_player.pos_x -= 5;
			demo_player.idle = false;
			demo_player.rdirection = false;
		}	
	}

	if (key == GLUT_KEY_UP)
	{
		demo_player.pos_y += 300;
		demo_player.idle = false;

	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}

	if (key == GLUT_KEY_END)
	{
		menu_option = 0;
	}
	
}


int main()
{

	iInitialize(1280, 720, "The Heavenly Treasure");
	loadImage();

	iSetTimer(150, oneFiftyMilli);
	
	iStart();
	return 0;
}