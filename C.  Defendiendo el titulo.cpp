#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n=0;
	cin>>n;
	bool gan=1;
	char letra;
	int temp=0;
	int aux=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>letra;
		if(letra=='N')
		{
			cin>>aux;
			if(aux>=temp)
			{
				cout<<"SI"<<"\n";
				temp+=8;
			}
			else cout<<"NO"<<"\n";
			
		}
			else if(letra=='W') 
			{
				temp-=8;
			}
			else if(letra=='L') 
			{
				gan=false;
				temp-=8;
			}
	}
	if(gan)cout<<"INVICTO";
	else cout<<"MALO";
	
	return 0;
}
