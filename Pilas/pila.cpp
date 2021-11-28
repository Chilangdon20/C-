/*
INSERTAR ELEMENTOS:

1. Crear el espacio en memoria

2. Cargar el valor dentro del nodo

3. Cargar el puntero pila dentro del nodo

4. Asignar el nuevo nodo a la pila

ELIMINAR ELEMENTOS DE UNA pila
1. Crear una variable aux de tipo Nodo
2. Igualar n a aux->dato
3. Pasar pila al siguiente nodo
4. eliminar aux

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
  int dato;
  Nodo *siguiente;

};

void AgregarPila(Nodo *&,int);
void EliminarElemento(Nodo*&,int&);
int main(){
  int n1;
  Nodo *pila = NULL;
  cout<<"input one number:";
  cin>>n1;
  cout<<"Inpute the second number: ";
  cin>>n1;
  AgregarPila(pila,n1);
  AgregarPila(pila,n1);
  cout<<"Taking out Elements : ";
  // no sea final de la pila
  while(pila != NULL){
      EliminarElemento(pila,n1);
      if(pila != NULL){
        cout<<n1<<" , ";

      }
      else{
        cout<<n1<<".";
      }
  }
  getch();
  return 0;
}


void AgregarPila(Nodo *&pila,int n){
  // crear espacio en memoria
  Nodo *new_nodo = new Nodo();
  // rellenar dato
  new_nodo->dato = n;
  //rellenar puntero
  new_nodo->siguiente=pila;
  // asignar nuevo nodo a la pila
  pila = new_nodo;

  cout<<"Element "<<n<<"add sucesfully."<<endl;
}

void EliminarElemento(Nodo *&pila,int &n){
  Nodo *aux = pila;
  n = aux->dato;
  pila = aux -> siguiente;
  delete aux;
}
