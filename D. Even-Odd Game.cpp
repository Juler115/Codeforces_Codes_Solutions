// Problem: D. Even-Odd Game
// Contest: Codeforces - Codeforces Round 693 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1472/D
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
	for(int i=0;i<n;i++)cin>>nums[i];
	sort(nums.begin(),nums.end());
	int a=0,b=0;
	bool turn=1;
	while(!nums.empty()){
		if(turn){
			if(nums.back()%2==0)a+=nums.back();
			nums.pop_back();
			turn=!turn;
		}
		else{
			if(nums.back()%2!=0)b+=nums.back();
			nums.pop_back();
			turn=!turn;
		}
	}
	if(a==b)cout<<"Tie\n";
	else if(a>b)cout<<"Alice\n";
	else cout<<"Bob\n";
	
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
