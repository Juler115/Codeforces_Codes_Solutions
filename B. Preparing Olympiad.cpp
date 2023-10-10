// Problem: B. Preparing Olympiad
// Contest: Codeforces - Codeforces Round 306 (Div. 2)
// URL: https://codeforces.com/problemset/problem/550/B
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
	
	int n,l,r,x;
	cin>>n>>l>>r>>x;
	vector<int>dif(20);
	for(int i=0;i<n;i++)cin>>dif[i];
	
	int mini,maxi,ans=0,suma=0;
	for(int i=1;i<(1<<n);i++)
	{
		maxi=0,mini=2e9,suma=0;
		
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				maxi=max(maxi,dif[j]);
				mini=min(mini,dif[j]);
				suma+=dif[j];
			}
		}
		if(maxi-mini>=x && suma>=l && suma<=r)ans++;
	}
	cout<<ans;
	
	return 0;
}
