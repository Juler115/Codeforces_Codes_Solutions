// Problem: B. Parity Sort
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/contest/1851/problem/B
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		priority_queue<int,vector<int>,greater<int>>odd,even;
		vector<int>order;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x%2==0)even.push(x),order.push_back(1);
			else odd.push(x),order.push_back(0);
		}
		int ante=0;
		for(auto a:order){
			if(a==1){
				if(even.top()<ante){
					cout<<"NO\n";
					//cout<<ante<<"\n";
					goto fin;
				}
				else{
					ante=even.top();
					even.pop();
				}
			}else{
				if(odd.top()<ante){
					cout<<"NO\n";
					//cout<<odd.top()<<"\n";
					goto fin;
				}
				else{
					ante=odd.top();
					odd.pop();
				}
			}
		}
		cout<<"YES\n";
		fin:;
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
