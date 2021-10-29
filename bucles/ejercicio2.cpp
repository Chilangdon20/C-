#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num,cont=0;
	
	do{
		cout<<"ingresa numero";cin>>num;
		if(num>0){
			cont++;
		}		
	}while(num != 0);
	
	cout<<"numero valores mayores a 0 es: "<<cont<<endl;
	

	

	
	
	return 0;
	
	
	
}