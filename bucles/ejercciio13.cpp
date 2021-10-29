#include<iostream>
#include<time.h>

using namespace std;

int main(){
	
	int valorAleatorio,valorUsuario,c = 0;
	
	srand(time(NULL));
	valorAleatorio = 1+rand()%100;
	do{
		
		cout<<"Ingresa un numero entre [0-100]"<<endl;
		cin>>valorUsuario;
	
		
		if(valorUsuario<valorAleatorio){
			cout<<"Ingresa un numero menor"<<endl;
		}
		if(valorUsuario>valorAleatorio){
			cout<<"Ingresa un numero mayor"<<endl;
		}
		c++;
	}while(valorUsuario != valorAleatorio);
	cout<<valorAleatorio<<endl;
	cout<<c<<endl;
	
	return 0;
	
	
}