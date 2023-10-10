// Problem: C. Killjoy
// Contest: Codeforces - Codeforces Round 671 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1419/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
		vector<int>nums(n);
		int iguales=0;
		int cambios=0;
		for(int i=0;i<n;i++){
			cin>>nums[i];
			if(nums[i]==k)iguales++;
			cambios+=nums[i]-k;
		}
		//cout<<cambios<<"\n";
		if(iguales==n)
		{
			cout<<0<<"\n";
		}
		else if(iguales>0)
		{
			cout<<1<<"\n";
		}
		else if(cambios==0)
		{
			cout<<1<<"\n";
		}
		else cout<<2<<"\n";
		
	}
	
	return 0;
}
