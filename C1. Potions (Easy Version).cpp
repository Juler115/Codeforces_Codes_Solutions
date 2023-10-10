	// Problem: C1. Potions (Easy Version)
	// Contest: Codeforces - Codeforces Round 723 (Div. 2)
	// URL: https://codeforces.com/problemset/problem/1526/C1
	// Memory Limit: 256 MB
	// Time Limit: 1000 ms
	// 
	// Powered by CP Editor (https://cpeditor.org)
	
	#include <bits/stdc++.h>
	using namespace std;
	#define int long long int
	
	int32_t main()
	{
		cin.tie(0);
	    cout.tie(0);
	    ios_base::sync_with_stdio(false);
		int n;
		cin>>n;
		priority_queue<int,vector<int>,greater<int>>poci;
		int vida=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			poci.push(x);
			vida+=x;
			while(vida<0){
				vida-=poci.top();
				poci.pop();
			}
		}
		cout<<poci.size();
		
		
		return 0;
	}
	