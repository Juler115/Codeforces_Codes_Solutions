// Problem: C. Not Adjacent Matrix
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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
		if(n==1){
			cout<<1<<"\n";
			continue;
		}
		if(n==2){
			cout<<-1<<"\n";
			continue;
		}
		int k=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(k==n*n-1 || k==n*n){
					cout<<k<<" ";
					k=0;
				}
				else cout<<k<<" ";
				k+=2;
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
