// Problem: C. K-th Not Divisible by n
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<k+((k-1)/(n-1))<<"\n";
	}
	
	return 0;
}
