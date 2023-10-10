// Problem: D. Good Substrings
// Contest: Codeforces - Codeforces Round 166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/D
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

vector<int>malos(26);
set<string>subs;

void getsubs(string s){
	for (int i = 0; i < s.size(); i++)
        for (int len = 1; len <= s.size() - i; len++)
        {   
        	if(subs.find(s.substr(i, len))!=subs.end())return;
        	subs.insert(s.substr(i, len));
        }
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	string s,s2;
	cin>>s>>s2;
	int k;
	cin>>k;
	for(int i=0;i<26;i++)malos[i]=s2[i]-'0';
	s+='#';
	int l=0,i,mal=0;
	for(i=0;i<s.size();i++){
		int c=s[i]-'a';
		if(s[i]=='#'){
			//cout<<s.substr(l,i-l)<<"\n";
			getsubs(s.substr(l,i-l));
		}
		if(malos[c]==0){
			if(mal==k){
				//cout<<s.substr(l,i-l)<<"\n";
				getsubs(s.substr(l,i-l));
				while(mal==k){
					if(malos[s[l]-'a']==0)mal--;
					l++;
				}
				mal++;
			}else mal++;
		}
	}
	//for(auto a:subs)cout<<a<<"\n";
	cout<<subs.size();
	
	
	return 0;
}
