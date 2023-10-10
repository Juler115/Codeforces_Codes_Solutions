// Problem: A. Uncowed Forces
// Contest: Codeforces - Codeforces Round #334 (Div. 2)
// URL: https://codeforces.com/problemset/problem/604/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

ll cali(ll x,ll m,ll w)
{
	return max(x-x*m/250-50*w, x/10*3);
}


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n=5;
	vector<ll> m;
	for(int i=0;i<n;i++) {
		int aux; 
		cin>>aux; 
		m.pb(aux);
	}
	vector<ll> w;
	for(int i=0;i<n;i++) {
		int aux; 
		cin>>aux; 
		w.pb(aux);
	}
	ll hs,hw;
	ll score=0;
	cin>>hs>>hw;
	ll x=500;
	for(ll i=0;i<n;i++)
	{
		score+=cali(x,m[i],w[i]);
		x+=500;
	}
	score+=(hs*100);
	score-=(hw*50);
	cout<<score;
	
	
	return 0;
}
