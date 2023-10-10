// Problem: C. Great Graphs
// Contest: Codeforces - Codeforces Round 728 (Div. 2)
// URL: https://codeforces.com/contest/1541/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	int ans=0,sum=0,ante=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		sum+=x-ante+x;
		ans+=x-ante;
		ans-=sum;
		cout<<ans<<" ";
		ante=x;
	}
	cout<<ans<<"\n";
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
