// Problem: A. Counting Kangaroos is Fun
// Contest: Codeforces - Codeforces Round 219 (Div. 1)
// URL: https://codeforces.com/problemset/problem/372/A
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
	int n;
	cin>>n;
	if(n==1){
		cout<<1;
		return 0;
	}
	vector<int>kan(n);
	for(int i=0;i<n;i++)cin>>kan[i];
	sort(kan.begin(),kan.end(),greater<int>());
	int i=0,j=n/2,ans=n;
	while(j<n){
		if(kan[i]>=kan[j]*2){
			ans--;
			kan[j]=-1;
			i++;
			while(kan[i]==-1)i++;
		}
		j++;
	}
	cout<<ans<<"\n";
	
	return 0;
}
