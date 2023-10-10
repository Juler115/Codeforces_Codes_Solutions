// Problem: A. Theatre Square
// Contest: Codeforces - Codeforces Beta Round 1
// URL: https://codeforces.com/problemset/problem/1/A
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
	
	double n,m,a;
	cin>>n>>m>>a;
	cout<<(long long)(ceil(m/a)*ceil(n/a));
	
	return 0;
}
