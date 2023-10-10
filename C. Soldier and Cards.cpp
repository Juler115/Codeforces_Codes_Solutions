// Problem: C. Soldier and Cards
// Contest: Codeforces - Codeforces Round 304 (Div. 2)
// URL: https://codeforces.com/problemset/problem/546/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

queue<int> uno,dos,aux;

void print()
{
	while(!uno.empty()){
		cout<<uno.front()<<" ";
		uno.pop();
	}
	cout<<"\n";
	while(!dos.empty()){
		cout<<dos.front()<<" ";
		dos.pop();
	}
}
void scan()
{
	int a;
	cin>>a;
	while(a--)
	{
		int x;
		cin>>x;
		uno.push(x);
	}
	int b;
	cin>>b;
	while(b--)
	{
		int x;
		cin>>x;
		dos.push(x);
	}
}
#define mk make_pair
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	set<pair<int,pair<int,pair<int,int>>>>vis;
	scan();
	int bat=0;
	while(!uno.empty() && !dos.empty())
	{
		int a=uno.front();
		uno.pop();
		int b=dos.front();
		dos.pop();
		if(bat>=200)
		{
			cout<<-1;
			return 0;
		}
		if(a>b)
		{
			uno.push(b);
			uno.push(a);
		}
		else{
			dos.push(a);
			dos.push(b);
		}
		bat++;
	}
	cout<<bat<<" ";
	if(uno.empty()){
		cout<<2;
	}
	else cout<<1;

	
	return 0;
}
