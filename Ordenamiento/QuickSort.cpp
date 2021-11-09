/*
QUICK SORT
PASOS

1. Seleccionar el elemento central de a[] como pivote

2. Dvidiri los restantes elementos e particiones izq y derecha, de modo que ningunn
elemenmtno de la izquierda tenga una clave mayor que el pivote y que ningun elementosa la derechaa
tenga una clave mas pequea que la del pivote

3. Ordenar la particion izquierda utilizando quickSort recursivametne

4. Ordenar la particion derecha utilizando quicksort recursivmente

 1. [8,3,6,4,2,5,7,1]
 2. central = (primero + ultimo)/2
 3. central = 3
 4. pivote = a[3] = 4


*/

#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(float &x,float &y){
  float aux;
  aux = x;
  x = y;
  y = aux;
}

void quickSort(float a[],int primero,int ultimo){
  int i,j,central;
  float pivote;
  // posiscion central del array
  central = (primero+ultimo)/2;
  pivote = a[central];
  i = primero;
  j = ultimo;
  do{
    while(a[i]<pivote)i++;
    while(a[j]>pivote)j--;

    if(i<=j){
      intercambio(a[i],a[j]);
      i++;
      j--;
    }
  }while(i<=j);
  if(primero<j){
    quickSort(a,primero,j);
  }// ord sublista izquierda
  if(i<ultimo){
    quickSort(a,i,ultimo);
  }// ord sublista derecha
}

int main(){
  float array[] = {4,7,1,8,2,10,5,9,3};
  quickSort(array,0,8);
  for(int i = 0;i<9;i++){cout<<array[i]<<"|";}
  getch();
  return 0;
}
