// Problem: D. Line
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string fila;
		ll suma=0;
		cin>>fila;
		ll cambios=0;
		ll sumaanti=0;
		ll k2;
		for(int k=0;k<n;k++)
		{
			ll j=n-1;
			cambios++;
			k2=k;
			for(ll i=0;i<n/2;i++)
			{
				if(fila[i]=='L')
				{
					fila[i]='R';
					cambios--;
				}
				if(!cambios) break;
				if(fila[j]=='R')
				{
					fila[j]='L';
					cambios--;
				}
				j--;
				if(!cambios) break;
				//if(cambios2==cambios && i>k) break;
				
			}
			for(int i=0;i<n;i++)
			{
				//cout<<fila[i];
				if(fila[i]=='R')
				{
					suma+=n-i-1;
					//cout<<suma;
				}
				else if(fila[i]=='L')
				{
					suma+=i;
					//cout<<suma;
				}
				//cout<<"\n";
			}
			//cout<<"\n";
			cout<<suma<<" ";
			if(sumaanti==suma)break;
			sumaanti=suma;
			suma=0;
		}
		if(sumaanti==suma)
		{
			for(int i=k2;i<n-1;i++) cout<<suma<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
