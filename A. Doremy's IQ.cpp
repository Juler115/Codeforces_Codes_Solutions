// Problem: A. Doremy's IQ
// Contest: Codeforces - Codeforces Round 808 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1707/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,q;
	cin>>n>>q;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	string ans(n,'0');
	int aux=0;
	for(int i=n-1;i>=0;i--){
		if(aux>=q && nums[i]>q)continue;
		if(nums[i]>aux){
			aux++;
		}
		ans[i]='1';
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
