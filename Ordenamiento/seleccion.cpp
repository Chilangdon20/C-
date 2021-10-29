#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


int main(){

    /*
    ORDENAMIENTO POR SELECCCION

    1. Buscar el minimo elemento de la lista

    2. Intercambiar con el primer elemento

    3. Buscar el minimo del resto de la lista

    4. intercambiar con el segundo

    5. repetir

    [4,3,1,5,2]
     0 1 2 3 4
     --
     Buscar el minimo elemento

     [1,3,4,5,2]
     buscar el minimo elemento restante
     [1,2,3,5,4]
     [1,2,3,4,5]

    */

	  int a[] = {3,2,1,4,5};
	  int i,j,aux,min;

	  // recorrer array
	  for(i = 0;i<5;i++){
      min = i;
      // recorrer desde el segundo numero despues de i
      for(j = i+1;j<5;j++){
        //si el segundo numero es menor que el valor min
        if(a[j]<a[min]){
          // situar a j como la posicion menor
          min = j;
        }
      }
      aux = a[i];
      a[i] = a[min];
      a[min] = aux;
    }

    for(i = 0;i<5;i++){
      cout<<a[i];
    }


	  getch();
    return 0;
    system("pause");
}
