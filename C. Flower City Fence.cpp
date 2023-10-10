// Problem: C. Flower City Fence
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/contest/1862/problem/C
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
	if(nums[0]>n){
		cout<<"NO\n";
		return;
	}
	vector<int>ans(nums[0]+10,0);
	for(int i=0;i<n;i++){
		ans[0]++;
		ans[nums[i]]--;
	}
	int aux=0;
	for(int i=0;i<ans.size();i++){
		aux+=ans[i];
		ans[i]=aux;
	}
	bool pasa=1;
	for(int i=0;i<n;i++){
		if(ans[i]!=nums[i])pasa=0;
	}
	if(pasa)cout<<"YES\n";
	else cout<<"NO\n";
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
