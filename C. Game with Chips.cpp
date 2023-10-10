// Problem: C. Game with Chips
// Contest: Codeforces - Educational Codeforces Round 84 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1327/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mk make_pair
#define s second
#define f first
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

int disx(int a,int c){
	return c-a;
}
int disy(int b,int d){
	return d-b;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<int,int>>dist;
	vector<pair<int,int>>obj;
	for(int i=0;i<k;i++)
	{
		int x,y;
		cin>>x>>y;
		dist.push_back(mk(x,y));
	}
	for(int i=0;i<k;i++)
	{
		int x,y;
		cin>>x>>y;
		obj.push_back(mk(x,y));
	}
	int ans=0;
	string dire="";
	while(!dist.empty()){
		auto ac=dist.back();
		dist.pop_back();
		int xc=disx(ac.f,1);
		int yc=disy(ac.s,1);
		ans+=abs(xc)+abs(yc);
		if(xc!=0){
			if(xc>0){
				string ss(abs(xc),'D');
				dire+=ss;
			}
			else{
				string ss(abs(xc),'U');
				dire+=ss;
			}
		}
		if(yc!=0){
			if(yc<0){
				string ss(abs(yc),'L');
				dire+=ss;
			}
			else{
				string ss(abs(yc),'R');
				dire+=ss;
			}
		}
		for(int i=0;i<dist.size();i++)
		{
			if(dist[i].f+xc>1)dist[i].f+=xc;
			else dist[i].f=1;
			if(dist[i].s+yc>1)dist[i].s+=yc;
			else dist[i].s=1;	
		}
	}
	//dire+=" ";
	sort(obj.begin(),obj.end(),greater<pair<int,int>>());
	pair<int,int>todas={1,1};
	while(!obj.empty()){
		auto ac=obj.back();
		obj.pop_back();
		int xc=disx(todas.f,ac.f);
		int yc=disy(todas.s,ac.s);
		ans+=abs(xc)+abs(yc);
		if(xc!=0){
			if(xc>0){
				string ss(abs(xc),'D');
				dire+=ss;
			}
			else{
				string ss(abs(xc),'U');
				dire+=ss;
			}
		}
		if(yc!=0){
			if(yc<0){
				string ss(abs(yc),'L');
				dire+=ss;
			}
			else{
				string ss(abs(yc),'R');
				dire+=ss;
			}
		}
		todas.f+=xc;
		todas.s+=yc;
	}
	
	if(ans>2*n*m)cout<<-1;
	else{
		cout<<ans<<"\n";
		cout<<dire;
	}
	
	return 0;
}
