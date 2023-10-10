// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round 166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool iguales(int n)
{
	vector<bool>vis(10);
	while(n>0)
	{
		if(vis[n%10]==1)return false;
		vis[n%10]=1;
		n/=10;
	}
	return true;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	n++;
	while(!iguales(n))n++;
	cout<<n;
	
	return 0;
}
