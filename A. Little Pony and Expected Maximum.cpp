// Problem: A. Little Pony and Expected Maximum
// Contest: Codeforces - Codeforces Round 259 (Div. 1)
// URL: https://codeforces.com/problemset/problem/453/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long double

int n,m;
int ans=0,cant=1;
int powr(int a,long long  b)
	{
		//return a;
		int res=1;
		while(b){
			if(b&1) res *=a;
			a*=a;
			b/=2;
		}
		return res;
	}

void solve(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		ans+=i*(powr(i/m,n)-powr((i-1)/m,n));
	}
	cout<<ans<<"\n";
}

int32_t main()
{	
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(15);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
