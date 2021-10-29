#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	
	int matrix1[3][3] = {1,2,3,4,5,6,7,8,9}, matrix2[3][3] = {1,3,5,7,9,1,6,8},prod[3][3];
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			
			prod[i][j] = 0;
			for(int k = 0;k<3;k++){
				prod[i][j] = prod[i][j] + matrix1[i][k] * matrix2[k][j];
			}
			
		}
	}
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<prod[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}