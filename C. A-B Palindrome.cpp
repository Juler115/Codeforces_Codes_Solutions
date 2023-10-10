// Problem: C. A-B Palindrome
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/contest/1512/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		for(auto a:s){
			if(a=='0')x--;
			else if(a=='1') y--;
		}
		int i=0,j=0;
		int x2=x,y2=y;
		string s2=s;
		for(i=0,j=s.size()-1;i<(s.size()/2);i++,j--)
		{
			if(s[i]=='0' && s[j]=='?'){
				s[j]='0';
				x--;
			}
			else if(s[i]=='?' && s[j]=='0'){
				s[i]='0';
				x--;
			}
			else if(s[i]=='1' && s[j]=='?'){
				s[j]='1';
				y--;
			}
			else if(s[i]=='?' && s[j]=='1'){
				s[i]='1';
				y--;
			}
			else if(s[i]=='?' && s[j]=='?'){
				if(y>=2){
					s[i]='1';
					s[j]='1';
					y-=2;
				}
				else if(x>=2){
					s[i]='0';
					s[j]='0';
					x-=2;
				}
			}
		}
		for(i=0,j=s2.size()-1;i<(s2.size()/2);i++,j--)
		{
			if(s2[i]=='0' && s2[j]=='?'){
				s2[j]='0';
				x2--;
			}
			else if(s2[i]=='?' && s2[j]=='0'){
				s2[i]='0';
				x2--;
			}
			else if(s2[i]=='1' && s2[j]=='?'){
				s2[j]='1';
				y2--;
			}
			else if(s2[i]=='?' && s2[j]=='1'){
				s2[i]='1';
				y2--;
			}
			else if(s2[i]=='?' && s2[j]=='?'){
				if(x>=2){
					s2[i]='0';
					s2[j]='0';
					x2-=2;
				}
				else if(y>=2){
					s2[i]='1';
					s2[j]='1';
					y2-=2;
				}
			}
		}
		//cout<<s<<"\n";
		//cout<<s2<<"\n";
		i=0;
		for(;i<s.size();i++){
			if(s[i]=='?'){
				if(x>0){
					s[i]='0';
					x--;
				}
				else if(y>0){
					s[i]='1';
					y--;
				}
			}
		}
		i=0;
		for(;i<s2.size();i++){
			if(s2[i]=='?'){
				if(y2>0){
					s2[i]='1';
					y2--;
				}
				else if(x2>0){
					s2[i]='0';
					x2--;
				}
			}
		}
		if((x!=0 || y!=0) && (x2!=0 || y2!=0)){
			cout<<-1<<"\n";
			continue;
		}
		string aux=s,aux2=s2;
		reverse(s.begin(),s.end());
		reverse(s2.begin(),s2.end());
		if(s==aux)cout<<s<<"\n";
		else if(s2==aux2)cout<<s2<<"\n";
		else cout<<-1<<"\n";
	}
	
	return 0;
}
