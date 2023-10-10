// Problem: A. Game With Sticks
// Contest: Codeforces - Codeforces Round #258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/A
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
	
	int n,m;
	cin>>n>>m;
	int ganador =0;
	
	while(n>1 && m>1)
	{
		if(ganador==1)ganador=0;
		else ganador=1;
		if(n==1) m--; else n--;
		if(m==1) n--; else m--;
	}
	if(ganador)cout<<"Malvika";
	else cout<<"Akshat";
	
	
	return 0;
}
