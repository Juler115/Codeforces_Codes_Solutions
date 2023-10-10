// Problem: B. Worms
// Contest: Codeforces - Codeforces Round 271 (Div. 2)
// URL: https://codeforces.com/problemset/problem/474/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	
	int n;
	cin>>n;
	vector<int> a;
	int sum=0,j=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.pb(x);
		sum+=x;
	}
	vector<int>worm;
	int sumamax=a[0];
	for(int i=1;i<=sum;i++)
	{
		if(i<=sumamax)worm.pb(j+1);
		else{
			j++;
			sumamax+=a[j];
			worm.pb(j+1);
		}
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		cout<<worm[x-1]<<"\n";
	}
	
	return 0;
}
