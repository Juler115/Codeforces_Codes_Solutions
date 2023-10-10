// Problem: C. Chef Monocarp
// Contest: Codeforces - Educational Codeforces Round 97 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1437/C
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
	vector<int>dis;
	vector<int>usados(10*n+1,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		dis.push_back(x);
	}
	int ans=0;
	sort(dis.begin(),dis.end());
	for(auto a:dis){
		int min=INT_MIN;
		for(int i=1;i<=10*n;i++){
			if(abs(a-min)>abs(a-i) && usados[i]==0){
				min=i;
			}
		}
		//cout<<min<<" ";
		usados[min]=1;
		ans+=abs(a-min);
	}
	cout<<ans<<"\n";
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
