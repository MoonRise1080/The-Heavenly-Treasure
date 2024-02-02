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


void showLevelTwo()
{
	if (lvlTwoStart == true)
	{
		if (phase == 3)
		{
			collisionLvlTwoPhaseOne();
			showHp();

			if (mainChar.pos_x == 1280)
			{
				phase++;
				mainChar.pos_x = 0;
			}

			collisionPlayer = (collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[0], recY[0], dx[0], dy[0]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[1], recY[1], dx[1], dy[1]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[2], recY[2], dx[2], dy[2]) ||
				collisionDetection(mainChar.pos_x + mainChar.padN, mainChar.pos_y, mainChar.dim_x, mainChar.dim_y, recX[3], recY[3], dx[3], dy[3]));
		}

		
	}


	showPlayerAnimations();
}



#endif