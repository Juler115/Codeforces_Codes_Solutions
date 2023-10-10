// Problem: B. Decode String
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/B
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
		int n;
		cin>>n;
		string s;
		cin>>s;
		s+="-1-1-1";
		
		for(int i=0;i<n;i++)
		{
			if(s[i+2]!=48 || s[i+3]==48)
			{
				switch(s[i])
				{
					case 49: cout<<"a";break;
					case 50: cout<<"b";break;
					case 51: cout<<"c";break;
					case 52: cout<<"d";break;
					case 53: cout<<"e";break;
					case 54: cout<<"f";break;
					case 55: cout<<"g";break;
					case 56: cout<<"h";break;
					case 57: cout<<"i";break;
					
				}
			}
			else if(s[i]==49)
			{
				switch(s[i]+s[i+1])
				{
					case 97: cout<<"j";break;
					case 98: cout<<"k";break;
					case 99: cout<<"l";break;
					case 100: cout<<"m";break;
					case 101: cout<<"n";break;
					case 102: cout<<"o";break;
					case 103: cout<<"p";break;
					case 104: cout<<"q";break;
					case 105: cout<<"r";break;
					case 106: cout<<"s";break;
				}
				i+=2;	
			}
			else
			{
				switch(s[i]+s[i+1])
				{
					case 98: cout<<"t";break;
					case 99: cout<<"u";break;
					case 100: cout<<"v";break;
					case 101: cout<<"w";break;
					case 102: cout<<"x";break;
					case 103: cout<<"y";break;
					case 104: cout<<"z";break;
				}
				i+=2;
			}
			
			
		}
		cout<<"\n";
		
	}
	
	return 0;
}
