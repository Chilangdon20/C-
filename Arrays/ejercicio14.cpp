#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int matrix1[3][3] = {1,2,3,4,5,6,7,8,9},matrix2[3][3] = {2,4,6,8,10,12,14,16,18},suma[3][3];
	
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			suma[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	
	
	for(int i = 0;i<3;i++){
		for( int j = 0;j<3;j++){
			
			cout<<suma[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}