// Problem: A. Puzzles
// Contest: Codeforces - Codeforces Round #196 (Div. 2)
// URL: https://codeforces.com/problemset/problem/337/A
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
	
	int n,m,A,B;
	cin>>n>>m;
	int puzz[m];
	for(int i=0;i<m;i++)cin>>puzz[i];
	
	sort(puzz,puzz+m);
	
	int i=0,min=100000,x=0,y=0;
	while(i<m-n+1)
	{
		A=puzz[i+n-1];
		B=puzz[i];
		if(A-B<min) 
		{
			x=A;
			y=B;
			min=A-B;
		}
		//cout<<B<<" "<<A<<"\n";
		i++;
	}
	cout<<x-y;
	return 0;
}
