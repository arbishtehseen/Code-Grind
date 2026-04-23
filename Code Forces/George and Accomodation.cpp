#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int p , q;
	int total_rooms = 0; 
	
	for(int i = 0 ; i < n ; i++){
		cin>>p>>q;
		
		if( (q-p) >= 2 ){
			total_rooms++;
		}
	}
	
	cout<<total_rooms;
	
	
	return 0; 
}