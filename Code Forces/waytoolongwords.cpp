

#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int lines;
	cin>>lines;
	
	for(int i = 1 ; i <= lines ; i++){
	
	string s; 
	cin>>s; 
	
	if(s.size() > 10 ){
		
		int wordcount = 0; 
		
		for(int i = 1 ; i < s.size()-1 ; i++){
			wordcount++; 
		}
		
		char firstletter = s[0]; 
		char lastletter = s[s.size() -1]; 
		
		cout<<firstletter<<wordcount<<lastletter<<endl;
	}
	else{
		cout<<s<<endl;
	}
}
	
	
	
	
	
	
	
	return 0; 
}