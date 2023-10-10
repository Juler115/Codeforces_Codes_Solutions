// Problem: C. Fadi and LCM
// Contest: Codeforces - Codeforces Round 613 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1285/C
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
	int n;
	cin>>n;
	int x=n;
	vector<int>divi;
	divi.push_back(1);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)divi.push_back(i);
	}
	int i=0;
	int ans=divi[0];
	i++;
	//for(auto a:divi)cout<<a<<" ";
	while(true){
		//cout<<ans*divi[i]<<"\n";
		if(i<divi.size() && n%divi[i]==0 && (n*ans)/__gcd(ans*divi[i],n/divi[i])==x && ans<n){
			n/=divi[i];
			ans*=divi[i];
			i=1;
		}
		else if(i<divi.size())i++;
		else break;
	}
	cout<<ans<<" "<<n;
	return 0;
}
