// Problem: A. Badge
// Contest: Codeforces - UP-Practica2-EDAIII
// URL: https://codeforces.com/gym/433226/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define pb push_back

vector<int> st[1000];
queue<int> q;
bool vis[1000];



int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int x;
		cin>>x;
		st[i].pb(x);
	}
	for(int i=1;i<=t;i++)
	{
		while(!q.empty())q.pop();
		for(int i=1;i<=t;i++)vis[i]=false;
		q.push(i);
		while(!q.empty()){
			int x=q.front();
			q.pop();
			if(!vis[x]){
				vis[x]=true;
				q.push(st[x][0]);
			}
			else {
				cout<<x<<" ";
				break;
			}	
		}
	}
	
	return 0;
}
