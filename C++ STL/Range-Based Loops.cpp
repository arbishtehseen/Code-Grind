#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v = {2,3,4,5,6,7};
	for(int &value : v){
		cout<<value<<" ";
	}
	cout<<endl;
	
	/* same thing can be applied on pairs as well.
	for(pair<int,int> &pair : p){
		cout<<pair.first<<" "<<pair.second<<endl;
	}
	*/
	
	return 0;
}