// Problem: A. Two Elevators
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/A
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
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
	
		if(b<c)a-=c-b,b+=c-b;
		
		if(a==b)cout<<3<<"\n";
		if(b<a) cout<<2<<"\n";
		if(b>a) cout<<1<<"\n";
		//cout<<a<<b<<c<<"\n";
		
	}
	
	return 0;
}
