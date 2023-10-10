// Problem: C. Product of Three Numbers
// Contest: Codeforces - Codeforces Round 615 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1294/C
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
		cin>>n;
		if(n<24){
			cout<<"NO\n";
			continue;
		}
		int a=1,b=1,c=1;
		for(int i=2;i<10000;i++)
		{
			if(n%i==0){
				a=i;
				break;
			}
		}
		n/=a;
		for(int i=2;i<10000;i++)
		{
			if(i==a)continue;
			if(n%i==0){
				b=i;
				break;
			}
		}
		n/=b;
		c=n;
		if(a==1 || b==1 || c==1 || b==c || a==c)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n"<<a<<" "<<b<<" "<<c<<"\n";
	}
	
	return 0;
}
