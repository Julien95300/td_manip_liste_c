#include <stdio.h>
#include <stdlib.h>
#include "evenement.h"
#include "listeDoublementChaine.h"
#include "date.h"

void main()
{    ListeDoubleChaine* p = newListeEvenement();
    Date datev;
    printf("Quelle est la date de l evenement ? si pas d evenement tapez 0 0 0\n");
    datev = LireDate();
while (datev.jour!= 0)
{
    char* valeurev = (char*) malloc(sizeof(char)*20);
    printf("Quel est la valeur de l'evenement ?\n");
    scanf("%s", valeurev);
    Evenement* evenementNv = newEvenement(datev, valeurev);
    ajouterEvenementListe(p, evenementNv);
    printf("Quelle est la date de l evenement ? si pas d evenement tapez 0 0 0\n");
    datev = LireDate();
    }
    printf("affichage liste evenement :\n");
    afficherListeEven(p);
    printf("Donner la date de l'evenement que vous voulez afficher :\n");
    datev = LireDate();
    afficherEvenement(p, datev);
   // printf("Voici les valeurs precedentes et suivantes : \n");
    afficherEvenementAutour(p, datev);
   }
