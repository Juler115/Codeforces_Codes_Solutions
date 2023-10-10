// Problem: C. Constanze's Machine
// Contest: Codeforces - Codeforces Round 597 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1245/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int N=1e9+7;
int comb[1000000];

int recur(int num)
{
	if(num==1)return comb[1];
	if(num==2)return comb[2];
	if(comb[num]!=0)return comb[num];
	comb[num]=(recur(num-1)+recur(num-2))%N;
	return comb[num];
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	string s;
	cin>>s;
	comb[0]=1;
	comb[1]=1;
	comb[2]=2;
	int rep=1;
	int ans=1;
	s=' '+s+' ';
	for(int i=1;i<s.size();i++)
	{
		if(s[i-1]== 'm' || s[i-1]=='w')
		{
			cout<<0;
			return 0;
		}
		if(s[i-1]==s[i] && s[i]=='n')
		{
			rep++;
		}
		else if(s[i-1]==s[i] && s[i]=='u')
		{
			rep++;
		}
		else{
			ans*=recur(rep);
			ans%=N;
			rep=1;
		}
	}
	cout<<ans;
	
	return 0;
}
