#include<iostream>
using namespace std;
int main(){
	int k , n , w;
	
	cin>>k>>n>>w; 
	
	int borrow = 0;
	
	for(int i = 1 ; i <= w ; i++){
		
		if(n == 0){
			borrow = borrow + (k*i); 
		}
		
		else if( (k*i) > n ){
			borrow =  borrow + ((k*i) - n);
			n = 0;
		}
		
		else if( (k*i) < n){
			n = n - (k*i);
		}
		
	}
	
	cout<<borrow;
	
	
	return 0; 
}