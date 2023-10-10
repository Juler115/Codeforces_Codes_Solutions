#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	char letra;
	int aux=0;
	int total=0;
	int i=1;
	map<int,int> posiciones;
	
	while(cin>>letra)
	{
		if(letra=='D')
		{
			cin>>aux;
			posiciones[aux]=i;
			total++;
			i++;
		}
			else if(letra=='P') 
			{
				cin>>aux;
				cout<<total-posiciones[aux]<<"\n";
				
			}
			else if(letra=='T') 
			{
				total--;
			}
	}
	
	return 0;
}
