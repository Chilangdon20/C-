#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	
	int valores, suma =0;
	
	do{
		
		cout<<"Ingres los valores a sumar: "<<endl;
		cin>>valores;
		
		if (valores>0){
			
			suma +=valores;
		}
	}while(((valores<20)||(valores>30))&&(valores!=0));
	
	cout<<suma;
	getch();
	return 0;
}