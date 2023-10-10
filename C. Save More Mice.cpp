// Problem: C. Save More Mice
// Contest: Codeforces - Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>rats(k);
	for(int i=0;i<k;i++){
		cin>>rats[i];
	}
	int ans=0;
	int sal=n;
	sort(rats.begin(),rats.end(),greater<int>());
	for(int i=0;i<k;i++){
		if(sal>n-rats[i]){
			sal-=n-rats[i];
			ans++;
		}
	}
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
