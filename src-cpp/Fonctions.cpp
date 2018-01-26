/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/

#include "Header.h"

//Menu uniquement
void AnimIn(void){
	int iBcl1 = 0;
	int iBcl2 = 0;
	for (iBcl1 = 0; iBcl1 < 10; iBcl1++){

	  /*  Dessin generique de la note a double croche
	  
	    printf("\n               ***");
		printf("\n           *******");
		printf("\n       *******  **");
		printf("\n    ******      **");
		printf("\n    ***         **");
		printf("\n    **          **");
		printf("\n    **          **");
		printf("\n    **          **");
		printf("\n    **       ****** ");
		printf("\n ******     ********");
		printf("\n********     ******");
		printf("\n ******           ");
		*/

		system("cls");
		printf("\n\n\n\n\n\n");
		Color(COULEUR_NOTE);
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("               ***\n");

		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("           *******\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("       *******  **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    ******      **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    ***         **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **          **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **          **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **          **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **       ******\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf(" ******     ********\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("********     ******\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf(" ******           ");
		pause(80);
		Color(7);
	}
}

void affiche(int iColoral){
	do{
		system("cls");
		Color(COULEUR_MENU);
		printf("\n\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
		printf("\t\t\t\t%c  Orgue Numerique  %c \n", 186, 186);
		printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
		Color(iColoral);
		printf("                         ***                                       ");
		printf("\n                     *******                                     ");
		printf("\n                 *******  **                                     ");
		printf("\n              ******      **");
		Color(COULEUR_MENU);
		printf("                  1 -Mode jeu libre  ");
		Color(iColoral);
		printf("\n              ***         **");
		Color(COULEUR_MENU);
		printf("                  2 -Enregistrement  ");
		Color(iColoral);
		printf("\n              **          **");
		Color(COULEUR_MENU);
		printf("                  3 -Oreille absolue!");
		Color(iColoral);
		printf("\n              **          **");
		Color(COULEUR_MENU);
		printf("                  4 -Regles          ");
		Color(iColoral);
		printf("\n              **          **");
		Color(COULEUR_MENU);
		printf("                  5 -Exit            ");
		Color(iColoral);
		printf("\n              **       ******                                    ");
		printf("\n           ******     ********                                   ");
		printf("\n          ********     ******                                    ");
		printf("\n           ******                                              \n");
		pause(1000);
		Color(10);
		printf("\n\n\n %c     ", 14);
		Color(11);
		printf("%c     ", 14);
		Color(12);
		printf("%c     ", 14);
		Color(14);
		printf("%c     ", 14);
		Color(15);
		printf("%c     ", 14);
		Color(10);
		printf("%c     ", 14);
		Color(11);
		printf("%c     ", 14);
		Color(12);
		printf("%c     ", 14);
		Color(14);
		printf("%c     ", 14);
		Color(15);
		printf("%c     ", 14);
		Color(10);
		printf("%c     ", 14);
		Color(11);
		printf("%c     ", 14);
		Color(12);
		printf("%c     ", 14);
		Color(14);
		printf("%c     ", 14);
		pause(1000);
	} while (kbhit() == 0);
}

void AnimOut(int iColoral){
	int iBcl1 = 0;
	int iBcl2 = 0;
	for (iBcl1 = 10; iBcl1 > 0; iBcl1--){
		system("cls");
		printf("\n\n\n\n\n\n");
		Color(iColoral);
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("               ***\n");

		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("           *******\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("       *******  **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    ******      **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    ***         **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **          **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **          **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **          **\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("    **       ******\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf(" ******     ********\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf("********     ******\n");
		for (iBcl2 = 0; iBcl2 < iBcl1; iBcl2++)
		{
			printf(" ");
		}
		printf(" ******           ");
		pause(10);
		Color(7);
	}
}

void pause(int iTemps){
	int iTempstart = 0;
	int iTempsend = 0;
	iTempstart = GetTickCount();
	do
	{
		iTempsend = GetTickCount();
	} while ((iTempsend<iTempstart + iTemps) && (kbhit() == 0));
}


//Mode 1 uniquement
void AffInterfaceMode1(void) {
	printf("\n  %c   Mode libre\t\t(Q pour quitter)\n\n", 14);
	printf("\n  Note :\tDo\tRe\tMi\tFa\tSol\tLa\tSi\n");
	printf("\n  Touche :\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n\n", DO_KEY - 32, RE_KEY - 32, MI_KEY - 32, FA_KEY - 32, SOL_KEY - 32, LA_KEY - 32, SI_KEY - 32);
}


//Mode 2 uniquement
void AffInterfaceMode2(void) {
	system("cls");
	printf("\n  %c  Restitution d'un son enregistre\n\n", 14);
	printf("\n  Note :\tDo\tRe\tMi\tFa\tSol\tLa\tSi\n");
	printf("\n  Touche :\t%c\t%c\t%c\t%c\t%c\t%c\t%c", DO_KEY - 32, RE_KEY - 32, MI_KEY - 32, FA_KEY - 32, SOL_KEY - 32, LA_KEY - 32, SI_KEY - 32);
	printf("\n\n\t'Q' pour terminer la sequence.\n\tLa taille maximale d'une sequence est de %i notes.\n", DIM_SEQ);
}


//Mode 3 uniquement
char Reconnaissance(void){
	int iTimestart = 0;
	int iTimeend = 0;
	char cTouche = 0;
	iTimestart = GetTickCount();
	do
	{
		iTimeend = GetTickCount();
		if (kbhit() == 1){
			cTouche = getch();
		}
	} while ((iTimeend < iTimestart + TIME) && (cTouche == 0));
	if (cTouche == 0)
	{
		Color(12);
		printf("\tTrop tard");
		Color(15);
	}
	return cTouche;
}

void Reponse(char cNote){

	switch (cNote)
	{
	case DO_KEY:
		printf("\tc'etait un DO\n");

		break;
	case RE_KEY:
		printf("\tc'etait un RE\n");

		break;
	case MI_KEY:
		printf("\tc'etait un MI\n");

		break;
	case FA_KEY:
		printf("\tc'etait un FA\n");

		break;
	case SOL_KEY:
		printf("\tc'etait un SOL\n");

		break;
	case LA_KEY:
		printf("\tc'etait un LA\n");

		break;
	case SI_KEY:
		printf("\tc'etait un SI\n");

		break;
	}

}

void afficheNote(int iRes){
	printf("\n");
	if (iRes<6)
	{
		Color(12);
		printf("\t%i/20\t\t Hum!!\n", iRes);
		Color(15);
	}
	else if (iRes<11)
	{
		Color(12);
		printf("\t%i/20\t\t Peut mieux faire!\n", iRes);
		Color(15);
	}
	else if (iRes<15)
	{
		Color(14);
		printf("\t%i/20\t\t Bravo!\n", iRes);
		Color(15);
	}
	else
	{
		Color(10);
		printf("\t%i/20\t\t Excellent! Quelles oreilles!\n", iRes);
		Color(15);
	}

}


//Partagees
void Color(WORD Attributes){
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, Attributes);
}

int NbreAleat(int iMin, int iMax){
	int iAleat = (rand() % (iMax - iMin + 1)) + iMin;
	return iAleat;
}

char PausePressKey(bool bDispText) {
	bool bPress = 0;
	if (bDispText == 1) {
		printf("\nAppuyez sur une touche pour continuer. ");
	}
	do {
		bPress = kbhit();
	} while (bPress == 0);
	char cBlabla = getch(); //on n'avait plus d'idee pour la variable ...
	return cBlabla;
}

LPCSTR FichierNote(char cKey){
	LPCSTR sNote = NULL;
	switch (cKey)
	{
	case DO_KEY:
		sNote = DO_C;
		break;
	case RE_KEY:
		sNote = RE_D;
		break;
	case MI_KEY:
		sNote = MI_E;
		break;
	case FA_KEY:
		sNote = FA_F;
		break;
	case SOL_KEY:
		sNote = SOL_G;
		break;
	case LA_KEY:
		sNote = LA_A;
		break;
	case SI_KEY:
		sNote = SI_B;
		break;
	case OTHER_KEY:
		sNote = "media\\Holiday.wav";
		break;
	default:
		sNote = NULL;
		break;
	}
	return sNote;
}

LPCSTR NoteSelectFRA(char cKey) {
	LPCSTR sNote = NULL;
	switch (cKey)
	{
	case DO_KEY:
		sNote = "Do";
		break;
	case RE_KEY:
		sNote = "Re";
		break;
	case MI_KEY:
		sNote = "Mi";
		break;
	case FA_KEY:
		sNote = "Fa";
		break;
	case SOL_KEY:
		sNote = "Sol";
		break;
	case LA_KEY:
		sNote = "La";
		break;
	case SI_KEY:
		sNote = "Si";
		break;
	case OTHER_KEY:
		sNote = "--  Have a nice day!  --";
		break;
	default:
		sNote = "Silence";
		break;
	}
	return sNote;
}

char NoteSelectANG(char cKey) {
	char cNote = NULL;
	switch (cKey)
	{
	case DO_KEY:
		cNote = 'c';
		break;
	case RE_KEY:
		cNote = 'd';
		break;
	case MI_KEY:
		cNote = 'e';
		break;
	case FA_KEY:
		cNote = 'f';
		break;
	case SOL_KEY:
		cNote = 'g';
		break;
	case LA_KEY:
		cNote = 'a';
		break;
	case SI_KEY:
		cNote = 'b';
		break;
	default:
		cNote = 's';
		break;
	}
	return cNote;
}

void Delais(int iDuree_ms) {
	int iDepart = GetTickCount();
	int iTmp = 0;
	do {
		iTmp = GetTickCount();
	} while (iTmp < (iDepart + iDuree_ms));
}



/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/
