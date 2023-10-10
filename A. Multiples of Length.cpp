// Problem: A. Multiples of Length
// Contest: Codeforces - Codeforces Round 666 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1396/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	if(n==1){
		cout<<1<<" "<<1<<"\n";
		cout<<0<<"\n";
		cout<<1<<" "<<1<<"\n";
		cout<<0<<"\n";
		cout<<1<<" "<<1<<"\n";
		cout<<-1*nums[0]<<"\n";
	}
	else{
		cout<<1<<" "<<1<<"\n";
		cout<<-1*nums[0]<<"\n";
		cout<<1<<" "<<n<<"\n";
		cout<<0<<" ";
		for(int i=1;i<n;i++)cout<<-n*nums[i]<<" ";
		cout<<"\n";
		cout<<2<<" "<<n<<"\n";
		for(int i=1;i<n;i++)cout<<(n-1)*nums[i]<<" ";
		cout<<"\n";
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
