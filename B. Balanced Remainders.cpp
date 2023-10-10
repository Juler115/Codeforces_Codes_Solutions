// Problem: B. Balanced Remainders
// Contest: Codeforces - Codeforces Round 702 (Div. 3)
// URL: https://codeforces.com/contest/1490/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		int c0,c1,c2;
		c0=c1=c2=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%3==0)c0++;
			else if(x%3==1)c1++;
			else c2++;
		}
		int ans=0,base=n/3;
		while(c1!=c2 || c2!=c0 || c1!=c0)
		{
			if(c0>=base)
			{
				while(c0>base)
				{
					c1++;
					c0--;
					ans++;
				}
				if(c1>=base)
				{
					while(c1>base)
					{
						c2++;
						c1--;
						ans++;
				    }
				}
				else{
					while(c1<base)
					{
						c1++;
						c2--;
						ans+=2;
					}
				}
			}
			else
			{
				while(c0<base)
				{
					c0++;
					c2--;
					ans++;
				}
				if(c2>=base)
				{
					while(c2>base)
					{
						c2--;
						c1++;
						ans+=2;
				    }
				}
				else{
					while(c2<base)
					{
						c2++;
						c1--;
						ans++;
					}
				}
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
