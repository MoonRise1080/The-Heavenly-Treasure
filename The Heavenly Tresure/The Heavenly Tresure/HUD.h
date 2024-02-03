#ifndef HUD_H_INCLUDED
#define HUD_H_INCLUDED

#include "Player.h"
#define hpLength 300
#define hpWidth 300

int hpImgArr[5];


void showHp()
{
	iShowImage(0, -100, hpLength, hpWidth, hpImgArr[mainChar.hp]);
}

void showPoint()
{
	if (mainChar.phase == 0)
	{
		iText(26, 620,"LEVEL: 1-1" , GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (mainChar.phase == 1)
	{
		iText(26, 620, "LEVEL: 1-2", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (mainChar.phase == 2)
	{
		iText(26, 620, "LEVEL: 1-3", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (mainChar.phase == 3)
	{
		iText(26, 620, "LEVEL: 2-1", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (mainChar.phase == 4)
	{
		iText(26, 620, "LEVEL: 2-2", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (mainChar.phase == 5)
	{
		iText(26, 620, "LEVEL: 2-3", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (mainChar.phase == 6)
	{
		iText(26, 620, "BOSS FIGHT", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	



	char score[20];
	sprintf_s(score, "SCORE: %d", mainChar.score);
	iText(26, 670, score, GLUT_BITMAP_TIMES_ROMAN_24);

	int lifeCount;
	if (mainChar.dead == 0)
	{
		lifeCount = 4;
	}
	else if (mainChar.dead == 1)
	{
		lifeCount = 3;
	}
	else if (mainChar.dead == 2)
	{
		lifeCount = 2;
	}
	else if (mainChar.dead == 3)
	{
		lifeCount = 1;
	}
	char life[30] = {'\0'};
	sprintf_s(life, "LIFE: %d", lifeCount);
	
	iText(26, 645, life, GLUT_BITMAP_TIMES_ROMAN_24);

}

#endif