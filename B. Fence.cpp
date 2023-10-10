// Problem: B. Fence
// Contest: Codeforces - Codeforces Round 211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
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
	int n,k;
	cin>>n>>k;
	vector<int>h(n);
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>h[i];
		if(i<k)sum+=h[i];
	}
	int j=0,ans=sum,s=1;
	for(int i=k;i<n;i++,j++){
		sum=sum+h[i]-h[j];
		//cout<<sum<<" ";
		if(ans>sum){
			ans=min(ans,sum);
			s=j+2;
		}
	}
	cout<<s;
	
	return 0;
}
