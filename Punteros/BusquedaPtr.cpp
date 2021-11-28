#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void Busqeuda(int *,int);
int *elemento, nEle,dato;
int main(){
  pedirDatos();
  Busqeuda(elemento,nEle);
  delete[] elemento;
  getch();
  return 0;
}


void pedirDatos(){

  cout<<"Ingrese el tmanio del array: ";
  cin>>nEle;
  elemento = new int[nEle];

  for(int i = 0;i<nEle;i++){
    cout<<"Ingrese el dato: "<<"["<<i<<"]"<<endl;
    cin>>*(elemento+i);
  }
  cout<<"Ingrese el dato a buscar: ";cin>>dato;
}

void Busqeuda(int *elemento,int nEle){
  int i = 0;
  char bandera = 'F';
  while((bandera =='F') && (i<nEle)){
    if(*(elemento) == dato){
      bandera = 'V';
    }
    i++;
  }
  if(bandera == 'F'){
    cout<<"Dato no encontrado";
  }
  else if(bandera == 'V'){
    cout<<"Dato encontrado, en la posicion: "<<i-1<<endl;
  }
}
