#include<iostream>
#include<stdlib.h>
#include<time.h>
#Include<conio.h>

using namespace std;

int mai(){
	
	
	int array[15];
	int n = 1024,m=20,anterior, b[100],R;
	
	for(int i = 0;i<15;i++){
		
		array[i] = rand() % (n-m+1) +m;
		
		if(anterior = array[i]){
			
			array[i] = 0;
		
		anterior = array[i];
		
	}
	}
	
	for(int i =0;i<15;i++){
		while(array[i]>=2){
			array[i] = decabin(array[i],&R);
			B[i] = R;
		}
		
	}
	
	
	getch();
	reutrn 0;
}