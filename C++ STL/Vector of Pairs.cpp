#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<pair<int,int>> v){
	for(int i = 0 ; i < v.size() ; i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	cout<<endl;
}


int main(){
	
    //	vector<pair<int , int>> v = {{1,2} , {3,4} ,{5,6}} ;
    vector<pair<int , int>> v;
    int size;
    cout<<"Enter Size : "<<endl;
    cin>>size;
    
    /*for(int i = 0 ; i < size ; i++){
    	pair<int,int> p;
    	cin>>p.first>>p.second;
    	v.push_back(p);
	} 
	*/
	
	for(int i = 0 ; i < size ; i++){
		int x , y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	printvector(v);
	
	return 0;
}