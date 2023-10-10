// Problem: A. Games
// Contest: Codeforces - Codeforces Round #164 (Div. 2)
// URL: https://codeforces.com/problemset/problem/268/A
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
	int h[t],a[t],total=0;;
	for(int o=0;o<t;o++)
	{
		cin>>h[o]>>a[o];
	}
	for (int i = 0;i<t;i++)
  		for (int j = 0;j<t;j++)
  	{
    	if (i != j && h[i] == a[j]) total++;
    }
	cout<<total;
	return 0;
}
