#include<iostream>


using namespace std;

int main(){
	
	int n, x = 0,y = 1,c = 1;
	cout<<"Ingresa n"<<endl;
	cin>>n;
	for(int i = 1;i<=n;i++){
		
		c = x + y;
		cout<<c<<" ";
		x = y;
		y = c;
		
		
		
	}
	
	
	return 0;
	
	
}