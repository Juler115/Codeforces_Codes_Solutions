// Problem: E1. Erase and Extend (Easy Version)
// Contest: Codeforces - Codeforces Round 726 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1537/E1
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	set<pair<string,int>>compi;
	string aux="",aux2=s;
	//get the lexicographic less string
	for(int i=0;i<n;i++){
		compi.insert(make_pair(aux2+aux,n-i));
		aux+=s[i];
		aux2.pop_back();
		auto im=compi.rbegin();
		if(compi.size()>1)compi.erase(*im);
	}
	int id=0;
	for(auto a:compi){id=a.second;
	break;}
	aux=s.substr(0,id);
	string ans="";
	while(ans.size()<k)ans+=aux;
	cout<<ans.substr(0,k)<<"\n";
	//for(auto a:compi)cout<<a.first<<"\n";
	//cout<<min<<" "<<id<<"\n";
	
	return 0;
}
