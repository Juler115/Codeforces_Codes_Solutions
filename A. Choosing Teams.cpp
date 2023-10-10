// Problem: A. Choosing Teams
// Contest: Codeforces - Codeforces Round #246 (Div. 2)
// URL: https://codeforces.com/problemset/problem/432/A
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
	int n=0,k=0;
	cin>>n>>k;
	int equipos=0;
	for(int i=0;i<n;i++)
	{
		int aux;
		cin>>aux;
		if(aux+k<=5)
		{
			equipos++;
		}
	}
	cout<<equipos/3;
	return 0;
}
