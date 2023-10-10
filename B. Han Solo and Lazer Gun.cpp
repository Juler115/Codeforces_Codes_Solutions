// Problem: B. Han Solo and Lazer Gun
// Contest: Codeforces - Codeforces Round 291 (Div. 2)
// URL: https://codeforces.com/problemset/problem/514/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

double pendiente(int x1,int y1,int x2,int y2)
{
	return (double)(y2-y1)/(x2-x1);
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

	int n,x0,y0;
	cin>>n>>x0>>y0;
	set<double>pen;
	bool ver=0;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		
		if(x0==x)ver=1;
		else
		{
			pen.insert(pendiente(x0,y0,x,y));
		}
	}
	cout<<pen.size()+ver<<"\n";
	
	return 0;
}
