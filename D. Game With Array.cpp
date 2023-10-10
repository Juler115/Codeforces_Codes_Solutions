// Problem: D. Game With Array
// Contest: Codeforces - Codeforces Round 643 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1355/D
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
	int n,s;
	cin>>n>>s;
	vector<int>ans;
	for(int i=0;i<n-1;i++)
	{
		ans.push_back(2);
		s-=2;
	}
	if(s<=0 || s==1)cout<<"NO";
	else{
		cout<<"YES\n";
		for(auto a:ans)cout<<a<<" ";
		cout<<s<<"\n";
		cout<<1;
	}
	
	return 0;
}
