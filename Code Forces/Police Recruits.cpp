#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size]; 
	
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];
	}
	 
	int crimes_untreated = 0;
	int policeforce = 0;
	
	for(int i = 0 ; i < size ; i++){
		
		if(arr[i] >= 1 && arr[i] <= 10){
			policeforce+=arr[i];
		}
		else if(arr[i] == -1){
			if(!(policeforce > 0)){
				crimes_untreated++;
			}
			else{
				policeforce--;
			}
		}	
	}
	 cout<<crimes_untreated;
	
	
	return 0;
}