// Problem: A. Raising Bacteria
// Contest: Codeforces - Codeforces Round #320 (Div. 2) [Bayan Thanks-Round]
// URL: https://codeforces.com/problemset/problem/579/A
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
	long long x=0;
	cin>>x;
	long long bacte=0;
	while(x>0)
	{
		if(x&1)++bacte;
		x=x>>1;
	}
	cout<<bacte;
	
	
	return 0;
}
