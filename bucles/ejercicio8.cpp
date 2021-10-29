#include<iostream>


using namespace std;


int main(){
	
	int n, suma=0;
	
	cout<<"Ingresa el numero de n"<<endl;
	cin>>n;
	
	for(int i =1;i<=2*n-1;i+=2){
		suma+=i;
	}
	
	
	cout<<"suma"<<suma<<endl;
	
	return 0;
	
	
}