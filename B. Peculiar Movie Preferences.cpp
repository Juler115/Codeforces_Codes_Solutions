// Problem: B. Peculiar Movie Preferences
// Contest: Codeforces - Codeforces Round 767 (Div. 1)
// URL: https://codeforces.com/contest/1628/problem/B
// Memory Limit: 512 MB
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
		map<string,int>list;
		list.clear();
		for(int i=1;i<=n;i++){
			string s;
			cin>>s;
			list[s]=i;
		}
		//for(auto a:list)cout<<a.f<<" "<<a.s<<"\n";
		int i=1;
		for(auto a:list){
			if(a.s==0)continue;
			string aux=a.f;
			reverse(aux.begin(),aux.end());
			//cout<<aux<<" ";
			if(list[aux]!=0 && list[aux]>=i){
				cout<<"YES\n";
				goto fin;
			}
			if(aux.size()==3){
				string it=(aux.substr(0,2));
				if(list[it]!=0 && list[it]<i){
					cout<<"YES\n";
					goto fin;
				}
				it=(aux.substr(1,2));
				if(list[it]!=0 && list[it]>i){
					cout<<"YES\n";
					goto fin;
				}
			}
			i++;
		}
		cout<<"NO\n";
		fin:;
	}
	
	return 0;
}
