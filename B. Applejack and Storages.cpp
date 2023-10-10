// Problem: B. Applejack and Storages
// Contest: Codeforces - Codeforces Round 662 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1393/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	unordered_map<int,int> lista;
	int n2=0,n4=0,n6=0,n8=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		lista[x]++;
		if(lista[x]==2)n2++;
		if(lista[x]==4)n4++;
		if(lista[x]==6)n6++;
		if(lista[x]==8)n8++;
		
	}
	int q;
	cin>>q;
	while(q--){
		char s;
		int x;
		cin>>s>>x;
		if(s=='+'){
			lista[x]++;
			if(lista[x]==2)n2++;
			if(lista[x]==4)n4++;
			if(lista[x]==6)n6++;
			if(lista[x]==8)n8++;
		}
		else {
			if(lista[x]==2)n2--;
			if(lista[x]==4)n4--;
			if(lista[x]==6)n6--;
			if(lista[x]==8)n8--;
			lista[x]--;
		}
		
		if(n8 >= 1) cout<<"YES\n";
      	else if(n6 >= 1 && n2 >= 2) cout<<"YES\n";
      	else if(n4 >= 2) cout<<"YES\n";
      	else if(n4 >= 1 && n2 >= 3) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
