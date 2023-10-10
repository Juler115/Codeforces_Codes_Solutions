// Problem: A. Balanced Bitstring
// Contest: Codeforces - Codeforces Round 668 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1404/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
int n, k, t;
string s;


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin >> n >> k >> s;
        int zer = 0, one = 0;
        bool chk = true;
        for (int i = 0; i < k; i++) {
            int tmp = -1;
            for (int j = i; j < n; j += k) {
                if (s[j] != '?') {
                    if (tmp != -1 && s[j] - '0' != tmp) {
                        chk = false;
                        break;
                    }
                    tmp = s[j] - '0';
                }
            }
            if (tmp != -1) {
                (tmp == 0 ? zer : one)++;
            }
        }
        if (max(zer, one) > k / 2) {
            chk = false;
        }
        cout << (chk ? "YES\n" : "NO\n");
	}
	
	return 0;
}

