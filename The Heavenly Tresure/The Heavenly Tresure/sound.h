#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED


bool playSound = true;
bool music = true;
int musicOption = 1; //for menu
//bool soundPlaying = false;


/*__________________________________________________________Controlling sound._____________________________________________________________*/

void controlSound(bool playSound)
{
	
	if (music)
	{
		if (musicOption == 1)//menu
		{

			PlaySound("music\\Take On Me.wav", NULL, SND_LOOP | SND_ASYNC);

		}
		else if (musicOption == 2)//score
		{
			
			PlaySound("music\\score.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		else if (musicOption == 3)//story
		{
			PlaySound("music\\Fireflies .wav", NULL, SND_LOOP | SND_ASYNC);

		}
		else if (musicOption == 4)//level 1
		{

			PlaySound("music\\level_one.wav", NULL, SND_LOOP | SND_ASYNC);
		}

	}
	else
	{
		PlaySound(0, 0, 0);

	}
}

#endif