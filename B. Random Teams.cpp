// Problem: B. Random Teams
// Contest: Codeforces - Codeforces Round 273 (Div. 2)
// URL: https://codeforces.com/problemset/problem/478/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int pairs(int n)
{
    return n * (n - 1) / 2;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,m;
	cin>>n>>m;
	int num=n-m+1;
	int maxi=((num)*(num-1))/2;
	int a=(n/m),b=n%m;
	int mini=pairs(a)*(m-b)+pairs(a+1)*b;
	
	cout<<mini<<" "<<maxi;
	
	return 0;
}
