// Problem: C. Pull Your Luck
// Contest: Codeforces - Nebius Welcome Round (Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/1804/problem/C?0b61686c84ccd57e9dccce435c4af1c6ef295ea4bc135e97a3d1a44056ec5da9=1
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

//create the func solve

bool solve(long long n,long long x,long long p)
{
	long long suma=x;
	for(long long i=1;i<=min(2*n,p) ;i++)
	{
		suma+=i;
		if(suma%n==0){return true;}
	}
	
	
	return false;
}



int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive the test cases
	long long t=0;
	cin>>t;
	while(t--)
	{
		//recive the n, the x and the p
		long long n,x,p;
		cin>>n>>x>>p;
		cout<<(solve(n,x,p)?"Yes":"No")<<"\n";		
	}
	
	return 0;
}
