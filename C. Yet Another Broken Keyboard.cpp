// Problem: C. Yet Another Broken Keyboard
// Contest: Codeforces - Codeforces Round 605 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1272/C
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
	map<char,int>posi;
	for(int i=0;i<k;i++){
		char c;
		cin>>c;
		posi[c]=1;
	}
	int ans=0,aux=0;
	for(auto a:s){
		if(posi[a]==1)aux++;
		else{
			ans+=((aux)*(aux+1))/2;
			aux=0;
		}
	}
	ans+=((aux)*(aux+1))/2;
	//ans-=2;
	cout<<ans;
	
	return 0;
}
