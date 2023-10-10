// Problem: B. Even Array
// Contest: Codeforces - Codeforces Round 650 (Div. 3)
// URL: https://codeforces.com/contest/1367/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;


int solve(vector<int>nums,int n){
	vector<int>a;
	vector<int>b;
	int movimientos=0;
	for(int i=0;i<n;i++)
	{
		if(i%2!=nums[i]%2){
			if(i%2==0)
			a.push_back(i);	
			else b.push_back(i);
		}
	}
	if(a.size()!=b.size())return -1;
	
	return a.size();
	
	
}

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
		//recive the array
		int n;
		cin>>n;
		vector<int>nums;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			nums.push_back(x);
		}
		cout<<solve(nums,n)<<"\n";
		
	}
	
	return 0;
}
