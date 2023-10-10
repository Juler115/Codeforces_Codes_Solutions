// Problem: B. Hills And Valleys
// Contest: Codeforces - Codeforces Round 695 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1467/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
//#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		int inti=0,maxi=1;
		for(int i=1;i<n-1;i++){
			if(nums[i-1]<nums[i] && nums[i+1]<nums[i]){
				inti++;
			}
			else if(nums[i-1]>nums[i] && nums[i+1]>nums[i]){
				inti++;
			}
		}
		for(int i=1;i<n-1;i++){
			bool prih=(nums[i-1]<nums[i] && nums[i+1]<nums[i]);
			bool priv=(nums[i-1]>nums[i] && nums[i+1]>nums[i]);
			bool sech=(i+2<n && nums[i]<nums[i+1] && nums[i+2]<nums[i+1]);
			bool secv=(i+2<n && nums[i]>nums[i+1] && nums[i+2]>nums[i+1]);
			bool terh=(i+3<n && nums[i+1]<nums[i+2] && nums[i+3]<nums[i+2]);
			bool terv=(i+3<n && nums[i+1]>nums[i+2] && nums[i+3]>nums[i+2]);
			if((prih && secv && terh) || (priv && sech && terv)){
				maxi=max(maxi,3);
			}
			else if((prih && secv) || (priv && sech)){
				maxi=max(maxi,2);
			}
		}
		//cout<<inti<<"\n";
		cout<<(inti>maxi?inti-maxi:0)<<"\n";
	}
	
	return 0;
}
