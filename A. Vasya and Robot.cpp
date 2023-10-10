// Problem: A. Vasya and Robot
// Contest: Codeforces - Codeforces Round 206 (Div. 1)
// URL: https://codeforces.com/problemset/problem/354/A
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
    ios_base::sync_with_stdio(false);
	int n,l,r,ql,qr;
	cin>>n>>l>>r>>ql>>qr;
	int sum1=0,sum2=0,ans=0;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i],sum1+=l*nums[i],sum2+=r*nums[i];
	sum1+=(n-1)*ql;
	sum2+=(n-1)*qr;
	ans=min(sum1,sum2);
	bool change=1;
	sum1=sum2;
	int cant=n-1;
	sum1-=qr*2;
	cant-=2;
	for(int i=0;i<n-1;i++){
		if(i>(n)/2)change=0;
		sum1-=nums[i]*r;
		sum1+=nums[i]*l;
		ans=min(ans,sum1);
		if(change && cant>0)sum1-=qr;
		else sum1+=ql;
		//cout<<sum1<<"\n";
	}
	cout<<ans<<"\n";
	
	
	return 0;
}
