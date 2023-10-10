// Problem: B. Subsequence Hate
// Contest: Codeforces - Codeforces Round 646 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1363/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans=0;
		int suf0=0,suf1=0;
		for(auto i:s)
		{
			suf0+=(i=='0');
			suf1+=(i=='1');
		}
		ans = min(suf0, suf1);
		int pref0 = 0, pref1 = 0;
		for(auto &it:s)
		{
			pref0 += (it == '0'), suf0 -= (it == '0');
			pref1 += (it == '1'), suf1 -= (it == '1');
			//Cost of making string 0*1*
			ans = min(ans, pref1 + suf0);
			//Cost of making string 1*0*
			ans = min(ans, pref0 + suf1);
		}
		cout << ans << endl;
		
	}
	
	return 0;
}
