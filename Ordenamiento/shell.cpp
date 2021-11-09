#include<iostream>
#include<conio.h>

/*
PASOS:

1. Dividir la lsita orginal en n/2 grupos de dos

2. Clasificar cada grupo por separado, comparando las paraejas de elementos y si no estan ordenados se intercambian.

3. Dividir la lista en la mitad de grupos (n/4)

*/
using namespace std;

void intercambio(float &x, float &y){
  float aux;
  aux = x;
  x = y;
  y = aux;
}
void ordShell(float a[],int n){
  int salto,i,j,k;
  salto = n/2;

  // RESTRICCION PARA QUE EL ORDENAMIENTO TERMINE
  while(salto>0){
    // podemos continuar
    // posicino del array
    for(i=salto;i<n;i++){
      // inicia en posicion cero del array
      j = i -salto;
      // eliminar recorridos innecesarios
      while(j>=0){
        // indice para saber el elemento de la derecha
        k = j + salto;
        // condicional base
        if(a[j]<=a[k]){
          j = -1;
        }
        else{
          intercambio(a[j],a[k]);
          j -=  salto;
        }
      }
    }
    salto = salto/2;
  }
}

int main(){
  float array[] ={4,6,1,9,5,10,2,11,19,7};
  ordShell(array,10);
  cout<<"Array ordenado: "<<endl;
  for(int i = 0;i<10;i++){
    cout<<array[i]<<"|";
  }
  getch();
  return 0;
}
