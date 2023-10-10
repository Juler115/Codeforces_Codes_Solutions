// Problem: C. Adding Powers
// Contest: Codeforces - Educational Codeforces Round 83 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1312/C
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		bool pasa=true;
		int num=1;
		for(int i=0;i<n;i++){
			if(nums[i]!=0){
				if(nums[i]%num !=0)pasa=false;
			}
			num*=k;	
		}
		cout<<(pasa?"YES\n":"NO\n");
	}
	
	return 0;
}
