// Problem: A. Gerald's Hexagon
// Contest: Codeforces - Codeforces Round 313 (Div. 1)
// URL: https://codeforces.com/problemset/problem/559/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int a1,a2,a3,a4,a5,a6;
	cin>>a1>>a2>>a3>>a4>>a5>>a6;
	int ans=0,base=a4;
	if(a1==a2 && a2==a3 && a3==a4 && a4==a5 && a5==a6)a4++;
	while(a5--){
		ans+=(2*base-1)+2;
		base++;
	}
	while(base>=a4){
		ans+=(2*base-1);
		base--;
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
