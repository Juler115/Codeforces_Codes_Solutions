// Problem: B. RPG Protagonist
// Contest: Codeforces - Educational Codeforces Round 94 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1400/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N=2e5+1;

void solve(){
	int p,f;
	cin>>p>>f;
	int c1,c2;
	cin>>c1>>c2;
	int s,w;
	cin>>s>>w;
	int s1,s2,w1,w2;
	if(w<s){
		swap(s,w);
		swap(c1,c2);
	}
	int ans=0;
	for(int s1=0;s1<=min(c1,p/s);s1++){
		w1=min(c2,(p-s1*s)/w);
		s2=min(c1-s1,f/s);
		w2=min(c2-w1,(f-s2*s)/w);	
		ans=max(ans,s1+s2+w1+w2);
	}
	cout<<ans<<"\n";
	
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
