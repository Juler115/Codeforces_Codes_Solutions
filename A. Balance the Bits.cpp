// Problem: A. Balance the Bits
// Contest: Codeforces - Codeforces Round 712 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1503/A
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int cnt = 0;
	    for(int i = 0; i < n; i++) {
	        cnt += (s[i] == '1');
	    }
		bool lado=0;
		string a,b;
		bool pasa=true;
		int k=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				a+=(2*k<cnt?'(':')');
				b+=(2*k<cnt?'(':')');
				k++;
			}else{
				if(!lado){
					a+=')';
					b+='(';
					lado=!lado;
				}else{
					a+='(';
					b+=')';
					lado=!lado;
				}
			}
		}
		if(a[0]!='(' || b[0]!='(' || a[n-1]!=')' || b[n-1]!=')')pasa=false;
		if(count(s.begin(),s.end(),'1')%2!=0)pasa=false;
		cout<<(pasa?"YES":"NO")<<"\n";
		if(pasa)cout<<a<<"\n"<<b<<"\n";
	}
	
	return 0;
}
