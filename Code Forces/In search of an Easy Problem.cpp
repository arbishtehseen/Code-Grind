#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; 
	bool easy = true;
	
	int eh;
	
	for(int i = 0 ; i <  n ; i++){
		cin>>eh;
		if(eh == 1){
			easy = false;
		}
	}
	
	if(easy){
		cout<<"EASY"<<endl;
	}
	else{
		cout<<"HARD"<<endl;
	}
	
	
	return 0;
}