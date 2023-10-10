// Problem: B. Customising the Track
// Contest: Codeforces - Codeforces Round 730 (Div. 2)
// URL: https://codeforces.com/contest/1543/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	int cant=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cant+=x;
	}
	if(cant%n==0){
		cout<<0<<"\n";
	}
	else{
		int a=cant%n;
		cout<<(n-a)*a<<"\n";
	}
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
