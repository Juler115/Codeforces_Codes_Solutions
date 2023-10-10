// Problem: A. Little Artem
// Contest: Codeforces - Codeforces Round 632 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1333/A
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
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<"W";
		for(int j=1;j<m;j++)	
		{
			cout<<"B";
		}
		cout<<"\n";
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<"B";
			}
			cout<<"\n";
		}
		
	}
	
	return 0;
}
