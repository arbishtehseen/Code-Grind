#include<iostream>
using namespace std;
int main(){
	int s1 , s2 , s3 , s4;
	cin>>s1>>s2>>s3>>s4;
	
	int need = 0; 
	
	if(s1 == s2 || s1 == s3 || s1 == s4){
		need++;
	}
	if(s2 == s3 || s2 == s4){
		need++;
	}
	if(s3 == s4){
		need++;
	}
    cout<<need;
    
	return 0;
}