// Problem: A. I Wanna Be the Guy
// Contest: Codeforces - Codeforces Round #268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/A
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
	unsigned int n=0;
	cin>>n;
	map<int,int>:: iterator i;
	map<int,int> dat;
	int x,y;
	cin>>x;
	for(int i=0;i<x;i++) 
	{
		int aux=0;
		cin>>aux;
		if(aux)dat[aux]++;
	}
	cin>>y;
	for(int i=0;i<y;i++)
	{
		int aux=0;
		cin>>aux;
		dat[aux]++;
	}
		
	if(dat.size()==n)cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";	
	/*cout<<"\n";
	for(i=dat.begin();i!=dat.end();i++)
	{	
		cout<<i->first<<"\n";
	}*/
	
	
	return 0;
}
