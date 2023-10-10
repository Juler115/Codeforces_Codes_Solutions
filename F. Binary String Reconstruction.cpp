// Problem: F. Binary String Reconstruction
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/F
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
		int n0,n1,n2;
		cin>>n0>>n1>>n2;
		string ans="";
		if(n1==0 && n2!=0)
		{
			ans=string(n2+1,'1');
		}
		else if(n1==0 && n0!=0)
		{
			ans=string(n0+1,'0');
		}
		else{
			
			for (int i = 0; i < n1 + 1; ++i) {
				if (i & 1) ans += "0";
				else ans += "1";
			}
			ans.insert(1, string(n0, '0'));
			ans.insert(0, string(n2, '1'));
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}
