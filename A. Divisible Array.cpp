// Problem: A. Divisible Array
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/contest/1828/problem/0
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
		vector<int>ans;
		int sum=0;
		for(int i=1;i<=n;i++)ans.push_back(i),sum+=i;
		if(sum%n==0){
			for(auto a:ans)cout<<a<<" ";
		}else{
			ans[0]+=sum%n;
			for(auto a:ans)cout<<a<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
