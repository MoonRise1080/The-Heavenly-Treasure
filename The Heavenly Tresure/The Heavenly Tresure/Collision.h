#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include "Enemy.h"


bool collision = false;
bool colX;
bool colY;
bool colL;
bool colR;
bool colXE;
bool colYE;

bool collisionDetection(int obj1_x, int obj1_y, int dim1_x, int dim1_y, int obj2_x, int obj2_y, int dim2_x, int dim2_y)
{
	dim1_x -= 51;
	colX = (obj1_x >= obj2_x && obj1_x <= obj2_x + dim2_x || obj1_x + dim1_x >= obj2_x && obj1_x + dim1_x <= obj2_x + dim2_x || obj1_x <= obj2_x && obj1_x + dim1_x >= obj2_x + dim2_x);
	colY = (obj1_y >= obj2_y && obj1_y <= obj2_y + dim2_y || obj1_y + dim1_y >= obj2_y && obj1_y + dim1_y <= obj2_y + dim1_y || obj1_y <= obj2_y && obj1_y + dim1_y >= obj2_y + dim2_y);

	if ((obj1_x >= obj2_x && obj1_x <= obj2_x + dim2_x) && (obj1_y - 133 >= obj2_y && obj1_y - 133 <= obj2_y + dim2_y))
	{
		colR = true;
	}

	else
	{
		colR = false;
	}

	if (colX && colY)
	{
		return true;
	}

	else
	{
		return false;
	}

}



bool collisionEnemy(Enemy tempEnemy, Enemy motherEnemy, int obj2_x, int obj2_y, int dim2_x, int dim2_y)
{
	colXE = (tempEnemy.pos_x >= obj2_x && tempEnemy.pos_x <= obj2_x + dim2_x || tempEnemy.pos_x + tempEnemy.dim_x >= obj2_x && tempEnemy.pos_x + tempEnemy.dim_x <= obj2_x + dim2_x || tempEnemy.pos_x <= obj2_x && tempEnemy.pos_x + tempEnemy.dim_x >= obj2_x + dim2_x);
	colYE = (tempEnemy.pos_y >= obj2_y && tempEnemy.pos_y <= obj2_y + dim2_y || tempEnemy.pos_y + tempEnemy.dim_y >= obj2_y && tempEnemy.pos_y + tempEnemy.dim_y <= obj2_y + dim2_y || tempEnemy.pos_y <= obj2_y && tempEnemy.pos_y + tempEnemy.dim_y >= obj2_y + dim2_y);

	if (colXE && colYE)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool collisionEnemy(Enemy tempEnemy, Enemy motherEnemy, int obj2_x, int obj2_y, int dim2_x, int dim2_y, int pad)
{
	if (tempEnemy.rdirection == true)
	{
		colXE = (tempEnemy.pos_x >= obj2_x && tempEnemy.pos_x <= obj2_x + dim2_x || tempEnemy.pos_x + tempEnemy.dim_x - pad>= obj2_x && tempEnemy.pos_x + tempEnemy.dim_x - pad <= obj2_x + dim2_x || tempEnemy.pos_x <= obj2_x && tempEnemy.pos_x + tempEnemy.dim_x - pad >= obj2_x + dim2_x);
		colYE = (tempEnemy.pos_y >= obj2_y && tempEnemy.pos_y <= obj2_y + dim2_y || tempEnemy.pos_y + tempEnemy.dim_y >= obj2_y && tempEnemy.pos_y + tempEnemy.dim_y <= obj2_y + dim2_y || tempEnemy.pos_y <= obj2_y && tempEnemy.pos_y + tempEnemy.dim_y >= obj2_y + dim2_y);

		if (colXE && colYE)
		{
			return true;
		}

		else
		{
			return false;
		}
	}
	else
	{
		colXE = (tempEnemy.pos_x + pad >= obj2_x && tempEnemy.pos_x + pad <= obj2_x + dim2_x || tempEnemy.pos_x + pad + tempEnemy.dim_x >= obj2_x && tempEnemy.pos_x + pad + tempEnemy.dim_x <= obj2_x + dim2_x || tempEnemy.pos_x + pad <= obj2_x && tempEnemy.pos_x + pad + tempEnemy.dim_x >= obj2_x + dim2_x);
		colYE = (tempEnemy.pos_y >= obj2_y && tempEnemy.pos_y <= obj2_y + dim2_y || tempEnemy.pos_y + tempEnemy.dim_y >= obj2_y && tempEnemy.pos_y + tempEnemy.dim_y <= obj2_y + dim2_y || tempEnemy.pos_y <= obj2_y && tempEnemy.pos_y + tempEnemy.dim_y >= obj2_y + dim2_y);

		if (colXE && colYE)
		{
			return true;
		}

		else
		{
			return false;
		}
	}
}

bool collisionXaxis(int obj1_x, int obj1_y, int dim1_x, int dim1_y, int obj2_x, int obj2_y, int dim2_x, int dim2_y)
{
	dim1_x -= 51;
	if ((obj1_x >= obj2_x && obj1_x <= obj2_x + dim2_x || obj1_x + dim1_x >= obj2_x && obj1_x + dim1_x <= obj2_x + dim2_x || obj1_x <= obj2_x && obj1_x + dim1_x >= obj2_x + dim2_x) &&
		(obj1_y >= obj2_y && obj1_y <= obj2_y + dim2_y || obj1_y + dim1_y >= obj2_y && obj1_y + dim1_y <= obj2_y + dim1_y || obj1_y <= obj2_y && obj1_y + dim1_y >= obj2_y + dim2_y))
	{
		return true;
	}

	else
	{
		return false;
	}
}


#endif