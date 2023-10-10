// Problem: A. Presents
// Contest: Codeforces - Codeforces Beta Round #97 (Div. 2)
// URL: https://codeforces.com/problemset/problem/136/A
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
	int dar[n],recibir[n];
	for(int i=1;i<=n;i++) cin>>dar[i];
	for(int i=1;i<=n;i++) recibir[dar[i]]=i;
	for(int i=1;i<=n;i++) cout<<recibir[i]<<" ";
	
	
	return 0;
}
