#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int v[5] = {1,2,3,4,10},suma = 0,mayor = 0;
	
	for(int i = 0;i<5;i++){
		
		suma += v[i];
		
		if(v[i]> mayor){
			
			mayor = v[i];
			
		}
		
		
	}
	cout<<mayor<<endl;
	getch();
	return 0;
}