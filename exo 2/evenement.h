
#ifndef evenement_H_
#define evenement_H_

#include "date.h"

typedef struct Evenement Evenement;
struct Evenement
{
    Date dateEvenement;
    char* valeurEvenement;
    };

Evenement* newEvenement(Date, char*);

void printEvenement(Evenement*);

#endif
