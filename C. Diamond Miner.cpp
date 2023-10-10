// Problem: C. Diamond Miner
// Contest: Codeforces - Codeforces Round 706 (Div. 2)
// URL: https://codeforces.com/contest/1496/problem/C
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
#define mk make_pair
#define s second
#define f first
 
double dis(double a,double b,double c,double d){
	return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}
bool dist(const pair<double,double> &a,
			const pair<double,double> &b)
{
	double dis1=sqrt((a.f*a.f)+(a.s*a.s));
	double dis2=sqrt((b.f*b.f)+(b.s*b.s));
	
    return (dis1 < dis2);
}
bool dist2(const pair<double,double> &a,
			const pair<double,double> &b)
{
	double dis1=sqrt((a.f*a.f)+(a.s*a.s));
	double dis2=sqrt((b.f*b.f)+(b.s*b.s));
    return (dis1 > dis2);
}
 
int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    cout.precision(1e3);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<double,double>>mineros;
		vector<pair<double,double>>minas;
		for(int i=0;i<n;i++)
		{
			double x,y;
			cin>>x>>y;
			mineros.push_back(mk(x,y));
		}
		for(int i=0;i<n;i++)
		{
			double x,y;
			cin>>x>>y;
			minas.push_back(mk(x,y));
		}
		sort(mineros.begin(),mineros.end(),dist);
		sort(minas.begin(),minas.end(),dist);
		double ans=0;
		for(int i=0;i<n;i++)
		{
			auto a=mineros[i];
			auto b=minas[i];
			ans+=dis(a.f,a.s,b.f,b.s);
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}