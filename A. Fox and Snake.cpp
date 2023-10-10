// Problem: A. Fox And Snake
// Contest: Codeforces - Codeforces Round #290 (Div. 2)
// URL: https://codeforces.com/problemset/problem/510/A
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
	
	int n,m;
	cin>>n>>m;
	bool lado=1,paso=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i%2==0)
			{
				cout<<"#";
			}
			else if(i%2!=0 && lado)
			{
				if(j==m-1)
				{
					cout<<"#";
					paso=1;
				}
				else cout<<".";
			}
			else if(i%2!=0 && !lado)
			{
				if(j==0)
				{
					cout<<"#";
					paso=0;
				}
				else cout<<".";
			}
		}
		if(paso)
		{
			lado=0;
		}
		else if(!paso) lado=1;
		
		cout<<"\n";
	}
	
	
	
	return 0;
}
