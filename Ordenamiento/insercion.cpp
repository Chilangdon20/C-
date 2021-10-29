#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int a[] = {4,6,8,1,3,6,4,9};
	
	int i,al = 0,aux;
	
	for(i = 0;i<8;i++){
		// almacenador es el indice de nuestro array
		al = i;
		// aux guarda cada numero de mi array
		aux = a[i];
		// validacion de que la posicion 0 sea mayor que 0 
		// validacion de que el numero en que estamos posicionados actualmente sea mayor que nuestro auxiliar
		while( (al > 0) && (a[al - 1]> aux) ){
			
			a[al] = a[al-1];
			al--;
		} 
			
		a[al] = aux;
		
	}	
	
	for(i = 0;i<8;i++){
		cout<<a[i];
	}
	getch();
	return 0;
}