// Problem: C. Carrying Conundrum
// Contest: Codeforces - Codeforces Round 742 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1567/C
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
		string s,a,b;
		cin>>s;
		if(s.size()%2==0){
			for(int i=0;i<s.size();i++){
				if(i&1)b+=s[i];
				else a+=s[i];
			}
		}else{
			for(int i=0;i<s.size();i++){
				if(!(i&1))b+=s[i];
				else a+=s[i];
			}
		}
		if(a=="")a+='0';
		if(b=="")b+='0';
		int x1=stoi(a),x2=stoi(b);
		cout<<(x1+1)*(x2+1)-2<<"\n";
	}
	
	return 0;
}
