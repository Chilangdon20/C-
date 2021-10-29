#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	
	
	char w[20],w2[20];
	
	cout<<"Input: "<<endl;
	cin.getline(w,20,'\n');
	
	
	cout<<"Input word 2: "<<endl;
	cin.getline(w2,20,'\n');
	
	
	strupr(w);
	strupr(w2);
	if(strcmp(w,w2) == 0){
		
		cout<<"Las palabras son iguales";
		
	}else{
		
		cout<<"Las palabras no son iguales";
	}
	getch();
	return 0;
}