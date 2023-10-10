// Problem: B. Make AP
// Contest: Codeforces - Codeforces Round 764 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1624/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		b*=2;
		if(((b-c)%a==0  && b-c>0 )|| ((a+c)%b==0)|| ((b-a)%c==0 && b-a>0))cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
