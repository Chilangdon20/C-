#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;



int main(){
	
	char f[30];
	
	int v_a=0,v_e=0,v_i=0,v_o=0,v_u=0;
	
	cout<<"Frase: ";
	cin.getline(f,30,'\n');
	
	for(int i = 0;i<30;i++){
		switch(f[i]){
			case 'a': v_a++ ; break;
			case 'e': v_e++ ; break;
			case 'i': v_i++ ; break;
			case 'o': v_o++ ; break;
			case 'u': v_u++ ; break;
		}
	}
	
	cout<<v_a<<endl;
	cout<<v_e<<endl;
	cout<<v_i<<endl;
	cout<<v_o<<endl;
	cout<<v_u<<endl;
	
	getch();
	return 0;
}