// Problem: B. New Year's Number
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/contest/1475/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

bool solve(int n)
{
	int i=0;
	while(((n-(2020*i))>=0))
	{
		if(((n-(2020*i))%2021)==0)return true;
		i++;
	}
	return false;
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<(solve(n)?"YES":"NO")<<"\n";	
	}
	
	return 0;
}
