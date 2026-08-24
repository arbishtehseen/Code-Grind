#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		int arr[n];
		for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	    }
	    // 2 5 2 4 1 2 5 3.
	    int visited[n] = {0};
	    int count = 0;
	    for(int i = 0 ; i < n ; i++){
	    	if(visited[i] != 1){
	    		count++;
			}
			for(int j = i+1 ; j < n ; j++){
				if(arr[i] == arr[j]){
					visited[j] = {1};
				}
			}
		}
		cout<<count;
	
}
	
	
	
	return 0;
}