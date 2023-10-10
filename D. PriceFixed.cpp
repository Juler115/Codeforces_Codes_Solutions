// Problem: D. PriceFixed
// Contest: Codeforces - Codeforces Round 727 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1539/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#define mk make_pair
#define s second
#define f first

bool comp(const pair<int,int> &a,
			const pair<int,int> &b){
				
	return a.second<b.second;	
}

void solve(){
	int n;
	cin>>n;
	vector<pair<int,int>>p(n);
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		p[i]={a,b};
	}
	sort(p.begin(),p.end(),comp);
	//for(auto a:p)cout<<a.f<<" "<<a.s<<"\n";
	int ans=0,cant=0;
	for(int l=0;l<p.size();){
		while(p.size()>l && cant < p[l].s){
			if(cant+p.back().f<=p[l].s){
				//cout<<"hola"<<"-\n";
				cant+=p.back().f;
				ans+=p.back().f*2;
				p.pop_back();
			}
			else{
				int aux=p[l].s-cant;
				cant+=aux;
				ans+=aux*2;
				p.back().f-=aux;
			}
		}
		//cout<<cant<<" "<<ans<<"\n";
		if(p.size()<=l)break;
		cant+=p[l].f;
		ans+=p[l].f;
		l++;
		//cout<<cant<<" "<<ans<<"\n";
	}
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
