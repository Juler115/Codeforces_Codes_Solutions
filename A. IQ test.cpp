// Problem: A. IQ test
// Contest: Codeforces - Codeforces Beta Round #25 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/25/A
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
	
	int n;
	cin>>n;
	int par=0,impar=0,num1=0,num2=0;
	for(int i=0;i<n;i++)
	{
		int aux;
		cin>>aux;
		if((aux & 1 )==0)
		{
			impar++;
			num1=i+1;
		}
		else 
		{
			par++;
			num2=i+1;
		}
	}
	if(par>impar) cout<<num1;
	else cout<<num2;
	
	return 0;
}
