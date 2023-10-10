// Problem: B. Max and Mex
// Contest: Codeforces - Codeforces Round 706 (Div. 2)
// URL: https://codeforces.com/contest/1496/problem/B
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		set<int>nums;
		int maxi=0,mex=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			maxi=max(maxi,x);
			nums.insert(x);
		}
		int j=0;
		for(auto a:nums)
		{
			if(a==mex){
				mex++;
				j++;
			}
			if(a>mex)break;
		}
		//cout<<maxi<<" "<<mex<<"\n";
		bool pasa=true;
		for(int i=0;i<k;i++)
		{
			if(mex==maxi+1)
			{
				cout<<nums.size()+k<<"\n";
				pasa=false;
				break;
			}
			int s=nums.size();
			int num=ceil(((double)maxi+(double)mex)/2.0);
			nums.insert(num);
			if(num==mex && mex>maxi)maxi=mex;
			if(nums.size()==s || num!=mex)break;
			else if(nums.size()==maxi)mex=maxi+1;
			else{
				for(auto it=nums.begin();it!=nums.end();++it)
				{
					int a=*it+j;
					if(a==mex){
						mex++;
						j++;
					}
					if(a>mex)break;
				}
			}
		}
		if(pasa)cout<<nums.size()<<"\n";
		
	}
	
	return 0;
}
