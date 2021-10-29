#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	
	int row,col,matrix[10][10];
	
	char band = 'F';
	
	cout<<"row: "<<endl;cin>>row;
	cout<<"Col: "<<endl;cin>>col;
	
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			
			cout<<"Input vale i: "<<endl;cin>>matrix[i][j];
		}
		
	}
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
		
	if(row == col){
		for(int i  = 0;i<row;i++){
			for(int j = 0;j<col;i++){
				if(matrix[i][j] == matrix[j][i]){
					band = 'V';
				}
			}
		}
	}
	
	if(band = 'V'){
		cout<<"The matrix is symmetric"<<endl;
	}
	else{
		cout<<"The matrix is not symmetric"<<endl;
	}
	getch();
	return 0;
}