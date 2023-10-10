// Problem: E. Special Elements
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/E
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
//#define int long long int
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
		set<int>fi;
		for(int i=0;i<n;i++)cin>>nums[i],fi.insert(nums[i]);
		int ans=0;
		for(int i=0;i<n;i++){
			int sum=nums[i];
			if(fi.size()==0)break;
			for(int j=i+1;j<n;j++){
				if(fi.size()==0)break;
				sum+=nums[j];
				if(fi.find(sum)!=fi.end()){
					ans+=count(nums.begin(),nums.end(),sum);
					fi.erase(sum);
				}
			}
		}
		cout<<ans<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
