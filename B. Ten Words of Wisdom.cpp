// Problem: B. Ten Words of Wisdom
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0,ansb=0;
		for(int i=1;i<=n;i++){
			int a,b;
			cin>>a>>b;
			if(a<=10){
				if(b>ansb){
					ans=i;
					ansb=b;
				}
			}
		}
		cout<<ans<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
