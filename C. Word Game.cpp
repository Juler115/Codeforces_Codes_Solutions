// Problem: C. Word Game
// Contest: Codeforces - Codeforces Round #817 (Div. 4)
// URL: https://codeforces.com/contest/1722/problem/C
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
		vector<int> persona1;
		vector<int> persona2;
		vector<int> persona3;
		int persona11=0;
		int persona22=0;
		int persona33=0;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			char c1,c2,c3;
			cin>>c1>>c2>>c3;
			int total=c1+c2+c3;
			persona1.push_back(total);
		}
		for(int i=0;i<n;i++)
		{
			char c1,c2,c3;
			cin>>c1>>c2>>c3;
			int total=c1+c2+c3;
			persona1.push_back(total);
		}
		for(int i=0;i<n;i++)
		{
			char c1,c2,c3;
			cin>>c1>>c2>>c3;
			int total=c1+c2+c3;
			persona1.push_back(total);
		}
		sort(persona1.begin(),persona1.end());
		sort(persona2.begin(),persona2.end());
		sort(persona3.begin(),persona3.end());
		for(int i=0;i<n;i++) cout<<persona1[i]<<" ";
		cout<<"\n";
		/*
		for(int i=0;i<n;i++)
		{
			if(persona1[i]==persona2[i]&& persona2[i]==persona3[i]) continue;
			else if(persona1[i]!=persona2[i]&& persona2[i]!=persona3[i] && persona3[i]!=persona1[i])
			{
				persona11+=3;
				persona22+=3;
				persona33+=3;
			}
			else if(persona1[i]==persona2[i]&& persona2[i]!=persona3[i] && persona3[i]!=persona1[i])
			{
				persona11++;
				persona22++;
				persona33+=3;
			}
			else if(persona1[i]!=persona2[i]&& persona2[i]==persona3[i] && persona3[i]!=persona1[i])
			{
				persona11+=3;
				persona22++;
				persona33++;
			}
			else if(persona1[i]!=persona2[i]&& persona2[i]!=persona3[i] && persona3[i]==persona1[i])
			{
				persona11++;
				persona22+=3;
				persona33++;
			}
			cout<<persona11<<" "<<persona22<<" "<<persona33<<"\n";
		}
		cout<<persona11<<" "<<persona22<<" "<<persona33<<"\n";
		*/
	}
	
	return 0;
}
