// Problem: A. An abandoned sentiment from past
// Contest: Codeforces - Codeforces Round #418 (Div. 2)
// URL: https://codeforces.com/problemset/problem/814/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n,k;
	cin>>n>>k;
	n+=2;
	int a[n],b[k];
	for(int i=1;i<n-1;i++)cin>>a[i];
	for(int i=0;i<k;i++)cin>>b[i];
	a[0]=1;
	a[n-1]=200;
	if(k>1)
	{
		cout<<"Yes";
	}
	else
	{
		for(int i=1;i<n-1;i++)
		{
			if(a[i]==0)
			{
				if(a[i-1]<=b[0] && a[i+1]>=b[0])
				{
					cout<<"No";
					break;
				}
				else 
				{
					cout<<"Yes";
					break;
				}
			}
			else if(a[i]<a[i-1])
			{
				cout<<"Yes";
				break;
			}
		}
	}
	return 0;
}
