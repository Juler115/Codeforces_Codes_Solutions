// Problem: B. Vanya and Lanterns
// Contest: Codeforces - Codeforces Round 280 (Div. 2)
// URL: https://codeforces.com/problemset/problem/492/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	double n,l;
	cin>>n>>l;
	vector<double>lig;
	//lig.push_back(0);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		lig.push_back(x);
	}
	//lig.push_back(l);
	double maxi=0;
	sort(lig.begin(),lig.end());
	for(int i=1;i<lig.size();i++)
	{
		if(lig[i]-lig[i-1]>maxi){
			maxi=lig[i]-lig[i-1];
		}
	}
	printf("%.10f\n",max(maxi/2,max(lig[0]-0,l-lig[n-1])));
	
	return 0;
}
