#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#define screenWidth 1280
#define screenHight 720

int menu_option = 0;
int menu_image[8];
int highlightIndex = 0;
int story[2];
int storyIndex = 0;
int settings[7];
int setIndex;
int score[3];
int scoreIndex;

void selectMenuOption(int menu_x, int menu_y)
{
	if (menu_option == 0)
	{
		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 475 && menu_y <= 525)
		{
			menu_option = 1; //For new game.
		}
		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 399 && menu_y <= 450)
		{
			menu_option = 2; //For continue.
		}

		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 325 && menu_y <= 375)
		{
			menu_option = 3; //For score.
		}

		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 250 && menu_y <= 305)
		{
			menu_option = 4; //For setting.
		}

		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 175 && menu_y <= 230)
		{
			menu_option = 5; //For control.
		}

		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 100 && menu_y <= 150)
		{
			menu_option = 6; //For story.
		}

		if (menu_x >= 520 && menu_x <= 750 && menu_y >= 25 && menu_y <= 75)
		{
			exit(0);
		}
		
	}

	if (menu_option == 3 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 130 && menu_y <= 180))
	{
		menu_option = 0; //Score back
	}

	if (menu_option == 4 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 60 && menu_y <= 110))
	{
		menu_option = 0; //Settings back
	}

	if (menu_option == 6 && (menu_x >= 536 && menu_x <= 758 && menu_y >= 67 && menu_y <= 118))
	{
		menu_option = 0; //Story back
	}

	
}

/*________________________________________________________Showing menu pages.__________________________________________________________*/

//This function runs all the codes for menu.
void showMenu()
{
	//cout << "Menu codes running!" << endl;

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
	else
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

#endif