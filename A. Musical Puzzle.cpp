// Problem: A. Musical Puzzle
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		set<string>mel;
		int ans=0;
		for(int i=0;i<n-1;i++){
			string ac="";
			ac+=s[i];
			ac+=s[i+1];
			if(mel.find(ac)== mel.end()){
				ans++;
				mel.insert(ac);
				//cout<<ac<<"\n";
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
