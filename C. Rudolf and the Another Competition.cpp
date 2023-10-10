// Problem: C. Rudolf and the Another Competition
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/C
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m,h;
		cin>>n>>m>>h;
		vector<int>aux;
		pair<int,int>rudolf;
		int ans=1,h2=h;
		
		for(int j=0;j<m;j++){
			int x;
			cin>>x;
			aux.push_back(x);
		}
		sort(aux.begin(),aux.end(),greater<int>());
		int mal=0,cant=0,ini=0;
		while(!aux.empty() && h>=aux.back()){
			h-=aux.back();
			ini+=aux.back();
			mal+=ini;
			cant++;
			aux.pop_back();
		}
		rudolf={cant,mal};
		
		for(int i=1;i<n;i++){
			aux.clear();
			h=h2;
			for(int j=0;j<m;j++){
				int x;
				cin>>x;
				aux.push_back(x);
			}
			sort(aux.begin(),aux.end(),greater<int>());
			mal=0,cant=0,ini=0;
			while(!aux.empty() && h>=aux.back()){
				h-=aux.back();
				ini+=aux.back();
				mal+=ini;
				cant++;
				aux.pop_back();
			}
			//cout<<cant<<" "<<mal<<"\n";
			if(cant>rudolf.first)ans++;
			else if(cant==rudolf.first && mal<rudolf.second)ans++;
		}
		cout<<ans<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
