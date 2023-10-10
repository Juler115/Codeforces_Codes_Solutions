// Problem: A. XXXXX
// Contest: Codeforces - Codeforces Round 649 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1364/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
int solve(vector<int>nums,int n,int k, long long suma)
{
	if(suma%k!=0)return n;
	int maxi=n,maxi2=n,i=0;
	long long suma2=suma;
	while(suma%k==0 && suma>=0)
	{
		suma-=nums[i];
		maxi--;
		i++;
	}
	i=n-1;
	while(suma2%k==0 && suma2>=0)
	{
		suma2-=nums[i];
		maxi2--;
		i--;
	}
	//cout<<suma2<<"\n";
	if(maxi==0 && maxi2==0)return -1;
	if(maxi>maxi2)return maxi;
	return maxi2;
	
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>nums(n);
		long long suma=0;
		for(int i=0;i<n;i++){
			cin>>nums[i];
			suma+=nums[i];
		}
		cout<<solve(nums,n,k,suma)<<"\n";
	}
	
	return 0;
}
