#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v = {2,3,4,5,6,7,}; 
	/* Rather than declaring iterator
	vector<int> ::iterator it; 
	do this */ 
	// here, it is being initialised, and auto will see itself
	// that its the iterator of v vector.
	for(auto it = v.begin() ; it != v.end() ; ++it){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	// auto can even determine, pairs too.
	
	for(auto it : v){
		cout<<(it)<<" ";
	}
	cout<<endl;
	
	return 0;
}