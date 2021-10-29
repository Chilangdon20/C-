#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	
	int matrix[2][2] = {1,2,3,4},matrix2[2][2]; 
	
	for(int i = 0;i<2;i++){
		for(int j = 0;j<2;j++){
			
			matrix2[i][j] = matrix[i][j];
		}
	}
	
	for(int i = 0;i<2;i++){
		for(int j = 0;j<2;j++){
			cout<<matrix2[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
	
}