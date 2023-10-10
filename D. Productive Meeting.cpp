// Problem: D. Productive Meeting
// Contest: Codeforces - Codeforces Round 744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define mk make_pair
#define s second
#define f first

void solve(){
	int n;
	cin>>n;
	set<pair<int,int>>nums;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		nums.insert({x,i});
	}
	int ans=0;
	vector<pair<int,int>>ans2;
	while(nums.size()>1){
		auto aux=nums.end();
		int a=(*aux).f;
		int x=(*aux).s;
		aux--;
		int b=(*aux).f;
		int y=(*aux).s;
		if(a==0 || b==0)break;
		ans++;
		a--;
		b--;
		if(a>0)nums.insert({a,x});
		if(b>0)nums.insert({b,y});
		ans2.pb({x,y});
	}
	cout<<ans<<"\n";
	for(auto a:ans2)cout<<a.first+1<<" "<<a.second+1<<"\n";
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
