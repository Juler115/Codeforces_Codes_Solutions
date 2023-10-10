#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	
	bool pila=1,res=0;
	int a,b;
	int pri=0,primer=0;
	int ant=0;
	while(cin>>a>>b)
	{
		if(a==1 && primer==0)
		{
			ant=b;
			pri=b;
			primer=1;
			//cout<<"hola";
		}
		else if(a==1)
		{
			ant=b;
		}
		if(a==2 && res==0)
		{
			if(b==pri) pila=0;
			res=1;
		}
	}
	if(pila) cout<<"Pila";
	else cout<<"Cola";
	
	return 0;
}
