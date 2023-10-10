// Problem: A. Sequence with Digits
// Contest: Codeforces - Codeforces Round 643 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1355/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int func(int a)
{
	int maxi=0,mini=10;
	int aux=a;
	while(aux)
	{
		maxi=max(maxi,aux%10);
		mini=min(mini,aux%10);
		aux/=10;
	}
	return (mini*maxi);
	
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int a,k;
		cin>>a>>k;
		int x=a,y=0;
		k--;
		while(k--)
		{
			y=func(x);
			if(y==0)break;
			x+=y;	
		}
		cout<<x<<"\n";
	}
	
	return 0;
}
