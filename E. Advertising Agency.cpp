// Problem: E. Advertising Agency
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/E
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

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    precalc();
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		set<int>nums;
		map<int,int>op;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			op[x]++;
			nums.insert(x);
		}
		int ans=1;
		//for(auto a:nums)cout<<a<<" ";
		auto it=nums.end();
		while(k>0){
			ans*=combi(op[*it],min(k,op[*it]));
			//cout<<op[nums[i]]<<"\n";
			ans%=mod2;
			k-=op[*it];
			it--;
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
