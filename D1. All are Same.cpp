// Problem: D1. All are Same
// Contest: Codeforces - Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/D1
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
	int gcd=0;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	if(nums[0]==nums[n-1]){cout<<-1<<"\n";return;}
	for(int i=1;i<n;i++){
		gcd=__gcd(gcd,abs(nums[i]-nums[i-1]));
		//cout<<abs(nums[i]+nums[i+1])<<" ";
	}
	cout<<gcd<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
