// Problem: B. Pashmak and Flowers
// Contest: Codeforces - Codeforces Round 261 (Div. 2)
// URL: https://codeforces.com/problemset/problem/459/B
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
	
	long long n=0;
	cin>>n;
	vector<long long>flow(n);
	map<long long,long long>nums;
	for(long long i=0;i<n;i++)cin>>flow[i],nums[flow[i]]++;
	sort(flow.begin(),flow.end());
	
	long long maxi=flow[n-1]-flow[0];
	if(maxi==0)cout<<maxi<<" "<<(n*(n-1))/2;
	else cout<<maxi<<" "<<nums[flow[0]]*nums[flow[n-1]];
	
	
	return 0;
}
