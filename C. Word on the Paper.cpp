// Problem: C. Word on the Paper
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/C
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		vector<string>dots(8);
		for(int i=0;i<8;i++)cin>>dots[i];
		string ans;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(dots[i][j]!='.'){
					for(int k=i;k<8;k++){
						if(dots[k][j]=='.')break;
						ans+=dots[k][j];
					}
					goto fin;
				}
			}
		}
		fin:;
		cout<<ans<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
