#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < n- i - 1; j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j]; 
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	int mysum = arr[0];
	int twinsum = arr[n-1]; 
	int iterations = 1;
	int i=0;
	
	while(!(mysum > twinsum)){
		mysum+=arr[i+1];
		iterations++;
	}
	cout<<iterations<<endl;
	return 0;
}