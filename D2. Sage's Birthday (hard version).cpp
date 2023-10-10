// Problem: D2. Sage's Birthday (hard version)
// Contest: Codeforces - Codeforces Round 671 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1419/D2
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
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int ans=0;
	vector<int>aux(n);
	int j=n/2;
	for(int i=0;i<n;i+=2)
	{
		aux[i]=nums[j];
		j++;
	}
	j=0;
	for(int i=1;i<n;i+=2)
	{
		aux[i]=nums[j];
		j++;
	}
	for(int i=1;i<n-1;i++){
		if(aux[i]<aux[i-1] && aux[i]<aux[i+1])ans++;
	}
	cout<<ans<<"\n";
	for(auto a:aux)cout<<a<<" ";
	
	return 0;
}
