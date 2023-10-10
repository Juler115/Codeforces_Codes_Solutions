// Problem: B. Sequence Game
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/contest/1862/problem/B
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
	vector<int>ans;
	ans.push_back(nums[0]);
	for(int i=1;i<n;i++){
		if(nums[i]>=nums[i-1]){
			ans.push_back(nums[i]);
		}
		else{
			ans.push_back(1);
			ans.push_back(nums[i]);
		}
	}
	cout<<ans.size()<<"\n";
	for(auto a:ans)cout<<a<<" ";
	cout<<"\n";
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
