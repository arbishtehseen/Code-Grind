#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arrival , dept;
	int max = 1;
	cin >> arrival >> dept; 
	int tempdept = dept;
	
	for(int i = 0 ; i < n - 1 ; i++){
		cin >> arrival >> dept;
		if(tempdept <= dept){
			max++;
		}
		tempdept = dept;
	}
	cout<<max;
	
	return 0;
}
