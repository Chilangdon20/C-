#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  int a[] = {3,4,2,1,6};
  int i,dato;
  char bandera = 'F';
  dato = 4;
  i = 0;
  while ((bandera=='F') && (i <5)) {
    if(a[i] == dato){
      bandera = 'V';
    }
    i++;
  }
  if( bandera == 'F'){
    cout<<"Dato no encontrado";
  }
  else if( bandera == 'V'){
    cout<<"Dato encontrado en la posicion : "<<i-1<<endl;
  }
  getch();
  return 0;
}
