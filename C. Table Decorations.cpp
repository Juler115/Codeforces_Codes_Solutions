// Problem: C. Table Decorations
// Contest: Codeforces - Codeforces Round 273 (Div. 2)
// URL: https://codeforces.com/problemset/problem/478/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int ans,a,b,c;
	cin>>a>>b>>c;
	ans=0;
	if(max(a,max(b,c))-min(a,min(b,c))<=1){
		ans+=(a+b+c)/3;
	}
	else{
		//ans+=(a+b+c)-max(a,max(b,c));
	}
	cout<<ans;
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}