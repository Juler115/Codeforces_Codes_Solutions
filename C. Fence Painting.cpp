// Problem: C. Fence Painting
// Contest: Codeforces - Codeforces Round 699 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1481/C
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

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int pasa=1,need=0;
		vector<stack<int>>needs(n+1),exist(n+1);
		vector<int>ori(n),pre(n),ans;
		int malos=0;
		
		for(int i=0;i<n;i++)cin>>ori[i];
		for(int i=0;i<n;i++){
			cin>>pre[i];
			if(ori[i]!=pre[i])needs[pre[i]].push(i+1),need++;
		}
		for(int i=0;i<n;i++){
			if(exist[pre[i]].size()==0)exist[pre[i]].push(i+1);
		}
		while(m--){
			int c;
			cin>>c;
			if(needs[c].size()>0 && malos==0){
				ans.push_back(needs[c].top());
				need--;
				needs[c].pop();
			}
			else if(needs[c].size()>0 && malos!=0){
				while(malos>0){
					malos--;
					ans.push_back(needs[c].top());
				}
				ans.push_back(needs[c].top());
				need--;
				needs[c].pop();
			}
			else if(exist[c].size()!=0 && malos==0){
				ans.push_back(exist[c].top());
			}
			else if(exist[c].size()!=0 && malos!=0){
				while(malos>0){
					malos--;
					ans.push_back(exist[c].top());
				}
				ans.push_back(exist[c].top());
			}
			else{
				malos++;
			}
		}
		
		if(need<=0 && malos==0){
			cout<<"YES\n";
			for(auto a:ans)cout<<a<<" ";
			cout<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
