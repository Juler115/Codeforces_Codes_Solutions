// Problem: C. Building a Fence
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1469/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>h(n);
	for(int i=0;i<n;i++)cin>>h[i];
	int l=h[0],r=h[0]+k;
	bool pasa=1;
	for(int i=1;i<n;i++){
		if(i==n-1){
			if(h[i]+k<=l || h[i]>=r){
				pasa=0;
			}
		}
		else{
			if(h[i]>=h[0]){
				if(h[i]>=r){
					pasa=0;
					goto fin;
				}
				else{
					l=h[i];
					r+=k-1;
				}
			}
			else{
					if(l-k+1>h[i]+1){
						pasa=0;
						goto fin;
					}
					l=max(h[i],l-k+1);
					r+=k-1;
			}
		}
	}
	fin:;
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
