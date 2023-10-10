// Problem: A. Kefa and First Steps
// Contest: Codeforces - Codeforces Round #321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/A
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
	int anterior=0,cont=0,conta=0;
	for(int i=0;i<n;i++)
	{
		int aux;	
		cin>>aux;
		//cout<<anterior<<">>"<<aux<<"\n";
		if(aux>=anterior)conta++;
		else
		{
			if(conta>=cont)cont=conta;
			conta=1;
			//cout<<"hola";
		}
		//cout<<conta<<" ";
		anterior=aux;
		
	}
	if(conta>cont)cont=conta;
	cout<<cont;
	
	return 0;
}
