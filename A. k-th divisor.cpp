// Problem: A. k-th divisor
// Contest: Codeforces - Educational Codeforces Round 17
// URL: https://codeforces.com/problemset/problem/762/A
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
	int n,k;
	cin>>n>>k;
	vector<int>divi;
	//divi.push_back(0);
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0){
			divi.push_back(i);
			if(i!=n/i)divi.push_back(n/i);
		}
	}
	sort(divi.begin(),divi.end());
	if(divi.size() >=k && n>=k)cout<<divi[k-1];
	else cout<<-1;
	
	return 0;
}
