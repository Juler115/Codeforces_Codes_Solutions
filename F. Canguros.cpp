#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int c,n;
	cin>>c>>n;
	
	char letra;
	int aux=0;
	queue<int> canguros;
	
	for(int j=0;j<n;j++)
	{
		cin>>letra;
		if(letra=='N')
		{
			cin>>aux;
			canguros.push(aux+1);
		}
			else if(letra=='A') 
			{
				c-=canguros.front();
				canguros.pop();
			}
			else if(letra=='C') 
			{
				cout<<canguros.size()<<"\n";
			}
			else if(letra=='R') 
			{
				cout<<c<<"\n";
			}
	}
	
	return 0;
}
