// Problem: D. Soldier and Number Game
// Contest: Codeforces - Codeforces Round 304 (Div. 2)
// URL: https://codeforces.com/problemset/problem/546/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N=5e6+1;

vector<bool> isPrime;
vector<int> primes;
vector<int> mini;
void criba(int n) {
    isPrime = vector<bool>(n, true);
    mini= vector<int>(n,1);
    primes = vector<int>();
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i<n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int h=2; h*i<n; ++h) {
            	isPrime[i*h] = 0;
            	mini[i*h]=i;
            }
        }
    }
}
vector<int>dp(N,0);

int min_div(int n){
	if(isPrime[n]==1)return n;
	else{
		return mini[n];
	}
}

void solve(){
	int a,b;
	cin>>a>>b;
	int n=1;
	for(int i=b+1;i<=a;i++){
		n*=i;
	}
	int ans=0;
	int aux=n;
	int ans2=0;
	int aux2=b;
	while(aux>2){
		aux/=2;
		ans++;
	}
	while(aux2>2){
		aux2/=2;
		ans2++;
	}
	if(n&1==1)ans++;
	if(b&1==1)ans2++;
	cout<<ans-ans2+1<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    criba(N);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<5000000;i++){
    	dp[i]=dp[i/min_div(i)]+1;
    }
    int maxi=0;
    for(int i=0;i<N;i++){
    	maxi=max(maxi,dp[i]);
    	dp[i]=maxi;
    }
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
