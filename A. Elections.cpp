// Problem: A. Elections
// Contest: Codeforces - Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	int m=max(a,max(b,c));
	if((a==m && b==m)||(b==m)&&(c==m)||(a==m && c==m)){
		cout<<m+1-a<<" ";
		cout<<m+1-b<<" ";
		cout<<m+1-c<<" ";
	}
	else{
		if(a!=m)cout<<m+1-a<<" ";
		else cout<<0<<" ";
		if(b!=m)cout<<m+1-b<<" ";
		else cout<<0<<" ";
		if(c!=m)cout<<m+1-c<<" ";
		else cout<<0<<" ";
	}
	cout<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
