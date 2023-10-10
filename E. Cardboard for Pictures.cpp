// Problem: E. Cardboard for Pictures
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1850/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int check(vector<int>nums,int i,int c){
	int ans=0;
	for(auto a:nums){
		if(ans>c)return 1e18;
		ans+=(a+i)*(a+i);
	}
	return ans;
}


void solve(){
	
	int n,c;
	cin>>n>>c;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	int l=1,r=1e9;
	while(l<=r){
		int mid=(l+r)/2;
		int x=check(nums,mid,c);
		if(x==c){
			cout<<mid/2<<"\n";
			break;
		}
		else if(x<c){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	
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
