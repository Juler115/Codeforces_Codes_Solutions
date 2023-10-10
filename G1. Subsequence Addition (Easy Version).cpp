// Problem: G1. Subsequence Addition (Easy Version)
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/G1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int>goal)
{

	int n=goal.size();
	long long total=1;
	sort(goal.begin(),goal.end());
	if(goal[0]!=1)return false;
	for(int i=1;i<n;i++)
	{
		if(total<goal[i])return false;
		total+=goal[i];
	}
	return true;
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> goal(n);
		for(int i=0;i<n;i++){
			cin>>goal[i];	
		}
		
		cout<<(solve(goal)?"YES":"NO")<<"\n";
		
	}
	
	return 0;
}
