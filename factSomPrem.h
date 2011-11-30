/**
	Nom/Prenom : PROFS
	Groupe TP : PROFS
	Date : 21/11/2005
	N°TP/(Exo) : TP 13
	Nom Fichier : factSomPrem.h
**/

#ifndef _FACTSOMPREM_H
#define _FACTSOMPREM_H


/*
	N :	factorielle
	D :	calcul de la factorielle du nombre pNb
	E :	pNb
	S : -
	R :	retourne la factorielle de pN
	Prec :	pNb >= 0
*/

int factorielle (int pNb);

/*
	N :	somNPremiersEntiers
	D :	calcul de la somme des pNbre premiers entiers
	E :	pNbre
	S : -
	R :	retourne la somme des pNbre premiers entiers
	Prec :	pNbre > 0
*/

int somNPremiersEntiers (int pNbre);

/*
	N : estDiviseur
	D : indique si pNb1 est diviseur de pNb2
	E : pNb1, pNb2
	S: -
	R : retoune vrai si pNb1 est diviseur de pNb2, faux sinon
	Prec : pNb1>0, pNb2>=0
*/

bool estDiviseur(int pNb1,int pNb2);

/*
	N : estPremier
	D : indique si pNb est premier
	E : pNb
	S : -
	R : retoune vrai si pNb est premier, faux sinon
	Prec : pNb>0
*/

bool estPremier(int pNb) ;


#endif
