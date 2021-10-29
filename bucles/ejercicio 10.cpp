#include<iostream>
#include<cstdlib>

using namespace std;


int main(){
		
		int n,par,sumaImpar = 0,sumaPar = 0, resultado = 0;
		
		cout<<"Ingresa el valor de n: "<<endl;
		cin>>n;
		
		for(int i = 1;i<=n;i++){
			
			
			if(i%2==0){
				par = i*-1;
				sumaPar += par;
			}
			else{
				sumaImpar += i;
			}
			
			
			
			
		}
		
		resultado = sumaPar + sumaImpar;
			
		cout<<resultado<<endl;
		
		
		return 0;
}