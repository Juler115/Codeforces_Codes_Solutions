// Problem: A. Not a Substring
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1860/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
 
void solve(){
	string s;
	cin>>s;
	if(s=="()"){
		cout<<"NO\n";
		return;
	}
	string ans1,ans2;
	for(int i=0;i<s.size();i++){
		ans1+="()";
	}
	ans2+=string(s.size(),'(');
	ans2+=string(s.size(),')');
	bool pasa=1;
	for(int i=0;i<s.size();i++){
		string aux=ans1.substr(i,s.size());
		if(aux==s){
			pasa=0;
		}
	}
	cout<<"YES\n";
	cout<<(pasa?ans1:ans2)<<"\n";
	
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