// Problem: D. Another Problem About Dividing Numbers
// Contest: Codeforces - Codeforces Round 725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/D
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
		int a,b,k;
		cin>>a>>b>>k;
		if(k==1){
			if(max(a,b)%min(a,b)==0 && max(a,b)/min(a,b)>1){
				cout<<"YES\n";
				continue;
			}else{
				cout<<"NO\n";
				continue;
			}
		}else if(k==2 && a!=1 && b!=1){
			cout<<"YES\n";
			continue;
		}else{
			while(a>1 && k>=2){
				bool pasa=false;
				for(int i=2;i<sqrt(a);i++){
					if(a%i==0){
						a/=i;
						pasa=true;
						k--;
					}
				}
				if(!pasa){
					a=1;
					k--;
				}	
			}
			if(k==1 && b!=1 && a==1){
				cout<<"YES\n";
				continue;
			}
			while(b>1 && k>=2){
				bool pasa=false;
				for(int i=2;i<sqrt(b);i++){
					if(b%i==0){
						b/=i;
						pasa=true;
						k--;
					}
				}
				if(!pasa){
					b=1;
					k--;
				}	
			}
			if(k==1 && (b!=1)||(a!=1)){
				cout<<"YES\n";
				continue;
			}
		}
		cout<<"NO\n";
	}
	
	return 0;
}
