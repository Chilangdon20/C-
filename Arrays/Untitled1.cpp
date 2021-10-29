#include<iostream>

using namespace std;
	
int main(){
	
	int n[5] = {1,2,3,4,5};
	int suma;
	for(int i=0;i<5;i++){
	
	// inicia desde 0 y es menor a 5 por que llega hasta 4 e.i n-1
		
		suma += n[i]; // i va cambiando por lo que ponemos i dentro de n
		
	}
	
	cout<<suma<<endl;
	
	
	return 0;
}
