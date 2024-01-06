#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED
#define screenWidth 1280
#define screenHight 720
#define oriX 0
#define oriY 0

int *recX;
int *recY;
int *dx;
int *dy;

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

	recX = (int*)malloc(5 * sizeof(int));
	recY = (int*)malloc(5 * sizeof(int));
	dx = (int*)malloc(5 * sizeof(int));
	dy = (int*)malloc(5 * sizeof(int));

	recX[0] = 91;
	recY[0] = 291;
	dx[0] = 119;
	dy[0] = 33;

	recX[1] = 0;
	recY[1] = 0;
	dx[1] = 511;
	dy[1] = 148;


	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);


	
}



#endif