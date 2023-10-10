// Problem: B2. K for the Price of One (Hard Version)
// Contest: Codeforces - Codeforces Round 610 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1282/B2
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,p,k;
	cin>>n>>p>>k;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	vector<int>dp(k);
	dp[0]=0;
	for(int i=1;i<k;i++){
		dp[i]=dp[i-1]+nums[i-1];
	}
	int ans=0;
	//for(auto a:dp)cout<<a<<" ";
	//cout<<"\n";
	for(int i=n;i>0;i--){
		if(nums[i-1]<= p){
			int aux=p,aux2=0;
			int j=i;
			while(j>=k){
				if(nums[j-1]>aux)break;
				aux-=nums[j-1];
				aux2+=k;
				j-=k;
			}
			//cout<<aux2<<" ";
			if(aux>=dp[1] && j>0){
				for(int h=j;h>0;h--){
					if(dp[h]<=aux){
						aux2+=h;
						break;
					}
				}
			}
			ans=max(ans,aux2);
		}
	}
	cout<<ans<<"\n";
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
