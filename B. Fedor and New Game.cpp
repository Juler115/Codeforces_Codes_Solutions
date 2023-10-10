// Problem: B. Fedor and New Game
// Contest: Codeforces - Codeforces Round #267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> arm;
    ll amigos=0;
    for(int i=0;i<m+1;i++)
    {
    	int aux;
    	cin>>aux;
    	arm.pb(aux);
    }
	for(int i=0;i<m;i++)
	{
		ll amigo=arm[i]^arm[m];
		ll cambios=k;
		while(amigo)
		{
			if((amigo&1)==1) cambios--;
			amigo=amigo>>1;
		}
		if(cambios>=0) amigos++;
	}
	cout<<amigos;
	
	return 0;
}
