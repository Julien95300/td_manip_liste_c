#ifndef liste_H_
#define liste_H_

#include "evenement.h"

typedef struct Element Element;
struct Element
{
    Evenement* evenement;
    Element* suivant;
    Element* precedent;
};

typedef struct ListeDoubleChaine  ListeDoubleChaine;
struct ListeDoubleChaine
{
    Element* premier;
    Element* dernier;
};

ListeDoubleChaine* newListeEvenement();
void ajouterEvenementListe(ListeDoubleChaine*, Evenement*);
void afficherEvenement(ListeDoubleChaine*, Date);
void afficherListeEven(ListeDoubleChaine *listeD);
void afficherEvenementAutour(ListeDoubleChaine* listeD, Date dateEvenement);


#endif // liste_H_
