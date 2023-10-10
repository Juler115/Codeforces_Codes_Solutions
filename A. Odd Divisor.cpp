// Problem: A. Odd Divisor
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/contest/1475/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
using namespace std;

bool has_odd_divisor(long long n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    if (n == 1) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (has_odd_divisor(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}





