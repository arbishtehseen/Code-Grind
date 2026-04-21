#include<iostream>
#include<string>
using namespace std;
int main(){
	string s; 
	cin>>s; 
	// 3+2+1
	
	
	for(int i = 0 ; i < s.length()  ; i++){
		
		for(int j = i+1 ; j < s.length() ; j++){
			
			if( i%2 == 0 && j%2 == 0 ){
			   if(s[i] > s[j]){
				
				int temp = s[j]; 
				s[j] = s[i];
				s[i] = temp; 
			}
		}
		
				
	}

}
  cout<<s;	
  	
  	
  	
  	
  	
  }
	
	
	
	
