// Problem: C. Good String
// Contest: Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1389/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		string s1=s.substr(1,n-1)+s[0],s2=s[n-1]+s.substr(0,n-1);
		cout<<s1<<"\n"<<s2<<"\n";
		cout<<n<<"\n";
		map<char,int>cant;
		for(auto a:s){
			cant[a]++;
		}
		int maxi=0;
		for(auto a:cant)maxi=max(maxi,a.second);
		if(s1==s2)cout<<0<<"\n";
		else{
			cout<<min(n-2,n-maxi)<<"\n";
		}
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
