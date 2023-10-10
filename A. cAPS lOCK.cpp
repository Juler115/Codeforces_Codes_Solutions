// Problem: A. cAPS lOCK
// Contest: Codeforces - Codeforces Beta Round 95 (Div. 2)
// URL: https://codeforces.com/problemset/problem/131/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
	bool prim=0,mayus=1;
	if(s[0]>='A' && s[0]<='Z')prim=1; 
	for(int i=1;i<s.size();i++)
	{
		if(s[i]<'A' || s[i]>'Z')mayus=0;
	}
	if(!prim && mayus)return 1;
	if(prim && mayus)return 2;
	return 0;
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	string s;
	cin>>s;
	if(solve(s)==1){
		s[0]-=32;
		for(int i=1;i<s.size();i++)
		{
			s[i]=s[i]+32;
		}
	}
	else if(solve(s)==2)
	{
		for(int i=0;i<s.size();i++)
		{
			s[i]=s[i]+32;
		}
	}
	cout<<s;
	return 0;
}
