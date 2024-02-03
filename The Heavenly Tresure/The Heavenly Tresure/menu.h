#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#define screenWidth 1280
#define screenHight 720
#include "sound.h"

int menu_option = 0;
int menu_image[8];
int highlightIndex = 0;
int story[2];
int storyIndex = 0;
int settings[7];
int setIndex;
int score[3];
int control[2];
int controlIndex = 0;
int pause[3];
int pauseIndex = 0;
int scoreIndex;
int gameOverMenu[2];
int gameOverIndex;
bool gameOverCommand = false;

void selectMenuOption(int menu_x, int menu_y)
{
	if (menu_option == 0)
	{
		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 475 && menu_y <= 525)
		{
			musicOption = 4;
			menu_option = 1; //For new game.
			controlSound(true);
		}
		else if (menu_x >= 520 && menu_x <= 750 && menu_y >= 399 && menu_y <= 450)
		{
			menu_option = 2; //For continue.
		}

		else if (menu_x >= 520 && menu_x <= 750 && menu_y >= 325 && menu_y <= 375)
		{
			musicOption = 2;
			menu_option = 3; //For score.
			controlSound(true);
		}

		else if (menu_x >= 520 && menu_x <= 750 && menu_y >= 250 && menu_y <= 305)
		{
			menu_option = 4; //For setting.
		}

		else if (menu_x >= 520 && menu_x <= 750 && menu_y >= 175 && menu_y <= 230)
		{
			menu_option = 5; //For control.
		}

		else if (menu_x >= 552 && menu_x <= 750 && menu_y >= 100 && menu_y <= 150)
		{
			musicOption = 3;
			menu_option = 6; //For story.
			controlSound(true);
		}

		else if (menu_x >= 520 && menu_x <= 750 && menu_y >= 25 && menu_y <= 75)
		{
			exit(0);
		}
		
	}

	if (menu_option == 3 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 130 && menu_y <= 180))
	{
		musicOption = 1;
		menu_option = 0; //Score back
		controlSound(true);
	}

	if (menu_option == 4 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 60 && menu_y <= 110))
	{
		menu_option = 0; //Settings back
	}

	if (menu_option == 4 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 438 && menu_y <= 488))
	{
		music = false; //Music off
		controlSound(false);
	}

	if (menu_option == 4 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 515 && menu_y <= 565))
	{
		music = true; //Music on
		controlSound(true);
	}
	
	if (menu_option == 6 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 67 && menu_y <= 118))
	{
		musicOption = 1;
		menu_option = 0; //Story back
		controlSound(true);
	}
	
	if (gameOverIndex == 1 && menu_x >= 459 && menu_x <= 840 && menu_y >= 100 && menu_y <= 190)
	{
		menu_option = 0; // game over
	}

	if (menu_option == 5 && menu_x >= 530 && menu_x <= 755 && menu_y >= 32 && menu_y <= 85)
	{
		menu_option = 0;
	}
}

/*________________________________________________________Showing menu pages.__________________________________________________________*/

//This function runs all the codes for menu.
void showMenu()
{

	if (menu_option == 0 && highlightIndex == 0)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[menu_option]);
	}
	
	if (menu_option == 0 && highlightIndex == 1)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

	else if (menu_option == 0 && highlightIndex == 2)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

	else if (menu_option == 0 && highlightIndex == 3)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

	else if (menu_option == 0 && highlightIndex == 4)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

	else if (menu_option == 0 && highlightIndex == 5)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

	else if (menu_option == 0 && highlightIndex == 6)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

	else if (menu_option == 0 && highlightIndex == 7)
	{
		iShowImage(0, 0, screenWidth, screenHight, menu_image[highlightIndex]);
	}

}

void showStory()
{
	if (menu_option == 6 && storyIndex == 0)
	{
		iShowImage(0, 0, screenWidth, screenHight, story[storyIndex]);
	}
	else if (menu_option == 6 && storyIndex == 1)
	{
		iShowImage(0, 0, screenWidth, screenHight, story[storyIndex]);
	}
}

void showSet()
{
	if (menu_option == 4 && setIndex == 0)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}

	else if (menu_option == 4 && setIndex == 1)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}

	else if (menu_option == 4 && setIndex == 2)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}

	else if (menu_option == 4 && setIndex == 3)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}

	else if (menu_option == 4 && setIndex == 4)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}

	else if (menu_option == 4 && setIndex == 5)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}

	else if (menu_option == 4 && setIndex == 6)
	{
		iShowImage(0, 0, screenWidth, screenHight, settings[setIndex]);
	}


}


void showScore()
{
	if (menu_option == 3 && scoreIndex == 0)
	{
		iShowImage(0, 0, screenWidth, screenHight, score[scoreIndex]);
	}

	else if (menu_option == 3 && scoreIndex == 1)
	{
		iShowImage(0, 0, screenWidth, screenHight, score[scoreIndex]);
	}

	else if (menu_option == 3 && scoreIndex == 2)
	{
		iShowImage(0, 0, screenWidth, screenHight, score[scoreIndex]);
	}
}

void showControls()
{
	if (menu_option == 5 && controlIndex == 0)
	{
		iShowImage(0, 0, screenWidth, screenHight, control[controlIndex]);
	}

	else if (menu_option == 5 && controlIndex == 1)
	{
		iShowImage(0, 0, screenWidth, screenHight, control[controlIndex]);
	}

}

void showPauseMenu()
{
	if ()
}



#endif