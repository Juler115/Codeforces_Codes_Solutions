// Problem: A. Arpa’s hard exam and Mehrdad’s naive cheat
// Contest: Codeforces - Codeforces Round #383 (Div. 2)
// URL: https://codeforces.com/problemset/problem/742/A
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
	long long t=0;
	cin>>t;
	int num=t%4;
	//cout<<num;
	if(t!=0)
	switch(num)
	{
		case 0:cout<<6;break;
		case 1:cout<<8;break;
		case 2:cout<<4;break;
		case 3:cout<<2;break;
	}
	else cout<<1;

	
	return 0;
}
