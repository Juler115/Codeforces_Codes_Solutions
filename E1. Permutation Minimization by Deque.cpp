// Problem: E1. Permutation Minimization by Deque
// Contest: Codeforces - Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/E1
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
	deque<int>ans;
	ans.push_front(nums[0]);
	for(int i=1;i<n;i++){
		if(nums[i]<ans.front()){
			ans.push_front(nums[i]);
		}
		else{
			ans.push_back(nums[i]);
		}
	}
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
