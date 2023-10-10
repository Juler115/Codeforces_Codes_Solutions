// Problem: B. Petr and a Combination Lock
// Contest: Codeforces - Hello 2019
// URL: https://codeforces.com/problemset/problem/1097/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	int ans=0;
	for(int i=1;i<(1<<n);i++)
	{
		ans=0;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				ans+=nums[j];
			}
			else ans-=nums[j];
		}
		//cout<<ans<<"\n";
		if(ans%360==0){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
