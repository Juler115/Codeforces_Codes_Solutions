// Problem: D. Minimal Height Tree
// Contest: Codeforces - Educational Codeforces Round 97 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1437/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define mk make_pair
#define s second
#define f first

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		queue<pair<int,int>>q;
		q.push(mk(1,0));
		int i=1;
		int ans=0;
		int ante=1;
		while(!q.empty()){
			auto x=q.front();
			q.pop();
			for(;i<n;i++){
				if(nums[i]>ante){
					//cout<<nums[i]<<" ";
					ante=nums[i];
					q.push(mk(nums[i],x.s+1));
					ans=max(ans,x.s+1);
				}
				else{
					ante=0;
					break;
				}
			}
		}
		cout<<ans<<"\n";
		
	}
	
	return 0;
}
