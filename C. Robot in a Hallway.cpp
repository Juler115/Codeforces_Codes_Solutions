// Problem: C. Robot in a Hallway
// Contest: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1716/problem/C
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
		int m;
		cin>>m;
		vector<int>nums[2];
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			nums[0].push_back(x);
		}
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			nums[1].push_back(x);
		}
		int ans=INT_MAX,aux=-1,tam=0,cant=m*2;
		for(int i=0;i<m;i++)
		{
			cant--;
			if(nums[0][i]>aux){
				aux=nums[0][i];
				tam=cant;
				//cout<<cant<<"\n";
			}
		}
		for(int j=m-1;j>=0;j--)
		{
			cant--;
			if(nums[1][j]>aux){
				aux=nums[1][j];
				tam=cant;
			}
		}
		//cout<<aux<<" "<<tam<<"\n";
		if(aux==0)ans=min(ans,aux+tam);
		else ans=min(ans,aux+tam+1);
		if(ans==3){
			cout<<3<<"\n";
			continue;
		}
		aux=0,tam=0,cant=m*2 -1;
		for(int i=0;i<m;i++)
		{
			cant--;
			if(nums[1][i]>aux){
				aux=nums[1][i];
				tam=cant;
				//cout<<cant<<"\n";
			}
		}
		for(int j=m-1;j>0;j--)
		{
			cant--;
			if(nums[0][j]>aux){
				aux=nums[0][j];
				tam=cant;
			}
		}
		if(aux==0)ans=min(ans,aux+tam);
		else ans=min(ans,aux+tam+1);
		aux=0,tam=0,cant=m*2 -1;
		for(int i=0;i<m;i++)
		{
			if(i%2!=0){
				if(nums[1][i]>aux){
					aux=nums[1][i];
					tam=cant;
					//cout<<cant<<"\n";
				}
				cant--;
				if(nums[0][i]>aux){
					aux=nums[0][i];
					tam=cant;
					//cout<<cant<<"\n";
				}
				cant--;
			}
			else{
				if(nums[0][i]>aux){
					aux=nums[0][i];
					tam=cant;
					//cout<<cant<<"\n";
				}
				cant--;
				if(nums[1][i]>aux){
					aux=nums[1][i];
					tam=cant;
					//cout<<cant<<"\n";
				}
				cant--;
			}
		}
		if(aux==0)ans=min(ans,aux+tam);
		else ans=min(ans,aux+tam+1);
		cout<<ans<<"\n";
	}
	
	return 0;
}
