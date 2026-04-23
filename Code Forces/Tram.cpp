#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a , b ; 
	int maximum_capacity = 0;
	int existing_passenger = 0; 
	int result; 
	
	for(int i = 0 ; i < n ; i++){
		
		cin>>a>>b;
		
		existing_passenger = existing_passenger - a + b;
		
		if(maximum_capacity < existing_passenger){
			maximum_capacity = existing_passenger;
		}
		
	}
	cout<<maximum_capacity;
	
	
	return 0; 
}