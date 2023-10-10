// Problem: B. Fancy Coins
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1860/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,k,a1,ak;
	cin>>n>>k>>a1>>ak;
	int ans1=n%k,ansk=n/k;
	
	if(ak>=ansk)ansk=0;
	else ansk-=ak;
	
	if(a1>=ans1){
		a1-=ans1;
		ans1=0;
	}
	else{
		ans1-=a1;
		a1=0;
	}
	
	if(ansk==0 && ans1==0){
		cout<<0<<"\n";
	}
	else{
		if(ansk!=0)ansk-=(a1/k>ansk?ansk:a1/k);
		cout<<ans1+ansk<<"\n";
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
