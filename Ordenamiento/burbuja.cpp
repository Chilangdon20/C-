/*

MÉTODO BURBUJA

Su funcionamiento consiste en revisar cada elemento de lista que va a ser ordenada con el siguiente,
intercambiandolos de posición si están en el orden equivocado.

Es necesario revisar varias veces toda la lista que no se necesiten mas intercambios, lo cual significa
que  lista esta ordenada

[4,5,2,1,3] = [4,2,1,3,5] = [2,1,3,4,5] = [1,2,3,4,5]

si numeroActual > numeroSiguiente => cambio



*/

#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	 int arr[] = {4,1,2,3,7,5,8};
	 int aux;

	 for(int i = 0;i<7;i++){
	 	for(int j = 0;j<7;j++){

	 		if(arr[j]>arr[j+1]){


	 			// este auxiliar nos ayuda a almacenar el valor que se recorre
	 			aux = arr[j+1];
	 			// el vector con la posicion a la derecha, recibe el valor con la posiccion orignal
	 			arr[j+1] = arr[j];

	 			// el vector en sus posicion original tomara el valor del auxiliar
	 			arr[j] = aux;

			 }
		 }
	 }

	 cout<<"Ascending: ";
	 for(int i = 0;i<7;i++){
	 	cout<<arr[i];
	 }
	getch();
	return 0;
}
