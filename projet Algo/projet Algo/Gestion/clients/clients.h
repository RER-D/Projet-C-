#ifndef CLIENT_H
#define CLIENT_H
 
#define CAPACITE_CLIENTS_INIT  8

int emailValide(const char *email);
int telephoneValide(const char *telephone);
int codePostalValide(const char *codePostal);
int adresseValide(const Adresse *a);

int ajouterClient(Boutique *b, const char *nom, const char *prenom,
                  const char *email, const char *telephone, Adresse adresse);
int modifierClient(Boutique *b, int idClient, const char *nom, const char *prenom,
                   const char *email, const char *telephone, Adresse adresse);
int supprimerClient(Boutique *b, int idClient);