// Problem: D. Distinct Characters Queries
// Contest: Codeforces - Codeforces Round 590 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1234/D
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
    
    vector<set<int>>list(26);
	string s;
	cin>>s;
	int i=0;
	for(auto a:s){
		list[a-'a'].insert(i);
		i++;
	}
	int t=0;
	cin>>t;
	while(t--)
	{
		int q;
		cin>>q;
		if(q==1){
			int id;
			char nuevo;
			cin>>id>>nuevo;
			id--;
			list[s[id]-'a'].erase(id);
			list[nuevo-'a'].insert(id);
			s[id]=nuevo;
		}
		else{
			int l,r;
			cin>>l>>r;
			l--;
			r--;
			int ans=0;
			for(int i=0;i<26;i++){
				auto it = list[i].lower_bound(l);
				if (it != list[i].end() && *it <= r) ++ans;
			}
			cout<<ans<<"\n";
		}
	}
	
	return 0;
}
