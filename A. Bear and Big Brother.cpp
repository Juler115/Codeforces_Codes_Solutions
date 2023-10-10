// Problem: A. Bear and Big Brother
// Contest: Codeforces - Codeforces Round 405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// URL: https://codeforces.com/problemset/problem/791/A
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
	int a,b;
	cin>>a>>b;
	int ans=0;
	while(a<=b)
	{
		a*=3;
		b*=2;
		ans++;
	}
	cout<<ans;
	
	return 0;
}
