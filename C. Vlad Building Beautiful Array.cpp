// Problem: C. Vlad Building Beautiful Array
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/C
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
		vector<int>nums(n);
		bool uno=false;
		int pares=0,impares=0,mini=INT_MAX,mini2=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>nums[i];
			if(nums[i]==1){
				uno=true;
			}
			if(nums[i]%2!=0){
				impares++;
				mini=min(mini,nums[i]);
			}else{
				pares++;
				mini2=min(mini2,nums[i]);
			}
		}
		if(uno || pares==n || impares==n || mini<mini2){
			cout<<"YES\n";
		}else cout<<"NO\n";
			
	}
	
	return 0;
}
