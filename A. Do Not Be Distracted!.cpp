// Problem: A. Do Not Be Distracted!
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/contest/1520/problem/A
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
	string s;
	cin>>s;
	if(n==1){
		cout<<"YES\n";
		return;
	}
	s+="[";
	vector<bool>tas(28,1);
	for(int i=1;i<=n;i++){
		int num=s[i-1]-'A';
		if(s[i-1]!=s[i] && tas[num])tas[num]=0;
		else if(s[i-1]!=s[i] && !tas[num]){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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
