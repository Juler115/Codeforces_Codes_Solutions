// Problem: A. Division?
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t=0;
	cin>>t;
	for(int a=0;a<t;a++)
	{
		int rat;
		cin>>rat;
		
		if(rat<=1399)cout<<"Division 4\n";
		else if(rat<=1599 && rat>=1400)cout<<"Division 3\n";
		else if(rat<=1899 && rat>=1600)cout<<"Division 2\n";
		else if(rat>=1900)cout<<"Division 1\n";
		
		
		
	}
	
	
	
	return 0;
}
