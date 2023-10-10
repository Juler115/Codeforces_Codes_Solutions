// Problem: B. Equal Candies
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	for(int a=0;a<t;a++)
	{
		int n=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		
		sort(arr,arr+n);
		int total=0;
		for(int i=n-1;i>0;i--)
		{
			total+=arr[i]-arr[0];
		}
		cout<<total<<"\n";
	}
	
	return 0;
}
