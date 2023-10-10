// Problem: D. Permutation Transformation
// Contest: Codeforces - Codeforces Round 702 (Div. 3)
// URL: https://codeforces.com/contest/1490/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
void solve(vector<int>&profu,int ini,int maxo,int prof,vector<int>&tree)
{
	if(ini>maxo)return;
	if(ini==maxo){
		profu[ini]=prof;
		return;
	}
	int maxi=-1,mai=-1;
	for(int i=ini;i<=maxo;i++)
	{
		if(tree[i]>maxi){
			maxi=tree[i];
			mai=i;
		}
	}
	//cout<<maxi<<" ";
	profu[mai]=prof;
	solve(profu,ini,mai-1,prof+1,tree);
	solve(profu,mai+1,maxo,prof+1,tree);
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
		vector<int>tree(n);
		vector<int>profu(n);
		for(int i=0;i<n;i++)
		{
			cin>>tree[i];
		}
		solve(profu,0,n-1,0,tree);
		//cout<<"\n";
		for(auto a:profu)cout<<a<<" ";
		cout<<"\n";
	}
	
	return 0;
}
