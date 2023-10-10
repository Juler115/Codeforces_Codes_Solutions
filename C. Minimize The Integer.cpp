// Problem: C. Minimize The Integer
// Contest: Codeforces - Educational Codeforces Round 75 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1251/C
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
		string s;
		cin>>s;
		string ans;
		queue<char>par,impar;
		for(auto a:s)if((a-'0')%2==0)par.push(a);else impar.push(a);
		while(!par.empty() || !impar.empty())
		{
			if(par.empty())ans+=impar.front(),impar.pop();
			else if(impar.empty())ans+=par.front(),par.pop();
			else{
				if(impar.front()<par.front()){
					ans+=impar.front();
					impar.pop();
				}
				else{
					ans+=par.front();
					par.pop();
				}
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
