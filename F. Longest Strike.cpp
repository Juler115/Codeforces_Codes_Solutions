// Problem: F. Longest Strike
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/F
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
		int n,k;
		cin>>n>>k;
		int arr[n],l=0,r=0,ll=0,rr=0,kk=0,ka=0,v=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		sort(arr,arr+n);
		//for(int i=0;i<n;i++)cout<<caram[i]<<" ";
			
				int j=n-1;
		for(int i=0;i<n;i++)
		{
			if(ka!=arr[i])
			{
				ka=arr[i];
				kk=1;
			}
			else if(ka==arr[i])
			{
				kk++;
			}
			else if(kk<k) v=0;
			if(kk>=k && v==0)
			{
				v=i-k+1;
			}
		}
			j=n-1;
		for(int i=v-1;i<n;i++)
		{
			if(l!=arr[i] && ll!=-1)
			{
				l=arr[i];
				ll=1;
			}
			else if(l==arr[i] && ll!=-1)
			{
				ll++;
			}
			if(ll>=k)
			{
				ll=-1;
			}
			if(r!=arr[j] && rr!=-1)
			{
				r=arr[j];
				rr=1;
			}
			else if(r==arr[j] && rr!=-1)
			{
				rr++;
			}
			if(rr>=k)
			{
				rr=-1;
			}
			j--;
		}
		if((ll<k || rr<k) && ll!=-1 ) cout<<-1<<"\n";
		else cout<<l<<" "<<r<<"\n";
			
	}
	
	return 0;
}