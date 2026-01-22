#ifndef date_H_
#define date_H_

typedef struct Date Date;
struct Date
{
  int jour;
  int mois;
  int annee;
};

Date LireDate(void);

void AfficheDate(Date);
int compare(Date, Date);

#endif // date




