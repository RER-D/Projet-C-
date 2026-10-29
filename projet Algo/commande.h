#ifndef COMMANDE_H
#define COMMANDE_H

#include "types.h"

#define TAUX_TVA              20.0
#define FRAIS_PORT_STANDARD   5.90
#define SEUIL_PORT_OFFERT     60.0
#define TRANCHE_FIDELITE      10.0

#define STATUT_EN_COURS  "EN_COURS"
#define STATUT_EXPEDIEE  "EXPEDIEE"
#define STATUT_LIVREE    "LIVREE"
#define STATUT_ANNULEE   "ANNULEE"

float calculTauxRemise(float montantBrutHT);
void  calculCommande(Commande *c);

#ifndef COMMANDE_H
