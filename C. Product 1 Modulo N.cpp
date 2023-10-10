// Problem: C. Product 1 Modulo N
// Contest: Codeforces - Codeforces Round 716 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1514/C
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

bool nums[100005];
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int multi=1;
	for(int i=1;i<n;i++){
		if(__gcd(n,i)==1){
			nums[i]=1;
			multi=(multi*i)%n;
		}
	}
	if(multi!=1)nums[multi]=0;
	cout<<count(nums+1,nums+n,1)<<"\n";
	for(int i=1;i<n;i++){
		if(nums[i]){
			cout<<i<<" ";
		}
	}
		
	return 0;
}
