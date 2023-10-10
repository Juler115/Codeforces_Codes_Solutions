// Problem: B. Mathematical Circus
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/B
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
	for(int a=0;a<t;a++)
	{
		long long n,k;
		cin>>n>>k;
		bool existe=1;
		int pasados[n+1];
		for(int i=1;i<=n;i++)
		{
			for(int h=1;h<=n;h++) 
			{pasados[h]=1;
			cout<<pasados[h];
			}
			//if(pasados[i]==0) continue;
			for(int j=1;j<=n;j++)
			{
				//if(pasados[j]==0) continue;
				if(((i+k)*j)%4==0)
				{
					if(existe) cout<<"Yes\n";
					existe=0;
					//cout<<pasados[i]<<" "<<j<<"\n";
					pasados[i]=0;
					pasados[j]=0;
				}
			}
		}
		if(existe) cout<<"NO\n";
	
	}
	
	return 0;
}
