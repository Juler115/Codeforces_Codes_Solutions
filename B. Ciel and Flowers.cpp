// Problem: B. Ciel and Flowers
// Contest: Codeforces - Codeforces Round 190 (Div. 2)
// URL: https://codeforces.com/problemset/problem/322/B
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
	int r,g,b;
	cin>>r>>g>>b;
	vector<int>nums;
	nums.push_back(r);
	nums.push_back(g);
	nums.push_back(b);
	sort(nums.begin(),nums.end());
	int aux=0,ans=0;
	for(int i=0;i<=nums[0] && i<3;i++){
		aux=i;
		aux+=(nums[0]-i)/3;
		aux+=(nums[1]-i)/3;
		aux+=(nums[2]-i)/3;
		ans=max(ans,aux);
	}
	cout<<ans<<"\n";
	
	return 0;
}
