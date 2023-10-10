// Problem: E. Arranging The Sheep
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int w[10000000];
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		int n;
		cin >> n;
		cin >> s;
		int now=0;
		s=' '+s;
		for(int i=1;i<=n;i++)
		{
			if(s[i]=='*') ++now;
			w[i]=now;
		}
		now=0;
		for(int i=n;i>=1;i--)
		{
			if(s[i]=='*') ++now;
			w[i]=min(w[i],now);
		}
		int ans=0;
		for(int i=1;i<=n;i++)
			if(s[i]=='.') ans+=w[i];
		cout << ans << "\n";
	}
	
	return 0;
}
