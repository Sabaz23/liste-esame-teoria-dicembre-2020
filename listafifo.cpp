#include <iostream>
#include "listafifo.h"
#include <string>

void create_empty(queue& q){
	q.testa = nullptr;
	q.coda = nullptr;
}

bool is_empty(queue& q){
	return q.testa == nullptr; //anche q.coda, è indipendente per come implemento
}

void enqueue(queue& q, std::string x)
{
	cell *aux = new cell;
	aux->codiceF = x;
	aux->next = nullptr;
	if(is_empty(q)) //Se la lista è vuota entrambi diventano aux (il nuovo elemento)
	{
		q.testa = aux;
		q.coda = aux;
	}
	else //Altrimenti Inserisco in fondo
	{
		q.coda->next = aux;
		q.coda = aux;
	}
}

void dequeue(queue &q){
	if(is_empty(q)){
		std::string st="errore empty queue";
		throw st;
		}
	cell * temp = q.testa;
	q.testa = q.testa->next;
	delete temp;
	if(q.testa == nullptr) q.coda = nullptr; //non può essere nullptr solo uno dei due
}

std::string front(queue& q)
{
	if(is_empty(q)){
		std::string st="errore lista vuota";
		throw st;
	}
	return q.testa->codiceF;
}

std::string back(queue& q)
{
	if(is_empty(q)){
		std::string st="errore lista vuota";
		throw st;
	}
	return q.coda->codiceF;
}

void inserisci(queue& q, std::string x)
{
	enqueue(q,x);
}

std::string prossimo(queue& q)
{
	return front(q);
}

void stampa(queue& q)
{
	cell * aux = q.testa;
	while(q.testa!=nullptr)
	{
		std::cout << q.testa->codiceF << std::endl;
		q.testa = q.testa->next;
	}
	q.testa=aux;
}

void elimina(queue& q)
{
	dequeue(q);
}


















