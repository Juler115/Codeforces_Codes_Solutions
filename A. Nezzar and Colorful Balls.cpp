// Problem: A. Nezzar and Colorful Balls
// Contest: Codeforces - Codeforces Round 698 (Div. 2)
// URL: https://codeforces.com/contest/1478/problem/A
// Memory Limit: 512 MB
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
    //recive the test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		//recive hte n numbers
		int n=0;
		cin>>n;
		unordered_map<int,int>nums;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			nums[x]++;
		}
		int maxi=0;
		for(auto i: nums)
		{
			if(maxi<i.second)maxi=i.second;
		}
		cout<<maxi<<"\n";
	}
	
	return 0;
}
