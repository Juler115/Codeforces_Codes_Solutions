// Problem: B. Dreamoon and WiFi
// Contest: Codeforces - Codeforces Round 272 (Div. 2)
// URL: https://codeforces.com/problemset/problem/476/B
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

const int maxn = 1e6 + 5;
const int mod = 1e9+5; //mod = mod2 - 2;
const int mod2 = 1e9+7;
vector <int> f;
 
void precalc(){
    //Precalculate aint the factorials:
    f.resize(maxn);
    int fact = 1;
    f[0] = 1;
    for (int i = 1; i<maxn-4; i++){
        f[i] = fact;
        fact = ((fact*(i+1))%mod2)%mod2;
    }
}
 
int exponentiate(int b){
    int expo = b;
    int pot = 1;
    int ans = 1;
    for (int i = 1; i<=31; i++){
        if ((pot | mod) == mod){
            ans = (ans*expo)%mod2;
        }
        expo = (expo*expo)%mod2;
        pot *= 2;
    }
    return ans;
}
// no olvides precalcular antes de los test cases precalc();
int combi(int a,int b){
	b = (f[b]*f[a-b])%mod2;
    int inverse = exponentiate(b);
    return(f[a]*inverse)%mod2;
}

long long powr(long long a,long long  b)
	{
		long long res=1;
		while(b){
			if(b&1) res *=a;
			a*=a;
			b/=2;
		}
		return res;
	}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(15);
    precalc();
	string a,b;
	cin>>a>>b;
	int desti=0,ori=0,aux=0,maxi=1;
	for(auto u:a){
		if(u=='+')desti++;
		else desti--;
	}
	for(auto u:b){
		if(u=='+')ori++;
		else if(u=='-')ori--;
		else aux++;
	}
	int nes=abs(desti-ori);
	nes=(aux+nes)/2;
	if(aux<nes)cout<<(double)0;
	else cout<<(double)((double)combi(aux,nes)/(double)(powr(2,aux)));
	
	
	
	
	return 0;
}