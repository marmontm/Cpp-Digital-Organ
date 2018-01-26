/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/

#include "Header.h"

void Mode1_Libre(void){
	//Variables locales :
	char cTouche = NULL;
	LPCSTR sFichierNote = NULL;
	LPCSTR sNoteSelect = NULL;

	//Instructions :
	AffInterfaceMode1();
	printf("\n\tJouez avec le clavier!");
	do{
		if (kbhit() == 1){
			cTouche = getch();
			sFichierNote = FichierNote(cTouche);
			sNoteSelect = NoteSelectFRA(cTouche);
			system("cls");
			AffInterfaceMode1();
			printf("\n\tSon en cours :\t %s", sNoteSelect);
			PlaySoundA(NULL, NULL, SND_PURGE);
			PlaySoundA((LPCSTR)sFichierNote, NULL, SND_LOOP | SND_ASYNC);
		}
	} while (cTouche != QUIT_KEY);
	printf("\n\n");
}


/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/