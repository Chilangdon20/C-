#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	
	
	int fil,col,matrix[10][10],aleatorio,matrix2[10][10];
	srand(time(NULL));
	
	
	cout<<"Filas: "<<endl;cin>>fil;
	cout<<"Col: "<<endl;cin>>col;
	
	for(int i =0;i<fil;i++){
		for(int j =0;j<col;j++){
			
			aleatorio = 1+rand()%(10);
			matrix[i][j] = aleatorio;
			
		}
	}
	
	for(int i = 0;i<fil;i++){
		
		for(int j = 0;j<col;j++){
			
			matrix2[i][j] = matrix[i][j];
		}
	
	}
	
	for(int i = 0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<matrix2[i][j]<<" ";
		}
		cout<<"\n ";
	}
	
	
	getch();
	return 0;
}