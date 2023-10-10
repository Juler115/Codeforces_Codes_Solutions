// Problem: A. Two Substrings
// Contest: Codeforces - Codeforces Round 306 (Div. 2)
// URL: https://codeforces.com/problemset/problem/550/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	bool ab=0,ba=0;
	int como=0;
	for(int i=0;i<s.size();i++)
	{
		if(s.substr(i,3)=="ABA" || s.substr(i,3)=="BAB"){
			como++;
			i+=2;
		}
		else if(s.substr(i,2)=="AB")
		{
			ab=true;
			i++;
		}
		else if(s.substr(i,2)=="BA")
		{
			ba=true;
			i++;
		}
	}
	//cout<<como;
	if((como>=2) || (como==1 && (ab||ba)) || (ab&&ba))cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
