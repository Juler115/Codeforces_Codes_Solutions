// Problem: F - LCS
// Contest: AtCoder - Educational DP Contest
// URL: https://atcoder.jp/contests/dp/tasks/dp_f
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
	string s,t;
	cin>>s>>t;
	if(s.size()>t.size()){
		string aux=s;
		s=t;
		t=aux;
	}
	vector<pair<int,string>>dp(s.size(),{0,""});
	for(int i=0;i<s.size();i++)dp[i]={0,dp[i].second+s[i]};
	for(int i=0;i<s.size();i++){
		int aux=t.find(dp[i].second[dp[i].second.size()-1]),aux2=0;
		if(aux==string::npos)continue;
		else dp[i]=max({1,dp[i].second},dp[i]);
		//cout<<aux<<" ";					
		for(int j=i+1;j<s.size();j++){
			aux2=t.find(s[j],aux+1);
			if(aux2==string::npos)continue;
			if(dp[j].first<dp[i].first+1){
				dp[j]={dp[i].first+1,dp[i].second+s[j]};
			}
		}
		for(auto a:dp)cout<<a.first<<" "<<a.second<<"\n";
	}
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
