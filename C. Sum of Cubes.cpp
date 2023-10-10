// Problem: C. Sum of Cubes
// Contest: Codeforces - Codeforces Round 702 (Div. 3)
// URL: https://codeforces.com/contest/1490/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

bool solve(set<long long>&cubes,long long x)
{
	for(auto a:cubes)
	{
		if(cubes.find(x-a)!=cubes.end()) return true;
	}
	return false;
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	long long t=0;
	cin>>t;
	set<long long> cubes;
	for(int i=1;i<=10000;i++)
	{
		cubes.insert(1ll*i*i*i);
	}
	while(t--)
	{
		long long x;
		cin>>x;
		cout<<(solve(cubes,x)?"YES":"NO")<<"\n";
	}
	return 0;
}
