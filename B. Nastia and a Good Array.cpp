// Problem: B. Nastia and a Good Array
// Contest: Codeforces - Codeforces Round 720 (Div. 2)
// URL: https://codeforces.com/contest/1521/problem/B
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


void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		auto it= min_element(nums.begin(), nums.end());
		if(it-nums.begin()+1==1){cout<<n-1<<"\n";}
		else
		{	
			cout<<n<<"\n";
			cout<<it-nums.begin()+1<<" "<<1<<" "<<*it+1<<" "<<*it<<"\n";}
		for(int i=2;i<=n;i++){
			cout<<1<<" "<<i<<" "<<*it<<" "<<*it+i-1<<"\n";
		}
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
