// Problem: A. Shifting Stacks
// Contest: Codeforces - Codeforces Round 703 (Div. 2)
// URL: https://codeforces.com/contest/1486/problem/A
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
		int aux=0;
		bool pasa=true;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			aux+=x;
			aux-=i;
			//cout<<aux<<" ";
			if(aux<0)
			{
				pasa=false;
			}
		}
		if(pasa)cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
