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
	boxNumber = 13;

	recX = (int*)realloc(recX, boxNumber * sizeof(int));
	recY = (int*)realloc(recY, boxNumber * sizeof(int));
	dx = (int*)realloc(dx, boxNumber * sizeof(int));
	dy = (int*)realloc(dy, boxNumber * sizeof(int));

	recX[6] = 0;
	recY[6] = 0;
	dx[6] = 150;
	dy[6] = 274;

	recX[7] = 151;
	recY[7] = 0;
	dx[7] = 125;
	dy[7] = 200;

	recX[8] = 272;
	recY[8] = 0;
	dx[8] = 207;
	dy[8] = 165;

	recX[9] = 483;
	recY[9] = 0;
	dx[9] = 78;
	dy[9] = 205;

	recX[10] = 561;
	recY[10] = 0;
	dx[10] = 80;
	dy[10] = 251;

	recX[11] = 642;
	recY[11] = 0;
	dx[11] = 76;
	dy[11] = 160;

	recX[12] = 1042;
	recY[12] = 0;
	dx[12] = 238;
	dy[12] = 157;


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[6], recY[6], dx[6], dy[6]);
	iFilledRectangle(recX[7], recY[7], dx[7], dy[7]);
	iFilledRectangle(recX[8], recY[8], dx[8], dy[8]);
	iFilledRectangle(recX[9], recY[9], dx[9], dy[9]);
	iFilledRectangle(recX[10], recY[10], dx[10], dy[10]);
	iFilledRectangle(recX[11], recY[11], dx[11], dy[11]);
	iFilledRectangle(recX[12], recY[12], dx[12], dy[12]);


}

void collisionLvlOnePhaseTwo()
{
	boxNumber = 3;

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


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);


}

#endif