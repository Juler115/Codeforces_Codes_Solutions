// Problem: B. Mex Master
// Contest: Codeforces - Codeforces Round 858 (Div. 2)
// URL: https://codeforces.com/contest/1806/problem/B
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int solve()
{
	int n;
	cin>>n;
	int cero=0,uno=0,dos=0,otros=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x==0)cero++;
		else if(x==1)uno++;
		else if(x==2)dos++;
		else otros++;
	}
	if(cero<=((n+1)/2))return 0;
	else if(cero==n || dos+otros>0)return 1;
	else return 2;		
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		cout<<solve()<<"\n";
	}
	
	return 0;
}
