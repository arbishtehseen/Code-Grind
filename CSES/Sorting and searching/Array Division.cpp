#include<iostream>
using namespace std;
int main(){
	int n , k;
	cin >> n >> k;
	
	int arr[n]; 
	long long low = 0;
	long long high = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i]; 
		high += arr[i]; 
		if(low < arr[i]){
			low = arr[i];
		}
	}
	
	long long ans = high ; 
	
	while( low <= high ){
		long long curr_sum = 0; 
		int workers = 1;
		long long mid = low + (high - low)/2; 
		
		for(int i = 0 ; i < n ; i++){
			if(curr_sum + arr[i] <= mid){
				curr_sum += arr[i];
			} else {
				workers++;
				curr_sum = arr[i]; 
			}
		}
		
		if( workers > k){
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout << low; 
	
	return 0;
}