// Problem: B. Spreadsheets
// Contest: Codeforces - Codeforces Beta Round 1
// URL: https://codeforces.com/problemset/problem/1/B
// Memory Limit: 64 MB
// Time Limit: 10000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int valorC(string s)
{
	int val=0;
	int j=1;
	for(int i=s.size()-1;i>=0;i--)
	{
		val+=j*(s[i]-'A'+1);
		j*=26;
	}
	return val;
}
char itoc(int n){
	if(n)
	return 'A'+n-1;
    return 'Z';
}
string Columna(int n)
{
	string ans;
	while(n){
         ans.push_back(itoc(n%26));
         if(n%26==0)n/=26,n--;
         else n/=26;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

string convierte(int r,int c,int tipe)
{
	string ans="";
	if(tipe==1)
	{
		ans+="R"+to_string(r)+"C"+to_string(c);
	}
	else{
		ans+=Columna(c)+to_string(r);
	}
	return ans;
}

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
		int n=s.size();
		string p1,p2,p3,p4;
		int i=0;
		for(;i<n;i++)
		{
			if(s[i]<'A' || s[i]>'Z')break;
			p1+=s[i];
		}
		for(;i<n;i++)
		{
			if(s[i]>'9' || s[i]<'0')break;
			p2+=s[i];
		}
		for(;i<n;i++)
		{
			if(s[i]<'A' || s[i]>'Z')break;
			p3+=s[i];
		}
		for(;i<n;i++)
		{
			if(s[i]>'9' || s[i]<'0')break;
			p4+=s[i];
		}
		int c=0,r=stoi(p2);
		string ans;
		if(p3=="" && p4==""){
			c=valorC(p1);
			ans=convierte(r,c,1);
		}
		else{
			c=stoi(p4);
			ans=convierte(r,c,2);
		}
		cout<<ans<<"\n";
		//cout<<Columna(688)<<"\n";
		
		
	}
	
	return 0;
}
