#include<iostream>
#include<string>
using namespace std;

int main(){
	string real , reverse;
	
	cin>>real;
	cin>>reverse;
	int len = reverse.length(); 
	bool found = true;
	
	for(int i = 0 ; i < real.length() ; i++){
		
		if(real[i] != reverse[len - i - 1]){
			found = false;
		}
		
	}
	
	if(found){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	
	
	return 0; 
}