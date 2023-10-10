// Problem: A. Split it!
// Contest: Codeforces - Codeforces Round 706 (Div. 2)
// URL: https://codeforces.com/contest/1496/problem/A
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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		if(k==0){
			cout<<"YES\n";
			continue;
		}
		string aux=s;
		reverse(s.begin(),s.end());
		if(2*(k)<n){
			if(s==aux){
				cout<<"YES\n";
				continue;
			}else{
				bool pasa=true;
				for(int i=0;i<k;i++)
				{
					if(s[i]!=aux[i])pasa=false;
				}
				if(pasa){
					cout<<"YES\n";
					continue;
				}
			}
		}
		cout<<"NO\n";
	}
	
	return 0;
}
