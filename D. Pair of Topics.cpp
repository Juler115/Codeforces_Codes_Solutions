// Problem: D. Pair of Topics
// Contest: Codeforces - Codeforces Round 627 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1324/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		nums[i]-=x;
	}
	sort(nums.begin(),nums.end());
	int ans=0;
	for(int i=0;i<n;i++){
		if(nums[i]<=0){
			auto it=upper_bound(nums.begin(),nums.end(),abs(nums[i]));
			//cout<<it-nums.begin()<<" ";
			ans+=n-(it-nums.begin());	
		}
		else{
			ans+=n-i-1;
		}
		
	}
	cout<<ans<<"\n";
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
