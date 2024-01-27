#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDED

#include "Player.h"
#include "Backgrounds.h"
#include "menu.h"
#include "HUD.h"
#include "level_one.h"
#include "Enemy.h"
#include "Game_object.h"
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
	mainChar.img_idle[0] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_0.png");
	mainChar.img_idle[1] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_1.png");
	mainChar.img_idle[2] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_2.png");
	mainChar.img_idle[3] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_3.png");
	mainChar.img_idle[4] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_4.png");
	mainChar.img_idle[5] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_5.png");
	mainChar.img_idle[6] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_6.png");
	mainChar.img_idle[7] = iLoadImage("HeroKnight\\Idle\\Norm\\HeroKnight_Idle_7.png");



	/*--------------------------------- Inverted Idle Image ---------------------------------*/
	mainChar.img_invIdle[0] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_0.png");
	mainChar.img_invIdle[1] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_1.png");
	mainChar.img_invIdle[2] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_2.png");
	mainChar.img_invIdle[3] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_3.png");
	mainChar.img_invIdle[4] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_4.png");
	mainChar.img_invIdle[5] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_5.png");
	mainChar.img_invIdle[6] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_6.png");
	mainChar.img_invIdle[7] = iLoadImage("HeroKnight\\Idle\\Inv\\HeroKnight_invIdle_7.png");



	/*----------------------------- Running Image -----------------------------*/

	mainChar.img_run[0] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_0.png");
	mainChar.img_run[1] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_1.png");
	mainChar.img_run[2] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_2.png");
	mainChar.img_run[3] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_3.png");
	mainChar.img_run[4] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_4.png");
	mainChar.img_run[5] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_5.png");
	mainChar.img_run[6] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_6.png");
	mainChar.img_run[7] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_7.png");
	mainChar.img_run[8] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_8.png");
	mainChar.img_run[9] = iLoadImage("HeroKnight\\Run\\HeroKnight_Run_9.png");



	/*---------------------------- Inverted Running Image ----------------------------*/

	mainChar.img_invRun[0] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_0.png");
	mainChar.img_invRun[1] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_1.png");
	mainChar.img_invRun[2] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_2.png");
	mainChar.img_invRun[3] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_3.png");
	mainChar.img_invRun[4] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_4.png");
	mainChar.img_invRun[5] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_5.png");
	mainChar.img_invRun[6] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_6.png");
	mainChar.img_invRun[7] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_7.png");
	mainChar.img_invRun[8] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_8.png");
	mainChar.img_invRun[9] = iLoadImage("HeroKnight\\Run\\HeroKnight_invRun_9.png");

	



	/*-------------------------------- Background ------------------------------*/

	lvlOnePhaseOne.bgImage = iLoadImage("Backgrounds\\level_1\\forest_1_1.png");
	lvlOnePhaseTwo.bgImage = iLoadImage("Backgrounds\\level_1\\forest_1_2.png");
	lvlOnePhaseThree.bgImage = iLoadImage("Backgrounds\\level_1\\forest_1_3.png");

	/*--------------------------- Hp Image --------------------------*/
	hpImgArr[0] = iLoadImage("Backgrounds\\HUD\\Health\\health_0.png");
	hpImgArr[1] = iLoadImage("Backgrounds\\HUD\\Health\\health_1.png");
	hpImgArr[2] = iLoadImage("Backgrounds\\HUD\\Health\\health_2.png");
	hpImgArr[3] = iLoadImage("Backgrounds\\HUD\\Health\\health_3.png");
	hpImgArr[4] = iLoadImage("Backgrounds\\HUD\\Health\\health_4.png");


	/*--------------------------------- Game Objects Image ---------------------------------*/

	object.img_object[0] = iLoadImage("GameObjects\\heart.png");


	/*------------------------------------------------- Enemy -----------------------------------------*/

	/*------------------------------------ Huntress -------------------------------------*/
	huntressMother.img_idle[0] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_0.png");
	huntressMother.img_idle[1] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_1.png");
	huntressMother.img_idle[2] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_2.png");
	huntressMother.img_idle[3] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_3.png");
	huntressMother.img_idle[4] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_4.png");
	huntressMother.img_idle[5] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_5.png");
	huntressMother.img_idle[6] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_6.png");
	huntressMother.img_idle[7] = iLoadImage("Enemy\\Huntress\\Idle\\huntress_idle_7.png");
	
	huntressMother.img_invIdle[0] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_0.png");
	huntressMother.img_invIdle[1] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_1.png");
	huntressMother.img_invIdle[2] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_2.png");
	huntressMother.img_invIdle[3] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_3.png");
	huntressMother.img_invIdle[4] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_4.png");
	huntressMother.img_invIdle[5] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_5.png");
	huntressMother.img_invIdle[6] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_6.png");
	huntressMother.img_invIdle[7] = iLoadImage("Enemy\\Huntress\\Idle Inv\\huntress_invIdle_7.png");

	huntressMother.img_run[0] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_0.png");
	huntressMother.img_run[1] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_1.png");
	huntressMother.img_run[2] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_2.png");
	huntressMother.img_run[3] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_3.png");
	huntressMother.img_run[4] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_4.png");
	huntressMother.img_run[5] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_5.png");
	huntressMother.img_run[6] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_6.png");
	huntressMother.img_run[7] = iLoadImage("Enemy\\Huntress\\Run\\huntress_run_7.png");

	huntressMother.img_invRun[0] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_0.png");
	huntressMother.img_invRun[1] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_1.png");
	huntressMother.img_invRun[2] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_2.png");
	huntressMother.img_invRun[3] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_3.png");
	huntressMother.img_invRun[4] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_4.png");
	huntressMother.img_invRun[5] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_5.png");
	huntressMother.img_invRun[6] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_6.png");
	huntressMother.img_invRun[7] = iLoadImage("Enemy\\Huntress\\Run Inv\\huntress_invRun_7.png");

	huntressMother.img_attack[0] = iLoadImage("Enemy\\Huntress\\Attack\\huntress_attack_0.png");
	huntressMother.img_attack[1] = iLoadImage("Enemy\\Huntress\\Attack\\huntress_attack_1.png");
	huntressMother.img_attack[2] = iLoadImage("Enemy\\Huntress\\Attack\\huntress_attack_2.png");
	huntressMother.img_attack[3] = iLoadImage("Enemy\\Huntress\\Attack\\huntress_attack_3.png");
	huntressMother.img_attack[4] = iLoadImage("Enemy\\Huntress\\Attack\\huntress_attack_4.png");

	huntressMother.img_invAttack[0] = iLoadImage("Enemy\\Huntress\\Attack Inv\\huntress_invAttack_0.png");
	huntressMother.img_invAttack[1] = iLoadImage("Enemy\\Huntress\\Attack Inv\\huntress_invAttack_1.png");
	huntressMother.img_invAttack[2] = iLoadImage("Enemy\\Huntress\\Attack Inv\\huntress_invAttack_2.png");
	huntressMother.img_invAttack[3] = iLoadImage("Enemy\\Huntress\\Attack Inv\\huntress_invAttack_3.png");
	huntressMother.img_invAttack[4] = iLoadImage("Enemy\\Huntress\\Attack Inv\\huntress_invAttack_4.png");
	

}

#endif