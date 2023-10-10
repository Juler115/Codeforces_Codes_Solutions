// Problem: C. Exams
// Contest: Codeforces - Codeforces Round 274 (Div. 2)
// URL: https://codeforces.com/problemset/problem/479/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second
#define p make_pair

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<pair<int,int>>exams;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		exams.push_back(p(a,b));
	}
	sort(exams.begin(),exams.end());
	int final=0;
	for(auto a:exams)
	{
		//cout<<a.f<<" "<<a.s<<"\n";
		if(a.s>=final)
		{
			final=a.s;
		}
		else{
			final=a.f;
		}
		//cout<<final<<"\n";
	}
	cout<<final;
	
	return 0;
}
