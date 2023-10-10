// Problem: C. k-Tree
// Contest: Codeforces - Codeforces Round 247 (Div. 2)
// URL: https://codeforces.com/problemset/problem/431/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;

int combi(int n, int r)
{
    if (r == 0) return 1;

    if (r > n / 2) return combi(n, n - r); 

    int res = 1; 

    for (int k = 1; k <= r; ++k)
    {
        res *= n - k + 1;
        res /= k;
    }

    return res;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,k,d;
	cin>>n>>k>>d;
	int ans=0;
	for(int i=d;i<=n;i++)
	{
		ans+=combi(n-i+1,2)%mod;
	}
	cout<<ans<<"\n";
	
	return 0;
}
