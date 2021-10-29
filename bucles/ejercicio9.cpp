#include<iostream>

using namespace std;

int main(){
	
	int factorial = 1, n,sumaFactorial=0;
	
	cout<<"Ingresa el valor de n: "<<endl;
	cin>>n;
	
	for(int i = 1;i<=n;i++){
		factorial *=i;
		sumaFactorial+=factorial;
	}
	
	
	
	
	cout<<sumaFactorial;
	
	return 0;
	
}