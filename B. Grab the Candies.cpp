// Problem: B. Grab the Candies
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/B
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
		int n;
		cin>>n;
		int m=0,b=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2==0)m+=x;
			else b+=x;
		}
		if(m>b)cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	
	return 0;
}
