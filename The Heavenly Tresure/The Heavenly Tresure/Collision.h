#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include "Enemy.h"


bool collision = false;
bool collImpl = false;
bool colX;
bool colY;

bool collisionDetection(int obj1_x, int obj1_y, int dim1_x, int dim1_y, int obj2_x, int obj2_y, int dim2_x, int dim2_y)
{
	colX = (obj1_x >= obj2_x && obj1_x <= obj2_x + dim2_x || obj1_x + dim1_x >= obj2_x && obj1_x + dim1_x <= obj2_x + dim2_x || obj1_x <= obj2_x && obj1_x + dim1_x >= obj2_x + dim2_x);
	colY = (obj1_y >= obj2_y && obj1_y <= obj2_y + dim2_y || obj1_y + dim1_y >= obj2_y && obj1_y + dim1_y <= obj2_y + dim1_y || obj1_y <= obj2_y && obj1_y + dim1_y >= obj2_y + dim2_y);

	if (colX && colY)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool collisionEnemy(Enemy x, int obj2_x, int obj2_y, int dim2_x, int dim2_y)
{
	colX = (x.pos_x >= obj2_x && x.pos_x <= obj2_x + dim2_x || x.pos_x + x.dim_x >= obj2_x && x.pos_x + x.dim_x <= obj2_x + dim2_x || x.pos_x <= obj2_x && x.pos_x + x.dim_x >= obj2_x + dim2_x);
	colY = (x.pos_y >= obj2_y && x.pos_y <= obj2_y + dim2_y || x.pos_y + x.dim_y >= obj2_y && x.pos_y + x.dim_y <= obj2_y + dim2_y || x.pos_y <= obj2_y && x.pos_y + x.dim_y >= obj2_y + dim2_y);

	if (colX && colY)
	{
		return true;
	}

	else
	{
		return false;
	}
}


#endif