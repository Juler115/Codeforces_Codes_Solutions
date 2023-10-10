// Problem: B. Plus and Multiply
// Contest: Codeforces - Codeforces Round 729 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1542/B
// Memory Limit: 512 MB
// Time Limit: 3000 ms
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
		int a,b,n;
		cin>>n>>a>>b;
		bool pasa=false;
		if(a==1){
			if((n-1)%b==0){
				cout<<"YES\n";
				continue;
			}
			else {
				cout<<"NO\n";
				continue;
			}
		}
		int q=1;
		while(q<=n)
		{
			if(n%b==q%b)
			{
				pasa=true;
				break;
			}
			else{
				q*=a;
			}
		}
		if(pasa){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
		
	}
	
	return 0;
}
