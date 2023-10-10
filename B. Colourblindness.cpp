// Problem: B. Colourblindness
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		vector<char> fila1;
		vector<char> fila2;
		int n;
		bool iguales=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			char aux;
			cin>>aux;
			fila1.push_back(aux);
		}
		for(int i=0;i<n;i++)
		{
			char aux;
			cin>>aux;
			fila2.push_back(aux);
		}
		for(int i=0;i<n;i++)
		{
			if(fila1[i]==fila2[i])continue;
			else if((fila1[i]=='G'||fila1[i]=='B')&&(fila2[i]=='G'||fila2[i]=='B')) continue;
			else iguales=0;
		}
		if(iguales)cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	
	return 0;
}
