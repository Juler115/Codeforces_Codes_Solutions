// Problem: A. Insomnia cure
// Contest: Codeforces - Codeforces Round 105 (Div. 2)
// URL: https://codeforces.com/problemset/problem/148/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int N=1e5+1;
vector<bool> vis(N);

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	
	int res=0;
	for(int i=k;i<=d;i+=k) vis[i]=1;
	for(int i=l;i<=d;i+=l) vis[i]=1;
	for(int i=m;i<=d;i+=m) vis[i]=1;
	for(int i=n;i<=d;i+=n) vis[i]=1;
	for(int i=1;i<=d;i++) if(vis[i]==0)res++;
	
	cout<<d-res;
	
	return 0;
}
