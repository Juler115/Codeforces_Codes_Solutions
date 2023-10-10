// Problem: A. Exams
// Contest: Codeforces - Codeforces Round #122 (Div. 2)
// URL: https://codeforces.com/problemset/problem/194/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n=0;
	cin>>n;
	int k=0;
	cin>>k;
	
	if(3*n<=k)
	{
		cout<<0;
	}
	else cout<<3*n-k;
	
	
    return 0;
}
