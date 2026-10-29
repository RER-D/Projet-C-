#ifndef COMMANDE_H
#define COMMANDE_H


#define STATUT_EN_COURS  "EN_COURS"
#define STATUT_EXPEDIEE  "EXPEDIEE"
#define STATUT_LIVREE    "LIVREE"
#define STATUT_ANNULEE   "ANNULEE"

float calculTauxRemise(float montantBrutHT);
void  calculCommande(Commande *c);*

#endif
