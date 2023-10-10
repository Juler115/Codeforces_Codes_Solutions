// Problem: C. Longest Simple Cycle
// Contest: Codeforces - Educational Codeforces Round 103 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1476/C
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
		int n;
		cin>>n;
		vector<int>l(n),a(n),b(n);
		for(int i=0;i<n;i++)cin>>l[i];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		
		int ans=0,aux=0;
		aux+=abs(b[1]-a[1])+1;
		for(int i=2;i<n;i++){
			//cout<<aux<<" ";
			ans=max(aux+l[i-1],ans);
			if(a[i]==b[i])aux=1;
			else{
				aux+=(l[i-1]-(max(a[i],b[i])-min(a[i],b[i]))+1);
			}
			//cout<<ans<<"\n";
		}
		ans=max(aux+l[n-1],ans);
		aux=l[n-1];
		for(int i=n-1;i>=2;i--){
			//cout<<aux<<" ";
			ans=max(aux+l[i-1],ans);
			if(a[i]==b[i])aux=1;
			else{
				aux+=(l[i-1]-(max(a[i],b[i])-min(a[i],b[i]))+1);
			}
			//cout<<ans<<"\n";
		}
		ans=max(ans,aux+abs(b[1]-a[1])+1);
		//cout<<aux<<" ";
		cout<<ans<<"\n";
	}
	
	return 0;
}

