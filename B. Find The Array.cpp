// Problem: B. Find The Array
// Contest: Codeforces - Educational Codeforces Round 100 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1463/B
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
		vector<int> nums;
		int S=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			S+=x;
			nums.push_back(x);
		}
		vector<int>res;
		int S2=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0){
				res.push_back(nums[i]);
			}
			else{
				res.push_back(1);
				S2+=nums[i]-1;
			}
		}
		if(2*S2 <= S)
		{
			for(auto a:res)cout<<a<<" ";
			cout<<"\n";
		}
		else{
			S2=0;
			res.clear();
			for(int i=0;i<n;i++)
			{
				if(i%2!=0){
					res.push_back(nums[i]);
				}
				else{
					res.push_back(1);
					S2+=nums[i]-1;
				}
			}
			for(auto a:res)cout<<a<<" ";
			cout<<"\n";
		}
	}
	
	return 0;
}
