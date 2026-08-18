#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int>> v; 
	int N;
	cout<<"Enter Number of vectors : ";
	cin>>N;
	
	for(int i = 0 ; i < N ; i++){
		int size;
		cout<<"Enter size of vector : ";
		cin>>size;
		vector<int> temp;
		
		for(int j = 0 ; j < size ; j++){
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	
	for(int i = 0 ; i < N ; i++){
		cout<<"Vector "<<i+1<<" : "<<endl;
		
		for(int j = 0 ; j < v[i].size() ; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}