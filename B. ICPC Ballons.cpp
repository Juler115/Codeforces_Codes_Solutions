// Problem: B. ICPC Balloons
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

bool pasa[26];
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
		int n;
		cin>>n;
		bool pasa[26];
		for(int i=0;i<26;i++)pasa[i]=false;
		int globos=0;
		for(int i=0;i<n;i++)
		{
			char c;
			cin>>c;
			if(!pasa[c-'A'])
			{
				pasa[c-'A']=true;
				globos+=2;
			}
			else globos++;
		}
		cout<<globos<<"\n";
		
	}
	
	return 0;
}
