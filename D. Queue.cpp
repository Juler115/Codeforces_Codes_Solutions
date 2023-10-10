// Problem: D. Queue
// Contest: Codeforces - Codeforces Round 303 (Div. 2)
// URL: https://codeforces.com/problemset/problem/545/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	int n;
	cin>>n;
	vector<int>serv(n);
	for(int i=0;i<n;i++)cin>>serv[i];
	sort(serv.begin(),serv.end());
	int tiempo=0;
	int ans=0;
	for(auto a:serv)
	{
		if(tiempo<=a)
		{
			tiempo+=a;
			ans++;
		}
	}
	cout<<ans<<"\n";
	
	return 0;
}
