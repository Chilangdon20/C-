#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main(){
	
	
	char word[20];
	char w2[20];
	cout<<"Input word: "<<endl;
	cin.getline(word,20,'\n');
	
	
	strrev(word);
	
	strcpy(word,w2);
	
	if(strcmp(word,w2)!=0){
		cout<<"La palabra es polindroma";
	}else{
		cout<<"La palabra no es polindroma";
	}
	
	getch();
	return 0;
}