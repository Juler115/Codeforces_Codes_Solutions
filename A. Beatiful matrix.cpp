// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int matrix[5][5];
	int acaestaf,acaestac;
	for(int i=0;i<5;i++) for(int j=0;j<5;j++) 
	{ 
		cin>>matrix[i][j];
		if(matrix[i][j]==1)
		{
			acaestaf=i+1;
			acaestac=j+1;
		}
	}
		acaestaf=acaestaf-3;
		if(acaestaf<0) acaestaf*=-1;
		acaestac=acaestac-3;
		if(acaestac<0) acaestac*=-1;
		cout<<(acaestaf+acaestac);
	
	
	
	
	return 0;
}
