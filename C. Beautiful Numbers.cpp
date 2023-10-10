// Problem: C. Beautiful Numbers
// Contest: Codeforces - Codeforces Round 181 (Div. 2)
// URL: https://codeforces.com/problemset/problem/300/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

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
int a,b;

bool good(int n){
	while(n>0){
		if(n%10!=a && n%10!=b){
			return false;
		}
		n/=10;
	}
	return true;
}

void solve(){
	int n;
	cin>>a>>b>>n;
	int num=a*n;
	int ans=0;
	for(int i=0;i<=n && num<=b*n;i++){
		if(good(num)){
			ans+=combi(n,i);
			ans%=mod2;
			//cout<<i<<"\n";
		}
		num+=abs(b-a);
	}
	cout<<ans<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    precalc();
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
