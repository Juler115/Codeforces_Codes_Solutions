// Problem: B. Hamon Odyssey
// Contest: Codeforces - Codeforces Round 882 (Div. 2)
// URL: https://codeforces.com/contest/1847/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums(n),aux;
		for(int i=0;i<n;i++)cin>>nums[i];
		int mini=nums[0];
		for(int i=1;i<n;i++){
			if(mini+nums[i]>(mini&nums[i]) && mini!=0){
				mini=mini&nums[i];
			}
			else{
				aux.push_back(mini);
				mini=nums[i];
			}
		}
		aux.push_back(mini);
		mini=aux[0];
		int ans=aux.size();
		for(int i=1;i<aux.size();i++){
			if(aux[i]==mini)continue;
			if((aux[i]&mini)<mini+aux[i]){
				ans--;
				mini=mini&aux[i];
			}
		}
		cout<<ans<<"\n";
		//for(auto a:aux)cout<<a<<" ";
		//cout<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
