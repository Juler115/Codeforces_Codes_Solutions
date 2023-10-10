// Problem: A. Playing with Dice
// Contest: Codeforces - Codeforces Round #222 (Div. 2)
// URL: https://codeforces.com/problemset/problem/378/A
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
	int a,b;
	cin>>a>>b;
	int w=0,e=0,p=0;
	
	for(int i=1;i<7;i++)
	{
		if(abs(a-i)<abs(b-i)) w++;
		else if(abs(a-i)==abs(b-i)) e++;
		else p++;
	}
	cout<<w<<" "<<e<<" "<<p;
	return 0;
}
