#ifndef GAMEOBJECT_H_INCLUDED
#define GAMEOBJECT_H_INCLUDED


struct gameObject
{
	int pos_x, pos_y;
	int dim_x, dim_y;
	bool isTaken = false;
	int index = 0;

	int img_object[2];

	gameObject(int pos_x, int pos_y, int dim_x, int dim_y,int index, bool isTaken)
	{
		this->pos_x = pos_x;
		this->pos_y = pos_y;
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->index= index;
		this->isTaken = isTaken;
	}
	gameObject(int dim_x, int dim_y, int index)
	{
		this->dim_x = dim_x;
		this->dim_y = dim_y;
		this->index = index;
	}
}object(50,50,0);

void showGameObject(gameObject ob)
{
	if (ob.isTaken==false && ob.index==0)
	{
		iShowImage(ob.pos_x, ob.pos_y, ob.dim_x, ob.dim_y, object.img_object[ob.index]);

	}
}

#endif