#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	
    if(x <= 0){
    	return 0;
	}
	else{
		int count= 0;
		//12
		while(x != 0){
			if(x >= 5){
				x-=5;
				count++;
			}
			else if(x >= 4){
				x-=4;
				count++;
			}
			else if(x >= 3){
				x-=3;
				count++;
			}
			else if(x >= 2){
				x-=2;
				count++;
			}
			else if(x >= 1){
				x--;
				count++;
			}
		}
		cout<<count;
	}
	
	return 0;
}