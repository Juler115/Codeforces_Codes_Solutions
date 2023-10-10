// Problem: A. Web of Lies
// Contest: Codeforces - Codeforces Round 736 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1548/A
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
	int n,m;
	cin>>n>>m;
	vector<int> nobles(n+1);
	nobles[0]=0;
	int tot=n;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		if(u<v)nobles[u]++;
		else nobles[v]++;
	}
	for(auto a:nobles){
		//cout<<a<<" ";
		if(a>0)tot--;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int op;
		cin>>op;
		if(op==1)
		{
			int u,v;
			cin>>u>>v;
			int ante=nobles[min(u,v)];
			if(u<v)nobles[u]++;
			else nobles[v]++;
			if(ante==0 && nobles[min(u,v)]!=0)tot--;
			
			/*for(auto a:nobles){
				cout<<a<<" ";
			}
			cout<<"\n";*/
		}
		else if(op==2)
		{
			int u,v;
			cin>>u>>v;
			int ante=nobles[min(u,v)];
			if(u<v)nobles[u]--;
			else nobles[v]--;
			if(ante!=0 && nobles[min(u,v)]==0)tot++;
			
			/*for(auto a:nobles){
				cout<<a<<" ";
			}
			cout<<"\n";*/
		}
		else cout<<tot<<"\n";
	}
	
	return 0;
}
