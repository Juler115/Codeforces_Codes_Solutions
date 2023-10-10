// Problem: C. Find and Replace
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

bool solve(string s)
{
	int n=s.size();
	map<char,int>vis;
	for(int i=0;i<n;i++)vis[s[i]]=-1;
	for(int i=0;i<n;i++)
	{
		char ac=s[i];
		if(i%2==0){
			if(vis[ac]==-1 || vis[ac]==0)
			{
				vis[ac]=0;
			}
			else return false;
		}
		else{
			if(vis[ac]==-1 || vis[ac]==1)
			{
				vis[ac]=1;
			}
			else return false;
		}
	}
	return true;
}

int main()
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
		string s;
		cin>>s;
		cout<<(solve(s)?"YES":"NO")<<"\n";
	}
	
	return 0;
}
