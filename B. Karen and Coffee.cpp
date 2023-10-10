// Problem: B. Karen and Coffee
// Contest: Codeforces - Codeforces Round 419 (Div. 2)
// URL: https://codeforces.com/problemset/problem/816/B
// Memory Limit: 512 MB
// Time Limit: 2500 ms
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
	int n,k,q;
	cin>>n>>k>>q;
	vector<int>recetas(200001);
	for(int i=0;i<n;i++)
	{
		int l,r;
		cin>>l>>r;
		recetas[l]++;
		recetas[r+1]--;
	}
	int cant=0;
	for(int i=0;i<=200000;i++)
	{
		cant+=recetas[i];
		recetas[i]=cant;
	}
	for(int i=0;i<=200000;i++)
	{
		if(recetas[i]>=k)recetas[i]=1;
		else recetas[i]=0;
	}
	cant=0;
	for(int i=0;i<=200000;i++)
	{
		cant+=recetas[i];
		recetas[i]=cant;
	}
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		cout<<recetas[b]-recetas[a-1]<<"\n";
	}
	
	return 0;
}
