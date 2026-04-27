#include<iostream>
using namespace std;

int main(){
	int n; 
	
	cin>>n; 
	
	int p; 
	double sum = 0;
	float average = 0.0;
	
	for(int i = 0 ; i < n ; i++){
		cin>>p; 
		sum+=p; 
	}
	
	average = sum/n; 
	cout<<average<<endl;
	
	return 0; 
}