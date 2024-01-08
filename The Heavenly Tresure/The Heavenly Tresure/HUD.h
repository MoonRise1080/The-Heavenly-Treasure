#ifndef HUD_H_INCLUDED
#define HUD_H_INCLUDED

#include "Player.h"
#define hpLength 300
#define hpWidth 300

int hpImgArr[5];

void showHp()
{
	iShowImage(0, 0, hpLength, hpWidth, hpImgArr[mainChar.hp]);
}


#endif