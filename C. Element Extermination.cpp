// Problem: C. Element Extermination
// Contest: Codeforces - Codeforces Global Round 9
// URL: https://codeforces.com/problemset/problem/1375/C
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
	int t=0;
	cin>>t;
	while(t--)
	{
		vector<int> nums;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			nums.push_back(x);			
		}
		int pri=0,seg=1;
		bool cambios=0;
		bool pasa=1;
		while(nums.size()>1)
		{
			if(nums[seg]>nums[pri] && nums.size()>1 && pri==0)
			{
				nums.erase(nums.begin()+seg);
				cambios=1;	
			}
			else if(nums[seg]>nums[pri] && nums.size()>1)
			{
				nums.erase(nums.begin()+pri);
				cambios=1;
				pri=seg;
				seg++;		
			}
			else{
				if(seg<nums.size()-1)
				{
					pri=seg;
					seg++;
				}
				else{
					seg=0;
					pri=0;
					if(!cambios){
						pasa=0;
						break;
					}
					cambios=0;
				}
			}
		}
		//for(auto a:nums)cout<<a<<" ";
		if(pasa)cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
