// Problem: B. Shifting Sort
// Contest: Codeforces - Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int cant=0;
	vector<pair<int,int>>ans;
	for(int i=0;i<n;i++){
		int j=min_element(nums.begin()+i,nums.end())-nums.begin();
		if(i==j)continue;
		cant++;
		ans.push_back({i,j});
		//cout<<i<<" "<<j<<"\n";
		int dis=j-i;
		vector<int>nuevo=nums;
		for(int a=i;a<=j;a++){
			int aux=dis;
			if(a-dis<i){
				int s=a-i;
				aux-=s;
				aux=j-aux+1;
			}
			else aux=a-dis;
			nuevo[aux]=nums[a];
		}
		nums=nuevo;
		//for(auto a:nums)cout<<a<<" ";
		//cout<<"\n";
	}
	cout<<cant<<"\n";
	for(auto a:ans)cout<<a.first+1<<" "<<a.second+1<<" "<<a.second-a.first<<"\n";
	//cout<<"\n";
	
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
