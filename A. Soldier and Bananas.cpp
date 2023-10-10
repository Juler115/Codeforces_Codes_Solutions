// Problem: A. Soldier and Bananas
// Contest: Codeforces - Codeforces Round #304 (Div. 2)
// URL: https://codeforces.com/problemset/problem/546/A
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
	
	int k,n,w;
	cin>>k>>n>>w;
	int costo=0;
	
	for(int i=1;i<w+1;i++)
	{
		costo+=k*i;
	}
	if(n<costo)
	cout<<abs(costo-n);
	else cout<<"0";
	
	return 0;
}
