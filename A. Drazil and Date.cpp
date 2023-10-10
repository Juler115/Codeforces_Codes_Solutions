// Problem: A. Drazil and Date
// Contest: Codeforces - Codeforces Round #292 (Div. 2)
// URL: https://codeforces.com/problemset/problem/515/A
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
	
	long long a,b,c;
	cin>>a>>b>>c;
	long long pasos=0;
	
	pasos+=abs(a)+abs(b);
	if((pasos-c)%2==0 && c>=pasos)
	{
		cout<<"Yes";
	}
	else cout<<"No";
	
	
	
	return 0;
}
