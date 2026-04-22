#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	string target = "hello"; 
	int count = 0;
	bool found = false;
	int f = 0;
	
	for(int i = 0 ; i < target.length() ; i++){
		
	  for(int j = count ; j < s.length() ; j++){
	  	
		count++;
		
	  	if(target[i] == s[j]){
	  		f++; 
	  		break;
		  }
	  	
	  }
		
	}
	
	if(f == 5){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}