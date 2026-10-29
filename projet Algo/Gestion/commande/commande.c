#include <stdio.h>
#include <string.h>
#include "commande.h"


#define CAPACITE_LIGNES_INIT     4
#define CAPACITE_COMMANDES_INIT  2

float calculTauxRemise(float montantBrutHT)
{
    if (montantBrutHT>=600.0f) return 15.0f;
    if (montantBrutHT>=300.0f) return 10.0f;
    if (montantBrutHT>=100.0f) return 5.0f;
    return 0.0f;
}