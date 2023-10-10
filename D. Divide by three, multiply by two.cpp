// Problem: D. Divide by three, multiply by two
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


vector<int> nums,ans,aux,aux2;

void encuentra(int inicio)
{
	for(int i=0;i<nums.size();i++)
	{
		if(inicio*2==nums[i] || (inicio/3==nums[i] && inicio%3==0))
		{
			inicio=nums[i];
			ans.push_back(inicio);
			auto it=find(nums.begin(),nums.end(),nums[i]);
			nums.erase(it);
			if(nums.size()==0)return;
			encuentra(inicio);
		}
	}
}


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	int inicio=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		nums.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		bool pasa=true;
		for(int j=0;j<n;j++)
		{
			if(i==j)continue;
			if((nums[i]/2==nums[j] && nums[i]%2==0)|| nums[i]*3==nums[j]){
				pasa=false;
				break;
			}
		}
		if(pasa)
		{
			inicio=nums[i];
		}
	}
	ans.push_back(inicio);
	auto it=find(nums.begin(),nums.end(),inicio);
	nums.erase(it);
	aux=nums;
	aux2=ans;
	
	encuentra(inicio);
	
	for(auto a:ans)cout<<a<<" ";
	
	
	return 0;
}
