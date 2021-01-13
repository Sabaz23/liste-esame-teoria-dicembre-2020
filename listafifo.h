#ifndef stack_h
#define stack_h
#include <string>

struct cell{
	std::string codiceF;
	cell * next;
};

struct queue{
	cell *testa;
	cell *coda;
};

typedef cell * cittadino;

//Specificare i tipi necessari

void create_empty(queue&);
bool is_empty(queue&);
void enqueue(queue&, std::string);
void dequeue(queue&);
std::string front(queue&);
std::string back(queue&);

void inserisci(queue&, std::string);
std::string prossimo(queue&);
void stampa(queue&);
void elimina(queue&);

#endif
