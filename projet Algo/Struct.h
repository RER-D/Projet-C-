#ifndef _STRUCT_H_
#define _STRUCT_H_


typedef struct
{
    int jour;
    int mois;
    int annee;
} DATE;

typedef struct
{
    char rue[80];
    char ville[50];
    char codePostal[6];
    char pays[50];
} ADRESSE;

typedef struct
{
    char reference[12]; /// doit être égale à refProduit dans LIGNECOMMANDE
    char designation[60];
    char categorie[30];
    float prixUnitaireHT;
    int quantiteStock;
    int seuilAlerte;
    int actif;
} PRODUIT;

typedef struct
{
    char refProduit[12];
    char designation[60];
    int quantite;
    float prixUnitaireHT;
    float sousTotalHT;
} LIGNECOMMANDE;

typedef struct
{
    int numero;
    int idClient;
    DATE dateCommande;
    char statut[20];
    int nbLignes;
    int capaciteLignes;
    LIGNECOMMANDE * lignes;
    float montantBrutHT;
    float tauxRemise;
    float montantRemise;
    float montantHT;
    float montantTVA;
    float montantTTC;
    float fraisPort;
    ADRESSE adresseLivraison;
} COMMANDE;

typedef struct
{
    int idClient;
    char nom[50];
    char prenom[50];
    char email[80];
    char telephone[15];
    ADRESSE adresse;
    int pointsFidelite;
    int nbCommandes;
    int capaciteCommandes;
    COMMANDE * commandes;
    int actif;
} CLIENT;

typedef struct
{
    char nom[50];
    PRODUIT * produits;
    int nbProduits[80];
    int capaciteProduits[15];
    CLIENT * clients;
    int nbClients;
    int capaciteClients;
    int numeroSuivant;
    int idClientSuivant;
} BOUTIQUE;


#endif