#include<iostream>
using namespace std;

int main(){
	int n ; 
	cin>>n; 
	int p;
	
	int result[n+1]; 
	result[0] = 0;
	
	for(int i = 1 ; i <= n ; i++){
		cin>>p; 
		
		result[p] = i ; 
	}
	
	for(int i = 1 ; i <= n ; i++){
		cout<<result[i]<<" ";
	}
	
	
	
	
	return 0; 
}