#include<iostream>
using namespace std;
int main(){
	int y; 
	bool found = false;
	
    cin>>y;

	while(!found){
		
	y++; 
    int temp = y; 
    
    int a = temp%10; // 8
    temp/=10;
    int b = temp%10;
    temp/=10;
    int c = temp%10; 
    temp/=10;
    int d = temp%10; 
    temp/=10; 
	
	if(a != b && a!= c && a!= d && b!= c && b!= d && c != d){
		found = true; 
		break;
	}		
}
	
	cout<<y;
	
	return 0; 
}