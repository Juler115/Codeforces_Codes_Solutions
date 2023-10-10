// Problem: B. Meeting on the Line
// Contest: Codeforces - Codeforces Round 823 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1730/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int double
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define mk make_pair
#define s second
#define f first


void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int>>nums(n);
		int maxi=0,id=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			nums[i]={x,0};
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(maxi<x)id=i;
			maxi=max(x,maxi);
			nums[i]={nums[i].first,x};
		}
		sort(nums.begin(),nums.end());
		for(int i=0;i<n;i++){
			if(i==id)continue;
			if(nums[i].f>nums[id].f){
				int size=nums[id].s;
				while(nums[i].f>nums[id].f && size>0)nums[i].f--,size--;
			}
			else if(nums[i].f<nums[id].f){
				int size=nums[id].s;
				while(nums[i].f>nums[id].f && size>0)nums[i].f--,size--;
			}
		}
		cout<<(min_element(nums.begin(),nums.end())-max_element(nums.begin(),nums.end()))/2<<"\n";
		
		
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(7);
	solve();
	
	return 0;
}
