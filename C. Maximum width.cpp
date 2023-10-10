// Problem: C. Maximum width
// Contest: Codeforces - Codeforces Round 704 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1492/C
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	vector<int>s1,s2;
	vector<bool>used(27);
	for(auto a:t)used[a-'a']=1;
	int x;
	s+="%";
	t+="%";
	for(int i=0;i<=n;i++){
		x=0;
		for(int j=i;j<=n;j++){
			if(s[i]==s[j])x++;
			else{
				if(used[s[i]-'a'])s1.push_back(x);
				i=j-1;
				break;
			}
		}
	}
	for(int i=0;i<=m;i++){
		x=0;
		for(int j=i;j<=m;j++){
			if(t[i]==t[j])x++;
			else{
				i=j-1;
				s2.push_back(x);
				break;
			}
		}
	}
	/*
	for(auto a:s1)cout<<a<<" ";
	cout<<"\n";*/
	int ans=0,p=0,l=0,r=0;
	for(int i=0;i<s1.size();i++){
		ans=max(ans,p+(s1[i]-(s2[i]-1)));
		ans=max(ans,s1[i]-s2[i]+p-r);
		ans=max(ans,s2[i]+p-l);
		l=s1[i]-s2[i];
		r=s2[i];
		p+=s1[i];
	}
	cout<<ans;
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
