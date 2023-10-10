// Problem: A. Spy Detected!
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/A
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
		int n;
		cin>>n;
		map<int,vector<int>>nums;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			nums[x].push_back(i+1);
		}
		for(auto a:nums){
			if(a.second.size()==1){
				cout<<a.second[0]<<"\n";
				break;
			}
		}
	}
	
	return 0;
}
