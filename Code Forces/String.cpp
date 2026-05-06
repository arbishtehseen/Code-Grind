#include<iostream>
#include<string>
using namespace std;
int main(){
	string input;
	cin>>input; 
	string neww;
	
	
	// deleting vowels
	for(int i = 0 ; i < input.size() ; i++){
		char c = input[i]; 
		
		if(c >= 'A' && c <= 'Z'){
			c+=32;
		}
		
		if(c != 'a' && c != 'e' && c != 'i' && c != 'o' &&
		   c != 'u' && c != 'y'){
		   	neww+='.';
		   	neww+=c;
		   }
       }
       cout<<neww<<endl;
  
	return 0;
}