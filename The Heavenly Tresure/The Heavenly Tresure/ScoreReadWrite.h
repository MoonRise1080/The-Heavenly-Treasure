#ifndef SCOREREADWRITE_H_INCLUDED
#define SCOREREADWRITE_H_INCLUDED

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;


void writeScore()
{
	FILE *ptr;
	char tempScore[5];
	fopen_s(&ptr, "HighScore.txt", "a");

	sprintf_s(tempScore, "%d", mainChar.score);

	if (!ptr == NULL)
	{
		fprintf(ptr, "%s\n", tempScore);
	}

	fclose(ptr);
}

void showScoreFromFile()
{
	FILE *ptr;
	
	fopen_s(&ptr, "HighScore.txt", "r");

	int scores[100];

	int i = 0;
	while (fscanf_s(ptr, "%d", &scores[i]) != EOF)
	{
		i++;
	}

	int size = i, j;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (scores[j] >= scores[i])
			{
				int scoreTemp = scores[j];
				scores[j] = scores[i];
				scores[i] = scoreTemp;
			}
		}
	}

	char score[30];

	sprintf_s(score, "Player 1: %d", scores[0]);
	iText(530, 485, score, GLUT_BITMAP_TIMES_ROMAN_24);

	sprintf_s(score, "Player 2: %d", scores[1]);
	iText(530, 405, score, GLUT_BITMAP_TIMES_ROMAN_24);

	sprintf_s(score, "Player 3: %d", scores[2]);
	iText(530, 320, score, GLUT_BITMAP_TIMES_ROMAN_24);

	fclose(ptr);
}



#endif