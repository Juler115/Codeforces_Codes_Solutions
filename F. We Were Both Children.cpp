// Problem: F. We Were Both Children
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve() {
    int n; cin >> n;
    vector<int> cnt(n + 1, 0), mx(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x <= n) ++cnt[x];
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = i; j <= n; j += i) mx[j] += cnt[i];
    }
    cout << *max_element(mx.begin(),mx.end()) << "\n";
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
