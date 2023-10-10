// Problem: D2. Equalizing by Division (hard version)
// Contest: Codeforces - Codeforces Round 582 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1213/D2
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
	int n,k;
	cin>>n>>k;
	vector<priority_queue<int,vector<int>,greater<int>>>nums(2e5+5);
	int maxi=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		maxi=max(maxi,x);
		int movi=0;
		while(x>0){
			nums[x].push(movi);
			movi++;
			x/=2;
		}
	}
	int ans=INT_MAX;
	for(int i=1;i<=maxi;i++){
		int aux=0,auxk=k;
		while(auxk--){
			if(nums[i].size()==0)goto fin;
			aux+=nums[i].top();
			nums[i].pop();
		}
		ans=min(aux,ans);
		fin:;
	}
	cout<<ans<<"\n";
	
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
