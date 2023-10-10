// Problem: B. Special Numbers
// Contest: Codeforces - Codeforces Round #747 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1594/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll m=1e9+7;

long long powr(long long a,long long  b)
	{
		long long res=1;
		while(b){
			a%=m;
			if(b&1) res *=a;
			a*=a;
			b/=2;
			res%=m;
		}
		return res;
	}

ll special(ll n,ll k){
	ll num=0;
	ll pow=0;
	while(k)
	{
		if((k&1)==1) num+=powr(n,pow);
		num%=m;
		pow++;
		k=k>>1;
	}
	return num;
}


int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	ll t=0;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		cout<<special(n,k)<<"\n";
	}
	
	return 0;
}
