// Problem: D. Vupsen, Pupsen and 0
// Contest: Codeforces - Codeforces Round 750 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1582/D
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
	vector<int>nums(n),ans;
	for(int i=0;i<n;i++)cin>>nums[i];
	if(n%2==0){
		for(int i=1;i<n;i+=2){
			ans.push_back(-1*nums[i]);
			ans.push_back(nums[i-1]);
		}
	}
	else{
		for(int i=1;i<n-3;i+=2){
			ans.push_back(-1*nums[i]);
			ans.push_back(nums[i-1]);
		}
		if(nums[n-3]>0)ans.push_back(-1*(abs(nums[n-1])+abs(nums[n-2])));
		else ans.push_back((abs(nums[n-1])+abs(nums[n-2])));
		if(nums[n-2]<0)ans.push_back(-1*abs(nums[n-3]));
		else ans.push_back(abs(nums[n-3]));
		if(nums[n-1]<0)ans.push_back(-1*abs(nums[n-3]));
		else ans.push_back(abs(nums[n-3]));
		
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
