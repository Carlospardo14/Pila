#include "Pila.h"

Pila::Pila(){
	this->Sup=NULL;
	this->Inf=NULL;
}

Pila::Pila(int dato){
	Nodo *m= new Nodo(dato);
	this->Sup = m;
	this->Inf = Sup;
}

bool Pila::IsVacio(){
	return (this->Sup == NULL && this->Inf == NULL);
}

void Pila::Push(int dato){
	Nodo *m= new Nodo(dato,this->Sup);
	if (IsVacio())
		this->Inf=m;
	this->Sup=m;

	return ;
}


int Pila::Pop(){	
	int d=this->Sup->Dato;
	if (IsVacio())
	{
		std::cout<<"La lista esta vacía."<<std::endl;
		return d;
	}
	Nodo *aux = this->Sup;
	this->Sup=this->Sup->Sig;

	if (this->Sup == NULL)
		this->Inf=NULL;

	aux->Sig=NULL;

	return d;
}