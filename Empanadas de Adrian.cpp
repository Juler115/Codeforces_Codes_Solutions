#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

	long long n=0,m=0,k;
	cin>>n>>m>>k;
	
	long long feli[n+2]={0},sabor[n+2]={0};
	map<long,bool> probadas;
	
	long long felicidad=0;
	for(long long i=0;i<n;i++) cin>>feli[i];
	for(long long i=0;i<n;i++) 
	{
		cin>>sabor[i];
		probadas[sabor[i]]=0;
	}
		
	
	while(m!=0)
	{
		long long mayor=LLONG_MIN;
		long long aux=0;
		for(long long i=0;i<n;i++)
		{
			if(feli[i]==LLONG_MIN) continue;
			if(probadas[sabor[i]]==0)
			{
				if(mayor<=feli[i]+k)
				{
					mayor=feli[i]+k;
					aux=i;
				}
			}	
			else
			{
				if(mayor<=feli[i])
				{
					mayor=feli[i];
					aux=i;
				}
				
			}
		}
		if(mayor>0)
		{
			felicidad+=mayor;
			//cout<<mayor<<" ";
			feli[aux]=LLONG_MIN;
			probadas[sabor[aux]]=1;
			m--;
		}
		else break;
	}
	cout<<felicidad;
	
	return 0;
}