#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n , l;
	cin>>n>>l; 
	
	int arr[n]; 
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = 0 ; j < n - i - 1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	double max = 0.0; 
	double check;
	
	for(int i = 0 ; i < n-1 ; i++){
		check = (arr[i+1] - arr[i])/2.0; 
		
		if(max < check){
			max = check; 
	}
}
	
	
  if((arr[0] - 0.0) > max){
  	max = arr[0] - 0;
  }
  if((l - arr[n-1]) > max){
  	max = l-arr[n-1];
  }
  
  cout << fixed << setprecision(10) << max << endl;

	return 0;
}