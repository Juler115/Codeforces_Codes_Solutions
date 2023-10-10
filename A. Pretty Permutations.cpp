// Problem: A. Pretty Permutations
// Contest: Codeforces - Codeforces Round 728 (Div. 2)
// URL: https://codeforces.com/contest/1541/problem/A
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
	int j=0;
	if(n%2==0){
		for(int i=0;i<n;i++){
			if(i%2==0)cout<<j+2<<" ";
			else{
				cout<<j+1<<" ";
				j+=2;
			}
			
		}	
	}
	else{
		for(int i=0;i<n-2;i++){
			if(i%2==0)cout<<j+2<<" ";
			else{
				cout<<j+1<<" ";
				j+=2;
			}
		}
		cout<<n<<" "<<j+1<<" ";
	}
	cout<<"\n";
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
