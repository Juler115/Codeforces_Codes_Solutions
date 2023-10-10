// Problem: D. Ice Cream Balls
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/contest/1862/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int>ans;
int calc(int x){
	return (x*(x-1)/2);
}

void solve(){
	int n;
	cin>>n;
	int l=2,r=1e10;
	while(l<=r){
		int mid=(l+r)/2;
		if(calc(mid)<n){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	int mini=r+(n-calc(r));
	for(int i=r;calc(i)<=n;i++){
		mini=min(mini,i+(n-calc(i)));
	}
	cout<<mini<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
