#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	
	string s1 , s2;
	cin>>s1 ;
	cin>>s2;
	int equal;
	
	
	for(int i = 0 ; i < s1.size() ; i++){
		
		if( s1[i] >= 'A' && s1[i]<= 'Z'){
			s1[i]+=32;
		}
		
		if( s2[i] >= 'A' && s2[i] <= 'Z'){
			s2[i]+=32; 
		}
		
	}
	
	if(s1 > s2){
		equal = 1; 
	}
	else if(s1 < s2){
		equal = -1;
	}
	else{
		equal=0;
	}
	
	cout<<equal;
	
	return 0;
}