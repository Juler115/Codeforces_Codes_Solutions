// Problem: E. Count The Blocks
// Contest: Codeforces - Educational Codeforces Round 84 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1327/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int maxn = 1e6 + 5;
const int mod = 998244351; //mod = mod2 - 2;
const int mod2 = 998244353;
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

void solve(){
	int n;
	cin>>n;
	vector<int>ans;
	for(int i=0;i<n;i++){
		if(i==0)ans.push_back(10);
		else ans.push_back((combi(n,n-i)*9*10)%mod2);
	}
	reverse(ans.begin(),ans.end());
	for(auto a:ans)cout<<a<<" ";
}

int32_t main()
{
	cin.tie(0);
	precalc();
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
