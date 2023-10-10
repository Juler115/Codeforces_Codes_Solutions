// Problem: A. Even Oddscant
// Contest: Codeforces - Codeforces Round #188 (Div. 2)
// URL: https://codeforces.com/problemset/problem/318/A
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
	long long n=0;
	cin>>n;
	long long k=0;
	cin>>k;
	long long cant=0;
	if(n%2==0) cant=n/2;
	else cant=n/2+1;
	//cout<<cant;
	if(k>cant) cout<<2*(k-cant);
	else cout<<2*(k-1)+1;
	
	return 0;
}
