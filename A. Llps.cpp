// Problem: A. LLPS
// Contest: Codeforces - Codeforces Round #127 (Div. 2)
// URL: https://codeforces.com/problemset/problem/202/A
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
	
	string c,sub;
	cin>>c;
	int mayor=0;
	int n=c.length();
	for(int i=0;i<n;i++)
	{
		if(c[i]>mayor) mayor=c[i];
	}
	for(int i=0;i<n;i++)
	{
		if(c[i]==mayor)
		{
			sub+=c[i];
		}
	}
	cout<<sub;
	
	
	
	return 0;
}
