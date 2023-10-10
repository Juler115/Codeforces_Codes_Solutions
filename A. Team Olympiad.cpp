// Problem: A. Team Olympiad
// Contest: Codeforces - Codeforces Round #279 (Div. 2)
// URL: https://codeforces.com/problemset/problem/490/A
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
	int n=0;
	cin>>n;
	int equipos[n]={0};
	int a=0,b=0,c=0,menor=0;
	for(int i=0;i<n;i++)
	{
		cin>>equipos[i];
		switch(equipos[i])
		{
			case 1: a++; break;
			case 2: b++; break;
			case 3: c++; break;
		}
	}
	if(a==0 || b==0 || c==0) cout<<"0";
	else{
		
	if(a<=b && a<=c) menor=a;
	if(b<=a && b<=c) menor=b;
	if(c<=a && c<=b) menor=c;
	
	cout<<menor<<"\n";
	//sort(equipos,equipos+n);
	//for(int i=0;i<n;i++) cout<<equipos[i]<<" ";
	int aux,j=0;
	for(int i=0;i<menor;i++)
	{
		aux=1;
		while(aux!=4)
		{
			if(equipos[j]==aux)
			{
				cout<<j+1<<" ";
				aux++;
				equipos[j]=0;
				j=0;
			}
			else j++;
		}
		cout<<"\n";
		
	}
	}
	
	
	return 0;
}
