// Problem: A. Walking Master
// Contest: Codeforces - Codeforces Round 858 (Div. 2)
// URL: https://codeforces.com/contest/1806/problem/A
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int solve()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	long long mov=0;
	if(b<=d){
		long long dis=abs(d-b);
		mov+=dis;
		a+=dis;
		if(a>=c)
		{
			dis=abs(a-c);
			mov+=dis;
			return mov;
		}
	}
	return -1;
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
		cout<<solve()<<"\n";		
	}
	
	return 0;
}
