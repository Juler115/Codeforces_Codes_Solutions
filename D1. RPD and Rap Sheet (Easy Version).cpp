// Problem: D1. RPD and Rap Sheet (Easy Version)
// Contest: Codeforces - Codeforces Round 730 (Div. 2)
// URL: https://codeforces.com/contest/1543/problem/D1
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
    {
        if(i==0)
            cout << 0 << endl;
        else
            cout << (i^(i-1)) << endl;
        cout.flush();
        int v;
        cin >> v;
        if(v==1)
            break;
    }
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
