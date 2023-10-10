#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define s second
#define f first



int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	ll n;
	unsigned ll mindis=1e19;
	cin>>n;
	vector<pair<ll,ll>> puntos;
	for(int i=0;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		puntos.pb({x,y});
	}
	sort(puntos.begin(),puntos.end());
	//sort(puntos.begin(),puntos.end());
	for(int i=0;i<n-1;i++)
	{ 
			cout<<puntos[i].f<<","<<puntos[i].s<<"\n";
			unsigned ll disx=abs(puntos[i].f-puntos[i+1].f);
			unsigned ll disy=abs(puntos[i].s-puntos[i+1].s);
			disx=disx*disx;
			disy=disy*disy;
			if(disx+disy<mindis)mindis=disx+disy;

	}
	cout<<mindis;
	
	return 0;
}
 