#include <stdio.h>
#include "../Structure/Struct.h"
#include "produit.h"#include <stdio.h>
#include "Struct.h"
#include "produit.h"
#include <string.h>
#include <stdlib.h>



void ajouterProduit(PRODUIT * produit) {
    int i = 0;
    while (i < 30) {
        if (produit[i].reference != "") {
            printf("Saisir la reference du produit : ");
            scanf("%s", produit[i].reference);
            printf("Saisir le nom du produit : ");
            scanf("%s", produit[i].designation);
            printf("Saisir la categorie du produit : ");
            scanf("%s", produit[i].categorie);
            printf("Saisir le prix du produit : ");
            scanf("%f", &produit[i].prixUnitaireHT);
            printf("Saisir la quantite du produit : ");
            scanf("%d", &produit[i].quantiteStock);
            break;
        }
        i++;
    }
}

int modifierProduit(PRODUIT * produit) {
    char ref[12];
    int i = 0;
    printf("Saisir la reference du produit : ");
    scanf("%s", ref);
    while (produit[i].reference != "\0") {
        if (strcmp(produit[i].reference, ref) == 0){
            printf("Saisir le nom du produit : ");
            scanf("%s", produit[i].designation);
            printf("Saisir la categorie du produit : ");
            scanf("%s", produit[i].categorie);
            printf("Saisir le prix du produit : ");
            scanf("%f", &produit[i].prixUnitaireHT);
            printf("Saisir la quantite du produit : ");
            scanf("%d", &produit[i].quantiteStock);
            return 1;
        }
        i++;
    }
    return 0;
}

int supprimerProduit(PRODUIT * produit) {
    char ref[12];
    int i = 0;
    printf("Saisir la reference du produit : ");
    scanf("%s", ref);
    while (produit[i].reference != "\0") {
        if (strcmp(produit[i].reference, ref) == 0){
            ///free(produit[i]);
            return 1;
        }
        i++;
    }
    return 0;
}

void afficherCatalogue(PRODUIT * produit) {
    int i = 0;
    while (produit[i].reference != NULL) {
        printf("Reference : %s\n", produit[i].reference);
        printf("Nom : %s\n", produit[i].designation);
        printf("Prix : %.2f\n", produit[i].prixUnitaireHT);
        printf("Quantite : %d\n", produit[i].quantiteStock);
        i++;
    }

}
