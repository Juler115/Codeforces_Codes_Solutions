// Problem: B. Permutation Swap
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/contest/1828/problem/B
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
		vector<int>nums(n),dis;
		for(int i=0;i<n;i++)cin>>nums[i];
		for(int j=0;j<n;j++){
			if(nums[j]==(j+1))continue;
			dis.push_back(abs(nums[j]-(j+1)));
		}
		int ans=0;
		for(auto a:dis){
			ans=__gcd(ans,a);
		}
		cout<<ans<<"\n";	
	}
	
	return 0;
}
