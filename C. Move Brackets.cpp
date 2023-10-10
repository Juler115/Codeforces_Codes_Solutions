// Problem: C. Move Brackets
// Contest: Codeforces - Codeforces Round 653 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1374/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int op=0,clo=0;
	int ans=0;
	for(auto a:s){
		if(a=='(')op++;
		else{
			if(op==0)ans++;
			else op--;
		}  
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
