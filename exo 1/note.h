#ifndef note_H_
#define note_H_



typedef struct Note Note;
struct Note
{
    int idEleve;
    float valeurNote;
};


Note* newNote(int, float);

void printNote(Note*);

void freeNote(Note*);


#endif // note_H_

