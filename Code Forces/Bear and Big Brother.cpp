#include<iostream>
using namespace std;
int main(){
	int a , b; 
	cin>>a>>b; 
	int years = 0;
	
	// a --> limark , b --> bob
	
	while( a <= b ){
		a*=3;
		b*=2;
		years++;
	}
	
	cout<<years;
	
	
	return 0; 
}