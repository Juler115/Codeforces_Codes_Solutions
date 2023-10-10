// Problem: A. Taymyr is calling you
// Contest: Codeforces - Codeforces Round #395 (Div. 2)
// URL: https://codeforces.com/problemset/problem/764/A
// Memory Limit: 255 MB
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
	int n,n1,m,m1,z;
	cin>>n>>m>>z;
	int matados=0;
	n1=n;
	m1=m;
	for(int i=1;i<z+1;i++)
	{
		if(n==i && m==i)
		{
			matados++;
			n+=n1;
			m+=m1;
			//cout<<i<<"\n";
		}
		else if(n==i && m!=i) n+=n1;
		else if(m==i && n!=i) m+=m1;
	}
	cout<<matados;
	
	
	return 0;
}
