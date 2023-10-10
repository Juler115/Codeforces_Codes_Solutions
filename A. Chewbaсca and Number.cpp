// Problem: A. Chewbaсca and Number
// Contest: Codeforces - Codeforces Round #291 (Div. 2)
// URL: https://codeforces.com/problemset/problem/514/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

vector<int> x;

int main()
{
	x.push_back(1);
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	string t,num="";
	int i=0;
	cin>>t;
	if(t[0]==57)num+=t[0],i++;
	for(i;i<t.size();i++)
	{
		int digit=(int)t[i]-48;
		if(9-digit<digit)
		{
			num+=to_string(9-digit);
		}
		else num+=to_string(digit);
		//cout<<(9-digit<digit)<<" "<<digit<<"\n";
	}
	cout<<num;
	
	return 0;
}
