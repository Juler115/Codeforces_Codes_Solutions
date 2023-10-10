// Problem: B. Partial Replacement
// Contest: Codeforces - Codeforces Round 710 (Div. 3)
// URL: https://codeforces.com/contest/1506/problem/B
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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int ans=0;
		
		for(int i=0;i<n;)
		{
			if(s[i]=='*'){
				ans++;
				s[i]='+';
				for(int j=i+k;j>=i;)
				{
					if(j>=n)
					{
						j--;
						continue;
					}
					else if(s[j]=='*'){
						//cout<<j<<" ";
							s[j]='+';
							ans++;
							i=j;
							j=i+k;
					}
					else j--;
				}
				break;
			}
			else i++;
		}
		//cout<<s;
		cout<<ans<<"\n";
	}
	
	return 0;
}
