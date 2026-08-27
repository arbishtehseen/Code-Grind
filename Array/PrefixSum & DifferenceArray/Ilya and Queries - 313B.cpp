#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n = s.length(); 
	vector<int> pref(n, 0);
	for(int i = 1 ; i <= n-1 ; i++){
		if(s[i-1] == s[i]) {
			pref[i] = pref[i-1] + 1;
		}
		else{
			pref[i] = pref[i-1];
		}
	}
	
	int m;
	cin>>m;
	while(m--){
		int l , r;
		cin >> l >> r;
		cout << pref[r - 1] - pref[l-1] << endl;
		
	}
	
	return 0;
}