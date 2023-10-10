// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	
	int s,n;
	bool pasa=true;
	cin>>s>>n;
	vector <int> dragones;
	vector <int> ganancia;
	for(int i=0;i<n;i++)
	{
		int aux,aux2;
		cin>>aux>>aux2;
		dragones.push_back(aux);
		ganancia.push_back(aux2);
	}
	
	while(dragones.size()>0)
	{	
		int minimo=100000,lugar=0;;
		n=dragones.size();
		for(int i=0;i<n;i++)
		{
			if(dragones[i]<minimo)
			{
				minimo=dragones[i];
				lugar=i;
			}
		}
		//cout<<dragones[lugar]<<"\n";
		if(minimo<s)
		{
			s+=ganancia[lugar];
			dragones.erase(dragones.begin()+lugar);
			ganancia.erase(ganancia.begin()+lugar);
			//cout<<n;
		}
		else
		{
			pasa=false;
			cout<<"NO";
			break;
		}
		//cout<<dragones[lugar]<<"\n";
	}
	if(pasa) cout<<"YES";
	
	return 0;
}
