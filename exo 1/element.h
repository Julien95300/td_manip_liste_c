#ifndef element_H_
#define element_H_

#include "note.h"


typedef struct Element Element;

struct Element
{
    Note* note;
    Element* suivant;
} ;

void freeElement(Element*);


#endif

