// Problem: D. Binary String To Subsequences
// Contest: Codeforces - Codeforces Round 661 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1399/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		int n;
		string s;
		cin >> n >> s;
		vector<int> ans(n);
		vector<int> pos0, pos1;
		for (int i = 0; i < n; ++i) {
			int newpos = pos0.size() + pos1.size();
			if (s[i] == '0') {
				if (pos1.empty()) {
					pos0.push_back(newpos);
				} else {
					newpos = pos1.back();
					pos1.pop_back();
					pos0.push_back(newpos);
				}
			} else {
				if (pos0.empty()) {
					pos1.push_back(newpos);
				} else {
					newpos = pos0.back();
					pos0.pop_back();
					pos1.push_back(newpos);
				}
			}
			ans[i] = newpos;
		}
		cout << pos0.size() + pos1.size() << endl;
		for (auto it : ans) cout << it + 1 << " ";
		cout << endl;
	}
	
	return 0;
}
