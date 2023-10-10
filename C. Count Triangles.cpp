// Problem: C. Count Triangles
// Contest: Codeforces - Codeforces Round 643 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1355/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	bool pasa=0;
	int i,j;
	for(i=a;i<=b;i++){
		for(j=b;j<=c;j++){
			if(i+j>c){
				pasa=1;
				break;
			}
		}
		if(pasa)break;
	}
	int ans=0;
	int mini=j;
	while(i+mini>c)
	for(j=mini;j<=c;j++){
		ans+=b-i+1;
	}
	
	
	cout<<ans<<"\n";
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
