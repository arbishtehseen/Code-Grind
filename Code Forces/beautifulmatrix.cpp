#include<iostream>
using namespace std;
int main(){
	int arr[5][5];
	int row , col;
	
	for(int i = 0 ; i < 5 ; i++){
		for(int j = 0 ; j < 5 ; j++){
			cin>>arr[i][j];
			
			if(arr[i][j] == 1){
				row = i;
				col = j;
			} 
		}
	}
	
	int attempts= 0;
	
	if(row > 2){
		for(int i = 2 ; i < row ; i++){
			attempts++; 
		}
	}
	else if (row < 2){
		for(int i = row ; i<2 ; i++){
			attempts++;  
		}
	}
	
	if(col > 2){
		for(int i = 2 ; i < col ; i++){
			attempts++; 
		}
	}
	else if (col < 2){
		for(int i = col ; i<2 ; i++){
			attempts++;  
		}
	}
	
	cout<<attempts; 
	
	return 0; 
}