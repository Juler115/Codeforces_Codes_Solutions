// Problem: A. Boy or Girl
// Contest: Codeforces - Codeforces Round 146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/A
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
	string s;
	cin>>s;
	set<char> let;
	for(int i=0;i<s.size();i++)
	{
		let.insert(s[i]);
	}
	if(let.size()%2==0)cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	
	return 0;
}
