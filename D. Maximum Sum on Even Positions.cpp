// Problem: D. Maximum Sum on Even Positions
// Contest: Codeforces - Educational Codeforces Round 90 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1373/D
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
		vector<int>nums(n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>nums[i];
			if(i%2==0)sum+=nums[i];
		}
		int j=0,k=2,aux=sum;	
		while(k<=n){
			int auxs=aux;
			for(j=0;j<k;j++)
			{
				if(j%2!=0){
					auxs+=nums[j];
				}
				else{
					auxs-=nums[j];
					//cout<<nums[j]<<" ";
				}
				//cout<<auxs<<" ";
			}
			//cout<<"\n";
			sum=max(sum,auxs);
			for(int i=0;j<n;i++,j++)
			{
				if(i%2==0){
					auxs+=nums[i];
				}else{
					auxs-=nums[i];
				}
				if(j%2==0){
					auxs-=nums[j];
				}else{
					auxs+=nums[j];
				}
				sum=max(sum,auxs);
				//cout<<auxs<<"\n";
			}
			sum=max(sum,auxs);
			k+=2;
		}	
		cout<<sum<<"\n";
	}
	
	return 0;
}
