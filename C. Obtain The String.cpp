// Problem: C. Obtain The String
// Contest: Codeforces - Educational Codeforces Round 81 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1295/C
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
		string t,s;
		cin>>s>>t;
		vector<set<int>>abc(26);
		string aux;
		int n=s.size();
		for(int i=0;i<n;i++){
			abc[s[i]-'a'].insert(i);
		}
		int ans=0;
		int pasa=0;
		for(int i=0;i<t.size();i++){
			char ac=t[i];
			auto it=abc[ac-'a'].lower_bound(pasa);
			if(abc[ac-'a'].size()==0){
				ans=-1;
				break;
			}
			if(it!=abc[ac-'a'].end() && pasa!=0){
				pasa=*it+1; 
			}
			else if(pasa==0){
				pasa=*it+1;
				ans++;
			}
			else{
				pasa=0;
				i--;
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
