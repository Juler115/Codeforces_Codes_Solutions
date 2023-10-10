// Problem: C. Mortal Kombat Tower
// Contest: Codeforces - Educational Codeforces Round 95 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1418/C
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
	int l=1,r=0;
	int ans=nums[0];
	while(l<n){
		if(nums[l]==1){
			r=l+1;
			while(r<n && nums[r]){
				r++;
			}
			ans+=(r-l)/3;
			l=r+1;
		}
		else l++;
	}
	
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
