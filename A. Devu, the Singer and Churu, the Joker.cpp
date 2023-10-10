// Problem: A. Devu, the Singer and Churu, the Joker
// Contest: Codeforces - Codeforces Round #251 (Div. 2)
// URL: https://codeforces.com/problemset/problem/439/A
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
	
	int n,d;
	cin>>n>>d;
	queue<int> tiempos;
	
	for(int i=0;i<n;i++)
	{
		int aux;
		cin>>aux;

		tiempos.push(aux);
	}
	int chistes=0;
	
	for(int i=0;i<n;i++)
	{
		
		d-=tiempos.front();
		if(i!=n-1) 
		{
		d-=10;
		chistes+=2;	
		}
		tiempos.pop();	
	}
	if(d>=0) 
	{
		chistes+=d/5;
		cout<<chistes;
	}
	else cout<<"-1";
	
	return 0;
}
