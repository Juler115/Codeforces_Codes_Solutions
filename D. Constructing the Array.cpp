// Problem: D. Constructing the Array
// Contest: Codeforces - Codeforces Round 642 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1353/D
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

#define mk make_pair
#define s second
#define f first

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
		vector<int>ans(n);
		int l=0,r=0,size=0;
		priority_queue<pair<int,pair<int,int>>>q;
		int i=0;
		q.push(mk(n,mk(-0,n-1)));
		while(!q.empty()){
			size=-q.top().f;
			l=-1*q.top().s.f;
			r=q.top().s.s;
			q.pop();
			
			if(l>r)continue;
			i++;
			int mid=(l+r)/2;
			ans[mid]=i;
			q.push(mk(mid-l+1,mk(-1*l,mid-1)));
			q.push(mk(r-mid+1,mk(-1*(mid+1),r)));
			
		}
		for(auto a:ans)cout<<a<<" ";
		cout<<"\n";
		
	}
	
	return 0;
}
