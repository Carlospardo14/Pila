#include "Nodo.h"

class Pila
{
public:
	int Dato;
	Nodo *Sup,*Inf;

	Pila();
	Pila(int Dato);

	bool IsVacio();
	void Push(int Dato);		
	int Pop();			
};