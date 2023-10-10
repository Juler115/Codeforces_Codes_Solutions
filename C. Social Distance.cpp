// Problem: C. Socall Distance
// Contest: Codeforces - Codeforces Round 650 (Div. 3)
// URL: https://codeforces.com/contest/1367/problem/C
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
    //recive the test cases
	int t=0;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int mov=0;
		int tam=0;
		int j=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
				if(tam>=k) 
				{
					mov+=(tam-k)/k;
				}
				j=i;
				tam=0;
				break;
			}
			else tam++;
		}
		//cout<<tam<<"holaaa";
		if(tam!=0){
			int k2=0;
			for(int i=0;i<s.size();i++)
			{
				if(k2==0)k2=k,mov++;
				else k2--;
			}
		}
		else{
			for(int i=j+1;i<s.size();i++)
			{
				if(s[i]=='1')
				{
					if(tam>=2*k) mov+=(tam-(2*k))/k;
					tam=0;
				}
				else tam++;
			}
			if(tam!=0 && tam>=k) mov+=(tam-k)/k;	
		}
		cout<<mov<<"\n";
	}
	
	return 0;
}
