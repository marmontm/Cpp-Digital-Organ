/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/

#include "Header.h"

void main(void){
	//Declarations :
	char cChoix = 0;
	int iAlcolor = 11;
	bool bQuit = 0;

	//Instructions :
	do{
		//initialisation console
		system("mode con COLS=81 LINES=25");
		system("cls");
		system("title Orgue Numérique");
		
		//Reinitialisation des variables de debut de pgm
		cChoix = 0;
		iAlcolor = 11;
		bQuit = 0;

		AnimIn();
		do
		{
			affiche(iAlcolor);
			cChoix = getch();
			if (cChoix == 'a')
			{
				iAlcolor = (rand() % 15) + 1;
			}
		} while ((cChoix<'1') || (cChoix>'5'));

		switch (cChoix)
		{
		case '1':
			AnimOut(iAlcolor);
			system("cls");
			Mode1_Libre(); //Appel de la fonction 1 Mode jeu libre
			break;
		case '2':
			AnimOut(iAlcolor);
			system("cls");
			Mode2_Enregistrement(); //Appel de la fonction 2 Enregistrement  
			break;
		case '3':
			AnimOut(iAlcolor);
			system("cls");
			Mode3_Jeu();	//Appel de la fonction 3 Oreille absolue
			break;
		case '4':
			AnimOut(iAlcolor);
			system("cls");
			Informations();  //Appel de la fonction Informations
			break;
		case '5': //sortie du programme
			AnimOut(iAlcolor);
			printf("\n\n\n");
			system("cls");
			bQuit = 1;
			break;
		}
	} while (0 == bQuit);
}

/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/