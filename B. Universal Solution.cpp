// Problem: B. Universal Solution
// Contest: Codeforces - Educational Codeforces Round 91 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1380/B
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
	int t=0;
	cin>>t;
	while(t--)
	{
		string S;
		cin>>S;
		int r=0,p=0,s=0;
		for(auto a:S)
		{
			if(a=='R')r++;
			if(a=='P')p++;
			if(a=='S')s++;
		}
		char min;
		if(r>=p && r>=s)min='P';
		else if(p>=r && p>=s)min='S';
		else min='R';
		for(int i=0;i<S.size();i++)cout<<min;
		cout<<"\n";
		
	}
	
	return 0;
}
