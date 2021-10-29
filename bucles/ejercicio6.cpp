#include<iostream>
#include<math.h>>

using namespace std;


int main(){
	
	int x,y,resultado =1;
	
		
		if((x>0)||(y>0)){
		cout<<"Ingresa el valro de x: "<<endl;
		cin>>x;
		
		cout<<"\nIngresa el valor de y"<<endl;
		cin>>y;
		
		for(int i = 0;i<=y;i++){
			resultado *= x;
		}
		
		cout<<"El resultado es: "<<resultado;
			
		}
		
		return 0;
	
	
}