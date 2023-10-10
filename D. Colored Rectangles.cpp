// Problem: D. Colored Rectangles
// Contest: Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1398/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef vector<int> v1d;
typedef vector<v1d> v2d;
typedef vector<v2d> v3d;
v3d dp(202, v2d(202, v1d(202, 0)));

int a,b,c;
vector<int>as,bs,cs;

int findi(int i, int j, int k){
	if(dp[i][j][k] !=0)return dp[i][j][k];
	int ans=0;
	if(i<a && j<b){
		ans=max(ans,findi(i+1,j+1,k)+as[i]*bs[j]);
	}
	if(i<a && k<c){
		ans=max(ans,findi(i+1,j,k+1)+as[i]*cs[k]);
	}
	if(j<b && k<c){
		ans=max(ans,findi(i,j+1,k+1)+bs[j]*cs[k]);
	}
	return dp[i][j][k]=ans;
}


void solve(){
	cin>>a>>b>>c;
	as.resize(a);
	bs.resize(b);
	cs.resize(c);
	for(int i=0;i<a;i++)cin>>as[i];
	for(int i=0;i<b;i++)cin>>bs[i];
	for(int i=0;i<c;i++)cin>>cs[i];
	sort(as.begin(),as.end(),greater<int>());
	sort(bs.begin(),bs.end(),greater<int>());
	sort(cs.begin(),cs.end(),greater<int>());
	cout<<findi(0,0,0);	
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
