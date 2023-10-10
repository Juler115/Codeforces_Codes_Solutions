// Problem: A. Exciting Bets
// Contest: Codeforces - Codeforces Round 730 (Div. 2)
// URL: https://codeforces.com/contest/1543/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int x,y;
	cin>>x>>y;
	if(x<y)swap(x,y);
	if(y==0){
		cout<<x<<" "<<0<<"\n";
	}
	else if(x==y){
		cout<<0<<" "<<0<<"\n";
	}
	else{
		int ans=x-y;
		int cant=0;
		if(ans!=0)cant=min(ans-y%ans,y%ans);
		cout<<ans<<" "<<cant<<"\n";
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
