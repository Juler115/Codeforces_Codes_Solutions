// Problem: D. Prefix Permutation Sums
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/contest/1851/problem/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

void solve(){
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums(n);
		nums[0]=0;
		for(int i=1;i<n;i++)cin>>nums[i];
		reverse(nums.begin(),nums.end());
		vector<int>usados(n+1,0);
		int malo=-1;
		for(int i=1;i<n;i++){
			if(nums[i-1]-nums[i]>n){
				if(malo==-1)malo=nums[i-1]-nums[i];
				else{
					cout<<"NO\n";
					goto fin;
				}
			}
			else if(usados[nums[i-1]-nums[i]]==0){
				usados[nums[i-1]-nums[i]]=1;
			}
			else if(malo==-1){
				malo=nums[i-1]-nums[i];
			}
			else{
				cout<<"NO\n";
				goto fin;
			}
			
		}
		if(malo!=-1){
			for(int i=1;i<=n && i<malo;i++){
				if(malo-i>n)continue;
				else if(usados[i]==0 && usados[malo-i]==0 && i!=malo-i){
					cout<<"YES\n";
					goto fin;
				}
			}
			cout<<"NO\n";
		}
		else{
			int cant=0;
			for(auto a:usados)if(a==0)cant++;
			if(cant>=1)cout<<"YES\n";
			else cout<<"NO\n";
		}
		//cout<<usados[-1]<<"\n";
		fin:;
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	solve();
	
	return 0;
}
