// Problem: B. I Hate 1111
// Contest: Codeforces - Codeforces Round 723 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1526/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

bool solve(long long x)
{
	for(int i=0;i<20;i++)
	{
		if(x%11==0)return true;
		x-=111;
		if(x<0)break;
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
		long long x;
		cin>>x;
		cout<<(solve(x)?"YES":"NO")<<"\n";
	}
	
	return 0;
}
