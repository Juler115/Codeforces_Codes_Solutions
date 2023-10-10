// Problem: A. Add and Divide
// Contest: Codeforces - Codeforces Round 701 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1485/A
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
		long long a,b;
		cin>>a>>b;
		long long mini=INT_MAX,a2=a,ans=0;
		bool uno=0;
		if(b==1)uno=1,b++;
		for(int i=0;i<=30;i++)
		{
			ans=i;
			a2=a;
			while(a2)
			{
				a2/=b;
				ans++;
			}
			mini=min(ans,mini);
			b++;
		}
		
		cout<<mini+uno<<"\n";
	}
	
	return 0;
}
