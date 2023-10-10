// Problem: D. Sequence and Swaps
// Contest: Codeforces - Educational Codeforces Round 99 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1455/D
// Memory Limit: 512 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,x;
	cin>>n>>x;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	int ans=0;
	vector<int>sor=nums;
	sort(sor.begin(),sor.end());
	if(nums==sor){
		cout<<0<<"\n";
		return;
	}
	int maxi=0,aux=0;
	for(int i=0;i<n;i++){
		if(nums[i]!=sor[i]){
			if(nums[i]>aux){
				maxi=i;
				aux=nums[i];
			}
		}
	}
	sor.erase(find(sor.begin(),sor.end(),aux));
	sor.push_back(x);
	sort(sor.begin(),sor.end());
	/*for(auto a:nums)cout<<a<<" ";
	cout<<"\n";
	for(auto a:sor)cout<<a<<" ";
	cout<<"\n";*/
	for(int i=0;i<n;i++){
		if(nums[i]<sor[i]){
			cout<<-1<<"\n";
			return;
		}
		else if(nums[i]!=sor[i])ans++;
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
