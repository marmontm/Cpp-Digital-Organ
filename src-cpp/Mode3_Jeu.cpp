/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/

#include "Header.h"

void Mode3_Jeu(void){

	//Declarations :
	int iAl = 0;
	int iSaisie = 0;
	char cSaisie = 0;
	char cJouer = 0;
	int iNote = 0;
	int iTirage = 0;

	srand(time(NULL));

	//Instructions :
	Color(15);
	for (iTirage = 0; iTirage < 20; iTirage++)
	{
		printf(" %i -  ", iTirage + 1);
		iAl = rand() % 7;

		switch (iAl)
		{
		case 0:
			PlaySoundA("media\\C.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = DO_KEY;
			break;
		case 1:
			PlaySoundA("media\\D.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = RE_KEY;
			break;
		case 2:
			PlaySoundA("media\\E.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = MI_KEY;
			break;
		case 3:
			PlaySoundA("media\\F.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = FA_KEY;
			break;
		case 4:
			PlaySoundA("media\\G.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = SOL_KEY;
			break;
		case 5:
			PlaySoundA("media\\A.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = LA_KEY;
			break;
		case 6:
			PlaySoundA("media\\B.wav", NULL, SND_LOOP | SND_ASYNC);
			cJouer = SI_KEY;
			break;
		}

		printf("Quelle est cette note ?");

		cSaisie = Reconnaissance();

		if (cSaisie == cJouer)
		{
			Color(10);
			iNote++;
			printf("\tCorrect\t");
			Color(15);
		}
		else if ((cSaisie != cJouer) && (cSaisie != 0))
		{
			Color(12);
			printf("\tIncorrect");
			Color(15);
		}
		PlaySoundA(NULL, NULL, SND_PURGE);
		Reponse(cJouer);
	}

	afficheNote(iNote);
	printf("\n\n\tAppuyez sur une touche pour retourner au menu.");
	PausePressKey(0);
}


/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/