#include <stdio.h>
#include <stdlib.h>

#include "note.h"



Note* newNote(int ideleve, float valeur)
{
Note* n = (Note*) malloc(sizeof(Note));
if (n == NULL )   exit(EXIT_FAILURE);

n->idEleve = ideleve;
n->valeurNote = valeur;

return n;
}


void printNote(Note* note)
{
printf("ID eleve : %d \n", note->idEleve);
printf("Valeur de la note : %.2f", note->valeurNote);
}

void freeNote(Note* note)
{
free(note);
}

