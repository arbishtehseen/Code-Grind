#include<iostream>
#include<string>
using namespace std;

int main(){
	string input; 
	int uppcase = 0; 
	int lowercase = 0; 
	
	cin>>input;
	
	
	for(int i = 0 ; i < input.length() ; i++){
		
		if(input[i] >= 'A' && input[i] <= 'Z'){
			uppcase++;
		}
		else{
			lowercase++;
		}
	}
	
	if(uppcase > lowercase){
		
		for(int i = 0 ; i < input.length() ; i++){
			
			if( ! (input[i] >= 'A' && input[i] <= 'Z')){
				
				input[i]-=32;
				
			}
		}
	}
	
	else if(lowercase > uppcase){
			for(int i = 0 ; i < input.length() ; i++){
			
			if( ! (input[i] >= 'a' && input[i] <= 'z')){
				
				input[i]+=32;
				
			}
		}
		
	}
	else{
		
		for(int i = 0 ; i < input.length() ; i++){
			
			if( ! (input[i] >= 'a' && input[i] <= 'z')){
				
				input[i]+=32;
				
			}
		}	
	}
	
	cout<<input<<endl;
	
	return 0; 
}