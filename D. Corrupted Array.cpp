// Problem: D. Corrupted Array
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
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
		n+=2;
		vector<int>nums(n);
		set<int>exis;
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>nums[i];
			exis.insert(nums[i]);
		}
		sort(nums.begin(),nums.end());
		for(auto a:nums){
			sum+=a;
		}
		exis.erase(exis.find(nums[n-1]));
		//for(auto a:exis)cout<<a<<" ";
		//cout<<"\n"; 
		sum-=nums[n-1];
		if(exis.find(abs(nums[n-1]-sum))!=exis.end()){
			int malo=abs(nums[n-1]-sum);
			for(int i=0;i<n-1;i++){
				if(malo==nums[i]){
					malo=-1;
				}
				else{
					cout<<nums[i]<<" ";
				}
			}
		}
		else if(abs(sum-nums[n-2])==nums[n-2]){
			for(int i=0;i<n-2;i++){
				cout<<nums[i]<<" ";
			}
		}
		else{
			cout<<-1;
		}
		cout<<"\n";
	}
	
	return 0;
}
