// Problem: A. Odd Selection
// Contest: Codeforces - Codeforces Round 646 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1363/A
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
		int n,x;
		cin>>n>>x;
		int par,impar;
		par=impar=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a%2==0)par++;
			else impar++;
		}
		if(x>par)x-=par;
		else x=1;
		if((x%2!=0 && impar>=x) || (x%2==0 && impar>x && par!=0)){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
	
	return 0;
}
