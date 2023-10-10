// Problem: E2. Reading Books (hard version)
// Contest: Codeforces - Codeforces Round 653 (Div. 3)
// URL: https://codeforces.com/contest/1374/problem/E2
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#define s second
#define f first
#define mk make_pair


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<int,int>>ambos,as,bs,ceros;
	vector<int>sol;
	for(int i=1;i<=n;i++){
		int t,a,b;
		cin>>t>>a>>b;
		if(a==1 && b==1)ambos.push_back(mk(t,i));
		else if(a==1 && b==0)as.push_back(mk(t,i));
		else if(a==0 && b==1)bs.push_back(mk(t,i));
		else ceros.push_back(mk(t,i));
	}
	sort(ambos.begin(),ambos.end(),greater<pair<int,int>>());
	sort(as.begin(),as.end(),greater<pair<int,int>>());
	sort(bs.begin(),bs.end(),greater<pair<int,int>>());
	int a=k,b=k;
	int ans=0;
	while(m>0){
		if(!ambos.empty() && !as.empty() && !bs.empty()){
			if(ambos.back().f<=as.back().f+bs.back().f){
				ans+=ambos.back().f;
				sol.push_back(ambos.back().s);
				ambos.pop_back();
				a--;
				b--;
				m--;
			}
			else{
				ans+=as.back().f+bs.back().f;
				sol.push_back(as.back().s);
				sol.push_back(bs.back().s);
				as.pop_back();
				bs.pop_back();
				a--;
				b--;
				m-=2;
	 		}	
			
		}
		else if(!ambos.empty()){
			ans+=ambos.back().f;
			sol.push_back(ambos.back().s);
			ambos.pop_back();
			a--;
			b--;
			m--;
		}
		else if(!as.empty() && !bs.empty()){
			ans+=as.back().f+bs.back().f;
			sol.push_back(as.back().s);
			sol.push_back(bs.back().s);
			as.pop_back();
			bs.pop_back();
			a--;
			b--;
			m-=2;
		}	
		if(!a && !b)break;
		if(ambos.empty() && (as.empty() || bs.empty()))break;
	}
	if(!a && !b){
		vector<pair<int,int>>res;
		while(!ambos.empty()){
			res.push_back(mk(ambos.back().f,ambos.back().s));
			ambos.pop_back();
		}
		while(!as.empty()){
			res.push_back(mk(as.back().f,as.back().s));
			as.pop_back();
		}
		while(!bs.empty()){
			res.push_back(mk(bs.back().f,bs.back().s));
			bs.pop_back();
		}
		while(!ceros.empty()){
			res.push_back(mk(ceros.back().f,ceros.back().s));
			ceros.pop_back();
		}
		sort(res.begin(),res.end(),greater<pair<int,int>>());
		while(m>0 && !res.empty()){
			ans+=res.back().f;
			res.pop_back();
			m--;
		}
		if(m<=0){
			cout<<ans<<"\n";
			for(auto a:sol)cout<<a<<" ";
		}
		else cout<<-1;
		
	}else cout<<-1;
	
	return 0;
}
