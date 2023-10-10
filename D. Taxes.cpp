// Problem: D. Taxes
// Contest: Codeforces - Codeforces Round 382 (Div. 2)
// URL: https://codeforces.com/problemset/problem/735/D
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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	if(isPrime(n))cout<<1;
	else if(n%2==0 || isPrime(n-2))cout<<2;
	else cout<<3;
	
	return 0;
}