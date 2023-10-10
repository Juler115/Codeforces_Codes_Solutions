// Problem: C. Chocolate Bunny
// Contest: Codeforces - Codeforces Round 669 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1407/C
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
	int maxi=1;
	vector<int>ans(n+1);
	for(int i=2;i<=n;i++){
		int k1,k2;
		cout<<"? "<<maxi<<" "<<i<<"\n";
		cout.flush();
		cin>>k1;
		cout<<"? "<<i<<" "<<maxi<<"\n";
		cout.flush();
		cin>>k2;
		if(k1>k2)
		{
			ans[maxi]=k1;
			maxi=i;
		}
		else{
			ans[i]=k2;
		}
	}
	ans[maxi]=n;
	//cout<<maxi<<"\n";
	cout<<"! ";
	for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
	cout.flush();
	
	return 0;
}
