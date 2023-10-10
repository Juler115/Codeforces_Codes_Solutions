// Problem: A. Cakeminator
// Contest: Codeforces - Codeforces Round #192 (Div. 2)
// URL: https://codeforces.com/problemset/problem/330/A
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
	int f,c;
	cin>>f>>c;
	char pastel[f][c];
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>pastel[i][j];
		}
		
	}/*
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<pastel[i][j];
		}
		cout<<"\n";
		
	}*/
	int total=0,valido=0;
	for(int i=0;i<f;i++)
	{
		valido=0;
		for(int j=0;j<c;j++)
		{
			if(pastel[i][j]=='.') valido++;
			else
			break;
		}
		if(valido==c)
		{
		for(int j=0;j<c;j++)
		{
			if(pastel[i][j]=='.')
			{
				total++;
				pastel[i][j]='v';
		}}
		}
	}
	for(int i=0;i<c;i++)
	{
		valido=0;
		for(int j=0;j<f;j++)
		{
			if(pastel[j][i]=='.' || pastel[j][i]=='v') valido++;
			else
			break;
		}
		//cout<<"\n"<<valido<<f;
		if(valido==f)
		{
		for(int j=0;j<f;j++)
		{
			if(pastel[j][i]=='.')
			{
				total++;
				pastel[j][i]='v';
		}}
		}
	}
	/*
	cout<<"\n";
	
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<pastel[i][j];
		}
		cout<<"\n";
		
	}*/
	cout<<total;
	return 0;
}
