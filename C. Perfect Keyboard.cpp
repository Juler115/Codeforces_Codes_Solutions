// Problem: C. Perfect Keyboard
// Contest: Codeforces - Educational Codeforces Round 82 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1303/C
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s.size()==1){
			cout<<"YES\nabcdefghijklmnopqrstuvwxyz\n";
			continue;
		}
		vector<bool>vis(26);
		vector<set<int>>adj(26);
		int prim;
		for(int i=1;i<s.size();i++){
			adj[s[i-1]-'a'].insert(s[i]-'a');
			adj[s[i]-'a'].insert(s[i-1]-'a');
		}
		/*int i=0;
		for(auto a:adj){
			if(a.size()==0){i++;continue;}
			cout<<i<<": ";
			for(auto b:a){
				cout<<b<<" ";
			}
			cout<<"\n";
			i++;
		}
		*/
		bool pasa=true;
		int unos=0;
		int i=0;
		for(auto a:adj){
			if(a.size()==1)prim=i,unos++;
			i++;
		}
		if(unos!=2){
			cout<<"NO\n";
			continue;
		}
		string ans;
		queue<int>q;
		q.push(prim);
		while(!q.empty()){
			int x=q.front();
			q.pop();
			vis[x]=true;
			ans+=x+'a';
			for(auto a:adj[x]){
				if(!vis[a]){
					vis[a]=true;
					q.push(a);
				}
			}
			
		}
		i=0;
		for(auto a:vis){
			if(a==0)ans+=i+'a';
			i++;
		}
		cout<<"YES\n";		
		cout<<ans<<"\n";
	}
	
	return 0;
}
