// Problem: C. Drazil and Factorial
// Contest: Codeforces - Codeforces Round 292 (Div. 2)
// URL: https://codeforces.com/problemset/problem/515/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	
	vector<int>num;
	while(n--)
	{
		char c;
		cin>>c;
		int x=c-'0';
		if(x==9){
			num.pb(2);
			num.pb(3);
			num.pb(3);
			num.pb(7);
		}
		else if(x==8){
			num.pb(2);
			num.pb(2);
			num.pb(2);
			num.pb(7);
		}
		else if(x==6){
			num.pb(3);
			num.pb(5);
		}
		else if(x==4){
			num.pb(2);
			num.pb(2);
			num.pb(3);
		}
		else if(x!=1 && x!=0)
		{
			num.pb(x);
		}
	}
	sort(num.begin(),num.end(),greater<int>());
	for(auto a:num)cout<<a;
	
	return 0;
}
