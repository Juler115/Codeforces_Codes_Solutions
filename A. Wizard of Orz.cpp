// Problem: A. Wizard of Orz
// Contest: Codeforces - Codeforces Round 695 (Div. 2)
// URL: https://codeforces.com/contest/1467/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

//fuction to solve the number
string solve(int n)
{
	if(n==1)return "9";
	else if(n==2)return "98";
	else{
		string ans="989";
		for(int i=0;i<n-3;i++)
		{
			ans+=to_string(i%10);
		}
		return ans;
	}
}

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    //recive test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		//recive lenght of num
		int n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
	
	return 0;
}
