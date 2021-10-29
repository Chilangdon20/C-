
#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;



int main(){
	
	// pasar una palabra a minuscula strlwr()
	char w[20];
	
	cout<<"Input upper word: "<<endl;
	cin.getline(w,20,'\n');
	
	
	// comprobamos que la primera letra del nombre comience con A
	if(strncmp(w,"A",1)==0){
		strlwr(w);
		cout<<w<<endl;
	}else{
		cout<<"El nombre no comienza con la letra A";
	}
		
	getch();
	return 0;
}