// Problem: A. Bit++
// Contest: Codeforces - Codeforces Round #173 (Div. 2)
// URL: https://codeforces.com/problemset/problem/282/A
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
	int x=0;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<3;i++)
		{
			if(s[i]=='+'){x++;break;}
			if(s[i]=='-'){x--;break;}
		}
	}
	cout<<x;
	
	return 0;
}
