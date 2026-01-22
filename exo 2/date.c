#include <stdio.h>
#include <stdlib.h>
#include "date.h"



void AfficheDate(Date date)
{
printf("La date est %d %d %d\n", date.jour, date.mois, date.annee);
}



Date LireDate() {
Date temp;
//printf("Enter la date : ");
scanf("%d %d %d", &temp.jour, &temp.mois, &temp.annee);
return temp;
}

int compare(Date d1, Date d2)
{
  if (d1.annee > d2.annee) return 1 ;
  if (d1.annee < d2.annee) return -1;
  if (d1.mois > d2.mois) return 1;
  if (d1.mois < d2.mois) return -1;
  if (d1.jour > d2.jour) return 1;
  if (d1.jour < d2.jour) return -1;

return 0;

}

