// Problem: A. Wizards' Duel
// Contest: Codeforces - Codeforces Round #327 (Div. 2)
// URL: https://codeforces.com/problemset/problem/591/A
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
	
	float l,p,q;
	cin>>l>>p>>q;
	
	float tiempo=l/(p+q);
	cout<<tiempo*p;
	
	return 0;
}
