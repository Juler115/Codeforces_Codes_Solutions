// Problem: C. Woodcutters
// Contest: Codeforces - Codeforces Round 303 (Div. 2)
// URL: https://codeforces.com/problemset/problem/545/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	int n;
	cin>>n;
	vector<pair<int,int>>arboles;
	for(int i=0;i<n;i++)
	{
		int x,h;
		cin>>x>>h;
		arboles.pb(mk(x,h));
	}
	int ans=0;
	int dere=0;
	if(n>=2)ans+=2;
	else ans+=n;
	for(int i=1;i<n-1;i++)
	{
		auto a=arboles[i],b=arboles[i-1],c=arboles[i+1];
		
		if(a.f - a.s > b.f + dere){
			ans++;
			dere=0;
		}
		else if(a.f + a.s < c.f)
		{
			ans++;
			dere=a.s;
		}
		else dere=0;
	}
	cout<<ans;
	
	
	return 0;
}
