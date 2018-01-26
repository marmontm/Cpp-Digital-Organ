/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/

#include "Header.h"

void Mode2_Enregistrement(void) {
	system("title Orgue Numérique");

	//Variables locales :
	TNote enrTabSequence[DIM_SEQ];
	int iBcl = 0;
	int iFinSeq = 0;
	char cTouche = NULL;		//touche pressee
	char cNoteAct = NULL;		//note active
	bool bFin = 0;				//sortie de boucle
	int iTpsDepart = 0;			//point de depart calcul duree
	int iDureeLecture = 0;		//DEBUG - Duree reelle de la lecture de chaque note enregistree

	//initialisation sequence de notes
	for (iBcl = 0; iBcl < DIM_SEQ; iBcl++) {
		enrTabSequence[iBcl].m_cNote = NULL;
		enrTabSequence[iBcl].m_iDuree = 0;
	}
	//Instructioons :
	//purge son en cours (securite)
	PlaySoundA(NULL, NULL, SND_PURGE);

	//Interface de depart
	AffInterfaceMode2();
	printf("\n  Jouez une note pour commencer l'acquisition ..");

	//acquisition des notes
	do {
		cTouche = getch();
	} while ((cTouche<'a') || (cTouche>'g'));
	PlaySoundA((LPCSTR)FichierNote(cTouche), NULL, SND_LOOP | SND_ASYNC);
	enrTabSequence[iFinSeq].m_cNote = NoteSelectANG(cTouche);
	iTpsDepart = GetTickCount();
	system("title Orgue Numérique - Acquisition en cours...");
	AffInterfaceMode2();
	printf("\n\n\n\t\t\tSon en cours : %i - %s", iFinSeq + 1, NoteSelectFRA(cTouche));

	do {
		if (kbhit()) {
			cTouche = getch();
			if ((cTouche >= 'a') && (cTouche <= 'g'))
			{
				enrTabSequence[iFinSeq].m_iDuree = GetTickCount() - iTpsDepart;
				PlaySoundA(NULL, NULL, SND_PURGE);
				if (iFinSeq < (DIM_SEQ - 1)){
					iFinSeq++;
					AffInterfaceMode2();
					printf("\n\n\n\t\t\tSon en cours : %i - %s", iFinSeq + 1, NoteSelectFRA(cTouche));
					PlaySoundA((LPCSTR)FichierNote(cTouche), NULL, SND_LOOP | SND_ASYNC);
					enrTabSequence[iFinSeq].m_cNote = NoteSelectANG(cTouche);
					iTpsDepart = GetTickCount();
				}
				else {
					bFin = 1;
				}
			}
			else if (cTouche == 'q') {
				enrTabSequence[iFinSeq].m_iDuree = GetTickCount() - iTpsDepart;
				bFin = 1;
			}
		}
	} while (bFin == 0);

	PlaySoundA(NULL, NULL, SND_PURGE);
	system("title Orgue Numérique");
	printf("\n\n\n   Appuyez sur une touche pour lire la sequence .. ");
	PausePressKey(0);
	system("title Orgue Numérique - Lecture en cours...");
	system("mode con COLS=81 LINES=40");
	system("cls");
	printf("\n  %c  Restitution d'un son enregistre\n\n", 14);
	printf("\n\t\tNo\tNOTE\tDUREE (en ms)\n\t   -----------------------------------------\n");
	for (iBcl = 0; iBcl <= iFinSeq; iBcl++) {
		PlaySoundA(NULL, NULL, SND_PURGE);		//purge son
		printf("\t\t%i\t%s\t%i\n", iBcl + 1, NoteSelectFRA(enrTabSequence[iBcl].m_cNote), enrTabSequence[iBcl].m_iDuree);
		PlaySoundA((LPCSTR)FichierNote(enrTabSequence[iBcl].m_cNote), NULL, SND_LOOP | SND_ASYNC);
		Delais(enrTabSequence[iBcl].m_iDuree);
	}
	PlaySoundA(NULL, NULL, SND_PURGE);
	system("title Orgue Numérique");
	printf("\n  Termine ! Appuyer sur une touche pour revenir au menu ..\n");
	PausePressKey(0);
}


/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/