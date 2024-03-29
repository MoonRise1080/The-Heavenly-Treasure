#ifndef LOADIMAGE_H_INCLUDED
#define LOADIMAGE_H_INCLUDED

#include "Player.h"
#include "Backgrounds.h"
#include "menu.h"
#include "HUD.h"
#include "level_one.h"
#include "level_two.h"
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

	/*--------------------------- Game Over -------------------------*/
	gameOverMenu[0] = iLoadImage("Menu\\Game Over\\game_over_0.png");
	gameOverMenu[1] = iLoadImage("Menu\\Game Over\\game_over_1.png");

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

	/*------------------------------------ Controls ---------------------------------------*/
	control[0] = iLoadImage("Menu\\Controls\\control_0.png");
	control[1] = iLoadImage("Menu\\Controls\\control_1.png");

	/*----------------------------------- Score -----------------------------------------*/
	score[0] = iLoadImage("Menu\\Score\\score_0.png");
	score[1] = iLoadImage("Menu\\Score\\score_2.png");
	score[2] = iLoadImage("Menu\\Score\\score_1.png");

	/*------------------------------------ Pause ---------------------------------------*/
	pause[0] = iLoadImage("Menu\\Pause\\pause_0.png");
	pause[1] = iLoadImage("Menu\\Pause\\pause_1.png");
	pause[2] = iLoadImage("Menu\\Pause\\pause_2.png");

	/*------------------------------------ You Win ---------------------------------------*/
	youWin[0] = iLoadImage("Menu\\Win\\win_0.png");
	youWin[1] = iLoadImage("Menu\\Win\\win_1.png");

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

	/*------------------------------- Attack Image -----------------------------------*/

	mainChar.img_att[0] = iLoadImage("HeroKnight\\Attack1\\Att\\Attack_0.png");
	mainChar.img_att[1] = iLoadImage("HeroKnight\\Attack1\\Att\\Attack_1.png");
	mainChar.img_att[2] = iLoadImage("HeroKnight\\Attack1\\Att\\Attack_2.png");
	mainChar.img_att[3] = iLoadImage("HeroKnight\\Attack1\\Att\\Attack_3.png");
	mainChar.img_att[4] = iLoadImage("HeroKnight\\Attack1\\Att\\Attack_4.png");
	mainChar.img_att[5] = iLoadImage("HeroKnight\\Attack1\\Att\\Attack_5.png");

	mainChar.img_attInv[0] = iLoadImage("HeroKnight\\Attack1\\Att Inv\\Attack_inv_0.png");
	mainChar.img_attInv[1] = iLoadImage("HeroKnight\\Attack1\\Att Inv\\Attack_inv_1.png");
	mainChar.img_attInv[2] = iLoadImage("HeroKnight\\Attack1\\Att Inv\\Attack_inv_2.png");
	mainChar.img_attInv[3] = iLoadImage("HeroKnight\\Attack1\\Att Inv\\Attack_inv_3.png");
	mainChar.img_attInv[4] = iLoadImage("HeroKnight\\Attack1\\Att Inv\\Attack_inv_4.png");
	mainChar.img_attInv[5] = iLoadImage("HeroKnight\\Attack1\\Att Inv\\Attack_inv_5.png");

	/*-------------------------------- Background ------------------------------*/

	lvlOnePhaseOne.bgImage = iLoadImage("Backgrounds\\level_1\\forest_1_1.png");
	lvlOnePhaseTwo.bgImage = iLoadImage("Backgrounds\\level_1\\forest_1_2.png");
	lvlOnePhaseThree.bgImage = iLoadImage("Backgrounds\\level_1\\forest_1_3.png");
	lvlTwoPhaseOne.bgImage = iLoadImage("Backgrounds\\level_2\\level_2_1.png");
	lvlTwoPhaseTwo.bgImage = iLoadImage("Backgrounds\\level_2\\level_2_2.png");
	lvlTwoPhaseThree.bgImage = iLoadImage("Backgrounds\\level_2\\level_2_3.png");
	lvlTwoPhaseFour.bgImage = iLoadImage("Backgrounds\\level_2\\level_2_4.png");

	/*--------------------------- Hp Image --------------------------*/
	hpImgArr[0] = iLoadImage("Backgrounds\\HUD\\Health\\health_0.png");
	hpImgArr[1] = iLoadImage("Backgrounds\\HUD\\Health\\health_1.png");
	hpImgArr[2] = iLoadImage("Backgrounds\\HUD\\Health\\health_2.png");
	hpImgArr[3] = iLoadImage("Backgrounds\\HUD\\Health\\health_3.png");
	hpImgArr[4] = iLoadImage("Backgrounds\\HUD\\Health\\health_4.png");


	/*--------------------------------- Game Objects Image ---------------------------------*/

	motherObject.img_object[0] = iLoadImage("GameObjects\\heart.png");


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


	/*---------------------------------------- Bringer of Death -----------------------------------------*/

	bringerMother.img_idle[0] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_0.png");
	bringerMother.img_idle[1] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_1.png");
	bringerMother.img_idle[2] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_2.png");
	bringerMother.img_idle[3] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_3.png");
	bringerMother.img_idle[4] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_4.png");
	bringerMother.img_idle[5] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_5.png");
	bringerMother.img_idle[6] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_6.png");
	bringerMother.img_idle[7] = iLoadImage("Enemy\\Bringer of Death\\Idle\\bringerIdle_7.png");

	bringerMother.img_invIdle[0] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_0.png");
	bringerMother.img_invIdle[1] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_1.png");
	bringerMother.img_invIdle[2] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_2.png");
	bringerMother.img_invIdle[3] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_3.png");
	bringerMother.img_invIdle[4] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_4.png");
	bringerMother.img_invIdle[5] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_5.png");
	bringerMother.img_invIdle[6] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_6.png");
	bringerMother.img_invIdle[7] = iLoadImage("Enemy\\Bringer of Death\\Idle Inv\\bringerInvIdle_7.png");

	bringerMother.img_run[0] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_0.png");
	bringerMother.img_run[1] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_1.png");
	bringerMother.img_run[2] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_2.png");
	bringerMother.img_run[3] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_3.png");
	bringerMother.img_run[4] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_4.png");
	bringerMother.img_run[5] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_5.png");
	bringerMother.img_run[6] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_6.png");
	bringerMother.img_run[7] = iLoadImage("Enemy\\Bringer of Death\\Run\\bringerRun_7.png");

	bringerMother.img_invRun[0] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_0.png");
	bringerMother.img_invRun[1] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_1.png");
	bringerMother.img_invRun[2] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_2.png");
	bringerMother.img_invRun[3] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_3.png");
	bringerMother.img_invRun[4] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_4.png");
	bringerMother.img_invRun[5] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_5.png");
	bringerMother.img_invRun[6] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_6.png");
	bringerMother.img_invRun[7] = iLoadImage("Enemy\\Bringer of Death\\Run Inv\\bringerInvRun_7.png");

	bringerMother.img_attack[0] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_0.png");
	bringerMother.img_attack[1] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_1.png");
	bringerMother.img_attack[2] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_2.png");
	bringerMother.img_attack[3] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_3.png");
	bringerMother.img_attack[4] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_4.png");
	bringerMother.img_attack[5] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_5.png");
	bringerMother.img_attack[6] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_6.png");
	bringerMother.img_attack[7] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_7.png");
	bringerMother.img_attack[8] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_8.png");
	bringerMother.img_attack[9] = iLoadImage("Enemy\\Bringer of Death\\Atk\\bringerAtt_9.png");

	bringerMother.img_invAttack[0] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_0.png");
	bringerMother.img_invAttack[1] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_1.png");
	bringerMother.img_invAttack[2] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_2.png");
	bringerMother.img_invAttack[3] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_3.png");
	bringerMother.img_invAttack[4] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_4.png");
	bringerMother.img_invAttack[5] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_5.png");
	bringerMother.img_invAttack[6] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_6.png");
	bringerMother.img_invAttack[7] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_7.png");
	bringerMother.img_invAttack[8] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_8.png");
	bringerMother.img_invAttack[9] = iLoadImage("Enemy\\Bringer of Death\\Atk Inv\\bringerInvAtt_9.png");

			

}

#endif