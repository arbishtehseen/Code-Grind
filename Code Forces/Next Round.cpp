#include<iostream>
using namespace std;

int main(){
	
	int n , k;
	
	cin>>n>>k; 
	
	int arr[n];

    for(int i = 0 ; i < n ; i++) {
    	cin>>arr[i]; 
	}
	
	int standard = arr[k];
	int count = 0;
	
	for(int i = 0 ; i < n ; i++){
		
		if(arr[i] >= standard){
			count++;
		}
		
	}
	
	cout<<count<<endl;
	
	return 0; 
}