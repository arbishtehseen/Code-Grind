#include<iostream>
using namespace std;

int main(){
	int n , h;
	
	cin>>n>>h; 
	
	int total_width = 0;
	int arr[n];
	
	for(int i = 0 ; i < n ; i++){
		
		cin>>arr[i]; 
		
		if(arr[i] <= h){
			total_width++;
		}
		else if(arr[i] > h){
			total_width +=2; 
		}
		
	}
	
	
	cout<<total_width;
	
	
	return 0; 
}