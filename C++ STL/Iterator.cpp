#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v = {2,3,5,6,7};
	// Declaration of Iterator.
	// container(of which we want to declare iterator of) :: iterator it;
	vector<int> ::iterator it = v.begin();
	// accessing values:
	cout<<(*it) << endl;
	// cout<<(*it+1)<<endl;
	// iterators are continous.
	int i = 0;
	while(v.end()){
		cout<<(*it+i)<<" ";
		i++;
	}
	
	
	
	
	return 0;
}