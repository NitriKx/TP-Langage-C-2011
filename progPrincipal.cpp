/**
	Nom/Prenom :
	Groupe TP :
	Date :
	N°TP/(Exo) : TP 13
	Nom Fichier : progPrincipal.cpp
**/

/**
	Compte Rendu :
	Exo 1 : (jeux d'essais, résultats, commentaires, …)
	Exo 2 : ...
**/

#include <bcio.h>
#include <stdio.h>
#include <conio.h>

// Ajouter les include nécessaires éventuels
#include "biblitp.h"


#define KNBMAXVALSSUITE 10

// Commentaire sur l'utilité du programme
int main(void)
{
	int nbValeursSuite ; // Nombre de valeurs de la suite

	// Saisie du nombre de valeurs de la suite
	// Controle nombre compris entre 0 et KNBMAXVALSSUITE
	// !!! 0 est accepté !!!

	printf ("-- Calculs de factorielles / Somme n premiers entiers --\n\n");

	printf ("  Nombre de valeurs à traiter, maximum %d : ", KNBMAXVALSSUITE);
	bcget (nbValeursSuite);
	while ( (nbValeursSuite < 0) || (nbValeursSuite > KNBMAXVALSSUITE ))
	{
		printf ("     Erreur de saisie - Nombre de valeurs à traiter, maximum %d : ", KNBMAXVALSSUITE);
		bcget (nbValeursSuite);
	}





	getch();
	return 0;
}
