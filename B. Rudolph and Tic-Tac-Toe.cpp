// Problem: B. Rudolph and Tic-Tac-Toe
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

vector<string>s(3);
char check(char c,int i,int j){
	
	if(s[i][0]==c && s[i][1]==c && s[i][2]==c)return c;
	if(s[0][j]==c && s[1][j]==c && s[2][j]==c)return c;
	if(s[0][0]==c && s[1][1]==c && s[2][2]==c)return c;
	if(s[0][2]==c && s[1][1]==c && s[2][0]==c)return c;

	return 'h';
}

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		//s.clear();
		cin>>s[0]>>s[1]>>s[2];
		//for(int i=0;i<3;i++)cout<<s[i]<<"\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(s[i][j]=='.')continue;
				char ans=check(s[i][j],i,j);
				if(ans=='X'){
					cout<<"X\n";
					goto fin;
				}
				else if(ans=='O'){
					cout<<"O\n";
					goto fin;
				}
				else if(ans=='+'){
					cout<<"+\n";
					goto fin;
				}
			}
		}
		cout<<"DRAW\n";
		fin:;
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
