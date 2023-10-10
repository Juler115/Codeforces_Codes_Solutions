// Problem: A. Array and Peaks
// Contest: Codeforces - Divide by Zero 2021 and Codeforces Round 714 (Div. 2)
// URL: https://codeforces.com/contest/1513/problem/A
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
		int n,k;
		cin>>n>>k;
		if(k>=(n+1)/2&& k!=0){
			cout<<-1<<"\n";
			continue;
		}
		else if(k==0){
			for(int i=1;i<=n;i++){
				cout<<i<<" ";
			}
			cout<<"\n";
			continue;
		}
		cout<<1<<" ";
		int j=0,i=0;
		for(i=n-k+1,j=2;i<=n;i++,j++){
			cout<<i<<" "<<j<<" ";
		}
		while(j<n-k+1){
			cout<<j<<" ";
			j++;
		}
		cout<<"\n";
	}
	
	return 0;
}
