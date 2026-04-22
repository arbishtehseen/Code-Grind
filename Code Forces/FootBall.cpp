#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;

    
    for(int i = 0 ; i < s.length() ; i++){
    	int count = 1;
    	
    	for(int j = i+1 ; j < s.length() ; j++){
    		
    		if(s[i] == s[j]){
    			count++; 
			}
			else{
				break;
			}
			
		}
		
		if(count >= 7){
		    cout<<"YES";
			return 0; 
		}
		
	}

   cout<<"NO";

	return 0; 
}