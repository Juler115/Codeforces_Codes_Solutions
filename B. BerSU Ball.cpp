// Problem: B. BerSU Ball
// Contest: Codeforces - Codeforces Round 277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/B
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
	
	priority_queue<int> boys,girls;
	
	int a;
	cin>>a;
	while(a--)
	{
		int x;
		cin>>x;
		boys.push(-1*x);
	}
	int b;
	cin>>b;
	while(b--)
	{
		int x;
		cin>>x;
		girls.push(-1*x);
	}
	int parejas=0;
	while(!boys.empty() && !girls.empty())
	{
		int a,b;
		a=-1*boys.top();
		b=-1*girls.top();

		if(a>b)
		{
			if(abs(a-b)<=1)
			{
				girls.pop();
				boys.pop();
				parejas++;
			}
			else girls.pop();
		}
		else{
			if(abs(a-b)<=1)
			{
				girls.pop();
				boys.pop();
				parejas++;
			}
			else boys.pop();
		}

	}
	cout<<parejas;
	
	
	return 0;
}
