// Problem: B. Amr and Pins
// Contest: Codeforces - Codeforces Round 287 (Div. 2)
// URL: https://codeforces.com/problemset/problem/507/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

double dis(double x1,double y1,double x2,double y2){
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	double r,x1,y1,x2,y2;
	cin>>r>>x1>>y1>>x2>>y2;
	
	double ans=dis(x1,y1,x2,y2)/(2*r);
	cout<<ceil(ans);
	
	return 0;
}
