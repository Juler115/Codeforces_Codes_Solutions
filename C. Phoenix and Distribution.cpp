// Problem: C. Phoenix and Distribution
// Contest: Codeforces - Codeforces Round 638 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1348/C
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
		int n,k;
		cin>>n>>k;
		vector<char>s(n);
		for(int i=0;i<n;i++)cin>>s[i];
		sort(s.begin(),s.end());
		if(s[0]!=s[k-1]){
			cout<<s[k-1];
		}
		else if(s[k]!=s[n-1]){
			cout<<s[0];
			for (int i=k;i<n;i++)
      			cout<<s[i];
		}
		else{
			cout<<s[0];
			for (int i=0;i<(n-k+k-1)/k;i++)
      			cout<<s[n-1];
		}
		cout<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
