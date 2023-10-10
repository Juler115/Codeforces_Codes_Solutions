// Problem: A. Cheap Travel
// Contest: Codeforces - Codeforces Round #266 (Div. 2)
// URL: https://codeforces.com/problemset/problem/466/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,dinero=0,cant,prom;
	cin>>n>>m>>a>>b;
	if(m<=b) prom=b/m; if(m>b) prom=1;
	if(n>m) cant=n/m; if(n<m) cant=1;
	if(prom<a || (prom==a && b*cant<=a*n))
	{	
		dinero=(cant)*b;
		if((cant)*m<n && a<b)dinero+=a*(n-(cant*m));
		else if((cant)*m<n)dinero+=b;
	}
	else dinero=n*a;
	cout<<dinero;
	return 0;
}
