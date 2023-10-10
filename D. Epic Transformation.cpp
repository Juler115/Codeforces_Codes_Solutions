// Problem: D. Epic Transformation
// Contest: Codeforces - Codeforces Round 710 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1506/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second

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
		priority_queue<pair<int,int>>sig;
		map<int,int>nums;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			nums[x]++;
		}
		for(auto a:nums)
		{
			sig.push(make_pair(a.s,a.f));
		}
		while(sig.size()>1)
		{
			int a,a1,b,b1;
			a=sig.top().f;
			a1=sig.top().s;
			sig.pop();
			b=sig.top().f;
			b1=sig.top().s;
			sig.pop();
			a--;
			b--;
			if(a>0)sig.push(make_pair(a,a1));
			if(b>0)sig.push(make_pair(b,b1));
		}
		if(sig.empty())cout<<0<<"\n";
		else cout<<sig.top().f<<"\n";
	}
	
	return 0;
}
