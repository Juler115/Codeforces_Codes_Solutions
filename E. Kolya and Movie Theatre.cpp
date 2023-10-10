// Problem: E. Kolya and Movie Theatre
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/contest/1862/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,m,d;
	cin>>n>>m>>d;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	multiset<int>ml;
	int ans=0,sum=0;
	for(int i=0;i<n;i++){
		if(nums[i]>0){
			ml.insert(nums[i]);
			sum+=nums[i];
			if(ml.size()>m){
				sum-=*ml.begin();
				ml.erase(ml.find(*ml.begin()));
			}
		}
		ans=max(ans,sum-((i+1)*d));
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
