// Problem: C. Kuroni and Impossible Calculation
// Contest: Codeforces - Ozon Tech Challenge 2020 (Div.1 + Div.2, Rated, T-shirts + prizes!)
// URL: https://codeforces.com/problemset/problem/1305/C
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

inline int mod(int i, int n) {
    return (i % n + n) % n;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<int>nums(n);
	int ans=1,ceros=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		nums[i]=x;
		if(nums[i]==0)ceros++;
	}
	if(n>m){
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans*=abs(nums[i]-nums[j]);
			ans%=m;
		}
	}
	cout<<ans%m;
	
	return 0;
}
