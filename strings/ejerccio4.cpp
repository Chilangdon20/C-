#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char w1[10],w2[10];
	
	cout<<"w1: "<<endl;cin.getline(w1,10,'\n');
	cout<<"w2: "<<endl;cin.getline(w2,10,'\n');
	
	if(strcmp(w1,w2)==0){cout<<"string are equal";}
	if(strcmp(w1,w2)>0){cout<<"string w1 are more biggest";}
	if(strcmp(w2,w1)>=0){cout<<"string  w2 are more biggest";}
	getch();
	return 0;
}