#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

int recX[8];
int recY[8];
int dx[8];
int dy[8];

struct DemoBackground
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	int backgrounds;

	DemoBackground(int pos_x, int pos_y, int dim_x, int dim_y)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
	}

	
}demo_bg(0, 0, 1280, 720);

void collisionLvlOne()
{	
	
	recX[0] = 0;
	recY[0] = 0;
	dx[0] = 230;
	dy[0] = 105;

	recX[1] = 230;
	recY[1] = 0;
	dx[1] = 55;
	dy[1] = 160;

	recX[2] = 285;
	recY[2] = 0;
	dx[2] = 57;
	dy[2] = 220;

	recX[3] = 345;
	recY[3] = 336;
	dx[3] = 212;
	dy[3] = 51;

	recX[4] = 631;
	recY[4] = 508;
	dx[4] = 212;
	dy[4] = 51;

	recX[5] = 574;
	recY[5] = 0;
	dx[5] = 448;
	dy[5] = 220;

	recX[6] = 1022;
	recY[6] = 0;
	dx[6] = 68;
	dy[6] = 280;

	recX[7] = 1090;
	recY[7] = 0;
	dx[7] = 190;
	dy[7] = 335;

	iSetColor(255, 255, 255);
	iFilledRectangle(recX[0], recY[0], dx[0], dy[0]);
	iFilledRectangle(recX[1], recY[1], dx[1], dy[1]);
	iFilledRectangle(recX[2], recY[2], dx[2], dy[2]);
	iFilledRectangle(recX[3], recY[3], dx[3], dy[3]);
	iFilledRectangle(recX[4], recY[4], dx[4], dy[4]);
	iFilledRectangle(recX[5], recY[5], dx[5], dy[5]);
	iFilledRectangle(recX[6], recY[6], dx[6], dy[6]);
	iFilledRectangle(recX[7], recY[7], dx[7], dy[7]);

}



#endif