#include<iostream>
using namespace std;

int main(){
	string n; 
	
	cin>>n;
	bool found = true;
	
	for(int i = 0 ; i < n.length() ; i++){
		if(n[i] != '4' && n[i] != '7'){
			found = false;
		}
	}
	
	if(found){
		cout<<"YES";
	}
	else{
		
	int num = stoi(n);
	
	if(num % 4 == 0){
		cout<<"YES";
	}
	else if( num % 7 == 0)	{
		cout<<"YES";
	}
	else if( num % 47 == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}	
		
		
	}
	
	return 0;
}