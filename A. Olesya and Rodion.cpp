// Problem: A. Olesya and Rodion
// Contest: Codeforces - Codeforces Round 324 (Div. 2)
// URL: https://codeforces.com/problemset/problem/584/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,t;
	cin>>n>>t;
	if(t==10 && n==1){
		cout<<-1;
		return;
	}
	vector<int>ans;
	ans.push_back(t);
	if(t==10)while(ans.size()!=n-1)ans.push_back(0);
	else while(ans.size()!=n)ans.push_back(0);
	for(auto a:ans)cout<<a;
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
