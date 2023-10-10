// Problem: A. Ilya and Bank Account
// Contest: Codeforces - Codeforces Round #186 (Div. 2)
// URL: https://codeforces.com/problemset/problem/313/A
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
    
	int n=0;
	cin>>n;
	
	if(n>=0) cout<<n;
	else
	{
		int aux=n/10;
		int aux3=n%10;
		int aux1=n/100;
		aux1*=10;
		aux1+=aux3;
		if(aux>aux1)cout<<aux;
		else cout<<aux1;
	}
	return 0;
}
