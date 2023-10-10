// Problem: A. Casimir's String Solitaire
// Contest: Codeforces - Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	string s;
	cin>>s;
	int a=0,b=0,c=0;
	for(auto x:s){
		if(x=='A')a++;
		else if(x=='B')b++;
		else if(x=='C')c++;
	}
	if(a+c==b)cout<<"YES\n";
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
