// Problem: B. Buttons
// Contest: Codeforces - Codeforces Round 164 (Div. 2)
// URL: https://codeforces.com/problemset/problem/268/B
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
	int n;
	cin>>n;
	
	int suma=0;
	for(int i=n;i>0;i--)
	{
		suma+=i;
		suma+=(n-i)*(i-1);
	}
	cout<<suma;
	
	return 0;
}
