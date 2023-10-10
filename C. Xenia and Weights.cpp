// Problem: C. Xenia and Weights
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/C
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
    ios_base::sync_with_stdio(false);
	string p;
	cin>>p;
	int m;
	cin>>m;
	int a=-1,b=-1,c=-1;
	int i=0;
	for(auto s:p){
		i++;
		if(s-'0'==1 && a==-1)a=i;
		else if(s-'0'==1 && b==-1)b=i;
		else if(s-'0'==1 && c==-1)c=i;
	}
	if(a==-1 && m!=0)cout<<"NO";
	else if(a+b<2 && m!=1)cout<<"NO";
	else if(a+b+c<3 && m!=1 && m%2==0)cout<<"NO";
	else if(a+b+c<3 && m!=1 && m%2==0)cout<<"NO";
	else{
		bool pes=1;
		cout<<"YES\n";
		if(m%2==0)swap(a,c);
		for(int i=0;i<m;i++){
			if(i%b==0 && m%2==0)pes=!pes,cout<<(pes?a:c)<<" ";
			else cout<<(pes?a:b)<<" ";
			pes=!pes;
		}
		//if(m%2==0)cout<<(pes?a:b)<<" "<<c;
		
	}
	
	return 0;
}
