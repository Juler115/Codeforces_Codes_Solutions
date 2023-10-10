// Problem: A. Free Ice Cream
// Contest: Codeforces - Codeforces Round #359 (Div. 2)
// URL: https://codeforces.com/problemset/problem/686/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	long long n,x;
	cin>>n>>x;
	long long enojados=0;
	
	for(int i=0;i<n;i++)
	{
		char op;
		long long helados;
		
		cin>>op;
		if(op=='+')
		{
			cin>>helados;
			x+=helados;	
		}
		else
		{
			cin>>helados;
			if(x>=helados)
			{
				x-=helados;
			}
			else enojados++;
		}	
	}
	cout<<x<<" "<<enojados;
	
	return 0;
}
