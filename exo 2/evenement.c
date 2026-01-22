
#include <stdio.h>
#include <stdlib.h>
#include "evenement.h"
#include "date.h"

Evenement* newEvenement(Date dateev, char* valeurev )
{
Evenement* n = (Evenement*) malloc(sizeof(Evenement));
if (n == NULL )   exit(EXIT_FAILURE);

n->dateEvenement = dateev;
n->valeurEvenement = valeurev;

return n;
}

void printEvenement(Evenement* evenement)
{
AfficheDate(evenement->dateEvenement);
printf("Valeur de levenement : %s\n\n", evenement->valeurEvenement);
}
