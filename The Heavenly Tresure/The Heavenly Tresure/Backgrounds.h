#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED
#define screenWidth 1280
#define screenHight 720
#define oriX 0
#define oriY 0

int boxNumber = 1;

int *recX = (int*)malloc(boxNumber * sizeof(int));
int *recY = (int*)malloc(boxNumber * sizeof(int));
int *dx = (int*)malloc(boxNumber * sizeof(int));
int *dy = (int*)malloc(boxNumber * sizeof(int));

struct Background
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int bgImage;

	Background(int pos_x, int pos_y, int dim_x, int dim_y)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
	}

	
};

Background lvlOnePhaseOne(oriX, oriY, screenWidth, screenHight);
Background lvlOnePhaseTwo(oriX, oriY, screenWidth, screenHight);
Background lvlOnePhaseThree(oriX, oriY, screenWidth, screenHight);
Background lvlTwoPhaseOne(oriX, oriY, screenWidth, screenHight);
Background lvlTwoPhaseTwo(oriX, oriY, screenWidth, screenHight);
Background lvlTwoPhaseThree(oriX, oriY, screenWidth, screenHight);
Background lvlTwoPhaseFour(oriX, oriY, screenWidth, screenHight);


void collisionLvlOnePhaseOne()
{
	boxNumber = 6;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 91;
	recY[0] = 291;
	dx[0] = 119;
	dy[0] = 33;

	recX[1] = 0;
	recY[1] = 0;
	dx[1] = 511;
	dy[1] = 148;

	recX[2] = 512;
	recY[2] = 0;
	dx[2] = 768;
	dy[2] = 182;

	recX[3] = 390;
	recY[3] = 368;
	dx[3] = 201;
	dy[3] = 26;

	recX[4] = 691;
	recY[4] = 475;
	dx[4] = 154;
	dy[4] = 26;

	recX[5] = 991;
	recY[5] = 544;
	dx[5] = 112;
	dy[5] = 27;


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);
	iFilledRectangle(recX[3], recY[3], dx[3], dy[3]);
	iFilledRectangle(recX[4], recY[4], dx[4], dy[4]);
	iFilledRectangle(recX[5], recY[5], dx[5], dy[5]);

	
}//complete


void collisionLvlOnePhaseTwo()
{
	boxNumber = 11;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 150;
	dy[0] = 274;

	recX[1] = 151;
	recY[1] = 0;
	dx[1] = 125;
	dy[1] = 200;

	recX[2] = 272;
	recY[2] = 0;
	dx[2] = 207;
	dy[2] = 165;

	recX[3] = 483;
	recY[3] = 0;
	dx[3] = 78;
	dy[3] = 205;

	recX[4] = 561;
	recY[4] = 0;
	dx[4] = 80;
	dy[4] = 251;

	recX[5] = 642;
	recY[5] = 0;
	dx[5] = 76;
	dy[5] = 160;

	recX[6] = 1042;
	recY[6] = 0;
	dx[6] = 238;
	dy[6] = 157;
	/**************************************************************************************************************/
	recX[7] = 89;
	recY[7] = 524;
	dx[7] = 144;
	dy[7] = 37;

	recX[8] = 1047;
	recY[8] = 534;
	dx[8] = 146;
	dy[8] = 24;

	recX[9] = 457;
	recY[9] = 585;
	dx[9] = 183;
	dy[9] = 18;

	recX[10] = 725;
	recY[10] = 338;
	dx[10] = 190;
	dy[10] = 24;


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[8], recY[2], dx[2], dy[2]);
	iFilledRectangle(recX[3], recY[3], dx[3], dy[3]);
	iFilledRectangle(recX[4], recY[4], dx[4], dy[4]);
	iFilledRectangle(recX[5], recY[5], dx[5], dy[5]);
	iFilledRectangle(recX[6], recY[6], dx[6], dy[6]);
	iFilledRectangle(recX[7], recY[7], dx[7], dy[7]);
	iFilledRectangle(recX[8], recY[8], dx[8], dy[8]);
	iFilledRectangle(recX[9], recY[9], dx[9], dy[9]);
	iFilledRectangle(recX[10], recY[10], dx[10], dy[10]);



}

void collisionLvlOnePhaseThree()
{
	boxNumber = 7;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 520;
	dy[0] = 116;

	recX[1] = 524;
	recY[1] = 0;
	dx[1] = 117;
	dy[1] = 167;

	recX[2] = 642;
	recY[2] = 0;
	dx[2] = 360;
	dy[2] = 209;

	recX[3] = 1007;
	recY[3] = 0;
	dx[3] = 273;
	dy[3] = 170;

	recX[4] = 688;
	recY[4] = 336;
	dx[4] = 142;
	dy[4] = 24;

	recX[5] = 1010;
	recY[5] = 445;
	dx[5] = 105;
	dy[5] = 34;

	recX[6] = 1169;
	recY[6] = 564;
	dx[6] = 111;
	dy[6] = 34;


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);
	iFilledRectangle(recX[3], recY[3], dx[3], dy[3]);
	iFilledRectangle(recX[4], recY[4], dx[4], dy[4]);
	iFilledRectangle(recX[5], recY[5], dx[5], dy[5]);
	iFilledRectangle(recX[6], recY[6], dx[6], dy[6]);


}

/**********************************LEVEL_TWO**************************************************************/


void collisionLvlTwoPhaseOne()
{
	boxNumber = 4;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 1280;
	dy[0] = 127;

	recX[1] = 70;
	recY[1] = 411;
	dx[1] = 196;
	dy[1] = 26;

	recX[2] = 543;
	recY[2] = 283;
	dx[2] = 198;
	dy[2] = 28;

	recX[3] = 1032;
	recY[3] = 419;
	dx[3] = 199;
	dy[3] = 25;



	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);
	iFilledRectangle(recX[3], recY[3], dx[3], dy[3]);
	


}//complete

void collisionLvlTwoPhaseTwo()
{
	boxNumber = 3;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 1280;
	dy[0] = 129;

	recX[1] = 201;
	recY[1] = 482;
	dx[1] = 199;
	dy[1] = 24;

	recX[2] = 874;
	recY[2] = 484;
	dx[2] = 195;
	dy[2] = 23;



	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);
	


}//complete

void collisionLvlTwoPhaseThree()
{
	boxNumber = 4;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 1280;
	dy[0] = 129;

	recX[1] = 370;
	recY[1] = 313;
	dx[1] = 193;
	dy[1] = 31;

	recX[2] = 676;
	recY[2] = 414;
	dx[2] = 203;
	dy[2] = 29;

	recX[3] = 1082;
	recY[3] = 461;
	dx[3] = 198;
	dy[3] = 30;

	


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);
	iFilledRectangle(recX[3], recY[3], dx[3], dy[3]);
	


}//complete

void collisionLvlTwoPhaseFour()
{
	boxNumber = 1;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 1500;
	dy[0] = 129;

	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
}
#endif