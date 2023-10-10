// Problem: A. Dreamoon and Stairs
// Contest: Codeforces - Codeforces Round #272 (Div. 2)
// URL: https://codeforces.com/problemset/problem/476/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m,meta;
	cin>>n>>m;
	
	if(n<m)
	{
		cout<<-1;
	}
	else
	{
		if(n%2==0) meta=n/2;
		else meta=(n/2)+1;
		if(meta%m==0)cout<<meta;
		else 
		{
			while(meta%m!=0)
			{
				meta++;
			}
			cout<<meta;
		}
	}
	
	return 0;
}
