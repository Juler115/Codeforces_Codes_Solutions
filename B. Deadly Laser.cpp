// Problem: B. Deadly Laser
// Contest: Codeforces - Educational Codeforces Round 134 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1721/B
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m,l1,l2,d;
		cin>>n>>m>>l1>>l2>>d;
		bool arriba=true,abajo=true,derecha=true,izq=true;
		for(int j=1;j<=m;j++)
		{
			if(abs(1-l1)+abs(j-l2)<=d)
			{
				arriba=false;
				break;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(abs(n-l1)+abs(j-l2)<=d)
			{
				abajo=false;
				break;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(abs(i-l1)+abs(1-l2)<=d)
			{
				izq=false;
				break;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(abs(i-l1)+abs(m-l2)<=d)
			{
				derecha=false;
				break;
			}
		}
		if((arriba && derecha) || (abajo && izq))
		cout<<abs(1-n)+abs(1-m)<<"\n";
		else{
			cout<<-1<<"\n";
		}
	}
	
	return 0;
}
