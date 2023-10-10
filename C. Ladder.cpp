// Problem: C. Ladder
// Contest: Codeforces - Codeforces Round 171 (Div. 2)
// URL: https://codeforces.com/problemset/problem/279/C
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
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	vector<pair<int,int>>range;
	int x=-1,l=0,r=0;
	for(r=1;r<n;r++){
		if(nums[r-1]>nums[r]){
			x=r;
		}
		else if(nums[r-1]<nums[r] && x!=-1){
			range.push_back({l,r-1});
			l=x;
			x=-1;
		}
	}
	range.push_back({l,r-1});
	vector<int>valid(n+1);
	for(auto a:range){
		for(int i=a.f;i<=a.s;i++){
			valid[i]=a.s+1;
		}
	}
	//for(auto a:valid)cout<<a<<" ";
	//cout<<"\n";
	while(m--){
		cin>>l>>r;
		//cout<<l<<" "<<r<<"\n";
		bool pasa=0;
		if(valid[l-1]>=r)pasa=1;
		cout<<(pasa?"Yes\n":"No\n");
	}
	
	return 0;
}
