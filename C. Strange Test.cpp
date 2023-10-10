// Problem: C. Strange Test
// Contest: Codeforces - Codeforces Round 769 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1632/C
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


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int a, b; 
		cin>>a>>b;
        int cur = a, ans1 = 0, ans2 = 0;
        while( (cur | b) != b){
            cur--, ans1++;
        }
        ans1++;
        cur = a;
        while( (cur | b) != b){
            cur++, ans2++;
        }
        if(cur != b) ans2++;
        cout << min(ans1, ans2) << endl;
	}
	
	return 0;
}
