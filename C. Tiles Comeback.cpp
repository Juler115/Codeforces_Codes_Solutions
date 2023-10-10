// Problem: C. Tiles Comeback
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/contest/1851/problem/C
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
		vector<int>col(n);
		for(int i=0;i<n;i++)cin>>col[i];
		if(col[0]==col[n-1]){
			int ans=k;
			for(int i=0;i<n;i++){
				if(col[0]==col[i])ans--;
			}
			if(ans<=0)cout<<"YES\n";
			else cout<<"NO\n";
		}
		else{
			int ans=k,i=0;
			for(;i<n;i++){
				if(col[0]==col[i])ans--;
				if(ans==0)break;
			}
			if(ans!=0)cout<<"NO\n";
			else{
				ans=k;
				for(;i<n;i++){
					if(col[n-1]==col[i])ans--;
		     	}
		     	if(ans<=0)cout<<"YES\n";
				else cout<<"NO\n";
			}
			
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
