#include <stdio.h>
#include <stdlib.h>

#include "element.h"
#include "note.h"





void freeElement(Element* elem)
{

freeNote(elem->note);
free(elem);

}
