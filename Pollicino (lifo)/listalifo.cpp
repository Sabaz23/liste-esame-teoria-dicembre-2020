#include <iostream>
#include "listalifo.h"
#include <string>

void create_empty_stack(pollicino& p){
	p = nullptr;
}

bool is_empty_stack(const pollicino& p){
	return p == nullptr;
}

void push(pollicino& p, char x)
{
	cell *aux = new cell;
	aux->direzione = x;
	aux->next = p;
	p=aux;
}

void pop(pollicino& p)
{
    if(is_empty_stack(p))
    {
        std::string st= "Pop: empty stack";
        throw st;
    }
    pollicino tmp = p; //Se non c'� temp = MEMORY LEAK
    p = p->next;
    delete tmp;
}

char top(const pollicino& p)
{
    if(is_empty_stack(p))
    {
        std::string st = "Top: empty stack";
        throw st;
    }
    return(p->direzione);
}

void FaiUnPasso(pollicino& p,char x)
{
	push(p,x);
}

void FaiUnPassoIndietro(pollicino& p)
{
	pop(p);
}

void stampa(pollicino& p)
{
	cell * aux = p;
	while(p!=nullptr)
	{
		std::cout << p->direzione << std::endl;
		p = p->next;
	}
	p=aux;
}

char direzione(pollicino& p)
{
	return p->direzione;
}


















