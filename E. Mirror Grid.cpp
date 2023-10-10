// Problem: E. Mirror Grid
// Contest: Codeforces - Codeforces Round 806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recieve the test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		//recive the nxn matrix
		int n;
		cin>>n;
		int grid[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				char x;
				cin>>x;
				grid[i][j]=x-'0';
			}
		}
		//make the necesary changes
		int ans=0;
		for(int i=0;i<(n+1)/2;i++)
		{
			for(int j=0;j<n/2;j++)
			{
				int nowi = i, nowj = j;
	            int oldnowj = nowj;
	            int sum = grid[nowi][nowj];
	            nowj = n-nowi-1;
	            nowi = oldnowj;
	            sum+=grid[nowi][nowj];
	            oldnowj = nowj;
	            nowj = n-nowi-1;
	            nowi = oldnowj;
	            sum+=grid[nowi][nowj];
	            oldnowj = nowj;
	            nowj = n-nowi-1;
	            nowi = oldnowj;
	            sum+=grid[nowi][nowj];
	            ans+=min(sum, 4-sum);
				
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}

