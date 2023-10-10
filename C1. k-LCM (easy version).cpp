// Problem: C1. k-LCM (easy version)
// Contest: Codeforces - Codeforces Round 708 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1497/C1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,k;
	cin>>n>>k;
	if (n % 2 == 1) cout<<1<<" "<<n/2<<" "<<n/2<<"\n";
    else if (n % 4 == 0) cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
    else if (n % 2 == 0) cout<<2<<" "<<n/2-1<<" "<<n/2-1<<"\n";
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
