// Problem: D. Balanced Round
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		sort(nums.begin(),nums.end());
		int ans=0,ini=0,ans2=INT_MAX;
		//for(auto a:nums)cout<<a<<" ";
		//cout<<"\n";
		for(int i=1;i<n;i++){
			if(nums[i]-nums[i-1]>k){
				if((i-ini)>=(n-i)){
					ans+=(n-i);
					goto fin;
				}
				else{
					ans2=min(ans2,ans+(n-i));
					ans+=i-ini;
					ini=i;
				}
			}
		}
		fin:;
		cout<<min(ans,ans2)<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
