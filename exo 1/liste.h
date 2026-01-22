#ifndef liste_H_
#define liste_H_


#include "note.h"
#include "element.h"


typedef struct Liste Liste;
struct Liste
{
    Element* premier;
};

Liste* newListeNote();
void ajouterNoteListe(Liste*, Note*);
void supprimerNoteListe(Liste*, int);
Note* rechercheNoteListe(Liste*, int);
void afficherNoteListe(Liste*);
void supprimerListe(Liste*);

#endif // liste_H_
