// Problem: B. Charmed by the Game
// Contest: Codeforces - Codeforces Round #740 (Div. 2, based on VK Cup 2021 - Final (Engine))
// URL: https://codeforces.com/contest/1561/problem/B
// Memory Limit: 512 MB
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
	int t=0;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int a,b;
		cin>>a>>b;
		int d=(abs(a-b))/2;
		
		if((a+b)%2!=0)
		{
			int h=0;
			for(int i=d;i<=a+b-d;i++) h++;
			cout<<h<<"\n";
			for(int i=d;i<=a+b-d;i++)cout<<i<<" ";		
		}
		if((a+b)%2==0)
		{
			int h=0;
			for(int i=d;i<=a+b-d;i+=2) h++;
			cout<<h<<"\n";
			for(int i=d;i<=a+b-d;i+=2)cout<<i<<" ";	
		}
		cout<<"\n";
		
	
	}
	
	return 0;
}
