#include<iostream>
using namespace std;
int main(){
	int a , b , c; 
	cin>>a>>b>>c;
	int max = 0; 
	
	int sum = a+b*c; 
	if(sum > max){
		max = sum;
	}
	
	sum = a*(b+c); 
	if(sum > max){
		max = sum;
	}
	
	sum = a*b*c; 
	if(sum > max){
		max = sum;
	}
	
	sum = (a+b)*c;
	if(sum > max){
		max = sum;
	}
	
    cout<<max;

	return 0; 
}