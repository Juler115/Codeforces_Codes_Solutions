// Problem: D. Maximum AND
// Contest: Codeforces - Educational Codeforces Round 134 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1721/problem/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		vector<int> c;
		int mayor=0,mayorc;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		
		for(int i=0;i<n;i++)
		{
			mayor=0;
			for(int k=0;k<n;k++)
			{
				if((a[i]^b[k])>mayor && b[k]!=-1)
				{
					mayor=a[i]^b[i];
					mayorc=k;
				}
			}
			c.push_back(a[i]^b[mayorc]);
			b[mayorc]=-1;
		}
		sort(c.begin(),c.end());
		for(int i=0;i<n;i++)
		{
			if(i==0) mayor=c[i];
			else
			{
				mayor=mayor&c[i];
			}
		}
		cout<<mayor<<"\n";

	}
	
	return 0;
}
