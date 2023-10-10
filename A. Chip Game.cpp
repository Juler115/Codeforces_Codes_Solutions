// Problem: A. Chip Game
// Contest: Codeforces - Codeforces Round #814 (Div. 2)
// URL: https://codeforces.com/contest/1719/problem/A
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
	int t=0;
	cin>>t;
	for(int a=0;a<t;a++)
	{
		bool ganador=0;
		int n,m;
		cin>>n>>m;
		
		while(m!=1)
		{
			if(m%2==0)
			{
				m-=m-1;
			}
			else
			{
				m-=1;
			}
			if(ganador) ganador=0;
			else ganador=1;
		}
		while(n!=1)
		{
			if(n%2==0)
			{
				n-=n-1;
			}
			else
			{
				n-=1;
			}
			if(ganador) ganador=0;
			else ganador=1;
		}
		if(ganador) cout<<"Burenka"<<"\n";
		else cout<<"Tonya"<<"\n";
	
	}
	
	return 0;
}
