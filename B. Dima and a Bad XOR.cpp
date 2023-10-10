// Problem: B. Dima and a Bad XOR
// Contest: Codeforces - Codeforces Round 553 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1151/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n,m;
	cin>>n>>m;
	vector<int>ans;
	int auxi=-1,auxj=-1;
	vector<vector<int>>nums(n,vector<int>(m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>nums[i][j];
			if(nums[i][j]!=nums[i][0] && auxi==-1 && auxj==-1){
				auxi=i;
				auxj=j;
			}
		}
		
	int xr=nums[0][0];	
	for(int i=1;i<n;i++){
		xr^=nums[i][0];
	}	
		
	if(xr>0){
		cout<<"TAK\n";
		for(int i=0;i<n;i++)cout<<1<<" ";
	}else{
		if(auxi!=-1 && auxj!=-1){
			cout<<"TAK\n";
			for(int i=0;i<n;i++){
				
				if(i==auxi)cout<<auxj+1<<" ";
				else
					cout<<1<<" ";
		
			}
		}
		else cout<<"NIE\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	
	return 0;
}
