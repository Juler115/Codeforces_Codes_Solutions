// Problem: A. Word Capitalization
// Contest: Codeforces - Codeforces Round 172 (Div. 2)
// URL: https://codeforces.com/problemset/problem/281/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	if(s[0]>=97)
	s[0]-=32;
	cout<<s;
	
	return 0;
}
