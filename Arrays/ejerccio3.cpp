#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int size,number;
	int matrix[100];
	cout<<"Input the size of the array: "<<endl;
	cin>>size;
	
	for(int i = 0;i<size;i++){
		
		cout<<"Inpute the number: "<<endl;
		cin>>matrix[i];
			
	}
	
	for(int i = 0;i<size;i++){
		
		cout<<i<<" num vector "<<matrix[i]<<endl;
		
	}
	
	getch();
	return 0;
}