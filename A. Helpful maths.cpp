// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string ori;
	cin>>ori;
	string nueva;
	int cambios=1;
	
	while(cambios)
	{
		cambios=0;
		for (int i = 0,s=ori.length()-2; i < s; i+=2)
		{
	    if (ori[i]>ori[i+2])
	    {
			char aux=ori[i];
			ori[i]=ori[i+2];
			ori[i+2]=aux;
			cambios++;
	    }
		}
	}
		
	
	cout<<ori;
	
	
	return 0;
}
