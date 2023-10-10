// Problem: E1. Reading Books (easy version)
// Contest: Codeforces - Codeforces Round 653 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1374/E1
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
#define s second
#define f first
#define mk make_pair


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	vector<int>ambos,as,bs;
	for(int i=0;i<n;i++){
		int t,a,b;
		cin>>t>>a>>b;
		if(a==1 && b==1)ambos.push_back(t);
		else if(a==1 && b==0)as.push_back(t);
		else if(a==0 && b==1)bs.push_back(t);
	}
	sort(ambos.begin(),ambos.end(),greater<int>());
	sort(as.begin(),as.end(),greater<int>());
	sort(bs.begin(),bs.end(),greater<int>());
	int a=k,b=k;
	int ans=0;
	while(true){
		if(!ambos.empty() && !as.empty() && !bs.empty()){
			if(ambos.back()<=as.back()+bs.back()){
				ans+=ambos.back();
				ambos.pop_back();
				a--;
				b--;
			}
			else{
				ans+=as.back()+bs.back();
				as.pop_back();
				bs.pop_back();
				a--;
				b--;
	 		}	
			
		}
		else if(!ambos.empty()){
			ans+=ambos.back();
			ambos.pop_back();
			a--;
			b--;
		}
		else if(!as.empty() && !bs.empty()){
			ans+=as.back()+bs.back();
			as.pop_back();
			bs.pop_back();
			a--;
			b--;
		}	
		if(!a && !b)break;
		if(ambos.empty() && (as.empty() || bs.empty()))break;
	}
	
	if(!a && !b){
		cout<<ans;
	}else cout<<-1;
	
	return 0;
}
