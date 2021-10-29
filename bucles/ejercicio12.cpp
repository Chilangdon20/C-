#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	float ex1,ex2,ex3;
	int excelencia = 0,promedio = 0,ultimoExamen = 0;
	for(int i = 1;i<=5;i++){
		cout<<i<<" Ingresa la calificaion del examen 1:"<<endl;cin>>ex1;
		cout<<i<<" Ingresa la calificaion del examen 2:"<<endl;cin>>ex2;
		cout<<i<<" Ingresa la calificaion del examen 3:"<<endl;cin>>ex3;
		
		if((ex1>10.5)&&(ex2>10.5)&&(ex3>10.5)){
			excelencia ++;
		}
		if((ex1>10.5)||(ex2>10.5)||(ex3>10.5)){
			promedio ++;
			
		}
		if ((ex1<10.5)&&(ex2<10.5)&&(ex3>10.5)){
			ultimoExamen ++;
		}		
		
	}
	
	
	cout<<excelencia<<endl;
	cout<<promedio<<endl;
	cout<<ultimoExamen<<endl;
	return 0;
}