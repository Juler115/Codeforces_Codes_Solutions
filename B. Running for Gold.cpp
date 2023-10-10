// Problem: B. Running for Gold
// Contest: Codeforces - Codeforces Global Round 15
// URL: https://codeforces.com/problemset/problem/1552/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
priority_queue<pair<int,int>>t1,t2,t3,t4,t5;
vector<int>parti[50001];
vector<int>aux;

void clean()
{
	aux.clear();
	for(int i=1;i<50001;i++)parti[i].clear();
	while(!t1.empty())t1.pop();
	while(!t2.empty())t2.pop();
	while(!t3.empty())t3.pop();
	while(!t4.empty())t4.pop();
	while(!t5.empty())t5.pop();
}

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
		clean();
		for(int i=1;i<=n;i++)
		{
			int x1,x2,x3,x4,x5;
			cin>>x1>>x2>>x3>>x4>>x5;
			t1.push(make_pair(x1,i));
			t2.push(make_pair(x2,i));
			t3.push(make_pair(x3,i));
			t4.push(make_pair(x4,i));
			t5.push(make_pair(x5,i));
		}
		auto x=t1.top();
		while(!t1.empty())
		{
			x=t1.top();
			for(auto a:aux)parti[x.second].push_back(a);
			aux.push_back(x.second);
			t1.pop();
		}
		aux.clear();
		while(!t2.empty())
		{
			x=t2.top();
			for(auto a:aux)parti[x.second].push_back(a);
			aux.push_back(x.second);
			t2.pop();
		}
		aux.clear();
		while(!t3.empty())
		{
			x=t3.top();
			for(auto a:aux)parti[x.second].push_back(a);
			aux.push_back(x.second);
			t3.pop();
		}
		aux.clear();
		while(!t4.empty())
		{
			x=t4.top();
			for(auto a:aux)parti[x.second].push_back(a);
			aux.push_back(x.second);
			t4.pop();
		}
		aux.clear();
		while(!t5.empty())
		{
			x=t5.top();
			for(auto a:aux)parti[x.second].push_back(a);
			aux.push_back(x.second);
			t5.pop();
		}
		int ganador=0;
		for(int i=1;i<=n;i++)
		{
			bool pasa=true;
			for(int j=1;j<=n;j++)
			{
				if(j==i)continue;
				if(count(parti[i].begin(),parti[i].end(),j)<3){
					pasa=false;
					break;
				}
			}
			if(pasa){
				ganador=i;
				break;
			}
		}
		if(ganador!=0)cout<<ganador<<"\n";
		else cout<<-1<<"\n";
	}
	
	return 0;
}
