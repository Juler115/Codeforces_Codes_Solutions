// Problem: C. OKEA
// Contest: Codeforces - Codeforces Round #770 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1634/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int a=0;a<t;a++)
	{
		int i,j;
		cin>>i>>j;
		int num=1,fil=num;
		int suma=0,valor=1;
		for(int s=0;s<j;s++)
		{
			suma+=valor;
			valor+=i;
			
		}
		//cout<<suma;
		
		if(suma!=j*j)cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			for(int b=0;b<i;b++)
			{
				for(int c=0;c<j;c++) 
				{
					cout<<num<<" ";
					num+=i;
				}
				cout<<"\n";
				fil++;
				num=fil;
				
			}
			
		}
		
		
	}
	
	
	
	return 0;
}
