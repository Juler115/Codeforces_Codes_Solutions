// Problem: B. Quasi Binary
// Contest: Codeforces - Codeforces Round 300
// URL: https://codeforces.com/problemset/problem/538/B
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
	
	int n;
	cin>>n;
	vector<int>usados;
	int l=1,n2=n,k=0;
	while(n2)
	{
		l*=10;
		k=max(k,n2%10);
		n2/=10;
	}
	cout<<k<<"\n";
	while(n>0)
	{
		string nus=to_string(n);
		string num="";
		for(int i=0;i<nus.size();i++)
		{
			if(nus[i]-'0'>0)
			{
				num+='1';
			}
			else num+='0';
		}
		n-=stoi(num);
		cout<<num<<" ";
	}
	
	return 0;
}
