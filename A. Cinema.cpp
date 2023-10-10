// Problem: A. Cinema
// Contest: Codeforces - Codeforces Round #126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/A
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

/*void nuevoAsiento(bool* asientos,int x,int y,int n,int m)
{
	
	int minx,miny,valormin=10000,valoract;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(asientos[i][j]==1) continue;
			valoract=(x-i)+(y-j);
			if(valormin>valoract)
			{
				valormin=valoract;
				minx=i;
				miny=j;
			}
			if(valormin==valoract && minx>i)
			{
				valormin=valoract;
				minx=i;
				miny=j;
			}
			else if(valormin==valoract && minx==i && miny>j)
			{
				valormin=valoract;
				minx=i;
				miny=j;
			}
		}
	}
	asientos[minx][miny]=1;
}*/

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,m,k;
	cin>>n>>m>>k;
	
	bool asientos[n+1][m+1]={0};
	
	for(int a=0;a<k;a++)
	{
		int x,y;
		cin>>x>>y;
		
		if(asientos[x][y]==0)
		{
			cout<<x<<" "<<y<<"\n";
			asientos[x][y]=1;
		}
		else
		{
			int minx,miny,valormin=10000,valoract;
	
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
				{
					if(asientos[i][j]==1) continue;
					
					valoract=abs(x-i)+abs(y-j);
					if(valormin>valoract)
					{
						valormin=valoract;
						minx=i;
						miny=j;
					}
					else if(valormin==valoract && minx>i)
					{
						valormin=valoract;
						minx=i;
						miny=j;
					}
					else if(valormin==valoract && minx==i && miny>j)
					{
						valormin=valoract;
						minx=i;
						miny=j;
					}
				}
			}
		cout<<minx<<" "<<miny<<"\n";
		asientos[minx][miny]=1;
		}
		
	}
	return 0;
}
