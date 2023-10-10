// Problem: C. Less or Equal
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n,k;
	cin>>n>>k;
	vector<int> nums;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		nums.push_back(x);
	}
	sort(nums.begin(),nums.end());
	if(k==0 && nums[0]>1)cout<<1;
	else if(k==n)cout<<nums[k-1];
	else if(k<n && nums[k-1]<nums[k])cout<<nums[k-1];
	else cout<<-1;
	
	return 0;
}
