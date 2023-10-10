// Problem: A. Mainak and Array
// Contest: Codeforces - Codeforces Round #819 (Div. 1 + Div. 2) and Grimoire of Code Annual Contest 2022
// URL: https://codeforces.com/contest/1726/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		//cout<<n<<" ";
		vector<int> arr;
		int maxo=0,maxi=0,mino=1000,mini=0;
		for(int i=0;i<n;i++)
		{
			int aux;
			cin>>aux;
			arr.pb(aux);
			if(aux>=maxo)maxo=aux,maxi=i;
			if(aux<=mino)mino=aux,mini=i;
		}
		if(mini==0)cout<<maxo-mino<<"\n";
		else if(maxi==n-1)cout<<maxo-mino<<"\n";
		else
		{
			int suma=0;
			for(int i=0;i<n-1;i++)
			{
				if((arr[i]-arr[i+1])>suma) suma=arr[i]-arr[i+1];
			}
			if((arr[n-1]-arr[0])>suma) suma=arr[n-1]-arr[0];
			for(int i=1;i<n;i++)
			{
				if((arr[i]-arr[0])>suma) suma=arr[i]-arr[0];
				//cout<<arr[i]<<" "<<arr[0]<<"\n";
			}
			for(int i=0;i<n-1;i++)
			{
				if((arr[n-1]-arr[i])>suma) suma=arr[n-1]-arr[i];
				//cout<<arr[n-1]<<" "<<arr[i]<<"\n";
			}
			//cout<<arr[n];
			cout<<suma<<"\n";
		}
	}
	
	return 0;
}
