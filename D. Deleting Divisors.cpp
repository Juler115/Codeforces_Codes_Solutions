// Problem: D. Deleting Divisors
// Contest: Codeforces - Codeforces Round 726 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1537/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")


int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool gana=0;
		while(true){
			bool ante=gana;
			if(n%2!=0){
				for(int i=2;i*i<=n;i++){
					if(i%2==0 && n%i==0){
						n-=n/i;
						gana=!gana;
						break;
					}
				}
			}
			else{
				for(int i=2;i*i<=n;i++){
					if(i%2!=0 && n%i==0){
						n-=i;
						gana=!gana;
						break;
					}
				}
			}
			cout<<n<<"\n";
			if(gana==ante)break;
		}	
		if(gana)cout<<"Alice\n";
		else cout<<"Bob\n";
	}
	
	return 0;
}
