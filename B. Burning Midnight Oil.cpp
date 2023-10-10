// Problem: B. Burning Midnight Oil
// Contest: Codeforces - Codeforces Round 112 (Div. 2)
// URL: https://codeforces.com/problemset/problem/165/B
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
	cout.precision(1e5);
	double n,k;
	cin>>n>>k;
	for(int i=n*(k-1)/(k);1;i++)
	{
		int sum=0;
		int a=i;
		while(a)
		{
			sum+=a;
			a/=k;
		}
		if(sum>=n)
		{
			cout<<i;
			break;
		}
	}
	//cout<<n/5;
	
	return 0;
}
