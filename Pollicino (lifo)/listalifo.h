#ifndef stack_h
#define stack_h
#include <string>

struct cell{
    char direzione;
    cell* next;
};

typedef cell * pollicino;

//Specificare i tipi necessari


void create_empty_stack(pollicino&);
void push(pollicino&, char);
void pop(pollicino&); //Si può fare anche char pop e restituire l'elemento trovato
char top(const pollicino&); //Sola lettura all'elemento in cima alla pila
bool is_empty_stack(const pollicino&);

void FaiUnPasso(pollicino&,char);
void FaiUnPassoIndietro(pollicino&);
void stampa(pollicino&);
char direzione(pollicino&);

#endif
