// Problem: B. Catch Overflow!
// Contest: Codeforces - Educational Codeforces Round 66 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1175/B
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
	int ans=0,fore=1;
	vector<int>fors,fort;
	while(n--){
		string s;
		cin>>s;
		if(s=="add"){
			for(auto a:fort)ans+=1*a;
			ans+=1*fore;
		}
		else if(s=="for"){
			int x;
			cin>>x;
			fors.push_back(x);
			fore*=x;
			if(fore>=4294967296){
				fort.push_back(fore);
				fore=1;
			}
		}
		else{
			if(fore==1 && !fort.empty()){
				fore*=fort.back();
				fort.pop_back();
			}
			fore/=fors.back();
			fors.pop_back();
		}
	}
	if(ans>=4294967296)cout<<"OVERFLOW!!!";
	else cout<<ans;
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
