// Problem: B. T-primes
// Contest: Codeforces - Codeforces Round 142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<bool> isPrime;
set<double> primes;
void criba(int n) {
    isPrime = vector<bool>(n, true);
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i<n; ++i) {
        if (isPrime[i]) {
            primes.insert(i);
            for (int h=2; h*i<n; ++h) isPrime[i*h] = 0;
        }
    }
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	int N=1000000+1;
	criba(N);
	while(t--)
	{
		int x;
		cin>>x;
		if(primes.find(sqrt(x)) != primes.end())
		{
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	
	return 0;
}
