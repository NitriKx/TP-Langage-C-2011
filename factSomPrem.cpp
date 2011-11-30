/**
	Nom/Prenom : PROFS
	Groupe TP : PROFS
	Date : 21/11/2005
	N°TP/(Exo) : TP 13
	Nom Fichier : factSomPrem.cpp
**/

#include "factSomPrem.h"


/*
	N :	factorielle
	D :	calcul de la factorielle du nombre pNb
	E :	pNb
	S : -
	R :	retourne la factorielle de pN
	Prec :	pNb >= 0
*/

int factorielle (int pNb)
{
	int i, result;

	result = 1;
	for (i = 1; i <= pNb; i++)
		result = result * i;
	return result ;
}

/*
	N :	somNPremiersEntiers
	D :	calcul de la somme des pNbre premiers entiers
	E :	pNbre
	S : -
	R :	retourne la somme des pNbre premiers entiers
	Prec :	pNbre > 0
*/

int somNPremiersEntiers (int pNbre)
{
	int i, result;

	result = 0;
	for (i = 1; i <= pNbre; i++)
		result = result + i;
	return result ;
}

/*
	N : estDiviseur
	D : indique si pNb1 est diviseur de pNb2
	E : pNb1, pNb2
	S: -
	R : retoune vrai si pNb1 est diviseur de pNb2, faux sinon
	Prec : pNb1>0, pNb2>=0
*/

bool estDiviseur(int pNb1,int pNb2)
{
	bool div ;
	if (pNb2 % pNb1 == 0)
		div=true;
	else
		div=false ;
	return div ;
}

/*
	N : estPremier
	D : indique si pNb est premier
	E : pNb
	S : -
	R : retoune vrai si pNb est premier, faux sinon
	Prec : pNb>0
*/

bool estPremier(int pNb)
{
	bool prem ;
	int i ;

	if (pNb == 1)
		prem = false;
	else
	{
		prem = true ;
		i=2;
		while ((i<=pNb/2) && prem)
		{
			prem = !(estDiviseur(i,pNb));
			i++;
		}
	}
	return prem;
}
