// Problem: C. Differential Sorting
// Contest: Codeforces - Codeforces Round 772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1635/C
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> nums(n);
		for(int i=0;i<n;i++)cin>>nums[i];
		if(nums[n-2]>nums[n-1])cout<<-1<<"\n";
		else{
			bool pasa=true;
			for(int i=1;i<n;i++)if(nums[i-1]>nums[i])pasa=false;
			if(pasa)cout<<0<<"\n";
			else
			{
				if(nums[n-1]<0)cout<<-1<<"\n";
				else{
					cout<<n-2<<"\n";
					for(int i=0;i<n-2;i++)
					{
						cout<<i+1<<" "<<n-1<<" "<<n<<"\n";
					}
				}
			}
		}
		
		
	}
	
	return 0;
}
