// Problem: C. Number of Pairs
// Contest: Codeforces - Codeforces Round 725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,l,r;
	cin>>n>>l>>r;
	vector<int>nums;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x<r)nums.push_back(x);
	}
	reverse(nums.begin(),nums.end());
	multiset<int>aval;
	int ans=0;
	for(int i=0;i<nums.size();i++){
		int a,b;
		if(nums[i]>=l)a=0;
		else a=l-nums[i];
		b=r-nums[i];
		auto it1=aval.lower_bound(a);
		auto it2=aval.upper_bound(b);
		if(it1!=aval.end()){
			int dis1=it1-aval.begin();
			int dis2=it2-aval.begin();
			ans+=dis2-dis1+1;
		}
		aval.insert(nums[i]);
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
