// Problem: A. Nearly Lucky Number
// Contest: Codeforces - Codeforces Beta Round 84 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/110/A
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
	
	string s;
	cin>>s;
	int cont=0;
	for(int i=0;i<s.size();i++) if(s[i]=='4' || s[i]=='7')cont++;
	cout<<((cont==4 || cont==7)? "YES":"NO");
	
	return 0;
}
