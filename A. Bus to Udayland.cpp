// Problem: A. Bus to Udayland
// Contest: Codeforces - Codeforces Round #369 (Div. 2)
// URL: https://codeforces.com/problemset/problem/711/A
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
	char asientos[t][5];
	bool pasa=0;
	for(int a=0;a<t;a++)
	{
		
		for(int i=0;i<5;i++)
		{
			cin>>asientos[a][i];
			if(i && !pasa)
			{
				if(asientos[a][i]=='O' && asientos[a][i-1]=='O')
				{
					pasa=1;
					asientos[a][i]='+';
					asientos[a][i-1]='+';
				}
			}
		}
	}
	
	if(pasa)
	{
		cout<<"YES"<<"\n";
		for(int a=0;a<t;a++)
		{
			
			for(int i=0;i<5;i++)
			{
				cout<<asientos[a][i];
			}
			cout<<"\n";
		}
		
	}
	else cout<<"NO";
	
	return 0;
}
