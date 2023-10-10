// Problem: C. Sweets Eating
// Contest: Codeforces - Codeforces Round 600 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1253/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	double n,m;
	cin>>n>>m;
	vector<int>swe(n);
	for(int i=0;i<n;i++)cin>>swe[i];
	sort(swe.begin(),swe.end());
	vector<long long> ans(n);
 
    long long sum = 0;
 
    for (int i = 0; i < n; ++i) {
        sum += swe[i];
        ans[i] = sum;
 
   		if (i >= m) {
       		ans[i] += ans[i - m];
        }
 
    	cout << ans[i] << (i == n-1 ? '\n' : ' ');
    }
	
	return 0;
}
