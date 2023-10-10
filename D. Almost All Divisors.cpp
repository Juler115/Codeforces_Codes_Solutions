// Problem: D. Almost All Divisors
// Contest: Codeforces - Codeforces Round 560 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1165/D
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

int lcm(int a,int b){
	return (a*b)/__gcd(a,b);
}
int inf=1e12;

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
		set<int>divi;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			divi.insert(x);
		}
		int ans=1;
		for(auto a:divi){
			//cout<<a<<" ";
			ans=lcm(ans,a);
			if(ans>inf || ans<0){
				ans=-1;break;
			}
		}
		if(ans==-1){
			cout<<ans<<"\n";
			continue;
		}
		if(divi.find(ans)!=divi.end())ans*=*divi.begin();
		set<int>compara;
		for(int i=2;i<=sqrt(ans);i++){
			if(ans%i==0)compara.insert(i);
		}
		for(auto a:compara){
			compara.insert(ans/a);
		}
		if(compara==divi)cout<<ans<<"\n";
		else cout<<-1<<"\n";
	}
	
	return 0;
}
