#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N;
	cout<<"Enter Number of Vectors : ";
	cin>>N;
	vector<int> v[N];
	
	for(int i = 0 ; i < N ; i++){
		int size;
		cout<<"Enter size of vector: ";
		cin>>size;
		
		for(int j = 0 ; j < size ; j++){
			int x;
			cin>>x;
			v[i].push_back(x);
		}
		
	}
	
	for(int i = 0 ; i < N ; i++){
		cout<<"Vector "<<i+1<<" :"<<endl;
		
		for(int j= 0 ; j < v[i].size() ; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}