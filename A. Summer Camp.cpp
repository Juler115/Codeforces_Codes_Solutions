// Problem: A. Summer Camp
// Contest: Codeforces - Codeforces Round #352 (Div. 2)
// URL: https://codeforces.com/problemset/problem/672/A
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
	string num="";
	
	for(int i=1;i<2*t;i++)
	{
		num+=to_string(i);
	}
	//cout<<num;
	cout<<num[t-1];
	
	return 0;
}
