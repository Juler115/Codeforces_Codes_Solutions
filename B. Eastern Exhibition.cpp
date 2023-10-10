// Problem: B. Eastern Exhibition
// Contest: Codeforces - Codeforces Round 703 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1486/B
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
		int n;
		cin>>n;
		vector<int>x(n);
		vector<int>y(n);
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		int anx=x[n/2]- x[(n-1)/2]+ 1;
		int any=y[n/2]- y[(n-1)/2]+ 1;
		cout<<anx*any<<"\n";
	}
	
	return 0;
}
