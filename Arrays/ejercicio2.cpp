#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int v[] = {2,5,6,7};
	
	int mult = 1 ; // inicializamos en1  para QUE MULTIPLIQUE POR 1 EN LIUGAR DE 0
	
	for(int i = 0;i<4;i++){
		
		mult *= v[i];
		
	}
	
	
	cout<<mult<<endl;
	getch();
	return 0;
}