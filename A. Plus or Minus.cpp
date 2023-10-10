// Problem: A. Plus or Minus
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/contest/1807/problem/0?e4f5ae4b42fbfda61290dfc0030ba520ac0d241bd87d06661d3e949667618ce2=1
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
	int t=0;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b==c)cout<<"+\n";
		else cout<<"-\n";
	}
	
	return 0;
}
