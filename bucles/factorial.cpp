#include<iostream>


using namespace std;

int main(){
	
	int n,factorial=1,suma=0;
	
	cout<<"Ingresa el numero de tu factorial"<<endl;
	cin>>n;
	
	for(int i = 1;i<=n;i++){
		
		factorial *= i;
		suma += factorial;
		
	}
	
	cout<<factorial<<"-"<<suma;
	
	return 0;
	
	
}