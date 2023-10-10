// Problem: A. New Year Candles
// Contest: Codeforces - Good Bye 2013
// URL: https://codeforces.com/problemset/problem/379/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int a,b;
	cin>>a>>b;
	int ans=0,res=0;
	while(a>=1){
		ans+=a;
		if(res==0)res=a%b;
		else{
			a+=res;
			res=a%b;
		}
		//cout<<a<<" ";
		a/=b;
	}
	cout<<ans;
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
