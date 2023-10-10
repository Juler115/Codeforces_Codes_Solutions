// Problem: D. Rudolph and Christmas Tree
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/D
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		double n,b,h;
		cin>>n>>b>>h;
		double ans=0,ante=-1;
		for(int i=0;i<n;i++){
			int hi;
			cin>>hi;
			ans+=(h*b)/2;
			if(ante!=-1){
				double hei=h-abs(hi-ante);
				//cout<<hei<<" ";
				double base=(b*hei)/h;
				//cout<<base<<"\n";
				if(base>0 && hei>0)ans-=(base*hei)/2;
			}
			ante=hi;
		}
		cout<<ans<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(15);
	solve();
	
	return 0;
}
