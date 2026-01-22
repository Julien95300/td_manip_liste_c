#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include "note.h"

Liste* newListeNote()
{
    Liste* liste = malloc(sizeof(liste));

    liste->premier = NULL;
    return liste;
}

void ajouterNoteListe(Liste *liste, Note* noteNv)
{
    /* Création du nouvel élément */
    Element* nouveau = malloc(sizeof(Element));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->note = noteNv;
    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

Note* rechercheNoteListe(Liste *liste, int idEleve)
{

    if (liste == NULL)
    {
        return NULL;
    }
    Element* actuel = liste->premier;
    while (actuel != NULL && actuel->note->idEleve!=idEleve)
    {
        actuel = actuel->suivant;
    }

    if (actuel!=NULL)
        return actuel->note;
    else
        return NULL;


}

void supprimerNoteListe(Liste* liste, int idEleve)
{
Element  *tmp;
Element  *previous;

if (liste == NULL) // si la liste est NULL on s'arrete tout de suite
  return ;

previous = liste->premier;
if (previous->note->idEleve==idEleve) // Verifie la tete de liste, cas particulier
{
  liste->premier = previous->suivant;
  freeElement(previous);
  return ;
}
tmp = previous->suivant; // le cas n est gere on se place donc sur le cas n+1
while(tmp != NULL) // On Mouline est on supprime si on trouve l'element
{
  if (tmp->note->idEleve==idEleve)
  {
    previous->suivant = tmp->suivant;
    freeElement(tmp);
    return ;
  }
  previous = tmp; // pour ce souvenir dans la prochaine iteration du precedent
  tmp = tmp->suivant;
}

}


void afficherNoteListe(Liste* liste)
{

    Element* actuel = liste->premier;
    while (actuel != NULL)
    {
        printNote(actuel->note);
        printf("\n");
        actuel = actuel->suivant;
    }



}


void supprimerListe(Liste* liste)
{
Element* tmp;
Element* suivant;

if (liste == NULL) // si la liste est NULL on s'arrete tout de suite
  return ;


tmp = liste->premier; // le cas n est gere on se place donc sur le cas n+1
while(tmp != NULL) // On Mouline est on supprime si on trouve l'element
{
    suivant = tmp->suivant;
    freeElement(tmp);
    tmp = suivant;

  }

  free(liste);

}
