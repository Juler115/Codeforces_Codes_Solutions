// Problem: C. Baby Ehab Partitions Again
// Contest: Codeforces - Codeforces Round 717 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1516/C
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<pair<int,int>>nums(n);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		nums[i]={x,i};
	}
	sort(nums.begin(),nums.end());
	int sum1=0,sum2=0;
	sum1=nums[n-2].first;
	sum2=nums[n-1].first;
	for(int i=n-3;i>=0;i--){
		if(sum2>sum1){
			sum1+=nums[i].first;
		}
		else{
			sum2+=nums[i].first;
		}
	}
	if(sum1==sum2){
		cout<<1<<"\n"<<nums[0].second+1<<"\n";
		return 0;
	}
	cout<<0;
	
	return 0;
}
