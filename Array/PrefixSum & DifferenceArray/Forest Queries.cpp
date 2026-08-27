#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n , q;
	cin >> n >> q;

	vector<vector<long long>> pref(n+1, vector<long long>(n+1));
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			char c;
			cin >> c;
			if( c == '.'){
			pref[i][j] = 0 + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
		}
		else{
			pref[i][j] = 1 + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
		    }
		}
	}
	
	while(q--){
		int a , b , c , d;
		cin >> a >> b >> c >> d;
		cout << pref[c][d] - pref[a-1][d] - pref[c][b-1] + pref[a-1][b-1] <<"\n";
	}
	
	return 0;
}