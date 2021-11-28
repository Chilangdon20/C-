#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int a[] = {1,2,3,4,5,6};
  int inf,sup,mitad,dato;
  char band = 'F';
  dato = 6;
  inf = 0;
  sup = 6;
  while (inf <= sup) {
    mitad =  (inf+sup)/2;
    if(a[mitad]==dato){
      band = 'V';
      break;
    }
    if(a[mitad] >dato){
      sup = mitad;
      mitad = (inf+sup)/2;
    }
    if(a[mitad]<dato){
      inf = mitad;
      mitad = (inf+sup)/2;
    }
  }
  if(band == 'V'){
    cout<<"Se encontro el dato, en la posicion:"<<mitad<<endl;

  }
  else{
    cout<<"Dato no encontrado"<<endl;
  }

  getch();
  return 0;
}
