// Problem: F. Yet Another Problem About Pairs Satisfying an Inequality
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		long long res = 0;
		vector<int> v;
		for (int i = 1; i <= n; i++) {
			if (a[i] >= i) {continue;}
			res += (long long)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
			v.push_back(i);
		}
		cout << res << '\n';
		
	}
	
	return 0;
}