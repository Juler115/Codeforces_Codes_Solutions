// Problem: A. Design Tutorial: Learn from Math
// Contest: Codeforces - Codeforces Round #270
// URL: https://codeforces.com/problemset/problem/472/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	
	int a,b;
	
	if(n%2==0)a=n-8,b=8;
	else a=n-9,b=9;
	
	cout<<a<<" "<<b;
	
	
	return 0;
}