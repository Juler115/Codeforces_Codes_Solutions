// Problem: E. Eating Q1ueries
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/E
// Memory Limit: 256 MB
// Time Limit: 3500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	for(int a=0;a<t;a++)
	{
		int n,q;
		cin>>n>>q;
		int caram[n],cant[q],total=0,azucar=0,j=n-1,tot=0;
		for(int i=0;i<n;i++)
		{
			cin>>caram[i];
			total+=caram[i];
		}
		for(int i=0;i<q;i++) {
			cin>>cant[i];
			}
		sort(caram,caram+n);
		//for(int i=0;i<n;i++)cout<<caram[i]<<" ";
			
		for(int i=0;i<q;i++)
		{
			if(cant[i]>total)
			{
				cout<<-1<<"\n";
			}
			else
			{
				j=n-1;
				tot=0;
				azucar=0;
				while(azucar<cant[i])
				{
					tot++;
					//cout<<azucar<<" ";
					azucar+=caram[j];
					j--;
				}
				cout<<tot<<"\n";
				
			}
		}
		
	}
	
	return 0;
}
