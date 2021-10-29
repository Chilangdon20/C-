#include<iostream>

using namespace std;

int main(){
	
	
	int n,resultado=0;
	
	cout<<"Ingresa la cantidad de tu sumatoria: "<<endl;
	cin>>n;
	
	
	for(int i = 1; i<=n;i++){
		resultado += i;
	}
	
	
	cout<<"La suma es: "<<resultado<<endl;
	return 0;
	
	
}