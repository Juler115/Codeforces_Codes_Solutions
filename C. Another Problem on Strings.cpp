// Problem: C. Another Problem on Strings
// Contest: Codeforces - Codeforces Round 112 (Div. 2)
// URL: https://codeforces.com/problemset/problem/165/C
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
	int n;
	cin>>n;
	string s;
	cin>>s;
	//count number of zeros until you reach the total of ones
	int l=0,r=0,zeros=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1' && n==0){
			
		}
		else if(s[i]=='1')n--;
		else zeros++;
	}
	
	return 0;
}
