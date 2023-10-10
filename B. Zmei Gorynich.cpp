// Problem: B. Zmei Gorynich
// Contest: Codeforces - Educational Codeforces Round 72 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1217/B
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
		int n,x;
		cin>>n>>x;
		vector<int>gana;
		int maxi=0;
		for(int i=0;i<n;i++){
			int b,h;
			cin>>b>>h;
			gana.push_back(b-h);
			maxi=max(maxi,b);
		}
		sort(gana.begin(),gana.end(),greater<int>());
		x-=maxi;
		int ans=1;
		if(x<=0)cout<<1<<"\n";
		else if(gana[0]<=0 && x>0){
			cout<<-1<<"\n";
		}
		else{
			ans+=(x+gana[0]-1)/gana[0];
			cout<<ans<<"\n";
		}
		
	}
	
	return 0;
}
