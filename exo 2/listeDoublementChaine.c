
#include <stdio.h>
#include <stdlib.h>
#include "evenement.h"
#include "listeDoublementChaine.h"
#include "date.h"


ListeDoubleChaine* newListeEvenement()
{ ListeDoubleChaine* listeD = malloc(sizeof(ListeDoubleChaine));

listeD->premier = NULL;
listeD->dernier = NULL;
return listeD;
    }

void ajouterEvenementListe(ListeDoubleChaine *listeD, Evenement* evenementNv)
{
     /* Création du nouvel élément */
     Element* nouveau = malloc(sizeof(Element));
     if (listeD == NULL || nouveau == NULL)
        {
            exit(EXIT_FAILURE);
     }
     nouveau->evenement = evenementNv;
     /* Insertion de l'élément dans la liste selon la date*/

     if(listeD->premier == NULL)
     {
         listeD->premier = nouveau;
         nouveau->precedent = NULL;
         nouveau->suivant = NULL;
         listeD->dernier = nouveau;
     }
     else{
        Element* actuel = listeD->premier;
        while(actuel != NULL && compare(nouveau->evenement->dateEvenement,actuel->evenement->dateEvenement)==1)
        {
        actuel= actuel->suivant;
        }

        if(actuel == NULL)
        {
        actuel = listeD->dernier;
        nouveau->precedent = actuel;
        nouveau->suivant = NULL;
        actuel->suivant = nouveau;
        listeD->dernier = nouveau;

        }
        else{

        if(actuel == listeD->premier)
        { listeD->premier = nouveau;
           nouveau->precedent = NULL;

        }else{
            nouveau->precedent = actuel->precedent;

            nouveau->precedent->suivant = nouveau;
           }

        nouveau->suivant = actuel;
        actuel->precedent = nouveau;

        }

    }
      }

void afficherEvenement(ListeDoubleChaine *listeD, Date dateEvenement)
{
if (listeD == NULL)
{
exit(EXIT_FAILURE);
}
Element* actuel = listeD->premier;
while (actuel != NULL && compare(actuel->evenement->dateEvenement,dateEvenement) != 0)
{
actuel = actuel->suivant;
}

if (actuel!=NULL)
    printEvenement(actuel->evenement);
else printf("Evenement non trouve\n");

}


void afficherListeEven(ListeDoubleChaine *listeD)
{
if (listeD == NULL)
{
exit(EXIT_FAILURE);
}
Element* actuel = listeD->premier;
while (actuel != NULL)
{
printEvenement(actuel->evenement);
actuel = actuel->suivant;
}
}

void afficherEvenementAutour(ListeDoubleChaine* listeD, Date dateEvenement)
{
if (listeD == NULL)
{
exit(EXIT_FAILURE);
}
Element* actuel = listeD->premier;
while (actuel != NULL && compare(actuel->evenement->dateEvenement,dateEvenement) != 0)
{
actuel = actuel->suivant;
}
if (actuel!=NULL)
   {     // printEvenement(actuel->evenement);
       Element* evenPrecedent = actuel->precedent;
       if (evenPrecedent!=NULL)
       {printf("Evenements precedents :\n");
        printEvenement(evenPrecedent->evenement);
        evenPrecedent = evenPrecedent->precedent;
        if (evenPrecedent!=NULL)
        printEvenement(evenPrecedent->evenement);
        }
       Element* evenSuivant = actuel->suivant;
       if (evenSuivant!=NULL)
       {
       printf("Evenements suivants :\n");
       printEvenement(evenSuivant->evenement);
       evenSuivant = evenSuivant->suivant;
       if (evenSuivant!=NULL)
       printEvenement(evenSuivant->evenement);
       }
   }
else printf("NULL\n");
}


