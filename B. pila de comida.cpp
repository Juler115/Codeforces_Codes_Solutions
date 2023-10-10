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
		int n;
		cin>>n;
		stack<int> pila1;
		stack<int> auxi;
		for(int i=0;i<n;i++) 
		{
			int aux;
			cin>>aux;
			auxi.push(aux);	
		}
		for(int i=0;i<n;i++) 
		{
			int aux=auxi.top();
			auxi.pop();
			pila1.push(aux);	
		}
		stack<int> pila2;
		int cambios=0;
		int i=1;
			while(pila1.empty() || pila2.empty())
			{
				if(n==1)
				{
					cambios=0;
					break;
				}
				while(pila1.empty()!=1)
				{
				if(pila1.top()==i)
				{
					pila1.pop();
					i++;
				}
				else
				{
					int aux=pila1.top();
					pila1.pop();
					pila2.push(aux);
					cambios++;
				}
				}
				while(pila2.empty()!=1)
				{
				if(pila2.top()==i)
				{
					pila2.pop();
					i++;
				}
				else
				{
					int aux=pila2.top();
					pila2.pop();
					pila1.push(aux);
					cambios++;
				}
				}
			}
			
		cout<<cambios<<"\n";
	}
	
	return 0;
}
