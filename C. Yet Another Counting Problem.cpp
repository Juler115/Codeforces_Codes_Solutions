// Problem: C. Yet Another Counting Problem
// Contest: Codeforces - Educational Codeforces Round 86 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1342/C
// Memory Limit: 256 MB
// Time Limit: 3500 ms
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
		int a,b;
		cin>>a>>b;
		int eureka=a*b;
		vector<int>nums(40043);
		nums[0]=0;
		for(int i=1;i<=eureka;i++)
		{
			nums[i]=nums[i-1];
			if((i%a)%b!=(i%b)%a)nums[i]++;
		}
		int q;
		cin>>q;
		while(q--){
			int l,r;
			cin>>l>>r;
			int ans=0;
			l--;
			ans+=nums[eureka] * (r/eureka) + nums[r%eureka];
			ans-=nums[eureka] * (l/eureka) + nums[l%eureka];
			cout<<ans<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
