#include<iostream>
#include<string>
using namespace std;

int main(){
	string input; 
	
	cin>>input;
	
	int count = 0;


	for(int i = 0 ; i < input.length() ; i++){
		
    if(input[i] == '4' || input[i] == '7'){
    	count++;
	}
		
	}
		
	
	
	if(count == 4 || count == 7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
	return 0; 
}