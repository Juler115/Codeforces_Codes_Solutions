// Problem: A. Short Substrings
// Contest: Codeforces - Codeforces Round 650 (Div. 3)
// URL: https://codeforces.com/contest/1367/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

//function to give the string a
string solve(string b)
{
	string a="";
	for(int i=0;i<b.size();i+=2)
	{
		a+=b[i];
	}
	a+=b[b.size()-1];
	return a;
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
		//recive the string b
		string s;
		cin>>s;
		cout<<solve(s)<<"\n";
	}
	
	return 0;
}
