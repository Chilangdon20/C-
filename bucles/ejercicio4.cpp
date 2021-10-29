#include<iostream>

using namespace std;

int main(){
	
	float temp,mayor = 0,menor = 999;
	float sumaTotal = 0,media=0;
	
	
	for(int i =0;i<24;i+=4){
		
		cout<<"digite tempreatura: "<<i<<"; ";
		cin>>temp;
		
		sumaTotal += temp;
		
		if(temp>mayor){
			mayor = temp;
			
		}
		
		if(temp<menor){
			menor = temp;
		}
		
	}
	
	media = sumaTotal/6;
	
	cout<<"\nLa temperatura promedio es: "<<media<<endl;
	cout<<"La temperatura maxima es: "<<mayor<<endl;
	cout<<"La temperatura mas baja es: "<<menor<<endl;
	return 0;
}