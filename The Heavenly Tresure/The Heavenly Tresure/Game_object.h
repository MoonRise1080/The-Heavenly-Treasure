#ifndef GAMEOBJECT_H_INCLUDED
#define GAMEOBJECT_H_INCLUDED


struct gameObject
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	bool isTaken = false;
	int index = 0;
	bool gravity;
	int img_object[2];

	gameObject(int pos_x, int pos_y, int dim_x, int dim_y, int index, bool isTaken)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->index = index;
		this->isTaken = isTaken;
	}
	gameObject(int pos_x, int pos_y, int dim_x, int dim_y, int index, bool isTaken, bool gravity)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->index = index;
		this->isTaken = isTaken;
		this->gravity = gravity;
	}
	gameObject(int dim_x, int dim_y)
	{
		this->dim_x = dim_x;
		this->dim_y = dim_y;
	}
	
	void applyGravity()
	{
		if (gravity == true)
		{
			pos_y -= 15;
		}
	}

}motherObject(0, 0);

void showGameObject(gameObject ob)
{
	if (ob.isTaken == false)
	{
		iShowImage(ob.pos_x, ob.pos_y, ob.dim_x, ob.dim_y, motherObject.img_object[ob.index]);

	}
}

#endif