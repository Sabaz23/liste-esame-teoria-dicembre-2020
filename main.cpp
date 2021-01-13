#include <string>
#include <iostream>
#include "listafifo.h"

using namespace std;

int main()
{
	queue lista;
	string scelta;
	create_empty(lista);
	string codice;
	while(true)
	{
		cout << "Seleziona l'operazione" << endl;
		cout << "(inserisci, prossimo, stampa, elimina, exit)" << endl;
		cin >> scelta;
		if(scelta =="inserisci")
		{
			cout << "Inserisci il codicefiscale da inserire" << endl;
			cin >> codice;
			inserisci(lista, codice);
			cout << "Inserito!" << endl;
		}
		else if(scelta == "prossimo")
		{
			cout << "Il prossimo cittadino da vaccinare e' " << prossimo(lista) << endl;
		}
		else if(scelta == "stampa")
		{
			stampa(lista);
		}
		else if(scelta == "elimina")
		{
			elimina(lista);
			cout << "Eliminato il cittadino vaccinato!" << endl;
		}
		else if(scelta == "exit")
		{
			break;
		}
		else
			cout << "Comando sconosciuto" << endl;
	}
	cout << "Arrivederci e grazie" << endl;


}
