// Problem: A. YES or YES?
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

string solve(string s)
{
	if(s[0]=='Y' || s[0]=='y')
	{
		if(s[1]=='E' || s[1]=='e')
		{
			if(s[2]=='S' || s[2]=='s')
			{
				return "YES";
			}
			else return "NO";
		}
		else return "NO";
	}
	else return "NO";
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
		string s;
		cin>>s;
		cout<<solve(s)<<"\n";
	}
	
	return 0;
}
