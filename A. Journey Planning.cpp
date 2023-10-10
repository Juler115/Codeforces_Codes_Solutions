// Problem: A. Journey Planning
// Contest: Codeforces - Codeforces Round 625 (Div. 1, based on Technocup 2020 Final Round)
// URL: https://codeforces.com/problemset/problem/1320/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

bool vis[1000000];

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
    cin >> n;
    unordered_map<int, int> a;
    for(int i = 1; i <= n; i++)
    {
       int x;
       cin >> x;
       a[x - i] += x;
    }
    int ans = 0;
    for(auto elem : a) ans = max(ans, elem.second);
    cout << ans << endl;
	
	return 0;
}
