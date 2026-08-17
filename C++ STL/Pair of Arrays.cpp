#include<iostream>
using namespace std;
int main(){
	pair<int , int> p_array[3] ; 
	
	for(int i = 0 ; i < 3 ; i++){
		cin>>p_array[i].first>>p_array[i].second ;
	}
	
	swap(p_array[0] , p_array[2]);
	
	for(int i = 0 ; i < 3 ; i++){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
	
	
	
	return 0;
}