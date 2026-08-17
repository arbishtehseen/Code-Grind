#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		char letter;
		cin>>letter;
		
		string original = "codeforces"; 
		bool found = false;
		
		for(int i = 0 ; i < original.length() ; i++){
			if(original[i] == letter){
				found = true;
				break;
			}
		}
		if(found){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
	}
	
	return 0;
}