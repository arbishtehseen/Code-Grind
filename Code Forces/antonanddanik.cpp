#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
     int n; 
	cin>>n; 
	
	string s; 
	int anton = 0;
	int danik = 0;
	
	cin>>s; 
	
	for(int i = 0 ; i < s.size() ;i++){
		if(s[i] == 'A'){
			anton++;
		}
		else if (s[i] == 'D'){
			danik++;
		}
	}
	
	if(anton > danik){
		cout<<"Anton"<<endl;
	}
	else if(danik > anton){
		cout<<"Danik"<<endl;
	}
	else{
		cout<<"friendship"<<endl;
	}
	
	
	return 0;
}