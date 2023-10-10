// Problem: D. Odd Queries
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/D
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
		int n,q;
		cin>>n>>q;
		vector<int> nums(n),sum1(n),sum2(n);
		int total=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			total+=x;
			nums[i]=x;
			sum1[i]=total;
		}
		total=0;
		for(int i=n-1;i>=0;i--){
			total+=nums[i];
			sum2[i]=total;
		}
		
		/*for(auto a:sum1)cout<<a<<" ";
		cout<<"\n";
		for(auto a:sum2)cout<<a<<" ";
		cout<<"\n";*/
		for(int i=0;i<q;i++)
		{
			int l,r,k;
			cin>>l>>r>>k;
			//cout<<sum2[n]<<"\n";
			if(l==1 && r==n)
			{
				if((abs(r-l+1)*k)%2!=0)cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(l==1)
			{
				if((sum2[r]+abs(r-l+1)*k)%2!=0)cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(r==n)
			{
				if((sum1[l-2]+abs(r-l+1)*k)%2!=0)cout<<"YES\n";
				else cout<<"NO\n";
			}
			else{
				if((sum1[l-2]+sum2[r]+abs(r-l+1)*k)%2!=0)cout<<"YES\n";
				else cout<<"NO\n";
			}
			//cout<<(sum2[r])<<"\n";

		}
	
		
	}
	
	return 0;
}
