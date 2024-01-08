#ifndef HUD_H_INCLUDED
#define HUD_H_INCLUDED
#include "Player.h"
#include "iGraphics.h"
void showHp(){

	if (mainChar.hp == 4)
	{
		iShowImage(0, 0, 0, 0, menu_image[menu_option]);
	}
	if (mainChar.hp == 3)
	{
		iShowImage(0, 0, 0, 0, menu_image[menu_option]);
	}
	if (mainChar.hp == 2)
	{
		iShowImage(0, 0, 0, 0, menu_image[menu_option]);
	}
	if (mainChar.hp == 1)
	{
		iShowImage(0, 0, 0, 0, menu_image[menu_option]);
	}
	if (mainChar.hp == 0)
	{
		iShowImage(0, 0, 0, 0, menu_image[menu_option]);
	}
}


#endif