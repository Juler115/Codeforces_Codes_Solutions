// Problem: F1. Guess the K-th Zero (Easy version)
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1520/F1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(int n){
	int k;
	cin>>k;
	
	int l=1,r=n;
	while(l<=r){
		if(l==r){
			cout<<"! "<<l<<"\n";
			cout.flush();
			return;
		}
		else{
			int mid=(l+r)/2;
			int c=mid-l+1;
			cout<<"? "<<l<<" "<<mid<<'\n';
			cout.flush();
			int unos=0,ceros=0;
			cin>>unos;
			ceros=c-unos;
			//cout<<r<<"  ";
			if(ceros>=k){
				r=mid;
			}
			else{
				l=mid+1;
				k-=ceros;
			}
		}
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int n,t;
	cin>>n>>t;
	while(t--)
		solve(n);
	
	return 0;
}
