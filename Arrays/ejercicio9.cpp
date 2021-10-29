#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int filas,columnas,matriz[20][20];
	
	cout<<"filas: "<<endl;cin>>filas;
	cout<<"columnas: "<<endl;cin>>columnas;
	
	for(int i = 0;i<filas;i++){
		for(int j = 0;j<columnas;j++){
		
		cout<<"numero: ["<<i<<" ]["<<j<<"]";cin>>matriz[i][j];
	 }	
	}
	
	
	
	for(int i = 0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		
		cout<<matriz[i][j];
	 }	
	 cout<<"\n";
	}
	
	getch();
	return 0;
}