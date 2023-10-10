// Problem: C. Game On Leaves
// Contest: Codeforces - Codeforces Round 646 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1363/C
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
		int n,k;
		cin>>n>>k;
		int pegados=0;
		for(int i=1;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			if(x==k || y==k)pegados++;
		}
		//cout<<n<<" "<<k<<"\n";
		int ans=n-1;
		if(pegados==1)ans=1;
		else if(pegados==0)ans=1;
		//cout<<pegados<<"\n";
		cout<<((ans%2==0)?"Ashish\n":"Ayush\n");
	}
	
	return 0;
}
