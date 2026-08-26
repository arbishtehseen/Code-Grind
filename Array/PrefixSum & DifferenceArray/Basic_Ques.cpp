/* Given Array of N integers. Given Q queries and in each query 
given L and R print sum of array elements from index L to R(L,R)
included.
Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <=N
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n , q;
	cin >> n >> q;
	vector<long long> arr(n+1, 0);
	vector<long long> pref(n+1, 0);
	
	for(int i = 1; i <= n ; i++){
        cin >> arr[i];
		pref[i] = pref[i-1] + arr[i];
	}
	
	while(q--){
		int L , R;
		cin >> L >> R;
		cout << pref[R] -pref[L - 1] << "\n";
	}
	
	return 0;
}

