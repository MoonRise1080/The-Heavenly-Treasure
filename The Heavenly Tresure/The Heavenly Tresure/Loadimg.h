#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDED

#include "Player.h"
#include "Backgrounds.h"
#include "menu.h"


void loadImage()
{

	/*--------------------------------- Menu Image ---------------------------------------*/

	menu_image[0] = iLoadImage("Menu\\menu_0.png");
	menu_image[1] = iLoadImage("Menu\\menu_1.png");
	menu_image[2] = iLoadImage("Menu\\menu_2.png");
	menu_image[3] = iLoadImage("Menu\\menu_3.png");
	menu_image[4] = iLoadImage("Menu\\menu_4.png");
	menu_image[5] = iLoadImage("Menu\\menu_5.png");
	menu_image[6] = iLoadImage("Menu\\menu_6.png");
	menu_image[7] = iLoadImage("Menu\\menu_7.png");


	/*--------------------------------- Story --------------------------------------*/
	story[0] = iLoadImage("Menu\\Story\\story_0.png");
	story[1] = iLoadImage("Menu\\Story\\story_1.png");


	/*------------------------------------ Settings ---------------------------------------*/

	settings[0] = iLoadImage("Menu\\Settings\\set_0.png");
	settings[1] = iLoadImage("Menu\\Settings\\set_1.png");
	settings[2] = iLoadImage("Menu\\Settings\\set_2.png");
	settings[3] = iLoadImage("Menu\\Settings\\set_3.png");
	settings[4] = iLoadImage("Menu\\Settings\\set_4.png");
	settings[5] = iLoadImage("Menu\\Settings\\set_5.png");
	settings[6] = iLoadImage("Menu\\Settings\\set_6.png");


	/*----------------------------------- Score -----------------------------------------*/
	score[0] = iLoadImage("Menu\\Score\\score_0.png");
	score[1] = iLoadImage("Menu\\Score\\score_1.png");
	score[2] = iLoadImage("Menu\\Score\\score_2.png");


	/*--------------------------------- Idle Image -------------------------------------*/
	demo_player.img_idle[0] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_0.png");
	demo_player.img_idle[1] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_1.png");
	demo_player.img_idle[2] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_2.png");
	demo_player.img_idle[3] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_3.png");
	demo_player.img_idle[4] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_4.png");
	demo_player.img_idle[5] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_5.png");
	demo_player.img_idle[6] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_6.png");
	demo_player.img_idle[7] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_7.png");



	/*--------------------------------- Inverted Idle Image ---------------------------------*/
	demo_player.img_invIdle[0] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_0.png");
	demo_player.img_invIdle[1] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_1.png");
	demo_player.img_invIdle[2] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_2.png");
	demo_player.img_invIdle[3] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_3.png");
	demo_player.img_invIdle[4] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_4.png");
	demo_player.img_invIdle[5] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_5.png");
	demo_player.img_invIdle[6] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_6.png");
	demo_player.img_invIdle[7] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_7.png");



	/*----------------------------- Running Image -----------------------------*/
	demo_player.img_run[0] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_0.png");
	demo_player.img_run[1] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_1.png");
	demo_player.img_run[2] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_2.png");
	demo_player.img_run[3] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_3.png");
	demo_player.img_run[4] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_4.png");
	demo_player.img_run[5] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_5.png");
	demo_player.img_run[6] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_6.png");
	demo_player.img_run[7] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_7.png");
	demo_player.img_run[8] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_8.png");
	demo_player.img_run[9] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_9.png");



	/*---------------------------- Inverted Running Image ----------------------------*/
	demo_player.img_invRun[0] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_9.png");
	demo_player.img_invRun[1] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_8.png");
	demo_player.img_invRun[2] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_7.png");
	demo_player.img_invRun[3] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_6.png");
	demo_player.img_invRun[4] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_5.png");
	demo_player.img_invRun[5] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_4.png");
	demo_player.img_invRun[6] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_3.png");
	demo_player.img_invRun[7] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_2.png");
	demo_player.img_invRun[8] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_1.png");
	demo_player.img_invRun[9] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_0.png");

	



	/*--------------------------- Background --------------------------*/
	demo_bg.backgrounds = iLoadImage("DemoBackground\\demo_level.png");

}

#endif