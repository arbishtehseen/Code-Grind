#include<iostream>
#include <climits>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
	int n;
	cin >> n;
	vector<long long> arr(n+1, 0);
	vector<long long> pref_sum(n+1, 0);
	vector<long long> suff_sum(n+1, 0); 
	int total_sum = 0;
	
	for(int i = 1; i <= n ; i++){
		cin>>arr[i];
		pref_sum[i] = pref_sum[i-1] + arr[i];
		total_sum +=arr[i];
	}
	suff_sum[1] = total_sum;
	for(int i = 2 ; i <= n ; i++){
		suff_sum[i] = suff_sum[i-1] - arr[i-1];
	}
	
	long long minimum = INT_MAX;
    long long sum;
    int index = 1;
    
    for(int i = 1 ; i <= n ; i++){
    	sum = pref_sum[i] + suff_sum[i]; 
    	if(minimum > sum){
    		minimum = sum;
    		index = i;
		}
	}
	cout<<index<<endl;
}
    
	return 0;
}