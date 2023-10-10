// Problem: C. Berland Regional
// Contest: Codeforces - Educational Codeforces Round 108 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1519/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int32_t main()
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
		map<int,vector<int>>lista;
		vector<int>list(n+1,-1);
		vector<pair<int,int>>player;
		for(int i=0;i<n;i++){cin>>list[i];
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			player.push_back({x,list[i]});
		}
		sort(player.begin(),player.end(),greater<pair<int,int>>());
		for(auto a:player){
			int aux=0;
			if(!lista[a.s].empty()){
				aux=lista[a.s].back();
			}
			lista[a.s].push_back(a.f+aux);
		}
		for(int i=1;i<=n;i++){
			int ans=0;
			if(lista.empty()){
				for(int j=i;j<=n;j++){
					cout<<0<<" ";
				}
				goto fin;
			}
			for(auto b:lista){
				if(b.s.size()%i==b.s.size())continue;
				else ans+=b.s[b.s.size()-b.s.size()%i-1];
				if(b.s.size()<i)lista.erase(b.f);
			}
			cout<<ans<<" ";
		}
		fin:;
		cout<<"\n";
		
	}
	
	return 0;
}