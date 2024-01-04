#ifndef INTROLEVEL_H_INCLUDED
#define INTROLEVEL_H_INCLUDED

#include "Backgrounds.h"
#include "Loadimg.h"
#include "Player.h"
#include "Collision.h"
#include "menu.h"

bool isStart = false;

void showIntroLevel()
{
	collisionBox();
	iShowImage(demo_bg.pos_x, demo_bg.pos_y, demo_bg.dim_x, demo_bg.dim_y, demo_bg.backgrounds);

	if (demo_player.idle)
	{
		if (demo_player.rdirection)
		{
			iShowImage(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, demo_player.img_idle[demo_player.idleIndex]);
		}

		else
		{
			iShowImage(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, demo_player.img_invIdle[demo_player.idleIndex]);
		}

	}

	else
	{
		if (demo_player.rdirection)
		{
			iShowImage(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, demo_player.img_run[demo_player.runIndex]);
		}

		else
		{
			iShowImage(demo_player.pos_x, demo_player.pos_y, demo_player.dim_x, demo_player.dim_y, demo_player.img_invRun[demo_player.runIndex]);
		}

		demo_player.moveCheck++;

		if (demo_player.moveCheck > 200)
		{
			demo_player.moveCheck = 0;
			demo_player.idle = true;
		}

	}
}

#endif





