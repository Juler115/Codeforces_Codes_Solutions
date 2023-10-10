// Problem: A. Hulk
// Contest: Codeforces - Codeforces Round 366 (Div. 2)
// URL: https://codeforces.com/problemset/problem/705/A
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
	int n;
	cin>>n;
	vector<string> ans;
	for(int i=0;i<n;i++)
	{
		if(i%2==0){
			ans.push_back("I");
			ans.push_back("hate");
			ans.push_back("that");
		}
		else{
			ans.push_back("I");
			ans.push_back("love");
			ans.push_back("that");
		}
	}
	ans[ans.size()-1]="it";
	for(auto a:ans)cout<<a<<" ";
	
	return 0;
}
