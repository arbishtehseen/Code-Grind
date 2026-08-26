#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n , q;
	cin >> n >> q;
	vector<int> arr(n+1, 0);
	vector<int> pref(n+1, 0);
	for(int i = 1 ; i <= n ; i++){
		cin>>arr[i]; 
		pref[i] = pref[i-1] + arr[i];
	}
	
	while(q--){
		int l , r;
		cin >> l >> r;
		cout<< pref[r] - pref[l - 1] << endl;
	}
	
	return 0;
}