// Problem: A. Image
// Contest: Codeforces - Educational Codeforces Round 134 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1721/problem/A
// Memory Limit: 512 MB
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
	for(int u=0;u<t;u++)
	{
		char a,b,c,d;
		cin>>a>>b>>c>>d;
		int as=0,bs=0,cs=0,ds=0;
		int movimientos=0;
		char color;
		if(a==b&&b==c&&c==d)
		{
			cout<<0<<"\n";
			continue;	
		}
		if(a==b) as++;
		if(a==c) as++;
		if(a==d) as++;
		if(b==c) bs++;
		if(b==d) bs++;
		if(c==d) cs++;

		
		//cout<<as<<bs<<cs<<ds<<"\n";
		
		if(as>=bs&&as>=cs&&as>=ds)
			color=a;
		else if(bs>=cs&&bs>=ds) 
			color=b;
		else if(cs>=ds)
			color=c;
		else 
			color=d;
		if(a!=color)
		{
			if(a==b)
			{
				a=color;
				b=color;
				movimientos++;
			}
			else if(a==c)
			{
				a=color;
				c=color;
				movimientos++;
			}
			else if(a==d)
			{
				a=color;
				d=color;
				movimientos++;
			}
			else
			{
				a=color;
				movimientos++;
			}
		
		}
		if(b!=color)
		{
			if(b==a)
			{
				a=color;
				b=color;
				movimientos++;
			}
			else if(b==c)
			{
				b=color;
				c=color;
				movimientos++;
			}
			else if(b==d)
			{
				b=color;
				d=color;
				movimientos++;
			}
			else
			{
				b=color;
				movimientos++;
			}
	
		}
		if(c!=color)
		{
			if(c==b)
			{
				c=color;
				b=color;
				movimientos++;
			}
			else if(a==c)
			{
				a=color;
				c=color;
				movimientos++;
			}
			else if(c==d)
			{
				c=color;
				d=color;
				movimientos++;
			}
			else
			{
				c=color;
				movimientos++;
			}

		}
		if(d!=color)
		{
			if(d==b)
			{
				d=color;
				b=color;
				movimientos++;
			}
			else if(d==c)
			{
				d=color;
				c=color;
				movimientos++;
			}
			else if(a==d)
			{
				a=color;
				d=color;
				movimientos++;
			}
			else
			{
				d=color;
				movimientos++;
			}
		}
		//if(par==1)movimientos++;
		cout<<movimientos<<"\n";
		
		
	}
	
	return 0;
}
