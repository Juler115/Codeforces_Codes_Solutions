// Problem: A. Simply Strange Sort
// Contest: Codeforces - Codeforces Round #740 (Div. 2, based on VK Cup 2021 - Final (Engine))
// URL: https://codeforces.com/contest/1561/problem/A
// Memory Limit: 512 MB
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
	int t=0;
	cin>>t;
	for(int a=0;a<t;a++)
	{
	int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int ans = 0;
    while (!is_sorted(arr.begin(), arr.end())) {
      for (int i = ans % 2; i + 1 < n; i += 2) {
        if (arr[i] > arr[i + 1]) {
          swap(arr[i], arr[i + 1]);
        }
      }
      ans += 1;
    }
    cout << ans << endl;
	
	}
	
	return 0;
}
