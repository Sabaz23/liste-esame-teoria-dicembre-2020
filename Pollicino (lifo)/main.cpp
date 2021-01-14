#include <string>
#include <iostream>
#include "listalifo.h"

using namespace std;

int main()
{
	pollicino lista;
	string scelta;
	create_empty_stack(lista);
	char dir;
	while(true)
	{
		cout << "Seleziona l'operazione" << endl;
		cout << "(passo, passoindietro, stampa, direzione, exit)" << endl;
		cin >> scelta;
		if(scelta =="passo")
		{
			cout << "Inserisci il passo da inserire" << endl;
			cin >> dir;
			FaiUnPasso(lista, dir);
			cout << "Inserito!" << endl;
		}
		else if(scelta == "passoindietro")
		{
			FaiUnPassoIndietro(lista);
			cout << "Sei tornato indietro!" << endl;
		}
		else if(scelta == "stampa")
		{
			stampa(lista);
		}
		else if(scelta == "direzione")
		{
			
			cout << "L'ultima direzione inserita e' " << direzione(lista) << endl;
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
