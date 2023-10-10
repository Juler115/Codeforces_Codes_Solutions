// Problem: C. Vampiric Powers, anyone?
// Contest: Codeforces - Codeforces Round 882 (Div. 2)
// URL: https://codeforces.com/contest/1847/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
		int n;
		cin>>n;
		vector<int>nums(n);
		for(int i=0;i<n;i++){
			cin>>nums[i];
		}
		int ans=nums[0],j=0;
		int maxi=*max_element(nums.begin(),nums.end());
		for(int i=1;i<n;i++){
			if(maxi<=ans){
				maxi=ans;
				j=i;
			}
			ans^=nums[i];
		}
		ans=maxi;
		for(int i=0;i<j;i++){
			ans^=nums[i];
			if(maxi<=ans){
				maxi=ans;
			}
		}
		//cout<<j<<" ";
		cout<<maxi<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
