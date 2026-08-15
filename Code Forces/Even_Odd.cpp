#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long k;
	cin>>k;
	
	int odd_count = (n+1)/2;
	
	if(k <= odd_count){
		cout<<2*k-1<<endl;
	}
	else if(k > odd_count){
		cout<<2*(k - odd_count)<<endl;
	}
	
	return 0;
}