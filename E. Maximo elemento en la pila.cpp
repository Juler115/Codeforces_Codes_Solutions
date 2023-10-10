#include <bits/stdc++.h>

using namespace std;


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);


	int n=0;
	cin>>n;
	int aux=0;
	int aux2=0;
	int mayor=0;
	stack<int> pila;
	for(int i=0;i<n;i++)
	{
		cin>>aux;
		if(aux==1)
		{
			cin>>aux2;
			pila.push(aux2);
			if(aux2>mayor) mayor=aux2;
		}
		if(aux==2)
		{
			aux2=pila.top();
			pila.pop();
			if(aux2==mayor)mayor=pila.top();
		}
		if(aux==3)
		{
			cout<<mayor;
		}
		
		
		
	}
	return 0;
}
