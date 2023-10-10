// Problem: A. Arrival of the General
// Contest: Codeforces - Codeforces Round #103 (Div. 2)
// URL: https://codeforces.com/problemset/problem/144/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n=0;
	cin>>n;
	int soldados[n],maxi=0,mini=n-1;
	for(int i=0;i<n;i++) cin>>soldados[i];
	for(int i=0;i<n;i++) 
	{
		if(soldados[i]>soldados[maxi]) maxi=i;
		if(soldados[i]<=soldados[mini]) mini=i;
	}
	//cout<<mini<<" ";
	if(maxi<mini)cout<<(maxi)+(n-mini-1);
	else cout<<(maxi)+(n-mini-2);
	
	return 0;
}
