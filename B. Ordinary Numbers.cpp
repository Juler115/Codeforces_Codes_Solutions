// Problem: B. Ordinary Numbers
// Contest: Codeforces - Codeforces Round 719 (Div. 3)
// URL: https://codeforces.com/contest/1520/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<pair<int,int>>ans;

void solve(){
	int n;
	cin>>n;
	int num=n%10;
	int n2=n;
	bool pasa=0;
	while(n2>=1){
		if(n2%10!=num)pasa=1;
		n2/=10;
	}
	auto it=upper_bound(ans.begin(),ans.end(),make_pair(n,numeric_limits<int>::min()));
	if(pasa)it--;
	cout<<it->second<<"\n";
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    priority_queue<int,vector<int>,greater<int>>pq;
    int aux=1;
    for(int i=1;i<10;i++){
    	pq.push(i);
    }
    while(pq.top()<=1e10){
    	int x=pq.top();
    	pq.pop();
    	ans.push_back({x,aux});
    	aux++;
    	int num=x%10;
    	x*=10;
    	x+=num;
    	pq.push(x);
    }
    //for(auto a:ans)cout<<a.first<<" "<<a.second<<"\n";
	int t=0;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
