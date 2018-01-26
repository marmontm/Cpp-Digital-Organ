/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/



//Bibliotheques VS
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <mmsystem.h>

#pragma comment(lib,"Winmm.lib")
#pragma comment(lib,"winmm")

//localisation des fichiers son
#define DO_C		"media\\C.wav"
#define RE_D		"media\\D.wav"
#define MI_E		"media\\E.wav"
#define FA_F		"media\\F.wav"
#define SOL_G		"media\\G.wav"
#define LA_A		"media\\A.wav"
#define SI_B		"media\\B.wav"

//definition des touches de clavier
//ATTENTION : NON COMPATIBLE AVEC DES MAJUSCULES
#define DO_KEY		'c'
#define RE_KEY		'd'
#define MI_KEY		'e'
#define FA_KEY		'f'
#define SOL_KEY		'g'
#define LA_KEY		'a'
#define SI_KEY		'b'
#define QUIT_KEY	'q'
#define OTHER_KEY	'm'

//couleurs appliquees
#define COULEUR_NOTE	11		//couleur par defaut de la note
#define COULEUR_MENU	15

//dimension de la sequence en nb de notes
#define DIM_SEQ		50

//delais de reponse jeu (en ms)
#define TIME	3000

//Type du tableau de la sequence
typedef struct{
	char m_cNote;
	int m_iDuree;
}TNote;

//declaration des fonctions :
//  Menu
void AnimIn(void);				// animation de la note en entrée
void AnimOut(int iColoral);		// animation de la note en Sortie
void pause(int iTemps);			// realise une pause d'une duree specifiee + sortie possible en pressant une touche
void affiche(int iColoral);		// affiche le menu statique

//  Mode1
void Mode1_Libre(void);			// contient le mode 1
void AffInterfaceMode1(void);	// affichage de l'entete de la console

// Mode2
void Mode2_Enregistrement(void);	// contient le mode 2
void AffInterfaceMode2(void);		// affichage de l'entete de la console

// Mode3
void Mode3_Jeu(void);			// contient le mode 3
char Reconnaissance(void);		// retourne la touche saisie dans un laps de temps de 3s
void Reponse(char cNote);		// affiche la note qui a ete jouée
void afficheNote(int iRes);		// affiche la note sur 20 avec une appreciation

// Informations
void Informations(void);		// contient les informations et les regles


// Partagees
void Color(WORD Attributes);		// gestion des couleurs d'affichage dans console
int NbreAleat(int iMin, int iMax);	// Renvoie un entier aleatoire compris entre un min et un max
char PausePressKey(bool bDispText); // Realise une pause dans le pgm (similaire a system("pause")
LPCSTR FichierNote(char cKey);		// Renvoie le fichier son de la note associee a la touche entree en param.
LPCSTR NoteSelectFRA(char cKey);	// Renvoie la note francaise associee a la touche entree en param.
char NoteSelectANG(char cKey);		// Renvoie la note anglaise associee a la touche entree en param.
void Delais(int iDuree_ms);			// Realise une pause de X ms


/*
Projet_Info1_P14-Orgue

BELLO Alan
MARMONT Maxime
GEII 1 - Serie C

© Decembre 2015 - Tous droits reserves.
*/
