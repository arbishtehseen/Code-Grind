#include<iostream>
using namespace std;


long long calculateSum(long long n, long long k) {
    long long p = (n - 1) / k; 
    return k * p * (p + 1) / 2;
}

int main() {
    long long T;
    if (!(cin >> T)) return 0;
    
    while (T--) {
        long long N;
        cin >> N;
        
        long long sum3 = calculateSum(N, 3);
        long long sum5 = calculateSum(N, 5);
        long long sum15 = calculateSum(N, 15);
        
        long long totalSum = sum3 + sum5 - sum15;
        
        cout << totalSum << endl;
    }
    return 0;
}