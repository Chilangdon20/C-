/*

new: reserva el numero de bytes solicitado por la declaracion
delete: libera un bloque de bytes reservado con anterioridada

*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarDatos();
int numCalif,*totCalif;

int main(){
  pedirDatos();
  mostrarDatos();
  delete[] totCalif;
  getch();
  return 0;
}

void pedirDatos(){
  cout<<"Input the number of elements: ";
  cin>>numCalif;
  // creamos el array con la cantidad exacta a utilizat
  totCalif = new int[numCalif];
  for(int i =0;i<numCalif;i++){
    cout<<"["<<i<<"]";
    cin>>totCalif[i];
  }
}
void mostrarDatos(){
  cout<<"The ratings obtain are: "<<endl;
  for(int i = 0;i<numCalif;i++){
    cout<<totCalif[i]<<endl;
  }
}
