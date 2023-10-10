// Problem: B. National Project
// Contest: Codeforces - Educational Codeforces Round 82 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1303/B
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
		int n,g,b;
		cin>>n>>g>>b;
		int totg=0;
		int needg=(n+1)/2;
		totg+=(needg/g)*(g+b);
		if(needg%g>0)totg+=needg%g;
		else totg-=b;
		cout<<max(n,totg)<<"\n";
	}
	
	return 0;
}
