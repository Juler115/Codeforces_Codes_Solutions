// Problem: C. Alternating Subsequence
// Contest: Codeforces - Codeforces Round 636 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1343/C
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans=0;
		int maxi=-1*INT_MAX;
		int signo;
		int x;
		cin>>x;
		signo=x;
		maxi=x;
		for(int i=1;i<n;i++)
		{
			cin>>x;
			if(signo*x >0)maxi=max(maxi,x);
			else{
				ans+=maxi;
				maxi=x;
				signo=x;
			}
		}
		ans+=maxi;
		cout<<ans<<"\n";
	}
	
	return 0;
}
