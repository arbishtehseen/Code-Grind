#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n >= 1){
		cout<<"i hate ";
	}
	
	if(n > 1){
	for(int i = 2 ; i <= n ; i++){
		cout<<"that ";
		if(i%2 == 0){
			cout<<"i love ";
		}
		else if(i%2 != 0){
			cout<<"i hate"; 
		}
	}
}
cout<<"it";
	return 0;
}