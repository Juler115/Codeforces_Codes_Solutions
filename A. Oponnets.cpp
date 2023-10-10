// Problem: A. Opponents
// Contest: Codeforces - Codeforces Round #360 (Div. 2)
// URL: https://codeforces.com/problemset/problem/688/A
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
	
	int n,d;
	cin>>n>>d;
	string pelea;
	int ganadas=0,perdio=0,max=0;
	for(int i=0;i<d;i++)
	{
		cin>>pelea;
		for(int j=0;j<n;j++)
		{
			if(pelea[j]=='1')
			{
				perdio++;
			}
			else {
				ganadas++;
				perdio=0;
				break;
			}
		}
		if(ganadas>max) max=ganadas;
		if(perdio==n)
		{
			ganadas=0;
			perdio=0;
		}
		
	}
	cout<<max;
	
	
	return 0;
}
