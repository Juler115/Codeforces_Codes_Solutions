// Problem: C. Air Conditioner
// Contest: Codeforces - Codeforces Round 620 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1304/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,m;
	cin>>n>>m;
	int t=0,l=m,r=l;
	bool pasa=1;
	for(int i=0;i<n;i++){
		int x,a,b;
		cin>>x>>a>>b;
		if(pasa){
			int tp=x-t;
			if(l-tp<=b && a<=r+tp){
				t=x;
				l=max(l-tp,a);
				r=min(r+tp,b);
			}
			else{
				pasa=0;
			}
		}
	}
	if(pasa)cout<<"YES\n";
	else cout<<"NO\n";
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
