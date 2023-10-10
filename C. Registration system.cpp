// Problem: C. Registration system
// Contest: Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/C
// Memory Limit: 64 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	unordered_map<string,int> data;
	while(t--)
	{
		string s;
		cin>>s;
		if(data[s]==0)
		{
			data[s]=1;
			cout<<"OK\n";
		}
		else{
			cout<<s<<data[s]<<"\n";
			data[s]++;
		}
		
	}
	
	return 0;
}
