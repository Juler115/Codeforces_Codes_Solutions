// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
	long long n,m;
	cin>>n>>m;
	vector<long long>task;
	for(long long i=0;i<m;i++)
	{
		long long x;
		cin>>x;
		task.push_back(x);
	}
	long long tiempo=abs(task[0]-1);
	for(int i=1;i<m;i++)
	{
		//cout<<tiempo;
		if(task[i]>=task[i-1])tiempo+=abs(task[i]-task[i-1]);
		else{
			tiempo+=(n-abs(task[i]-task[i-1]));
		}
	}
	cout<<tiempo;
	
	return 0;
}
