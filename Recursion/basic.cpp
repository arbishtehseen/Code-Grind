#include<iostream>
using namespace std;

void printnumber( int n ) {
	
	if ( n == 0 )  return;
	cout << n << " ";
	printnumber( n-1 );
}

int main(){
	int n;
	cin >> n;
	printnumber(n);
	
	return 0;
}
