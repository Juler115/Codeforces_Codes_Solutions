// Problem: B. New Skateboard
// Contest: Codeforces - Educational Codeforces Round 8
// URL: https://codeforces.com/problemset/problem/628/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	string num;
	cin>>num;
	int ans=0;
	if(num.size()==1){
		if((num[0]-'0')%4==0)cout<<1;
		else cout<<0;
		return 0;
	}
	for(auto a:num)if((a-'0')%4==0)ans++;
	for(int i=num.size()-1,j=num.size()-2;j>=0;i--,j--){
		int nu=(num[j]-'0')*10;
		nu+=(num[i]-'0');
		if(nu%4==0){ans+=j+1;
			//cout<<nu<<"\n";
		}
	}
	cout<<ans;
	
	return 0;
}
