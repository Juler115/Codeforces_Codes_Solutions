// Problem: C. Phoenix and Towers
// Contest: Codeforces - Codeforces Global Round 14
// URL: https://codeforces.com/problemset/problem/1515/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m,x;
		cin>>n>>m>>x;
		vector<pair<int,int>>alturas;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			alturas.push_back(make_pair(x,i));
		}
		priority_queue<pair<int,int>> torres;
		vector<int>nuevo;
		for(int i=0;i<m;i++)
		{
			torres.push(make_pair(0,i+1));
		}
		for(int i=0;i<n;i++)
		{
			auto x=torres.top();
			torres.pop();
			x.first*=-1;
			x.first+=alturas[i].first;
			alturas[i].second=x.second;
			torres.push(make_pair(-1*x.first,x.second));
		}
		cout<<"YES\n";
		for(auto a:alturas)cout<<a.second<<" ";
		cout<<"\n";
	}
	
	return 0;
}
