// Problem: C. Little Girl and Maximum Sum
// Contest: Codeforces - Codeforces Round 169 (Div. 2)
// URL: https://codeforces.com/problemset/problem/276/C
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
	int n,q;
	cin>>n>>q;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	vector<int> diff(n + 2, 0); 
	while(q--){
		int l,r;
		cin>>l>>r;
		diff[l]++;
		diff[r+1]--;
	}
	sort(nums.begin(),nums.end(),greater<int>());
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		diff[i]+=diff[i-1];
	}
	sort(diff.begin(),diff.end(),greater<int>());
	//for(auto a:diff)cout<<a<<" ";
	//cout<<"\n";
	for(int i=0;i<n;i++)
	{
		ans+=nums[i]*diff[i];
	}
	cout<<ans<<"\n";
	
	return 0;
}
