// Problem: D. Same Differences
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/D
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
		int n;
		cin>>n;
		int ans=0;
		map<int,int> iguales;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			iguales[x-i]++;
		}
		for(auto a:iguales)
		{
			//cout<<a.first<<" "<<a.second<<"\n";
			ans+=(a.second*(a.second-1))/2;
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
