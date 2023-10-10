// Problem: A. Twins
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/160/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cant;
	cin>>cant;
	int valores [cant] ;
	int suma=0,sumar=0,sumanueva;
	int cambios;
	int atomar=0;
	int j=cant-1;
	
	for(int i=0;i<cant;i++)
	{
		cin>>valores[i];
		suma+=valores[i];
	}
	while(cambios)
	{
		cambios=0;
		for (int i = 0,s=cant-1; i < s; i++)
		{
	    if (valores[i]>valores[i+1])
	    {
			int aux=valores[i];
			valores[i]=valores[i+1];
			valores[i+1]=aux;
			cambios++;
	    }
		}
	}
	sumanueva=suma;
	while(sumar<=suma/2 && sumar<=sumanueva)
	{
		sumar+=valores[j];
		j--;
		atomar++;
		sumanueva-=valores[j];
	}
	cout<<atomar;
	
	
	return 0;
}
