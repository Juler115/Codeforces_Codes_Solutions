// Problem: D. Add to Neighbour and Remove
// Contest: Codeforces - Codeforces Round 690 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1462/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	int s=0;
	for(int i=0;i<n;i++)cin>>nums[i],s+=nums[i];
	for(int i=0;i<n-1;i++){
		if(s%(n-i)==0){
			int num=s/(n-i);
			int aux=0,aux2=0;
			for(int j=0;j<n;j++){
				if(aux==num){
					aux=0;
					aux2++;
				}
				aux+=nums[j];
			}
			if(aux==num)aux2++;
			
			if(aux2==(n-i)){
				cout<<i<<"\n";
				return;
			}
		}
		//cout<<i<<" ";
	}
	cout<<n-1<<"\n";
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
