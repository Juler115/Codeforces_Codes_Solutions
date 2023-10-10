// Problem: C. Counting Orders
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/contest/1828/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
const int M=1e9+7;

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
		vector<int>a(n),b(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		vector<int>maneras;
		int ans=1,ac=0,j=0,menos=0;
		for(int i=0;i<n && j<n;){
			if(b[i]<a[j])ac++,i++;
			else{
				if(i==0 || j==n-1){
					cout<<0<<"\n";
					goto fin;
				}
				maneras.push_back(ac);
				j++;
			}
		}
		while(j<n){
			maneras.push_back(ac);
			j++;
		}
		for(auto a:maneras){
			if(a-menos <=0){
				cout<<0<<"\n";
				goto fin;
			}
			ans*=(a-menos);
			//cout<<a-menos<<" ";
			ans%=M;
			menos++;
    	}
		cout<<ans<<"\n";
		fin:;
	}
	
	return 0;
}
