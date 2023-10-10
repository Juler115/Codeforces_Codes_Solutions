// Problem: B. Kefa and Company
// Contest: Codeforces - Codeforces Round 321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define mk make_pair
#define f first
#define s second

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,d;
	cin>>n>>d;
	vector<pair<int,int>>amigos;
	for(int i=0;i<n;i++)
	{
		int m,s;
		cin>>m>>s;
		amigos.pb(mk(m,s));
	}
	sort(amigos.begin(),amigos.end());
	int ans=0;
	int j=0;
	int aux=0;
	for(int i=0;i<n;i++)
	{
		if(i>j){
			aux+=amigos[i].s;
			j=i+1;
		}
		while(j<n)
		{
			if(abs(amigos[i].f-amigos[j].f) < d)
			{
				aux+=amigos[j].s;
				j++;
			}
			else break;
		}
		ans=max(aux,ans);
		aux-=amigos[i].s;
	}
	cout<<ans;
	
	return 0;
}
