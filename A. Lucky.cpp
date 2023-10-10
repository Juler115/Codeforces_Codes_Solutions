// Problem: A. Lucky?
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/0
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
	for(int a=0;a<t;a++)
	{
		string tic;
		cin>>tic;
		
		if(tic[0]+tic[1]+tic[2]==tic[3]+tic[4]+tic[5]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
