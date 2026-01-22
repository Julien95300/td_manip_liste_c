#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include "note.h"

void main()
{
    Liste* p = newListeNote();

    float noteVal;
    int id;


    printf("Quel est l'id de l eleve ? tapez 0 si c est fini !\n");
    scanf("%d", &id);



while(id!= 0)
{
    printf("Quelle est la valeur de la note ?\n");
    scanf("%f", &noteVal);

    Note* noteNv = newNote(id, noteVal);

    ajouterNoteListe(p, noteNv);

    printf("Quel est l'id de l eleve ? tapez 0 si c est fini !\n");
    scanf("%d", &id);

}

    afficherNoteListe(p);

    printf("\nQuelle note de quel eleve voulez vous afficher ?\n");
    scanf("%d", &id);

//    Note * n = rechercheNoteListe(p, id);
    printNote(rechercheNoteListe(p,id));

    printf("\nQuelle note de quel eleve voulez vous supprimer ?\n");
    scanf("%d", &id);
    supprimerNoteListe(p, id);


    afficherNoteListe(p);


supprimerListe(p);

}
