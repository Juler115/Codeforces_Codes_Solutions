#include <bits/stdc++.h>


using namespace std;

int main()
{
	int q,n;
	cin>>q>>n;
	
	int fila[n];
	for(int i=0;i<n;i++) cin>>fila[i];
	
	int pre[q];
	for(int i=0;i<q;i++) cin>>pre[i];
	int total=0;
	int can=0;
	
	for(int i=0;i<q;i++)
	{
		total=0;
		can=pre[i];
		for(int j=0;j<n;j++)
		{
			if(can>=fila[j])
			{
				can-=fila[j];
				total++;
			}
			else break;
		}
		cout<<total<<" "<<can;
		cout<<"\n";
		
	}
	
	
	return 0;
}
