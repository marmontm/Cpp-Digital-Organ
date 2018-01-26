/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/

#include "Header.h"

void Informations(void){
	system("mode con COLS=81 LINES=32");
	printf("\n\t\t\t     Touches affectees");
	printf("\n\t\t\t----------------------------");
	printf("\n\n  Note :\tDo\tRe\tMi\tFa\tSol\tLa\tSi");
	printf("\n  Touche :\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n\n\n", DO_KEY - 32, RE_KEY - 32, MI_KEY - 32, FA_KEY - 32, SOL_KEY - 32, LA_KEY - 32, SI_KEY - 32);
	printf("\n\t\t       Regles du jeu 'Oreille absolue!'");
	printf("\n\t\t ------------------------------------------");
	printf("\n\n  Ce jeu mesure la capacite de reconnaissance auditive des notes de musique.\n");
	printf("L'ordinateur joue une note aleatoire et vous devez la reconnaitre puis la saisir sur le clavier dans un laps de temps de trois secondes.\n\n\n");
	printf("\n\t              %c   %c   Surprise de Noel   %c   %c", 14, 14, 14, 14);
	printf("\n\t      ------------------------------------------------");
	printf("\n\n      Les lutins du Pere Noel se sont introduits dans le code informatique\n  que Visual Studio a compile !");
	printf(" Aidez-nous a chercher les petites farces qu'ils\n                            nous ont concoctees !\n             Selon eux, la touche 'a' serait fatale dans le menu\n                   et la touche 'm' tout autant en mode libre !\n\n");
	printf("\n    Appuyez sur une touche pour revenir au menu ..  %c  ", 14);
	PausePressKey(0);
}


/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/