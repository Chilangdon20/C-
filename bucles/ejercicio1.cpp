#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int num;
	
	do{
	
	cout<<"Ingresa un numero";cin>>num;
	
	
	}while((num<1)||(num>10));
	
	for(int i = 1;i<=20;i++){
		
		cout<<num<<"  * "<<i<<" = "<<num*i<<endl;
	}
	
	
	return 0;
	
	
	
}