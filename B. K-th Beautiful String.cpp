// Problem: B. K-th Beautiful String
// Contest: Codeforces - Codeforces Round 629 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1328/B
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
		int n,k;
		cin>>n>>k;
		
		string s(n,'a');
		for(int i=n-2;i>=0;i--)
		{
			if(k<=(n-i-1))
			{
				s[i]='b';
				s[n-k]='b';
				cout<<s<<"\n";
				break;
			}
			k-=(n-i-1);
		}
	}
	
	return 0;
}
