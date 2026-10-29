#ifndef _PRODUIT_H_
#define _PRODUIT_H_

#include "Struct.h"

void ajouterProduit(PRODUIT * produit);
int modifierProduit(PRODUIT * produit);
int supprimerProduit(PRODUIT * produit);
void afficherCatalogue(PRODUIT * produit);

#endif