// Problem: C. Binary String Reconstruction
// Contest: Codeforces - Educational Codeforces Round 94 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1400/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		string s;
		cin>>s;
		int x;
		cin>>x;
		int n=s.size();
		string w(n,'1');
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				if(i+x<n)
				{
					w[i+x]='0';
				}
				if(i-x>=0){
					w[i-x]='0';
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			bool pasa=false;
			if(i+x<n)if(w[i+x]=='1')pasa=true;
			if(i-x>=0)if(w[i-x]=='1')pasa=true;
			if(s[i]=='0' && pasa)
			{
				cout<<-1<<"\n";
			}
		}
		cout<<w<<"\n";
	}
	return 0;
}
