// Problem: E. Permutation by Sum
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1512/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int nw(int n){
	return (n*(n+1))/2;;
}

void solve(){
	int n,l,r,s;
	cin>>n>>l>>r>>s;
	int maxs=nw(n);
	int cant=r-l+1;
	int mins=nw(n-cant);
	int mini=nw(cant);
	if(maxs-mins<s || mini>s){
		cout<<-1<<"\n";
	}
	else{
		vector<int>ans;
		
		for(auto a:ans)cout<<a<<" ";
		cout<<"\n";
	}
}

int32_t main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t=1;
	cin>>t;
	while(t--)
		solve();
	
	return 0;
}
