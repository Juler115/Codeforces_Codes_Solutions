// Problem: D. a-Good String
// Contest: Codeforces - Codeforces Round 656 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1385/D
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


int divi(const string &s,char act){
	if(s.size()==1){
		return s[0]!=act;
	}
	int mid=s.size()/2;
	int midl=divi(string(s.begin(),s.begin()+mid),act+1);
	midl+=s.size()/2 - count(s.begin()+mid,s.end(),act);
	int midr=divi(string(s.begin()+mid,s.end()),act+1);
	midr+=s.size()/2 - count(s.begin(),s.begin()+mid,act);
	return min(midl,midr);
	
}

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<divi(s,'a')<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
