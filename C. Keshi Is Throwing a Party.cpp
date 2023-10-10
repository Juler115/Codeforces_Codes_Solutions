// Problem: C. Keshi Is Throwing a Party
// Contest: Codeforces - Codeforces Global Round 17
// URL: https://codeforces.com/problemset/problem/1610/C
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
	vector<int>aux(n+2,0);
	for(int i=0;i<n;i++){
		int r,l;
		cin>>r>>l;
		aux[max((int)0,i-l)]++;
		aux[min((int)n+1,i+r)]--;
		
	}
	//for(auto a:aux)cout<<a<<" ";
	//cout<<"\n";
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=aux[i];
		aux[i]=sum;
	}
	for(auto a:aux)cout<<a<<" ";
	cout<<"\n";
	int x=*max_element(aux.begin(),aux.end());
	cout<<(x!=0?x:1)<<"\n";
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
