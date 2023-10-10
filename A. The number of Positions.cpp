// Problem: A. The number of positions
// Contest: Codeforces - Codeforces Beta Round 92 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/124/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

	int n,a,b;
	cin>>n>>a>>b;
	cout<<n-max(a+1,n-b)+1;

	
	return 0;
}
