// Problem: C. Yet Another Walking Robot
// Contest: Codeforces - Codeforces Round 617 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1296/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
		string s;
		cin>>n>>s;
		unordered_map<int,unordered_map<int,int>>vis;
		int x=0,y=0;
		int l=0,r=1000000,auxl=0;
		for(int i=1;i<=n;i++)
		{
			vis[x][y]=i;
			int ac=s[i-1];
			if(ac=='L')x--;
			else if(ac=='R')x++;
			else if(ac=='U')y++;
			else y--;
			if(vis[x][y]!=0){
				auxl=vis[x][y];
				if(r-l+1 > i-auxl+1)
				{
					l=auxl;
					r=i;
					auxl=i-1;
				}
			}
		}
		if(l==0 && r==1000000)cout<<-1<<"\n";
		else cout<<l<<" "<<r<<"\n";
	}
	
	return 0;
}

