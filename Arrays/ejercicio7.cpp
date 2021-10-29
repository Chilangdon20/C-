#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	char letras[] = {'a','b','c'};
	char letras2[] = {'d','f','g'};
	char total[6];
	
	for(int i = 0;i<3;i++){
		
		total[i] = letras[i];
	}
	
	for(int i = 3;i<6;i++){
		total[i] = letras2[i-3];
	}
	for(int i = 0;i<6;i++){
		cout<<total[i]<<endl;
	}
	getch();
	return 0;
}